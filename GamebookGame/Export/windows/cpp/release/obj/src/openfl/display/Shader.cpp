#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLContextType
#include <lime/graphics/opengl/GLContextType.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_GLUtils
#include <lime/utils/GLUtils.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Bool
#include <openfl/display/ShaderParameter_Bool.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Int
#include <openfl/display/ShaderParameter_Int.h>
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
namespace display{

Void Shader_obj::__construct(::openfl::utils::ByteArrayData code)
{
{
	this->__data = ::openfl::display::ShaderData_obj::__new(null());
	::String tmp = this->__glFragmentSource;
	bool tmp1 = (tmp == null());
	if ((tmp1)){
		this->__glFragmentSource = HX_HCSTRING("varying float vAlpha;\n\t\tvarying vec2 vTexCoord;\n\t\tuniform sampler2D uImage0;\n\t\t\n\t\tvoid main(void) {\n\t\t\t\n\t\t\tvec4 color = texture2D (uImage0, vTexCoord);\n\t\t\t\n\t\t\tif (color.a == 0.0) {\n\t\t\t\t\n\t\t\t\tgl_FragColor = vec4 (0.0, 0.0, 0.0, 0.0);\n\t\t\t\t\n\t\t\t} else {\n\t\t\t\t\n\t\t\t\tgl_FragColor = color * vAlpha;\n\t\t\t\t\n\t\t\t}\n\t\t\t\n\t\t}","\xc4","\xa8","\xf4","\x37");
	}
	::String tmp2 = this->__glVertexSource;
	bool tmp3 = (tmp2 == null());
	if ((tmp3)){
		this->__glVertexSource = HX_HCSTRING("attribute float aAlpha;\n\t\tattribute vec4 aPosition;\n\t\tattribute vec2 aTexCoord;\n\t\tvarying float vAlpha;\n\t\tvarying vec2 vTexCoord;\n\t\t\n\t\tuniform mat4 uMatrix;\n\t\t\n\t\tvoid main(void) {\n\t\t\t\n\t\t\tvAlpha = aAlpha;\n\t\t\tvTexCoord = aTexCoord;\n\t\t\tgl_Position = uMatrix * aPosition;\n\t\t\t\n\t\t}","\xa2","\x64","\x9a","\x8b");
	}
	this->byteCode = code;
	this->precisionHint = ((Dynamic)((int)1));
	this->__glSourceDirty = true;
	this->__numPasses = (int)1;
}
;
	return null();
}

//Shader_obj::~Shader_obj() { }

Dynamic Shader_obj::__CreateEmpty() { return  new Shader_obj; }
hx::ObjectPtr< Shader_obj > Shader_obj::__new(::openfl::utils::ByteArrayData code)
{  hx::ObjectPtr< Shader_obj > _result_ = new Shader_obj();
	_result_->__construct(code);
	return _result_;}

Dynamic Shader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shader_obj > _result_ = new Shader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Shader_obj::__disable( ){
{
		::lime::graphics::opengl::GLObject tmp = this->glProgram;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			this->__disableGL();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,__disable,(void))

Void Shader_obj::__disableGL( ){
{
		::openfl::display::ShaderData tmp = this->get_data();
		::openfl::display::ShaderInput_openfl_display_BitmapData tmp1 = tmp->uImage0;
		bool tmp2 = (tmp1 != null());
		if ((tmp2)){
			::openfl::display::ShaderData tmp3 = this->get_data();
			tmp3->uImage0->input = null();
		}
		{
			int _g = (int)0;
			Array< ::Dynamic > _g1 = this->__paramBool;
			while((true)){
				bool tmp3 = (_g < _g1->length);
				bool tmp4 = !(tmp3);
				if ((tmp4)){
					break;
				}
				::openfl::display::ShaderParameter_Bool tmp5 = _g1->__get(_g).StaticCast< ::openfl::display::ShaderParameter_Bool >();
				::openfl::display::ShaderParameter_Bool parameter = tmp5;
				++(_g);
				::lime::_backend::native::NativeGLRenderContext tmp6 = this->gl;
				int tmp7 = parameter->index;
				tmp6->disableVertexAttribArray(tmp7);
			}
		}
		{
			int _g = (int)0;
			Array< ::Dynamic > _g1 = this->__paramFloat;
			while((true)){
				bool tmp3 = (_g < _g1->length);
				bool tmp4 = !(tmp3);
				if ((tmp4)){
					break;
				}
				::openfl::display::ShaderParameter_Float tmp5 = _g1->__get(_g).StaticCast< ::openfl::display::ShaderParameter_Float >();
				::openfl::display::ShaderParameter_Float parameter = tmp5;
				++(_g);
				::lime::_backend::native::NativeGLRenderContext tmp6 = this->gl;
				int tmp7 = parameter->index;
				tmp6->disableVertexAttribArray(tmp7);
			}
		}
		{
			int _g = (int)0;
			Array< ::Dynamic > _g1 = this->__paramInt;
			while((true)){
				bool tmp3 = (_g < _g1->length);
				bool tmp4 = !(tmp3);
				if ((tmp4)){
					break;
				}
				::openfl::display::ShaderParameter_Int tmp5 = _g1->__get(_g).StaticCast< ::openfl::display::ShaderParameter_Int >();
				::openfl::display::ShaderParameter_Int parameter = tmp5;
				++(_g);
				::lime::_backend::native::NativeGLRenderContext tmp6 = this->gl;
				int tmp7 = parameter->index;
				tmp6->disableVertexAttribArray(tmp7);
			}
		}
		::lime::_backend::native::NativeGLRenderContext tmp3 = this->gl;
		::lime::_backend::native::NativeGLRenderContext tmp4 = this->gl;
		int tmp5 = tmp4->ARRAY_BUFFER;
		tmp3->bindBuffer(tmp5,null());
		::lime::_backend::native::NativeGLRenderContext tmp6 = this->gl;
		::lime::_backend::native::NativeGLRenderContext tmp7 = this->gl;
		int tmp8 = tmp7->TEXTURE_2D;
		tmp6->bindTexture(tmp8,null());
		::lime::_backend::native::NativeGLRenderContext tmp9 = this->gl;
		::lime::graphics::opengl::GLContextType tmp10 = tmp9->type;
		bool tmp11 = (tmp10 == ::lime::graphics::opengl::GLContextType_obj::OPENGL);
		if ((tmp11)){
			::lime::_backend::native::NativeGLRenderContext tmp12 = this->gl;
			::lime::_backend::native::NativeGLRenderContext tmp13 = this->gl;
			int tmp14 = tmp13->TEXTURE_2D;
			tmp12->disable(tmp14);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,__disableGL,(void))

Void Shader_obj::__enable( ){
{
		this->__init();
		::lime::graphics::opengl::GLObject tmp = this->glProgram;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			this->__enableGL();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,__enable,(void))

Void Shader_obj::__enableGL( ){
{
		int textureCount = (int)0;
		{
			int _g = (int)0;
			Array< ::Dynamic > _g1 = this->__inputBitmapData;
			while((true)){
				bool tmp = (_g < _g1->length);
				bool tmp1 = !(tmp);
				if ((tmp1)){
					break;
				}
				::openfl::display::ShaderInput_openfl_display_BitmapData tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::ShaderInput_openfl_display_BitmapData >();
				::openfl::display::ShaderInput_openfl_display_BitmapData input = tmp2;
				++(_g);
				::lime::_backend::native::NativeGLRenderContext tmp3 = this->gl;
				int tmp4 = input->index;
				int tmp5 = textureCount;
				tmp3->uniform1i(tmp4,tmp5);
				(textureCount)++;
			}
		}
		::lime::_backend::native::NativeGLRenderContext tmp = this->gl;
		::lime::graphics::opengl::GLContextType tmp1 = tmp->type;
		bool tmp2 = (tmp1 == ::lime::graphics::opengl::GLContextType_obj::OPENGL);
		bool tmp3;
		if ((tmp2)){
			tmp3 = (textureCount > (int)0);
		}
		else{
			tmp3 = false;
		}
		if ((tmp3)){
			::lime::_backend::native::NativeGLRenderContext tmp4 = this->gl;
			::lime::_backend::native::NativeGLRenderContext tmp5 = this->gl;
			int tmp6 = tmp5->TEXTURE_2D;
			tmp4->enable(tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,__enableGL,(void))

Void Shader_obj::__init( ){
{
		::openfl::display::ShaderData tmp = this->__data;
		bool tmp1 = (tmp == null());
		if ((tmp1)){
			::openfl::display::ShaderData tmp2 = ::openfl::display::ShaderData_obj::__new(null());
			this->__data = tmp2;
		}
		::String tmp2 = this->__glFragmentSource;
		bool tmp3 = (tmp2 != null());
		bool tmp4 = tmp3;
		bool tmp5;
		if ((tmp4)){
			::String tmp6 = this->__glVertexSource;
			::String tmp7 = tmp6;
			::String tmp8 = tmp7;
			tmp5 = (tmp8 != null());
		}
		else{
			tmp5 = false;
		}
		bool tmp6;
		if ((tmp5)){
			::lime::graphics::opengl::GLObject tmp7 = this->glProgram;
			::lime::graphics::opengl::GLObject tmp8 = tmp7;
			bool tmp9 = (tmp8 == null());
			bool tmp10 = tmp9;
			bool tmp11 = tmp10;
			bool tmp12 = !(tmp11);
			bool tmp13 = tmp12;
			bool tmp14 = tmp13;
			if ((tmp14)){
				tmp6 = this->__glSourceDirty;
			}
			else{
				tmp6 = true;
			}
		}
		else{
			tmp6 = false;
		}
		if ((tmp6)){
			this->__initGL();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,__init,(void))

Void Shader_obj::__initGL( ){
{
		bool tmp = this->__glSourceDirty;
		bool tmp1 = !(tmp);
		bool tmp2;
		if ((tmp1)){
			::haxe::ds::StringMap tmp3 = this->__isUniform;
			::haxe::ds::StringMap tmp4 = tmp3;
			tmp2 = (tmp4 == null());
		}
		else{
			tmp2 = true;
		}
		if ((tmp2)){
			this->__glSourceDirty = false;
			this->glProgram = null();
			::haxe::ds::StringMap tmp3;
			{
				::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();
				::haxe::ds::StringMap tmp5 = tmp4;
				tmp3 = tmp5;
			}
			this->__isUniform = tmp3;
			this->__inputBitmapData = Array_obj< ::Dynamic >::__new();
			this->__paramBool = Array_obj< ::Dynamic >::__new();
			this->__paramFloat = Array_obj< ::Dynamic >::__new();
			this->__paramInt = Array_obj< ::Dynamic >::__new();
			::lime::utils::ArrayBufferView tmp4;
			{
				::lime::utils::ArrayBufferView this1;
				bool tmp5 = true;
				if ((tmp5)){
					::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)4,(int)8);
					this1 = tmp6;
				}
				else{
					bool tmp6 = false;
					if ((tmp6)){
						::lime::utils::ArrayBufferView tmp7;
						{
							::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
							::lime::utils::ArrayBufferView _this = tmp8;
							_this->byteOffset = (int)0;
							int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp9;
							int tmp10 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp10;
							::haxe::io::Bytes tmp11;
							{
								::haxe::io::Bytes this2;
								int tmp12 = _this->byteLength;
								::haxe::io::Bytes tmp13 = ::haxe::io::Bytes_obj::alloc(tmp12);
								this2 = tmp13;
								tmp11 = this2;
							}
							_this->buffer = tmp11;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp7 = _this;
						}
						this1 = tmp7;
					}
					else{
						bool tmp7 = false;
						if ((tmp7)){
							::lime::utils::ArrayBufferView tmp8;
							{
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
								::lime::utils::ArrayBufferView _this = tmp9;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp10 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp10;
								::haxe::io::Bytes tmp11;
								{
									::haxe::io::Bytes this2;
									int tmp12 = _this->byteLength;
									::haxe::io::Bytes tmp13 = ::haxe::io::Bytes_obj::alloc(tmp12);
									this2 = tmp13;
									tmp11 = this2;
								}
								_this->buffer = tmp11;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp8 = _this;
							}
							this1 = tmp8;
						}
						else{
							bool tmp8 = false;
							if ((tmp8)){
								::lime::utils::ArrayBufferView tmp9;
								{
									::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
									::lime::utils::ArrayBufferView _this = tmp10;
									::haxe::io::Bytes tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp11;
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp12;
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp13;
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp14;
									int elementSize = _this->bytesPerElement;
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp16 = _this->type;
									bool tmp17 = (tmp15 == tmp16);
									if ((tmp17)){
										int srcLength1 = srcData->length;
										int tmp18 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp18;
										::haxe::io::Bytes tmp19;
										{
											::haxe::io::Bytes this2;
											int tmp20 = cloneLength;
											::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);
											this2 = tmp21;
											tmp19 = this2;
										}
										_this->buffer = tmp19;
										::haxe::io::Bytes tmp20 = srcData;
										int tmp21 = srcByteOffset;
										int tmp22 = cloneLength;
										_this->buffer->blit((int)0,tmp20,tmp21,tmp22);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp18 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp18;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp9 = _this;
								}
								this1 = tmp9;
							}
							else{
								bool tmp9 = false;
								if ((tmp9)){
									::lime::utils::ArrayBufferView tmp10;
									{
										::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
										::lime::utils::ArrayBufferView _this = tmp11;
										int in_byteOffset = (int)0;
										bool tmp12 = (in_byteOffset < (int)0);
										if ((tmp12)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp13 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp14 = (tmp13 != (int)0);
										if ((tmp14)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
										int bufferByteLength = tmp15;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp16 = true;
										if ((tmp16)){
											int tmp17 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp17;
											int tmp18 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp19 = (tmp18 != (int)0);
											if ((tmp19)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp20 = (newByteLength < (int)0);
											if ((tmp20)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp17 = (null() * _this->bytesPerElement);
											newByteLength = tmp17;
											int tmp18 = (in_byteOffset + newByteLength);
											int newRange = tmp18;
											bool tmp19 = (newRange > bufferByteLength);
											if ((tmp19)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = null();
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp17 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp18 = ::Std_obj::_int(tmp17);
										_this->length = tmp18;
										tmp10 = _this;
									}
									this1 = tmp10;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
				}
				tmp4 = this1;
			}
			this->__uniformMatrix2 = tmp4;
			::lime::utils::ArrayBufferView tmp5;
			{
				::lime::utils::ArrayBufferView this1;
				bool tmp6 = true;
				if ((tmp6)){
					::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)9,(int)8);
					this1 = tmp7;
				}
				else{
					bool tmp7 = false;
					if ((tmp7)){
						::lime::utils::ArrayBufferView tmp8;
						{
							::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
							::lime::utils::ArrayBufferView _this = tmp9;
							_this->byteOffset = (int)0;
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp10;
							int tmp11 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp11;
							::haxe::io::Bytes tmp12;
							{
								::haxe::io::Bytes this2;
								int tmp13 = _this->byteLength;
								::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);
								this2 = tmp14;
								tmp12 = this2;
							}
							_this->buffer = tmp12;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp8 = _this;
						}
						this1 = tmp8;
					}
					else{
						bool tmp8 = false;
						if ((tmp8)){
							::lime::utils::ArrayBufferView tmp9;
							{
								::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
								::lime::utils::ArrayBufferView _this = tmp10;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp11 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp11;
								::haxe::io::Bytes tmp12;
								{
									::haxe::io::Bytes this2;
									int tmp13 = _this->byteLength;
									::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);
									this2 = tmp14;
									tmp12 = this2;
								}
								_this->buffer = tmp12;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp9 = _this;
							}
							this1 = tmp9;
						}
						else{
							bool tmp9 = false;
							if ((tmp9)){
								::lime::utils::ArrayBufferView tmp10;
								{
									::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
									::lime::utils::ArrayBufferView _this = tmp11;
									::haxe::io::Bytes tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp12;
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp13;
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp14;
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp15;
									int elementSize = _this->bytesPerElement;
									int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp17 = _this->type;
									bool tmp18 = (tmp16 == tmp17);
									if ((tmp18)){
										int srcLength1 = srcData->length;
										int tmp19 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp19;
										::haxe::io::Bytes tmp20;
										{
											::haxe::io::Bytes this2;
											int tmp21 = cloneLength;
											::haxe::io::Bytes tmp22 = ::haxe::io::Bytes_obj::alloc(tmp21);
											this2 = tmp22;
											tmp20 = this2;
										}
										_this->buffer = tmp20;
										::haxe::io::Bytes tmp21 = srcData;
										int tmp22 = srcByteOffset;
										int tmp23 = cloneLength;
										_this->buffer->blit((int)0,tmp21,tmp22,tmp23);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp19 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp19;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp10 = _this;
								}
								this1 = tmp10;
							}
							else{
								bool tmp10 = false;
								if ((tmp10)){
									::lime::utils::ArrayBufferView tmp11;
									{
										::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
										::lime::utils::ArrayBufferView _this = tmp12;
										int in_byteOffset = (int)0;
										bool tmp13 = (in_byteOffset < (int)0);
										if ((tmp13)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp14 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp15 = (tmp14 != (int)0);
										if ((tmp15)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
										int bufferByteLength = tmp16;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp17 = true;
										if ((tmp17)){
											int tmp18 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp18;
											int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp20 = (tmp19 != (int)0);
											if ((tmp20)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp21 = (newByteLength < (int)0);
											if ((tmp21)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp18 = (null() * _this->bytesPerElement);
											newByteLength = tmp18;
											int tmp19 = (in_byteOffset + newByteLength);
											int newRange = tmp19;
											bool tmp20 = (newRange > bufferByteLength);
											if ((tmp20)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = null();
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp19 = ::Std_obj::_int(tmp18);
										_this->length = tmp19;
										tmp11 = _this;
									}
									this1 = tmp11;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
				}
				tmp5 = this1;
			}
			this->__uniformMatrix3 = tmp5;
			::lime::utils::ArrayBufferView tmp6;
			{
				::lime::utils::ArrayBufferView this1;
				bool tmp7 = true;
				if ((tmp7)){
					::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)16,(int)8);
					this1 = tmp8;
				}
				else{
					bool tmp8 = false;
					if ((tmp8)){
						::lime::utils::ArrayBufferView tmp9;
						{
							::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
							::lime::utils::ArrayBufferView _this = tmp10;
							_this->byteOffset = (int)0;
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp11;
							int tmp12 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp12;
							::haxe::io::Bytes tmp13;
							{
								::haxe::io::Bytes this2;
								int tmp14 = _this->byteLength;
								::haxe::io::Bytes tmp15 = ::haxe::io::Bytes_obj::alloc(tmp14);
								this2 = tmp15;
								tmp13 = this2;
							}
							_this->buffer = tmp13;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp9 = _this;
						}
						this1 = tmp9;
					}
					else{
						bool tmp9 = false;
						if ((tmp9)){
							::lime::utils::ArrayBufferView tmp10;
							{
								::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
								::lime::utils::ArrayBufferView _this = tmp11;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp12 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp12;
								::haxe::io::Bytes tmp13;
								{
									::haxe::io::Bytes this2;
									int tmp14 = _this->byteLength;
									::haxe::io::Bytes tmp15 = ::haxe::io::Bytes_obj::alloc(tmp14);
									this2 = tmp15;
									tmp13 = this2;
								}
								_this->buffer = tmp13;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp10 = _this;
							}
							this1 = tmp10;
						}
						else{
							bool tmp10 = false;
							if ((tmp10)){
								::lime::utils::ArrayBufferView tmp11;
								{
									::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
									::lime::utils::ArrayBufferView _this = tmp12;
									::haxe::io::Bytes tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp13;
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp14;
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp15;
									int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp16;
									int elementSize = _this->bytesPerElement;
									int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp18 = _this->type;
									bool tmp19 = (tmp17 == tmp18);
									if ((tmp19)){
										int srcLength1 = srcData->length;
										int tmp20 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp20;
										::haxe::io::Bytes tmp21;
										{
											::haxe::io::Bytes this2;
											int tmp22 = cloneLength;
											::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);
											this2 = tmp23;
											tmp21 = this2;
										}
										_this->buffer = tmp21;
										::haxe::io::Bytes tmp22 = srcData;
										int tmp23 = srcByteOffset;
										int tmp24 = cloneLength;
										_this->buffer->blit((int)0,tmp22,tmp23,tmp24);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp20 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp20;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp11 = _this;
								}
								this1 = tmp11;
							}
							else{
								bool tmp11 = false;
								if ((tmp11)){
									::lime::utils::ArrayBufferView tmp12;
									{
										::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
										::lime::utils::ArrayBufferView _this = tmp13;
										int in_byteOffset = (int)0;
										bool tmp14 = (in_byteOffset < (int)0);
										if ((tmp14)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp15 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp16 = (tmp15 != (int)0);
										if ((tmp16)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
										int bufferByteLength = tmp17;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp18 = true;
										if ((tmp18)){
											int tmp19 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp19;
											int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp21 = (tmp20 != (int)0);
											if ((tmp21)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp22 = (newByteLength < (int)0);
											if ((tmp22)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp19 = (null() * _this->bytesPerElement);
											newByteLength = tmp19;
											int tmp20 = (in_byteOffset + newByteLength);
											int newRange = tmp20;
											bool tmp21 = (newRange > bufferByteLength);
											if ((tmp21)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = null();
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp20 = ::Std_obj::_int(tmp19);
										_this->length = tmp20;
										tmp12 = _this;
									}
									this1 = tmp12;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
				}
				tmp6 = this1;
			}
			this->__uniformMatrix4 = tmp6;
			::String tmp7 = this->get_glVertexSource();
			this->__processGLData(tmp7,HX_HCSTRING("attribute","\x1c","\x70","\xf0","\xfa"));
			::String tmp8 = this->get_glVertexSource();
			this->__processGLData(tmp8,HX_HCSTRING("uniform","\x34","\x41","\x64","\xb5"));
			::String tmp9 = this->get_glFragmentSource();
			this->__processGLData(tmp9,HX_HCSTRING("uniform","\x34","\x41","\x64","\xb5"));
		}
		::lime::_backend::native::NativeGLRenderContext tmp3 = this->gl;
		bool tmp4 = (tmp3 != null());
		bool tmp5;
		if ((tmp4)){
			::lime::graphics::opengl::GLObject tmp6 = this->glProgram;
			::lime::graphics::opengl::GLObject tmp7 = tmp6;
			tmp5 = (tmp7 == null());
		}
		else{
			tmp5 = false;
		}
		if ((tmp5)){
			Dynamic tmp6 = this->precisionHint;
			bool tmp7 = (tmp6 == ((Dynamic)((int)1)));
			::String tmp8;
			if ((tmp7)){
				tmp8 = HX_HCSTRING("mediump","\x5b","\x92","\x81","\xf0");
			}
			else{
				tmp8 = HX_HCSTRING("lowp","\x5c","\xad","\xb7","\x47");
			}
			::String tmp9 = (HX_HCSTRING("#ifdef GL_ES\n\t\t\t\tprecision ","\xdf","\x92","\x6a","\x64") + tmp8);
			::String tmp10 = (tmp9 + HX_HCSTRING(" float;\n\t\t\t\t#endif\n\t\t\t\t","\xea","\xd3","\x26","\xbb"));
			::String tmp11 = this->get_glFragmentSource();
			::String tmp12 = (tmp10 + tmp11);
			::String fragment = tmp12;
			::String tmp13 = this->get_glVertexSource();
			::String tmp14 = fragment;
			::lime::graphics::opengl::GLObject tmp15 = ::lime::utils::GLUtils_obj::createProgram(tmp13,tmp14);
			this->glProgram = tmp15;
			::lime::graphics::opengl::GLObject tmp16 = this->glProgram;
			bool tmp17 = (tmp16 != null());
			if ((tmp17)){
				{
					int _g = (int)0;
					Array< ::Dynamic > _g1 = this->__inputBitmapData;
					while((true)){
						bool tmp18 = (_g < _g1->length);
						bool tmp19 = !(tmp18);
						if ((tmp19)){
							break;
						}
						::openfl::display::ShaderInput_openfl_display_BitmapData tmp20 = _g1->__get(_g).StaticCast< ::openfl::display::ShaderInput_openfl_display_BitmapData >();
						::openfl::display::ShaderInput_openfl_display_BitmapData input = tmp20;
						++(_g);
						::haxe::ds::StringMap tmp21 = this->__isUniform;
						::String tmp22 = input->name;
						Dynamic tmp23 = tmp21->get(tmp22);
						Dynamic tmp24 = tmp23;
						if ((tmp24)){
							::lime::_backend::native::NativeGLRenderContext tmp25 = this->gl;
							::lime::graphics::opengl::GLObject tmp26 = this->glProgram;
							::String tmp27 = input->name;
							int tmp28 = tmp25->getUniformLocation(tmp26,tmp27);
							input->index = tmp28;
						}
						else{
							::lime::_backend::native::NativeGLRenderContext tmp25 = this->gl;
							::lime::graphics::opengl::GLObject tmp26 = this->glProgram;
							::String tmp27 = input->name;
							int tmp28 = tmp25->getAttribLocation(tmp26,tmp27);
							input->index = tmp28;
						}
					}
				}
				{
					int _g = (int)0;
					Array< ::Dynamic > _g1 = this->__paramBool;
					while((true)){
						bool tmp18 = (_g < _g1->length);
						bool tmp19 = !(tmp18);
						if ((tmp19)){
							break;
						}
						::openfl::display::ShaderParameter_Bool tmp20 = _g1->__get(_g).StaticCast< ::openfl::display::ShaderParameter_Bool >();
						::openfl::display::ShaderParameter_Bool parameter = tmp20;
						++(_g);
						::haxe::ds::StringMap tmp21 = this->__isUniform;
						::String tmp22 = parameter->name;
						Dynamic tmp23 = tmp21->get(tmp22);
						Dynamic tmp24 = tmp23;
						if ((tmp24)){
							::lime::_backend::native::NativeGLRenderContext tmp25 = this->gl;
							::lime::graphics::opengl::GLObject tmp26 = this->glProgram;
							::String tmp27 = parameter->name;
							int tmp28 = tmp25->getUniformLocation(tmp26,tmp27);
							parameter->index = tmp28;
						}
						else{
							::lime::_backend::native::NativeGLRenderContext tmp25 = this->gl;
							::lime::graphics::opengl::GLObject tmp26 = this->glProgram;
							::String tmp27 = parameter->name;
							int tmp28 = tmp25->getAttribLocation(tmp26,tmp27);
							parameter->index = tmp28;
						}
					}
				}
				{
					int _g = (int)0;
					Array< ::Dynamic > _g1 = this->__paramFloat;
					while((true)){
						bool tmp18 = (_g < _g1->length);
						bool tmp19 = !(tmp18);
						if ((tmp19)){
							break;
						}
						::openfl::display::ShaderParameter_Float tmp20 = _g1->__get(_g).StaticCast< ::openfl::display::ShaderParameter_Float >();
						::openfl::display::ShaderParameter_Float parameter = tmp20;
						++(_g);
						::haxe::ds::StringMap tmp21 = this->__isUniform;
						::String tmp22 = parameter->name;
						Dynamic tmp23 = tmp21->get(tmp22);
						Dynamic tmp24 = tmp23;
						if ((tmp24)){
							::lime::_backend::native::NativeGLRenderContext tmp25 = this->gl;
							::lime::graphics::opengl::GLObject tmp26 = this->glProgram;
							::String tmp27 = parameter->name;
							int tmp28 = tmp25->getUniformLocation(tmp26,tmp27);
							parameter->index = tmp28;
						}
						else{
							::lime::_backend::native::NativeGLRenderContext tmp25 = this->gl;
							::lime::graphics::opengl::GLObject tmp26 = this->glProgram;
							::String tmp27 = parameter->name;
							int tmp28 = tmp25->getAttribLocation(tmp26,tmp27);
							parameter->index = tmp28;
						}
					}
				}
				{
					int _g = (int)0;
					Array< ::Dynamic > _g1 = this->__paramInt;
					while((true)){
						bool tmp18 = (_g < _g1->length);
						bool tmp19 = !(tmp18);
						if ((tmp19)){
							break;
						}
						::openfl::display::ShaderParameter_Int tmp20 = _g1->__get(_g).StaticCast< ::openfl::display::ShaderParameter_Int >();
						::openfl::display::ShaderParameter_Int parameter = tmp20;
						++(_g);
						::haxe::ds::StringMap tmp21 = this->__isUniform;
						::String tmp22 = parameter->name;
						Dynamic tmp23 = tmp21->get(tmp22);
						Dynamic tmp24 = tmp23;
						if ((tmp24)){
							::lime::_backend::native::NativeGLRenderContext tmp25 = this->gl;
							::lime::graphics::opengl::GLObject tmp26 = this->glProgram;
							::String tmp27 = parameter->name;
							int tmp28 = tmp25->getUniformLocation(tmp26,tmp27);
							parameter->index = tmp28;
						}
						else{
							::lime::_backend::native::NativeGLRenderContext tmp25 = this->gl;
							::lime::graphics::opengl::GLObject tmp26 = this->glProgram;
							::String tmp27 = parameter->name;
							int tmp28 = tmp25->getAttribLocation(tmp26,tmp27);
							parameter->index = tmp28;
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,__initGL,(void))

Void Shader_obj::__processGLData( ::String source,::String storageType){
{
		int lastMatch = (int)0;
		Dynamic position;
		::EReg regex;
		::String name;
		::String type;
		bool tmp = (storageType == HX_HCSTRING("uniform","\x34","\x41","\x64","\xb5"));
		if ((tmp)){
			::EReg tmp1 = ::EReg_obj::__new(HX_HCSTRING("uniform ([A-Za-z0-9]+) ([A-Za-z0-9]+)","\x74","\x9c","\x40","\x21"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			regex = tmp1;
		}
		else{
			::EReg tmp1 = ::EReg_obj::__new(HX_HCSTRING("attribute ([A-Za-z0-9]+) ([A-Za-z0-9]+)","\x5c","\x61","\xa8","\xc8"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			regex = tmp1;
		}
		while((true)){
			::String tmp1 = source;
			int tmp2 = lastMatch;
			bool tmp3 = regex->matchSub(tmp1,tmp2,null());
			bool tmp4 = !(tmp3);
			if ((tmp4)){
				break;
			}
			::String tmp5 = regex->matched((int)1);
			type = tmp5;
			::String tmp6 = regex->matched((int)2);
			name = tmp6;
			::String tmp7 = type;
			bool tmp8 = ::StringTools_obj::startsWith(tmp7,HX_HCSTRING("sampler","\x08","\xc5","\xc9","\x83"));
			if ((tmp8)){
				::openfl::display::ShaderInput_openfl_display_BitmapData tmp9 = ::openfl::display::ShaderInput_openfl_display_BitmapData_obj::__new();
				::openfl::display::ShaderInput_openfl_display_BitmapData input = tmp9;
				input->name = name;
				::openfl::display::ShaderInput_openfl_display_BitmapData tmp10 = input;
				this->__inputBitmapData->push(tmp10);
				::openfl::display::ShaderData tmp11 = this->get_data();
				::String tmp12 = name;
				::openfl::display::ShaderInput_openfl_display_BitmapData tmp13 = input;
				::Reflect_obj::setField(tmp11,tmp12,tmp13);
			}
			else{
				::String tmp9 = type;
				Dynamic tmp10;
				::String _switch_1 = (tmp9);
				if (  ( _switch_1==HX_HCSTRING("bool","\x2a","\x84","\x1b","\x41"))){
					tmp10 = ((Dynamic)((int)0));
				}
				else if (  ( _switch_1==HX_HCSTRING("double","\x11","\x2b","\xcb","\x32")) ||  ( _switch_1==HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"))){
					tmp10 = ((Dynamic)((int)4));
				}
				else if (  ( _switch_1==HX_HCSTRING("int","\xef","\x0c","\x50","\x00")) ||  ( _switch_1==HX_HCSTRING("uint","\x9a","\x03","\xa6","\x4d"))){
					tmp10 = ((Dynamic)((int)8));
				}
				else if (  ( _switch_1==HX_HCSTRING("bvec2","\xc0","\x00","\x91","\xbb"))){
					tmp10 = ((Dynamic)((int)1));
				}
				else if (  ( _switch_1==HX_HCSTRING("bvec3","\xc1","\x00","\x91","\xbb"))){
					tmp10 = ((Dynamic)((int)2));
				}
				else if (  ( _switch_1==HX_HCSTRING("bvec4","\xc2","\x00","\x91","\xbb"))){
					tmp10 = ((Dynamic)((int)3));
				}
				else if (  ( _switch_1==HX_HCSTRING("ivec2","\x47","\x10","\x5f","\xc3")) ||  ( _switch_1==HX_HCSTRING("uvec2","\x53","\x06","\x2e","\xac"))){
					tmp10 = ((Dynamic)((int)9));
				}
				else if (  ( _switch_1==HX_HCSTRING("ivec3","\x48","\x10","\x5f","\xc3")) ||  ( _switch_1==HX_HCSTRING("uvec3","\x54","\x06","\x2e","\xac"))){
					tmp10 = ((Dynamic)((int)10));
				}
				else if (  ( _switch_1==HX_HCSTRING("ivec4","\x49","\x10","\x5f","\xc3")) ||  ( _switch_1==HX_HCSTRING("uvec4","\x55","\x06","\x2e","\xac"))){
					tmp10 = ((Dynamic)((int)11));
				}
				else if (  ( _switch_1==HX_HCSTRING("vec2","\x5e","\x27","\x4c","\x4e")) ||  ( _switch_1==HX_HCSTRING("dvec2","\xc2","\x29","\x5e","\xe2"))){
					tmp10 = ((Dynamic)((int)5));
				}
				else if (  ( _switch_1==HX_HCSTRING("vec3","\x5f","\x27","\x4c","\x4e")) ||  ( _switch_1==HX_HCSTRING("dvec3","\xc3","\x29","\x5e","\xe2"))){
					tmp10 = ((Dynamic)((int)6));
				}
				else if (  ( _switch_1==HX_HCSTRING("vec4","\x60","\x27","\x4c","\x4e")) ||  ( _switch_1==HX_HCSTRING("dvec4","\xc4","\x29","\x5e","\xe2"))){
					tmp10 = ((Dynamic)((int)7));
				}
				else if (  ( _switch_1==HX_HCSTRING("mat2","\x92","\x41","\x56","\x48")) ||  ( _switch_1==HX_HCSTRING("mat2x2","\xcc","\xb2","\x97","\xbb"))){
					tmp10 = ((Dynamic)((int)12));
				}
				else if (  ( _switch_1==HX_HCSTRING("mat2x3","\xcd","\xb2","\x97","\xbb"))){
					tmp10 = ((Dynamic)((int)13));
				}
				else if (  ( _switch_1==HX_HCSTRING("mat2x4","\xce","\xb2","\x97","\xbb"))){
					tmp10 = ((Dynamic)((int)14));
				}
				else if (  ( _switch_1==HX_HCSTRING("mat3x2","\x0d","\x75","\x98","\xbb"))){
					tmp10 = ((Dynamic)((int)15));
				}
				else if (  ( _switch_1==HX_HCSTRING("mat3","\x93","\x41","\x56","\x48")) ||  ( _switch_1==HX_HCSTRING("mat3x3","\x0e","\x75","\x98","\xbb"))){
					tmp10 = ((Dynamic)((int)16));
				}
				else if (  ( _switch_1==HX_HCSTRING("mat3x4","\x0f","\x75","\x98","\xbb"))){
					tmp10 = ((Dynamic)((int)17));
				}
				else if (  ( _switch_1==HX_HCSTRING("mat4x2","\x4e","\x37","\x99","\xbb"))){
					tmp10 = ((Dynamic)((int)18));
				}
				else if (  ( _switch_1==HX_HCSTRING("mat4x3","\x4f","\x37","\x99","\xbb"))){
					tmp10 = ((Dynamic)((int)19));
				}
				else if (  ( _switch_1==HX_HCSTRING("mat4","\x94","\x41","\x56","\x48")) ||  ( _switch_1==HX_HCSTRING("mat4x4","\x50","\x37","\x99","\xbb"))){
					tmp10 = ((Dynamic)((int)20));
				}
				else  {
					tmp10 = null();
				}
;
;
				Dynamic parameterType = tmp10;
				Dynamic tmp11 = parameterType;
				switch( (int)(tmp11)){
					case (int)0: case (int)1: case (int)2: case (int)3: {
						::openfl::display::ShaderParameter_Bool tmp12 = ::openfl::display::ShaderParameter_Bool_obj::__new();
						::openfl::display::ShaderParameter_Bool parameter = tmp12;
						parameter->name = name;
						parameter->type = parameterType;
						::openfl::display::ShaderParameter_Bool tmp13 = parameter;
						this->__paramBool->push(tmp13);
						::openfl::display::ShaderData tmp14 = this->get_data();
						::String tmp15 = name;
						::openfl::display::ShaderParameter_Bool tmp16 = parameter;
						::Reflect_obj::setField(tmp14,tmp15,tmp16);
					}
					;break;
					case (int)8: case (int)9: case (int)10: case (int)11: {
						::openfl::display::ShaderParameter_Int tmp12 = ::openfl::display::ShaderParameter_Int_obj::__new();
						::openfl::display::ShaderParameter_Int parameter = tmp12;
						parameter->name = name;
						parameter->type = parameterType;
						::openfl::display::ShaderParameter_Int tmp13 = parameter;
						this->__paramInt->push(tmp13);
						::openfl::display::ShaderData tmp14 = this->get_data();
						::String tmp15 = name;
						::openfl::display::ShaderParameter_Int tmp16 = parameter;
						::Reflect_obj::setField(tmp14,tmp15,tmp16);
					}
					;break;
					default: {
						::openfl::display::ShaderParameter_Float tmp12 = ::openfl::display::ShaderParameter_Float_obj::__new();
						::openfl::display::ShaderParameter_Float parameter = tmp12;
						parameter->name = name;
						parameter->type = parameterType;
						::openfl::display::ShaderParameter_Float tmp13 = parameter;
						this->__paramFloat->push(tmp13);
						::openfl::display::ShaderData tmp14 = this->get_data();
						::String tmp15 = name;
						::openfl::display::ShaderParameter_Float tmp16 = parameter;
						::Reflect_obj::setField(tmp14,tmp15,tmp16);
					}
				}
			}
			::haxe::ds::StringMap tmp9 = this->__isUniform;
			::String tmp10 = name;
			bool tmp11 = (storageType == HX_HCSTRING("uniform","\x34","\x41","\x64","\xb5"));
			tmp9->set(tmp10,tmp11);
			Dynamic tmp12 = regex->matchedPos();
			position = tmp12;
			int tmp13 = (position->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) + position->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic ));
			lastMatch = tmp13;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,__processGLData,(void))

Void Shader_obj::__update( ){
{
		::lime::graphics::opengl::GLObject tmp = this->glProgram;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			this->__updateGL();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,__update,(void))

Void Shader_obj::__updateGL( ){
{
		int textureCount = (int)0;
		{
			int _g = (int)0;
			Array< ::Dynamic > _g1 = this->__inputBitmapData;
			while((true)){
				bool tmp = (_g < _g1->length);
				bool tmp1 = !(tmp);
				if ((tmp1)){
					break;
				}
				::openfl::display::ShaderInput_openfl_display_BitmapData tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::ShaderInput_openfl_display_BitmapData >();
				::openfl::display::ShaderInput_openfl_display_BitmapData input = tmp2;
				++(_g);
				bool tmp3 = (input->input != null());
				if ((tmp3)){
					::lime::_backend::native::NativeGLRenderContext tmp4 = this->gl;
					::lime::_backend::native::NativeGLRenderContext tmp5 = this->gl;
					int tmp6 = tmp5->TEXTURE0;
					int tmp7 = textureCount;
					int tmp8 = (tmp6 + tmp7);
					tmp4->activeTexture(tmp8);
					::lime::_backend::native::NativeGLRenderContext tmp9 = this->gl;
					::lime::_backend::native::NativeGLRenderContext tmp10 = this->gl;
					int tmp11 = tmp10->TEXTURE_2D;
					::lime::_backend::native::NativeGLRenderContext tmp12 = this->gl;
					::lime::graphics::opengl::GLObject tmp13 = input->input->getTexture(tmp12);
					tmp9->bindTexture(tmp11,tmp13);
					bool tmp14 = input->smoothing;
					if ((tmp14)){
						::lime::_backend::native::NativeGLRenderContext tmp15 = this->gl;
						::lime::_backend::native::NativeGLRenderContext tmp16 = this->gl;
						int tmp17 = tmp16->TEXTURE_2D;
						::lime::_backend::native::NativeGLRenderContext tmp18 = this->gl;
						int tmp19 = tmp18->TEXTURE_MAG_FILTER;
						::lime::_backend::native::NativeGLRenderContext tmp20 = this->gl;
						int tmp21 = tmp20->LINEAR;
						tmp15->texParameteri(tmp17,tmp19,tmp21);
						::lime::_backend::native::NativeGLRenderContext tmp22 = this->gl;
						::lime::_backend::native::NativeGLRenderContext tmp23 = this->gl;
						int tmp24 = tmp23->TEXTURE_2D;
						::lime::_backend::native::NativeGLRenderContext tmp25 = this->gl;
						int tmp26 = tmp25->TEXTURE_MIN_FILTER;
						::lime::_backend::native::NativeGLRenderContext tmp27 = this->gl;
						int tmp28 = tmp27->LINEAR;
						tmp22->texParameteri(tmp24,tmp26,tmp28);
					}
					else{
						::lime::_backend::native::NativeGLRenderContext tmp15 = this->gl;
						::lime::_backend::native::NativeGLRenderContext tmp16 = this->gl;
						int tmp17 = tmp16->TEXTURE_2D;
						::lime::_backend::native::NativeGLRenderContext tmp18 = this->gl;
						int tmp19 = tmp18->TEXTURE_MAG_FILTER;
						::lime::_backend::native::NativeGLRenderContext tmp20 = this->gl;
						int tmp21 = tmp20->NEAREST;
						tmp15->texParameteri(tmp17,tmp19,tmp21);
						::lime::_backend::native::NativeGLRenderContext tmp22 = this->gl;
						::lime::_backend::native::NativeGLRenderContext tmp23 = this->gl;
						int tmp24 = tmp23->TEXTURE_2D;
						::lime::_backend::native::NativeGLRenderContext tmp25 = this->gl;
						int tmp26 = tmp25->TEXTURE_MIN_FILTER;
						::lime::_backend::native::NativeGLRenderContext tmp27 = this->gl;
						int tmp28 = tmp27->NEAREST;
						tmp22->texParameteri(tmp24,tmp26,tmp28);
					}
				}
				(textureCount)++;
			}
		}
		Array< bool > value;
		int index;
		{
			int _g = (int)0;
			Array< ::Dynamic > _g1 = this->__paramBool;
			while((true)){
				bool tmp = (_g < _g1->length);
				bool tmp1 = !(tmp);
				if ((tmp1)){
					break;
				}
				::openfl::display::ShaderParameter_Bool tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::ShaderParameter_Bool >();
				::openfl::display::ShaderParameter_Bool parameter = tmp2;
				++(_g);
				value = parameter->value;
				index = parameter->index;
				bool tmp3 = (value != null());
				if ((tmp3)){
					Dynamic _g2 = parameter->type;
					Dynamic tmp4 = _g2;
					switch( (int)(tmp4)){
						case (int)0: {
							::lime::_backend::native::NativeGLRenderContext tmp5 = this->gl;
							int tmp6 = index;
							bool tmp7 = value->__get((int)0);
							int tmp8;
							if ((tmp7)){
								tmp8 = (int)1;
							}
							else{
								tmp8 = (int)0;
							}
							tmp5->uniform1i(tmp6,tmp8);
						}
						;break;
						case (int)1: {
							::lime::_backend::native::NativeGLRenderContext tmp5 = this->gl;
							int tmp6 = index;
							bool tmp7 = value->__get((int)0);
							int tmp8;
							if ((tmp7)){
								tmp8 = (int)1;
							}
							else{
								tmp8 = (int)0;
							}
							bool tmp9 = value->__get((int)1);
							int tmp10;
							if ((tmp9)){
								tmp10 = (int)1;
							}
							else{
								tmp10 = (int)0;
							}
							tmp5->uniform2i(tmp6,tmp8,tmp10);
						}
						;break;
						case (int)2: {
							::lime::_backend::native::NativeGLRenderContext tmp5 = this->gl;
							int tmp6 = index;
							bool tmp7 = value->__get((int)0);
							int tmp8;
							if ((tmp7)){
								tmp8 = (int)1;
							}
							else{
								tmp8 = (int)0;
							}
							bool tmp9 = value->__get((int)1);
							int tmp10;
							if ((tmp9)){
								tmp10 = (int)1;
							}
							else{
								tmp10 = (int)0;
							}
							bool tmp11 = value->__get((int)2);
							int tmp12;
							if ((tmp11)){
								tmp12 = (int)1;
							}
							else{
								tmp12 = (int)0;
							}
							tmp5->uniform3i(tmp6,tmp8,tmp10,tmp12);
						}
						;break;
						case (int)3: {
							::lime::_backend::native::NativeGLRenderContext tmp5 = this->gl;
							int tmp6 = index;
							bool tmp7 = value->__get((int)0);
							int tmp8;
							if ((tmp7)){
								tmp8 = (int)1;
							}
							else{
								tmp8 = (int)0;
							}
							bool tmp9 = value->__get((int)1);
							int tmp10;
							if ((tmp9)){
								tmp10 = (int)1;
							}
							else{
								tmp10 = (int)0;
							}
							bool tmp11 = value->__get((int)2);
							int tmp12;
							if ((tmp11)){
								tmp12 = (int)1;
							}
							else{
								tmp12 = (int)0;
							}
							bool tmp13 = value->__get((int)3);
							int tmp14;
							if ((tmp13)){
								tmp14 = (int)1;
							}
							else{
								tmp14 = (int)0;
							}
							tmp5->uniform4i(tmp6,tmp8,tmp10,tmp12,tmp14);
						}
						;break;
						default: {
						}
					}
				}
				else{
					::haxe::ds::StringMap tmp4 = this->__isUniform;
					::String tmp5 = parameter->name;
					Dynamic tmp6 = tmp4->get(tmp5);
					Dynamic tmp7 = tmp6;
					bool tmp8 = !(tmp7);
					if ((tmp8)){
						::lime::_backend::native::NativeGLRenderContext tmp9 = this->gl;
						int tmp10 = parameter->index;
						tmp9->enableVertexAttribArray(tmp10);
					}
				}
			}
		}
		Array< Float > value1;
		int index1;
		{
			int _g = (int)0;
			Array< ::Dynamic > _g1 = this->__paramFloat;
			while((true)){
				bool tmp = (_g < _g1->length);
				bool tmp1 = !(tmp);
				if ((tmp1)){
					break;
				}
				::openfl::display::ShaderParameter_Float tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::ShaderParameter_Float >();
				::openfl::display::ShaderParameter_Float parameter = tmp2;
				++(_g);
				value1 = parameter->value;
				index1 = parameter->index;
				bool tmp3 = (value1 != null());
				if ((tmp3)){
					Dynamic _g2 = parameter->type;
					Dynamic tmp4 = _g2;
					switch( (int)(tmp4)){
						case (int)4: {
							::lime::_backend::native::NativeGLRenderContext tmp5 = this->gl;
							int tmp6 = index1;
							Float tmp7 = value1->__get((int)0);
							tmp5->uniform1f(tmp6,tmp7);
						}
						;break;
						case (int)5: {
							::lime::_backend::native::NativeGLRenderContext tmp5 = this->gl;
							int tmp6 = index1;
							Float tmp7 = value1->__get((int)0);
							Float tmp8 = value1->__get((int)1);
							tmp5->uniform2f(tmp6,tmp7,tmp8);
						}
						;break;
						case (int)6: {
							::lime::_backend::native::NativeGLRenderContext tmp5 = this->gl;
							int tmp6 = index1;
							Float tmp7 = value1->__get((int)0);
							Float tmp8 = value1->__get((int)1);
							Float tmp9 = value1->__get((int)2);
							tmp5->uniform3f(tmp6,tmp7,tmp8,tmp9);
						}
						;break;
						case (int)7: {
							::lime::_backend::native::NativeGLRenderContext tmp5 = this->gl;
							int tmp6 = index1;
							Float tmp7 = value1->__get((int)0);
							Float tmp8 = value1->__get((int)1);
							Float tmp9 = value1->__get((int)2);
							Float tmp10 = value1->__get((int)3);
							tmp5->uniform4f(tmp6,tmp7,tmp8,tmp9,tmp10);
						}
						;break;
						case (int)12: {
							{
								int _g3 = (int)0;
								while((true)){
									bool tmp5 = (_g3 < (int)4);
									bool tmp6 = !(tmp5);
									if ((tmp6)){
										break;
									}
									int tmp7 = (_g3)++;
									int i = tmp7;
									{
										::lime::utils::ArrayBufferView tmp8 = this->__uniformMatrix2;
										::lime::utils::ArrayBufferView this1 = tmp8;
										Float tmp9 = value1->__get(i);
										Float val = tmp9;
										::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (i * (int)4)),val);
										val;
									}
								}
							}
							::lime::_backend::native::NativeGLRenderContext tmp5 = this->gl;
							int tmp6 = index1;
							::lime::utils::ArrayBufferView tmp7 = this->__uniformMatrix2;
							Float tmp8 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBufferView(tmp7);
							tmp5->uniformMatrix2fv(tmp6,(int)1,false,tmp8);
						}
						;break;
						case (int)16: {
							{
								int _g3 = (int)0;
								while((true)){
									bool tmp5 = (_g3 < (int)9);
									bool tmp6 = !(tmp5);
									if ((tmp6)){
										break;
									}
									int tmp7 = (_g3)++;
									int i = tmp7;
									{
										::lime::utils::ArrayBufferView tmp8 = this->__uniformMatrix3;
										::lime::utils::ArrayBufferView this1 = tmp8;
										Float tmp9 = value1->__get(i);
										Float val = tmp9;
										::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (i * (int)4)),val);
										val;
									}
								}
							}
							::lime::_backend::native::NativeGLRenderContext tmp5 = this->gl;
							int tmp6 = index1;
							::lime::utils::ArrayBufferView tmp7 = this->__uniformMatrix3;
							Float tmp8 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBufferView(tmp7);
							tmp5->uniformMatrix3fv(tmp6,(int)1,false,tmp8);
						}
						;break;
						case (int)20: {
							{
								int _g3 = (int)0;
								while((true)){
									bool tmp5 = (_g3 < (int)16);
									bool tmp6 = !(tmp5);
									if ((tmp6)){
										break;
									}
									int tmp7 = (_g3)++;
									int i = tmp7;
									{
										::lime::utils::ArrayBufferView tmp8 = this->__uniformMatrix4;
										::lime::utils::ArrayBufferView this1 = tmp8;
										Float tmp9 = value1->__get(i);
										Float val = tmp9;
										::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (i * (int)4)),val);
										val;
									}
								}
							}
							::lime::_backend::native::NativeGLRenderContext tmp5 = this->gl;
							int tmp6 = index1;
							::lime::utils::ArrayBufferView tmp7 = this->__uniformMatrix4;
							Float tmp8 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBufferView(tmp7);
							tmp5->uniformMatrix4fv(tmp6,(int)1,false,tmp8);
						}
						;break;
						default: {
						}
					}
				}
				else{
					::haxe::ds::StringMap tmp4 = this->__isUniform;
					::String tmp5 = parameter->name;
					Dynamic tmp6 = tmp4->get(tmp5);
					Dynamic tmp7 = tmp6;
					bool tmp8 = !(tmp7);
					if ((tmp8)){
						::lime::_backend::native::NativeGLRenderContext tmp9 = this->gl;
						int tmp10 = parameter->index;
						tmp9->enableVertexAttribArray(tmp10);
					}
				}
			}
		}
		Array< int > value2;
		int index2;
		{
			int _g = (int)0;
			Array< ::Dynamic > _g1 = this->__paramInt;
			while((true)){
				bool tmp = (_g < _g1->length);
				bool tmp1 = !(tmp);
				if ((tmp1)){
					break;
				}
				::openfl::display::ShaderParameter_Int tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::ShaderParameter_Int >();
				::openfl::display::ShaderParameter_Int parameter = tmp2;
				++(_g);
				value2 = parameter->value;
				index2 = parameter->index;
				bool tmp3 = (value2 != null());
				if ((tmp3)){
					Dynamic _g2 = parameter->type;
					Dynamic tmp4 = _g2;
					switch( (int)(tmp4)){
						case (int)8: {
							::lime::_backend::native::NativeGLRenderContext tmp5 = this->gl;
							int tmp6 = index2;
							int tmp7 = value2->__get((int)0);
							tmp5->uniform1i(tmp6,tmp7);
						}
						;break;
						case (int)9: {
							::lime::_backend::native::NativeGLRenderContext tmp5 = this->gl;
							int tmp6 = index2;
							int tmp7 = value2->__get((int)0);
							int tmp8 = value2->__get((int)1);
							tmp5->uniform2i(tmp6,tmp7,tmp8);
						}
						;break;
						case (int)10: {
							::lime::_backend::native::NativeGLRenderContext tmp5 = this->gl;
							int tmp6 = index2;
							int tmp7 = value2->__get((int)0);
							int tmp8 = value2->__get((int)1);
							int tmp9 = value2->__get((int)2);
							tmp5->uniform3i(tmp6,tmp7,tmp8,tmp9);
						}
						;break;
						case (int)11: {
							::lime::_backend::native::NativeGLRenderContext tmp5 = this->gl;
							int tmp6 = index2;
							int tmp7 = value2->__get((int)0);
							int tmp8 = value2->__get((int)1);
							int tmp9 = value2->__get((int)2);
							int tmp10 = value2->__get((int)3);
							tmp5->uniform4i(tmp6,tmp7,tmp8,tmp9,tmp10);
						}
						;break;
						default: {
						}
					}
				}
				else{
					::haxe::ds::StringMap tmp4 = this->__isUniform;
					::String tmp5 = parameter->name;
					Dynamic tmp6 = tmp4->get(tmp5);
					Dynamic tmp7 = tmp6;
					bool tmp8 = !(tmp7);
					if ((tmp8)){
						::lime::_backend::native::NativeGLRenderContext tmp9 = this->gl;
						int tmp10 = parameter->index;
						tmp9->enableVertexAttribArray(tmp10);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,__updateGL,(void))

::openfl::display::ShaderData Shader_obj::get_data( ){
	bool tmp = this->__glSourceDirty;
	bool tmp1 = !(tmp);
	bool tmp2;
	if ((tmp1)){
		::openfl::display::ShaderData tmp3 = this->__data;
		::openfl::display::ShaderData tmp4 = tmp3;
		tmp2 = (tmp4 == null());
	}
	else{
		tmp2 = true;
	}
	if ((tmp2)){
		this->__init();
	}
	::openfl::display::ShaderData tmp3 = this->__data;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,get_data,return )

::openfl::display::ShaderData Shader_obj::set_data( ::openfl::display::ShaderData value){
	::openfl::display::ShaderData tmp = this->__data = value;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,set_data,return )

::String Shader_obj::get_glFragmentSource( ){
	::String tmp = this->__glFragmentSource;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,get_glFragmentSource,return )

::String Shader_obj::set_glFragmentSource( ::String value){
	::String tmp = value;
	::String tmp1 = this->__glFragmentSource;
	bool tmp2 = (tmp != tmp1);
	if ((tmp2)){
		this->__glSourceDirty = true;
	}
	::String tmp3 = this->__glFragmentSource = value;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,set_glFragmentSource,return )

::String Shader_obj::get_glVertexSource( ){
	::String tmp = this->__glVertexSource;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,get_glVertexSource,return )

::String Shader_obj::set_glVertexSource( ::String value){
	::String tmp = value;
	::String tmp1 = this->__glFragmentSource;
	bool tmp2 = (tmp != tmp1);
	if ((tmp2)){
		this->__glSourceDirty = true;
	}
	::String tmp3 = this->__glFragmentSource = value;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,set_glVertexSource,return )


Shader_obj::Shader_obj()
{
}

void Shader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shader);
	HX_MARK_MEMBER_NAME(byteCode,"byteCode");
	HX_MARK_MEMBER_NAME(glProgram,"glProgram");
	HX_MARK_MEMBER_NAME(precisionHint,"precisionHint");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(__data,"__data");
	HX_MARK_MEMBER_NAME(__glFragmentSource,"__glFragmentSource");
	HX_MARK_MEMBER_NAME(__glSourceDirty,"__glSourceDirty");
	HX_MARK_MEMBER_NAME(__glVertexSource,"__glVertexSource");
	HX_MARK_MEMBER_NAME(__isUniform,"__isUniform");
	HX_MARK_MEMBER_NAME(__inputBitmapData,"__inputBitmapData");
	HX_MARK_MEMBER_NAME(__numPasses,"__numPasses");
	HX_MARK_MEMBER_NAME(__paramBool,"__paramBool");
	HX_MARK_MEMBER_NAME(__paramFloat,"__paramFloat");
	HX_MARK_MEMBER_NAME(__paramInt,"__paramInt");
	HX_MARK_MEMBER_NAME(__uniformMatrix2,"__uniformMatrix2");
	HX_MARK_MEMBER_NAME(__uniformMatrix3,"__uniformMatrix3");
	HX_MARK_MEMBER_NAME(__uniformMatrix4,"__uniformMatrix4");
	HX_MARK_END_CLASS();
}

void Shader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(byteCode,"byteCode");
	HX_VISIT_MEMBER_NAME(glProgram,"glProgram");
	HX_VISIT_MEMBER_NAME(precisionHint,"precisionHint");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(__data,"__data");
	HX_VISIT_MEMBER_NAME(__glFragmentSource,"__glFragmentSource");
	HX_VISIT_MEMBER_NAME(__glSourceDirty,"__glSourceDirty");
	HX_VISIT_MEMBER_NAME(__glVertexSource,"__glVertexSource");
	HX_VISIT_MEMBER_NAME(__isUniform,"__isUniform");
	HX_VISIT_MEMBER_NAME(__inputBitmapData,"__inputBitmapData");
	HX_VISIT_MEMBER_NAME(__numPasses,"__numPasses");
	HX_VISIT_MEMBER_NAME(__paramBool,"__paramBool");
	HX_VISIT_MEMBER_NAME(__paramFloat,"__paramFloat");
	HX_VISIT_MEMBER_NAME(__paramInt,"__paramInt");
	HX_VISIT_MEMBER_NAME(__uniformMatrix2,"__uniformMatrix2");
	HX_VISIT_MEMBER_NAME(__uniformMatrix3,"__uniformMatrix3");
	HX_VISIT_MEMBER_NAME(__uniformMatrix4,"__uniformMatrix4");
}

Dynamic Shader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return get_data(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { return __data; }
		if (HX_FIELD_EQ(inName,"__init") ) { return __init_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"byteCode") ) { return byteCode; }
		if (HX_FIELD_EQ(inName,"__enable") ) { return __enable_dyn(); }
		if (HX_FIELD_EQ(inName,"__initGL") ) { return __initGL_dyn(); }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		if (HX_FIELD_EQ(inName,"get_data") ) { return get_data_dyn(); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glProgram") ) { return glProgram; }
		if (HX_FIELD_EQ(inName,"__disable") ) { return __disable_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__paramInt") ) { return __paramInt; }
		if (HX_FIELD_EQ(inName,"__enableGL") ) { return __enableGL_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateGL") ) { return __updateGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__isUniform") ) { return __isUniform; }
		if (HX_FIELD_EQ(inName,"__numPasses") ) { return __numPasses; }
		if (HX_FIELD_EQ(inName,"__paramBool") ) { return __paramBool; }
		if (HX_FIELD_EQ(inName,"__disableGL") ) { return __disableGL_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__paramFloat") ) { return __paramFloat; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"precisionHint") ) { return precisionHint; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"glVertexSource") ) { if (inCallProp == hx::paccAlways) return get_glVertexSource(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__glSourceDirty") ) { return __glSourceDirty; }
		if (HX_FIELD_EQ(inName,"__processGLData") ) { return __processGLData_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"glFragmentSource") ) { if (inCallProp == hx::paccAlways) return get_glFragmentSource(); }
		if (HX_FIELD_EQ(inName,"__glVertexSource") ) { return __glVertexSource; }
		if (HX_FIELD_EQ(inName,"__uniformMatrix2") ) { return __uniformMatrix2; }
		if (HX_FIELD_EQ(inName,"__uniformMatrix3") ) { return __uniformMatrix3; }
		if (HX_FIELD_EQ(inName,"__uniformMatrix4") ) { return __uniformMatrix4; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__inputBitmapData") ) { return __inputBitmapData; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__glFragmentSource") ) { return __glFragmentSource; }
		if (HX_FIELD_EQ(inName,"get_glVertexSource") ) { return get_glVertexSource_dyn(); }
		if (HX_FIELD_EQ(inName,"set_glVertexSource") ) { return set_glVertexSource_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_glFragmentSource") ) { return get_glFragmentSource_dyn(); }
		if (HX_FIELD_EQ(inName,"set_glFragmentSource") ) { return set_glFragmentSource_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Shader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::_backend::native::NativeGLRenderContext >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return set_data(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { __data=inValue.Cast< ::openfl::display::ShaderData >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"byteCode") ) { byteCode=inValue.Cast< ::openfl::utils::ByteArrayData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glProgram") ) { glProgram=inValue.Cast< ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__paramInt") ) { __paramInt=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__isUniform") ) { __isUniform=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__numPasses") ) { __numPasses=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__paramBool") ) { __paramBool=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__paramFloat") ) { __paramFloat=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"precisionHint") ) { precisionHint=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"glVertexSource") ) { if (inCallProp == hx::paccAlways) return set_glVertexSource(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__glSourceDirty") ) { __glSourceDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"glFragmentSource") ) { if (inCallProp == hx::paccAlways) return set_glFragmentSource(inValue); }
		if (HX_FIELD_EQ(inName,"__glVertexSource") ) { __glVertexSource=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__uniformMatrix2") ) { __uniformMatrix2=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__uniformMatrix3") ) { __uniformMatrix3=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__uniformMatrix4") ) { __uniformMatrix4=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__inputBitmapData") ) { __inputBitmapData=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__glFragmentSource") ) { __glFragmentSource=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Shader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("byteCode","\x55","\x20","\x71","\x42"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("glFragmentSource","\xd0","\xc5","\xca","\xf7"));
	outFields->push(HX_HCSTRING("glProgram","\xdf","\xd6","\xb3","\xc1"));
	outFields->push(HX_HCSTRING("glVertexSource","\x24","\x6d","\x4a","\x5b"));
	outFields->push(HX_HCSTRING("precisionHint","\xe5","\xb5","\x95","\x2c"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"));
	outFields->push(HX_HCSTRING("__glFragmentSource","\xf0","\x58","\x5b","\x63"));
	outFields->push(HX_HCSTRING("__glSourceDirty","\xf2","\xa3","\xef","\x41"));
	outFields->push(HX_HCSTRING("__glVertexSource","\x44","\xf8","\x89","\x8f"));
	outFields->push(HX_HCSTRING("__isUniform","\x4a","\x07","\x8f","\xe7"));
	outFields->push(HX_HCSTRING("__inputBitmapData","\x43","\xdf","\xf6","\x64"));
	outFields->push(HX_HCSTRING("__numPasses","\x45","\x67","\x5f","\xcd"));
	outFields->push(HX_HCSTRING("__paramBool","\x37","\x44","\xb6","\x5f"));
	outFields->push(HX_HCSTRING("__paramFloat","\xef","\x10","\x64","\xab"));
	outFields->push(HX_HCSTRING("__paramInt","\x82","\xcd","\xbd","\x21"));
	outFields->push(HX_HCSTRING("__uniformMatrix2","\x1d","\x03","\x4d","\x81"));
	outFields->push(HX_HCSTRING("__uniformMatrix3","\x1e","\x03","\x4d","\x81"));
	outFields->push(HX_HCSTRING("__uniformMatrix4","\x1f","\x03","\x4d","\x81"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::utils::ByteArrayData*/ ,(int)offsetof(Shader_obj,byteCode),HX_HCSTRING("byteCode","\x55","\x20","\x71","\x42")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(Shader_obj,glProgram),HX_HCSTRING("glProgram","\xdf","\xd6","\xb3","\xc1")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Shader_obj,precisionHint),HX_HCSTRING("precisionHint","\xe5","\xb5","\x95","\x2c")},
	{hx::fsObject /*::lime::_backend::native::NativeGLRenderContext*/ ,(int)offsetof(Shader_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*::openfl::display::ShaderData*/ ,(int)offsetof(Shader_obj,__data),HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1")},
	{hx::fsString,(int)offsetof(Shader_obj,__glFragmentSource),HX_HCSTRING("__glFragmentSource","\xf0","\x58","\x5b","\x63")},
	{hx::fsBool,(int)offsetof(Shader_obj,__glSourceDirty),HX_HCSTRING("__glSourceDirty","\xf2","\xa3","\xef","\x41")},
	{hx::fsString,(int)offsetof(Shader_obj,__glVertexSource),HX_HCSTRING("__glVertexSource","\x44","\xf8","\x89","\x8f")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Shader_obj,__isUniform),HX_HCSTRING("__isUniform","\x4a","\x07","\x8f","\xe7")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Shader_obj,__inputBitmapData),HX_HCSTRING("__inputBitmapData","\x43","\xdf","\xf6","\x64")},
	{hx::fsInt,(int)offsetof(Shader_obj,__numPasses),HX_HCSTRING("__numPasses","\x45","\x67","\x5f","\xcd")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Shader_obj,__paramBool),HX_HCSTRING("__paramBool","\x37","\x44","\xb6","\x5f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Shader_obj,__paramFloat),HX_HCSTRING("__paramFloat","\xef","\x10","\x64","\xab")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Shader_obj,__paramInt),HX_HCSTRING("__paramInt","\x82","\xcd","\xbd","\x21")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(Shader_obj,__uniformMatrix2),HX_HCSTRING("__uniformMatrix2","\x1d","\x03","\x4d","\x81")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(Shader_obj,__uniformMatrix3),HX_HCSTRING("__uniformMatrix3","\x1e","\x03","\x4d","\x81")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(Shader_obj,__uniformMatrix4),HX_HCSTRING("__uniformMatrix4","\x1f","\x03","\x4d","\x81")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("byteCode","\x55","\x20","\x71","\x42"),
	HX_HCSTRING("glProgram","\xdf","\xd6","\xb3","\xc1"),
	HX_HCSTRING("precisionHint","\xe5","\xb5","\x95","\x2c"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"),
	HX_HCSTRING("__glFragmentSource","\xf0","\x58","\x5b","\x63"),
	HX_HCSTRING("__glSourceDirty","\xf2","\xa3","\xef","\x41"),
	HX_HCSTRING("__glVertexSource","\x44","\xf8","\x89","\x8f"),
	HX_HCSTRING("__isUniform","\x4a","\x07","\x8f","\xe7"),
	HX_HCSTRING("__inputBitmapData","\x43","\xdf","\xf6","\x64"),
	HX_HCSTRING("__numPasses","\x45","\x67","\x5f","\xcd"),
	HX_HCSTRING("__paramBool","\x37","\x44","\xb6","\x5f"),
	HX_HCSTRING("__paramFloat","\xef","\x10","\x64","\xab"),
	HX_HCSTRING("__paramInt","\x82","\xcd","\xbd","\x21"),
	HX_HCSTRING("__uniformMatrix2","\x1d","\x03","\x4d","\x81"),
	HX_HCSTRING("__uniformMatrix3","\x1e","\x03","\x4d","\x81"),
	HX_HCSTRING("__uniformMatrix4","\x1f","\x03","\x4d","\x81"),
	HX_HCSTRING("__disable","\xc8","\xba","\xa6","\x32"),
	HX_HCSTRING("__disableGL","\xed","\x3a","\xe1","\x35"),
	HX_HCSTRING("__enable","\xa3","\x19","\xb7","\xa0"),
	HX_HCSTRING("__enableGL","\x88","\x46","\xeb","\x8f"),
	HX_HCSTRING("__init","\x30","\x9e","\xb3","\xf4"),
	HX_HCSTRING("__initGL","\x55","\xc8","\x7b","\x3f"),
	HX_HCSTRING("__processGLData","\x7e","\x0f","\x78","\x7c"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	HX_HCSTRING("__updateGL","\x8e","\x8b","\x32","\x1b"),
	HX_HCSTRING("get_data","\xb3","\x11","\x1e","\xc2"),
	HX_HCSTRING("set_data","\x27","\x6b","\x7b","\x70"),
	HX_HCSTRING("get_glFragmentSource","\xd9","\x2a","\x35","\x16"),
	HX_HCSTRING("set_glFragmentSource","\x4d","\xe2","\xec","\xe2"),
	HX_HCSTRING("get_glVertexSource","\xed","\x4d","\xe4","\xf6"),
	HX_HCSTRING("set_glVertexSource","\x61","\x80","\x93","\xd3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
};

#endif

hx::Class Shader_obj::__mClass;

void Shader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Shader","\x0f","\xdf","\x61","\xa7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Shader_obj >;
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
} // end namespace display
