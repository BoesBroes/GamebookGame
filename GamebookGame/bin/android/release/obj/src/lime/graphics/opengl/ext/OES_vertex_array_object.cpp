#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_vertex_array_object
#include <lime/graphics/opengl/ext/OES_vertex_array_object.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

Void OES_vertex_array_object_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.opengl.ext.OES_vertex_array_object","new",0x554cbf6e,"lime.graphics.opengl.ext.OES_vertex_array_object.new","lime/graphics/opengl/ext/OES_vertex_array_object.hx",10,0xe371b2e4)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13)
	this->VERTEX_ARRAY_BINDING_OES = (int)34229;
}
;
	return null();
}

//OES_vertex_array_object_obj::~OES_vertex_array_object_obj() { }

Dynamic OES_vertex_array_object_obj::__CreateEmpty() { return  new OES_vertex_array_object_obj; }
hx::ObjectPtr< OES_vertex_array_object_obj > OES_vertex_array_object_obj::__new()
{  hx::ObjectPtr< OES_vertex_array_object_obj > _result_ = new OES_vertex_array_object_obj();
	_result_->__construct();
	return _result_;}

Dynamic OES_vertex_array_object_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OES_vertex_array_object_obj > _result_ = new OES_vertex_array_object_obj();
	_result_->__construct();
	return _result_;}

Dynamic OES_vertex_array_object_obj::createVertexArrayOES( ){
	HX_STACK_FRAME("lime.graphics.opengl.ext.OES_vertex_array_object","createVertexArrayOES",0xc2081f56,"lime.graphics.opengl.ext.OES_vertex_array_object.createVertexArrayOES","lime/graphics/opengl/ext/OES_vertex_array_object.hx",23,0xe371b2e4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(23)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OES_vertex_array_object_obj,createVertexArrayOES,return )

Void OES_vertex_array_object_obj::deleteVertexArrayOES( Dynamic arrayObject){
{
		HX_STACK_FRAME("lime.graphics.opengl.ext.OES_vertex_array_object","deleteVertexArrayOES",0x734d8cc5,"lime.graphics.opengl.ext.OES_vertex_array_object.deleteVertexArrayOES","lime/graphics/opengl/ext/OES_vertex_array_object.hx",24,0xe371b2e4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(arrayObject,"arrayObject")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OES_vertex_array_object_obj,deleteVertexArrayOES,(void))

bool OES_vertex_array_object_obj::isVertexArrayOES( Dynamic arrayObject){
	HX_STACK_FRAME("lime.graphics.opengl.ext.OES_vertex_array_object","isVertexArrayOES",0x250197c4,"lime.graphics.opengl.ext.OES_vertex_array_object.isVertexArrayOES","lime/graphics/opengl/ext/OES_vertex_array_object.hx",25,0xe371b2e4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(arrayObject,"arrayObject")
	HX_STACK_LINE(25)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(OES_vertex_array_object_obj,isVertexArrayOES,return )

Void OES_vertex_array_object_obj::bindVertexArrayOES( Dynamic arrayObject){
{
		HX_STACK_FRAME("lime.graphics.opengl.ext.OES_vertex_array_object","bindVertexArrayOES",0x852c8d57,"lime.graphics.opengl.ext.OES_vertex_array_object.bindVertexArrayOES","lime/graphics/opengl/ext/OES_vertex_array_object.hx",26,0xe371b2e4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(arrayObject,"arrayObject")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OES_vertex_array_object_obj,bindVertexArrayOES,(void))


OES_vertex_array_object_obj::OES_vertex_array_object_obj()
{
}

Dynamic OES_vertex_array_object_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"isVertexArrayOES") ) { return isVertexArrayOES_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bindVertexArrayOES") ) { return bindVertexArrayOES_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createVertexArrayOES") ) { return createVertexArrayOES_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteVertexArrayOES") ) { return deleteVertexArrayOES_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"VERTEX_ARRAY_BINDING_OES") ) { return VERTEX_ARRAY_BINDING_OES; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OES_vertex_array_object_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 24:
		if (HX_FIELD_EQ(inName,"VERTEX_ARRAY_BINDING_OES") ) { VERTEX_ARRAY_BINDING_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_vertex_array_object_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("VERTEX_ARRAY_BINDING_OES","\x42","\xc3","\x87","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OES_vertex_array_object_obj,VERTEX_ARRAY_BINDING_OES),HX_HCSTRING("VERTEX_ARRAY_BINDING_OES","\x42","\xc3","\x87","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("VERTEX_ARRAY_BINDING_OES","\x42","\xc3","\x87","\x4b"),
	HX_HCSTRING("createVertexArrayOES","\x24","\xde","\x86","\xe0"),
	HX_HCSTRING("deleteVertexArrayOES","\x93","\x4b","\xcc","\x91"),
	HX_HCSTRING("isVertexArrayOES","\x92","\x57","\xa9","\xbe"),
	HX_HCSTRING("bindVertexArrayOES","\xa5","\x5c","\x1e","\xa8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OES_vertex_array_object_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OES_vertex_array_object_obj::__mClass,"__mClass");
};

#endif

hx::Class OES_vertex_array_object_obj::__mClass;

void OES_vertex_array_object_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.OES_vertex_array_object","\x7c","\x30","\x89","\x1c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OES_vertex_array_object_obj >;
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
