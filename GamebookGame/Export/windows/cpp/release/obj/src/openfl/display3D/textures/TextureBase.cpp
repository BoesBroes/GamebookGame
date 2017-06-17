#include <hxcpp.h>

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
#ifndef INCLUDED_lime_graphics_opengl_GLContextType
#include <lime/graphics/opengl/GLContextType.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
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
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
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
namespace textures{

Void TextureBase_obj::__construct(::openfl::display3D::Context3D context,int target)
{
{
	this->__outputTextureMemoryUsage = false;
	super::__construct(null());
	this->__context = context;
	this->__textureTarget = target;
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = tmp->createTexture();
	this->__textureID = tmp1;
	::lime::_backend::native::NativeGLRenderContext tmp2 = ::lime::graphics::opengl::GL_obj::context;
	this->__textureContext = tmp2;
	Dynamic tmp3 = ::openfl::display3D::textures::TextureBase_obj::__supportsBGRA;
	bool tmp4 = (tmp3 == null());
	if ((tmp4)){
		::openfl::display3D::textures::TextureBase_obj::__textureInternalFormat = (int)6408;
		Dynamic bgraExtension = null();
		::lime::_backend::native::NativeGLRenderContext tmp5 = ::lime::graphics::opengl::GL_obj::context;
		Dynamic tmp6 = tmp5->getExtension(HX_HCSTRING("EXT_bgra","\x72","\x74","\x1a","\x40"));
		bgraExtension = tmp6;
		bool tmp7 = (bgraExtension == null());
		if ((tmp7)){
			::lime::_backend::native::NativeGLRenderContext tmp8 = ::lime::graphics::opengl::GL_obj::context;
			Dynamic tmp9 = tmp8->getExtension(HX_HCSTRING("EXT_texture_format_BGRA8888","\x5a","\xd2","\xbd","\xb2"));
			bgraExtension = tmp9;
		}
		bool tmp8 = (bgraExtension == null());
		if ((tmp8)){
			::lime::_backend::native::NativeGLRenderContext tmp9 = ::lime::graphics::opengl::GL_obj::context;
			Dynamic tmp10 = tmp9->getExtension(HX_HCSTRING("APPLE_texture_format_BGRA8888","\x13","\x8a","\x88","\xe2"));
			bgraExtension = tmp10;
		}
		bool tmp9 = (bgraExtension != null());
		if ((tmp9)){
			::openfl::display3D::textures::TextureBase_obj::__supportsBGRA = true;
			::openfl::display3D::textures::TextureBase_obj::__textureFormat = bgraExtension->__Field(HX_HCSTRING("BGRA_EXT","\x36","\x94","\xc4","\xbc"), hx::paccDynamic );
			::lime::graphics::opengl::GLContextType tmp10 = ::lime::graphics::opengl::GL_obj::get_type();
			bool tmp11 = (tmp10 == ::lime::graphics::opengl::GLContextType_obj::GLES);
			if ((tmp11)){
				::openfl::display3D::textures::TextureBase_obj::__textureInternalFormat = bgraExtension->__Field(HX_HCSTRING("BGRA_EXT","\x36","\x94","\xc4","\xbc"), hx::paccDynamic );
			}
		}
		else{
			::openfl::display3D::textures::TextureBase_obj::__supportsBGRA = false;
			::openfl::display3D::textures::TextureBase_obj::__textureFormat = (int)6408;
		}
	}
	Dynamic tmp5 = ::openfl::display3D::textures::TextureBase_obj::__supportsCompressed;
	bool tmp6 = (tmp5 == null());
	if ((tmp6)){
		::lime::_backend::native::NativeGLRenderContext tmp7 = ::lime::graphics::opengl::GL_obj::context;
		Dynamic tmp8 = tmp7->getExtension(HX_HCSTRING("EXT_texture_compression_s3tc","\x6a","\x86","\xaa","\x80"));
		Dynamic compressedExtension = tmp8;
		bool tmp9 = (compressedExtension != null());
		if ((tmp9)){
			::openfl::display3D::textures::TextureBase_obj::__supportsCompressed = true;
			::openfl::display3D::textures::TextureBase_obj::__textureFormatCompressed = compressedExtension->__Field(HX_HCSTRING("COMPRESSED_RGBA_S3TC_DXT1_EXT","\xb6","\x6f","\x45","\xf9"), hx::paccDynamic );
			::openfl::display3D::textures::TextureBase_obj::__textureFormatCompressedAlpha = compressedExtension->__Field(HX_HCSTRING("COMPRESSED_RGBA_S3TC_DXT5_EXT","\xba","\xc1","\xdf","\x46"), hx::paccDynamic );
		}
		else{
			::openfl::display3D::textures::TextureBase_obj::__supportsCompressed = false;
		}
	}
	int tmp7 = ::openfl::display3D::textures::TextureBase_obj::__textureInternalFormat;
	this->__internalFormat = tmp7;
	int tmp8 = ::openfl::display3D::textures::TextureBase_obj::__textureFormat;
	this->__format = tmp8;
	this->__memoryUsage = (int)0;
	this->__compressedMemoryUsage = (int)0;
}
;
	return null();
}

//TextureBase_obj::~TextureBase_obj() { }

Dynamic TextureBase_obj::__CreateEmpty() { return  new TextureBase_obj; }
hx::ObjectPtr< TextureBase_obj > TextureBase_obj::__new(::openfl::display3D::Context3D context,int target)
{  hx::ObjectPtr< TextureBase_obj > _result_ = new TextureBase_obj();
	_result_->__construct(context,target);
	return _result_;}

Dynamic TextureBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureBase_obj > _result_ = new TextureBase_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void TextureBase_obj::dispose( ){
{
		::openfl::display3D::textures::Texture tmp = this->__alphaTexture;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			::openfl::display3D::textures::Texture tmp2 = this->__alphaTexture;
			tmp2->dispose();
		}
		{
			::lime::_backend::native::NativeGLRenderContext tmp2 = ::lime::graphics::opengl::GL_obj::context;
			::lime::graphics::opengl::GLObject tmp3 = this->__textureID;
			tmp2->deleteTexture(tmp3);
		}
		int tmp2 = this->__compressedMemoryUsage;
		bool tmp3 = (tmp2 > (int)0);
		if ((tmp3)){
			::openfl::display3D::Context3D tmp4 = this->__context;
			tmp4->__statsDecrement((int)4);
			::openfl::display3D::Context3D tmp5 = this->__context;
			int tmp6 = this->__compressedMemoryUsage;
			int tmp7 = tmp5->__statsSubtract((int)9,tmp6);
			int currentCompressedMemory = tmp7;
			this->__compressedMemoryUsage = (int)0;
		}
		int tmp4 = this->__memoryUsage;
		bool tmp5 = (tmp4 > (int)0);
		if ((tmp5)){
			::openfl::display3D::Context3D tmp6 = this->__context;
			tmp6->__statsDecrement((int)3);
			::openfl::display3D::Context3D tmp7 = this->__context;
			int tmp8 = this->__memoryUsage;
			int tmp9 = tmp7->__statsSubtract((int)8,tmp8);
			int currentMemory = tmp9;
			this->__memoryUsage = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextureBase_obj,dispose,(void))

int TextureBase_obj::__getATFVersion( ::openfl::utils::ByteArrayData data){
	::String tmp = data->readUTFBytes((int)3);
	::String signature = tmp;
	bool tmp1 = (signature != HX_HCSTRING("ATF","\xf3","\x9b","\x31","\x00"));
	if ((tmp1)){
		::openfl::errors::IllegalOperationError tmp2 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("ATF signature not found","\xa0","\xf7","\x2f","\x3a"));
		HX_STACK_DO_THROW(tmp2);
	}
	int position = data->position;
	int version = (int)0;
	bool tmp2;
	{
		int tmp3 = (data->length - data->position);
		int a = tmp3;
		bool tmp4 = (a < (int)0);
		bool aNeg = tmp4;
		bool tmp5 = ((int)5 < (int)0);
		bool bNeg = tmp5;
		bool tmp6 = (aNeg != bNeg);
		if ((tmp6)){
			tmp2 = aNeg;
		}
		else{
			tmp2 = (a >= (int)5);
		}
	}
	if ((tmp2)){
		::openfl::utils::ByteArrayData tmp3 = data;
		int tmp4 = this->__readUInt32(tmp3);
		int sig = tmp4;
		bool tmp5 = (sig == (int)255);
		if ((tmp5)){
			int tmp6 = data->readUnsignedByte();
			version = tmp6;
		}
		else{
			data->position = position;
		}
	}
	int tmp3 = version;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextureBase_obj,__getATFVersion,return )

::lime::graphics::Image TextureBase_obj::__getImage( ::openfl::display::BitmapData bitmapData){
	::lime::graphics::Image image = bitmapData->image;
	bool tmp = bitmapData->__isValid;
	bool tmp1 = tmp;
	bool tmp2 = !(tmp1);
	bool tmp3 = !(tmp2);
	bool tmp4;
	if ((tmp3)){
		tmp4 = (image == null());
	}
	else{
		tmp4 = true;
	}
	if ((tmp4)){
		return null();
	}
	bool tmp5 = image->get_premultiplied();
	bool tmp6 = tmp5;
	bool tmp7 = !(tmp6);
	bool tmp8;
	if ((tmp7)){
		tmp8 = image->get_transparent();
	}
	else{
		tmp8 = false;
	}
	if ((tmp8)){
		::lime::graphics::Image tmp9 = image->clone();
		image = tmp9;
		image->set_premultiplied(true);
	}
	::lime::graphics::Image tmp9 = image;
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(TextureBase_obj,__getImage,return )

::lime::graphics::opengl::GLObject TextureBase_obj::__getTexture( ){
	::lime::graphics::opengl::GLObject tmp = this->__textureID;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureBase_obj,__getTexture,return )

int TextureBase_obj::__readUInt24( ::openfl::utils::ByteArrayData data){
	int value;
	int tmp = data->readUnsignedByte();
	int tmp1 = (int(tmp) << int((int)16));
	value = tmp1;
	int tmp2;
	{
		int tmp3 = data->readUnsignedByte();
		int tmp4 = (int(tmp3) << int((int)8));
		int b = tmp4;
		tmp2 = (int(value) | int(b));
	}
	value = tmp2;
	int tmp3;
	{
		int tmp4 = data->readUnsignedByte();
		int b = tmp4;
		tmp3 = (int(value) | int(b));
	}
	value = tmp3;
	int tmp4 = value;
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(TextureBase_obj,__readUInt24,return )

int TextureBase_obj::__readUInt32( ::openfl::utils::ByteArrayData data){
	int value;
	int tmp = data->readUnsignedByte();
	int tmp1 = (int(tmp) << int((int)24));
	value = tmp1;
	int tmp2;
	{
		int tmp3 = data->readUnsignedByte();
		int tmp4 = (int(tmp3) << int((int)16));
		int b = tmp4;
		tmp2 = (int(value) | int(b));
	}
	value = tmp2;
	int tmp3;
	{
		int tmp4 = data->readUnsignedByte();
		int tmp5 = (int(tmp4) << int((int)8));
		int b = tmp5;
		tmp3 = (int(value) | int(b));
	}
	value = tmp3;
	int tmp4;
	{
		int tmp5 = data->readUnsignedByte();
		int b = tmp5;
		tmp4 = (int(value) | int(b));
	}
	value = tmp4;
	int tmp5 = value;
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextureBase_obj,__readUInt32,return )

Void TextureBase_obj::__setSamplerState( ::openfl::_internal::stage3D::SamplerState state){
{
		::openfl::_internal::stage3D::SamplerState tmp = this->__samplerState;
		bool tmp1 = state->equals(tmp);
		bool tmp2 = !(tmp1);
		if ((tmp2)){
			{
				::lime::_backend::native::NativeGLRenderContext tmp3 = ::lime::graphics::opengl::GL_obj::context;
				int tmp4 = this->__textureTarget;
				::lime::graphics::opengl::GLObject tmp5 = this->__textureID;
				tmp3->bindTexture(tmp4,tmp5);
			}
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			{
				::lime::_backend::native::NativeGLRenderContext tmp3 = ::lime::graphics::opengl::GL_obj::context;
				int tmp4 = this->__textureTarget;
				int tmp5 = state->minFilter;
				tmp3->texParameteri(tmp4,(int)10241,tmp5);
			}
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			{
				::lime::_backend::native::NativeGLRenderContext tmp3 = ::lime::graphics::opengl::GL_obj::context;
				int tmp4 = this->__textureTarget;
				int tmp5 = state->magFilter;
				tmp3->texParameteri(tmp4,(int)10240,tmp5);
			}
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			{
				::lime::_backend::native::NativeGLRenderContext tmp3 = ::lime::graphics::opengl::GL_obj::context;
				int tmp4 = this->__textureTarget;
				int tmp5 = state->wrapModeS;
				tmp3->texParameteri(tmp4,(int)10242,tmp5);
			}
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			{
				::lime::_backend::native::NativeGLRenderContext tmp3 = ::lime::graphics::opengl::GL_obj::context;
				int tmp4 = this->__textureTarget;
				int tmp5 = state->wrapModeT;
				tmp3->texParameteri(tmp4,(int)10243,tmp5);
			}
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			bool tmp3 = (state->lodBias != ((Float)0.0));
			if ((tmp3)){
			}
			this->__samplerState = state;
			::openfl::_internal::stage3D::SamplerState tmp4 = this->__samplerState;
			tmp4->__samplerDirty = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureBase_obj,__setSamplerState,(void))

Void TextureBase_obj::__trackCompressedMemoryUsage( int memory){
{
		int tmp = this->__compressedMemoryUsage;
		bool tmp1 = (tmp == (int)0);
		if ((tmp1)){
			::openfl::display3D::Context3D tmp2 = this->__context;
			tmp2->__statsIncrement((int)4);
		}
		hx::AddEq(this->__compressedMemoryUsage,memory);
		::openfl::display3D::Context3D tmp2 = this->__context;
		int tmp3 = memory;
		int tmp4 = tmp2->__statsAdd((int)9,tmp3);
		int currentCompressedMemory = tmp4;
		int tmp5 = memory;
		this->__trackMemoryUsage(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureBase_obj,__trackCompressedMemoryUsage,(void))

Void TextureBase_obj::__trackMemoryUsage( int memory){
{
		int tmp = this->__memoryUsage;
		bool tmp1 = (tmp == (int)0);
		if ((tmp1)){
			::openfl::display3D::Context3D tmp2 = this->__context;
			tmp2->__statsIncrement((int)3);
		}
		hx::AddEq(this->__memoryUsage,memory);
		::openfl::display3D::Context3D tmp2 = this->__context;
		int tmp3 = memory;
		int tmp4 = tmp2->__statsAdd((int)8,tmp3);
		int currentMemory = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureBase_obj,__trackMemoryUsage,(void))

Dynamic TextureBase_obj::__supportsBGRA;

int TextureBase_obj::__textureFormat;

int TextureBase_obj::__textureInternalFormat;

Dynamic TextureBase_obj::__supportsCompressed;

int TextureBase_obj::__textureFormatCompressed;

int TextureBase_obj::__textureFormatCompressedAlpha;


TextureBase_obj::TextureBase_obj()
{
}

void TextureBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureBase);
	HX_MARK_MEMBER_NAME(__alphaTexture,"__alphaTexture");
	HX_MARK_MEMBER_NAME(__compressedMemoryUsage,"__compressedMemoryUsage");
	HX_MARK_MEMBER_NAME(__context,"__context");
	HX_MARK_MEMBER_NAME(__format,"__format");
	HX_MARK_MEMBER_NAME(__height,"__height");
	HX_MARK_MEMBER_NAME(__internalFormat,"__internalFormat");
	HX_MARK_MEMBER_NAME(__memoryUsage,"__memoryUsage");
	HX_MARK_MEMBER_NAME(__optimizeForRenderToTexture,"__optimizeForRenderToTexture");
	HX_MARK_MEMBER_NAME(__outputTextureMemoryUsage,"__outputTextureMemoryUsage");
	HX_MARK_MEMBER_NAME(__samplerState,"__samplerState");
	HX_MARK_MEMBER_NAME(__streamingLevels,"__streamingLevels");
	HX_MARK_MEMBER_NAME(__textureContext,"__textureContext");
	HX_MARK_MEMBER_NAME(__textureID,"__textureID");
	HX_MARK_MEMBER_NAME(__textureTarget,"__textureTarget");
	HX_MARK_MEMBER_NAME(__width,"__width");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextureBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__alphaTexture,"__alphaTexture");
	HX_VISIT_MEMBER_NAME(__compressedMemoryUsage,"__compressedMemoryUsage");
	HX_VISIT_MEMBER_NAME(__context,"__context");
	HX_VISIT_MEMBER_NAME(__format,"__format");
	HX_VISIT_MEMBER_NAME(__height,"__height");
	HX_VISIT_MEMBER_NAME(__internalFormat,"__internalFormat");
	HX_VISIT_MEMBER_NAME(__memoryUsage,"__memoryUsage");
	HX_VISIT_MEMBER_NAME(__optimizeForRenderToTexture,"__optimizeForRenderToTexture");
	HX_VISIT_MEMBER_NAME(__outputTextureMemoryUsage,"__outputTextureMemoryUsage");
	HX_VISIT_MEMBER_NAME(__samplerState,"__samplerState");
	HX_VISIT_MEMBER_NAME(__streamingLevels,"__streamingLevels");
	HX_VISIT_MEMBER_NAME(__textureContext,"__textureContext");
	HX_VISIT_MEMBER_NAME(__textureID,"__textureID");
	HX_VISIT_MEMBER_NAME(__textureTarget,"__textureTarget");
	HX_VISIT_MEMBER_NAME(__width,"__width");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextureBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__width") ) { return __width; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__format") ) { return __format; }
		if (HX_FIELD_EQ(inName,"__height") ) { return __height; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { return __context; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__getImage") ) { return __getImage_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__textureID") ) { return __textureID; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__getTexture") ) { return __getTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"__readUInt24") ) { return __readUInt24_dyn(); }
		if (HX_FIELD_EQ(inName,"__readUInt32") ) { return __readUInt32_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__memoryUsage") ) { return __memoryUsage; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__alphaTexture") ) { return __alphaTexture; }
		if (HX_FIELD_EQ(inName,"__samplerState") ) { return __samplerState; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__textureTarget") ) { return __textureTarget; }
		if (HX_FIELD_EQ(inName,"__getATFVersion") ) { return __getATFVersion_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__internalFormat") ) { return __internalFormat; }
		if (HX_FIELD_EQ(inName,"__textureContext") ) { return __textureContext; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__streamingLevels") ) { return __streamingLevels; }
		if (HX_FIELD_EQ(inName,"__setSamplerState") ) { return __setSamplerState_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__trackMemoryUsage") ) { return __trackMemoryUsage_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__compressedMemoryUsage") ) { return __compressedMemoryUsage; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__outputTextureMemoryUsage") ) { return __outputTextureMemoryUsage; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__optimizeForRenderToTexture") ) { return __optimizeForRenderToTexture; }
		if (HX_FIELD_EQ(inName,"__trackCompressedMemoryUsage") ) { return __trackCompressedMemoryUsage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextureBase_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"__supportsBGRA") ) { outValue = __supportsBGRA; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__textureFormat") ) { outValue = __textureFormat; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__supportsCompressed") ) { outValue = __supportsCompressed; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__textureInternalFormat") ) { outValue = __textureInternalFormat; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"__textureFormatCompressed") ) { outValue = __textureFormatCompressed; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"__textureFormatCompressedAlpha") ) { outValue = __textureFormatCompressedAlpha; return true;  }
	}
	return false;
}

Dynamic TextureBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__width") ) { __width=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__format") ) { __format=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__height") ) { __height=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { __context=inValue.Cast< ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__textureID") ) { __textureID=inValue.Cast< ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__memoryUsage") ) { __memoryUsage=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__alphaTexture") ) { __alphaTexture=inValue.Cast< ::openfl::display3D::textures::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__samplerState") ) { __samplerState=inValue.Cast< ::openfl::_internal::stage3D::SamplerState >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__textureTarget") ) { __textureTarget=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__internalFormat") ) { __internalFormat=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textureContext") ) { __textureContext=inValue.Cast< ::lime::_backend::native::NativeGLRenderContext >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__streamingLevels") ) { __streamingLevels=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__compressedMemoryUsage") ) { __compressedMemoryUsage=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__outputTextureMemoryUsage") ) { __outputTextureMemoryUsage=inValue.Cast< bool >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__optimizeForRenderToTexture") ) { __optimizeForRenderToTexture=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextureBase_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"__supportsBGRA") ) { __supportsBGRA=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__textureFormat") ) { __textureFormat=ioValue.Cast< int >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__supportsCompressed") ) { __supportsCompressed=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__textureInternalFormat") ) { __textureInternalFormat=ioValue.Cast< int >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"__textureFormatCompressed") ) { __textureFormatCompressed=ioValue.Cast< int >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"__textureFormatCompressedAlpha") ) { __textureFormatCompressedAlpha=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void TextureBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__alphaTexture","\x3d","\x94","\x14","\x53"));
	outFields->push(HX_HCSTRING("__compressedMemoryUsage","\x3f","\xa0","\x58","\x95"));
	outFields->push(HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a"));
	outFields->push(HX_HCSTRING("__format","\x57","\xfa","\xbd","\xa5"));
	outFields->push(HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"));
	outFields->push(HX_HCSTRING("__internalFormat","\x74","\x81","\xbd","\x56"));
	outFields->push(HX_HCSTRING("__memoryUsage","\x40","\xbf","\x50","\xc5"));
	outFields->push(HX_HCSTRING("__optimizeForRenderToTexture","\xbe","\xd4","\x90","\xb3"));
	outFields->push(HX_HCSTRING("__outputTextureMemoryUsage","\xc6","\xcf","\x1a","\x71"));
	outFields->push(HX_HCSTRING("__samplerState","\x09","\x67","\x80","\xdc"));
	outFields->push(HX_HCSTRING("__streamingLevels","\x51","\xa1","\xde","\x07"));
	outFields->push(HX_HCSTRING("__textureContext","\x74","\x21","\x78","\x6f"));
	outFields->push(HX_HCSTRING("__textureID","\x56","\x7e","\x75","\xdd"));
	outFields->push(HX_HCSTRING("__textureTarget","\x6c","\xff","\xb6","\xa1"));
	outFields->push(HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display3D::textures::Texture*/ ,(int)offsetof(TextureBase_obj,__alphaTexture),HX_HCSTRING("__alphaTexture","\x3d","\x94","\x14","\x53")},
	{hx::fsInt,(int)offsetof(TextureBase_obj,__compressedMemoryUsage),HX_HCSTRING("__compressedMemoryUsage","\x3f","\xa0","\x58","\x95")},
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(int)offsetof(TextureBase_obj,__context),HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a")},
	{hx::fsInt,(int)offsetof(TextureBase_obj,__format),HX_HCSTRING("__format","\x57","\xfa","\xbd","\xa5")},
	{hx::fsInt,(int)offsetof(TextureBase_obj,__height),HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa")},
	{hx::fsInt,(int)offsetof(TextureBase_obj,__internalFormat),HX_HCSTRING("__internalFormat","\x74","\x81","\xbd","\x56")},
	{hx::fsInt,(int)offsetof(TextureBase_obj,__memoryUsage),HX_HCSTRING("__memoryUsage","\x40","\xbf","\x50","\xc5")},
	{hx::fsBool,(int)offsetof(TextureBase_obj,__optimizeForRenderToTexture),HX_HCSTRING("__optimizeForRenderToTexture","\xbe","\xd4","\x90","\xb3")},
	{hx::fsBool,(int)offsetof(TextureBase_obj,__outputTextureMemoryUsage),HX_HCSTRING("__outputTextureMemoryUsage","\xc6","\xcf","\x1a","\x71")},
	{hx::fsObject /*::openfl::_internal::stage3D::SamplerState*/ ,(int)offsetof(TextureBase_obj,__samplerState),HX_HCSTRING("__samplerState","\x09","\x67","\x80","\xdc")},
	{hx::fsInt,(int)offsetof(TextureBase_obj,__streamingLevels),HX_HCSTRING("__streamingLevels","\x51","\xa1","\xde","\x07")},
	{hx::fsObject /*::lime::_backend::native::NativeGLRenderContext*/ ,(int)offsetof(TextureBase_obj,__textureContext),HX_HCSTRING("__textureContext","\x74","\x21","\x78","\x6f")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(TextureBase_obj,__textureID),HX_HCSTRING("__textureID","\x56","\x7e","\x75","\xdd")},
	{hx::fsInt,(int)offsetof(TextureBase_obj,__textureTarget),HX_HCSTRING("__textureTarget","\x6c","\xff","\xb6","\xa1")},
	{hx::fsInt,(int)offsetof(TextureBase_obj,__width),HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &TextureBase_obj::__supportsBGRA,HX_HCSTRING("__supportsBGRA","\x58","\x53","\x57","\x0f")},
	{hx::fsInt,(void *) &TextureBase_obj::__textureFormat,HX_HCSTRING("__textureFormat","\x52","\x9b","\x58","\x18")},
	{hx::fsInt,(void *) &TextureBase_obj::__textureInternalFormat,HX_HCSTRING("__textureInternalFormat","\x6f","\x15","\xaa","\xa7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextureBase_obj::__supportsCompressed,HX_HCSTRING("__supportsCompressed","\x45","\xfa","\xc0","\xd4")},
	{hx::fsInt,(void *) &TextureBase_obj::__textureFormatCompressed,HX_HCSTRING("__textureFormatCompressed","\x73","\x06","\x12","\x47")},
	{hx::fsInt,(void *) &TextureBase_obj::__textureFormatCompressedAlpha,HX_HCSTRING("__textureFormatCompressedAlpha","\xeb","\xcf","\xa6","\xab")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__alphaTexture","\x3d","\x94","\x14","\x53"),
	HX_HCSTRING("__compressedMemoryUsage","\x3f","\xa0","\x58","\x95"),
	HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a"),
	HX_HCSTRING("__format","\x57","\xfa","\xbd","\xa5"),
	HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"),
	HX_HCSTRING("__internalFormat","\x74","\x81","\xbd","\x56"),
	HX_HCSTRING("__memoryUsage","\x40","\xbf","\x50","\xc5"),
	HX_HCSTRING("__optimizeForRenderToTexture","\xbe","\xd4","\x90","\xb3"),
	HX_HCSTRING("__outputTextureMemoryUsage","\xc6","\xcf","\x1a","\x71"),
	HX_HCSTRING("__samplerState","\x09","\x67","\x80","\xdc"),
	HX_HCSTRING("__streamingLevels","\x51","\xa1","\xde","\x07"),
	HX_HCSTRING("__textureContext","\x74","\x21","\x78","\x6f"),
	HX_HCSTRING("__textureID","\x56","\x7e","\x75","\xdd"),
	HX_HCSTRING("__textureTarget","\x6c","\xff","\xb6","\xa1"),
	HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("__getATFVersion","\x5b","\xb8","\xa0","\xe5"),
	HX_HCSTRING("__getImage","\x05","\xa2","\x78","\xc0"),
	HX_HCSTRING("__getTexture","\x05","\xca","\xd5","\x26"),
	HX_HCSTRING("__readUInt24","\xd2","\x98","\x1e","\x4b"),
	HX_HCSTRING("__readUInt32","\xaf","\x99","\x1e","\x4b"),
	HX_HCSTRING("__setSamplerState","\x8b","\xe7","\xcf","\x5d"),
	HX_HCSTRING("__trackCompressedMemoryUsage","\xf4","\x85","\x3d","\x76"),
	HX_HCSTRING("__trackMemoryUsage","\xb5","\x60","\x9b","\x9e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureBase_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextureBase_obj::__supportsBGRA,"__supportsBGRA");
	HX_MARK_MEMBER_NAME(TextureBase_obj::__textureFormat,"__textureFormat");
	HX_MARK_MEMBER_NAME(TextureBase_obj::__textureInternalFormat,"__textureInternalFormat");
	HX_MARK_MEMBER_NAME(TextureBase_obj::__supportsCompressed,"__supportsCompressed");
	HX_MARK_MEMBER_NAME(TextureBase_obj::__textureFormatCompressed,"__textureFormatCompressed");
	HX_MARK_MEMBER_NAME(TextureBase_obj::__textureFormatCompressedAlpha,"__textureFormatCompressedAlpha");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureBase_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextureBase_obj::__supportsBGRA,"__supportsBGRA");
	HX_VISIT_MEMBER_NAME(TextureBase_obj::__textureFormat,"__textureFormat");
	HX_VISIT_MEMBER_NAME(TextureBase_obj::__textureInternalFormat,"__textureInternalFormat");
	HX_VISIT_MEMBER_NAME(TextureBase_obj::__supportsCompressed,"__supportsCompressed");
	HX_VISIT_MEMBER_NAME(TextureBase_obj::__textureFormatCompressed,"__textureFormatCompressed");
	HX_VISIT_MEMBER_NAME(TextureBase_obj::__textureFormatCompressedAlpha,"__textureFormatCompressedAlpha");
};

#endif

hx::Class TextureBase_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__supportsBGRA","\x58","\x53","\x57","\x0f"),
	HX_HCSTRING("__textureFormat","\x52","\x9b","\x58","\x18"),
	HX_HCSTRING("__textureInternalFormat","\x6f","\x15","\xaa","\xa7"),
	HX_HCSTRING("__supportsCompressed","\x45","\xfa","\xc0","\xd4"),
	HX_HCSTRING("__textureFormatCompressed","\x73","\x06","\x12","\x47"),
	HX_HCSTRING("__textureFormatCompressedAlpha","\xeb","\xcf","\xa6","\xab"),
	::String(null()) };

void TextureBase_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.TextureBase","\x2f","\x94","\x15","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextureBase_obj::__GetStatic;
	__mClass->mSetStaticField = &TextureBase_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextureBase_obj >;
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

void TextureBase_obj::__boot()
{
	__supportsBGRA= null();
	__supportsCompressed= null();
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures
