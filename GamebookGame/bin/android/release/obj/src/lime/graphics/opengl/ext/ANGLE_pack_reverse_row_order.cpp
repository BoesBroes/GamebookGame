#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_pack_reverse_row_order
#include <lime/graphics/opengl/ext/ANGLE_pack_reverse_row_order.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void ANGLE_pack_reverse_row_order_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.ANGLE_pack_reverse_row_order","new",0xf68bfd86,"lime.graphics.opengl.ext.ANGLE_pack_reverse_row_order.new","lime/graphics/opengl/ext/ANGLE_pack_reverse_row_order.hx",6,0xfa7dce48)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->PACK_REVERSE_ROW_ORDER_ANGLE = (int)37796;
}
;
	return null();
}

//ANGLE_pack_reverse_row_order_obj::~ANGLE_pack_reverse_row_order_obj() { }

Dynamic ANGLE_pack_reverse_row_order_obj::__CreateEmpty() { return  new ANGLE_pack_reverse_row_order_obj; }
hx::ObjectPtr< ANGLE_pack_reverse_row_order_obj > ANGLE_pack_reverse_row_order_obj::__new()
{  hx::ObjectPtr< ANGLE_pack_reverse_row_order_obj > _result_ = new ANGLE_pack_reverse_row_order_obj();
	_result_->__construct();
	return _result_;}

Dynamic ANGLE_pack_reverse_row_order_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ANGLE_pack_reverse_row_order_obj > _result_ = new ANGLE_pack_reverse_row_order_obj();
	_result_->__construct();
	return _result_;}


ANGLE_pack_reverse_row_order_obj::ANGLE_pack_reverse_row_order_obj()
{
}

Dynamic ANGLE_pack_reverse_row_order_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 28:
		if (HX_FIELD_EQ(inName,"PACK_REVERSE_ROW_ORDER_ANGLE") ) { return PACK_REVERSE_ROW_ORDER_ANGLE; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ANGLE_pack_reverse_row_order_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 28:
		if (HX_FIELD_EQ(inName,"PACK_REVERSE_ROW_ORDER_ANGLE") ) { PACK_REVERSE_ROW_ORDER_ANGLE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ANGLE_pack_reverse_row_order_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("PACK_REVERSE_ROW_ORDER_ANGLE","\xba","\xed","\xcd","\x94"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ANGLE_pack_reverse_row_order_obj,PACK_REVERSE_ROW_ORDER_ANGLE),HX_HCSTRING("PACK_REVERSE_ROW_ORDER_ANGLE","\xba","\xed","\xcd","\x94")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("PACK_REVERSE_ROW_ORDER_ANGLE","\xba","\xed","\xcd","\x94"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ANGLE_pack_reverse_row_order_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ANGLE_pack_reverse_row_order_obj::__mClass,"__mClass");
};

#endif

hx::Class ANGLE_pack_reverse_row_order_obj::__mClass;

void ANGLE_pack_reverse_row_order_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.ANGLE_pack_reverse_row_order","\x94","\x82","\x99","\xc8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ANGLE_pack_reverse_row_order_obj >;
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
