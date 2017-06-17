#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
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
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_SamplerState
#include <openfl/_internal/stage3D/SamplerState.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_CubeTexture
#include <openfl/display3D/textures/CubeTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
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
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif
namespace openfl{
namespace display3D{
namespace textures{

Void CubeTexture_obj::__construct(::openfl::display3D::Context3D context,int size,Dynamic format,bool optimizeForRenderToTexture,int streamingLevels)
{
{
	::openfl::display3D::Context3D tmp = context;
	super::__construct(tmp,(int)34067);
	this->__size = size;
	this->__optimizeForRenderToTexture = optimizeForRenderToTexture;
	this->__streamingLevels = streamingLevels;
	this->__uploadedSides = (int)0;
}
;
	return null();
}

//CubeTexture_obj::~CubeTexture_obj() { }

Dynamic CubeTexture_obj::__CreateEmpty() { return  new CubeTexture_obj; }
hx::ObjectPtr< CubeTexture_obj > CubeTexture_obj::__new(::openfl::display3D::Context3D context,int size,Dynamic format,bool optimizeForRenderToTexture,int streamingLevels)
{  hx::ObjectPtr< CubeTexture_obj > _result_ = new CubeTexture_obj();
	_result_->__construct(context,size,format,optimizeForRenderToTexture,streamingLevels);
	return _result_;}

Dynamic CubeTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CubeTexture_obj > _result_ = new CubeTexture_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void CubeTexture_obj::uploadCompressedTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,hx::Null< bool >  __o_async){
bool async = __o_async.Default(false);
{
		::openfl::display3D::textures::CubeTexture _g = hx::ObjectPtr<OBJ_>(this);
		data->position = byteArrayOffset;
		::String tmp = data->readUTFBytes((int)3);
		::String signature = tmp;
		data->position = byteArrayOffset;
		bool tmp1 = (signature == HX_HCSTRING("ATF","\xf3","\x9b","\x31","\x00"));
		if ((tmp1)){
			{
				::lime::_backend::native::NativeGLRenderContext tmp2 = ::lime::graphics::opengl::GL_obj::context;
				int tmp3 = this->__textureTarget;
				::lime::graphics::opengl::GLObject tmp4 = this->__textureID;
				tmp2->bindTexture(tmp3,tmp4);
			}
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			::openfl::utils::ByteArrayData tmp2 = data;
			int tmp3 = byteArrayOffset;
			this->__uploadATFTextureFromByteArray(tmp2,tmp3);
			{
				::lime::_backend::native::NativeGLRenderContext tmp4 = ::lime::graphics::opengl::GL_obj::context;
				int tmp5 = this->__textureTarget;
				tmp4->bindTexture(tmp5,null());
			}
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		}
		else{
			{
				::lime::_backend::native::NativeGLRenderContext tmp2 = ::lime::graphics::opengl::GL_obj::context;
				int tmp3 = this->__textureTarget;
				tmp2->bindTexture(tmp3,null());
			}
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		}
		bool tmp2 = async;
		if ((tmp2)){

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::openfl::display3D::textures::CubeTexture,_g)
			int __ArgCount() const { return 0; }
			Void run(){
				{
					::openfl::events::Event tmp3 = ::openfl::events::Event_obj::__new(HX_HCSTRING("textureReady","\x88","\x4d","\x5a","\xdf"),null(),null());
					_g->dispatchEvent(tmp3);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			::haxe::Timer_obj::delay( Dynamic(new _Function_2_1(_g)),(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(CubeTexture_obj,uploadCompressedTextureFromByteArray,(void))

Void CubeTexture_obj::uploadFromBitmapData( ::openfl::display::BitmapData source,int side,hx::Null< int >  __o_miplevel,hx::Null< bool >  __o_generateMipmap){
int miplevel = __o_miplevel.Default(0);
bool generateMipmap = __o_generateMipmap.Default(false);
{
		bool tmp = (source == null());
		if ((tmp)){
			return null();
		}
		int tmp1 = this->__size;
		int tmp2 = miplevel;
		int tmp3 = (int(tmp1) >> int(tmp2));
		int size = tmp3;
		bool tmp4 = (size == (int)0);
		if ((tmp4)){
			return null();
		}
		::openfl::display::BitmapData tmp5 = source;
		::lime::graphics::Image tmp6 = this->__getImage(tmp5);
		::lime::graphics::Image image = tmp6;
		::lime::utils::ArrayBufferView tmp7 = image->get_data();
		int tmp8 = side;
		int tmp9 = miplevel;
		this->uploadFromTypedArray(tmp7,tmp8,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CubeTexture_obj,uploadFromBitmapData,(void))

Void CubeTexture_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,int side,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
{
		::lime::utils::ArrayBufferView tmp;
		{
			::openfl::utils::ByteArrayData tmp1 = data;
			::haxe::io::Bytes tmp2 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(tmp1);
			::haxe::io::Bytes buffer = tmp2;
			::lime::utils::ArrayBufferView this1;
			bool tmp3 = false;
			if ((tmp3)){
				::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);
				this1 = tmp4;
			}
			else{
				bool tmp4 = false;
				if ((tmp4)){
					::lime::utils::ArrayBufferView tmp5;
					{
						::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
						::lime::utils::ArrayBufferView _this = tmp6;
						_this->byteOffset = (int)0;
						int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
						_this->length = tmp7;
						int tmp8 = (_this->length * _this->bytesPerElement);
						_this->byteLength = tmp8;
						::haxe::io::Bytes tmp9;
						{
							::haxe::io::Bytes this2;
							int tmp10 = _this->byteLength;
							::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);
							this2 = tmp11;
							tmp9 = this2;
						}
						_this->buffer = tmp9;
						_this->copyFromArray(((Array< Float >)(null())),null());
						tmp5 = _this;
					}
					this1 = tmp5;
				}
				else{
					bool tmp5 = false;
					if ((tmp5)){
						::lime::utils::ArrayBufferView tmp6;
						{
							::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
							::lime::utils::ArrayBufferView _this = tmp7;
							cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->byteOffset = (int)0;
							_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
							int tmp8 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp8;
							::haxe::io::Bytes tmp9;
							{
								::haxe::io::Bytes this2;
								int tmp10 = _this->byteLength;
								::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);
								this2 = tmp11;
								tmp9 = this2;
							}
							_this->buffer = tmp9;
							_this->copyFromArray(((Array< Float >)(array)),null());
							tmp6 = _this;
						}
						this1 = tmp6;
					}
					else{
						bool tmp6 = false;
						if ((tmp6)){
							::lime::utils::ArrayBufferView tmp7;
							{
								::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
								::lime::utils::ArrayBufferView _this = tmp8;
								::haxe::io::Bytes tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								::haxe::io::Bytes srcData = tmp9;
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcLength = tmp10;
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcByteOffset = tmp11;
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcElementSize = tmp12;
								int elementSize = _this->bytesPerElement;
								int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int tmp14 = _this->type;
								bool tmp15 = (tmp13 == tmp14);
								if ((tmp15)){
									int srcLength1 = srcData->length;
									int tmp16 = (srcLength1 - srcByteOffset);
									int cloneLength = tmp16;
									::haxe::io::Bytes tmp17;
									{
										::haxe::io::Bytes this2;
										int tmp18 = cloneLength;
										::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
										this2 = tmp19;
										tmp17 = this2;
									}
									_this->buffer = tmp17;
									::haxe::io::Bytes tmp18 = srcData;
									int tmp19 = srcByteOffset;
									int tmp20 = cloneLength;
									_this->buffer->blit((int)0,tmp18,tmp19,tmp20);
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								int tmp16 = (_this->bytesPerElement * srcLength);
								_this->byteLength = tmp16;
								_this->byteOffset = (int)0;
								_this->length = srcLength;
								tmp7 = _this;
							}
							this1 = tmp7;
						}
						else{
							bool tmp7 = (buffer != null());
							if ((tmp7)){
								::lime::utils::ArrayBufferView tmp8;
								{
									::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
									::lime::utils::ArrayBufferView _this = tmp9;
									int in_byteOffset = byteArrayOffset;
									bool tmp10 = (in_byteOffset < (int)0);
									if ((tmp10)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									int tmp11 = hx::Mod(in_byteOffset,_this->bytesPerElement);
									bool tmp12 = (tmp11 != (int)0);
									if ((tmp12)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									int bufferByteLength = buffer->length;
									int elementSize = _this->bytesPerElement;
									int newByteLength = bufferByteLength;
									bool tmp13 = true;
									if ((tmp13)){
										int tmp14 = (bufferByteLength - in_byteOffset);
										newByteLength = tmp14;
										int tmp15 = hx::Mod(bufferByteLength,_this->bytesPerElement);
										bool tmp16 = (tmp15 != (int)0);
										if ((tmp16)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										bool tmp17 = (newByteLength < (int)0);
										if ((tmp17)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										int tmp14 = (null() * _this->bytesPerElement);
										newByteLength = tmp14;
										int tmp15 = (in_byteOffset + newByteLength);
										int newRange = tmp15;
										bool tmp16 = (newRange > bufferByteLength);
										if ((tmp16)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									_this->buffer = buffer;
									_this->byteOffset = in_byteOffset;
									_this->byteLength = newByteLength;
									Float tmp14 = (Float(newByteLength) / Float(_this->bytesPerElement));
									int tmp15 = ::Std_obj::_int(tmp14);
									_this->length = tmp15;
									tmp8 = _this;
								}
								this1 = tmp8;
							}
							else{
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
							}
						}
					}
				}
			}
			tmp = this1;
		}
		int tmp1 = side;
		int tmp2 = miplevel;
		this->uploadFromTypedArray(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CubeTexture_obj,uploadFromByteArray,(void))

Void CubeTexture_obj::uploadFromTypedArray( ::lime::utils::ArrayBufferView data,int side,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
{
		bool tmp = (data == null());
		if ((tmp)){
			return null();
		}
		int tmp1 = this->__size;
		int tmp2 = miplevel;
		int tmp3 = (int(tmp1) >> int(tmp2));
		int size = tmp3;
		bool tmp4 = (size == (int)0);
		if ((tmp4)){
			return null();
		}
		int tmp5 = side;
		int tmp6;
		switch( (int)(tmp5)){
			case (int)0: {
				tmp6 = (int)34069;
			}
			;break;
			case (int)1: {
				tmp6 = (int)34070;
			}
			;break;
			case (int)2: {
				tmp6 = (int)34071;
			}
			;break;
			case (int)3: {
				tmp6 = (int)34072;
			}
			;break;
			case (int)4: {
				tmp6 = (int)34073;
			}
			;break;
			case (int)5: {
				tmp6 = (int)34074;
			}
			;break;
			default: {
				::openfl::errors::IllegalOperationError tmp7 = ::openfl::errors::IllegalOperationError_obj::__new(null());
				HX_STACK_DO_THROW(tmp7);
			}
		}
		int target = tmp6;
		{
			::lime::_backend::native::NativeGLRenderContext tmp7 = ::lime::graphics::opengl::GL_obj::context;
			::lime::graphics::opengl::GLObject tmp8 = this->__textureID;
			tmp7->bindTexture((int)34067,tmp8);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		{
			::lime::utils::ArrayBufferView tmp7 = data;
			Float tmp8 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBufferView(tmp7);
			Float data1 = tmp8;
			::lime::_backend::native::NativeGLRenderContext tmp9 = ::lime::graphics::opengl::GL_obj::context;
			int tmp10 = target;
			int tmp11 = miplevel;
			int tmp12 = this->__internalFormat;
			int tmp13 = size;
			int tmp14 = size;
			int tmp15 = this->__format;
			Float tmp16 = data1;
			tmp9->texImage2D(tmp10,tmp11,tmp12,tmp13,tmp14,(int)0,tmp15,(int)5121,tmp16);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		{
			::lime::_backend::native::NativeGLRenderContext tmp7 = ::lime::graphics::opengl::GL_obj::context;
			int tmp8 = this->__textureTarget;
			tmp7->bindTexture(tmp8,null());
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		int tmp7 = (int((int)1) << int(side));
		hx::OrEq(this->__uploadedSides,tmp7);
		int tmp8 = this->__size;
		int tmp9 = this->__size;
		int tmp10 = (tmp8 * tmp9);
		int tmp11 = (tmp10 * (int)4);
		int memUsage = tmp11;
		int tmp12 = memUsage;
		this->__trackMemoryUsage(tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(CubeTexture_obj,uploadFromTypedArray,(void))

Void CubeTexture_obj::__setSamplerState( ::openfl::_internal::stage3D::SamplerState state){
{
		::openfl::_internal::stage3D::SamplerState tmp = this->__samplerState;
		bool tmp1 = state->equals(tmp);
		bool tmp2 = !(tmp1);
		if ((tmp2)){
			bool tmp3 = (state->minFilter != (int)9728);
			bool tmp4 = tmp3;
			bool tmp5;
			if ((tmp4)){
				tmp5 = (state->minFilter != (int)9729);
			}
			else{
				tmp5 = false;
			}
			bool tmp6;
			if ((tmp5)){
				bool tmp7 = state->mipmapGenerated;
				bool tmp8 = tmp7;
				tmp6 = !(tmp8);
			}
			else{
				tmp6 = false;
			}
			if ((tmp6)){
				{
					::lime::_backend::native::NativeGLRenderContext tmp7 = ::lime::graphics::opengl::GL_obj::context;
					tmp7->generateMipmap((int)34067);
				}
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				state->mipmapGenerated = true;
			}
			bool tmp7 = (state->maxAniso != ((Float)0.0));
			if ((tmp7)){
				{
					::lime::_backend::native::NativeGLRenderContext tmp8 = ::lime::graphics::opengl::GL_obj::context;
					int tmp9 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;
					Float tmp10 = state->maxAniso;
					tmp8->texParameterf((int)34067,tmp9,tmp10);
				}
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			}
		}
		::openfl::_internal::stage3D::SamplerState tmp3 = state;
		this->super::__setSamplerState(tmp3);
	}
return null();
}


Void CubeTexture_obj::__uploadATFTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CubeTexture_obj,__uploadATFTextureFromByteArray,(void))


CubeTexture_obj::CubeTexture_obj()
{
}

Dynamic CubeTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__size") ) { return __size; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__uploadedSides") ) { return __uploadedSides; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__setSamplerState") ) { return __setSamplerState_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return uploadFromBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"uploadFromTypedArray") ) { return uploadFromTypedArray_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"__uploadATFTextureFromByteArray") ) { return __uploadATFTextureFromByteArray_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return uploadCompressedTextureFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CubeTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__size") ) { __size=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__uploadedSides") ) { __uploadedSides=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CubeTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__size","\xe1","\x03","\x4c","\xfb"));
	outFields->push(HX_HCSTRING("__uploadedSides","\x1c","\xd7","\x55","\xa3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(CubeTexture_obj,__size),HX_HCSTRING("__size","\xe1","\x03","\x4c","\xfb")},
	{hx::fsInt,(int)offsetof(CubeTexture_obj,__uploadedSides),HX_HCSTRING("__uploadedSides","\x1c","\xd7","\x55","\xa3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__size","\xe1","\x03","\x4c","\xfb"),
	HX_HCSTRING("__uploadedSides","\x1c","\xd7","\x55","\xa3"),
	HX_HCSTRING("uploadCompressedTextureFromByteArray","\xce","\xc7","\x86","\xc5"),
	HX_HCSTRING("uploadFromBitmapData","\xa4","\x85","\x65","\x0d"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromTypedArray","\xba","\x7c","\xf4","\xd1"),
	HX_HCSTRING("__setSamplerState","\x8b","\xe7","\xcf","\x5d"),
	HX_HCSTRING("__uploadATFTextureFromByteArray","\x5e","\x7b","\xdb","\xc9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CubeTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubeTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class CubeTexture_obj::__mClass;

void CubeTexture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.CubeTexture","\x09","\x1a","\x15","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CubeTexture_obj >;
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
} // end namespace textures
