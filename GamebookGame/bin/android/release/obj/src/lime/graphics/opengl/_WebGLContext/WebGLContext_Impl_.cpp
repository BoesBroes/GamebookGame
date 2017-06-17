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
#ifndef INCLUDED_lime_graphics_opengl__WebGL2Context_WebGL2Context_Impl_
#include <lime/graphics/opengl/_WebGL2Context/WebGL2Context_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl__WebGLContext_WebGLContext_Impl_
#include <lime/graphics/opengl/_WebGLContext/WebGLContext_Impl_.h>
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
namespace lime{
namespace graphics{
namespace opengl{
namespace _WebGLContext{

Void WebGLContext_Impl__obj::__construct()
{
	return null();
}

//WebGLContext_Impl__obj::~WebGLContext_Impl__obj() { }

Dynamic WebGLContext_Impl__obj::__CreateEmpty() { return  new WebGLContext_Impl__obj; }
hx::ObjectPtr< WebGLContext_Impl__obj > WebGLContext_Impl__obj::__new()
{  hx::ObjectPtr< WebGLContext_Impl__obj > _result_ = new WebGLContext_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic WebGLContext_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WebGLContext_Impl__obj > _result_ = new WebGLContext_Impl__obj();
	_result_->__construct();
	return _result_;}

Void WebGLContext_Impl__obj::bufferData( ::lime::_backend::native::NativeGLRenderContext this1,int target,::lime::utils::ArrayBufferView srcData,int usage){
{
		HX_STACK_FRAME("lime.graphics.opengl._WebGLContext.WebGLContext_Impl_","bufferData",0xba6d60b4,"lime.graphics.opengl._WebGLContext.WebGLContext_Impl_.bufferData","lime/graphics/opengl/WebGLContext.hx",14,0x9ad92e12)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(srcData,"srcData")
		HX_STACK_ARG(usage,"usage")
		HX_STACK_LINE(16)
		::lime::_backend::native::NativeGLRenderContext tmp = this1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(16)
		int tmp1 = target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16)
		::lime::utils::ArrayBufferView tmp2 = srcData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(16)
		int tmp3 = usage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(16)
		::lime::graphics::opengl::_WebGL2Context::WebGL2Context_Impl__obj::bufferData(tmp,tmp1,tmp2,tmp3,null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(WebGLContext_Impl__obj,bufferData,(void))

Void WebGLContext_Impl__obj::bufferSubData( ::lime::_backend::native::NativeGLRenderContext this1,int target,int offset,::lime::utils::ArrayBufferView srcData){
{
		HX_STACK_FRAME("lime.graphics.opengl._WebGLContext.WebGLContext_Impl_","bufferSubData",0xb1f69380,"lime.graphics.opengl._WebGLContext.WebGLContext_Impl_.bufferSubData","lime/graphics/opengl/WebGLContext.hx",23,0x9ad92e12)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(srcData,"srcData")
		HX_STACK_LINE(23)
		int srcOffset = (int)0;		HX_STACK_VAR(srcOffset,"srcOffset");
		HX_STACK_LINE(23)
		bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		if ((tmp)){
			HX_STACK_LINE(23)
			tmp1 = null();
		}
		else{
			HX_STACK_LINE(23)
			bool tmp2 = (srcData != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(23)
			if ((tmp2)){
				HX_STACK_LINE(23)
				tmp1 = srcData->byteLength;
			}
			else{
				HX_STACK_LINE(23)
				tmp1 = (int)0;
			}
		}
		HX_STACK_LINE(23)
		Dynamic size = tmp1;		HX_STACK_VAR(size,"size");
		HX_STACK_LINE(23)
		::lime::utils::BytePointerData tmp2 = ::lime::graphics::opengl::_WebGL2Context::WebGL2Context_Impl__obj::__tempPointer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		::lime::utils::ArrayBufferView tmp3 = srcData;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(23)
		int tmp4 = srcOffset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(23)
		::lime::utils::_BytePointer::BytePointer_Impl__obj::set(tmp2,null(),tmp3,null(),tmp4);
		HX_STACK_LINE(23)
		int tmp5 = target;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(23)
		int tmp6 = offset;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(23)
		Dynamic tmp7 = size;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(23)
		::lime::utils::BytePointerData tmp8 = ::lime::graphics::opengl::_WebGL2Context::WebGL2Context_Impl__obj::__tempPointer;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(23)
		Float tmp9 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(23)
		this1->bufferSubData(tmp5,tmp6,tmp7,tmp9);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(WebGLContext_Impl__obj,bufferSubData,(void))

Void WebGLContext_Impl__obj::compressedTexImage2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int internalformat,int width,int height,int border,::lime::utils::ArrayBufferView srcData){
{
		HX_STACK_FRAME("lime.graphics.opengl._WebGLContext.WebGLContext_Impl_","compressedTexImage2D",0x5a232291,"lime.graphics.opengl._WebGLContext.WebGLContext_Impl_.compressedTexImage2D","lime/graphics/opengl/WebGLContext.hx",28,0x9ad92e12)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(border,"border")
		HX_STACK_ARG(srcData,"srcData")
		HX_STACK_LINE(30)
		::lime::_backend::native::NativeGLRenderContext tmp = this1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		int tmp1 = target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		int tmp2 = level;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		int tmp3 = internalformat;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(30)
		int tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(30)
		int tmp5 = height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(30)
		int tmp6 = border;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(30)
		::lime::utils::ArrayBufferView tmp7 = srcData;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(30)
		::lime::graphics::opengl::_WebGL2Context::WebGL2Context_Impl__obj::compressedTexImage2D(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(WebGLContext_Impl__obj,compressedTexImage2D,(void))

Void WebGLContext_Impl__obj::compressedTexSubImage2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int xoffset,int yoffset,int width,int height,int format,::lime::utils::ArrayBufferView srcData){
{
		HX_STACK_FRAME("lime.graphics.opengl._WebGLContext.WebGLContext_Impl_","compressedTexSubImage2D",0x0517fa29,"lime.graphics.opengl._WebGLContext.WebGLContext_Impl_.compressedTexSubImage2D","lime/graphics/opengl/WebGLContext.hx",37,0x9ad92e12)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(xoffset,"xoffset")
		HX_STACK_ARG(yoffset,"yoffset")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(srcData,"srcData")
		HX_STACK_LINE(37)
		int srcOffset = (int)0;		HX_STACK_VAR(srcOffset,"srcOffset");
		HX_STACK_LINE(37)
		bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		if ((tmp)){
			HX_STACK_LINE(37)
			tmp1 = null();
		}
		else{
			HX_STACK_LINE(37)
			bool tmp2 = (srcData != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(37)
			if ((tmp2)){
				HX_STACK_LINE(37)
				tmp1 = srcData->byteLength;
			}
			else{
				HX_STACK_LINE(37)
				tmp1 = (int)0;
			}
		}
		HX_STACK_LINE(37)
		Dynamic imageSize = tmp1;		HX_STACK_VAR(imageSize,"imageSize");
		HX_STACK_LINE(37)
		::lime::utils::BytePointerData tmp2 = ::lime::graphics::opengl::_WebGL2Context::WebGL2Context_Impl__obj::__tempPointer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		::lime::utils::ArrayBufferView tmp3 = srcData;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		int tmp4 = srcOffset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(37)
		::lime::utils::_BytePointer::BytePointer_Impl__obj::set(tmp2,null(),tmp3,null(),tmp4);
		HX_STACK_LINE(37)
		int tmp5 = target;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(37)
		int tmp6 = level;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(37)
		int tmp7 = xoffset;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(37)
		int tmp8 = yoffset;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(37)
		int tmp9 = width;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(37)
		int tmp10 = height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(37)
		int tmp11 = format;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(37)
		Dynamic tmp12 = imageSize;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(37)
		::lime::utils::BytePointerData tmp13 = ::lime::graphics::opengl::_WebGL2Context::WebGL2Context_Impl__obj::__tempPointer;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(37)
		Float tmp14 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(37)
		this1->compressedTexSubImage2D(tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp14);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(WebGLContext_Impl__obj,compressedTexSubImage2D,(void))

Void WebGLContext_Impl__obj::readPixels( ::lime::_backend::native::NativeGLRenderContext this1,int x,int y,int width,int height,int format,int type,::lime::utils::ArrayBufferView pixels){
{
		HX_STACK_FRAME("lime.graphics.opengl._WebGLContext.WebGLContext_Impl_","readPixels",0xad1f748d,"lime.graphics.opengl._WebGLContext.WebGLContext_Impl_.readPixels","lime/graphics/opengl/WebGLContext.hx",44,0x9ad92e12)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(pixels,"pixels")
		HX_STACK_LINE(44)
		int dstOffset = (int)0;		HX_STACK_VAR(dstOffset,"dstOffset");
		HX_STACK_LINE(44)
		::lime::utils::BytePointerData tmp = ::lime::graphics::opengl::_WebGL2Context::WebGL2Context_Impl__obj::__tempPointer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		::lime::utils::ArrayBufferView tmp1 = pixels;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		int tmp2 = dstOffset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		::lime::utils::_BytePointer::BytePointer_Impl__obj::set(tmp,null(),tmp1,null(),tmp2);
		HX_STACK_LINE(44)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		int tmp5 = width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		int tmp6 = height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(44)
		int tmp7 = format;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(44)
		int tmp8 = type;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(44)
		::lime::utils::BytePointerData tmp9 = ::lime::graphics::opengl::_WebGL2Context::WebGL2Context_Impl__obj::__tempPointer;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(44)
		Float tmp10 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(44)
		this1->readPixels(tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp10);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(WebGLContext_Impl__obj,readPixels,(void))

Void WebGLContext_Impl__obj::texImage2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int internalformat,int width,int height,int border,int format,int type,::lime::utils::ArrayBufferView srcData){
{
		HX_STACK_FRAME("lime.graphics.opengl._WebGLContext.WebGLContext_Impl_","texImage2D",0xe0611e30,"lime.graphics.opengl._WebGLContext.WebGLContext_Impl_.texImage2D","lime/graphics/opengl/WebGLContext.hx",52,0x9ad92e12)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(border,"border")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(srcData,"srcData")
		HX_STACK_LINE(52)
		int srcOffset = (int)0;		HX_STACK_VAR(srcOffset,"srcOffset");
		HX_STACK_LINE(52)
		::lime::utils::BytePointerData tmp = ::lime::graphics::opengl::_WebGL2Context::WebGL2Context_Impl__obj::__tempPointer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		::lime::utils::ArrayBufferView tmp1 = srcData;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		int tmp2 = srcOffset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		::lime::utils::_BytePointer::BytePointer_Impl__obj::set(tmp,null(),tmp1,null(),tmp2);
		HX_STACK_LINE(52)
		int tmp3 = target;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		int tmp4 = level;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		int tmp5 = internalformat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		int tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		int tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(52)
		int tmp8 = border;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(52)
		int tmp9 = format;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(52)
		int tmp10 = type;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(52)
		::lime::utils::BytePointerData tmp11 = ::lime::graphics::opengl::_WebGL2Context::WebGL2Context_Impl__obj::__tempPointer;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(52)
		Float tmp12 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(52)
		this1->texImage2D(tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp12);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(WebGLContext_Impl__obj,texImage2D,(void))

Void WebGLContext_Impl__obj::texSubImage2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int xoffset,int yoffset,int width,int height,int format,int type,::lime::utils::ArrayBufferView srcData,hx::Null< int >  __o_srcOffset){
int srcOffset = __o_srcOffset.Default(0);
	HX_STACK_FRAME("lime.graphics.opengl._WebGLContext.WebGLContext_Impl_","texSubImage2D",0x94a1cbea,"lime.graphics.opengl._WebGLContext.WebGLContext_Impl_.texSubImage2D","lime/graphics/opengl/WebGLContext.hx",73,0x9ad92e12)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(level,"level")
	HX_STACK_ARG(xoffset,"xoffset")
	HX_STACK_ARG(yoffset,"yoffset")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(srcData,"srcData")
	HX_STACK_ARG(srcOffset,"srcOffset")
{
		HX_STACK_LINE(73)
		::lime::utils::BytePointerData tmp = ::lime::graphics::opengl::_WebGL2Context::WebGL2Context_Impl__obj::__tempPointer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		::lime::utils::ArrayBufferView tmp1 = srcData;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		int tmp2 = srcOffset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		::lime::utils::_BytePointer::BytePointer_Impl__obj::set(tmp,null(),tmp1,null(),tmp2);
		HX_STACK_LINE(73)
		int tmp3 = target;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		int tmp4 = level;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(73)
		int tmp5 = xoffset;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(73)
		int tmp6 = yoffset;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(73)
		int tmp7 = width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(73)
		int tmp8 = height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(73)
		int tmp9 = format;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(73)
		int tmp10 = type;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(73)
		::lime::utils::BytePointerData tmp11 = ::lime::graphics::opengl::_WebGL2Context::WebGL2Context_Impl__obj::__tempPointer;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(73)
		Float tmp12 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(73)
		this1->texSubImage2D(tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp12);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC11(WebGLContext_Impl__obj,texSubImage2D,(void))

Void WebGLContext_Impl__obj::uniformMatrix2fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,bool transpose,::lime::utils::ArrayBufferView v){
{
		HX_STACK_FRAME("lime.graphics.opengl._WebGLContext.WebGLContext_Impl_","uniformMatrix2fv",0x24a51777,"lime.graphics.opengl._WebGLContext.WebGLContext_Impl_.uniformMatrix2fv","lime/graphics/opengl/WebGLContext.hx",91,0x9ad92e12)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(93)
		::lime::_backend::native::NativeGLRenderContext tmp = this1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		int tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		bool tmp2 = transpose;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(93)
		::lime::utils::ArrayBufferView tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(93)
		::lime::graphics::opengl::_WebGL2Context::WebGL2Context_Impl__obj::uniformMatrix2fv(tmp,tmp1,tmp2,tmp3,null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(WebGLContext_Impl__obj,uniformMatrix2fv,(void))

Void WebGLContext_Impl__obj::uniformMatrix3fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,bool transpose,::lime::utils::ArrayBufferView v){
{
		HX_STACK_FRAME("lime.graphics.opengl._WebGLContext.WebGLContext_Impl_","uniformMatrix3fv",0x24a5d9b8,"lime.graphics.opengl._WebGLContext.WebGLContext_Impl_.uniformMatrix3fv","lime/graphics/opengl/WebGLContext.hx",98,0x9ad92e12)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(100)
		::lime::_backend::native::NativeGLRenderContext tmp = this1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		int tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		bool tmp2 = transpose;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		::lime::utils::ArrayBufferView tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(100)
		::lime::graphics::opengl::_WebGL2Context::WebGL2Context_Impl__obj::uniformMatrix3fv(tmp,tmp1,tmp2,tmp3,null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(WebGLContext_Impl__obj,uniformMatrix3fv,(void))

Void WebGLContext_Impl__obj::uniformMatrix4fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,bool transpose,::lime::utils::ArrayBufferView v){
{
		HX_STACK_FRAME("lime.graphics.opengl._WebGLContext.WebGLContext_Impl_","uniformMatrix4fv",0x24a69bf9,"lime.graphics.opengl._WebGLContext.WebGLContext_Impl_.uniformMatrix4fv","lime/graphics/opengl/WebGLContext.hx",105,0x9ad92e12)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(107)
		::lime::_backend::native::NativeGLRenderContext tmp = this1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		int tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		bool tmp2 = transpose;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		::lime::utils::ArrayBufferView tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		::lime::graphics::opengl::_WebGL2Context::WebGL2Context_Impl__obj::uniformMatrix4fv(tmp,tmp1,tmp2,tmp3,null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(WebGLContext_Impl__obj,uniformMatrix4fv,(void))

::lime::_backend::native::NativeGLRenderContext WebGLContext_Impl__obj::fromGL( ::hx::Class gl){
	HX_STACK_FRAME("lime.graphics.opengl._WebGLContext.WebGLContext_Impl_","fromGL",0xc064b679,"lime.graphics.opengl._WebGLContext.WebGLContext_Impl_.fromGL","lime/graphics/opengl/WebGLContext.hx",112,0x9ad92e12)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(115)
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	::lime::_backend::native::NativeGLRenderContext tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WebGLContext_Impl__obj,fromGL,return )

::lime::_backend::native::NativeGLRenderContext WebGLContext_Impl__obj::fromGLES2Context( ::lime::_backend::native::NativeGLRenderContext gl){
	HX_STACK_FRAME("lime.graphics.opengl._WebGLContext.WebGLContext_Impl_","fromGLES2Context",0xf9bf4a04,"lime.graphics.opengl._WebGLContext.WebGLContext_Impl_.fromGLES2Context","lime/graphics/opengl/WebGLContext.hx",123,0x9ad92e12)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(125)
	::lime::_backend::native::NativeGLRenderContext tmp = gl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WebGLContext_Impl__obj,fromGLES2Context,return )

::lime::_backend::native::NativeGLRenderContext WebGLContext_Impl__obj::fromGLES3Context( ::lime::_backend::native::NativeGLRenderContext gl){
	HX_STACK_FRAME("lime.graphics.opengl._WebGLContext.WebGLContext_Impl_","fromGLES3Context",0x32f1bc23,"lime.graphics.opengl._WebGLContext.WebGLContext_Impl_.fromGLES3Context","lime/graphics/opengl/WebGLContext.hx",130,0x9ad92e12)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(132)
	::lime::_backend::native::NativeGLRenderContext tmp = gl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WebGLContext_Impl__obj,fromGLES3Context,return )


WebGLContext_Impl__obj::WebGLContext_Impl__obj()
{
}

bool WebGLContext_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"fromGL") ) { outValue = fromGL_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bufferData") ) { outValue = bufferData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"readPixels") ) { outValue = readPixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"texImage2D") ) { outValue = texImage2D_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bufferSubData") ) { outValue = bufferSubData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"texSubImage2D") ) { outValue = texSubImage2D_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uniformMatrix2fv") ) { outValue = uniformMatrix2fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformMatrix3fv") ) { outValue = uniformMatrix3fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformMatrix4fv") ) { outValue = uniformMatrix4fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromGLES2Context") ) { outValue = fromGLES2Context_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromGLES3Context") ) { outValue = fromGLES3Context_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"compressedTexImage2D") ) { outValue = compressedTexImage2D_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"compressedTexSubImage2D") ) { outValue = compressedTexSubImage2D_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WebGLContext_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WebGLContext_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class WebGLContext_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("bufferData","\x4a","\xbf","\x73","\x93"),
	HX_HCSTRING("bufferSubData","\xaa","\xf6","\xe4","\x45"),
	HX_HCSTRING("compressedTexImage2D","\xa7","\xd8","\x5d","\x24"),
	HX_HCSTRING("compressedTexSubImage2D","\xd3","\xb5","\x7d","\x36"),
	HX_HCSTRING("readPixels","\x23","\xd3","\x25","\x86"),
	HX_HCSTRING("texImage2D","\xc6","\x7c","\x67","\xb9"),
	HX_HCSTRING("texSubImage2D","\x14","\x2f","\x90","\x28"),
	HX_HCSTRING("uniformMatrix2fv","\x8d","\x8a","\x59","\xc5"),
	HX_HCSTRING("uniformMatrix3fv","\xce","\x4c","\x5a","\xc5"),
	HX_HCSTRING("uniformMatrix4fv","\x0f","\x0f","\x5b","\xc5"),
	HX_HCSTRING("fromGL","\x0f","\x92","\xc6","\xb5"),
	HX_HCSTRING("fromGLES2Context","\x1a","\xbd","\x73","\x9a"),
	HX_HCSTRING("fromGLES3Context","\x39","\x2f","\xa6","\xd3"),
	::String(null()) };

void WebGLContext_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl._WebGLContext.WebGLContext_Impl_","\xc4","\xd2","\xba","\x25");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WebGLContext_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< WebGLContext_Impl__obj >;
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
} // end namespace _WebGLContext
