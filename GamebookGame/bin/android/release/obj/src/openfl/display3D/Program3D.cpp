#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_AGALConverter
#include <openfl/_internal/stage3D/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_SamplerState
#include <openfl/_internal/stage3D/SamplerState.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
#ifndef INCLUDED_openfl_display3D__Program3D_Uniform
#include <openfl/display3D/_Program3D/Uniform.h>
#endif
#ifndef INCLUDED_openfl_display3D__Program3D_UniformMap
#include <openfl/display3D/_Program3D/UniformMap.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
namespace openfl{
namespace display3D{

Void Program3D_obj::__construct(::openfl::display3D::Context3D context3D)
{
{
	this->__context = context3D;
	this->__memUsage = (int)0;
	this->__samplerUsageMask = (int)0;
	::List tmp = ::List_obj::__new();
	this->__uniforms = tmp;
	::List tmp1 = ::List_obj::__new();
	this->__samplerUniforms = tmp1;
	::List tmp2 = ::List_obj::__new();
	this->__alphaSamplerUniforms = tmp2;
	::openfl::_Vector::ObjectVector tmp3;
	{
		bool fixed = null();
		::openfl::_Vector::ObjectVector tmp4 = ::openfl::_Vector::ObjectVector_obj::__new((int)8,fixed,null());
		::openfl::_Vector::ObjectVector tmp5 = tmp4;
		tmp3 = tmp5;
	}
	this->__samplerStates = tmp3;
}
;
	return null();
}

//Program3D_obj::~Program3D_obj() { }

Dynamic Program3D_obj::__CreateEmpty() { return  new Program3D_obj; }
hx::ObjectPtr< Program3D_obj > Program3D_obj::__new(::openfl::display3D::Context3D context3D)
{  hx::ObjectPtr< Program3D_obj > _result_ = new Program3D_obj();
	_result_->__construct(context3D);
	return _result_;}

Dynamic Program3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Program3D_obj > _result_ = new Program3D_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Program3D_obj::dispose( ){
{
		this->__deleteShaders();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Program3D_obj,dispose,(void))

Void Program3D_obj::upload( ::openfl::utils::ByteArrayData vertexProgram,::openfl::utils::ByteArrayData fragmentProgram){
{
		Array< ::Dynamic > samplerStates = Array_obj< ::Dynamic >::__new();
		::openfl::utils::ByteArrayData tmp = vertexProgram;
		::String tmp1 = ::openfl::_internal::stage3D::AGALConverter_obj::convertToGLSL(tmp,null());
		::String glslVertex = tmp1;
		::openfl::utils::ByteArrayData tmp2 = fragmentProgram;
		::String tmp3 = ::openfl::_internal::stage3D::AGALConverter_obj::convertToGLSL(tmp2,samplerStates);
		::String glslFragment = tmp3;
		::String tmp4 = glslVertex;
		::String tmp5 = glslFragment;
		this->__uploadFromGLSL(tmp4,tmp5);
		{
			int _g1 = (int)0;
			int _g = samplerStates->length;
			while((true)){
				bool tmp6 = (_g1 < _g);
				bool tmp7 = !(tmp6);
				if ((tmp7)){
					break;
				}
				int tmp8 = (_g1)++;
				int i = tmp8;
				int tmp9 = i;
				::openfl::_internal::stage3D::SamplerState tmp10 = samplerStates->__get(i).StaticCast< ::openfl::_internal::stage3D::SamplerState >();
				this->__setSamplerState(tmp9,tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Program3D_obj,upload,(void))

Void Program3D_obj::__buildUniformList( ){
{
		::List tmp = this->__uniforms;
		tmp->clear();
		::List tmp1 = this->__samplerUniforms;
		tmp1->clear();
		::List tmp2 = this->__alphaSamplerUniforms;
		tmp2->clear();
		this->__samplerUsageMask = (int)0;
		int numActive = (int)0;
		::lime::_backend::native::NativeGLRenderContext tmp3 = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp4 = this->__programID;
		Dynamic tmp5 = tmp3->getProgramParameter(tmp4,(int)35718);
		numActive = tmp5;
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		::List tmp6 = ::List_obj::__new();
		::List vertexUniforms = tmp6;
		::List tmp7 = ::List_obj::__new();
		::List fragmentUniforms = tmp7;
		{
			int _g = (int)0;
			while((true)){
				bool tmp8 = (_g < numActive);
				bool tmp9 = !(tmp8);
				if ((tmp9)){
					break;
				}
				int tmp10 = (_g)++;
				int i = tmp10;
				::lime::_backend::native::NativeGLRenderContext tmp11 = ::lime::graphics::opengl::GL_obj::context;
				::lime::graphics::opengl::GLObject tmp12 = this->__programID;
				int tmp13 = i;
				Dynamic tmp14 = tmp11->getActiveUniform(tmp12,tmp13);
				Dynamic info = tmp14;
				::String name = info->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
				int size = info->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic );
				int uniformType = info->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				::openfl::display3D::_Program3D::Uniform tmp15 = ::openfl::display3D::_Program3D::Uniform_obj::__new();
				::openfl::display3D::_Program3D::Uniform uniform = tmp15;
				uniform->name = name;
				uniform->size = size;
				uniform->type = uniformType;
				::lime::_backend::native::NativeGLRenderContext tmp16 = ::lime::graphics::opengl::GL_obj::context;
				::lime::graphics::opengl::GLObject tmp17 = this->__programID;
				::String tmp18 = uniform->name;
				int tmp19 = tmp16->getUniformLocation(tmp17,tmp18);
				uniform->location = tmp19;
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				int tmp20 = uniform->name.indexOf(HX_HCSTRING("[","\x5b","\x00","\x00","\x00"),null());
				int indexBracket = tmp20;
				bool tmp21 = (indexBracket >= (int)0);
				if ((tmp21)){
					int tmp22 = indexBracket;
					::String tmp23 = uniform->name.substring((int)0,tmp22);
					uniform->name = tmp23;
				}
				{
					int _g1 = uniform->type;
					int tmp22 = _g1;
					switch( (int)(tmp22)){
						case (int)35674: {
							uniform->regCount = (int)2;
						}
						;break;
						case (int)35675: {
							uniform->regCount = (int)3;
						}
						;break;
						case (int)35676: {
							uniform->regCount = (int)4;
						}
						;break;
						default: {
							uniform->regCount = (int)1;
						}
					}
				}
				hx::MultEq(uniform->regCount,uniform->size);
				::List tmp22 = this->__uniforms;
				::openfl::display3D::_Program3D::Uniform tmp23 = uniform;
				tmp22->add(tmp23);
				bool tmp24 = (uniform->name == HX_HCSTRING("vcPositionScale","\xb4","\xc9","\xc0","\x1f"));
				if ((tmp24)){
					this->__positionScale = uniform;
				}
				else{
					::String tmp25 = uniform->name;
					bool tmp26 = ::StringTools_obj::startsWith(tmp25,HX_HCSTRING("vc","\x2d","\x67","\x00","\x00"));
					if ((tmp26)){
						::String tmp27 = uniform->name.substring((int)2,null());
						Dynamic tmp28 = ::Std_obj::parseInt(tmp27);
						uniform->regIndex = tmp28;
						::openfl::display3D::Context3D tmp29 = this->__context;
						uniform->regData = tmp29->__vertexConstants;
						::openfl::display3D::_Program3D::Uniform tmp30 = uniform;
						vertexUniforms->add(tmp30);
					}
					else{
						::String tmp27 = uniform->name;
						bool tmp28 = ::StringTools_obj::startsWith(tmp27,HX_HCSTRING("fc","\x3d","\x59","\x00","\x00"));
						if ((tmp28)){
							::String tmp29 = uniform->name.substring((int)2,null());
							Dynamic tmp30 = ::Std_obj::parseInt(tmp29);
							uniform->regIndex = tmp30;
							::openfl::display3D::Context3D tmp31 = this->__context;
							uniform->regData = tmp31->__fragmentConstants;
							::openfl::display3D::_Program3D::Uniform tmp32 = uniform;
							fragmentUniforms->add(tmp32);
						}
						else{
							::String tmp29 = uniform->name;
							::String tmp30 = tmp29;
							bool tmp31 = ::StringTools_obj::startsWith(tmp30,HX_HCSTRING("sampler","\x08","\xc5","\xc9","\x83"));
							bool tmp32;
							if ((tmp31)){
								::String tmp33 = uniform->name;
								::String tmp34 = tmp33;
								bool tmp35 = ::StringTools_obj::endsWith(tmp34,HX_HCSTRING("_alpha","\x9f","\xee","\x7d","\x1d"));
								bool tmp36 = tmp35;
								bool tmp37 = tmp36;
								tmp32 = !(tmp37);
							}
							else{
								tmp32 = false;
							}
							if ((tmp32)){
								::String tmp33 = uniform->name.substring((int)7,null());
								Dynamic tmp34 = ::Std_obj::parseInt(tmp33);
								uniform->regIndex = tmp34;
								::List tmp35 = this->__samplerUniforms;
								::openfl::display3D::_Program3D::Uniform tmp36 = uniform;
								tmp35->add(tmp36);
								{
									int _g2 = (int)0;
									int _g1 = uniform->regCount;
									while((true)){
										bool tmp37 = (_g2 < _g1);
										bool tmp38 = !(tmp37);
										if ((tmp38)){
											break;
										}
										int tmp39 = (_g2)++;
										int reg = tmp39;
										int tmp40 = (uniform->regIndex + reg);
										int tmp41 = (int((int)1) << int(tmp40));
										hx::OrEq(this->__samplerUsageMask,tmp41);
									}
								}
							}
							else{
								::String tmp33 = uniform->name;
								::String tmp34 = tmp33;
								bool tmp35 = ::StringTools_obj::startsWith(tmp34,HX_HCSTRING("sampler","\x08","\xc5","\xc9","\x83"));
								bool tmp36;
								if ((tmp35)){
									::String tmp37 = uniform->name;
									::String tmp38 = tmp37;
									tmp36 = ::StringTools_obj::endsWith(tmp38,HX_HCSTRING("_alpha","\x9f","\xee","\x7d","\x1d"));
								}
								else{
									tmp36 = false;
								}
								if ((tmp36)){
									int tmp37 = uniform->name.indexOf(HX_HCSTRING("_","\x5f","\x00","\x00","\x00"),null());
									int tmp38 = (tmp37 - (int)7);
									int len = tmp38;
									int tmp39 = ((int)7 + len);
									::String tmp40 = uniform->name.substring((int)7,tmp39);
									Dynamic tmp41 = ::Std_obj::parseInt(tmp40);
									int tmp42 = (tmp41 + (int)4);
									uniform->regIndex = tmp42;
									::List tmp43 = this->__alphaSamplerUniforms;
									::openfl::display3D::_Program3D::Uniform tmp44 = uniform;
									tmp43->add(tmp44);
								}
							}
						}
					}
				}
				bool tmp25 = ::openfl::display3D::Program3D_obj::verbose;
				if ((tmp25)){
					::String tmp26 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + i);
					::String tmp27 = (tmp26 + HX_HCSTRING(" name:","\x6f","\x1b","\xf0","\x61"));
					::String tmp28 = uniform->name;
					::String tmp29 = (tmp27 + tmp28);
					::String tmp30 = (tmp29 + HX_HCSTRING(" type:","\x20","\xfc","\x36","\xe6"));
					int tmp31 = uniform->type;
					::String tmp32 = (tmp30 + tmp31);
					::String tmp33 = (tmp32 + HX_HCSTRING(" size:","\x39","\x94","\x44","\x48"));
					int tmp34 = uniform->size;
					::String tmp35 = (tmp33 + tmp34);
					::String tmp36 = (tmp35 + HX_HCSTRING(" location:","\x45","\xfc","\xa8","\xc1"));
					int tmp37 = uniform->location;
					::String tmp38 = (tmp36 + tmp37);
					Dynamic tmp39 = hx::SourceInfo(HX_HCSTRING("Program3D.hx","\xc9","\xbd","\xcd","\x87"),180,HX_HCSTRING("openfl.display3D.Program3D","\x7c","\x83","\x68","\xf5"),HX_HCSTRING("__buildUniformList","\x44","\x16","\xc1","\x02"));
					::haxe::Log_obj::trace(tmp38,tmp39);
				}
			}
		}
		::List tmp8 = vertexUniforms;
		::openfl::display3D::_Program3D::UniformMap tmp9 = ::openfl::display3D::_Program3D::UniformMap_obj::__new(::Lambda_obj::array(tmp8));
		this->__vertexUniformMap = tmp9;
		::List tmp10 = fragmentUniforms;
		::openfl::display3D::_Program3D::UniformMap tmp11 = ::openfl::display3D::_Program3D::UniformMap_obj::__new(::Lambda_obj::array(tmp10));
		this->__fragmentUniformMap = tmp11;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Program3D_obj,__buildUniformList,(void))

Void Program3D_obj::__deleteShaders( ){
{
		::lime::graphics::opengl::GLObject tmp = this->__programID;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			this->__programID = null();
		}
		::lime::graphics::opengl::GLObject tmp2 = this->__vertexShaderID;
		bool tmp3 = (tmp2 != null());
		if ((tmp3)){
			{
				::lime::_backend::native::NativeGLRenderContext tmp4 = ::lime::graphics::opengl::GL_obj::context;
				::lime::graphics::opengl::GLObject tmp5 = this->__vertexShaderID;
				tmp4->deleteShader(tmp5);
			}
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			this->__vertexShaderID = null();
		}
		::lime::graphics::opengl::GLObject tmp4 = this->__fragmentShaderID;
		bool tmp5 = (tmp4 != null());
		if ((tmp5)){
			{
				::lime::_backend::native::NativeGLRenderContext tmp6 = ::lime::graphics::opengl::GL_obj::context;
				::lime::graphics::opengl::GLObject tmp7 = this->__fragmentShaderID;
				tmp6->deleteShader(tmp7);
			}
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			this->__fragmentShaderID = null();
		}
		int tmp6 = this->__memUsage;
		bool tmp7 = (tmp6 != (int)0);
		if ((tmp7)){
			::openfl::display3D::Context3D tmp8 = this->__context;
			tmp8->__statsDecrement((int)5);
			::openfl::display3D::Context3D tmp9 = this->__context;
			int tmp10 = this->__memUsage;
			tmp9->__statsSubtract((int)10,tmp10);
			this->__memUsage = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Program3D_obj,__deleteShaders,(void))

Void Program3D_obj::__flush( ){
{
		::openfl::display3D::_Program3D::UniformMap tmp = this->__vertexUniformMap;
		tmp->flush();
		::openfl::display3D::_Program3D::UniformMap tmp1 = this->__fragmentUniformMap;
		tmp1->flush();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Program3D_obj,__flush,(void))

::openfl::_internal::stage3D::SamplerState Program3D_obj::__getSamplerState( int sampler){
	::openfl::_Vector::ObjectVector tmp = this->__samplerStates;
	int tmp1 = sampler;
	::openfl::_internal::stage3D::SamplerState tmp2 = tmp->get(tmp1);
	::openfl::_internal::stage3D::SamplerState tmp3 = tmp2;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Program3D_obj,__getSamplerState,return )

Void Program3D_obj::__markDirty( bool isVertex,int index,int count){
{
		bool tmp = isVertex;
		if ((tmp)){
			::openfl::display3D::_Program3D::UniformMap tmp1 = this->__vertexUniformMap;
			int tmp2 = index;
			int tmp3 = count;
			tmp1->markDirty(tmp2,tmp3);
		}
		else{
			::openfl::display3D::_Program3D::UniformMap tmp1 = this->__fragmentUniformMap;
			int tmp2 = index;
			int tmp3 = count;
			tmp1->markDirty(tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Program3D_obj,__markDirty,(void))

Void Program3D_obj::__setPositionScale( ::lime::utils::ArrayBufferView positionScale){
{
		::openfl::display3D::_Program3D::Uniform tmp = this->__positionScale;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			{
				::lime::utils::ArrayBufferView tmp2 = positionScale;
				Float tmp3 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBufferView(tmp2);
				Float v = tmp3;
				::lime::_backend::native::NativeGLRenderContext tmp4 = ::lime::graphics::opengl::GL_obj::context;
				::openfl::display3D::_Program3D::Uniform tmp5 = this->__positionScale;
				int tmp6 = tmp5->location;
				Float tmp7 = v;
				tmp4->uniform4fv(tmp6,(int)1,tmp7);
			}
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Program3D_obj,__setPositionScale,(void))

Void Program3D_obj::__setSamplerState( int sampler,::openfl::_internal::stage3D::SamplerState state){
{
		::openfl::_Vector::ObjectVector tmp = this->__samplerStates;
		int tmp1 = sampler;
		::openfl::_internal::stage3D::SamplerState tmp2 = state;
		::openfl::_internal::stage3D::SamplerState tmp3 = tmp->set(tmp1,tmp2);
		tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Program3D_obj,__setSamplerState,(void))

Void Program3D_obj::__uploadFromGLSL( ::String vertexShaderSource,::String fragmentShaderSource){
{
		this->__deleteShaders();
		bool tmp = ::openfl::display3D::Program3D_obj::verbose;
		if ((tmp)){
			::String tmp1 = vertexShaderSource;
			Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("Program3D.hx","\xc9","\xbd","\xcd","\x87"),284,HX_HCSTRING("openfl.display3D.Program3D","\x7c","\x83","\x68","\xf5"),HX_HCSTRING("__uploadFromGLSL","\xa9","\x36","\x31","\x0d"));
			::lime::utils::Log_obj::info(tmp1,tmp2);
			::String tmp3 = fragmentShaderSource;
			Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Program3D.hx","\xc9","\xbd","\xcd","\x87"),285,HX_HCSTRING("openfl.display3D.Program3D","\x7c","\x83","\x68","\xf5"),HX_HCSTRING("__uploadFromGLSL","\xa9","\x36","\x31","\x0d"));
			::lime::utils::Log_obj::info(tmp3,tmp4);
		}
		this->__vertexSource = vertexShaderSource;
		this->__fragmentSource = fragmentShaderSource;
		::lime::_backend::native::NativeGLRenderContext tmp1 = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp2 = tmp1->createShader((int)35633);
		this->__vertexShaderID = tmp2;
		{
			::lime::_backend::native::NativeGLRenderContext tmp3 = ::lime::graphics::opengl::GL_obj::context;
			::lime::graphics::opengl::GLObject tmp4 = this->__vertexShaderID;
			::String tmp5 = vertexShaderSource;
			tmp3->shaderSource(tmp4,tmp5);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		{
			::lime::_backend::native::NativeGLRenderContext tmp3 = ::lime::graphics::opengl::GL_obj::context;
			::lime::graphics::opengl::GLObject tmp4 = this->__vertexShaderID;
			tmp3->compileShader(tmp4);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		::lime::_backend::native::NativeGLRenderContext tmp3 = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp4 = this->__vertexShaderID;
		Dynamic tmp5 = tmp3->getShaderParameter(tmp4,(int)35713);
		int shaderCompiled = tmp5;
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		bool tmp6 = (shaderCompiled == (int)0);
		if ((tmp6)){
			::lime::_backend::native::NativeGLRenderContext tmp7 = ::lime::graphics::opengl::GL_obj::context;
			::lime::graphics::opengl::GLObject tmp8 = this->__vertexShaderID;
			::String tmp9 = tmp7->getShaderInfoLog(tmp8);
			::String vertexInfoLog = tmp9;
			bool tmp10 = (vertexInfoLog != null());
			bool tmp11;
			if ((tmp10)){
				tmp11 = (vertexInfoLog.length != (int)0);
			}
			else{
				tmp11 = false;
			}
			if ((tmp11)){
				::String tmp12 = (HX_HCSTRING("vertex: ","\x0a","\xaf","\x80","\x67") + vertexInfoLog);
				Dynamic tmp13 = hx::SourceInfo(HX_HCSTRING("Program3D.hx","\xc9","\xbd","\xcd","\x87"),309,HX_HCSTRING("openfl.display3D.Program3D","\x7c","\x83","\x68","\xf5"),HX_HCSTRING("__uploadFromGLSL","\xa9","\x36","\x31","\x0d"));
				::haxe::Log_obj::trace(tmp12,tmp13);
			}
			::String tmp12 = (HX_HCSTRING("Error compiling vertex shader: ","\x1f","\x7c","\xb1","\x3d") + vertexInfoLog);
			::openfl::errors::Error tmp13 = ::openfl::errors::Error_obj::__new(tmp12,null());
			HX_STACK_DO_THROW(tmp13);
		}
		::lime::_backend::native::NativeGLRenderContext tmp7 = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp8 = tmp7->createShader((int)35632);
		this->__fragmentShaderID = tmp8;
		{
			::lime::_backend::native::NativeGLRenderContext tmp9 = ::lime::graphics::opengl::GL_obj::context;
			::lime::graphics::opengl::GLObject tmp10 = this->__fragmentShaderID;
			::String tmp11 = fragmentShaderSource;
			tmp9->shaderSource(tmp10,tmp11);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		{
			::lime::_backend::native::NativeGLRenderContext tmp9 = ::lime::graphics::opengl::GL_obj::context;
			::lime::graphics::opengl::GLObject tmp10 = this->__fragmentShaderID;
			tmp9->compileShader(tmp10);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		::lime::_backend::native::NativeGLRenderContext tmp9 = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp10 = this->__fragmentShaderID;
		Dynamic tmp11 = tmp9->getShaderParameter(tmp10,(int)35713);
		int fragmentCompiled = tmp11;
		bool tmp12 = (fragmentCompiled == (int)0);
		if ((tmp12)){
			::lime::_backend::native::NativeGLRenderContext tmp13 = ::lime::graphics::opengl::GL_obj::context;
			::lime::graphics::opengl::GLObject tmp14 = this->__fragmentShaderID;
			::String tmp15 = tmp13->getShaderInfoLog(tmp14);
			::String fragmentInfoLog = tmp15;
			bool tmp16 = (fragmentInfoLog != null());
			bool tmp17;
			if ((tmp16)){
				tmp17 = (fragmentInfoLog.length != (int)0);
			}
			else{
				tmp17 = false;
			}
			if ((tmp17)){
				::String tmp18 = (HX_HCSTRING("fragment: ","\x76","\x26","\xd9","\xf9") + fragmentInfoLog);
				Dynamic tmp19 = hx::SourceInfo(HX_HCSTRING("Program3D.hx","\xc9","\xbd","\xcd","\x87"),332,HX_HCSTRING("openfl.display3D.Program3D","\x7c","\x83","\x68","\xf5"),HX_HCSTRING("__uploadFromGLSL","\xa9","\x36","\x31","\x0d"));
				::haxe::Log_obj::trace(tmp18,tmp19);
			}
			::String tmp18 = (HX_HCSTRING("Error compiling fragment shader: ","\x33","\x70","\x4d","\x6d") + fragmentInfoLog);
			::openfl::errors::Error tmp19 = ::openfl::errors::Error_obj::__new(tmp18,null());
			HX_STACK_DO_THROW(tmp19);
		}
		::lime::_backend::native::NativeGLRenderContext tmp13 = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp14 = tmp13->createProgram();
		this->__programID = tmp14;
		{
			::lime::_backend::native::NativeGLRenderContext tmp15 = ::lime::graphics::opengl::GL_obj::context;
			::lime::graphics::opengl::GLObject tmp16 = this->__programID;
			::lime::graphics::opengl::GLObject tmp17 = this->__vertexShaderID;
			tmp15->attachShader(tmp16,tmp17);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		{
			::lime::_backend::native::NativeGLRenderContext tmp15 = ::lime::graphics::opengl::GL_obj::context;
			::lime::graphics::opengl::GLObject tmp16 = this->__programID;
			::lime::graphics::opengl::GLObject tmp17 = this->__fragmentShaderID;
			tmp15->attachShader(tmp16,tmp17);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		{
			int _g = (int)0;
			while((true)){
				bool tmp15 = (_g < (int)16);
				bool tmp16 = !(tmp15);
				if ((tmp16)){
					break;
				}
				int tmp17 = (_g)++;
				int i = tmp17;
				::String tmp18 = (HX_HCSTRING("va","\x2b","\x67","\x00","\x00") + i);
				::String name = tmp18;
				::String tmp19 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + name);
				int tmp20 = vertexShaderSource.indexOf(tmp19,null());
				bool tmp21 = (tmp20 != (int)-1);
				if ((tmp21)){
					::lime::_backend::native::NativeGLRenderContext tmp22 = ::lime::graphics::opengl::GL_obj::context;
					::lime::graphics::opengl::GLObject tmp23 = this->__programID;
					int tmp24 = i;
					::String tmp25 = name;
					tmp22->bindAttribLocation(tmp23,tmp24,tmp25);
				}
			}
		}
		{
			::lime::_backend::native::NativeGLRenderContext tmp15 = ::lime::graphics::opengl::GL_obj::context;
			::lime::graphics::opengl::GLObject tmp16 = this->__programID;
			tmp15->linkProgram(tmp16);
		}
		::lime::_backend::native::NativeGLRenderContext tmp15 = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp16 = this->__programID;
		::String tmp17 = tmp15->getProgramInfoLog(tmp16);
		::String infoLog = tmp17;
		bool tmp18 = (infoLog != null());
		bool tmp19;
		if ((tmp18)){
			tmp19 = (infoLog.length != (int)0);
		}
		else{
			tmp19 = false;
		}
		if ((tmp19)){
			::String tmp20 = (HX_HCSTRING("program: ","\x2a","\x26","\xc4","\xdc") + infoLog);
			Dynamic tmp21 = hx::SourceInfo(HX_HCSTRING("Program3D.hx","\xc9","\xbd","\xcd","\x87"),365,HX_HCSTRING("openfl.display3D.Program3D","\x7c","\x83","\x68","\xf5"),HX_HCSTRING("__uploadFromGLSL","\xa9","\x36","\x31","\x0d"));
			::haxe::Log_obj::trace(tmp20,tmp21);
		}
		this->__buildUniformList();
		this->__memUsage = (int)1;
		::openfl::display3D::Context3D tmp20 = this->__context;
		tmp20->__statsIncrement((int)5);
		::openfl::display3D::Context3D tmp21 = this->__context;
		int tmp22 = this->__memUsage;
		tmp21->__statsAdd((int)10,tmp22);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Program3D_obj,__uploadFromGLSL,(void))

Void Program3D_obj::__use( ){
{
		{
			::lime::graphics::opengl::GLObject tmp = this->__programID;
			::lime::graphics::opengl::GLObject program = tmp;
			::lime::graphics::opengl::GL_obj::__currentProgram = program;
			::lime::_backend::native::NativeGLRenderContext tmp1 = ::lime::graphics::opengl::GL_obj::context;
			::lime::graphics::opengl::GLObject tmp2 = program;
			tmp1->useProgram(tmp2);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		::openfl::display3D::_Program3D::UniformMap tmp = this->__vertexUniformMap;
		tmp->markAllDirty();
		::openfl::display3D::_Program3D::UniformMap tmp1 = this->__fragmentUniformMap;
		tmp1->markAllDirty();
		{
			::List tmp2 = this->__samplerUniforms;
			::_List::ListIterator tmp3 = ::_List::ListIterator_obj::__new(tmp2->h);
			::_List::ListIterator _g = tmp3;
			while((true)){
				bool tmp4 = (_g->head != null());
				bool tmp5 = !(tmp4);
				if ((tmp5)){
					break;
				}
				Dynamic tmp6;
				{
					Dynamic tmp7 = _g->head->__GetItem((int)0);
					_g->val = tmp7;
					Dynamic tmp8 = _g->head->__GetItem((int)1);
					_g->head = tmp8;
					tmp6 = _g->val;
				}
				::openfl::display3D::_Program3D::Uniform sampler = ((::openfl::display3D::_Program3D::Uniform)(tmp6));
				bool tmp7 = (sampler->regCount == (int)1);
				if ((tmp7)){
					{
						::lime::_backend::native::NativeGLRenderContext tmp8 = ::lime::graphics::opengl::GL_obj::context;
						int tmp9 = sampler->location;
						int tmp10 = sampler->regIndex;
						tmp8->uniform1i(tmp9,tmp10);
					}
					::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				}
				else{
					::openfl::errors::IllegalOperationError tmp8 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("!!! TODO: uniform location on webgl","\x0c","\x47","\xd9","\x53"));
					HX_STACK_DO_THROW(tmp8);
				}
			}
		}
		{
			::List tmp2 = this->__alphaSamplerUniforms;
			::_List::ListIterator tmp3 = ::_List::ListIterator_obj::__new(tmp2->h);
			::_List::ListIterator _g = tmp3;
			while((true)){
				bool tmp4 = (_g->head != null());
				bool tmp5 = !(tmp4);
				if ((tmp5)){
					break;
				}
				Dynamic tmp6;
				{
					Dynamic tmp7 = _g->head->__GetItem((int)0);
					_g->val = tmp7;
					Dynamic tmp8 = _g->head->__GetItem((int)1);
					_g->head = tmp8;
					tmp6 = _g->val;
				}
				::openfl::display3D::_Program3D::Uniform sampler = ((::openfl::display3D::_Program3D::Uniform)(tmp6));
				bool tmp7 = (sampler->regCount == (int)1);
				if ((tmp7)){
					{
						::lime::_backend::native::NativeGLRenderContext tmp8 = ::lime::graphics::opengl::GL_obj::context;
						int tmp9 = sampler->location;
						int tmp10 = sampler->regIndex;
						tmp8->uniform1i(tmp9,tmp10);
					}
					::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				}
				else{
					::openfl::errors::IllegalOperationError tmp8 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("!!! TODO: uniform location on webgl","\x0c","\x47","\xd9","\x53"));
					HX_STACK_DO_THROW(tmp8);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Program3D_obj,__use,(void))

bool Program3D_obj::verbose;


Program3D_obj::Program3D_obj()
{
}

void Program3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Program3D);
	HX_MARK_MEMBER_NAME(__alphaSamplerUniforms,"__alphaSamplerUniforms");
	HX_MARK_MEMBER_NAME(__context,"__context");
	HX_MARK_MEMBER_NAME(__fragmentShaderID,"__fragmentShaderID");
	HX_MARK_MEMBER_NAME(__fragmentSource,"__fragmentSource");
	HX_MARK_MEMBER_NAME(__fragmentUniformMap,"__fragmentUniformMap");
	HX_MARK_MEMBER_NAME(__memUsage,"__memUsage");
	HX_MARK_MEMBER_NAME(__positionScale,"__positionScale");
	HX_MARK_MEMBER_NAME(__programID,"__programID");
	HX_MARK_MEMBER_NAME(__samplerStates,"__samplerStates");
	HX_MARK_MEMBER_NAME(__samplerUniforms,"__samplerUniforms");
	HX_MARK_MEMBER_NAME(__samplerUsageMask,"__samplerUsageMask");
	HX_MARK_MEMBER_NAME(__uniforms,"__uniforms");
	HX_MARK_MEMBER_NAME(__vertexShaderID,"__vertexShaderID");
	HX_MARK_MEMBER_NAME(__vertexSource,"__vertexSource");
	HX_MARK_MEMBER_NAME(__vertexUniformMap,"__vertexUniformMap");
	HX_MARK_END_CLASS();
}

void Program3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__alphaSamplerUniforms,"__alphaSamplerUniforms");
	HX_VISIT_MEMBER_NAME(__context,"__context");
	HX_VISIT_MEMBER_NAME(__fragmentShaderID,"__fragmentShaderID");
	HX_VISIT_MEMBER_NAME(__fragmentSource,"__fragmentSource");
	HX_VISIT_MEMBER_NAME(__fragmentUniformMap,"__fragmentUniformMap");
	HX_VISIT_MEMBER_NAME(__memUsage,"__memUsage");
	HX_VISIT_MEMBER_NAME(__positionScale,"__positionScale");
	HX_VISIT_MEMBER_NAME(__programID,"__programID");
	HX_VISIT_MEMBER_NAME(__samplerStates,"__samplerStates");
	HX_VISIT_MEMBER_NAME(__samplerUniforms,"__samplerUniforms");
	HX_VISIT_MEMBER_NAME(__samplerUsageMask,"__samplerUsageMask");
	HX_VISIT_MEMBER_NAME(__uniforms,"__uniforms");
	HX_VISIT_MEMBER_NAME(__vertexShaderID,"__vertexShaderID");
	HX_VISIT_MEMBER_NAME(__vertexSource,"__vertexSource");
	HX_VISIT_MEMBER_NAME(__vertexUniformMap,"__vertexUniformMap");
}

Dynamic Program3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__use") ) { return __use_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"upload") ) { return upload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"__flush") ) { return __flush_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { return __context; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__memUsage") ) { return __memUsage; }
		if (HX_FIELD_EQ(inName,"__uniforms") ) { return __uniforms; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__programID") ) { return __programID; }
		if (HX_FIELD_EQ(inName,"__markDirty") ) { return __markDirty_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__vertexSource") ) { return __vertexSource; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__positionScale") ) { return __positionScale; }
		if (HX_FIELD_EQ(inName,"__samplerStates") ) { return __samplerStates; }
		if (HX_FIELD_EQ(inName,"__deleteShaders") ) { return __deleteShaders_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__fragmentSource") ) { return __fragmentSource; }
		if (HX_FIELD_EQ(inName,"__vertexShaderID") ) { return __vertexShaderID; }
		if (HX_FIELD_EQ(inName,"__uploadFromGLSL") ) { return __uploadFromGLSL_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__samplerUniforms") ) { return __samplerUniforms; }
		if (HX_FIELD_EQ(inName,"__getSamplerState") ) { return __getSamplerState_dyn(); }
		if (HX_FIELD_EQ(inName,"__setSamplerState") ) { return __setSamplerState_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__fragmentShaderID") ) { return __fragmentShaderID; }
		if (HX_FIELD_EQ(inName,"__samplerUsageMask") ) { return __samplerUsageMask; }
		if (HX_FIELD_EQ(inName,"__vertexUniformMap") ) { return __vertexUniformMap; }
		if (HX_FIELD_EQ(inName,"__buildUniformList") ) { return __buildUniformList_dyn(); }
		if (HX_FIELD_EQ(inName,"__setPositionScale") ) { return __setPositionScale_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__fragmentUniformMap") ) { return __fragmentUniformMap; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__alphaSamplerUniforms") ) { return __alphaSamplerUniforms; }
	}
	return super::__Field(inName,inCallProp);
}

bool Program3D_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { outValue = verbose; return true;  }
	}
	return false;
}

Dynamic Program3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { __context=inValue.Cast< ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__memUsage") ) { __memUsage=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__uniforms") ) { __uniforms=inValue.Cast< ::List >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__programID") ) { __programID=inValue.Cast< ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__vertexSource") ) { __vertexSource=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__positionScale") ) { __positionScale=inValue.Cast< ::openfl::display3D::_Program3D::Uniform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__samplerStates") ) { __samplerStates=inValue.Cast< ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__fragmentSource") ) { __fragmentSource=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__vertexShaderID") ) { __vertexShaderID=inValue.Cast< ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__samplerUniforms") ) { __samplerUniforms=inValue.Cast< ::List >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__fragmentShaderID") ) { __fragmentShaderID=inValue.Cast< ::lime::graphics::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__samplerUsageMask") ) { __samplerUsageMask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__vertexUniformMap") ) { __vertexUniformMap=inValue.Cast< ::openfl::display3D::_Program3D::UniformMap >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__fragmentUniformMap") ) { __fragmentUniformMap=inValue.Cast< ::openfl::display3D::_Program3D::UniformMap >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__alphaSamplerUniforms") ) { __alphaSamplerUniforms=inValue.Cast< ::List >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Program3D_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { verbose=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void Program3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__alphaSamplerUniforms","\x49","\x93","\x09","\xfc"));
	outFields->push(HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a"));
	outFields->push(HX_HCSTRING("__fragmentShaderID","\x50","\xd1","\x6e","\x10"));
	outFields->push(HX_HCSTRING("__fragmentSource","\xeb","\xcb","\x2c","\x83"));
	outFields->push(HX_HCSTRING("__fragmentUniformMap","\xd8","\x1c","\x22","\xcd"));
	outFields->push(HX_HCSTRING("__memUsage","\xec","\x05","\xee","\x37"));
	outFields->push(HX_HCSTRING("__positionScale","\x01","\xd2","\x7f","\x6a"));
	outFields->push(HX_HCSTRING("__programID","\x3f","\x7c","\xf0","\x0a"));
	outFields->push(HX_HCSTRING("__samplerStates","\x4a","\xc1","\xd9","\x13"));
	outFields->push(HX_HCSTRING("__samplerUniforms","\xc7","\xc6","\x82","\xb1"));
	outFields->push(HX_HCSTRING("__samplerUsageMask","\xa5","\x3b","\x17","\xfe"));
	outFields->push(HX_HCSTRING("__uniforms","\xdf","\x3f","\x8d","\xa5"));
	outFields->push(HX_HCSTRING("__vertexShaderID","\xe4","\xf8","\x83","\xef"));
	outFields->push(HX_HCSTRING("__vertexSource","\x7f","\x26","\x07","\xf3"));
	outFields->push(HX_HCSTRING("__vertexUniformMap","\x6c","\x51","\x7f","\x79"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::List*/ ,(int)offsetof(Program3D_obj,__alphaSamplerUniforms),HX_HCSTRING("__alphaSamplerUniforms","\x49","\x93","\x09","\xfc")},
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(int)offsetof(Program3D_obj,__context),HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(Program3D_obj,__fragmentShaderID),HX_HCSTRING("__fragmentShaderID","\x50","\xd1","\x6e","\x10")},
	{hx::fsString,(int)offsetof(Program3D_obj,__fragmentSource),HX_HCSTRING("__fragmentSource","\xeb","\xcb","\x2c","\x83")},
	{hx::fsObject /*::openfl::display3D::_Program3D::UniformMap*/ ,(int)offsetof(Program3D_obj,__fragmentUniformMap),HX_HCSTRING("__fragmentUniformMap","\xd8","\x1c","\x22","\xcd")},
	{hx::fsInt,(int)offsetof(Program3D_obj,__memUsage),HX_HCSTRING("__memUsage","\xec","\x05","\xee","\x37")},
	{hx::fsObject /*::openfl::display3D::_Program3D::Uniform*/ ,(int)offsetof(Program3D_obj,__positionScale),HX_HCSTRING("__positionScale","\x01","\xd2","\x7f","\x6a")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(Program3D_obj,__programID),HX_HCSTRING("__programID","\x3f","\x7c","\xf0","\x0a")},
	{hx::fsObject /*::openfl::_Vector::ObjectVector*/ ,(int)offsetof(Program3D_obj,__samplerStates),HX_HCSTRING("__samplerStates","\x4a","\xc1","\xd9","\x13")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Program3D_obj,__samplerUniforms),HX_HCSTRING("__samplerUniforms","\xc7","\xc6","\x82","\xb1")},
	{hx::fsInt,(int)offsetof(Program3D_obj,__samplerUsageMask),HX_HCSTRING("__samplerUsageMask","\xa5","\x3b","\x17","\xfe")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Program3D_obj,__uniforms),HX_HCSTRING("__uniforms","\xdf","\x3f","\x8d","\xa5")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(Program3D_obj,__vertexShaderID),HX_HCSTRING("__vertexShaderID","\xe4","\xf8","\x83","\xef")},
	{hx::fsString,(int)offsetof(Program3D_obj,__vertexSource),HX_HCSTRING("__vertexSource","\x7f","\x26","\x07","\xf3")},
	{hx::fsObject /*::openfl::display3D::_Program3D::UniformMap*/ ,(int)offsetof(Program3D_obj,__vertexUniformMap),HX_HCSTRING("__vertexUniformMap","\x6c","\x51","\x7f","\x79")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Program3D_obj::verbose,HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__alphaSamplerUniforms","\x49","\x93","\x09","\xfc"),
	HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a"),
	HX_HCSTRING("__fragmentShaderID","\x50","\xd1","\x6e","\x10"),
	HX_HCSTRING("__fragmentSource","\xeb","\xcb","\x2c","\x83"),
	HX_HCSTRING("__fragmentUniformMap","\xd8","\x1c","\x22","\xcd"),
	HX_HCSTRING("__memUsage","\xec","\x05","\xee","\x37"),
	HX_HCSTRING("__positionScale","\x01","\xd2","\x7f","\x6a"),
	HX_HCSTRING("__programID","\x3f","\x7c","\xf0","\x0a"),
	HX_HCSTRING("__samplerStates","\x4a","\xc1","\xd9","\x13"),
	HX_HCSTRING("__samplerUniforms","\xc7","\xc6","\x82","\xb1"),
	HX_HCSTRING("__samplerUsageMask","\xa5","\x3b","\x17","\xfe"),
	HX_HCSTRING("__uniforms","\xdf","\x3f","\x8d","\xa5"),
	HX_HCSTRING("__vertexShaderID","\xe4","\xf8","\x83","\xef"),
	HX_HCSTRING("__vertexSource","\x7f","\x26","\x07","\xf3"),
	HX_HCSTRING("__vertexUniformMap","\x6c","\x51","\x7f","\x79"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("upload","\x01","\xca","\x59","\x8c"),
	HX_HCSTRING("__buildUniformList","\x44","\x16","\xc1","\x02"),
	HX_HCSTRING("__deleteShaders","\xa3","\x4d","\xc2","\x45"),
	HX_HCSTRING("__flush","\xa4","\xbb","\xf9","\x6c"),
	HX_HCSTRING("__getSamplerState","\x7f","\x6a","\x04","\x62"),
	HX_HCSTRING("__markDirty","\xa5","\x79","\xcf","\x64"),
	HX_HCSTRING("__setPositionScale","\x3f","\xc3","\xc0","\x0e"),
	HX_HCSTRING("__setSamplerState","\x8b","\xe7","\xcf","\x5d"),
	HX_HCSTRING("__uploadFromGLSL","\xa9","\x36","\x31","\x0d"),
	HX_HCSTRING("__use","\x27","\x8d","\x35","\xf2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Program3D_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Program3D_obj::verbose,"verbose");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Program3D_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Program3D_obj::verbose,"verbose");
};

#endif

hx::Class Program3D_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71"),
	::String(null()) };

void Program3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.Program3D","\x7c","\x83","\x68","\xf5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Program3D_obj::__GetStatic;
	__mClass->mSetStaticField = &Program3D_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Program3D_obj >;
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

void Program3D_obj::__boot()
{
struct _Function_0_1{
	inline static bool Block( ){
		{
			int tmp = ::lime::utils::Log_obj::level;
			return (tmp == (int)5);
		}
		return null();
	}
};
	verbose= _Function_0_1::Block();
}

} // end namespace openfl
} // end namespace display3D
