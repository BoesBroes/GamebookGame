#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_BytePointerData
#include <lime/utils/BytePointerData.h>
#endif
#ifndef INCLUDED_lime_utils__BytePointer_BytePointer_Impl_
#include <lime/utils/_BytePointer/BytePointer_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl_display3D__Program3D_Uniform
#include <openfl/display3D/_Program3D/Uniform.h>
#endif
namespace openfl{
namespace display3D{
namespace _Program3D{

Void Uniform_obj::__construct()
{
{
	this->isDirty = true;
	::lime::utils::BytePointerData tmp;
	{
		int offset = (int)0;
		::lime::utils::BytePointerData tmp1 = ::lime::utils::BytePointerData_obj::__new(null(),offset);
		tmp = tmp1;
	}
	this->regDataPointer = tmp;
}
;
	return null();
}

//Uniform_obj::~Uniform_obj() { }

Dynamic Uniform_obj::__CreateEmpty() { return  new Uniform_obj; }
hx::ObjectPtr< Uniform_obj > Uniform_obj::__new()
{  hx::ObjectPtr< Uniform_obj > _result_ = new Uniform_obj();
	_result_->__construct();
	return _result_;}

Dynamic Uniform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Uniform_obj > _result_ = new Uniform_obj();
	_result_->__construct();
	return _result_;}

Void Uniform_obj::flush( ){
{
		int tmp = this->regIndex;
		int tmp1 = (tmp * (int)4);
		int index = tmp1;
		{
			int tmp2 = this->type;
			int _g = tmp2;
			int tmp3 = _g;
			switch( (int)(tmp3)){
				case (int)35674: {
					int tmp4 = index;
					int tmp5 = this->size;
					int tmp6 = (tmp5 * (int)2);
					int tmp7 = (tmp6 * (int)2);
					::lime::utils::BytePointerData tmp8 = this->__getRegisters(tmp4,tmp7);
					Float tmp9 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(tmp8);
					Float v = tmp9;
					::lime::_backend::native::NativeGLRenderContext tmp10 = ::lime::graphics::opengl::GL_obj::context;
					int tmp11 = this->location;
					int tmp12 = this->size;
					Float tmp13 = v;
					tmp10->uniformMatrix2fv(tmp11,tmp12,false,tmp13);
				}
				;break;
				case (int)35675: {
					int tmp4 = index;
					int tmp5 = this->size;
					int tmp6 = (tmp5 * (int)3);
					int tmp7 = (tmp6 * (int)3);
					::lime::utils::BytePointerData tmp8 = this->__getRegisters(tmp4,tmp7);
					Float tmp9 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(tmp8);
					Float v = tmp9;
					::lime::_backend::native::NativeGLRenderContext tmp10 = ::lime::graphics::opengl::GL_obj::context;
					int tmp11 = this->location;
					int tmp12 = this->size;
					Float tmp13 = v;
					tmp10->uniformMatrix3fv(tmp11,tmp12,false,tmp13);
				}
				;break;
				case (int)35676: {
					int tmp4 = index;
					int tmp5 = this->size;
					int tmp6 = (tmp5 * (int)4);
					int tmp7 = (tmp6 * (int)4);
					::lime::utils::BytePointerData tmp8 = this->__getRegisters(tmp4,tmp7);
					Float tmp9 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(tmp8);
					Float v = tmp9;
					::lime::_backend::native::NativeGLRenderContext tmp10 = ::lime::graphics::opengl::GL_obj::context;
					int tmp11 = this->location;
					int tmp12 = this->size;
					Float tmp13 = v;
					tmp10->uniformMatrix4fv(tmp11,tmp12,false,tmp13);
				}
				;break;
				case (int)35664: {
					int tmp4 = index;
					int tmp5 = this->regCount;
					int tmp6 = (tmp5 * (int)2);
					::lime::utils::BytePointerData tmp7 = this->__getRegisters(tmp4,tmp6);
					Float tmp8 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(tmp7);
					Float v = tmp8;
					::lime::_backend::native::NativeGLRenderContext tmp9 = ::lime::graphics::opengl::GL_obj::context;
					int tmp10 = this->location;
					int tmp11 = this->regCount;
					Float tmp12 = v;
					tmp9->uniform2fv(tmp10,tmp11,tmp12);
				}
				;break;
				case (int)35665: {
					int tmp4 = index;
					int tmp5 = this->regCount;
					int tmp6 = (tmp5 * (int)3);
					::lime::utils::BytePointerData tmp7 = this->__getRegisters(tmp4,tmp6);
					Float tmp8 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(tmp7);
					Float v = tmp8;
					::lime::_backend::native::NativeGLRenderContext tmp9 = ::lime::graphics::opengl::GL_obj::context;
					int tmp10 = this->location;
					int tmp11 = this->regCount;
					Float tmp12 = v;
					tmp9->uniform3fv(tmp10,tmp11,tmp12);
				}
				;break;
				case (int)35666: {
					int tmp4 = index;
					int tmp5 = this->regCount;
					int tmp6 = (tmp5 * (int)4);
					::lime::utils::BytePointerData tmp7 = this->__getRegisters(tmp4,tmp6);
					Float tmp8 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(tmp7);
					Float v = tmp8;
					::lime::_backend::native::NativeGLRenderContext tmp9 = ::lime::graphics::opengl::GL_obj::context;
					int tmp10 = this->location;
					int tmp11 = this->regCount;
					Float tmp12 = v;
					tmp9->uniform4fv(tmp10,tmp11,tmp12);
				}
				;break;
				default: {
					int tmp4 = index;
					int tmp5 = this->regCount;
					int tmp6 = (tmp5 * (int)4);
					::lime::utils::BytePointerData tmp7 = this->__getRegisters(tmp4,tmp6);
					Float tmp8 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(tmp7);
					Float v = tmp8;
					::lime::_backend::native::NativeGLRenderContext tmp9 = ::lime::graphics::opengl::GL_obj::context;
					int tmp10 = this->location;
					int tmp11 = this->regCount;
					Float tmp12 = v;
					tmp9->uniform4fv(tmp10,tmp11,tmp12);
				}
			}
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Uniform_obj,flush,(void))

::lime::utils::BytePointerData Uniform_obj::__getRegisters( int index,int size){
	::lime::utils::BytePointerData tmp = this->regDataPointer;
	::lime::utils::ArrayBufferView tmp1 = this->regData;
	int tmp2 = (index * (int)4);
	::lime::utils::_BytePointer::BytePointer_Impl__obj::set(tmp,null(),tmp1,null(),tmp2);
	::lime::utils::BytePointerData tmp3 = this->regDataPointer;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(Uniform_obj,__getRegisters,return )


Uniform_obj::Uniform_obj()
{
}

void Uniform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Uniform);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(location,"location");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(regData,"regData");
	HX_MARK_MEMBER_NAME(regIndex,"regIndex");
	HX_MARK_MEMBER_NAME(regCount,"regCount");
	HX_MARK_MEMBER_NAME(isDirty,"isDirty");
	HX_MARK_MEMBER_NAME(regDataPointer,"regDataPointer");
	HX_MARK_END_CLASS();
}

void Uniform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(location,"location");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(regData,"regData");
	HX_VISIT_MEMBER_NAME(regIndex,"regIndex");
	HX_VISIT_MEMBER_NAME(regCount,"regCount");
	HX_VISIT_MEMBER_NAME(isDirty,"isDirty");
	HX_VISIT_MEMBER_NAME(regDataPointer,"regDataPointer");
}

Dynamic Uniform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"regData") ) { return regData; }
		if (HX_FIELD_EQ(inName,"isDirty") ) { return isDirty; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"location") ) { return location; }
		if (HX_FIELD_EQ(inName,"regIndex") ) { return regIndex; }
		if (HX_FIELD_EQ(inName,"regCount") ) { return regCount; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"regDataPointer") ) { return regDataPointer; }
		if (HX_FIELD_EQ(inName,"__getRegisters") ) { return __getRegisters_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Uniform_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"regData") ) { regData=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isDirty") ) { isDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"location") ) { location=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"regIndex") ) { regIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"regCount") ) { regCount=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"regDataPointer") ) { regDataPointer=inValue.Cast< ::lime::utils::BytePointerData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Uniform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("location","\x35","\x6e","\x46","\xe5"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("regData","\x9e","\x95","\x1c","\x62"));
	outFields->push(HX_HCSTRING("regIndex","\x1e","\xe1","\x72","\x60"));
	outFields->push(HX_HCSTRING("regCount","\xdb","\x8a","\xc1","\xec"));
	outFields->push(HX_HCSTRING("isDirty","\xc8","\xf3","\x55","\x76"));
	outFields->push(HX_HCSTRING("regDataPointer","\xbf","\x62","\x65","\x21"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Uniform_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(Uniform_obj,location),HX_HCSTRING("location","\x35","\x6e","\x46","\xe5")},
	{hx::fsInt,(int)offsetof(Uniform_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(Uniform_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(Uniform_obj,regData),HX_HCSTRING("regData","\x9e","\x95","\x1c","\x62")},
	{hx::fsInt,(int)offsetof(Uniform_obj,regIndex),HX_HCSTRING("regIndex","\x1e","\xe1","\x72","\x60")},
	{hx::fsInt,(int)offsetof(Uniform_obj,regCount),HX_HCSTRING("regCount","\xdb","\x8a","\xc1","\xec")},
	{hx::fsBool,(int)offsetof(Uniform_obj,isDirty),HX_HCSTRING("isDirty","\xc8","\xf3","\x55","\x76")},
	{hx::fsObject /*::lime::utils::BytePointerData*/ ,(int)offsetof(Uniform_obj,regDataPointer),HX_HCSTRING("regDataPointer","\xbf","\x62","\x65","\x21")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("location","\x35","\x6e","\x46","\xe5"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("regData","\x9e","\x95","\x1c","\x62"),
	HX_HCSTRING("regIndex","\x1e","\xe1","\x72","\x60"),
	HX_HCSTRING("regCount","\xdb","\x8a","\xc1","\xec"),
	HX_HCSTRING("isDirty","\xc8","\xf3","\x55","\x76"),
	HX_HCSTRING("regDataPointer","\xbf","\x62","\x65","\x21"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("__getRegisters","\x5a","\x10","\x29","\xeb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Uniform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Uniform_obj::__mClass,"__mClass");
};

#endif

hx::Class Uniform_obj::__mClass;

void Uniform_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Program3D.Uniform","\x35","\x84","\x9c","\x78");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Uniform_obj >;
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
} // end namespace _Program3D
