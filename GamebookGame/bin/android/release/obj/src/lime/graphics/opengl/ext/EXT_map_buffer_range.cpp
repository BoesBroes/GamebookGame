#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_map_buffer_range
#include <lime/graphics/opengl/ext/EXT_map_buffer_range.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void EXT_map_buffer_range_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.EXT_map_buffer_range","new",0x9b075e93,"lime.graphics.opengl.ext.EXT_map_buffer_range.new","lime/graphics/opengl/ext/EXT_map_buffer_range.hx",6,0x29d83fdb)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	this->MAP_UNSYNCHRONIZED_BIT_EXT = (int)32;
	HX_STACK_LINE(13)
	this->MAP_FLUSH_EXPLICIT_BIT_EXT = (int)16;
	HX_STACK_LINE(12)
	this->MAP_INVALIDATE_BUFFER_BIT_EXT = (int)8;
	HX_STACK_LINE(11)
	this->MAP_INVALIDATE_RANGE_BIT_EXT = (int)4;
	HX_STACK_LINE(10)
	this->MAP_WRITE_BIT_EXT = (int)2;
	HX_STACK_LINE(9)
	this->MAP_READ_BIT_EXT = (int)1;
}
;
	return null();
}

//EXT_map_buffer_range_obj::~EXT_map_buffer_range_obj() { }

Dynamic EXT_map_buffer_range_obj::__CreateEmpty() { return  new EXT_map_buffer_range_obj; }
hx::ObjectPtr< EXT_map_buffer_range_obj > EXT_map_buffer_range_obj::__new()
{  hx::ObjectPtr< EXT_map_buffer_range_obj > _result_ = new EXT_map_buffer_range_obj();
	_result_->__construct();
	return _result_;}

Dynamic EXT_map_buffer_range_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EXT_map_buffer_range_obj > _result_ = new EXT_map_buffer_range_obj();
	_result_->__construct();
	return _result_;}


EXT_map_buffer_range_obj::EXT_map_buffer_range_obj()
{
}

Dynamic EXT_map_buffer_range_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"MAP_READ_BIT_EXT") ) { return MAP_READ_BIT_EXT; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"MAP_WRITE_BIT_EXT") ) { return MAP_WRITE_BIT_EXT; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"MAP_FLUSH_EXPLICIT_BIT_EXT") ) { return MAP_FLUSH_EXPLICIT_BIT_EXT; }
		if (HX_FIELD_EQ(inName,"MAP_UNSYNCHRONIZED_BIT_EXT") ) { return MAP_UNSYNCHRONIZED_BIT_EXT; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"MAP_INVALIDATE_RANGE_BIT_EXT") ) { return MAP_INVALIDATE_RANGE_BIT_EXT; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"MAP_INVALIDATE_BUFFER_BIT_EXT") ) { return MAP_INVALIDATE_BUFFER_BIT_EXT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EXT_map_buffer_range_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"MAP_READ_BIT_EXT") ) { MAP_READ_BIT_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"MAP_WRITE_BIT_EXT") ) { MAP_WRITE_BIT_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"MAP_FLUSH_EXPLICIT_BIT_EXT") ) { MAP_FLUSH_EXPLICIT_BIT_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAP_UNSYNCHRONIZED_BIT_EXT") ) { MAP_UNSYNCHRONIZED_BIT_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"MAP_INVALIDATE_RANGE_BIT_EXT") ) { MAP_INVALIDATE_RANGE_BIT_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"MAP_INVALIDATE_BUFFER_BIT_EXT") ) { MAP_INVALIDATE_BUFFER_BIT_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_map_buffer_range_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("MAP_READ_BIT_EXT","\x69","\xde","\x3b","\xdb"));
	outFields->push(HX_HCSTRING("MAP_WRITE_BIT_EXT","\xac","\x69","\x24","\xf9"));
	outFields->push(HX_HCSTRING("MAP_INVALIDATE_RANGE_BIT_EXT","\x2c","\x0f","\xa4","\xdb"));
	outFields->push(HX_HCSTRING("MAP_INVALIDATE_BUFFER_BIT_EXT","\xf1","\x1b","\x6e","\x04"));
	outFields->push(HX_HCSTRING("MAP_FLUSH_EXPLICIT_BIT_EXT","\x02","\x81","\x37","\xcb"));
	outFields->push(HX_HCSTRING("MAP_UNSYNCHRONIZED_BIT_EXT","\xc0","\x12","\x90","\xa0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_map_buffer_range_obj,MAP_READ_BIT_EXT),HX_HCSTRING("MAP_READ_BIT_EXT","\x69","\xde","\x3b","\xdb")},
	{hx::fsInt,(int)offsetof(EXT_map_buffer_range_obj,MAP_WRITE_BIT_EXT),HX_HCSTRING("MAP_WRITE_BIT_EXT","\xac","\x69","\x24","\xf9")},
	{hx::fsInt,(int)offsetof(EXT_map_buffer_range_obj,MAP_INVALIDATE_RANGE_BIT_EXT),HX_HCSTRING("MAP_INVALIDATE_RANGE_BIT_EXT","\x2c","\x0f","\xa4","\xdb")},
	{hx::fsInt,(int)offsetof(EXT_map_buffer_range_obj,MAP_INVALIDATE_BUFFER_BIT_EXT),HX_HCSTRING("MAP_INVALIDATE_BUFFER_BIT_EXT","\xf1","\x1b","\x6e","\x04")},
	{hx::fsInt,(int)offsetof(EXT_map_buffer_range_obj,MAP_FLUSH_EXPLICIT_BIT_EXT),HX_HCSTRING("MAP_FLUSH_EXPLICIT_BIT_EXT","\x02","\x81","\x37","\xcb")},
	{hx::fsInt,(int)offsetof(EXT_map_buffer_range_obj,MAP_UNSYNCHRONIZED_BIT_EXT),HX_HCSTRING("MAP_UNSYNCHRONIZED_BIT_EXT","\xc0","\x12","\x90","\xa0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("MAP_READ_BIT_EXT","\x69","\xde","\x3b","\xdb"),
	HX_HCSTRING("MAP_WRITE_BIT_EXT","\xac","\x69","\x24","\xf9"),
	HX_HCSTRING("MAP_INVALIDATE_RANGE_BIT_EXT","\x2c","\x0f","\xa4","\xdb"),
	HX_HCSTRING("MAP_INVALIDATE_BUFFER_BIT_EXT","\xf1","\x1b","\x6e","\x04"),
	HX_HCSTRING("MAP_FLUSH_EXPLICIT_BIT_EXT","\x02","\x81","\x37","\xcb"),
	HX_HCSTRING("MAP_UNSYNCHRONIZED_BIT_EXT","\xc0","\x12","\x90","\xa0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_map_buffer_range_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_map_buffer_range_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_map_buffer_range_obj::__mClass;

void EXT_map_buffer_range_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_map_buffer_range","\x21","\x19","\x92","\xc6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_map_buffer_range_obj >;
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
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
