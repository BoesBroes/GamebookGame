#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_instanced_arrays
#include <lime/graphics/opengl/ext/ANGLE_instanced_arrays.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void ANGLE_instanced_arrays_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.ANGLE_instanced_arrays","new",0x4559516a,"lime.graphics.opengl.ext.ANGLE_instanced_arrays.new","lime/graphics/opengl/ext/ANGLE_instanced_arrays.hx",10,0x2d555864)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13)
	this->VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE = (int)35070;
}
;
	return null();
}

//ANGLE_instanced_arrays_obj::~ANGLE_instanced_arrays_obj() { }

Dynamic ANGLE_instanced_arrays_obj::__CreateEmpty() { return  new ANGLE_instanced_arrays_obj; }
hx::ObjectPtr< ANGLE_instanced_arrays_obj > ANGLE_instanced_arrays_obj::__new()
{  hx::ObjectPtr< ANGLE_instanced_arrays_obj > _result_ = new ANGLE_instanced_arrays_obj();
	_result_->__construct();
	return _result_;}

Dynamic ANGLE_instanced_arrays_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ANGLE_instanced_arrays_obj > _result_ = new ANGLE_instanced_arrays_obj();
	_result_->__construct();
	return _result_;}

Void ANGLE_instanced_arrays_obj::drawArraysInstancedANGLE( int mode,int first,int count,int primcount){
{
		HX_STACK_FRAME("lime.graphics.opengl.ext.ANGLE_instanced_arrays","drawArraysInstancedANGLE",0xb2062558,"lime.graphics.opengl.ext.ANGLE_instanced_arrays.drawArraysInstancedANGLE","lime/graphics/opengl/ext/ANGLE_instanced_arrays.hx",28,0x2d555864)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_ARG(first,"first")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(primcount,"primcount")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ANGLE_instanced_arrays_obj,drawArraysInstancedANGLE,(void))

Void ANGLE_instanced_arrays_obj::drawElementsInstancedANGLE( int mode,int count,int type,int offset,int primcount){
{
		HX_STACK_FRAME("lime.graphics.opengl.ext.ANGLE_instanced_arrays","drawElementsInstancedANGLE",0x203b0e15,"lime.graphics.opengl.ext.ANGLE_instanced_arrays.drawElementsInstancedANGLE","lime/graphics/opengl/ext/ANGLE_instanced_arrays.hx",29,0x2d555864)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(primcount,"primcount")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(ANGLE_instanced_arrays_obj,drawElementsInstancedANGLE,(void))

Void ANGLE_instanced_arrays_obj::vertexAttribDivisorANGLE( int index,int divisor){
{
		HX_STACK_FRAME("lime.graphics.opengl.ext.ANGLE_instanced_arrays","vertexAttribDivisorANGLE",0x66bdeb39,"lime.graphics.opengl.ext.ANGLE_instanced_arrays.vertexAttribDivisorANGLE","lime/graphics/opengl/ext/ANGLE_instanced_arrays.hx",30,0x2d555864)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(divisor,"divisor")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ANGLE_instanced_arrays_obj,vertexAttribDivisorANGLE,(void))


ANGLE_instanced_arrays_obj::ANGLE_instanced_arrays_obj()
{
}

Dynamic ANGLE_instanced_arrays_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 24:
		if (HX_FIELD_EQ(inName,"drawArraysInstancedANGLE") ) { return drawArraysInstancedANGLE_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttribDivisorANGLE") ) { return vertexAttribDivisorANGLE_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"drawElementsInstancedANGLE") ) { return drawElementsInstancedANGLE_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE") ) { return VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ANGLE_instanced_arrays_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 33:
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE") ) { VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ANGLE_instanced_arrays_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE","\xb2","\x5f","\xa5","\x51"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ANGLE_instanced_arrays_obj,VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE),HX_HCSTRING("VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE","\xb2","\x5f","\xa5","\x51")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE","\xb2","\x5f","\xa5","\x51"),
	HX_HCSTRING("drawArraysInstancedANGLE","\xa2","\x5e","\xa2","\x84"),
	HX_HCSTRING("drawElementsInstancedANGLE","\xdf","\xad","\x4f","\xfd"),
	HX_HCSTRING("vertexAttribDivisorANGLE","\x83","\x24","\x5a","\x39"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ANGLE_instanced_arrays_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ANGLE_instanced_arrays_obj::__mClass,"__mClass");
};

#endif

hx::Class ANGLE_instanced_arrays_obj::__mClass;

void ANGLE_instanced_arrays_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.ANGLE_instanced_arrays","\x78","\x14","\xee","\x7b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ANGLE_instanced_arrays_obj >;
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
