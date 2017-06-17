#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#include <openfl/display3D/textures/RectangleTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
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

Void RectangleTexture_obj::__construct(::openfl::display3D::Context3D context,int width,int height,::String format,bool optimizeForRenderToTexture)
{
{
	::openfl::display3D::Context3D tmp = context;
	super::__construct(tmp,(int)3553);
	this->__width = width;
	this->__height = height;
	this->__optimizeForRenderToTexture = optimizeForRenderToTexture;
	this->uploadFromTypedArray(null());
}
;
	return null();
}

//RectangleTexture_obj::~RectangleTexture_obj() { }

Dynamic RectangleTexture_obj::__CreateEmpty() { return  new RectangleTexture_obj; }
hx::ObjectPtr< RectangleTexture_obj > RectangleTexture_obj::__new(::openfl::display3D::Context3D context,int width,int height,::String format,bool optimizeForRenderToTexture)
{  hx::ObjectPtr< RectangleTexture_obj > _result_ = new RectangleTexture_obj();
	_result_->__construct(context,width,height,format,optimizeForRenderToTexture);
	return _result_;}

Dynamic RectangleTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RectangleTexture_obj > _result_ = new RectangleTexture_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void RectangleTexture_obj::uploadFromBitmapData( ::openfl::display::BitmapData source){
{
		bool tmp = (source == null());
		if ((tmp)){
			return null();
		}
		::openfl::display::BitmapData tmp1 = source;
		::lime::graphics::Image tmp2 = this->__getImage(tmp1);
		::lime::graphics::Image image = tmp2;
		bool tmp3 = (image == null());
		if ((tmp3)){
			return null();
		}
		::lime::utils::ArrayBufferView tmp4 = image->get_data();
		this->uploadFromTypedArray(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RectangleTexture_obj,uploadFromBitmapData,(void))

Void RectangleTexture_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset){
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
		this->uploadFromTypedArray(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RectangleTexture_obj,uploadFromByteArray,(void))

Void RectangleTexture_obj::uploadFromTypedArray( ::lime::utils::ArrayBufferView data){
{
		{
			::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
			int tmp1 = this->__textureTarget;
			::lime::graphics::opengl::GLObject tmp2 = this->__textureID;
			tmp->bindTexture(tmp1,tmp2);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		{
			::lime::utils::ArrayBufferView tmp = data;
			Float tmp1 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBufferView(tmp);
			Float data1 = tmp1;
			::lime::_backend::native::NativeGLRenderContext tmp2 = ::lime::graphics::opengl::GL_obj::context;
			int tmp3 = this->__textureTarget;
			int tmp4 = this->__internalFormat;
			int tmp5 = this->__width;
			int tmp6 = this->__height;
			int tmp7 = this->__format;
			Float tmp8 = data1;
			tmp2->texImage2D(tmp3,(int)0,tmp4,tmp5,tmp6,(int)0,tmp7,(int)5121,tmp8);
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		{
			::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
			int tmp1 = this->__textureTarget;
			tmp->bindTexture(tmp1,null());
		}
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		int tmp = this->__width;
		int tmp1 = this->__height;
		int tmp2 = (tmp * tmp1);
		int tmp3 = (tmp2 * (int)4);
		int memUsage = tmp3;
		int tmp4 = memUsage;
		this->__trackMemoryUsage(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RectangleTexture_obj,uploadFromTypedArray,(void))

Void RectangleTexture_obj::__setSamplerState( ::openfl::_internal::stage3D::SamplerState state){
{
		::openfl::_internal::stage3D::SamplerState tmp = this->__samplerState;
		bool tmp1 = state->equals(tmp);
		bool tmp2 = !(tmp1);
		if ((tmp2)){
			bool tmp3 = (state->maxAniso != ((Float)0.0));
			if ((tmp3)){
				{
					::lime::_backend::native::NativeGLRenderContext tmp4 = ::lime::graphics::opengl::GL_obj::context;
					int tmp5 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;
					Float tmp6 = state->maxAniso;
					tmp4->texParameterf((int)3553,tmp5,tmp6);
				}
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			}
		}
		::openfl::_internal::stage3D::SamplerState tmp3 = state;
		this->super::__setSamplerState(tmp3);
	}
return null();
}



RectangleTexture_obj::RectangleTexture_obj()
{
}

Dynamic RectangleTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"__setSamplerState") ) { return __setSamplerState_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return uploadFromBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"uploadFromTypedArray") ) { return uploadFromTypedArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("uploadFromBitmapData","\xa4","\x85","\x65","\x0d"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromTypedArray","\xba","\x7c","\xf4","\xd1"),
	HX_HCSTRING("__setSamplerState","\x8b","\xe7","\xcf","\x5d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RectangleTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RectangleTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class RectangleTexture_obj::__mClass;

void RectangleTexture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.RectangleTexture","\xe9","\x93","\xed","\xa3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RectangleTexture_obj >;
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
