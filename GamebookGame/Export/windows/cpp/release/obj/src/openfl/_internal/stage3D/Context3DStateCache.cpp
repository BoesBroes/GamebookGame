#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_Context3DStateCache
#include <openfl/_internal/stage3D/Context3DStateCache.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
namespace openfl{
namespace _internal{
namespace stage3D{

Void Context3DStateCache_obj::__construct()
{
{
	struct _Function_1_1{
		inline static ::openfl::_Vector::FloatVector Block( ){
			{
				bool fixed = null();
				::openfl::_Vector::FloatVector tmp = ::openfl::_Vector::FloatVector_obj::__new((int)4096,fixed,null());
				::openfl::_Vector::FloatVector tmp1 = tmp;
				return tmp1;
			}
			return null();
		}
	};
	this->_registers = _Function_1_1::Block();
	this->clearSettings();
}
;
	return null();
}

//Context3DStateCache_obj::~Context3DStateCache_obj() { }

Dynamic Context3DStateCache_obj::__CreateEmpty() { return  new Context3DStateCache_obj; }
hx::ObjectPtr< Context3DStateCache_obj > Context3DStateCache_obj::__new()
{  hx::ObjectPtr< Context3DStateCache_obj > _result_ = new Context3DStateCache_obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DStateCache_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3DStateCache_obj > _result_ = new Context3DStateCache_obj();
	_result_->__construct();
	return _result_;}

Void Context3DStateCache_obj::clearRegisters( ){
{
		int tmp = (int)4096;
		int numFloats = tmp;
		{
			int _g = (int)0;
			while((true)){
				bool tmp1 = (_g < numFloats);
				bool tmp2 = !(tmp1);
				if ((tmp2)){
					break;
				}
				int tmp3 = (_g)++;
				int c = tmp3;
				::openfl::_Vector::FloatVector tmp4 = this->_registers;
				int tmp5 = c;
				Float tmp6 = tmp4->set(tmp5,((Float)-999999999.0));
				tmp6;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3DStateCache_obj,clearRegisters,(void))

Void Context3DStateCache_obj::clearSettings( ){
{
		this->_srcBlendFactor = null();
		this->_destBlendFactor = null();
		this->_depthTestEnabled = false;
		this->_depthTestMask = false;
		this->_depthTestCompareMode = null();
		this->_program = null();
		this->_cullingMode = null();
		this->_activeTexture = (int)-1;
		this->_activeVertexArray = (int)-1;
		this->_viewportOriginX = (int)-1;
		this->_viewportOriginY = (int)-1;
		this->_viewportWidth = (int)-1;
		this->_viewportHeight = (int)-1;
		this->clearRegisters();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3DStateCache_obj,clearSettings,(void))

bool Context3DStateCache_obj::updateActiveTextureSample( int texture){
	bool tmp = false;
	bool tmp1;
	if ((tmp)){
		int tmp2 = texture;
		int tmp3 = this->_activeTexture;
		int tmp4 = tmp3;
		tmp1 = (tmp2 == tmp4);
	}
	else{
		tmp1 = false;
	}
	if ((tmp1)){
		return false;
	}
	this->_activeTexture = texture;
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateActiveTextureSample,return )

bool Context3DStateCache_obj::updateActiveVertexArray( int vertexArray){
	bool tmp = false;
	bool tmp1;
	if ((tmp)){
		int tmp2 = vertexArray;
		int tmp3 = this->_activeVertexArray;
		int tmp4 = tmp3;
		tmp1 = (tmp2 == tmp4);
	}
	else{
		tmp1 = false;
	}
	if ((tmp1)){
		return false;
	}
	this->_activeVertexArray = vertexArray;
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateActiveVertexArray,return )

bool Context3DStateCache_obj::updateBlendDestFactor( Dynamic factor){
	bool tmp = false;
	bool tmp1;
	if ((tmp)){
		Dynamic tmp2 = factor;
		Dynamic tmp3 = this->_destBlendFactor;
		Dynamic tmp4 = tmp3;
		tmp1 = (tmp2 == tmp4);
	}
	else{
		tmp1 = false;
	}
	if ((tmp1)){
		return false;
	}
	this->_destBlendFactor = factor;
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateBlendDestFactor,return )

bool Context3DStateCache_obj::updateBlendSrcFactor( Dynamic factor){
	bool tmp = false;
	bool tmp1;
	if ((tmp)){
		Dynamic tmp2 = factor;
		Dynamic tmp3 = this->_srcBlendFactor;
		Dynamic tmp4 = tmp3;
		tmp1 = (tmp2 == tmp4);
	}
	else{
		tmp1 = false;
	}
	if ((tmp1)){
		return false;
	}
	this->_srcBlendFactor = factor;
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateBlendSrcFactor,return )

bool Context3DStateCache_obj::updateCullingMode( Dynamic cullMode){
	bool tmp = false;
	bool tmp1;
	if ((tmp)){
		Dynamic tmp2 = cullMode;
		Dynamic tmp3 = this->_cullingMode;
		Dynamic tmp4 = tmp3;
		tmp1 = (tmp2 == tmp4);
	}
	else{
		tmp1 = false;
	}
	if ((tmp1)){
		return false;
	}
	this->_cullingMode = cullMode;
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateCullingMode,return )

bool Context3DStateCache_obj::updateDepthCompareMode( Dynamic mode){
	bool tmp = false;
	bool tmp1;
	if ((tmp)){
		Dynamic tmp2 = mode;
		Dynamic tmp3 = this->_depthTestCompareMode;
		Dynamic tmp4 = tmp3;
		tmp1 = (tmp2 == tmp4);
	}
	else{
		tmp1 = false;
	}
	if ((tmp1)){
		return false;
	}
	this->_depthTestCompareMode = mode;
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateDepthCompareMode,return )

bool Context3DStateCache_obj::updateDepthTestEnabled( bool test){
	bool tmp = false;
	bool tmp1;
	if ((tmp)){
		bool tmp2 = test;
		bool tmp3 = this->_depthTestEnabled;
		bool tmp4 = tmp3;
		tmp1 = (tmp2 == tmp4);
	}
	else{
		tmp1 = false;
	}
	if ((tmp1)){
		return false;
	}
	this->_depthTestEnabled = test;
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateDepthTestEnabled,return )

bool Context3DStateCache_obj::updateDepthTestMask( bool mask){
	bool tmp = false;
	bool tmp1;
	if ((tmp)){
		bool tmp2 = mask;
		bool tmp3 = this->_depthTestMask;
		bool tmp4 = tmp3;
		tmp1 = (tmp2 == tmp4);
	}
	else{
		tmp1 = false;
	}
	if ((tmp1)){
		return false;
	}
	this->_depthTestMask = mask;
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateDepthTestMask,return )

bool Context3DStateCache_obj::updateProgram3D( ::openfl::display3D::Program3D program3d){
	bool tmp = false;
	bool tmp1;
	if ((tmp)){
		::openfl::display3D::Program3D tmp2 = program3d;
		::openfl::display3D::Program3D tmp3 = this->_program;
		::openfl::display3D::Program3D tmp4 = tmp3;
		tmp1 = (tmp2 == tmp4);
	}
	else{
		tmp1 = false;
	}
	if ((tmp1)){
		return false;
	}
	this->_program = program3d;
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateProgram3D,return )

bool Context3DStateCache_obj::updateRegisters( ::openfl::_Vector::FloatVector mTemp,int startRegister,int numRegisters){
	return true;
}


HX_DEFINE_DYNAMIC_FUNC3(Context3DStateCache_obj,updateRegisters,return )

bool Context3DStateCache_obj::updateViewport( int originX,int originY,int width,int height){
	bool tmp = false;
	bool tmp1 = tmp;
	bool tmp2;
	if ((tmp1)){
		int tmp3 = this->_viewportOriginX;
		int tmp4 = tmp3;
		int tmp5 = tmp4;
		int tmp6 = originX;
		tmp2 = (tmp5 == tmp6);
	}
	else{
		tmp2 = false;
	}
	bool tmp3 = tmp2;
	bool tmp4;
	if ((tmp3)){
		int tmp5 = this->_viewportOriginY;
		int tmp6 = tmp5;
		int tmp7 = tmp6;
		int tmp8 = originY;
		tmp4 = (tmp7 == tmp8);
	}
	else{
		tmp4 = false;
	}
	bool tmp5 = tmp4;
	bool tmp6;
	if ((tmp5)){
		int tmp7 = this->_viewportWidth;
		int tmp8 = tmp7;
		int tmp9 = tmp8;
		int tmp10 = width;
		tmp6 = (tmp9 == tmp10);
	}
	else{
		tmp6 = false;
	}
	bool tmp7;
	if ((tmp6)){
		int tmp8 = this->_viewportHeight;
		int tmp9 = tmp8;
		int tmp10 = height;
		tmp7 = (tmp9 == tmp10);
	}
	else{
		tmp7 = false;
	}
	if ((tmp7)){
		return false;
	}
	this->_viewportOriginX = originX;
	this->_viewportOriginY = originY;
	this->_viewportWidth = width;
	this->_viewportHeight = height;
	return true;
}


HX_DEFINE_DYNAMIC_FUNC4(Context3DStateCache_obj,updateViewport,return )

int Context3DStateCache_obj::FLOATS_PER_REGISTER;

int Context3DStateCache_obj::MAX_NUM_REGISTERS;

bool Context3DStateCache_obj::disableCache;


Context3DStateCache_obj::Context3DStateCache_obj()
{
}

void Context3DStateCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Context3DStateCache);
	HX_MARK_MEMBER_NAME(_activeTexture,"_activeTexture");
	HX_MARK_MEMBER_NAME(_activeVertexArray,"_activeVertexArray");
	HX_MARK_MEMBER_NAME(_cullingMode,"_cullingMode");
	HX_MARK_MEMBER_NAME(_depthTestCompareMode,"_depthTestCompareMode");
	HX_MARK_MEMBER_NAME(_depthTestEnabled,"_depthTestEnabled");
	HX_MARK_MEMBER_NAME(_depthTestMask,"_depthTestMask");
	HX_MARK_MEMBER_NAME(_destBlendFactor,"_destBlendFactor");
	HX_MARK_MEMBER_NAME(_program,"_program");
	HX_MARK_MEMBER_NAME(_registers,"_registers");
	HX_MARK_MEMBER_NAME(_srcBlendFactor,"_srcBlendFactor");
	HX_MARK_MEMBER_NAME(_viewportHeight,"_viewportHeight");
	HX_MARK_MEMBER_NAME(_viewportOriginX,"_viewportOriginX");
	HX_MARK_MEMBER_NAME(_viewportOriginY,"_viewportOriginY");
	HX_MARK_MEMBER_NAME(_viewportWidth,"_viewportWidth");
	HX_MARK_END_CLASS();
}

void Context3DStateCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_activeTexture,"_activeTexture");
	HX_VISIT_MEMBER_NAME(_activeVertexArray,"_activeVertexArray");
	HX_VISIT_MEMBER_NAME(_cullingMode,"_cullingMode");
	HX_VISIT_MEMBER_NAME(_depthTestCompareMode,"_depthTestCompareMode");
	HX_VISIT_MEMBER_NAME(_depthTestEnabled,"_depthTestEnabled");
	HX_VISIT_MEMBER_NAME(_depthTestMask,"_depthTestMask");
	HX_VISIT_MEMBER_NAME(_destBlendFactor,"_destBlendFactor");
	HX_VISIT_MEMBER_NAME(_program,"_program");
	HX_VISIT_MEMBER_NAME(_registers,"_registers");
	HX_VISIT_MEMBER_NAME(_srcBlendFactor,"_srcBlendFactor");
	HX_VISIT_MEMBER_NAME(_viewportHeight,"_viewportHeight");
	HX_VISIT_MEMBER_NAME(_viewportOriginX,"_viewportOriginX");
	HX_VISIT_MEMBER_NAME(_viewportOriginY,"_viewportOriginY");
	HX_VISIT_MEMBER_NAME(_viewportWidth,"_viewportWidth");
}

Dynamic Context3DStateCache_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_program") ) { return _program; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_registers") ) { return _registers; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_cullingMode") ) { return _cullingMode; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"clearSettings") ) { return clearSettings_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_activeTexture") ) { return _activeTexture; }
		if (HX_FIELD_EQ(inName,"_depthTestMask") ) { return _depthTestMask; }
		if (HX_FIELD_EQ(inName,"_viewportWidth") ) { return _viewportWidth; }
		if (HX_FIELD_EQ(inName,"clearRegisters") ) { return clearRegisters_dyn(); }
		if (HX_FIELD_EQ(inName,"updateViewport") ) { return updateViewport_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_srcBlendFactor") ) { return _srcBlendFactor; }
		if (HX_FIELD_EQ(inName,"_viewportHeight") ) { return _viewportHeight; }
		if (HX_FIELD_EQ(inName,"updateProgram3D") ) { return updateProgram3D_dyn(); }
		if (HX_FIELD_EQ(inName,"updateRegisters") ) { return updateRegisters_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_destBlendFactor") ) { return _destBlendFactor; }
		if (HX_FIELD_EQ(inName,"_viewportOriginX") ) { return _viewportOriginX; }
		if (HX_FIELD_EQ(inName,"_viewportOriginY") ) { return _viewportOriginY; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_depthTestEnabled") ) { return _depthTestEnabled; }
		if (HX_FIELD_EQ(inName,"updateCullingMode") ) { return updateCullingMode_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_activeVertexArray") ) { return _activeVertexArray; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateDepthTestMask") ) { return updateDepthTestMask_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateBlendSrcFactor") ) { return updateBlendSrcFactor_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_depthTestCompareMode") ) { return _depthTestCompareMode; }
		if (HX_FIELD_EQ(inName,"updateBlendDestFactor") ) { return updateBlendDestFactor_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"updateDepthCompareMode") ) { return updateDepthCompareMode_dyn(); }
		if (HX_FIELD_EQ(inName,"updateDepthTestEnabled") ) { return updateDepthTestEnabled_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"updateActiveVertexArray") ) { return updateActiveVertexArray_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"updateActiveTextureSample") ) { return updateActiveTextureSample_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Context3DStateCache_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_program") ) { _program=inValue.Cast< ::openfl::display3D::Program3D >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_registers") ) { _registers=inValue.Cast< ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_cullingMode") ) { _cullingMode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_activeTexture") ) { _activeTexture=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_depthTestMask") ) { _depthTestMask=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewportWidth") ) { _viewportWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_srcBlendFactor") ) { _srcBlendFactor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewportHeight") ) { _viewportHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_destBlendFactor") ) { _destBlendFactor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewportOriginX") ) { _viewportOriginX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewportOriginY") ) { _viewportOriginY=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_depthTestEnabled") ) { _depthTestEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_activeVertexArray") ) { _activeVertexArray=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_depthTestCompareMode") ) { _depthTestCompareMode=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Context3DStateCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_activeTexture","\xf6","\x03","\xfc","\x94"));
	outFields->push(HX_HCSTRING("_activeVertexArray","\x30","\x9c","\x71","\x09"));
	outFields->push(HX_HCSTRING("_cullingMode","\xf4","\x87","\x45","\xc8"));
	outFields->push(HX_HCSTRING("_depthTestCompareMode","\x92","\x77","\x60","\x2d"));
	outFields->push(HX_HCSTRING("_depthTestEnabled","\x6b","\x70","\x8f","\xca"));
	outFields->push(HX_HCSTRING("_depthTestMask","\xc2","\x9e","\x63","\xc8"));
	outFields->push(HX_HCSTRING("_destBlendFactor","\x3f","\xbb","\x73","\x88"));
	outFields->push(HX_HCSTRING("_program","\x05","\xa4","\xb1","\x2d"));
	outFields->push(HX_HCSTRING("_registers","\x71","\x6c","\xb4","\x16"));
	outFields->push(HX_HCSTRING("_srcBlendFactor","\x1b","\x24","\xae","\xb6"));
	outFields->push(HX_HCSTRING("_viewportHeight","\x8c","\x61","\x74","\x97"));
	outFields->push(HX_HCSTRING("_viewportOriginX","\x6d","\xa6","\x1b","\x44"));
	outFields->push(HX_HCSTRING("_viewportOriginY","\x6e","\xa6","\x1b","\x44"));
	outFields->push(HX_HCSTRING("_viewportWidth","\x01","\x18","\xf0","\xf0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Context3DStateCache_obj,_activeTexture),HX_HCSTRING("_activeTexture","\xf6","\x03","\xfc","\x94")},
	{hx::fsInt,(int)offsetof(Context3DStateCache_obj,_activeVertexArray),HX_HCSTRING("_activeVertexArray","\x30","\x9c","\x71","\x09")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3DStateCache_obj,_cullingMode),HX_HCSTRING("_cullingMode","\xf4","\x87","\x45","\xc8")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3DStateCache_obj,_depthTestCompareMode),HX_HCSTRING("_depthTestCompareMode","\x92","\x77","\x60","\x2d")},
	{hx::fsBool,(int)offsetof(Context3DStateCache_obj,_depthTestEnabled),HX_HCSTRING("_depthTestEnabled","\x6b","\x70","\x8f","\xca")},
	{hx::fsBool,(int)offsetof(Context3DStateCache_obj,_depthTestMask),HX_HCSTRING("_depthTestMask","\xc2","\x9e","\x63","\xc8")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3DStateCache_obj,_destBlendFactor),HX_HCSTRING("_destBlendFactor","\x3f","\xbb","\x73","\x88")},
	{hx::fsObject /*::openfl::display3D::Program3D*/ ,(int)offsetof(Context3DStateCache_obj,_program),HX_HCSTRING("_program","\x05","\xa4","\xb1","\x2d")},
	{hx::fsObject /*::openfl::_Vector::FloatVector*/ ,(int)offsetof(Context3DStateCache_obj,_registers),HX_HCSTRING("_registers","\x71","\x6c","\xb4","\x16")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3DStateCache_obj,_srcBlendFactor),HX_HCSTRING("_srcBlendFactor","\x1b","\x24","\xae","\xb6")},
	{hx::fsInt,(int)offsetof(Context3DStateCache_obj,_viewportHeight),HX_HCSTRING("_viewportHeight","\x8c","\x61","\x74","\x97")},
	{hx::fsInt,(int)offsetof(Context3DStateCache_obj,_viewportOriginX),HX_HCSTRING("_viewportOriginX","\x6d","\xa6","\x1b","\x44")},
	{hx::fsInt,(int)offsetof(Context3DStateCache_obj,_viewportOriginY),HX_HCSTRING("_viewportOriginY","\x6e","\xa6","\x1b","\x44")},
	{hx::fsInt,(int)offsetof(Context3DStateCache_obj,_viewportWidth),HX_HCSTRING("_viewportWidth","\x01","\x18","\xf0","\xf0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Context3DStateCache_obj::FLOATS_PER_REGISTER,HX_HCSTRING("FLOATS_PER_REGISTER","\x8d","\x76","\x42","\x08")},
	{hx::fsInt,(void *) &Context3DStateCache_obj::MAX_NUM_REGISTERS,HX_HCSTRING("MAX_NUM_REGISTERS","\xbc","\x37","\x8a","\x55")},
	{hx::fsBool,(void *) &Context3DStateCache_obj::disableCache,HX_HCSTRING("disableCache","\x3a","\xb7","\x98","\x7f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_activeTexture","\xf6","\x03","\xfc","\x94"),
	HX_HCSTRING("_activeVertexArray","\x30","\x9c","\x71","\x09"),
	HX_HCSTRING("_cullingMode","\xf4","\x87","\x45","\xc8"),
	HX_HCSTRING("_depthTestCompareMode","\x92","\x77","\x60","\x2d"),
	HX_HCSTRING("_depthTestEnabled","\x6b","\x70","\x8f","\xca"),
	HX_HCSTRING("_depthTestMask","\xc2","\x9e","\x63","\xc8"),
	HX_HCSTRING("_destBlendFactor","\x3f","\xbb","\x73","\x88"),
	HX_HCSTRING("_program","\x05","\xa4","\xb1","\x2d"),
	HX_HCSTRING("_registers","\x71","\x6c","\xb4","\x16"),
	HX_HCSTRING("_srcBlendFactor","\x1b","\x24","\xae","\xb6"),
	HX_HCSTRING("_viewportHeight","\x8c","\x61","\x74","\x97"),
	HX_HCSTRING("_viewportOriginX","\x6d","\xa6","\x1b","\x44"),
	HX_HCSTRING("_viewportOriginY","\x6e","\xa6","\x1b","\x44"),
	HX_HCSTRING("_viewportWidth","\x01","\x18","\xf0","\xf0"),
	HX_HCSTRING("clearRegisters","\x63","\x45","\x17","\x79"),
	HX_HCSTRING("clearSettings","\x90","\x7f","\x9a","\xbe"),
	HX_HCSTRING("updateActiveTextureSample","\x36","\x99","\xb3","\x38"),
	HX_HCSTRING("updateActiveVertexArray","\x26","\xd7","\xc8","\x0f"),
	HX_HCSTRING("updateBlendDestFactor","\x79","\xf0","\xf0","\xf1"),
	HX_HCSTRING("updateBlendSrcFactor","\x2b","\x14","\x7b","\xed"),
	HX_HCSTRING("updateCullingMode","\x6a","\x86","\xa5","\xc6"),
	HX_HCSTRING("updateDepthCompareMode","\x8e","\x22","\xc6","\xaa"),
	HX_HCSTRING("updateDepthTestEnabled","\x35","\x46","\x93","\x27"),
	HX_HCSTRING("updateDepthTestMask","\xb8","\xa6","\x98","\x1d"),
	HX_HCSTRING("updateProgram3D","\xec","\xf0","\x4e","\x2c"),
	HX_HCSTRING("updateRegisters","\x67","\xc1","\x9c","\x0a"),
	HX_HCSTRING("updateViewport","\x8f","\x3f","\xcf","\xd1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DStateCache_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DStateCache_obj::FLOATS_PER_REGISTER,"FLOATS_PER_REGISTER");
	HX_MARK_MEMBER_NAME(Context3DStateCache_obj::MAX_NUM_REGISTERS,"MAX_NUM_REGISTERS");
	HX_MARK_MEMBER_NAME(Context3DStateCache_obj::disableCache,"disableCache");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DStateCache_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DStateCache_obj::FLOATS_PER_REGISTER,"FLOATS_PER_REGISTER");
	HX_VISIT_MEMBER_NAME(Context3DStateCache_obj::MAX_NUM_REGISTERS,"MAX_NUM_REGISTERS");
	HX_VISIT_MEMBER_NAME(Context3DStateCache_obj::disableCache,"disableCache");
};

#endif

hx::Class Context3DStateCache_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("FLOATS_PER_REGISTER","\x8d","\x76","\x42","\x08"),
	HX_HCSTRING("MAX_NUM_REGISTERS","\xbc","\x37","\x8a","\x55"),
	HX_HCSTRING("disableCache","\x3a","\xb7","\x98","\x7f"),
	::String(null()) };

void Context3DStateCache_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D.Context3DStateCache","\xa2","\xa7","\xb0","\x13");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Context3DStateCache_obj >;
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

void Context3DStateCache_obj::__boot()
{
	FLOATS_PER_REGISTER= (int)4;
	MAX_NUM_REGISTERS= (int)1024;
	disableCache= true;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
