#include <hxcpp.h>

#ifndef INCLUDED_haxe__Int64_Int64_Impl_
#include <haxe/_Int64/Int64_Impl_.h>
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
#ifndef INCLUDED_lime_graphics_opengl_GLContextType
#include <lime/graphics/opengl/GLContextType.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl__GLES3Context_GLES3Context_Impl_
#include <lime/graphics/opengl/_GLES3Context/GLES3Context_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{
namespace _GLES3Context{

Void GLES3Context_Impl__obj::__construct()
{
	return null();
}

//GLES3Context_Impl__obj::~GLES3Context_Impl__obj() { }

Dynamic GLES3Context_Impl__obj::__CreateEmpty() { return  new GLES3Context_Impl__obj; }
hx::ObjectPtr< GLES3Context_Impl__obj > GLES3Context_Impl__obj::__new()
{  hx::ObjectPtr< GLES3Context_Impl__obj > _result_ = new GLES3Context_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic GLES3Context_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLES3Context_Impl__obj > _result_ = new GLES3Context_Impl__obj();
	_result_->__construct();
	return _result_;}

::String GLES3Context_Impl__obj::__extensions;

int GLES3Context_Impl__obj::get_EXTENSIONS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_EXTENSIONS",0x8648f267,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_EXTENSIONS","lime/graphics/opengl/GLES3Context.hx",645,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(645)
	return (int)7939;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_EXTENSIONS,return )

int GLES3Context_Impl__obj::get_DEPTH_BUFFER_BIT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DEPTH_BUFFER_BIT",0xfd405e5d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DEPTH_BUFFER_BIT","lime/graphics/opengl/GLES3Context.hx",646,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(646)
	int tmp = this1->DEPTH_BUFFER_BIT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(646)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DEPTH_BUFFER_BIT,return )

int GLES3Context_Impl__obj::get_STENCIL_BUFFER_BIT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STENCIL_BUFFER_BIT",0x170fa0c4,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STENCIL_BUFFER_BIT","lime/graphics/opengl/GLES3Context.hx",647,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(647)
	int tmp = this1->STENCIL_BUFFER_BIT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(647)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STENCIL_BUFFER_BIT,return )

int GLES3Context_Impl__obj::get_COLOR_BUFFER_BIT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_COLOR_BUFFER_BIT",0x31e6f9fd,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_COLOR_BUFFER_BIT","lime/graphics/opengl/GLES3Context.hx",648,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(648)
	int tmp = this1->COLOR_BUFFER_BIT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(648)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_COLOR_BUFFER_BIT,return )

int GLES3Context_Impl__obj::get_POINTS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_POINTS",0x02755af6,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_POINTS","lime/graphics/opengl/GLES3Context.hx",649,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(649)
	int tmp = this1->POINTS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(649)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_POINTS,return )

int GLES3Context_Impl__obj::get_LINES( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_LINES",0xdd86346c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_LINES","lime/graphics/opengl/GLES3Context.hx",650,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(650)
	int tmp = this1->LINES;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(650)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_LINES,return )

int GLES3Context_Impl__obj::get_LINE_LOOP( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_LINE_LOOP",0x393e3edc,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_LINE_LOOP","lime/graphics/opengl/GLES3Context.hx",651,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(651)
	int tmp = this1->LINE_LOOP;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(651)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_LINE_LOOP,return )

int GLES3Context_Impl__obj::get_LINE_STRIP( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_LINE_STRIP",0xe8572340,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_LINE_STRIP","lime/graphics/opengl/GLES3Context.hx",652,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(652)
	int tmp = this1->LINE_STRIP;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(652)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_LINE_STRIP,return )

int GLES3Context_Impl__obj::get_TRIANGLES( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TRIANGLES",0x9d168998,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TRIANGLES","lime/graphics/opengl/GLES3Context.hx",653,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(653)
	int tmp = this1->TRIANGLES;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(653)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TRIANGLES,return )

int GLES3Context_Impl__obj::get_TRIANGLE_STRIP( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TRIANGLE_STRIP",0xac268e94,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TRIANGLE_STRIP","lime/graphics/opengl/GLES3Context.hx",654,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(654)
	int tmp = this1->TRIANGLE_STRIP;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(654)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TRIANGLE_STRIP,return )

int GLES3Context_Impl__obj::get_TRIANGLE_FAN( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TRIANGLE_FAN",0x2f816b8f,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TRIANGLE_FAN","lime/graphics/opengl/GLES3Context.hx",655,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(655)
	int tmp = this1->TRIANGLE_FAN;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(655)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TRIANGLE_FAN,return )

int GLES3Context_Impl__obj::get_ZERO( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_ZERO",0xea17893b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_ZERO","lime/graphics/opengl/GLES3Context.hx",656,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(656)
	int tmp = this1->ZERO;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(656)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_ZERO,return )

int GLES3Context_Impl__obj::get_ONE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_ONE",0x4399a793,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_ONE","lime/graphics/opengl/GLES3Context.hx",657,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(657)
	int tmp = this1->ONE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(657)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_ONE,return )

int GLES3Context_Impl__obj::get_SRC_COLOR( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SRC_COLOR",0x7f3a8755,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SRC_COLOR","lime/graphics/opengl/GLES3Context.hx",658,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(658)
	int tmp = this1->SRC_COLOR;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(658)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SRC_COLOR,return )

int GLES3Context_Impl__obj::get_ONE_MINUS_SRC_COLOR( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_ONE_MINUS_SRC_COLOR",0xd946d66d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_ONE_MINUS_SRC_COLOR","lime/graphics/opengl/GLES3Context.hx",659,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(659)
	int tmp = this1->ONE_MINUS_SRC_COLOR;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(659)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_ONE_MINUS_SRC_COLOR,return )

int GLES3Context_Impl__obj::get_SRC_ALPHA( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SRC_ALPHA",0x5674bd50,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SRC_ALPHA","lime/graphics/opengl/GLES3Context.hx",660,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(660)
	int tmp = this1->SRC_ALPHA;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(660)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SRC_ALPHA,return )

int GLES3Context_Impl__obj::get_ONE_MINUS_SRC_ALPHA( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_ONE_MINUS_SRC_ALPHA",0xb0810c68,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_ONE_MINUS_SRC_ALPHA","lime/graphics/opengl/GLES3Context.hx",661,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(661)
	int tmp = this1->ONE_MINUS_SRC_ALPHA;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(661)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_ONE_MINUS_SRC_ALPHA,return )

int GLES3Context_Impl__obj::get_DST_ALPHA( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DST_ALPHA",0xf66eeb31,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DST_ALPHA","lime/graphics/opengl/GLES3Context.hx",662,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(662)
	int tmp = this1->DST_ALPHA;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(662)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DST_ALPHA,return )

int GLES3Context_Impl__obj::get_ONE_MINUS_DST_ALPHA( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_ONE_MINUS_DST_ALPHA",0x507b3a49,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_ONE_MINUS_DST_ALPHA","lime/graphics/opengl/GLES3Context.hx",663,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(663)
	int tmp = this1->ONE_MINUS_DST_ALPHA;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(663)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_ONE_MINUS_DST_ALPHA,return )

int GLES3Context_Impl__obj::get_DST_COLOR( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DST_COLOR",0x1f34b536,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DST_COLOR","lime/graphics/opengl/GLES3Context.hx",664,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(664)
	int tmp = this1->DST_COLOR;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(664)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DST_COLOR,return )

int GLES3Context_Impl__obj::get_ONE_MINUS_DST_COLOR( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_ONE_MINUS_DST_COLOR",0x7941044e,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_ONE_MINUS_DST_COLOR","lime/graphics/opengl/GLES3Context.hx",665,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(665)
	int tmp = this1->ONE_MINUS_DST_COLOR;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(665)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_ONE_MINUS_DST_COLOR,return )

int GLES3Context_Impl__obj::get_SRC_ALPHA_SATURATE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SRC_ALPHA_SATURATE",0x6c23effe,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SRC_ALPHA_SATURATE","lime/graphics/opengl/GLES3Context.hx",666,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(666)
	int tmp = this1->SRC_ALPHA_SATURATE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(666)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SRC_ALPHA_SATURATE,return )

int GLES3Context_Impl__obj::get_FUNC_ADD( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FUNC_ADD",0xfddb2fd9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FUNC_ADD","lime/graphics/opengl/GLES3Context.hx",667,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(667)
	int tmp = this1->FUNC_ADD;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(667)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FUNC_ADD,return )

int GLES3Context_Impl__obj::get_BLEND_EQUATION( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_BLEND_EQUATION",0x274c3c6d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_BLEND_EQUATION","lime/graphics/opengl/GLES3Context.hx",668,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(668)
	int tmp = this1->BLEND_EQUATION;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(668)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_BLEND_EQUATION,return )

int GLES3Context_Impl__obj::get_BLEND_EQUATION_RGB( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_BLEND_EQUATION_RGB",0xc9d132db,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_BLEND_EQUATION_RGB","lime/graphics/opengl/GLES3Context.hx",669,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(669)
	int tmp = this1->BLEND_EQUATION_RGB;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(669)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_BLEND_EQUATION_RGB,return )

int GLES3Context_Impl__obj::get_BLEND_EQUATION_ALPHA( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_BLEND_EQUATION_ALPHA",0x0030f2ac,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_BLEND_EQUATION_ALPHA","lime/graphics/opengl/GLES3Context.hx",670,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(670)
	int tmp = this1->BLEND_EQUATION_ALPHA;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(670)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_BLEND_EQUATION_ALPHA,return )

int GLES3Context_Impl__obj::get_FUNC_SUBTRACT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FUNC_SUBTRACT",0x017bb43c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FUNC_SUBTRACT","lime/graphics/opengl/GLES3Context.hx",671,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(671)
	int tmp = this1->FUNC_SUBTRACT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(671)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FUNC_SUBTRACT,return )

int GLES3Context_Impl__obj::get_FUNC_REVERSE_SUBTRACT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FUNC_REVERSE_SUBTRACT",0x9d6c5659,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FUNC_REVERSE_SUBTRACT","lime/graphics/opengl/GLES3Context.hx",672,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(672)
	int tmp = this1->FUNC_REVERSE_SUBTRACT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(672)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FUNC_REVERSE_SUBTRACT,return )

int GLES3Context_Impl__obj::get_BLEND_DST_RGB( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_BLEND_DST_RGB",0xd6d07a92,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_BLEND_DST_RGB","lime/graphics/opengl/GLES3Context.hx",673,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(673)
	int tmp = this1->BLEND_DST_RGB;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(673)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_BLEND_DST_RGB,return )

int GLES3Context_Impl__obj::get_BLEND_SRC_RGB( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_BLEND_SRC_RGB",0x166736f1,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_BLEND_SRC_RGB","lime/graphics/opengl/GLES3Context.hx",674,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(674)
	int tmp = this1->BLEND_SRC_RGB;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(674)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_BLEND_SRC_RGB,return )

int GLES3Context_Impl__obj::get_BLEND_DST_ALPHA( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_BLEND_DST_ALPHA",0xc15ad623,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_BLEND_DST_ALPHA","lime/graphics/opengl/GLES3Context.hx",675,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(675)
	int tmp = this1->BLEND_DST_ALPHA;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(675)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_BLEND_DST_ALPHA,return )

int GLES3Context_Impl__obj::get_BLEND_SRC_ALPHA( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_BLEND_SRC_ALPHA",0x2160a842,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_BLEND_SRC_ALPHA","lime/graphics/opengl/GLES3Context.hx",676,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(676)
	int tmp = this1->BLEND_SRC_ALPHA;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(676)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_BLEND_SRC_ALPHA,return )

int GLES3Context_Impl__obj::get_CONSTANT_COLOR( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_CONSTANT_COLOR",0x7e448cbb,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_CONSTANT_COLOR","lime/graphics/opengl/GLES3Context.hx",677,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(677)
	int tmp = this1->CONSTANT_COLOR;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(677)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_CONSTANT_COLOR,return )

int GLES3Context_Impl__obj::get_ONE_MINUS_CONSTANT_COLOR( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_ONE_MINUS_CONSTANT_COLOR",0x02ca86a3,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_ONE_MINUS_CONSTANT_COLOR","lime/graphics/opengl/GLES3Context.hx",678,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(678)
	int tmp = this1->ONE_MINUS_CONSTANT_COLOR;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(678)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_ONE_MINUS_CONSTANT_COLOR,return )

int GLES3Context_Impl__obj::get_CONSTANT_ALPHA( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_CONSTANT_ALPHA",0x557ec2b6,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_CONSTANT_ALPHA","lime/graphics/opengl/GLES3Context.hx",679,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(679)
	int tmp = this1->CONSTANT_ALPHA;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(679)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_CONSTANT_ALPHA,return )

int GLES3Context_Impl__obj::get_ONE_MINUS_CONSTANT_ALPHA( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_ONE_MINUS_CONSTANT_ALPHA",0xda04bc9e,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_ONE_MINUS_CONSTANT_ALPHA","lime/graphics/opengl/GLES3Context.hx",680,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(680)
	int tmp = this1->ONE_MINUS_CONSTANT_ALPHA;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(680)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_ONE_MINUS_CONSTANT_ALPHA,return )

int GLES3Context_Impl__obj::get_BLEND_COLOR( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_BLEND_COLOR",0xd21bd1c2,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_BLEND_COLOR","lime/graphics/opengl/GLES3Context.hx",681,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(681)
	int tmp = this1->BLEND_COLOR;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(681)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_BLEND_COLOR,return )

int GLES3Context_Impl__obj::get_ARRAY_BUFFER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_ARRAY_BUFFER",0x9269e359,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_ARRAY_BUFFER","lime/graphics/opengl/GLES3Context.hx",682,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(682)
	int tmp = this1->ARRAY_BUFFER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(682)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_ARRAY_BUFFER,return )

int GLES3Context_Impl__obj::get_ELEMENT_ARRAY_BUFFER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_ELEMENT_ARRAY_BUFFER",0x05d54d1c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_ELEMENT_ARRAY_BUFFER","lime/graphics/opengl/GLES3Context.hx",683,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(683)
	int tmp = this1->ELEMENT_ARRAY_BUFFER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(683)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_ELEMENT_ARRAY_BUFFER,return )

int GLES3Context_Impl__obj::get_ARRAY_BUFFER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_ARRAY_BUFFER_BINDING",0x422c1cff,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_ARRAY_BUFFER_BINDING","lime/graphics/opengl/GLES3Context.hx",684,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(684)
	int tmp = this1->ARRAY_BUFFER_BINDING;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(684)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_ARRAY_BUFFER_BINDING,return )

int GLES3Context_Impl__obj::get_ELEMENT_ARRAY_BUFFER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_ELEMENT_ARRAY_BUFFER_BINDING",0x4a8b81c2,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_ELEMENT_ARRAY_BUFFER_BINDING","lime/graphics/opengl/GLES3Context.hx",685,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(685)
	int tmp = this1->ELEMENT_ARRAY_BUFFER_BINDING;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(685)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_ELEMENT_ARRAY_BUFFER_BINDING,return )

int GLES3Context_Impl__obj::get_STREAM_DRAW( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STREAM_DRAW",0x7f7b85b0,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STREAM_DRAW","lime/graphics/opengl/GLES3Context.hx",686,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(686)
	int tmp = this1->STREAM_DRAW;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(686)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STREAM_DRAW,return )

int GLES3Context_Impl__obj::get_STATIC_DRAW( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STATIC_DRAW",0x248256c2,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STATIC_DRAW","lime/graphics/opengl/GLES3Context.hx",687,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(687)
	int tmp = this1->STATIC_DRAW;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(687)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STATIC_DRAW,return )

int GLES3Context_Impl__obj::get_DYNAMIC_DRAW( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DYNAMIC_DRAW",0xc2718137,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DYNAMIC_DRAW","lime/graphics/opengl/GLES3Context.hx",688,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(688)
	int tmp = this1->DYNAMIC_DRAW;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(688)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DYNAMIC_DRAW,return )

int GLES3Context_Impl__obj::get_BUFFER_SIZE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_BUFFER_SIZE",0xb6e481ed,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_BUFFER_SIZE","lime/graphics/opengl/GLES3Context.hx",689,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(689)
	int tmp = this1->BUFFER_SIZE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(689)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_BUFFER_SIZE,return )

int GLES3Context_Impl__obj::get_BUFFER_USAGE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_BUFFER_USAGE",0x7e638255,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_BUFFER_USAGE","lime/graphics/opengl/GLES3Context.hx",690,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(690)
	int tmp = this1->BUFFER_USAGE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(690)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_BUFFER_USAGE,return )

int GLES3Context_Impl__obj::get_CURRENT_VERTEX_ATTRIB( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_CURRENT_VERTEX_ATTRIB",0x54ac54ac,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_CURRENT_VERTEX_ATTRIB","lime/graphics/opengl/GLES3Context.hx",691,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(691)
	int tmp = this1->CURRENT_VERTEX_ATTRIB;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(691)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_CURRENT_VERTEX_ATTRIB,return )

int GLES3Context_Impl__obj::get_FRONT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FRONT",0x6f126f16,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FRONT","lime/graphics/opengl/GLES3Context.hx",692,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(692)
	int tmp = this1->FRONT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(692)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FRONT,return )

int GLES3Context_Impl__obj::get_BACK( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_BACK",0xda37543a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_BACK","lime/graphics/opengl/GLES3Context.hx",693,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(693)
	int tmp = this1->BACK;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(693)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_BACK,return )

int GLES3Context_Impl__obj::get_FRONT_AND_BACK( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FRONT_AND_BACK",0x77246578,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FRONT_AND_BACK","lime/graphics/opengl/GLES3Context.hx",694,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(694)
	int tmp = this1->FRONT_AND_BACK;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(694)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FRONT_AND_BACK,return )

int GLES3Context_Impl__obj::get_CULL_FACE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_CULL_FACE",0xf2718e97,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_CULL_FACE","lime/graphics/opengl/GLES3Context.hx",695,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(695)
	int tmp = this1->CULL_FACE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(695)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_CULL_FACE,return )

int GLES3Context_Impl__obj::get_BLEND( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_BLEND",0x1d793ebe,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_BLEND","lime/graphics/opengl/GLES3Context.hx",696,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(696)
	int tmp = this1->BLEND;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(696)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_BLEND,return )

int GLES3Context_Impl__obj::get_DITHER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DITHER",0xc90649b9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DITHER","lime/graphics/opengl/GLES3Context.hx",697,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(697)
	int tmp = this1->DITHER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(697)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DITHER,return )

int GLES3Context_Impl__obj::get_STENCIL_TEST( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STENCIL_TEST",0x73bc59e8,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STENCIL_TEST","lime/graphics/opengl/GLES3Context.hx",698,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(698)
	int tmp = this1->STENCIL_TEST;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(698)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STENCIL_TEST,return )

int GLES3Context_Impl__obj::get_DEPTH_TEST( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DEPTH_TEST",0x32f46ec1,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DEPTH_TEST","lime/graphics/opengl/GLES3Context.hx",699,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(699)
	int tmp = this1->DEPTH_TEST;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(699)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DEPTH_TEST,return )

int GLES3Context_Impl__obj::get_SCISSOR_TEST( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SCISSOR_TEST",0xf7a43bc8,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SCISSOR_TEST","lime/graphics/opengl/GLES3Context.hx",700,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(700)
	int tmp = this1->SCISSOR_TEST;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(700)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SCISSOR_TEST,return )

int GLES3Context_Impl__obj::get_POLYGON_OFFSET_FILL( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_POLYGON_OFFSET_FILL",0x3c97d897,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_POLYGON_OFFSET_FILL","lime/graphics/opengl/GLES3Context.hx",701,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(701)
	int tmp = this1->POLYGON_OFFSET_FILL;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(701)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_POLYGON_OFFSET_FILL,return )

int GLES3Context_Impl__obj::get_SAMPLE_ALPHA_TO_COVERAGE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SAMPLE_ALPHA_TO_COVERAGE",0xdd398ba9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SAMPLE_ALPHA_TO_COVERAGE","lime/graphics/opengl/GLES3Context.hx",702,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(702)
	int tmp = this1->SAMPLE_ALPHA_TO_COVERAGE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(702)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SAMPLE_ALPHA_TO_COVERAGE,return )

int GLES3Context_Impl__obj::get_SAMPLE_COVERAGE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SAMPLE_COVERAGE",0x0e3768aa,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SAMPLE_COVERAGE","lime/graphics/opengl/GLES3Context.hx",703,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(703)
	int tmp = this1->SAMPLE_COVERAGE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(703)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SAMPLE_COVERAGE,return )

int GLES3Context_Impl__obj::get_NO_ERROR( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_NO_ERROR",0xb8416d7d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_NO_ERROR","lime/graphics/opengl/GLES3Context.hx",704,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(704)
	int tmp = this1->NO_ERROR;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(704)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_NO_ERROR,return )

int GLES3Context_Impl__obj::get_INVALID_ENUM( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_INVALID_ENUM",0xb1c2f1bc,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_INVALID_ENUM","lime/graphics/opengl/GLES3Context.hx",705,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(705)
	int tmp = this1->INVALID_ENUM;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(705)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_INVALID_ENUM,return )

int GLES3Context_Impl__obj::get_INVALID_VALUE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_INVALID_VALUE",0x9a01dc36,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_INVALID_VALUE","lime/graphics/opengl/GLES3Context.hx",706,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(706)
	int tmp = this1->INVALID_VALUE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(706)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_INVALID_VALUE,return )

int GLES3Context_Impl__obj::get_INVALID_OPERATION( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_INVALID_OPERATION",0x9718ef6c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_INVALID_OPERATION","lime/graphics/opengl/GLES3Context.hx",707,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(707)
	int tmp = this1->INVALID_OPERATION;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(707)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_INVALID_OPERATION,return )

int GLES3Context_Impl__obj::get_OUT_OF_MEMORY( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_OUT_OF_MEMORY",0xcb72e5a5,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_OUT_OF_MEMORY","lime/graphics/opengl/GLES3Context.hx",708,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(708)
	int tmp = this1->OUT_OF_MEMORY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(708)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_OUT_OF_MEMORY,return )

int GLES3Context_Impl__obj::get_CW( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_CW",0xf03b3207,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_CW","lime/graphics/opengl/GLES3Context.hx",709,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(709)
	int tmp = this1->CW;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(709)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_CW,return )

int GLES3Context_Impl__obj::get_CCW( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_CCW",0x43908304,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_CCW","lime/graphics/opengl/GLES3Context.hx",710,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(710)
	int tmp = this1->CCW;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(710)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_CCW,return )

int GLES3Context_Impl__obj::get_LINE_WIDTH( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_LINE_WIDTH",0x2ea1866e,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_LINE_WIDTH","lime/graphics/opengl/GLES3Context.hx",711,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(711)
	int tmp = this1->LINE_WIDTH;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(711)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_LINE_WIDTH,return )

int GLES3Context_Impl__obj::get_ALIASED_POINT_SIZE_RANGE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_ALIASED_POINT_SIZE_RANGE",0x77884491,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_ALIASED_POINT_SIZE_RANGE","lime/graphics/opengl/GLES3Context.hx",712,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(712)
	int tmp = this1->ALIASED_POINT_SIZE_RANGE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(712)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_ALIASED_POINT_SIZE_RANGE,return )

int GLES3Context_Impl__obj::get_ALIASED_LINE_WIDTH_RANGE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_ALIASED_LINE_WIDTH_RANGE",0x86b8707c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_ALIASED_LINE_WIDTH_RANGE","lime/graphics/opengl/GLES3Context.hx",713,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(713)
	int tmp = this1->ALIASED_LINE_WIDTH_RANGE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(713)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_ALIASED_LINE_WIDTH_RANGE,return )

int GLES3Context_Impl__obj::get_CULL_FACE_MODE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_CULL_FACE_MODE",0x8741e54b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_CULL_FACE_MODE","lime/graphics/opengl/GLES3Context.hx",714,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(714)
	int tmp = this1->CULL_FACE_MODE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(714)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_CULL_FACE_MODE,return )

int GLES3Context_Impl__obj::get_FRONT_FACE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FRONT_FACE",0xfa1cb9a6,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FRONT_FACE","lime/graphics/opengl/GLES3Context.hx",715,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(715)
	int tmp = this1->FRONT_FACE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(715)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FRONT_FACE,return )

int GLES3Context_Impl__obj::get_DEPTH_RANGE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DEPTH_RANGE",0x3976a04e,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DEPTH_RANGE","lime/graphics/opengl/GLES3Context.hx",716,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(716)
	int tmp = this1->DEPTH_RANGE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(716)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DEPTH_RANGE,return )

int GLES3Context_Impl__obj::get_DEPTH_WRITEMASK( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DEPTH_WRITEMASK",0xb367e85c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DEPTH_WRITEMASK","lime/graphics/opengl/GLES3Context.hx",717,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(717)
	int tmp = this1->DEPTH_WRITEMASK;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(717)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DEPTH_WRITEMASK,return )

int GLES3Context_Impl__obj::get_DEPTH_CLEAR_VALUE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DEPTH_CLEAR_VALUE",0x885d5530,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DEPTH_CLEAR_VALUE","lime/graphics/opengl/GLES3Context.hx",718,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(718)
	int tmp = this1->DEPTH_CLEAR_VALUE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(718)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DEPTH_CLEAR_VALUE,return )

int GLES3Context_Impl__obj::get_DEPTH_FUNC( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DEPTH_FUNC",0x29bf91b3,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DEPTH_FUNC","lime/graphics/opengl/GLES3Context.hx",719,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(719)
	int tmp = this1->DEPTH_FUNC;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(719)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DEPTH_FUNC,return )

int GLES3Context_Impl__obj::get_STENCIL_CLEAR_VALUE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STENCIL_CLEAR_VALUE",0x03e82ce9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STENCIL_CLEAR_VALUE","lime/graphics/opengl/GLES3Context.hx",720,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(720)
	int tmp = this1->STENCIL_CLEAR_VALUE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(720)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STENCIL_CLEAR_VALUE,return )

int GLES3Context_Impl__obj::get_STENCIL_FUNC( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STENCIL_FUNC",0x6a877cda,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STENCIL_FUNC","lime/graphics/opengl/GLES3Context.hx",721,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(721)
	int tmp = this1->STENCIL_FUNC;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(721)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STENCIL_FUNC,return )

int GLES3Context_Impl__obj::get_STENCIL_FAIL( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STENCIL_FAIL",0x6a784b74,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STENCIL_FAIL","lime/graphics/opengl/GLES3Context.hx",722,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(722)
	int tmp = this1->STENCIL_FAIL;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(722)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STENCIL_FAIL,return )

int GLES3Context_Impl__obj::get_STENCIL_PASS_DEPTH_FAIL( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STENCIL_PASS_DEPTH_FAIL",0x61639012,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STENCIL_PASS_DEPTH_FAIL","lime/graphics/opengl/GLES3Context.hx",723,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(723)
	int tmp = this1->STENCIL_PASS_DEPTH_FAIL;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(723)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STENCIL_PASS_DEPTH_FAIL,return )

int GLES3Context_Impl__obj::get_STENCIL_PASS_DEPTH_PASS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STENCIL_PASS_DEPTH_PASS",0x67ffbb05,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STENCIL_PASS_DEPTH_PASS","lime/graphics/opengl/GLES3Context.hx",724,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(724)
	int tmp = this1->STENCIL_PASS_DEPTH_PASS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(724)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STENCIL_PASS_DEPTH_PASS,return )

int GLES3Context_Impl__obj::get_STENCIL_REF( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STENCIL_REF",0xa6f8705d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STENCIL_REF","lime/graphics/opengl/GLES3Context.hx",725,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(725)
	int tmp = this1->STENCIL_REF;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(725)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STENCIL_REF,return )

int GLES3Context_Impl__obj::get_STENCIL_VALUE_MASK( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STENCIL_VALUE_MASK",0xd94465f0,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STENCIL_VALUE_MASK","lime/graphics/opengl/GLES3Context.hx",726,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(726)
	int tmp = this1->STENCIL_VALUE_MASK;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(726)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STENCIL_VALUE_MASK,return )

int GLES3Context_Impl__obj::get_STENCIL_WRITEMASK( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STENCIL_WRITEMASK",0xb6f72fd5,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STENCIL_WRITEMASK","lime/graphics/opengl/GLES3Context.hx",727,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(727)
	int tmp = this1->STENCIL_WRITEMASK;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(727)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STENCIL_WRITEMASK,return )

int GLES3Context_Impl__obj::get_STENCIL_BACK_FUNC( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STENCIL_BACK_FUNC",0xfdf2b646,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STENCIL_BACK_FUNC","lime/graphics/opengl/GLES3Context.hx",728,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(728)
	int tmp = this1->STENCIL_BACK_FUNC;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(728)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STENCIL_BACK_FUNC,return )

int GLES3Context_Impl__obj::get_STENCIL_BACK_FAIL( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STENCIL_BACK_FAIL",0xfde384e0,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STENCIL_BACK_FAIL","lime/graphics/opengl/GLES3Context.hx",729,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(729)
	int tmp = this1->STENCIL_BACK_FAIL;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(729)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STENCIL_BACK_FAIL,return )

int GLES3Context_Impl__obj::get_STENCIL_BACK_PASS_DEPTH_FAIL( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STENCIL_BACK_PASS_DEPTH_FAIL",0xdc033626,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STENCIL_BACK_PASS_DEPTH_FAIL","lime/graphics/opengl/GLES3Context.hx",730,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(730)
	int tmp = this1->STENCIL_BACK_PASS_DEPTH_FAIL;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(730)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STENCIL_BACK_PASS_DEPTH_FAIL,return )

int GLES3Context_Impl__obj::get_STENCIL_BACK_PASS_DEPTH_PASS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STENCIL_BACK_PASS_DEPTH_PASS",0xe29f6119,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STENCIL_BACK_PASS_DEPTH_PASS","lime/graphics/opengl/GLES3Context.hx",731,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(731)
	int tmp = this1->STENCIL_BACK_PASS_DEPTH_PASS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(731)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STENCIL_BACK_PASS_DEPTH_PASS,return )

int GLES3Context_Impl__obj::get_STENCIL_BACK_REF( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STENCIL_BACK_REF",0x3f2a4871,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STENCIL_BACK_REF","lime/graphics/opengl/GLES3Context.hx",732,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(732)
	int tmp = this1->STENCIL_BACK_REF;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(732)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STENCIL_BACK_REF,return )

int GLES3Context_Impl__obj::get_STENCIL_BACK_VALUE_MASK( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STENCIL_BACK_VALUE_MASK",0x216e785c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STENCIL_BACK_VALUE_MASK","lime/graphics/opengl/GLES3Context.hx",733,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(733)
	int tmp = this1->STENCIL_BACK_VALUE_MASK;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(733)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STENCIL_BACK_VALUE_MASK,return )

int GLES3Context_Impl__obj::get_STENCIL_BACK_WRITEMASK( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STENCIL_BACK_WRITEMASK",0x65c84ee9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STENCIL_BACK_WRITEMASK","lime/graphics/opengl/GLES3Context.hx",734,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(734)
	int tmp = this1->STENCIL_BACK_WRITEMASK;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(734)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STENCIL_BACK_WRITEMASK,return )

int GLES3Context_Impl__obj::get_VIEWPORT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_VIEWPORT",0x7eee93f9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_VIEWPORT","lime/graphics/opengl/GLES3Context.hx",735,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(735)
	int tmp = this1->VIEWPORT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(735)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_VIEWPORT,return )

int GLES3Context_Impl__obj::get_SCISSOR_BOX( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SCISSOR_BOX",0xbf9f4f35,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SCISSOR_BOX","lime/graphics/opengl/GLES3Context.hx",736,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(736)
	int tmp = this1->SCISSOR_BOX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(736)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SCISSOR_BOX,return )

int GLES3Context_Impl__obj::get_COLOR_CLEAR_VALUE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_COLOR_CLEAR_VALUE",0x657ee590,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_COLOR_CLEAR_VALUE","lime/graphics/opengl/GLES3Context.hx",737,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(737)
	int tmp = this1->COLOR_CLEAR_VALUE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(737)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_COLOR_CLEAR_VALUE,return )

int GLES3Context_Impl__obj::get_COLOR_WRITEMASK( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_COLOR_WRITEMASK",0x6222a0bc,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_COLOR_WRITEMASK","lime/graphics/opengl/GLES3Context.hx",738,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(738)
	int tmp = this1->COLOR_WRITEMASK;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(738)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_COLOR_WRITEMASK,return )

int GLES3Context_Impl__obj::get_UNPACK_ALIGNMENT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNPACK_ALIGNMENT",0x81a02d49,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNPACK_ALIGNMENT","lime/graphics/opengl/GLES3Context.hx",739,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(739)
	int tmp = this1->UNPACK_ALIGNMENT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(739)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNPACK_ALIGNMENT,return )

int GLES3Context_Impl__obj::get_PACK_ALIGNMENT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_PACK_ALIGNMENT",0x793ffe70,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_PACK_ALIGNMENT","lime/graphics/opengl/GLES3Context.hx",740,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(740)
	int tmp = this1->PACK_ALIGNMENT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(740)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_PACK_ALIGNMENT,return )

int GLES3Context_Impl__obj::get_MAX_TEXTURE_SIZE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_TEXTURE_SIZE",0x31cd0e73,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_TEXTURE_SIZE","lime/graphics/opengl/GLES3Context.hx",741,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(741)
	int tmp = this1->MAX_TEXTURE_SIZE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(741)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_TEXTURE_SIZE,return )

int GLES3Context_Impl__obj::get_MAX_VIEWPORT_DIMS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_VIEWPORT_DIMS",0x764b6bb6,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_VIEWPORT_DIMS","lime/graphics/opengl/GLES3Context.hx",742,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(742)
	int tmp = this1->MAX_VIEWPORT_DIMS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(742)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_VIEWPORT_DIMS,return )

int GLES3Context_Impl__obj::get_SUBPIXEL_BITS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SUBPIXEL_BITS",0xf3ef9fac,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SUBPIXEL_BITS","lime/graphics/opengl/GLES3Context.hx",743,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(743)
	int tmp = this1->SUBPIXEL_BITS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(743)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SUBPIXEL_BITS,return )

int GLES3Context_Impl__obj::get_RED_BITS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RED_BITS",0x1f62afa7,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RED_BITS","lime/graphics/opengl/GLES3Context.hx",744,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(744)
	int tmp = this1->RED_BITS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(744)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RED_BITS,return )

int GLES3Context_Impl__obj::get_GREEN_BITS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_GREEN_BITS",0x9f6aabb5,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_GREEN_BITS","lime/graphics/opengl/GLES3Context.hx",745,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(745)
	int tmp = this1->GREEN_BITS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(745)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_GREEN_BITS,return )

int GLES3Context_Impl__obj::get_BLUE_BITS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_BLUE_BITS",0xc3dd0f18,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_BLUE_BITS","lime/graphics/opengl/GLES3Context.hx",746,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(746)
	int tmp = this1->BLUE_BITS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(746)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_BLUE_BITS,return )

int GLES3Context_Impl__obj::get_ALPHA_BITS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_ALPHA_BITS",0xeb4b013a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_ALPHA_BITS","lime/graphics/opengl/GLES3Context.hx",747,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(747)
	int tmp = this1->ALPHA_BITS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(747)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_ALPHA_BITS,return )

int GLES3Context_Impl__obj::get_DEPTH_BITS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DEPTH_BITS",0x2711a175,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DEPTH_BITS","lime/graphics/opengl/GLES3Context.hx",748,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(748)
	int tmp = this1->DEPTH_BITS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(748)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DEPTH_BITS,return )

int GLES3Context_Impl__obj::get_STENCIL_BITS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STENCIL_BITS",0x67d98c9c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STENCIL_BITS","lime/graphics/opengl/GLES3Context.hx",749,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(749)
	int tmp = this1->STENCIL_BITS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(749)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STENCIL_BITS,return )

int GLES3Context_Impl__obj::get_POLYGON_OFFSET_UNITS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_POLYGON_OFFSET_UNITS",0x6e9430bb,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_POLYGON_OFFSET_UNITS","lime/graphics/opengl/GLES3Context.hx",750,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(750)
	int tmp = this1->POLYGON_OFFSET_UNITS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(750)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_POLYGON_OFFSET_UNITS,return )

int GLES3Context_Impl__obj::get_POLYGON_OFFSET_FACTOR( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_POLYGON_OFFSET_FACTOR",0xd38f33e3,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_POLYGON_OFFSET_FACTOR","lime/graphics/opengl/GLES3Context.hx",751,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(751)
	int tmp = this1->POLYGON_OFFSET_FACTOR;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(751)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_POLYGON_OFFSET_FACTOR,return )

int GLES3Context_Impl__obj::get_TEXTURE_BINDING_2D( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE_BINDING_2D",0xea7ef983,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE_BINDING_2D","lime/graphics/opengl/GLES3Context.hx",752,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(752)
	int tmp = this1->TEXTURE_BINDING_2D;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(752)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE_BINDING_2D,return )

int GLES3Context_Impl__obj::get_SAMPLE_BUFFERS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SAMPLE_BUFFERS",0xf22b3ed1,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SAMPLE_BUFFERS","lime/graphics/opengl/GLES3Context.hx",753,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(753)
	int tmp = this1->SAMPLE_BUFFERS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(753)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SAMPLE_BUFFERS,return )

int GLES3Context_Impl__obj::get_SAMPLES( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SAMPLES",0x56e234b6,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SAMPLES","lime/graphics/opengl/GLES3Context.hx",754,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(754)
	int tmp = this1->SAMPLES;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(754)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SAMPLES,return )

int GLES3Context_Impl__obj::get_SAMPLE_COVERAGE_VALUE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SAMPLE_COVERAGE_VALUE",0x128442bc,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SAMPLE_COVERAGE_VALUE","lime/graphics/opengl/GLES3Context.hx",755,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(755)
	int tmp = this1->SAMPLE_COVERAGE_VALUE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(755)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SAMPLE_COVERAGE_VALUE,return )

int GLES3Context_Impl__obj::get_SAMPLE_COVERAGE_INVERT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SAMPLE_COVERAGE_INVERT",0x7158054b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SAMPLE_COVERAGE_INVERT","lime/graphics/opengl/GLES3Context.hx",756,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(756)
	int tmp = this1->SAMPLE_COVERAGE_INVERT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(756)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SAMPLE_COVERAGE_INVERT,return )

int GLES3Context_Impl__obj::get_COMPRESSED_TEXTURE_FORMATS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_COMPRESSED_TEXTURE_FORMATS",0x48632bcd,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_COMPRESSED_TEXTURE_FORMATS","lime/graphics/opengl/GLES3Context.hx",757,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(757)
	int tmp = this1->COMPRESSED_TEXTURE_FORMATS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(757)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_COMPRESSED_TEXTURE_FORMATS,return )

int GLES3Context_Impl__obj::get_DONT_CARE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DONT_CARE",0xf23e848c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DONT_CARE","lime/graphics/opengl/GLES3Context.hx",758,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(758)
	int tmp = this1->DONT_CARE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(758)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DONT_CARE,return )

int GLES3Context_Impl__obj::get_FASTEST( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FASTEST",0xb1523ed7,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FASTEST","lime/graphics/opengl/GLES3Context.hx",759,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(759)
	int tmp = this1->FASTEST;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(759)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FASTEST,return )

int GLES3Context_Impl__obj::get_NICEST( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_NICEST",0xbd590a51,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_NICEST","lime/graphics/opengl/GLES3Context.hx",760,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(760)
	int tmp = this1->NICEST;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(760)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_NICEST,return )

int GLES3Context_Impl__obj::get_GENERATE_MIPMAP_HINT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_GENERATE_MIPMAP_HINT",0x4c581ba7,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_GENERATE_MIPMAP_HINT","lime/graphics/opengl/GLES3Context.hx",761,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(761)
	int tmp = this1->GENERATE_MIPMAP_HINT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(761)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_GENERATE_MIPMAP_HINT,return )

int GLES3Context_Impl__obj::get_BYTE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_BYTE",0xda49991b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_BYTE","lime/graphics/opengl/GLES3Context.hx",762,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(762)
	int tmp = this1->BYTE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(762)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_BYTE,return )

int GLES3Context_Impl__obj::get_UNSIGNED_BYTE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNSIGNED_BYTE",0xeb466d5f,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNSIGNED_BYTE","lime/graphics/opengl/GLES3Context.hx",763,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(763)
	int tmp = this1->UNSIGNED_BYTE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(763)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNSIGNED_BYTE,return )

int GLES3Context_Impl__obj::get_SHORT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SHORT",0xe4abdae9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SHORT","lime/graphics/opengl/GLES3Context.hx",764,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(764)
	int tmp = this1->SHORT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(764)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SHORT,return )

int GLES3Context_Impl__obj::get_UNSIGNED_SHORT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNSIGNED_SHORT",0xb0e8c225,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNSIGNED_SHORT","lime/graphics/opengl/GLES3Context.hx",765,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(765)
	int tmp = this1->UNSIGNED_SHORT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(765)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNSIGNED_SHORT,return )

int GLES3Context_Impl__obj::get_INT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_INT",0x43951a1c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_INT","lime/graphics/opengl/GLES3Context.hx",766,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(766)
	int tmp = this1->INT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(766)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_INT,return )

int GLES3Context_Impl__obj::get_UNSIGNED_INT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNSIGNED_INT",0xbb0c7a58,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNSIGNED_INT","lime/graphics/opengl/GLES3Context.hx",767,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(767)
	int tmp = this1->UNSIGNED_INT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(767)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNSIGNED_INT,return )

int GLES3Context_Impl__obj::get_FLOAT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FLOAT",0x6b1b1c09,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FLOAT","lime/graphics/opengl/GLES3Context.hx",768,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(768)
	int tmp = this1->FLOAT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(768)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FLOAT,return )

int GLES3Context_Impl__obj::get_DEPTH_COMPONENT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DEPTH_COMPONENT",0x5c8acfce,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DEPTH_COMPONENT","lime/graphics/opengl/GLES3Context.hx",769,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(769)
	int tmp = this1->DEPTH_COMPONENT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(769)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DEPTH_COMPONENT,return )

int GLES3Context_Impl__obj::get_ALPHA( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_ALPHA",0x8a1afdcb,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_ALPHA","lime/graphics/opengl/GLES3Context.hx",770,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(770)
	int tmp = this1->ALPHA;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(770)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_ALPHA,return )

int GLES3Context_Impl__obj::get_RGB( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGB",0x439be83a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGB","lime/graphics/opengl/GLES3Context.hx",771,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(771)
	int tmp = this1->RGB;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(771)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGB,return )

int GLES3Context_Impl__obj::get_RGBA( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGBA",0xe4cf4ac7,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGBA","lime/graphics/opengl/GLES3Context.hx",772,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(772)
	int tmp = this1->RGBA;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(772)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGBA,return )

int GLES3Context_Impl__obj::get_LUMINANCE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_LUMINANCE",0x865d90e5,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_LUMINANCE","lime/graphics/opengl/GLES3Context.hx",773,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(773)
	int tmp = this1->LUMINANCE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(773)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_LUMINANCE,return )

int GLES3Context_Impl__obj::get_LUMINANCE_ALPHA( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_LUMINANCE_ALPHA",0x0b08f124,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_LUMINANCE_ALPHA","lime/graphics/opengl/GLES3Context.hx",774,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(774)
	int tmp = this1->LUMINANCE_ALPHA;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(774)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_LUMINANCE_ALPHA,return )

int GLES3Context_Impl__obj::get_UNSIGNED_SHORT_4_4_4_4( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNSIGNED_SHORT_4_4_4_4",0x1f23e679,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNSIGNED_SHORT_4_4_4_4","lime/graphics/opengl/GLES3Context.hx",775,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(775)
	int tmp = this1->UNSIGNED_SHORT_4_4_4_4;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(775)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNSIGNED_SHORT_4_4_4_4,return )

int GLES3Context_Impl__obj::get_UNSIGNED_SHORT_5_5_5_1( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNSIGNED_SHORT_5_5_5_1",0xdc20b3f9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNSIGNED_SHORT_5_5_5_1","lime/graphics/opengl/GLES3Context.hx",776,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(776)
	int tmp = this1->UNSIGNED_SHORT_5_5_5_1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(776)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNSIGNED_SHORT_5_5_5_1,return )

int GLES3Context_Impl__obj::get_UNSIGNED_SHORT_5_6_5( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNSIGNED_SHORT_5_6_5",0x54990388,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNSIGNED_SHORT_5_6_5","lime/graphics/opengl/GLES3Context.hx",777,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(777)
	int tmp = this1->UNSIGNED_SHORT_5_6_5;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(777)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNSIGNED_SHORT_5_6_5,return )

int GLES3Context_Impl__obj::get_FRAGMENT_SHADER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FRAGMENT_SHADER",0x36a0d7c1,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FRAGMENT_SHADER","lime/graphics/opengl/GLES3Context.hx",778,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(778)
	int tmp = this1->FRAGMENT_SHADER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(778)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FRAGMENT_SHADER,return )

int GLES3Context_Impl__obj::get_VERTEX_SHADER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_VERTEX_SHADER",0x334e5d6d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_VERTEX_SHADER","lime/graphics/opengl/GLES3Context.hx",779,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(779)
	int tmp = this1->VERTEX_SHADER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(779)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_VERTEX_SHADER,return )

int GLES3Context_Impl__obj::get_MAX_VERTEX_ATTRIBS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_VERTEX_ATTRIBS",0x97fbd69c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_VERTEX_ATTRIBS","lime/graphics/opengl/GLES3Context.hx",780,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(780)
	int tmp = this1->MAX_VERTEX_ATTRIBS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(780)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_VERTEX_ATTRIBS,return )

int GLES3Context_Impl__obj::get_MAX_VERTEX_UNIFORM_VECTORS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_VERTEX_UNIFORM_VECTORS",0x8f968498,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_VERTEX_UNIFORM_VECTORS","lime/graphics/opengl/GLES3Context.hx",781,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(781)
	int tmp = this1->MAX_VERTEX_UNIFORM_VECTORS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(781)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_VERTEX_UNIFORM_VECTORS,return )

int GLES3Context_Impl__obj::get_MAX_VARYING_VECTORS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_VARYING_VECTORS",0xc85d5453,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_VARYING_VECTORS","lime/graphics/opengl/GLES3Context.hx",782,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(782)
	int tmp = this1->MAX_VARYING_VECTORS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(782)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_VARYING_VECTORS,return )

int GLES3Context_Impl__obj::get_MAX_COMBINED_TEXTURE_IMAGE_UNITS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_COMBINED_TEXTURE_IMAGE_UNITS",0x4bbe6a3b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_COMBINED_TEXTURE_IMAGE_UNITS","lime/graphics/opengl/GLES3Context.hx",783,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(783)
	int tmp = this1->MAX_COMBINED_TEXTURE_IMAGE_UNITS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(783)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_COMBINED_TEXTURE_IMAGE_UNITS,return )

int GLES3Context_Impl__obj::get_MAX_VERTEX_TEXTURE_IMAGE_UNITS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_VERTEX_TEXTURE_IMAGE_UNITS",0x8943ce9a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_VERTEX_TEXTURE_IMAGE_UNITS","lime/graphics/opengl/GLES3Context.hx",784,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(784)
	int tmp = this1->MAX_VERTEX_TEXTURE_IMAGE_UNITS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(784)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_VERTEX_TEXTURE_IMAGE_UNITS,return )

int GLES3Context_Impl__obj::get_MAX_TEXTURE_IMAGE_UNITS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_TEXTURE_IMAGE_UNITS",0xed0b3299,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_TEXTURE_IMAGE_UNITS","lime/graphics/opengl/GLES3Context.hx",785,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(785)
	int tmp = this1->MAX_TEXTURE_IMAGE_UNITS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(785)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_TEXTURE_IMAGE_UNITS,return )

int GLES3Context_Impl__obj::get_MAX_FRAGMENT_UNIFORM_VECTORS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_FRAGMENT_UNIFORM_VECTORS",0xb2ea5c84,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_FRAGMENT_UNIFORM_VECTORS","lime/graphics/opengl/GLES3Context.hx",786,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(786)
	int tmp = this1->MAX_FRAGMENT_UNIFORM_VECTORS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(786)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_FRAGMENT_UNIFORM_VECTORS,return )

int GLES3Context_Impl__obj::get_SHADER_TYPE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SHADER_TYPE",0xf17aeba1,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SHADER_TYPE","lime/graphics/opengl/GLES3Context.hx",787,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(787)
	int tmp = this1->SHADER_TYPE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(787)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SHADER_TYPE,return )

int GLES3Context_Impl__obj::get_DELETE_STATUS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DELETE_STATUS",0x0873d793,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DELETE_STATUS","lime/graphics/opengl/GLES3Context.hx",788,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(788)
	int tmp = this1->DELETE_STATUS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(788)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DELETE_STATUS,return )

int GLES3Context_Impl__obj::get_LINK_STATUS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_LINK_STATUS",0xafe21e64,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_LINK_STATUS","lime/graphics/opengl/GLES3Context.hx",789,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(789)
	int tmp = this1->LINK_STATUS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(789)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_LINK_STATUS,return )

int GLES3Context_Impl__obj::get_VALIDATE_STATUS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_VALIDATE_STATUS",0x132fd3c8,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_VALIDATE_STATUS","lime/graphics/opengl/GLES3Context.hx",790,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(790)
	int tmp = this1->VALIDATE_STATUS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(790)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_VALIDATE_STATUS,return )

int GLES3Context_Impl__obj::get_ATTACHED_SHADERS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_ATTACHED_SHADERS",0xabe8d506,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_ATTACHED_SHADERS","lime/graphics/opengl/GLES3Context.hx",791,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(791)
	int tmp = this1->ATTACHED_SHADERS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(791)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_ATTACHED_SHADERS,return )

int GLES3Context_Impl__obj::get_ACTIVE_UNIFORMS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_ACTIVE_UNIFORMS",0x79632e65,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_ACTIVE_UNIFORMS","lime/graphics/opengl/GLES3Context.hx",792,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(792)
	int tmp = this1->ACTIVE_UNIFORMS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(792)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_ACTIVE_UNIFORMS,return )

int GLES3Context_Impl__obj::get_ACTIVE_ATTRIBUTES( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_ACTIVE_ATTRIBUTES",0xb81823fd,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_ACTIVE_ATTRIBUTES","lime/graphics/opengl/GLES3Context.hx",793,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(793)
	int tmp = this1->ACTIVE_ATTRIBUTES;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(793)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_ACTIVE_ATTRIBUTES,return )

int GLES3Context_Impl__obj::get_SHADING_LANGUAGE_VERSION( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SHADING_LANGUAGE_VERSION",0x6cd31279,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SHADING_LANGUAGE_VERSION","lime/graphics/opengl/GLES3Context.hx",794,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(794)
	int tmp = this1->SHADING_LANGUAGE_VERSION;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(794)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SHADING_LANGUAGE_VERSION,return )

int GLES3Context_Impl__obj::get_CURRENT_PROGRAM( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_CURRENT_PROGRAM",0x8ce8d9cb,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_CURRENT_PROGRAM","lime/graphics/opengl/GLES3Context.hx",795,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(795)
	int tmp = this1->CURRENT_PROGRAM;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(795)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_CURRENT_PROGRAM,return )

int GLES3Context_Impl__obj::get_NEVER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_NEVER",0x01b494f9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_NEVER","lime/graphics/opengl/GLES3Context.hx",796,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(796)
	int tmp = this1->NEVER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(796)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_NEVER,return )

int GLES3Context_Impl__obj::get_LESS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_LESS",0xe0d68d6c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_LESS","lime/graphics/opengl/GLES3Context.hx",797,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(797)
	int tmp = this1->LESS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(797)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_LESS,return )

int GLES3Context_Impl__obj::get_EQUAL( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_EQUAL",0xdb072621,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_EQUAL","lime/graphics/opengl/GLES3Context.hx",798,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(798)
	int tmp = this1->EQUAL;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(798)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_EQUAL,return )

int GLES3Context_Impl__obj::get_LEQUAL( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_LEQUAL",0xac55109b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_LEQUAL","lime/graphics/opengl/GLES3Context.hx",799,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(799)
	int tmp = this1->LEQUAL;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(799)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_LEQUAL,return )

int GLES3Context_Impl__obj::get_GREATER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_GREATER",0x8ad900a7,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_GREATER","lime/graphics/opengl/GLES3Context.hx",800,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(800)
	int tmp = this1->GREATER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(800)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_GREATER,return )

int GLES3Context_Impl__obj::get_NOTEQUAL( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_NOTEQUAL",0x51ad7954,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_NOTEQUAL","lime/graphics/opengl/GLES3Context.hx",801,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(801)
	int tmp = this1->NOTEQUAL;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(801)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_NOTEQUAL,return )

int GLES3Context_Impl__obj::get_GEQUAL( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_GEQUAL",0xac8c42c0,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_GEQUAL","lime/graphics/opengl/GLES3Context.hx",802,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(802)
	int tmp = this1->GEQUAL;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(802)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_GEQUAL,return )

int GLES3Context_Impl__obj::get_ALWAYS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_ALWAYS",0x521e57a2,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_ALWAYS","lime/graphics/opengl/GLES3Context.hx",803,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(803)
	int tmp = this1->ALWAYS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(803)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_ALWAYS,return )

int GLES3Context_Impl__obj::get_KEEP( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_KEEP",0xe02d4a98,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_KEEP","lime/graphics/opengl/GLES3Context.hx",804,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(804)
	int tmp = this1->KEEP;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(804)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_KEEP,return )

int GLES3Context_Impl__obj::get_REPLACE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_REPLACE",0x7e40b7e1,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_REPLACE","lime/graphics/opengl/GLES3Context.hx",805,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(805)
	int tmp = this1->REPLACE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(805)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_REPLACE,return )

int GLES3Context_Impl__obj::get_INCR( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_INCR",0xdee1afe7,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_INCR","lime/graphics/opengl/GLES3Context.hx",806,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(806)
	int tmp = this1->INCR;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(806)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_INCR,return )

int GLES3Context_Impl__obj::get_DECR( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DECR",0xdb8cca83,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DECR","lime/graphics/opengl/GLES3Context.hx",807,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(807)
	int tmp = this1->DECR;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(807)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DECR,return )

int GLES3Context_Impl__obj::get_INVERT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_INVERT",0xab202fe9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_INVERT","lime/graphics/opengl/GLES3Context.hx",808,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(808)
	int tmp = this1->INVERT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(808)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_INVERT,return )

int GLES3Context_Impl__obj::get_INCR_WRAP( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_INCR_WRAP",0x4ee56862,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_INCR_WRAP","lime/graphics/opengl/GLES3Context.hx",809,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(809)
	int tmp = this1->INCR_WRAP;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(809)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_INCR_WRAP,return )

int GLES3Context_Impl__obj::get_DECR_WRAP( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DECR_WRAP",0x2d685846,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DECR_WRAP","lime/graphics/opengl/GLES3Context.hx",810,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(810)
	int tmp = this1->DECR_WRAP;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(810)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DECR_WRAP,return )

int GLES3Context_Impl__obj::get_VENDOR( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_VENDOR",0xa9de2e5b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_VENDOR","lime/graphics/opengl/GLES3Context.hx",811,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(811)
	int tmp = this1->VENDOR;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(811)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_VENDOR,return )

int GLES3Context_Impl__obj::get_RENDERER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RENDERER",0x95250cd6,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RENDERER","lime/graphics/opengl/GLES3Context.hx",812,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(812)
	int tmp = this1->RENDERER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(812)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RENDERER,return )

int GLES3Context_Impl__obj::get_VERSION( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_VERSION",0x500a56c5,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_VERSION","lime/graphics/opengl/GLES3Context.hx",813,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(813)
	int tmp = this1->VERSION;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(813)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_VERSION,return )

int GLES3Context_Impl__obj::get_NEAREST( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_NEAREST",0x38e2880b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_NEAREST","lime/graphics/opengl/GLES3Context.hx",814,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(814)
	int tmp = this1->NEAREST;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(814)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_NEAREST,return )

int GLES3Context_Impl__obj::get_LINEAR( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_LINEAR",0xf7e79ab8,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_LINEAR","lime/graphics/opengl/GLES3Context.hx",815,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(815)
	int tmp = this1->LINEAR;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(815)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_LINEAR,return )

int GLES3Context_Impl__obj::get_NEAREST_MIPMAP_NEAREST( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_NEAREST_MIPMAP_NEAREST",0x22166c3b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_NEAREST_MIPMAP_NEAREST","lime/graphics/opengl/GLES3Context.hx",816,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(816)
	int tmp = this1->NEAREST_MIPMAP_NEAREST;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(816)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_NEAREST_MIPMAP_NEAREST,return )

int GLES3Context_Impl__obj::get_LINEAR_MIPMAP_NEAREST( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_LINEAR_MIPMAP_NEAREST",0x0f21642e,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_LINEAR_MIPMAP_NEAREST","lime/graphics/opengl/GLES3Context.hx",817,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(817)
	int tmp = this1->LINEAR_MIPMAP_NEAREST;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(817)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_LINEAR_MIPMAP_NEAREST,return )

int GLES3Context_Impl__obj::get_NEAREST_MIPMAP_LINEAR( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_NEAREST_MIPMAP_LINEAR",0xe56f4c88,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_NEAREST_MIPMAP_LINEAR","lime/graphics/opengl/GLES3Context.hx",818,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(818)
	int tmp = this1->NEAREST_MIPMAP_LINEAR;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(818)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_NEAREST_MIPMAP_LINEAR,return )

int GLES3Context_Impl__obj::get_LINEAR_MIPMAP_LINEAR( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_LINEAR_MIPMAP_LINEAR",0x627ad3f5,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_LINEAR_MIPMAP_LINEAR","lime/graphics/opengl/GLES3Context.hx",819,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(819)
	int tmp = this1->LINEAR_MIPMAP_LINEAR;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(819)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_LINEAR_MIPMAP_LINEAR,return )

int GLES3Context_Impl__obj::get_TEXTURE_MAG_FILTER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE_MAG_FILTER",0x57bc0cdb,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE_MAG_FILTER","lime/graphics/opengl/GLES3Context.hx",820,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(820)
	int tmp = this1->TEXTURE_MAG_FILTER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(820)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE_MAG_FILTER,return )

int GLES3Context_Impl__obj::get_TEXTURE_MIN_FILTER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE_MIN_FILTER",0x7fa873bc,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE_MIN_FILTER","lime/graphics/opengl/GLES3Context.hx",821,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(821)
	int tmp = this1->TEXTURE_MIN_FILTER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(821)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE_MIN_FILTER,return )

int GLES3Context_Impl__obj::get_TEXTURE_WRAP_S( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE_WRAP_S",0xb47d5575,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE_WRAP_S","lime/graphics/opengl/GLES3Context.hx",822,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(822)
	int tmp = this1->TEXTURE_WRAP_S;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(822)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE_WRAP_S,return )

int GLES3Context_Impl__obj::get_TEXTURE_WRAP_T( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE_WRAP_T",0xb47d5576,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE_WRAP_T","lime/graphics/opengl/GLES3Context.hx",823,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(823)
	int tmp = this1->TEXTURE_WRAP_T;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(823)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE_WRAP_T,return )

int GLES3Context_Impl__obj::get_TEXTURE_2D( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE_2D",0xadc70e69,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE_2D","lime/graphics/opengl/GLES3Context.hx",824,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(824)
	int tmp = this1->TEXTURE_2D;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(824)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE_2D,return )

int GLES3Context_Impl__obj::get_TEXTURE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE",0x71f93888,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE","lime/graphics/opengl/GLES3Context.hx",825,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(825)
	int tmp = this1->TEXTURE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(825)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE,return )

int GLES3Context_Impl__obj::get_TEXTURE_CUBE_MAP( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE_CUBE_MAP",0xe4537cc9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE_CUBE_MAP","lime/graphics/opengl/GLES3Context.hx",826,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(826)
	int tmp = this1->TEXTURE_CUBE_MAP;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(826)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE_CUBE_MAP,return )

int GLES3Context_Impl__obj::get_TEXTURE_BINDING_CUBE_MAP( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE_BINDING_CUBE_MAP",0x717bb763,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE_BINDING_CUBE_MAP","lime/graphics/opengl/GLES3Context.hx",827,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(827)
	int tmp = this1->TEXTURE_BINDING_CUBE_MAP;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(827)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE_BINDING_CUBE_MAP,return )

int GLES3Context_Impl__obj::get_TEXTURE_CUBE_MAP_POSITIVE_X( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE_CUBE_MAP_POSITIVE_X",0xbf834d08,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE_CUBE_MAP_POSITIVE_X","lime/graphics/opengl/GLES3Context.hx",828,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(828)
	int tmp = this1->TEXTURE_CUBE_MAP_POSITIVE_X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(828)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE_CUBE_MAP_POSITIVE_X,return )

int GLES3Context_Impl__obj::get_TEXTURE_CUBE_MAP_NEGATIVE_X( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE_CUBE_MAP_NEGATIVE_X",0x067733c4,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE_CUBE_MAP_NEGATIVE_X","lime/graphics/opengl/GLES3Context.hx",829,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(829)
	int tmp = this1->TEXTURE_CUBE_MAP_NEGATIVE_X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(829)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE_CUBE_MAP_NEGATIVE_X,return )

int GLES3Context_Impl__obj::get_TEXTURE_CUBE_MAP_POSITIVE_Y( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE_CUBE_MAP_POSITIVE_Y",0xbf834d09,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE_CUBE_MAP_POSITIVE_Y","lime/graphics/opengl/GLES3Context.hx",830,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(830)
	int tmp = this1->TEXTURE_CUBE_MAP_POSITIVE_Y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(830)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE_CUBE_MAP_POSITIVE_Y,return )

int GLES3Context_Impl__obj::get_TEXTURE_CUBE_MAP_NEGATIVE_Y( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE_CUBE_MAP_NEGATIVE_Y",0x067733c5,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE_CUBE_MAP_NEGATIVE_Y","lime/graphics/opengl/GLES3Context.hx",831,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(831)
	int tmp = this1->TEXTURE_CUBE_MAP_NEGATIVE_Y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(831)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE_CUBE_MAP_NEGATIVE_Y,return )

int GLES3Context_Impl__obj::get_TEXTURE_CUBE_MAP_POSITIVE_Z( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE_CUBE_MAP_POSITIVE_Z",0xbf834d0a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE_CUBE_MAP_POSITIVE_Z","lime/graphics/opengl/GLES3Context.hx",832,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(832)
	int tmp = this1->TEXTURE_CUBE_MAP_POSITIVE_Z;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(832)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE_CUBE_MAP_POSITIVE_Z,return )

int GLES3Context_Impl__obj::get_TEXTURE_CUBE_MAP_NEGATIVE_Z( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE_CUBE_MAP_NEGATIVE_Z",0x067733c6,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE_CUBE_MAP_NEGATIVE_Z","lime/graphics/opengl/GLES3Context.hx",833,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(833)
	int tmp = this1->TEXTURE_CUBE_MAP_NEGATIVE_Z;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(833)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE_CUBE_MAP_NEGATIVE_Z,return )

int GLES3Context_Impl__obj::get_MAX_CUBE_MAP_TEXTURE_SIZE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_CUBE_MAP_TEXTURE_SIZE",0x08254c84,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_CUBE_MAP_TEXTURE_SIZE","lime/graphics/opengl/GLES3Context.hx",834,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(834)
	int tmp = this1->MAX_CUBE_MAP_TEXTURE_SIZE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(834)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_CUBE_MAP_TEXTURE_SIZE,return )

int GLES3Context_Impl__obj::get_TEXTURE0( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE0",0x48183ea8,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE0","lime/graphics/opengl/GLES3Context.hx",835,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(835)
	int tmp = this1->TEXTURE0;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(835)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE0,return )

int GLES3Context_Impl__obj::get_TEXTURE1( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE1",0x48183ea9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE1","lime/graphics/opengl/GLES3Context.hx",836,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(836)
	int tmp = this1->TEXTURE1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(836)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE1,return )

int GLES3Context_Impl__obj::get_TEXTURE2( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE2",0x48183eaa,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE2","lime/graphics/opengl/GLES3Context.hx",837,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(837)
	int tmp = this1->TEXTURE2;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(837)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE2,return )

int GLES3Context_Impl__obj::get_TEXTURE3( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE3",0x48183eab,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE3","lime/graphics/opengl/GLES3Context.hx",838,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(838)
	int tmp = this1->TEXTURE3;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(838)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE3,return )

int GLES3Context_Impl__obj::get_TEXTURE4( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE4",0x48183eac,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE4","lime/graphics/opengl/GLES3Context.hx",839,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(839)
	int tmp = this1->TEXTURE4;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(839)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE4,return )

int GLES3Context_Impl__obj::get_TEXTURE5( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE5",0x48183ead,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE5","lime/graphics/opengl/GLES3Context.hx",840,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(840)
	int tmp = this1->TEXTURE5;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(840)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE5,return )

int GLES3Context_Impl__obj::get_TEXTURE6( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE6",0x48183eae,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE6","lime/graphics/opengl/GLES3Context.hx",841,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(841)
	int tmp = this1->TEXTURE6;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(841)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE6,return )

int GLES3Context_Impl__obj::get_TEXTURE7( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE7",0x48183eaf,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE7","lime/graphics/opengl/GLES3Context.hx",842,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(842)
	int tmp = this1->TEXTURE7;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(842)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE7,return )

int GLES3Context_Impl__obj::get_TEXTURE8( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE8",0x48183eb0,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE8","lime/graphics/opengl/GLES3Context.hx",843,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(843)
	int tmp = this1->TEXTURE8;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(843)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE8,return )

int GLES3Context_Impl__obj::get_TEXTURE9( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE9",0x48183eb1,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE9","lime/graphics/opengl/GLES3Context.hx",844,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(844)
	int tmp = this1->TEXTURE9;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(844)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE9,return )

int GLES3Context_Impl__obj::get_TEXTURE10( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE10",0xcd1e9567,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE10","lime/graphics/opengl/GLES3Context.hx",845,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(845)
	int tmp = this1->TEXTURE10;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(845)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE10,return )

int GLES3Context_Impl__obj::get_TEXTURE11( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE11",0xcd1e9568,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE11","lime/graphics/opengl/GLES3Context.hx",846,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(846)
	int tmp = this1->TEXTURE11;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(846)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE11,return )

int GLES3Context_Impl__obj::get_TEXTURE12( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE12",0xcd1e9569,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE12","lime/graphics/opengl/GLES3Context.hx",847,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(847)
	int tmp = this1->TEXTURE12;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(847)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE12,return )

int GLES3Context_Impl__obj::get_TEXTURE13( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE13",0xcd1e956a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE13","lime/graphics/opengl/GLES3Context.hx",848,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(848)
	int tmp = this1->TEXTURE13;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(848)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE13,return )

int GLES3Context_Impl__obj::get_TEXTURE14( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE14",0xcd1e956b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE14","lime/graphics/opengl/GLES3Context.hx",849,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(849)
	int tmp = this1->TEXTURE14;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(849)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE14,return )

int GLES3Context_Impl__obj::get_TEXTURE15( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE15",0xcd1e956c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE15","lime/graphics/opengl/GLES3Context.hx",850,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(850)
	int tmp = this1->TEXTURE15;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(850)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE15,return )

int GLES3Context_Impl__obj::get_TEXTURE16( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE16",0xcd1e956d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE16","lime/graphics/opengl/GLES3Context.hx",851,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(851)
	int tmp = this1->TEXTURE16;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(851)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE16,return )

int GLES3Context_Impl__obj::get_TEXTURE17( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE17",0xcd1e956e,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE17","lime/graphics/opengl/GLES3Context.hx",852,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(852)
	int tmp = this1->TEXTURE17;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(852)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE17,return )

int GLES3Context_Impl__obj::get_TEXTURE18( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE18",0xcd1e956f,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE18","lime/graphics/opengl/GLES3Context.hx",853,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(853)
	int tmp = this1->TEXTURE18;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(853)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE18,return )

int GLES3Context_Impl__obj::get_TEXTURE19( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE19",0xcd1e9570,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE19","lime/graphics/opengl/GLES3Context.hx",854,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(854)
	int tmp = this1->TEXTURE19;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(854)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE19,return )

int GLES3Context_Impl__obj::get_TEXTURE20( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE20",0xcd1e9646,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE20","lime/graphics/opengl/GLES3Context.hx",855,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(855)
	int tmp = this1->TEXTURE20;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(855)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE20,return )

int GLES3Context_Impl__obj::get_TEXTURE21( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE21",0xcd1e9647,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE21","lime/graphics/opengl/GLES3Context.hx",856,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(856)
	int tmp = this1->TEXTURE21;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(856)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE21,return )

int GLES3Context_Impl__obj::get_TEXTURE22( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE22",0xcd1e9648,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE22","lime/graphics/opengl/GLES3Context.hx",857,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(857)
	int tmp = this1->TEXTURE22;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(857)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE22,return )

int GLES3Context_Impl__obj::get_TEXTURE23( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE23",0xcd1e9649,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE23","lime/graphics/opengl/GLES3Context.hx",858,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(858)
	int tmp = this1->TEXTURE23;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(858)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE23,return )

int GLES3Context_Impl__obj::get_TEXTURE24( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE24",0xcd1e964a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE24","lime/graphics/opengl/GLES3Context.hx",859,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(859)
	int tmp = this1->TEXTURE24;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(859)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE24,return )

int GLES3Context_Impl__obj::get_TEXTURE25( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE25",0xcd1e964b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE25","lime/graphics/opengl/GLES3Context.hx",860,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(860)
	int tmp = this1->TEXTURE25;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(860)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE25,return )

int GLES3Context_Impl__obj::get_TEXTURE26( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE26",0xcd1e964c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE26","lime/graphics/opengl/GLES3Context.hx",861,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(861)
	int tmp = this1->TEXTURE26;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(861)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE26,return )

int GLES3Context_Impl__obj::get_TEXTURE27( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE27",0xcd1e964d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE27","lime/graphics/opengl/GLES3Context.hx",862,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(862)
	int tmp = this1->TEXTURE27;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(862)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE27,return )

int GLES3Context_Impl__obj::get_TEXTURE28( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE28",0xcd1e964e,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE28","lime/graphics/opengl/GLES3Context.hx",863,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(863)
	int tmp = this1->TEXTURE28;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(863)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE28,return )

int GLES3Context_Impl__obj::get_TEXTURE29( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE29",0xcd1e964f,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE29","lime/graphics/opengl/GLES3Context.hx",864,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(864)
	int tmp = this1->TEXTURE29;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(864)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE29,return )

int GLES3Context_Impl__obj::get_TEXTURE30( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE30",0xcd1e9725,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE30","lime/graphics/opengl/GLES3Context.hx",865,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(865)
	int tmp = this1->TEXTURE30;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(865)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE30,return )

int GLES3Context_Impl__obj::get_TEXTURE31( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE31",0xcd1e9726,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE31","lime/graphics/opengl/GLES3Context.hx",866,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(866)
	int tmp = this1->TEXTURE31;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(866)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE31,return )

int GLES3Context_Impl__obj::get_ACTIVE_TEXTURE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_ACTIVE_TEXTURE",0x83dc41d5,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_ACTIVE_TEXTURE","lime/graphics/opengl/GLES3Context.hx",867,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(867)
	int tmp = this1->ACTIVE_TEXTURE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(867)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_ACTIVE_TEXTURE,return )

int GLES3Context_Impl__obj::get_REPEAT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_REPEAT",0x11c3e02e,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_REPEAT","lime/graphics/opengl/GLES3Context.hx",868,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(868)
	int tmp = this1->REPEAT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(868)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_REPEAT,return )

int GLES3Context_Impl__obj::get_CLAMP_TO_EDGE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_CLAMP_TO_EDGE",0x8035efaa,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_CLAMP_TO_EDGE","lime/graphics/opengl/GLES3Context.hx",869,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(869)
	int tmp = this1->CLAMP_TO_EDGE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(869)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_CLAMP_TO_EDGE,return )

int GLES3Context_Impl__obj::get_MIRRORED_REPEAT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MIRRORED_REPEAT",0x97a94529,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MIRRORED_REPEAT","lime/graphics/opengl/GLES3Context.hx",870,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(870)
	int tmp = this1->MIRRORED_REPEAT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(870)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MIRRORED_REPEAT,return )

int GLES3Context_Impl__obj::get_FLOAT_VEC2( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FLOAT_VEC2",0xf673aeb4,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FLOAT_VEC2","lime/graphics/opengl/GLES3Context.hx",871,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(871)
	int tmp = this1->FLOAT_VEC2;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(871)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FLOAT_VEC2,return )

int GLES3Context_Impl__obj::get_FLOAT_VEC3( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FLOAT_VEC3",0xf673aeb5,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FLOAT_VEC3","lime/graphics/opengl/GLES3Context.hx",872,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(872)
	int tmp = this1->FLOAT_VEC3;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(872)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FLOAT_VEC3,return )

int GLES3Context_Impl__obj::get_FLOAT_VEC4( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FLOAT_VEC4",0xf673aeb6,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FLOAT_VEC4","lime/graphics/opengl/GLES3Context.hx",873,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(873)
	int tmp = this1->FLOAT_VEC4;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(873)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FLOAT_VEC4,return )

int GLES3Context_Impl__obj::get_INT_VEC2( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_INT_VEC2",0x05c8cbc1,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_INT_VEC2","lime/graphics/opengl/GLES3Context.hx",874,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(874)
	int tmp = this1->INT_VEC2;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(874)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_INT_VEC2,return )

int GLES3Context_Impl__obj::get_INT_VEC3( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_INT_VEC3",0x05c8cbc2,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_INT_VEC3","lime/graphics/opengl/GLES3Context.hx",875,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(875)
	int tmp = this1->INT_VEC3;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(875)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_INT_VEC3,return )

int GLES3Context_Impl__obj::get_INT_VEC4( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_INT_VEC4",0x05c8cbc3,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_INT_VEC4","lime/graphics/opengl/GLES3Context.hx",876,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(876)
	int tmp = this1->INT_VEC4;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(876)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_INT_VEC4,return )

int GLES3Context_Impl__obj::get_BOOL( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_BOOL",0xda41fe3d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_BOOL","lime/graphics/opengl/GLES3Context.hx",877,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(877)
	int tmp = this1->BOOL;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(877)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_BOOL,return )

int GLES3Context_Impl__obj::get_BOOL_VEC2( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_BOOL_VEC2",0x4fa85000,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_BOOL_VEC2","lime/graphics/opengl/GLES3Context.hx",878,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(878)
	int tmp = this1->BOOL_VEC2;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(878)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_BOOL_VEC2,return )

int GLES3Context_Impl__obj::get_BOOL_VEC3( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_BOOL_VEC3",0x4fa85001,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_BOOL_VEC3","lime/graphics/opengl/GLES3Context.hx",879,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(879)
	int tmp = this1->BOOL_VEC3;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(879)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_BOOL_VEC3,return )

int GLES3Context_Impl__obj::get_BOOL_VEC4( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_BOOL_VEC4",0x4fa85002,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_BOOL_VEC4","lime/graphics/opengl/GLES3Context.hx",880,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(880)
	int tmp = this1->BOOL_VEC4;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(880)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_BOOL_VEC4,return )

int GLES3Context_Impl__obj::get_FLOAT_MAT2( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FLOAT_MAT2",0xf07dc8e8,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FLOAT_MAT2","lime/graphics/opengl/GLES3Context.hx",881,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(881)
	int tmp = this1->FLOAT_MAT2;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(881)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FLOAT_MAT2,return )

int GLES3Context_Impl__obj::get_FLOAT_MAT3( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FLOAT_MAT3",0xf07dc8e9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FLOAT_MAT3","lime/graphics/opengl/GLES3Context.hx",882,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(882)
	int tmp = this1->FLOAT_MAT3;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(882)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FLOAT_MAT3,return )

int GLES3Context_Impl__obj::get_FLOAT_MAT4( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FLOAT_MAT4",0xf07dc8ea,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FLOAT_MAT4","lime/graphics/opengl/GLES3Context.hx",883,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(883)
	int tmp = this1->FLOAT_MAT4;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(883)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FLOAT_MAT4,return )

int GLES3Context_Impl__obj::get_SAMPLER_2D( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SAMPLER_2D",0x79622c5c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SAMPLER_2D","lime/graphics/opengl/GLES3Context.hx",884,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(884)
	int tmp = this1->SAMPLER_2D;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(884)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SAMPLER_2D,return )

int GLES3Context_Impl__obj::get_SAMPLER_CUBE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SAMPLER_CUBE",0x42d4bbff,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SAMPLER_CUBE","lime/graphics/opengl/GLES3Context.hx",885,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(885)
	int tmp = this1->SAMPLER_CUBE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(885)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SAMPLER_CUBE,return )

int GLES3Context_Impl__obj::get_VERTEX_ATTRIB_ARRAY_ENABLED( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_VERTEX_ATTRIB_ARRAY_ENABLED",0x009ec9ae,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_VERTEX_ATTRIB_ARRAY_ENABLED","lime/graphics/opengl/GLES3Context.hx",886,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(886)
	int tmp = this1->VERTEX_ATTRIB_ARRAY_ENABLED;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(886)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_VERTEX_ATTRIB_ARRAY_ENABLED,return )

int GLES3Context_Impl__obj::get_VERTEX_ATTRIB_ARRAY_SIZE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_VERTEX_ATTRIB_ARRAY_SIZE",0x04e05554,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_VERTEX_ATTRIB_ARRAY_SIZE","lime/graphics/opengl/GLES3Context.hx",887,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(887)
	int tmp = this1->VERTEX_ATTRIB_ARRAY_SIZE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(887)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_VERTEX_ATTRIB_ARRAY_SIZE,return )

int GLES3Context_Impl__obj::get_VERTEX_ATTRIB_ARRAY_STRIDE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_VERTEX_ATTRIB_ARRAY_STRIDE",0x8dc1436c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_VERTEX_ATTRIB_ARRAY_STRIDE","lime/graphics/opengl/GLES3Context.hx",888,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(888)
	int tmp = this1->VERTEX_ATTRIB_ARRAY_STRIDE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(888)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_VERTEX_ATTRIB_ARRAY_STRIDE,return )

int GLES3Context_Impl__obj::get_VERTEX_ATTRIB_ARRAY_TYPE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_VERTEX_ATTRIB_ARRAY_TYPE",0x0595a74d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_VERTEX_ATTRIB_ARRAY_TYPE","lime/graphics/opengl/GLES3Context.hx",889,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(889)
	int tmp = this1->VERTEX_ATTRIB_ARRAY_TYPE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(889)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_VERTEX_ATTRIB_ARRAY_TYPE,return )

int GLES3Context_Impl__obj::get_VERTEX_ATTRIB_ARRAY_NORMALIZED( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_VERTEX_ATTRIB_ARRAY_NORMALIZED",0xd5d0f50a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_VERTEX_ATTRIB_ARRAY_NORMALIZED","lime/graphics/opengl/GLES3Context.hx",890,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(890)
	int tmp = this1->VERTEX_ATTRIB_ARRAY_NORMALIZED;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(890)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_VERTEX_ATTRIB_ARRAY_NORMALIZED,return )

int GLES3Context_Impl__obj::get_VERTEX_ATTRIB_ARRAY_POINTER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_VERTEX_ATTRIB_ARRAY_POINTER",0xd38f85ea,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_VERTEX_ATTRIB_ARRAY_POINTER","lime/graphics/opengl/GLES3Context.hx",891,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(891)
	int tmp = this1->VERTEX_ATTRIB_ARRAY_POINTER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(891)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_VERTEX_ATTRIB_ARRAY_POINTER,return )

int GLES3Context_Impl__obj::get_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING",0x5304a3f9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING","lime/graphics/opengl/GLES3Context.hx",892,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(892)
	int tmp = this1->VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(892)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING,return )

int GLES3Context_Impl__obj::get_VERTEX_PROGRAM_POINT_SIZE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_VERTEX_PROGRAM_POINT_SIZE",0x9fbee9f3,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_VERTEX_PROGRAM_POINT_SIZE","lime/graphics/opengl/GLES3Context.hx",893,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(893)
	int tmp = this1->VERTEX_PROGRAM_POINT_SIZE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(893)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_VERTEX_PROGRAM_POINT_SIZE,return )

int GLES3Context_Impl__obj::get_POINT_SPRITE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_POINT_SPRITE",0xb2af1087,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_POINT_SPRITE","lime/graphics/opengl/GLES3Context.hx",894,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(894)
	int tmp = this1->POINT_SPRITE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(894)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_POINT_SPRITE,return )

int GLES3Context_Impl__obj::get_COMPILE_STATUS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_COMPILE_STATUS",0x4208f3b1,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_COMPILE_STATUS","lime/graphics/opengl/GLES3Context.hx",895,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(895)
	int tmp = this1->COMPILE_STATUS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(895)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_COMPILE_STATUS,return )

int GLES3Context_Impl__obj::get_LOW_FLOAT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_LOW_FLOAT",0x06f0ed3e,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_LOW_FLOAT","lime/graphics/opengl/GLES3Context.hx",896,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(896)
	int tmp = this1->LOW_FLOAT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(896)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_LOW_FLOAT,return )

int GLES3Context_Impl__obj::get_MEDIUM_FLOAT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MEDIUM_FLOAT",0x57990805,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MEDIUM_FLOAT","lime/graphics/opengl/GLES3Context.hx",897,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(897)
	int tmp = this1->MEDIUM_FLOAT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(897)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MEDIUM_FLOAT,return )

int GLES3Context_Impl__obj::get_HIGH_FLOAT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_HIGH_FLOAT",0x520afbf2,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_HIGH_FLOAT","lime/graphics/opengl/GLES3Context.hx",898,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(898)
	int tmp = this1->HIGH_FLOAT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(898)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_HIGH_FLOAT,return )

int GLES3Context_Impl__obj::get_LOW_INT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_LOW_INT",0x98b4c411,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_LOW_INT","lime/graphics/opengl/GLES3Context.hx",899,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(899)
	int tmp = this1->LOW_INT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(899)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_LOW_INT,return )

int GLES3Context_Impl__obj::get_MEDIUM_INT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MEDIUM_INT",0x5a7ecf18,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MEDIUM_INT","lime/graphics/opengl/GLES3Context.hx",900,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(900)
	int tmp = this1->MEDIUM_INT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(900)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MEDIUM_INT,return )

int GLES3Context_Impl__obj::get_HIGH_INT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_HIGH_INT",0x91c5fdc5,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_HIGH_INT","lime/graphics/opengl/GLES3Context.hx",901,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(901)
	int tmp = this1->HIGH_INT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(901)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_HIGH_INT,return )

int GLES3Context_Impl__obj::get_FRAMEBUFFER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FRAMEBUFFER",0xbad7271a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FRAMEBUFFER","lime/graphics/opengl/GLES3Context.hx",902,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(902)
	int tmp = this1->FRAMEBUFFER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(902)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FRAMEBUFFER,return )

int GLES3Context_Impl__obj::get_RENDERBUFFER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RENDERBUFFER",0x47f721e9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RENDERBUFFER","lime/graphics/opengl/GLES3Context.hx",903,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(903)
	int tmp = this1->RENDERBUFFER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(903)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RENDERBUFFER,return )

int GLES3Context_Impl__obj::get_RGBA4( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGBA4",0x5092238d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGBA4","lime/graphics/opengl/GLES3Context.hx",904,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(904)
	int tmp = this1->RGBA4;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(904)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGBA4,return )

int GLES3Context_Impl__obj::get_RGB5_A1( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGB5_A1",0x2c3e2b14,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGB5_A1","lime/graphics/opengl/GLES3Context.hx",905,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(905)
	int tmp = this1->RGB5_A1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(905)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGB5_A1,return )

int GLES3Context_Impl__obj::get_RGB565( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGB565",0x2f43deba,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGB565","lime/graphics/opengl/GLES3Context.hx",906,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(906)
	int tmp = this1->RGB565;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(906)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGB565,return )

int GLES3Context_Impl__obj::get_DEPTH_COMPONENT16( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DEPTH_COMPONENT16",0xb0b90a33,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DEPTH_COMPONENT16","lime/graphics/opengl/GLES3Context.hx",907,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(907)
	int tmp = this1->DEPTH_COMPONENT16;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(907)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DEPTH_COMPONENT16,return )

int GLES3Context_Impl__obj::get_STENCIL_INDEX( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STENCIL_INDEX",0x81916c9c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STENCIL_INDEX","lime/graphics/opengl/GLES3Context.hx",908,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(908)
	int tmp = this1->STENCIL_INDEX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(908)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STENCIL_INDEX,return )

int GLES3Context_Impl__obj::get_STENCIL_INDEX8( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STENCIL_INDEX8",0xddad9c1c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STENCIL_INDEX8","lime/graphics/opengl/GLES3Context.hx",909,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(909)
	int tmp = this1->STENCIL_INDEX8;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(909)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STENCIL_INDEX8,return )

int GLES3Context_Impl__obj::get_DEPTH_STENCIL( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DEPTH_STENCIL",0x14fb22cd,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DEPTH_STENCIL","lime/graphics/opengl/GLES3Context.hx",910,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(910)
	int tmp = this1->DEPTH_STENCIL;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(910)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DEPTH_STENCIL,return )

int GLES3Context_Impl__obj::get_RENDERBUFFER_WIDTH( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RENDERBUFFER_WIDTH",0x7cc72bd0,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RENDERBUFFER_WIDTH","lime/graphics/opengl/GLES3Context.hx",911,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(911)
	int tmp = this1->RENDERBUFFER_WIDTH;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(911)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RENDERBUFFER_WIDTH,return )

int GLES3Context_Impl__obj::get_RENDERBUFFER_HEIGHT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RENDERBUFFER_HEIGHT",0x67cea2bd,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RENDERBUFFER_HEIGHT","lime/graphics/opengl/GLES3Context.hx",912,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(912)
	int tmp = this1->RENDERBUFFER_HEIGHT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(912)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RENDERBUFFER_HEIGHT,return )

int GLES3Context_Impl__obj::get_RENDERBUFFER_INTERNAL_FORMAT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RENDERBUFFER_INTERNAL_FORMAT",0x5de0eda3,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RENDERBUFFER_INTERNAL_FORMAT","lime/graphics/opengl/GLES3Context.hx",913,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(913)
	int tmp = this1->RENDERBUFFER_INTERNAL_FORMAT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(913)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RENDERBUFFER_INTERNAL_FORMAT,return )

int GLES3Context_Impl__obj::get_RENDERBUFFER_RED_SIZE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RENDERBUFFER_RED_SIZE",0x07d56e25,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RENDERBUFFER_RED_SIZE","lime/graphics/opengl/GLES3Context.hx",914,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(914)
	int tmp = this1->RENDERBUFFER_RED_SIZE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(914)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RENDERBUFFER_RED_SIZE,return )

int GLES3Context_Impl__obj::get_RENDERBUFFER_GREEN_SIZE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RENDERBUFFER_GREEN_SIZE",0xd42760f3,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RENDERBUFFER_GREEN_SIZE","lime/graphics/opengl/GLES3Context.hx",915,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(915)
	int tmp = this1->RENDERBUFFER_GREEN_SIZE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(915)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RENDERBUFFER_GREEN_SIZE,return )

int GLES3Context_Impl__obj::get_RENDERBUFFER_BLUE_SIZE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RENDERBUFFER_BLUE_SIZE",0x813946b0,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RENDERBUFFER_BLUE_SIZE","lime/graphics/opengl/GLES3Context.hx",916,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(916)
	int tmp = this1->RENDERBUFFER_BLUE_SIZE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(916)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RENDERBUFFER_BLUE_SIZE,return )

int GLES3Context_Impl__obj::get_RENDERBUFFER_ALPHA_SIZE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RENDERBUFFER_ALPHA_SIZE",0x2007b678,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RENDERBUFFER_ALPHA_SIZE","lime/graphics/opengl/GLES3Context.hx",917,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(917)
	int tmp = this1->RENDERBUFFER_ALPHA_SIZE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(917)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RENDERBUFFER_ALPHA_SIZE,return )

int GLES3Context_Impl__obj::get_RENDERBUFFER_DEPTH_SIZE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RENDERBUFFER_DEPTH_SIZE",0x5bce56b3,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RENDERBUFFER_DEPTH_SIZE","lime/graphics/opengl/GLES3Context.hx",918,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(918)
	int tmp = this1->RENDERBUFFER_DEPTH_SIZE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(918)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RENDERBUFFER_DEPTH_SIZE,return )

int GLES3Context_Impl__obj::get_RENDERBUFFER_STENCIL_SIZE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RENDERBUFFER_STENCIL_SIZE",0x085b689a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RENDERBUFFER_STENCIL_SIZE","lime/graphics/opengl/GLES3Context.hx",919,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(919)
	int tmp = this1->RENDERBUFFER_STENCIL_SIZE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(919)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RENDERBUFFER_STENCIL_SIZE,return )

int GLES3Context_Impl__obj::get_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE",0x0be145a3,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE","lime/graphics/opengl/GLES3Context.hx",920,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(920)
	int tmp = this1->FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(920)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE,return )

int GLES3Context_Impl__obj::get_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME",0x07d7c534,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME","lime/graphics/opengl/GLES3Context.hx",921,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(921)
	int tmp = this1->FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(921)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME,return )

int GLES3Context_Impl__obj::get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL",0x39657a09,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL","lime/graphics/opengl/GLES3Context.hx",922,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(922)
	int tmp = this1->FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(922)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL,return )

int GLES3Context_Impl__obj::get_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE",0xfcdcf5ef,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE","lime/graphics/opengl/GLES3Context.hx",923,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(923)
	int tmp = this1->FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(923)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE,return )

int GLES3Context_Impl__obj::get_COLOR_ATTACHMENT0( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_COLOR_ATTACHMENT0",0xf44ed8be,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_COLOR_ATTACHMENT0","lime/graphics/opengl/GLES3Context.hx",924,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(924)
	int tmp = this1->COLOR_ATTACHMENT0;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(924)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_COLOR_ATTACHMENT0,return )

int GLES3Context_Impl__obj::get_DEPTH_ATTACHMENT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DEPTH_ATTACHMENT",0x203f5792,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DEPTH_ATTACHMENT","lime/graphics/opengl/GLES3Context.hx",925,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(925)
	int tmp = this1->DEPTH_ATTACHMENT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(925)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DEPTH_ATTACHMENT,return )

int GLES3Context_Impl__obj::get_STENCIL_ATTACHMENT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STENCIL_ATTACHMENT",0x3a0e99f9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STENCIL_ATTACHMENT","lime/graphics/opengl/GLES3Context.hx",926,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(926)
	int tmp = this1->STENCIL_ATTACHMENT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(926)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STENCIL_ATTACHMENT,return )

int GLES3Context_Impl__obj::get_DEPTH_STENCIL_ATTACHMENT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DEPTH_STENCIL_ATTACHMENT",0x9bc52f55,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DEPTH_STENCIL_ATTACHMENT","lime/graphics/opengl/GLES3Context.hx",927,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(927)
	int tmp = this1->DEPTH_STENCIL_ATTACHMENT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(927)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DEPTH_STENCIL_ATTACHMENT,return )

int GLES3Context_Impl__obj::get_NONE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_NONE",0xe2308ccb,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_NONE","lime/graphics/opengl/GLES3Context.hx",928,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(928)
	int tmp = this1->NONE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(928)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_NONE,return )

int GLES3Context_Impl__obj::get_FRAMEBUFFER_COMPLETE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FRAMEBUFFER_COMPLETE",0xb2ffadbe,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FRAMEBUFFER_COMPLETE","lime/graphics/opengl/GLES3Context.hx",929,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(929)
	int tmp = this1->FRAMEBUFFER_COMPLETE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(929)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FRAMEBUFFER_COMPLETE,return )

int GLES3Context_Impl__obj::get_FRAMEBUFFER_INCOMPLETE_ATTACHMENT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FRAMEBUFFER_INCOMPLETE_ATTACHMENT",0xde45b7ff,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FRAMEBUFFER_INCOMPLETE_ATTACHMENT","lime/graphics/opengl/GLES3Context.hx",930,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(930)
	int tmp = this1->FRAMEBUFFER_INCOMPLETE_ATTACHMENT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(930)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FRAMEBUFFER_INCOMPLETE_ATTACHMENT,return )

int GLES3Context_Impl__obj::get_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT",0x8ac54798,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT","lime/graphics/opengl/GLES3Context.hx",931,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(931)
	int tmp = this1->FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(931)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT,return )

int GLES3Context_Impl__obj::get_FRAMEBUFFER_INCOMPLETE_DIMENSIONS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FRAMEBUFFER_INCOMPLETE_DIMENSIONS",0xdd726e69,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FRAMEBUFFER_INCOMPLETE_DIMENSIONS","lime/graphics/opengl/GLES3Context.hx",932,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(932)
	int tmp = this1->FRAMEBUFFER_INCOMPLETE_DIMENSIONS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(932)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FRAMEBUFFER_INCOMPLETE_DIMENSIONS,return )

int GLES3Context_Impl__obj::get_FRAMEBUFFER_UNSUPPORTED( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FRAMEBUFFER_UNSUPPORTED",0x60f86cb0,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FRAMEBUFFER_UNSUPPORTED","lime/graphics/opengl/GLES3Context.hx",933,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(933)
	int tmp = this1->FRAMEBUFFER_UNSUPPORTED;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(933)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FRAMEBUFFER_UNSUPPORTED,return )

int GLES3Context_Impl__obj::get_FRAMEBUFFER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FRAMEBUFFER_BINDING",0x561489c0,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FRAMEBUFFER_BINDING","lime/graphics/opengl/GLES3Context.hx",934,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(934)
	int tmp = this1->FRAMEBUFFER_BINDING;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(934)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FRAMEBUFFER_BINDING,return )

int GLES3Context_Impl__obj::get_RENDERBUFFER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RENDERBUFFER_BINDING",0xebf26b8f,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RENDERBUFFER_BINDING","lime/graphics/opengl/GLES3Context.hx",935,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(935)
	int tmp = this1->RENDERBUFFER_BINDING;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(935)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RENDERBUFFER_BINDING,return )

int GLES3Context_Impl__obj::get_MAX_RENDERBUFFER_SIZE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_RENDERBUFFER_SIZE",0x0eba9cdc,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_RENDERBUFFER_SIZE","lime/graphics/opengl/GLES3Context.hx",936,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(936)
	int tmp = this1->MAX_RENDERBUFFER_SIZE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(936)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_RENDERBUFFER_SIZE,return )

int GLES3Context_Impl__obj::get_INVALID_FRAMEBUFFER_OPERATION( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_INVALID_FRAMEBUFFER_OPERATION",0x924171ba,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_INVALID_FRAMEBUFFER_OPERATION","lime/graphics/opengl/GLES3Context.hx",937,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(937)
	int tmp = this1->INVALID_FRAMEBUFFER_OPERATION;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(937)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_INVALID_FRAMEBUFFER_OPERATION,return )

int GLES3Context_Impl__obj::get_UNPACK_FLIP_Y_WEBGL( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNPACK_FLIP_Y_WEBGL",0x2dfa3a5b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNPACK_FLIP_Y_WEBGL","lime/graphics/opengl/GLES3Context.hx",938,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(938)
	int tmp = this1->UNPACK_FLIP_Y_WEBGL;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(938)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNPACK_FLIP_Y_WEBGL,return )

int GLES3Context_Impl__obj::get_UNPACK_PREMULTIPLY_ALPHA_WEBGL( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNPACK_PREMULTIPLY_ALPHA_WEBGL",0x24799b46,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNPACK_PREMULTIPLY_ALPHA_WEBGL","lime/graphics/opengl/GLES3Context.hx",939,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(939)
	int tmp = this1->UNPACK_PREMULTIPLY_ALPHA_WEBGL;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(939)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNPACK_PREMULTIPLY_ALPHA_WEBGL,return )

int GLES3Context_Impl__obj::get_CONTEXT_LOST_WEBGL( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_CONTEXT_LOST_WEBGL",0x7e5774c1,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_CONTEXT_LOST_WEBGL","lime/graphics/opengl/GLES3Context.hx",940,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(940)
	int tmp = this1->CONTEXT_LOST_WEBGL;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(940)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_CONTEXT_LOST_WEBGL,return )

int GLES3Context_Impl__obj::get_UNPACK_COLORSPACE_CONVERSION_WEBGL( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNPACK_COLORSPACE_CONVERSION_WEBGL",0x758dfcf2,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNPACK_COLORSPACE_CONVERSION_WEBGL","lime/graphics/opengl/GLES3Context.hx",941,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(941)
	int tmp = this1->UNPACK_COLORSPACE_CONVERSION_WEBGL;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(941)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNPACK_COLORSPACE_CONVERSION_WEBGL,return )

int GLES3Context_Impl__obj::get_BROWSER_DEFAULT_WEBGL( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_BROWSER_DEFAULT_WEBGL",0x6a0ecc91,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_BROWSER_DEFAULT_WEBGL","lime/graphics/opengl/GLES3Context.hx",942,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(942)
	int tmp = this1->BROWSER_DEFAULT_WEBGL;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(942)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_BROWSER_DEFAULT_WEBGL,return )

::lime::graphics::opengl::GLContextType GLES3Context_Impl__obj::get_type( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_type",0xfb6ea4cd,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_type","lime/graphics/opengl/GLES3Context.hx",943,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(943)
	::lime::graphics::opengl::GLContextType tmp = this1->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(943)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_type,return )

Float GLES3Context_Impl__obj::get_version( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_version",0xd03682e5,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_version","lime/graphics/opengl/GLES3Context.hx",944,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(944)
	Float tmp = this1->version;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(944)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_version,return )

int GLES3Context_Impl__obj::get_READ_BUFFER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_READ_BUFFER",0x37e42456,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_READ_BUFFER","lime/graphics/opengl/GLES3Context.hx",946,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(946)
	int tmp = this1->READ_BUFFER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(946)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_READ_BUFFER,return )

int GLES3Context_Impl__obj::get_UNPACK_ROW_LENGTH( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNPACK_ROW_LENGTH",0xcd154285,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNPACK_ROW_LENGTH","lime/graphics/opengl/GLES3Context.hx",947,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(947)
	int tmp = this1->UNPACK_ROW_LENGTH;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(947)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNPACK_ROW_LENGTH,return )

int GLES3Context_Impl__obj::get_UNPACK_SKIP_ROWS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNPACK_SKIP_ROWS",0x83c2e89f,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNPACK_SKIP_ROWS","lime/graphics/opengl/GLES3Context.hx",948,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(948)
	int tmp = this1->UNPACK_SKIP_ROWS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(948)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNPACK_SKIP_ROWS,return )

int GLES3Context_Impl__obj::get_UNPACK_SKIP_PIXELS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNPACK_SKIP_PIXELS",0xe8463433,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNPACK_SKIP_PIXELS","lime/graphics/opengl/GLES3Context.hx",949,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(949)
	int tmp = this1->UNPACK_SKIP_PIXELS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(949)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNPACK_SKIP_PIXELS,return )

int GLES3Context_Impl__obj::get_PACK_ROW_LENGTH( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_PACK_ROW_LENGTH",0x814c737e,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_PACK_ROW_LENGTH","lime/graphics/opengl/GLES3Context.hx",950,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(950)
	int tmp = this1->PACK_ROW_LENGTH;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(950)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_PACK_ROW_LENGTH,return )

int GLES3Context_Impl__obj::get_PACK_SKIP_ROWS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_PACK_SKIP_ROWS",0x7b62b9c6,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_PACK_SKIP_ROWS","lime/graphics/opengl/GLES3Context.hx",951,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(951)
	int tmp = this1->PACK_SKIP_ROWS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(951)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_PACK_SKIP_ROWS,return )

int GLES3Context_Impl__obj::get_PACK_SKIP_PIXELS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_PACK_SKIP_PIXELS",0xe459dd1a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_PACK_SKIP_PIXELS","lime/graphics/opengl/GLES3Context.hx",952,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(952)
	int tmp = this1->PACK_SKIP_PIXELS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(952)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_PACK_SKIP_PIXELS,return )

int GLES3Context_Impl__obj::get_TEXTURE_BINDING_3D( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE_BINDING_3D",0xea7efa62,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE_BINDING_3D","lime/graphics/opengl/GLES3Context.hx",953,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(953)
	int tmp = this1->TEXTURE_BINDING_3D;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(953)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE_BINDING_3D,return )

int GLES3Context_Impl__obj::get_UNPACK_SKIP_IMAGES( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNPACK_SKIP_IMAGES",0x5a2e95be,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNPACK_SKIP_IMAGES","lime/graphics/opengl/GLES3Context.hx",954,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(954)
	int tmp = this1->UNPACK_SKIP_IMAGES;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(954)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNPACK_SKIP_IMAGES,return )

int GLES3Context_Impl__obj::get_UNPACK_IMAGE_HEIGHT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNPACK_IMAGE_HEIGHT",0xa4e498e5,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNPACK_IMAGE_HEIGHT","lime/graphics/opengl/GLES3Context.hx",955,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(955)
	int tmp = this1->UNPACK_IMAGE_HEIGHT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(955)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNPACK_IMAGE_HEIGHT,return )

int GLES3Context_Impl__obj::get_MAX_3D_TEXTURE_SIZE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_3D_TEXTURE_SIZE",0x65f539e5,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_3D_TEXTURE_SIZE","lime/graphics/opengl/GLES3Context.hx",956,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(956)
	int tmp = this1->MAX_3D_TEXTURE_SIZE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(956)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_3D_TEXTURE_SIZE,return )

int GLES3Context_Impl__obj::get_MAX_ELEMENTS_VERTICES( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_ELEMENTS_VERTICES",0xceab8713,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_ELEMENTS_VERTICES","lime/graphics/opengl/GLES3Context.hx",957,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(957)
	int tmp = this1->MAX_ELEMENTS_VERTICES;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(957)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_ELEMENTS_VERTICES,return )

int GLES3Context_Impl__obj::get_MAX_ELEMENTS_INDICES( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_ELEMENTS_INDICES",0x3c2cc52d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_ELEMENTS_INDICES","lime/graphics/opengl/GLES3Context.hx",958,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(958)
	int tmp = this1->MAX_ELEMENTS_INDICES;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(958)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_ELEMENTS_INDICES,return )

int GLES3Context_Impl__obj::get_MAX_TEXTURE_LOD_BIAS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_TEXTURE_LOD_BIAS",0x31094509,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_TEXTURE_LOD_BIAS","lime/graphics/opengl/GLES3Context.hx",959,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(959)
	int tmp = this1->MAX_TEXTURE_LOD_BIAS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(959)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_TEXTURE_LOD_BIAS,return )

int GLES3Context_Impl__obj::get_MAX_FRAGMENT_UNIFORM_COMPONENTS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_FRAGMENT_UNIFORM_COMPONENTS",0xd9214742,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_FRAGMENT_UNIFORM_COMPONENTS","lime/graphics/opengl/GLES3Context.hx",960,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(960)
	int tmp = this1->MAX_FRAGMENT_UNIFORM_COMPONENTS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(960)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_FRAGMENT_UNIFORM_COMPONENTS,return )

int GLES3Context_Impl__obj::get_MAX_VERTEX_UNIFORM_COMPONENTS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_VERTEX_UNIFORM_COMPONENTS",0xadb663ae,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_VERTEX_UNIFORM_COMPONENTS","lime/graphics/opengl/GLES3Context.hx",961,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(961)
	int tmp = this1->MAX_VERTEX_UNIFORM_COMPONENTS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(961)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_VERTEX_UNIFORM_COMPONENTS,return )

int GLES3Context_Impl__obj::get_MAX_ARRAY_TEXTURE_LAYERS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_ARRAY_TEXTURE_LAYERS",0x6a3f117a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_ARRAY_TEXTURE_LAYERS","lime/graphics/opengl/GLES3Context.hx",962,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(962)
	int tmp = this1->MAX_ARRAY_TEXTURE_LAYERS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(962)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_ARRAY_TEXTURE_LAYERS,return )

int GLES3Context_Impl__obj::get_MIN_PROGRAM_TEXEL_OFFSET( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MIN_PROGRAM_TEXEL_OFFSET",0x04bf87bf,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MIN_PROGRAM_TEXEL_OFFSET","lime/graphics/opengl/GLES3Context.hx",963,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(963)
	int tmp = this1->MIN_PROGRAM_TEXEL_OFFSET;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(963)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MIN_PROGRAM_TEXEL_OFFSET,return )

int GLES3Context_Impl__obj::get_MAX_PROGRAM_TEXEL_OFFSET( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_PROGRAM_TEXEL_OFFSET",0xae38296d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_PROGRAM_TEXEL_OFFSET","lime/graphics/opengl/GLES3Context.hx",964,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(964)
	int tmp = this1->MAX_PROGRAM_TEXEL_OFFSET;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(964)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_PROGRAM_TEXEL_OFFSET,return )

int GLES3Context_Impl__obj::get_MAX_VARYING_COMPONENTS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_VARYING_COMPONENTS",0x0375dad3,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_VARYING_COMPONENTS","lime/graphics/opengl/GLES3Context.hx",965,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(965)
	int tmp = this1->MAX_VARYING_COMPONENTS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(965)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_VARYING_COMPONENTS,return )

int GLES3Context_Impl__obj::get_FRAGMENT_SHADER_DERIVATIVE_HINT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FRAGMENT_SHADER_DERIVATIVE_HINT",0x196b2c41,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FRAGMENT_SHADER_DERIVATIVE_HINT","lime/graphics/opengl/GLES3Context.hx",966,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(966)
	int tmp = this1->FRAGMENT_SHADER_DERIVATIVE_HINT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(966)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FRAGMENT_SHADER_DERIVATIVE_HINT,return )

int GLES3Context_Impl__obj::get_RASTERIZER_DISCARD( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RASTERIZER_DISCARD",0x83c27f6d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RASTERIZER_DISCARD","lime/graphics/opengl/GLES3Context.hx",967,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(967)
	int tmp = this1->RASTERIZER_DISCARD;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(967)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RASTERIZER_DISCARD,return )

int GLES3Context_Impl__obj::get_VERTEX_ARRAY_BINDING( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_VERTEX_ARRAY_BINDING",0xf9a665d7,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_VERTEX_ARRAY_BINDING","lime/graphics/opengl/GLES3Context.hx",968,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(968)
	int tmp = this1->VERTEX_ARRAY_BINDING;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(968)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_VERTEX_ARRAY_BINDING,return )

int GLES3Context_Impl__obj::get_MAX_VERTEX_OUTPUT_COMPONENTS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_VERTEX_OUTPUT_COMPONENTS",0x9b287767,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_VERTEX_OUTPUT_COMPONENTS","lime/graphics/opengl/GLES3Context.hx",969,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(969)
	int tmp = this1->MAX_VERTEX_OUTPUT_COMPONENTS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(969)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_VERTEX_OUTPUT_COMPONENTS,return )

int GLES3Context_Impl__obj::get_MAX_FRAGMENT_INPUT_COMPONENTS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_FRAGMENT_INPUT_COMPONENTS",0x26da69ec,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_FRAGMENT_INPUT_COMPONENTS","lime/graphics/opengl/GLES3Context.hx",970,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(970)
	int tmp = this1->MAX_FRAGMENT_INPUT_COMPONENTS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(970)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_FRAGMENT_INPUT_COMPONENTS,return )

int GLES3Context_Impl__obj::get_MAX_SERVER_WAIT_TIMEOUT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_SERVER_WAIT_TIMEOUT",0x1bcc2305,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_SERVER_WAIT_TIMEOUT","lime/graphics/opengl/GLES3Context.hx",971,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(971)
	int tmp = this1->MAX_SERVER_WAIT_TIMEOUT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(971)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_SERVER_WAIT_TIMEOUT,return )

int GLES3Context_Impl__obj::get_MAX_ELEMENT_INDEX( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_ELEMENT_INDEX",0xe2262da1,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_ELEMENT_INDEX","lime/graphics/opengl/GLES3Context.hx",972,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(972)
	int tmp = this1->MAX_ELEMENT_INDEX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(972)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_ELEMENT_INDEX,return )

int GLES3Context_Impl__obj::get_RED( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RED",0x439be67e,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RED","lime/graphics/opengl/GLES3Context.hx",974,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(974)
	int tmp = this1->RED;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(974)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RED,return )

int GLES3Context_Impl__obj::get_RGB8( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGB8",0xe4cf4abe,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGB8","lime/graphics/opengl/GLES3Context.hx",975,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(975)
	int tmp = this1->RGB8;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(975)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGB8,return )

int GLES3Context_Impl__obj::get_RGBA8( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGBA8",0x50922391,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGBA8","lime/graphics/opengl/GLES3Context.hx",976,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(976)
	int tmp = this1->RGBA8;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(976)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGBA8,return )

int GLES3Context_Impl__obj::get_RGB10_A2( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGB10_A2",0x1d92fef7,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGB10_A2","lime/graphics/opengl/GLES3Context.hx",977,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(977)
	int tmp = this1->RGB10_A2;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(977)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGB10_A2,return )

int GLES3Context_Impl__obj::get_TEXTURE_3D( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE_3D",0xadc70f48,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE_3D","lime/graphics/opengl/GLES3Context.hx",978,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(978)
	int tmp = this1->TEXTURE_3D;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(978)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE_3D,return )

int GLES3Context_Impl__obj::get_TEXTURE_WRAP_R( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE_WRAP_R",0xb47d5574,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE_WRAP_R","lime/graphics/opengl/GLES3Context.hx",979,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(979)
	int tmp = this1->TEXTURE_WRAP_R;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(979)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE_WRAP_R,return )

int GLES3Context_Impl__obj::get_TEXTURE_MIN_LOD( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE_MIN_LOD",0x8631dddd,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE_MIN_LOD","lime/graphics/opengl/GLES3Context.hx",980,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(980)
	int tmp = this1->TEXTURE_MIN_LOD;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(980)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE_MIN_LOD,return )

int GLES3Context_Impl__obj::get_TEXTURE_MAX_LOD( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE_MAX_LOD",0x1558c7ef,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE_MAX_LOD","lime/graphics/opengl/GLES3Context.hx",981,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(981)
	int tmp = this1->TEXTURE_MAX_LOD;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(981)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE_MAX_LOD,return )

int GLES3Context_Impl__obj::get_TEXTURE_BASE_LEVEL( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE_BASE_LEVEL",0x3e38f90d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE_BASE_LEVEL","lime/graphics/opengl/GLES3Context.hx",982,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(982)
	int tmp = this1->TEXTURE_BASE_LEVEL;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(982)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE_BASE_LEVEL,return )

int GLES3Context_Impl__obj::get_TEXTURE_MAX_LEVEL( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE_MAX_LEVEL",0xac7fa472,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE_MAX_LEVEL","lime/graphics/opengl/GLES3Context.hx",983,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(983)
	int tmp = this1->TEXTURE_MAX_LEVEL;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(983)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE_MAX_LEVEL,return )

int GLES3Context_Impl__obj::get_TEXTURE_COMPARE_MODE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE_COMPARE_MODE",0x4f3bedf4,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE_COMPARE_MODE","lime/graphics/opengl/GLES3Context.hx",984,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(984)
	int tmp = this1->TEXTURE_COMPARE_MODE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(984)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE_COMPARE_MODE,return )

int GLES3Context_Impl__obj::get_TEXTURE_COMPARE_FUNC( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE_COMPARE_FUNC",0x4aa005d5,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE_COMPARE_FUNC","lime/graphics/opengl/GLES3Context.hx",985,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(985)
	int tmp = this1->TEXTURE_COMPARE_FUNC;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(985)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE_COMPARE_FUNC,return )

int GLES3Context_Impl__obj::get_SRGB( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SRGB",0xe580de8d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SRGB","lime/graphics/opengl/GLES3Context.hx",986,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(986)
	int tmp = this1->SRGB;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(986)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SRGB,return )

int GLES3Context_Impl__obj::get_SRGB8( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SRGB8",0xeb41dd0b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SRGB8","lime/graphics/opengl/GLES3Context.hx",987,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(987)
	int tmp = this1->SRGB8;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(987)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SRGB8,return )

int GLES3Context_Impl__obj::get_SRGB8_ALPHA8( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SRGB8_ALPHA8",0xd3c4332e,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SRGB8_ALPHA8","lime/graphics/opengl/GLES3Context.hx",988,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(988)
	int tmp = this1->SRGB8_ALPHA8;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(988)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SRGB8_ALPHA8,return )

int GLES3Context_Impl__obj::get_COMPARE_REF_TO_TEXTURE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_COMPARE_REF_TO_TEXTURE",0x4de8ee10,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_COMPARE_REF_TO_TEXTURE","lime/graphics/opengl/GLES3Context.hx",989,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(989)
	int tmp = this1->COMPARE_REF_TO_TEXTURE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(989)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_COMPARE_REF_TO_TEXTURE,return )

int GLES3Context_Impl__obj::get_RGBA32F( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGBA32F",0x340b4a60,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGBA32F","lime/graphics/opengl/GLES3Context.hx",990,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(990)
	int tmp = this1->RGBA32F;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(990)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGBA32F,return )

int GLES3Context_Impl__obj::get_RGB32F( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGB32F",0x2f4256cd,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGB32F","lime/graphics/opengl/GLES3Context.hx",991,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(991)
	int tmp = this1->RGB32F;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(991)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGB32F,return )

int GLES3Context_Impl__obj::get_RGBA16F( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGBA16F",0x3409c95a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGBA16F","lime/graphics/opengl/GLES3Context.hx",992,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(992)
	int tmp = this1->RGBA16F;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(992)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGBA16F,return )

int GLES3Context_Impl__obj::get_RGB16F( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGB16F",0x2f40d5c7,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGB16F","lime/graphics/opengl/GLES3Context.hx",993,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(993)
	int tmp = this1->RGB16F;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(993)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGB16F,return )

int GLES3Context_Impl__obj::get_TEXTURE_2D_ARRAY( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE_2D_ARRAY",0x97382fe3,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE_2D_ARRAY","lime/graphics/opengl/GLES3Context.hx",994,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(994)
	int tmp = this1->TEXTURE_2D_ARRAY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(994)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE_2D_ARRAY,return )

int GLES3Context_Impl__obj::get_TEXTURE_BINDING_2D_ARRAY( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE_BINDING_2D_ARRAY",0x24606a7d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE_BINDING_2D_ARRAY","lime/graphics/opengl/GLES3Context.hx",995,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(995)
	int tmp = this1->TEXTURE_BINDING_2D_ARRAY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(995)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE_BINDING_2D_ARRAY,return )

int GLES3Context_Impl__obj::get_R11F_G11F_B10F( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_R11F_G11F_B10F",0xde382a6d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_R11F_G11F_B10F","lime/graphics/opengl/GLES3Context.hx",996,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(996)
	int tmp = this1->R11F_G11F_B10F;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(996)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_R11F_G11F_B10F,return )

int GLES3Context_Impl__obj::get_RGB9_E5( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGB9_E5",0x2ee30910,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGB9_E5","lime/graphics/opengl/GLES3Context.hx",997,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(997)
	int tmp = this1->RGB9_E5;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(997)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGB9_E5,return )

int GLES3Context_Impl__obj::get_RGBA32UI( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGBA32UI",0x55d5d6fa,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGBA32UI","lime/graphics/opengl/GLES3Context.hx",998,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(998)
	int tmp = this1->RGBA32UI;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(998)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGBA32UI,return )

int GLES3Context_Impl__obj::get_RGB32UI( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGB32UI",0x2ac9a9ed,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGB32UI","lime/graphics/opengl/GLES3Context.hx",999,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(999)
	int tmp = this1->RGB32UI;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(999)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGB32UI,return )

int GLES3Context_Impl__obj::get_RGBA16UI( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGBA16UI",0x548672c0,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGBA16UI","lime/graphics/opengl/GLES3Context.hx",1000,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1000)
	int tmp = this1->RGBA16UI;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1000)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGBA16UI,return )

int GLES3Context_Impl__obj::get_RGB16UI( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGB16UI",0x297a45b3,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGB16UI","lime/graphics/opengl/GLES3Context.hx",1001,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1001)
	int tmp = this1->RGB16UI;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1001)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGB16UI,return )

int GLES3Context_Impl__obj::get_RGBA8UI( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGBA8UI",0x340f3425,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGBA8UI","lime/graphics/opengl/GLES3Context.hx",1002,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1002)
	int tmp = this1->RGBA8UI;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1002)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGBA8UI,return )

int GLES3Context_Impl__obj::get_RGB8UI( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGB8UI",0x2f464092,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGB8UI","lime/graphics/opengl/GLES3Context.hx",1003,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1003)
	int tmp = this1->RGB8UI;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1003)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGB8UI,return )

int GLES3Context_Impl__obj::get_RGBA32I( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGBA32I",0x340b4a63,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGBA32I","lime/graphics/opengl/GLES3Context.hx",1004,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1004)
	int tmp = this1->RGBA32I;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1004)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGBA32I,return )

int GLES3Context_Impl__obj::get_RGB32I( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGB32I",0x2f4256d0,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGB32I","lime/graphics/opengl/GLES3Context.hx",1005,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1005)
	int tmp = this1->RGB32I;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1005)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGB32I,return )

int GLES3Context_Impl__obj::get_RGBA16I( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGBA16I",0x3409c95d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGBA16I","lime/graphics/opengl/GLES3Context.hx",1006,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1006)
	int tmp = this1->RGBA16I;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1006)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGBA16I,return )

int GLES3Context_Impl__obj::get_RGB16I( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGB16I",0x2f40d5ca,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGB16I","lime/graphics/opengl/GLES3Context.hx",1007,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1007)
	int tmp = this1->RGB16I;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1007)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGB16I,return )

int GLES3Context_Impl__obj::get_RGBA8I( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGBA8I",0x2f4cfb98,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGBA8I","lime/graphics/opengl/GLES3Context.hx",1008,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1008)
	int tmp = this1->RGBA8I;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1008)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGBA8I,return )

int GLES3Context_Impl__obj::get_RGB8I( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGB8I",0x50921bcb,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGB8I","lime/graphics/opengl/GLES3Context.hx",1009,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1009)
	int tmp = this1->RGB8I;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1009)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGB8I,return )

int GLES3Context_Impl__obj::get_RED_INTEGER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RED_INTEGER",0x5e6b7f9d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RED_INTEGER","lime/graphics/opengl/GLES3Context.hx",1010,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1010)
	int tmp = this1->RED_INTEGER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1010)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RED_INTEGER,return )

int GLES3Context_Impl__obj::get_RGB_INTEGER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGB_INTEGER",0x391d9d59,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGB_INTEGER","lime/graphics/opengl/GLES3Context.hx",1011,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1011)
	int tmp = this1->RGB_INTEGER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1011)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGB_INTEGER,return )

int GLES3Context_Impl__obj::get_RGBA_INTEGER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGBA_INTEGER",0x5e79d4e6,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGBA_INTEGER","lime/graphics/opengl/GLES3Context.hx",1012,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1012)
	int tmp = this1->RGBA_INTEGER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1012)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGBA_INTEGER,return )

int GLES3Context_Impl__obj::get_R8( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_R8",0xf03b3ef9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_R8","lime/graphics/opengl/GLES3Context.hx",1013,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1013)
	int tmp = this1->R8;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1013)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_R8,return )

int GLES3Context_Impl__obj::get_RG8( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RG8",0x439be830,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RG8","lime/graphics/opengl/GLES3Context.hx",1014,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1014)
	int tmp = this1->RG8;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1014)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RG8,return )

int GLES3Context_Impl__obj::get_R16F( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_R16F",0xe4be8ec2,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_R16F","lime/graphics/opengl/GLES3Context.hx",1015,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1015)
	int tmp = this1->R16F;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1015)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_R16F,return )

int GLES3Context_Impl__obj::get_R32F( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_R32F",0xe4c00fc8,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_R32F","lime/graphics/opengl/GLES3Context.hx",1016,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1016)
	int tmp = this1->R32F;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1016)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_R32F,return )

int GLES3Context_Impl__obj::get_RG16F( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RG16F",0x508533b9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RG16F","lime/graphics/opengl/GLES3Context.hx",1017,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1017)
	int tmp = this1->RG16F;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1017)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RG16F,return )

int GLES3Context_Impl__obj::get_RG32F( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RG32F",0x5086b4bf,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RG32F","lime/graphics/opengl/GLES3Context.hx",1018,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1018)
	int tmp = this1->RG32F;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1018)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RG32F,return )

int GLES3Context_Impl__obj::get_R8I( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_R8I",0x439bdb30,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_R8I","lime/graphics/opengl/GLES3Context.hx",1019,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1019)
	int tmp = this1->R8I;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1019)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_R8I,return )

int GLES3Context_Impl__obj::get_R8UI( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_R8UI",0xe4c3f98d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_R8UI","lime/graphics/opengl/GLES3Context.hx",1020,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1020)
	int tmp = this1->R8UI;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1020)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_R8UI,return )

int GLES3Context_Impl__obj::get_R16I( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_R16I",0xe4be8ec5,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_R16I","lime/graphics/opengl/GLES3Context.hx",1021,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1021)
	int tmp = this1->R16I;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1021)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_R16I,return )

int GLES3Context_Impl__obj::get_R16UI( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_R16UI",0x41fe6858,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_R16UI","lime/graphics/opengl/GLES3Context.hx",1022,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1022)
	int tmp = this1->R16UI;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1022)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_R16UI,return )

int GLES3Context_Impl__obj::get_R32I( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_R32I",0xe4c00fcb,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_R32I","lime/graphics/opengl/GLES3Context.hx",1023,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1023)
	int tmp = this1->R32I;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1023)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_R32I,return )

int GLES3Context_Impl__obj::get_R32UI( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_R32UI",0x434dcc92,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_R32UI","lime/graphics/opengl/GLES3Context.hx",1024,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1024)
	int tmp = this1->R32UI;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1024)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_R32UI,return )

int GLES3Context_Impl__obj::get_RG8I( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RG8I",0xe4cf4219,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RG8I","lime/graphics/opengl/GLES3Context.hx",1025,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1025)
	int tmp = this1->RG8I;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1025)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RG8I,return )

int GLES3Context_Impl__obj::get_RG8UI( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RG8UI",0x508a9e84,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RG8UI","lime/graphics/opengl/GLES3Context.hx",1026,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1026)
	int tmp = this1->RG8UI;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1026)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RG8UI,return )

int GLES3Context_Impl__obj::get_RG16I( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RG16I",0x508533bc,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RG16I","lime/graphics/opengl/GLES3Context.hx",1027,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1027)
	int tmp = this1->RG16I;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1027)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RG16I,return )

int GLES3Context_Impl__obj::get_RG16UI( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RG16UI",0x24081b81,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RG16UI","lime/graphics/opengl/GLES3Context.hx",1028,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1028)
	int tmp = this1->RG16UI;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1028)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RG16UI,return )

int GLES3Context_Impl__obj::get_RG32I( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RG32I",0x5086b4c2,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RG32I","lime/graphics/opengl/GLES3Context.hx",1029,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1029)
	int tmp = this1->RG32I;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1029)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RG32I,return )

int GLES3Context_Impl__obj::get_RG32UI( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RG32UI",0x25577fbb,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RG32UI","lime/graphics/opengl/GLES3Context.hx",1030,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1030)
	int tmp = this1->RG32UI;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1030)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RG32UI,return )

int GLES3Context_Impl__obj::get_R8_SNORM( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_R8_SNORM",0xed928b09,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_R8_SNORM","lime/graphics/opengl/GLES3Context.hx",1031,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1031)
	int tmp = this1->R8_SNORM;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1031)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_R8_SNORM,return )

int GLES3Context_Impl__obj::get_RG8_SNORM( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RG8_SNORM",0xa3747780,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RG8_SNORM","lime/graphics/opengl/GLES3Context.hx",1032,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1032)
	int tmp = this1->RG8_SNORM;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1032)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RG8_SNORM,return )

int GLES3Context_Impl__obj::get_RGB8_SNORM( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGB8_SNORM",0xf545388e,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGB8_SNORM","lime/graphics/opengl/GLES3Context.hx",1033,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1033)
	int tmp = this1->RGB8_SNORM;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1033)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGB8_SNORM,return )

int GLES3Context_Impl__obj::get_RGBA8_SNORM( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGBA8_SNORM",0x00eaf1a1,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGBA8_SNORM","lime/graphics/opengl/GLES3Context.hx",1034,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1034)
	int tmp = this1->RGBA8_SNORM;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1034)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGBA8_SNORM,return )

int GLES3Context_Impl__obj::get_RGB10_A2UI( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RGB10_A2UI",0xe78a350b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RGB10_A2UI","lime/graphics/opengl/GLES3Context.hx",1035,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1035)
	int tmp = this1->RGB10_A2UI;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1035)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RGB10_A2UI,return )

int GLES3Context_Impl__obj::get_TEXTURE_IMMUTABLE_FORMAT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE_IMMUTABLE_FORMAT",0x5a7879cb,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE_IMMUTABLE_FORMAT","lime/graphics/opengl/GLES3Context.hx",1036,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1036)
	int tmp = this1->TEXTURE_IMMUTABLE_FORMAT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1036)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE_IMMUTABLE_FORMAT,return )

int GLES3Context_Impl__obj::get_TEXTURE_IMMUTABLE_LEVELS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TEXTURE_IMMUTABLE_LEVELS",0x0139a903,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TEXTURE_IMMUTABLE_LEVELS","lime/graphics/opengl/GLES3Context.hx",1037,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1037)
	int tmp = this1->TEXTURE_IMMUTABLE_LEVELS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1037)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TEXTURE_IMMUTABLE_LEVELS,return )

int GLES3Context_Impl__obj::get_UNSIGNED_INT_2_10_10_10_REV( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNSIGNED_INT_2_10_10_10_REV",0x4d227157,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNSIGNED_INT_2_10_10_10_REV","lime/graphics/opengl/GLES3Context.hx",1039,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1039)
	int tmp = this1->UNSIGNED_INT_2_10_10_10_REV;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1039)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNSIGNED_INT_2_10_10_10_REV,return )

int GLES3Context_Impl__obj::get_UNSIGNED_INT_10F_11F_11F_REV( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNSIGNED_INT_10F_11F_11F_REV",0xabe26972,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNSIGNED_INT_10F_11F_11F_REV","lime/graphics/opengl/GLES3Context.hx",1040,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1040)
	int tmp = this1->UNSIGNED_INT_10F_11F_11F_REV;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1040)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNSIGNED_INT_10F_11F_11F_REV,return )

int GLES3Context_Impl__obj::get_UNSIGNED_INT_5_9_9_9_REV( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNSIGNED_INT_5_9_9_9_REV",0xc3473a80,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNSIGNED_INT_5_9_9_9_REV","lime/graphics/opengl/GLES3Context.hx",1041,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1041)
	int tmp = this1->UNSIGNED_INT_5_9_9_9_REV;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1041)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNSIGNED_INT_5_9_9_9_REV,return )

int GLES3Context_Impl__obj::get_FLOAT_32_UNSIGNED_INT_24_8_REV( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FLOAT_32_UNSIGNED_INT_24_8_REV",0xf2ffe3cf,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FLOAT_32_UNSIGNED_INT_24_8_REV","lime/graphics/opengl/GLES3Context.hx",1042,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1042)
	int tmp = this1->FLOAT_32_UNSIGNED_INT_24_8_REV;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1042)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FLOAT_32_UNSIGNED_INT_24_8_REV,return )

int GLES3Context_Impl__obj::get_UNSIGNED_INT_24_8( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNSIGNED_INT_24_8",0x472695c2,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNSIGNED_INT_24_8","lime/graphics/opengl/GLES3Context.hx",1043,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1043)
	int tmp = this1->UNSIGNED_INT_24_8;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1043)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNSIGNED_INT_24_8,return )

int GLES3Context_Impl__obj::get_HALF_FLOAT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_HALF_FLOAT",0x85510103,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_HALF_FLOAT","lime/graphics/opengl/GLES3Context.hx",1044,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1044)
	int tmp = this1->HALF_FLOAT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1044)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_HALF_FLOAT,return )

int GLES3Context_Impl__obj::get_RG( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RG",0xf03b3f08,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RG","lime/graphics/opengl/GLES3Context.hx",1045,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1045)
	int tmp = this1->RG;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1045)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RG,return )

int GLES3Context_Impl__obj::get_RG_INTEGER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RG_INTEGER",0xf4457227,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RG_INTEGER","lime/graphics/opengl/GLES3Context.hx",1046,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1046)
	int tmp = this1->RG_INTEGER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1046)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RG_INTEGER,return )

int GLES3Context_Impl__obj::get_INT_2_10_10_10_REV( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_INT_2_10_10_10_REV",0x08042e13,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_INT_2_10_10_10_REV","lime/graphics/opengl/GLES3Context.hx",1047,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1047)
	int tmp = this1->INT_2_10_10_10_REV;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1047)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_INT_2_10_10_10_REV,return )

int GLES3Context_Impl__obj::get_CURRENT_QUERY( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_CURRENT_QUERY",0xa41f068f,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_CURRENT_QUERY","lime/graphics/opengl/GLES3Context.hx",1049,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1049)
	int tmp = this1->CURRENT_QUERY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1049)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_CURRENT_QUERY,return )

int GLES3Context_Impl__obj::get_QUERY_RESULT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_QUERY_RESULT",0xa72b8da7,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_QUERY_RESULT","lime/graphics/opengl/GLES3Context.hx",1050,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1050)
	int tmp = this1->QUERY_RESULT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1050)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_QUERY_RESULT,return )

int GLES3Context_Impl__obj::get_QUERY_RESULT_AVAILABLE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_QUERY_RESULT_AVAILABLE",0xcb9409d1,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_QUERY_RESULT_AVAILABLE","lime/graphics/opengl/GLES3Context.hx",1051,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1051)
	int tmp = this1->QUERY_RESULT_AVAILABLE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1051)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_QUERY_RESULT_AVAILABLE,return )

int GLES3Context_Impl__obj::get_ANY_SAMPLES_PASSED( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_ANY_SAMPLES_PASSED",0xbf891bec,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_ANY_SAMPLES_PASSED","lime/graphics/opengl/GLES3Context.hx",1052,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1052)
	int tmp = this1->ANY_SAMPLES_PASSED;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1052)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_ANY_SAMPLES_PASSED,return )

int GLES3Context_Impl__obj::get_ANY_SAMPLES_PASSED_CONSERVATIVE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_ANY_SAMPLES_PASSED_CONSERVATIVE",0xd97ef320,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_ANY_SAMPLES_PASSED_CONSERVATIVE","lime/graphics/opengl/GLES3Context.hx",1053,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1053)
	int tmp = this1->ANY_SAMPLES_PASSED_CONSERVATIVE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1053)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_ANY_SAMPLES_PASSED_CONSERVATIVE,return )

int GLES3Context_Impl__obj::get_MAX_DRAW_BUFFERS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_DRAW_BUFFERS",0x6dfc9546,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_DRAW_BUFFERS","lime/graphics/opengl/GLES3Context.hx",1055,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1055)
	int tmp = this1->MAX_DRAW_BUFFERS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1055)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_DRAW_BUFFERS,return )

int GLES3Context_Impl__obj::get_DRAW_BUFFER0( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DRAW_BUFFER0",0x4a79e5c8,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DRAW_BUFFER0","lime/graphics/opengl/GLES3Context.hx",1056,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1056)
	int tmp = this1->DRAW_BUFFER0;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1056)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DRAW_BUFFER0,return )

int GLES3Context_Impl__obj::get_DRAW_BUFFER1( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DRAW_BUFFER1",0x4a79e5c9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DRAW_BUFFER1","lime/graphics/opengl/GLES3Context.hx",1057,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1057)
	int tmp = this1->DRAW_BUFFER1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1057)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DRAW_BUFFER1,return )

int GLES3Context_Impl__obj::get_DRAW_BUFFER2( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DRAW_BUFFER2",0x4a79e5ca,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DRAW_BUFFER2","lime/graphics/opengl/GLES3Context.hx",1058,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1058)
	int tmp = this1->DRAW_BUFFER2;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1058)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DRAW_BUFFER2,return )

int GLES3Context_Impl__obj::get_DRAW_BUFFER3( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DRAW_BUFFER3",0x4a79e5cb,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DRAW_BUFFER3","lime/graphics/opengl/GLES3Context.hx",1059,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1059)
	int tmp = this1->DRAW_BUFFER3;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1059)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DRAW_BUFFER3,return )

int GLES3Context_Impl__obj::get_DRAW_BUFFER4( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DRAW_BUFFER4",0x4a79e5cc,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DRAW_BUFFER4","lime/graphics/opengl/GLES3Context.hx",1060,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1060)
	int tmp = this1->DRAW_BUFFER4;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1060)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DRAW_BUFFER4,return )

int GLES3Context_Impl__obj::get_DRAW_BUFFER5( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DRAW_BUFFER5",0x4a79e5cd,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DRAW_BUFFER5","lime/graphics/opengl/GLES3Context.hx",1061,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1061)
	int tmp = this1->DRAW_BUFFER5;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1061)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DRAW_BUFFER5,return )

int GLES3Context_Impl__obj::get_DRAW_BUFFER6( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DRAW_BUFFER6",0x4a79e5ce,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DRAW_BUFFER6","lime/graphics/opengl/GLES3Context.hx",1062,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1062)
	int tmp = this1->DRAW_BUFFER6;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1062)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DRAW_BUFFER6,return )

int GLES3Context_Impl__obj::get_DRAW_BUFFER7( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DRAW_BUFFER7",0x4a79e5cf,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DRAW_BUFFER7","lime/graphics/opengl/GLES3Context.hx",1063,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1063)
	int tmp = this1->DRAW_BUFFER7;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1063)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DRAW_BUFFER7,return )

int GLES3Context_Impl__obj::get_DRAW_BUFFER8( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DRAW_BUFFER8",0x4a79e5d0,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DRAW_BUFFER8","lime/graphics/opengl/GLES3Context.hx",1064,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1064)
	int tmp = this1->DRAW_BUFFER8;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1064)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DRAW_BUFFER8,return )

int GLES3Context_Impl__obj::get_DRAW_BUFFER9( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DRAW_BUFFER9",0x4a79e5d1,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DRAW_BUFFER9","lime/graphics/opengl/GLES3Context.hx",1065,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1065)
	int tmp = this1->DRAW_BUFFER9;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1065)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DRAW_BUFFER9,return )

int GLES3Context_Impl__obj::get_DRAW_BUFFER10( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DRAW_BUFFER10",0xe02f2a47,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DRAW_BUFFER10","lime/graphics/opengl/GLES3Context.hx",1066,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1066)
	int tmp = this1->DRAW_BUFFER10;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1066)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DRAW_BUFFER10,return )

int GLES3Context_Impl__obj::get_DRAW_BUFFER11( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DRAW_BUFFER11",0xe02f2a48,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DRAW_BUFFER11","lime/graphics/opengl/GLES3Context.hx",1067,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1067)
	int tmp = this1->DRAW_BUFFER11;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1067)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DRAW_BUFFER11,return )

int GLES3Context_Impl__obj::get_DRAW_BUFFER12( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DRAW_BUFFER12",0xe02f2a49,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DRAW_BUFFER12","lime/graphics/opengl/GLES3Context.hx",1068,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1068)
	int tmp = this1->DRAW_BUFFER12;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1068)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DRAW_BUFFER12,return )

int GLES3Context_Impl__obj::get_DRAW_BUFFER13( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DRAW_BUFFER13",0xe02f2a4a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DRAW_BUFFER13","lime/graphics/opengl/GLES3Context.hx",1069,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1069)
	int tmp = this1->DRAW_BUFFER13;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1069)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DRAW_BUFFER13,return )

int GLES3Context_Impl__obj::get_DRAW_BUFFER14( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DRAW_BUFFER14",0xe02f2a4b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DRAW_BUFFER14","lime/graphics/opengl/GLES3Context.hx",1070,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1070)
	int tmp = this1->DRAW_BUFFER14;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1070)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DRAW_BUFFER14,return )

int GLES3Context_Impl__obj::get_DRAW_BUFFER15( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DRAW_BUFFER15",0xe02f2a4c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DRAW_BUFFER15","lime/graphics/opengl/GLES3Context.hx",1071,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1071)
	int tmp = this1->DRAW_BUFFER15;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1071)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DRAW_BUFFER15,return )

int GLES3Context_Impl__obj::get_MAX_COLOR_ATTACHMENTS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_COLOR_ATTACHMENTS",0xb02b9fa6,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_COLOR_ATTACHMENTS","lime/graphics/opengl/GLES3Context.hx",1072,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1072)
	int tmp = this1->MAX_COLOR_ATTACHMENTS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1072)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_COLOR_ATTACHMENTS,return )

int GLES3Context_Impl__obj::get_COLOR_ATTACHMENT1( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_COLOR_ATTACHMENT1",0xf44ed8bf,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_COLOR_ATTACHMENT1","lime/graphics/opengl/GLES3Context.hx",1073,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1073)
	int tmp = this1->COLOR_ATTACHMENT1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1073)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_COLOR_ATTACHMENT1,return )

int GLES3Context_Impl__obj::get_COLOR_ATTACHMENT2( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_COLOR_ATTACHMENT2",0xf44ed8c0,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_COLOR_ATTACHMENT2","lime/graphics/opengl/GLES3Context.hx",1074,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1074)
	int tmp = this1->COLOR_ATTACHMENT2;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1074)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_COLOR_ATTACHMENT2,return )

int GLES3Context_Impl__obj::get_COLOR_ATTACHMENT3( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_COLOR_ATTACHMENT3",0xf44ed8c1,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_COLOR_ATTACHMENT3","lime/graphics/opengl/GLES3Context.hx",1075,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1075)
	int tmp = this1->COLOR_ATTACHMENT3;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1075)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_COLOR_ATTACHMENT3,return )

int GLES3Context_Impl__obj::get_COLOR_ATTACHMENT4( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_COLOR_ATTACHMENT4",0xf44ed8c2,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_COLOR_ATTACHMENT4","lime/graphics/opengl/GLES3Context.hx",1076,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1076)
	int tmp = this1->COLOR_ATTACHMENT4;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1076)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_COLOR_ATTACHMENT4,return )

int GLES3Context_Impl__obj::get_COLOR_ATTACHMENT5( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_COLOR_ATTACHMENT5",0xf44ed8c3,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_COLOR_ATTACHMENT5","lime/graphics/opengl/GLES3Context.hx",1077,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1077)
	int tmp = this1->COLOR_ATTACHMENT5;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1077)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_COLOR_ATTACHMENT5,return )

int GLES3Context_Impl__obj::get_COLOR_ATTACHMENT6( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_COLOR_ATTACHMENT6",0xf44ed8c4,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_COLOR_ATTACHMENT6","lime/graphics/opengl/GLES3Context.hx",1078,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1078)
	int tmp = this1->COLOR_ATTACHMENT6;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1078)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_COLOR_ATTACHMENT6,return )

int GLES3Context_Impl__obj::get_COLOR_ATTACHMENT7( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_COLOR_ATTACHMENT7",0xf44ed8c5,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_COLOR_ATTACHMENT7","lime/graphics/opengl/GLES3Context.hx",1079,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1079)
	int tmp = this1->COLOR_ATTACHMENT7;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1079)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_COLOR_ATTACHMENT7,return )

int GLES3Context_Impl__obj::get_COLOR_ATTACHMENT8( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_COLOR_ATTACHMENT8",0xf44ed8c6,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_COLOR_ATTACHMENT8","lime/graphics/opengl/GLES3Context.hx",1080,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1080)
	int tmp = this1->COLOR_ATTACHMENT8;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1080)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_COLOR_ATTACHMENT8,return )

int GLES3Context_Impl__obj::get_COLOR_ATTACHMENT9( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_COLOR_ATTACHMENT9",0xf44ed8c7,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_COLOR_ATTACHMENT9","lime/graphics/opengl/GLES3Context.hx",1081,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1081)
	int tmp = this1->COLOR_ATTACHMENT9;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1081)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_COLOR_ATTACHMENT9,return )

int GLES3Context_Impl__obj::get_COLOR_ATTACHMENT10( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_COLOR_ATTACHMENT10",0xd0aece91,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_COLOR_ATTACHMENT10","lime/graphics/opengl/GLES3Context.hx",1082,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1082)
	int tmp = this1->COLOR_ATTACHMENT10;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1082)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_COLOR_ATTACHMENT10,return )

int GLES3Context_Impl__obj::get_COLOR_ATTACHMENT11( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_COLOR_ATTACHMENT11",0xd0aece92,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_COLOR_ATTACHMENT11","lime/graphics/opengl/GLES3Context.hx",1083,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1083)
	int tmp = this1->COLOR_ATTACHMENT11;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1083)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_COLOR_ATTACHMENT11,return )

int GLES3Context_Impl__obj::get_COLOR_ATTACHMENT12( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_COLOR_ATTACHMENT12",0xd0aece93,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_COLOR_ATTACHMENT12","lime/graphics/opengl/GLES3Context.hx",1084,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1084)
	int tmp = this1->COLOR_ATTACHMENT12;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1084)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_COLOR_ATTACHMENT12,return )

int GLES3Context_Impl__obj::get_COLOR_ATTACHMENT13( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_COLOR_ATTACHMENT13",0xd0aece94,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_COLOR_ATTACHMENT13","lime/graphics/opengl/GLES3Context.hx",1085,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1085)
	int tmp = this1->COLOR_ATTACHMENT13;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1085)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_COLOR_ATTACHMENT13,return )

int GLES3Context_Impl__obj::get_COLOR_ATTACHMENT14( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_COLOR_ATTACHMENT14",0xd0aece95,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_COLOR_ATTACHMENT14","lime/graphics/opengl/GLES3Context.hx",1086,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1086)
	int tmp = this1->COLOR_ATTACHMENT14;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1086)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_COLOR_ATTACHMENT14,return )

int GLES3Context_Impl__obj::get_COLOR_ATTACHMENT15( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_COLOR_ATTACHMENT15",0xd0aece96,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_COLOR_ATTACHMENT15","lime/graphics/opengl/GLES3Context.hx",1087,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1087)
	int tmp = this1->COLOR_ATTACHMENT15;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1087)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_COLOR_ATTACHMENT15,return )

int GLES3Context_Impl__obj::get_SAMPLER_3D( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SAMPLER_3D",0x79622d3b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SAMPLER_3D","lime/graphics/opengl/GLES3Context.hx",1089,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1089)
	int tmp = this1->SAMPLER_3D;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1089)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SAMPLER_3D,return )

int GLES3Context_Impl__obj::get_SAMPLER_2D_SHADOW( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SAMPLER_2D_SHADOW",0xceb6dca3,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SAMPLER_2D_SHADOW","lime/graphics/opengl/GLES3Context.hx",1090,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1090)
	int tmp = this1->SAMPLER_2D_SHADOW;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1090)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SAMPLER_2D_SHADOW,return )

int GLES3Context_Impl__obj::get_SAMPLER_2D_ARRAY( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SAMPLER_2D_ARRAY",0xf066c616,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SAMPLER_2D_ARRAY","lime/graphics/opengl/GLES3Context.hx",1091,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1091)
	int tmp = this1->SAMPLER_2D_ARRAY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1091)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SAMPLER_2D_ARRAY,return )

int GLES3Context_Impl__obj::get_SAMPLER_2D_ARRAY_SHADOW( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SAMPLER_2D_ARRAY_SHADOW",0xb50e4e29,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SAMPLER_2D_ARRAY_SHADOW","lime/graphics/opengl/GLES3Context.hx",1092,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1092)
	int tmp = this1->SAMPLER_2D_ARRAY_SHADOW;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1092)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SAMPLER_2D_ARRAY_SHADOW,return )

int GLES3Context_Impl__obj::get_SAMPLER_CUBE_SHADOW( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SAMPLER_CUBE_SHADOW",0x9062d760,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SAMPLER_CUBE_SHADOW","lime/graphics/opengl/GLES3Context.hx",1093,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1093)
	int tmp = this1->SAMPLER_CUBE_SHADOW;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1093)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SAMPLER_CUBE_SHADOW,return )

int GLES3Context_Impl__obj::get_INT_SAMPLER_2D( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_INT_SAMPLER_2D",0x4dba1a8c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_INT_SAMPLER_2D","lime/graphics/opengl/GLES3Context.hx",1094,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1094)
	int tmp = this1->INT_SAMPLER_2D;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1094)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_INT_SAMPLER_2D,return )

int GLES3Context_Impl__obj::get_INT_SAMPLER_3D( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_INT_SAMPLER_3D",0x4dba1b6b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_INT_SAMPLER_3D","lime/graphics/opengl/GLES3Context.hx",1095,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1095)
	int tmp = this1->INT_SAMPLER_3D;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1095)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_INT_SAMPLER_3D,return )

int GLES3Context_Impl__obj::get_INT_SAMPLER_CUBE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_INT_SAMPLER_CUBE",0xcfa8962f,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_INT_SAMPLER_CUBE","lime/graphics/opengl/GLES3Context.hx",1096,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1096)
	int tmp = this1->INT_SAMPLER_CUBE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1096)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_INT_SAMPLER_CUBE,return )

int GLES3Context_Impl__obj::get_INT_SAMPLER_2D_ARRAY( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_INT_SAMPLER_2D_ARRAY",0xe06b7846,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_INT_SAMPLER_2D_ARRAY","lime/graphics/opengl/GLES3Context.hx",1097,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1097)
	int tmp = this1->INT_SAMPLER_2D_ARRAY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1097)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_INT_SAMPLER_2D_ARRAY,return )

int GLES3Context_Impl__obj::get_UNSIGNED_INT_SAMPLER_2D( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNSIGNED_INT_SAMPLER_2D",0x5d9c6bd0,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNSIGNED_INT_SAMPLER_2D","lime/graphics/opengl/GLES3Context.hx",1098,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1098)
	int tmp = this1->UNSIGNED_INT_SAMPLER_2D;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1098)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNSIGNED_INT_SAMPLER_2D,return )

int GLES3Context_Impl__obj::get_UNSIGNED_INT_SAMPLER_3D( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNSIGNED_INT_SAMPLER_3D",0x5d9c6caf,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNSIGNED_INT_SAMPLER_3D","lime/graphics/opengl/GLES3Context.hx",1099,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1099)
	int tmp = this1->UNSIGNED_INT_SAMPLER_3D;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1099)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNSIGNED_INT_SAMPLER_3D,return )

int GLES3Context_Impl__obj::get_UNSIGNED_INT_SAMPLER_CUBE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNSIGNED_INT_SAMPLER_CUBE",0x59b4c073,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNSIGNED_INT_SAMPLER_CUBE","lime/graphics/opengl/GLES3Context.hx",1100,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1100)
	int tmp = this1->UNSIGNED_INT_SAMPLER_CUBE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1100)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNSIGNED_INT_SAMPLER_CUBE,return )

int GLES3Context_Impl__obj::get_UNSIGNED_INT_SAMPLER_2D_ARRAY( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNSIGNED_INT_SAMPLER_2D_ARRAY",0x5c14148a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNSIGNED_INT_SAMPLER_2D_ARRAY","lime/graphics/opengl/GLES3Context.hx",1101,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1101)
	int tmp = this1->UNSIGNED_INT_SAMPLER_2D_ARRAY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1101)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNSIGNED_INT_SAMPLER_2D_ARRAY,return )

int GLES3Context_Impl__obj::get_MAX_SAMPLES( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_SAMPLES",0xc073c33b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_SAMPLES","lime/graphics/opengl/GLES3Context.hx",1102,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1102)
	int tmp = this1->MAX_SAMPLES;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1102)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_SAMPLES,return )

int GLES3Context_Impl__obj::get_SAMPLER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SAMPLER_BINDING",0x6f9f2a5b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SAMPLER_BINDING","lime/graphics/opengl/GLES3Context.hx",1103,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1103)
	int tmp = this1->SAMPLER_BINDING;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1103)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SAMPLER_BINDING,return )

int GLES3Context_Impl__obj::get_PIXEL_PACK_BUFFER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_PIXEL_PACK_BUFFER",0xf191445a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_PIXEL_PACK_BUFFER","lime/graphics/opengl/GLES3Context.hx",1105,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1105)
	int tmp = this1->PIXEL_PACK_BUFFER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1105)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_PIXEL_PACK_BUFFER,return )

int GLES3Context_Impl__obj::get_PIXEL_UNPACK_BUFFER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_PIXEL_UNPACK_BUFFER",0xc1f71ba1,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_PIXEL_UNPACK_BUFFER","lime/graphics/opengl/GLES3Context.hx",1106,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1106)
	int tmp = this1->PIXEL_UNPACK_BUFFER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1106)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_PIXEL_UNPACK_BUFFER,return )

int GLES3Context_Impl__obj::get_PIXEL_PACK_BUFFER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_PIXEL_PACK_BUFFER_BINDING",0xec0de700,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_PIXEL_PACK_BUFFER_BINDING","lime/graphics/opengl/GLES3Context.hx",1107,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1107)
	int tmp = this1->PIXEL_PACK_BUFFER_BINDING;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1107)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_PIXEL_PACK_BUFFER_BINDING,return )

int GLES3Context_Impl__obj::get_PIXEL_UNPACK_BUFFER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_PIXEL_UNPACK_BUFFER_BINDING",0x6996dd47,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_PIXEL_UNPACK_BUFFER_BINDING","lime/graphics/opengl/GLES3Context.hx",1108,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1108)
	int tmp = this1->PIXEL_UNPACK_BUFFER_BINDING;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1108)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_PIXEL_UNPACK_BUFFER_BINDING,return )

int GLES3Context_Impl__obj::get_COPY_READ_BUFFER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_COPY_READ_BUFFER",0x9b638dd2,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_COPY_READ_BUFFER","lime/graphics/opengl/GLES3Context.hx",1109,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1109)
	int tmp = this1->COPY_READ_BUFFER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1109)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_COPY_READ_BUFFER,return )

int GLES3Context_Impl__obj::get_COPY_WRITE_BUFFER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_COPY_WRITE_BUFFER",0x5235dbd7,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_COPY_WRITE_BUFFER","lime/graphics/opengl/GLES3Context.hx",1110,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1110)
	int tmp = this1->COPY_WRITE_BUFFER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1110)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_COPY_WRITE_BUFFER,return )

int GLES3Context_Impl__obj::get_COPY_READ_BUFFER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_COPY_READ_BUFFER_BINDING",0x6ffa6878,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_COPY_READ_BUFFER_BINDING","lime/graphics/opengl/GLES3Context.hx",1111,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1111)
	int tmp = this1->COPY_READ_BUFFER_BINDING;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1111)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_COPY_READ_BUFFER_BINDING,return )

int GLES3Context_Impl__obj::get_COPY_WRITE_BUFFER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_COPY_WRITE_BUFFER_BINDING",0xf581c37d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_COPY_WRITE_BUFFER_BINDING","lime/graphics/opengl/GLES3Context.hx",1112,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1112)
	int tmp = this1->COPY_WRITE_BUFFER_BINDING;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1112)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_COPY_WRITE_BUFFER_BINDING,return )

int GLES3Context_Impl__obj::get_FLOAT_MAT2x3( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FLOAT_MAT2x3",0x62303ba3,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FLOAT_MAT2x3","lime/graphics/opengl/GLES3Context.hx",1114,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1114)
	int tmp = this1->FLOAT_MAT2x3;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1114)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FLOAT_MAT2x3,return )

int GLES3Context_Impl__obj::get_FLOAT_MAT2x4( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FLOAT_MAT2x4",0x62303ba4,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FLOAT_MAT2x4","lime/graphics/opengl/GLES3Context.hx",1115,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1115)
	int tmp = this1->FLOAT_MAT2x4;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1115)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FLOAT_MAT2x4,return )

int GLES3Context_Impl__obj::get_FLOAT_MAT3x2( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FLOAT_MAT3x2",0x6230fde3,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FLOAT_MAT3x2","lime/graphics/opengl/GLES3Context.hx",1116,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1116)
	int tmp = this1->FLOAT_MAT3x2;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1116)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FLOAT_MAT3x2,return )

int GLES3Context_Impl__obj::get_FLOAT_MAT3x4( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FLOAT_MAT3x4",0x6230fde5,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FLOAT_MAT3x4","lime/graphics/opengl/GLES3Context.hx",1117,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1117)
	int tmp = this1->FLOAT_MAT3x4;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1117)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FLOAT_MAT3x4,return )

int GLES3Context_Impl__obj::get_FLOAT_MAT4x2( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FLOAT_MAT4x2",0x6231c024,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FLOAT_MAT4x2","lime/graphics/opengl/GLES3Context.hx",1118,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1118)
	int tmp = this1->FLOAT_MAT4x2;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1118)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FLOAT_MAT4x2,return )

int GLES3Context_Impl__obj::get_FLOAT_MAT4x3( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FLOAT_MAT4x3",0x6231c025,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FLOAT_MAT4x3","lime/graphics/opengl/GLES3Context.hx",1119,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1119)
	int tmp = this1->FLOAT_MAT4x3;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1119)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FLOAT_MAT4x3,return )

int GLES3Context_Impl__obj::get_UNSIGNED_INT_VEC2( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNSIGNED_INT_VEC2",0x5eff1205,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNSIGNED_INT_VEC2","lime/graphics/opengl/GLES3Context.hx",1120,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1120)
	int tmp = this1->UNSIGNED_INT_VEC2;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1120)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNSIGNED_INT_VEC2,return )

int GLES3Context_Impl__obj::get_UNSIGNED_INT_VEC3( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNSIGNED_INT_VEC3",0x5eff1206,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNSIGNED_INT_VEC3","lime/graphics/opengl/GLES3Context.hx",1121,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1121)
	int tmp = this1->UNSIGNED_INT_VEC3;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1121)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNSIGNED_INT_VEC3,return )

int GLES3Context_Impl__obj::get_UNSIGNED_INT_VEC4( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNSIGNED_INT_VEC4",0x5eff1207,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNSIGNED_INT_VEC4","lime/graphics/opengl/GLES3Context.hx",1122,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1122)
	int tmp = this1->UNSIGNED_INT_VEC4;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1122)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNSIGNED_INT_VEC4,return )

int GLES3Context_Impl__obj::get_UNSIGNED_NORMALIZED( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNSIGNED_NORMALIZED",0x464f39ce,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNSIGNED_NORMALIZED","lime/graphics/opengl/GLES3Context.hx",1123,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1123)
	int tmp = this1->UNSIGNED_NORMALIZED;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1123)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNSIGNED_NORMALIZED,return )

int GLES3Context_Impl__obj::get_SIGNED_NORMALIZED( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SIGNED_NORMALIZED",0xdb6f5b07,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SIGNED_NORMALIZED","lime/graphics/opengl/GLES3Context.hx",1124,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1124)
	int tmp = this1->SIGNED_NORMALIZED;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1124)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SIGNED_NORMALIZED,return )

int GLES3Context_Impl__obj::get_VERTEX_ATTRIB_ARRAY_INTEGER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_VERTEX_ATTRIB_ARRAY_INTEGER",0x998982eb,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_VERTEX_ATTRIB_ARRAY_INTEGER","lime/graphics/opengl/GLES3Context.hx",1126,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1126)
	int tmp = this1->VERTEX_ATTRIB_ARRAY_INTEGER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1126)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_VERTEX_ATTRIB_ARRAY_INTEGER,return )

int GLES3Context_Impl__obj::get_VERTEX_ATTRIB_ARRAY_DIVISOR( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_VERTEX_ATTRIB_ARRAY_DIVISOR",0xf3508a8b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_VERTEX_ATTRIB_ARRAY_DIVISOR","lime/graphics/opengl/GLES3Context.hx",1127,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1127)
	int tmp = this1->VERTEX_ATTRIB_ARRAY_DIVISOR;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1127)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_VERTEX_ATTRIB_ARRAY_DIVISOR,return )

int GLES3Context_Impl__obj::get_TRANSFORM_FEEDBACK_BUFFER_MODE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TRANSFORM_FEEDBACK_BUFFER_MODE",0x75cf5f2e,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TRANSFORM_FEEDBACK_BUFFER_MODE","lime/graphics/opengl/GLES3Context.hx",1129,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1129)
	int tmp = this1->TRANSFORM_FEEDBACK_BUFFER_MODE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1129)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TRANSFORM_FEEDBACK_BUFFER_MODE,return )

int GLES3Context_Impl__obj::get_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS",0xb0fe3db9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS","lime/graphics/opengl/GLES3Context.hx",1130,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1130)
	int tmp = this1->MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1130)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS,return )

int GLES3Context_Impl__obj::get_TRANSFORM_FEEDBACK_VARYINGS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TRANSFORM_FEEDBACK_VARYINGS",0x2a4d7997,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TRANSFORM_FEEDBACK_VARYINGS","lime/graphics/opengl/GLES3Context.hx",1131,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1131)
	int tmp = this1->TRANSFORM_FEEDBACK_VARYINGS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1131)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TRANSFORM_FEEDBACK_VARYINGS,return )

int GLES3Context_Impl__obj::get_TRANSFORM_FEEDBACK_BUFFER_START( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TRANSFORM_FEEDBACK_BUFFER_START",0x17573a17,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TRANSFORM_FEEDBACK_BUFFER_START","lime/graphics/opengl/GLES3Context.hx",1132,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1132)
	int tmp = this1->TRANSFORM_FEEDBACK_BUFFER_START;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1132)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TRANSFORM_FEEDBACK_BUFFER_START,return )

int GLES3Context_Impl__obj::get_TRANSFORM_FEEDBACK_BUFFER_SIZE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TRANSFORM_FEEDBACK_BUFFER_SIZE",0x79c22c8c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TRANSFORM_FEEDBACK_BUFFER_SIZE","lime/graphics/opengl/GLES3Context.hx",1133,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1133)
	int tmp = this1->TRANSFORM_FEEDBACK_BUFFER_SIZE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1133)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TRANSFORM_FEEDBACK_BUFFER_SIZE,return )

int GLES3Context_Impl__obj::get_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN",0x9d8e58b8,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN","lime/graphics/opengl/GLES3Context.hx",1134,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1134)
	int tmp = this1->TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1134)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN,return )

int GLES3Context_Impl__obj::get_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS",0x55b8e1a5,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS","lime/graphics/opengl/GLES3Context.hx",1135,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1135)
	int tmp = this1->MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1135)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS,return )

int GLES3Context_Impl__obj::get_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS",0x0a9f4546,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS","lime/graphics/opengl/GLES3Context.hx",1136,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1136)
	int tmp = this1->MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1136)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS,return )

int GLES3Context_Impl__obj::get_INTERLEAVED_ATTRIBS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_INTERLEAVED_ATTRIBS",0x5fbd9f20,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_INTERLEAVED_ATTRIBS","lime/graphics/opengl/GLES3Context.hx",1137,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1137)
	int tmp = this1->INTERLEAVED_ATTRIBS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1137)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_INTERLEAVED_ATTRIBS,return )

int GLES3Context_Impl__obj::get_SEPARATE_ATTRIBS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SEPARATE_ATTRIBS",0x2ceff440,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SEPARATE_ATTRIBS","lime/graphics/opengl/GLES3Context.hx",1138,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1138)
	int tmp = this1->SEPARATE_ATTRIBS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1138)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SEPARATE_ATTRIBS,return )

int GLES3Context_Impl__obj::get_TRANSFORM_FEEDBACK_BUFFER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TRANSFORM_FEEDBACK_BUFFER",0x32fc5f94,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TRANSFORM_FEEDBACK_BUFFER","lime/graphics/opengl/GLES3Context.hx",1139,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1139)
	int tmp = this1->TRANSFORM_FEEDBACK_BUFFER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1139)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TRANSFORM_FEEDBACK_BUFFER,return )

int GLES3Context_Impl__obj::get_TRANSFORM_FEEDBACK_BUFFER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TRANSFORM_FEEDBACK_BUFFER_BINDING",0x513dcc3a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TRANSFORM_FEEDBACK_BUFFER_BINDING","lime/graphics/opengl/GLES3Context.hx",1140,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1140)
	int tmp = this1->TRANSFORM_FEEDBACK_BUFFER_BINDING;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1140)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TRANSFORM_FEEDBACK_BUFFER_BINDING,return )

int GLES3Context_Impl__obj::get_TRANSFORM_FEEDBACK( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TRANSFORM_FEEDBACK",0xce958e6b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TRANSFORM_FEEDBACK","lime/graphics/opengl/GLES3Context.hx",1141,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1141)
	int tmp = this1->TRANSFORM_FEEDBACK;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1141)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TRANSFORM_FEEDBACK,return )

int GLES3Context_Impl__obj::get_TRANSFORM_FEEDBACK_PAUSED( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TRANSFORM_FEEDBACK_PAUSED",0x51ebe342,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TRANSFORM_FEEDBACK_PAUSED","lime/graphics/opengl/GLES3Context.hx",1142,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1142)
	int tmp = this1->TRANSFORM_FEEDBACK_PAUSED;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1142)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TRANSFORM_FEEDBACK_PAUSED,return )

int GLES3Context_Impl__obj::get_TRANSFORM_FEEDBACK_ACTIVE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TRANSFORM_FEEDBACK_ACTIVE",0x78ade45a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TRANSFORM_FEEDBACK_ACTIVE","lime/graphics/opengl/GLES3Context.hx",1143,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1143)
	int tmp = this1->TRANSFORM_FEEDBACK_ACTIVE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1143)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TRANSFORM_FEEDBACK_ACTIVE,return )

int GLES3Context_Impl__obj::get_TRANSFORM_FEEDBACK_BINDING( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TRANSFORM_FEEDBACK_BINDING",0x37742a11,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TRANSFORM_FEEDBACK_BINDING","lime/graphics/opengl/GLES3Context.hx",1144,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1144)
	int tmp = this1->TRANSFORM_FEEDBACK_BINDING;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1144)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TRANSFORM_FEEDBACK_BINDING,return )

int GLES3Context_Impl__obj::get_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING",0x01753c06,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING","lime/graphics/opengl/GLES3Context.hx",1146,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1146)
	int tmp = this1->FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1146)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING,return )

int GLES3Context_Impl__obj::get_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE",0x8e45ae53,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE","lime/graphics/opengl/GLES3Context.hx",1147,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1147)
	int tmp = this1->FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1147)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE,return )

int GLES3Context_Impl__obj::get_FRAMEBUFFER_ATTACHMENT_RED_SIZE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FRAMEBUFFER_ATTACHMENT_RED_SIZE",0x8bcc2c06,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FRAMEBUFFER_ATTACHMENT_RED_SIZE","lime/graphics/opengl/GLES3Context.hx",1148,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1148)
	int tmp = this1->FRAMEBUFFER_ATTACHMENT_RED_SIZE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1148)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FRAMEBUFFER_ATTACHMENT_RED_SIZE,return )

int GLES3Context_Impl__obj::get_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE",0x51b21914,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE","lime/graphics/opengl/GLES3Context.hx",1149,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1149)
	int tmp = this1->FRAMEBUFFER_ATTACHMENT_GREEN_SIZE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1149)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE,return )

int GLES3Context_Impl__obj::get_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE",0x7528adaf,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE","lime/graphics/opengl/GLES3Context.hx",1150,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1150)
	int tmp = this1->FRAMEBUFFER_ATTACHMENT_BLUE_SIZE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1150)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE,return )

int GLES3Context_Impl__obj::get_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE",0x9d926e99,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE","lime/graphics/opengl/GLES3Context.hx",1151,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1151)
	int tmp = this1->FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1151)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE,return )

int GLES3Context_Impl__obj::get_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE",0xd9590ed4,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE","lime/graphics/opengl/GLES3Context.hx",1152,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1152)
	int tmp = this1->FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1152)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE,return )

int GLES3Context_Impl__obj::get_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE",0x081d2afb,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE","lime/graphics/opengl/GLES3Context.hx",1153,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1153)
	int tmp = this1->FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1153)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE,return )

int GLES3Context_Impl__obj::get_FRAMEBUFFER_DEFAULT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FRAMEBUFFER_DEFAULT",0x72aad73c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FRAMEBUFFER_DEFAULT","lime/graphics/opengl/GLES3Context.hx",1154,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1154)
	int tmp = this1->FRAMEBUFFER_DEFAULT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1154)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FRAMEBUFFER_DEFAULT,return )

int GLES3Context_Impl__obj::get_DEPTH24_STENCIL8( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DEPTH24_STENCIL8",0xdd2860c9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DEPTH24_STENCIL8","lime/graphics/opengl/GLES3Context.hx",1155,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1155)
	int tmp = this1->DEPTH24_STENCIL8;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1155)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DEPTH24_STENCIL8,return )

int GLES3Context_Impl__obj::get_DRAW_FRAMEBUFFER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DRAW_FRAMEBUFFER_BINDING",0xca7be10b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DRAW_FRAMEBUFFER_BINDING","lime/graphics/opengl/GLES3Context.hx",1156,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1156)
	int tmp = this1->DRAW_FRAMEBUFFER_BINDING;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1156)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DRAW_FRAMEBUFFER_BINDING,return )

int GLES3Context_Impl__obj::get_READ_FRAMEBUFFER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_READ_FRAMEBUFFER",0xd7628db7,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_READ_FRAMEBUFFER","lime/graphics/opengl/GLES3Context.hx",1157,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1157)
	int tmp = this1->READ_FRAMEBUFFER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1157)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_READ_FRAMEBUFFER,return )

int GLES3Context_Impl__obj::get_DRAW_FRAMEBUFFER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DRAW_FRAMEBUFFER",0xb0d0bb65,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DRAW_FRAMEBUFFER","lime/graphics/opengl/GLES3Context.hx",1158,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1158)
	int tmp = this1->DRAW_FRAMEBUFFER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1158)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DRAW_FRAMEBUFFER,return )

int GLES3Context_Impl__obj::get_READ_FRAMEBUFFER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_READ_FRAMEBUFFER_BINDING",0x0383555d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_READ_FRAMEBUFFER_BINDING","lime/graphics/opengl/GLES3Context.hx",1159,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1159)
	int tmp = this1->READ_FRAMEBUFFER_BINDING;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1159)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_READ_FRAMEBUFFER_BINDING,return )

int GLES3Context_Impl__obj::get_RENDERBUFFER_SAMPLES( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_RENDERBUFFER_SAMPLES",0xf08ea553,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_RENDERBUFFER_SAMPLES","lime/graphics/opengl/GLES3Context.hx",1160,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1160)
	int tmp = this1->RENDERBUFFER_SAMPLES;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1160)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_RENDERBUFFER_SAMPLES,return )

int GLES3Context_Impl__obj::get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER",0x36c2e656,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER","lime/graphics/opengl/GLES3Context.hx",1161,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1161)
	int tmp = this1->FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1161)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER,return )

int GLES3Context_Impl__obj::get_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE",0x8c8ff3a7,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE","lime/graphics/opengl/GLES3Context.hx",1162,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1162)
	int tmp = this1->FRAMEBUFFER_INCOMPLETE_MULTISAMPLE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1162)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE,return )

int GLES3Context_Impl__obj::get_UNIFORM_BUFFER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNIFORM_BUFFER",0xa45e17de,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNIFORM_BUFFER","lime/graphics/opengl/GLES3Context.hx",1164,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1164)
	int tmp = this1->UNIFORM_BUFFER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1164)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNIFORM_BUFFER,return )

int GLES3Context_Impl__obj::get_UNIFORM_BUFFER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNIFORM_BUFFER_BINDING",0x08dfde84,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNIFORM_BUFFER_BINDING","lime/graphics/opengl/GLES3Context.hx",1165,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1165)
	int tmp = this1->UNIFORM_BUFFER_BINDING;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1165)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNIFORM_BUFFER_BINDING,return )

int GLES3Context_Impl__obj::get_UNIFORM_BUFFER_START( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNIFORM_BUFFER_START",0xba0745e1,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNIFORM_BUFFER_START","lime/graphics/opengl/GLES3Context.hx",1166,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1166)
	int tmp = this1->UNIFORM_BUFFER_START;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1166)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNIFORM_BUFFER_START,return )

int GLES3Context_Impl__obj::get_UNIFORM_BUFFER_SIZE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNIFORM_BUFFER_SIZE",0xa98e2802,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNIFORM_BUFFER_SIZE","lime/graphics/opengl/GLES3Context.hx",1167,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1167)
	int tmp = this1->UNIFORM_BUFFER_SIZE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1167)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNIFORM_BUFFER_SIZE,return )

int GLES3Context_Impl__obj::get_MAX_VERTEX_UNIFORM_BLOCKS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_VERTEX_UNIFORM_BLOCKS",0x0b73e91e,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_VERTEX_UNIFORM_BLOCKS","lime/graphics/opengl/GLES3Context.hx",1168,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1168)
	int tmp = this1->MAX_VERTEX_UNIFORM_BLOCKS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1168)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_VERTEX_UNIFORM_BLOCKS,return )

int GLES3Context_Impl__obj::get_MAX_FRAGMENT_UNIFORM_BLOCKS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_FRAGMENT_UNIFORM_BLOCKS",0xf81872b2,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_FRAGMENT_UNIFORM_BLOCKS","lime/graphics/opengl/GLES3Context.hx",1169,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1169)
	int tmp = this1->MAX_FRAGMENT_UNIFORM_BLOCKS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1169)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_FRAGMENT_UNIFORM_BLOCKS,return )

int GLES3Context_Impl__obj::get_MAX_COMBINED_UNIFORM_BLOCKS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_COMBINED_UNIFORM_BLOCKS",0x8260f11d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_COMBINED_UNIFORM_BLOCKS","lime/graphics/opengl/GLES3Context.hx",1170,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1170)
	int tmp = this1->MAX_COMBINED_UNIFORM_BLOCKS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1170)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_COMBINED_UNIFORM_BLOCKS,return )

int GLES3Context_Impl__obj::get_MAX_UNIFORM_BUFFER_BINDINGS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_UNIFORM_BUFFER_BINDINGS",0x5dbc7dd4,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_UNIFORM_BUFFER_BINDINGS","lime/graphics/opengl/GLES3Context.hx",1171,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1171)
	int tmp = this1->MAX_UNIFORM_BUFFER_BINDINGS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1171)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_UNIFORM_BUFFER_BINDINGS,return )

int GLES3Context_Impl__obj::get_MAX_UNIFORM_BLOCK_SIZE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_UNIFORM_BLOCK_SIZE",0x0ff28fcc,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_UNIFORM_BLOCK_SIZE","lime/graphics/opengl/GLES3Context.hx",1172,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1172)
	int tmp = this1->MAX_UNIFORM_BLOCK_SIZE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1172)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_UNIFORM_BLOCK_SIZE,return )

int GLES3Context_Impl__obj::get_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS",0x01c200d0,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS","lime/graphics/opengl/GLES3Context.hx",1173,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1173)
	int tmp = this1->MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1173)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS,return )

int GLES3Context_Impl__obj::get_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS",0xfd27f0e4,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS","lime/graphics/opengl/GLES3Context.hx",1174,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1174)
	int tmp = this1->MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1174)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS,return )

int GLES3Context_Impl__obj::get_UNIFORM_BUFFER_OFFSET_ALIGNMENT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNIFORM_BUFFER_OFFSET_ALIGNMENT",0x67c08498,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNIFORM_BUFFER_OFFSET_ALIGNMENT","lime/graphics/opengl/GLES3Context.hx",1175,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1175)
	int tmp = this1->UNIFORM_BUFFER_OFFSET_ALIGNMENT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1175)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNIFORM_BUFFER_OFFSET_ALIGNMENT,return )

int GLES3Context_Impl__obj::get_ACTIVE_UNIFORM_BLOCKS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_ACTIVE_UNIFORM_BLOCKS",0xb65ff3b7,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_ACTIVE_UNIFORM_BLOCKS","lime/graphics/opengl/GLES3Context.hx",1176,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1176)
	int tmp = this1->ACTIVE_UNIFORM_BLOCKS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1176)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_ACTIVE_UNIFORM_BLOCKS,return )

int GLES3Context_Impl__obj::get_UNIFORM_TYPE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNIFORM_TYPE",0xe6ac5618,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNIFORM_TYPE","lime/graphics/opengl/GLES3Context.hx",1177,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1177)
	int tmp = this1->UNIFORM_TYPE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1177)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNIFORM_TYPE,return )

int GLES3Context_Impl__obj::get_UNIFORM_SIZE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNIFORM_SIZE",0xe5f7041f,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNIFORM_SIZE","lime/graphics/opengl/GLES3Context.hx",1178,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1178)
	int tmp = this1->UNIFORM_SIZE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1178)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNIFORM_SIZE,return )

int GLES3Context_Impl__obj::get_UNIFORM_BLOCK_INDEX( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNIFORM_BLOCK_INDEX",0x23d71382,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNIFORM_BLOCK_INDEX","lime/graphics/opengl/GLES3Context.hx",1179,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1179)
	int tmp = this1->UNIFORM_BLOCK_INDEX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1179)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNIFORM_BLOCK_INDEX,return )

int GLES3Context_Impl__obj::get_UNIFORM_OFFSET( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNIFORM_OFFSET",0x3408f271,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNIFORM_OFFSET","lime/graphics/opengl/GLES3Context.hx",1180,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1180)
	int tmp = this1->UNIFORM_OFFSET;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1180)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNIFORM_OFFSET,return )

int GLES3Context_Impl__obj::get_UNIFORM_ARRAY_STRIDE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNIFORM_ARRAY_STRIDE",0x34ccf2bd,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNIFORM_ARRAY_STRIDE","lime/graphics/opengl/GLES3Context.hx",1181,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1181)
	int tmp = this1->UNIFORM_ARRAY_STRIDE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1181)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNIFORM_ARRAY_STRIDE,return )

int GLES3Context_Impl__obj::get_UNIFORM_MATRIX_STRIDE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNIFORM_MATRIX_STRIDE",0xa6783e79,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNIFORM_MATRIX_STRIDE","lime/graphics/opengl/GLES3Context.hx",1182,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1182)
	int tmp = this1->UNIFORM_MATRIX_STRIDE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1182)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNIFORM_MATRIX_STRIDE,return )

int GLES3Context_Impl__obj::get_UNIFORM_IS_ROW_MAJOR( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNIFORM_IS_ROW_MAJOR",0xba111f5d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNIFORM_IS_ROW_MAJOR","lime/graphics/opengl/GLES3Context.hx",1183,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1183)
	int tmp = this1->UNIFORM_IS_ROW_MAJOR;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1183)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNIFORM_IS_ROW_MAJOR,return )

int GLES3Context_Impl__obj::get_UNIFORM_BLOCK_BINDING( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNIFORM_BLOCK_BINDING",0xb4d2e3b5,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNIFORM_BLOCK_BINDING","lime/graphics/opengl/GLES3Context.hx",1184,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1184)
	int tmp = this1->UNIFORM_BLOCK_BINDING;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1184)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNIFORM_BLOCK_BINDING,return )

int GLES3Context_Impl__obj::get_UNIFORM_BLOCK_DATA_SIZE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNIFORM_BLOCK_DATA_SIZE",0x0af996c6,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNIFORM_BLOCK_DATA_SIZE","lime/graphics/opengl/GLES3Context.hx",1185,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1185)
	int tmp = this1->UNIFORM_BLOCK_DATA_SIZE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1185)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNIFORM_BLOCK_DATA_SIZE,return )

int GLES3Context_Impl__obj::get_UNIFORM_BLOCK_ACTIVE_UNIFORMS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNIFORM_BLOCK_ACTIVE_UNIFORMS",0xbcfb1228,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNIFORM_BLOCK_ACTIVE_UNIFORMS","lime/graphics/opengl/GLES3Context.hx",1186,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1186)
	int tmp = this1->UNIFORM_BLOCK_ACTIVE_UNIFORMS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1186)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNIFORM_BLOCK_ACTIVE_UNIFORMS,return )

int GLES3Context_Impl__obj::get_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES",0x35d27753,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES","lime/graphics/opengl/GLES3Context.hx",1187,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1187)
	int tmp = this1->UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1187)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES,return )

int GLES3Context_Impl__obj::get_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER",0xf3c9cace,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER","lime/graphics/opengl/GLES3Context.hx",1188,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1188)
	int tmp = this1->UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1188)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER,return )

int GLES3Context_Impl__obj::get_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER",0x9edb1f62,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER","lime/graphics/opengl/GLES3Context.hx",1189,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1189)
	int tmp = this1->UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1189)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER,return )

int GLES3Context_Impl__obj::get_OBJECT_TYPE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_OBJECT_TYPE",0x897d5dc7,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_OBJECT_TYPE","lime/graphics/opengl/GLES3Context.hx",1191,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1191)
	int tmp = this1->OBJECT_TYPE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1191)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_OBJECT_TYPE,return )

int GLES3Context_Impl__obj::get_SYNC_CONDITION( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SYNC_CONDITION",0x29901f2a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SYNC_CONDITION","lime/graphics/opengl/GLES3Context.hx",1192,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1192)
	int tmp = this1->SYNC_CONDITION;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1192)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SYNC_CONDITION,return )

int GLES3Context_Impl__obj::get_SYNC_STATUS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SYNC_STATUS",0x710afa23,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SYNC_STATUS","lime/graphics/opengl/GLES3Context.hx",1193,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1193)
	int tmp = this1->SYNC_STATUS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1193)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SYNC_STATUS,return )

int GLES3Context_Impl__obj::get_SYNC_FLAGS( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SYNC_FLAGS",0x84bfe556,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SYNC_FLAGS","lime/graphics/opengl/GLES3Context.hx",1194,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1194)
	int tmp = this1->SYNC_FLAGS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1194)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SYNC_FLAGS,return )

int GLES3Context_Impl__obj::get_SYNC_FENCE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SYNC_FENCE",0x802940c0,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SYNC_FENCE","lime/graphics/opengl/GLES3Context.hx",1195,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1195)
	int tmp = this1->SYNC_FENCE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1195)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SYNC_FENCE,return )

int GLES3Context_Impl__obj::get_SYNC_GPU_COMMANDS_COMPLETE( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SYNC_GPU_COMMANDS_COMPLETE",0x4de53c4c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SYNC_GPU_COMMANDS_COMPLETE","lime/graphics/opengl/GLES3Context.hx",1196,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1196)
	int tmp = this1->SYNC_GPU_COMMANDS_COMPLETE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1196)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SYNC_GPU_COMMANDS_COMPLETE,return )

int GLES3Context_Impl__obj::get_UNSIGNALED( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_UNSIGNALED",0x07d94e73,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_UNSIGNALED","lime/graphics/opengl/GLES3Context.hx",1197,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1197)
	int tmp = this1->UNSIGNALED;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1197)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_UNSIGNALED,return )

int GLES3Context_Impl__obj::get_SIGNALED( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SIGNALED",0x6786385a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SIGNALED","lime/graphics/opengl/GLES3Context.hx",1198,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1198)
	int tmp = this1->SIGNALED;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1198)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SIGNALED,return )

int GLES3Context_Impl__obj::get_ALREADY_SIGNALED( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_ALREADY_SIGNALED",0x19b1e041,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_ALREADY_SIGNALED","lime/graphics/opengl/GLES3Context.hx",1199,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1199)
	int tmp = this1->ALREADY_SIGNALED;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1199)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_ALREADY_SIGNALED,return )

int GLES3Context_Impl__obj::get_TIMEOUT_EXPIRED( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TIMEOUT_EXPIRED",0x1a2e1554,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TIMEOUT_EXPIRED","lime/graphics/opengl/GLES3Context.hx",1200,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1200)
	int tmp = this1->TIMEOUT_EXPIRED;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1200)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TIMEOUT_EXPIRED,return )

int GLES3Context_Impl__obj::get_CONDITION_SATISFIED( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_CONDITION_SATISFIED",0x40a6421b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_CONDITION_SATISFIED","lime/graphics/opengl/GLES3Context.hx",1201,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1201)
	int tmp = this1->CONDITION_SATISFIED;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1201)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_CONDITION_SATISFIED,return )

int GLES3Context_Impl__obj::get_WAIT_FAILED( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_WAIT_FAILED",0xfd2ecfd4,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_WAIT_FAILED","lime/graphics/opengl/GLES3Context.hx",1202,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1202)
	int tmp = this1->WAIT_FAILED;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1202)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_WAIT_FAILED,return )

int GLES3Context_Impl__obj::get_SYNC_FLUSH_COMMANDS_BIT( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_SYNC_FLUSH_COMMANDS_BIT",0x5fd68ca2,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_SYNC_FLUSH_COMMANDS_BIT","lime/graphics/opengl/GLES3Context.hx",1203,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1203)
	int tmp = this1->SYNC_FLUSH_COMMANDS_BIT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1203)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_SYNC_FLUSH_COMMANDS_BIT,return )

int GLES3Context_Impl__obj::get_COLOR( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_COLOR",0xb2e0c7d0,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_COLOR","lime/graphics/opengl/GLES3Context.hx",1205,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1205)
	int tmp = this1->COLOR;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1205)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_COLOR,return )

int GLES3Context_Impl__obj::get_DEPTH( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DEPTH",0x3fae4770,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DEPTH","lime/graphics/opengl/GLES3Context.hx",1206,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1206)
	int tmp = this1->DEPTH;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1206)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DEPTH,return )

int GLES3Context_Impl__obj::get_STENCIL( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STENCIL",0x531c2da9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STENCIL","lime/graphics/opengl/GLES3Context.hx",1207,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1207)
	int tmp = this1->STENCIL;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1207)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STENCIL,return )

int GLES3Context_Impl__obj::get_MIN( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MIN",0x43981ebf,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MIN","lime/graphics/opengl/GLES3Context.hx",1208,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1208)
	int tmp = this1->MIN;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1208)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MIN,return )

int GLES3Context_Impl__obj::get_MAX( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX",0x439817d1,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX","lime/graphics/opengl/GLES3Context.hx",1209,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1209)
	int tmp = this1->MAX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1209)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX,return )

int GLES3Context_Impl__obj::get_DEPTH_COMPONENT24( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DEPTH_COMPONENT24",0xb0b90b10,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DEPTH_COMPONENT24","lime/graphics/opengl/GLES3Context.hx",1210,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1210)
	int tmp = this1->DEPTH_COMPONENT24;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1210)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DEPTH_COMPONENT24,return )

int GLES3Context_Impl__obj::get_STREAM_READ( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STREAM_READ",0x88b2a502,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STREAM_READ","lime/graphics/opengl/GLES3Context.hx",1211,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1211)
	int tmp = this1->STREAM_READ;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1211)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STREAM_READ,return )

int GLES3Context_Impl__obj::get_STREAM_COPY( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STREAM_COPY",0x7ed01561,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STREAM_COPY","lime/graphics/opengl/GLES3Context.hx",1212,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1212)
	int tmp = this1->STREAM_COPY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1212)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STREAM_COPY,return )

int GLES3Context_Impl__obj::get_STATIC_READ( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STATIC_READ",0x2db97614,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STATIC_READ","lime/graphics/opengl/GLES3Context.hx",1213,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1213)
	int tmp = this1->STATIC_READ;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1213)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STATIC_READ,return )

int GLES3Context_Impl__obj::get_STATIC_COPY( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_STATIC_COPY",0x23d6e673,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_STATIC_COPY","lime/graphics/opengl/GLES3Context.hx",1214,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1214)
	int tmp = this1->STATIC_COPY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1214)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_STATIC_COPY,return )

int GLES3Context_Impl__obj::get_DYNAMIC_READ( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DYNAMIC_READ",0xcba8a089,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DYNAMIC_READ","lime/graphics/opengl/GLES3Context.hx",1215,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1215)
	int tmp = this1->DYNAMIC_READ;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1215)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DYNAMIC_READ,return )

int GLES3Context_Impl__obj::get_DYNAMIC_COPY( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DYNAMIC_COPY",0xc1c610e8,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DYNAMIC_COPY","lime/graphics/opengl/GLES3Context.hx",1216,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1216)
	int tmp = this1->DYNAMIC_COPY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1216)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DYNAMIC_COPY,return )

int GLES3Context_Impl__obj::get_DEPTH_COMPONENT32F( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DEPTH_COMPONENT32F",0xf13163b9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DEPTH_COMPONENT32F","lime/graphics/opengl/GLES3Context.hx",1217,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1217)
	int tmp = this1->DEPTH_COMPONENT32F;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1217)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DEPTH_COMPONENT32F,return )

int GLES3Context_Impl__obj::get_DEPTH32F_STENCIL8( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_DEPTH32F_STENCIL8",0xf1024604,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_DEPTH32F_STENCIL8","lime/graphics/opengl/GLES3Context.hx",1218,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1218)
	int tmp = this1->DEPTH32F_STENCIL8;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1218)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_DEPTH32F_STENCIL8,return )

int GLES3Context_Impl__obj::get_INVALID_INDEX( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_INVALID_INDEX",0x265df7d7,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_INVALID_INDEX","lime/graphics/opengl/GLES3Context.hx",1219,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1219)
	int tmp = this1->INVALID_INDEX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1219)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_INVALID_INDEX,return )

int GLES3Context_Impl__obj::get_TIMEOUT_IGNORED( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_TIMEOUT_IGNORED",0xd19cecc1,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_TIMEOUT_IGNORED","lime/graphics/opengl/GLES3Context.hx",1220,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1220)
	int tmp = this1->TIMEOUT_IGNORED;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1220)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_TIMEOUT_IGNORED,return )

int GLES3Context_Impl__obj::get_MAX_CLIENT_WAIT_TIMEOUT_WEBGL( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","get_MAX_CLIENT_WAIT_TIMEOUT_WEBGL",0x238fd517,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.get_MAX_CLIENT_WAIT_TIMEOUT_WEBGL","lime/graphics/opengl/GLES3Context.hx",1221,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1221)
	int tmp = this1->MAX_CLIENT_WAIT_TIMEOUT_WEBGL;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1221)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,get_MAX_CLIENT_WAIT_TIMEOUT_WEBGL,return )

Void GLES3Context_Impl__obj::activeTexture( ::lime::_backend::native::NativeGLRenderContext this1,int texture){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","activeTexture",0xb7c328eb,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.activeTexture","lime/graphics/opengl/GLES3Context.hx",1224,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(1226)
		int tmp = texture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1226)
		this1->activeTexture(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,activeTexture,(void))

Void GLES3Context_Impl__obj::attachShader( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,::lime::graphics::opengl::GLObject shader){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","attachShader",0x8621d454,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.attachShader","lime/graphics/opengl/GLES3Context.hx",1231,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(1233)
		::lime::graphics::opengl::GLObject tmp = program;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1233)
		::lime::graphics::opengl::GLObject tmp1 = shader;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1233)
		this1->attachShader(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,attachShader,(void))

Void GLES3Context_Impl__obj::beginQuery( ::lime::_backend::native::NativeGLRenderContext this1,int target,::lime::graphics::opengl::GLObject query){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","beginQuery",0x3bf0c929,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.beginQuery","lime/graphics/opengl/GLES3Context.hx",1238,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(query,"query")
		HX_STACK_LINE(1240)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1240)
		::lime::graphics::opengl::GLObject tmp1 = query;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1240)
		this1->beginQuery(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,beginQuery,(void))

Void GLES3Context_Impl__obj::beginTransformFeedback( ::lime::_backend::native::NativeGLRenderContext this1,int primitiveNode){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","beginTransformFeedback",0xac0d41b2,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.beginTransformFeedback","lime/graphics/opengl/GLES3Context.hx",1245,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(primitiveNode,"primitiveNode")
		HX_STACK_LINE(1247)
		int tmp = primitiveNode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1247)
		this1->beginTransformFeedback(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,beginTransformFeedback,(void))

Void GLES3Context_Impl__obj::bindAttribLocation( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int index,::String name){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","bindAttribLocation",0x3850ed46,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.bindAttribLocation","lime/graphics/opengl/GLES3Context.hx",1252,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(1254)
		::lime::graphics::opengl::GLObject tmp = program;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1254)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1254)
		::String tmp2 = name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1254)
		this1->bindAttribLocation(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,bindAttribLocation,(void))

Void GLES3Context_Impl__obj::bindBuffer( ::lime::_backend::native::NativeGLRenderContext this1,int target,::lime::graphics::opengl::GLObject buffer){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","bindBuffer",0x60fbbfa7,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.bindBuffer","lime/graphics/opengl/GLES3Context.hx",1259,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(1261)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1261)
		::lime::graphics::opengl::GLObject tmp1 = buffer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1261)
		this1->bindBuffer(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,bindBuffer,(void))

Void GLES3Context_Impl__obj::bindBufferBase( ::lime::_backend::native::NativeGLRenderContext this1,int target,int index,::lime::graphics::opengl::GLObject buffer){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","bindBufferBase",0xd71c3358,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.bindBufferBase","lime/graphics/opengl/GLES3Context.hx",1268,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(1268)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,bindBufferBase,(void))

Void GLES3Context_Impl__obj::bindBufferRange( ::lime::_backend::native::NativeGLRenderContext this1,int target,int index,::lime::graphics::opengl::GLObject buffer,Float offset,int size){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","bindBufferRange",0x97f63896,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.bindBufferRange","lime/graphics/opengl/GLES3Context.hx",1275,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(size,"size")
		HX_STACK_LINE(1275)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GLES3Context_Impl__obj,bindBufferRange,(void))

Void GLES3Context_Impl__obj::bindFramebuffer( ::lime::_backend::native::NativeGLRenderContext this1,int target,::lime::graphics::opengl::GLObject framebuffer){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","bindFramebuffer",0x90d314e6,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.bindFramebuffer","lime/graphics/opengl/GLES3Context.hx",1280,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(framebuffer,"framebuffer")
		HX_STACK_LINE(1282)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1282)
		::lime::graphics::opengl::GLObject tmp1 = framebuffer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1282)
		this1->bindFramebuffer(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,bindFramebuffer,(void))

Void GLES3Context_Impl__obj::bindRenderbuffer( ::lime::_backend::native::NativeGLRenderContext this1,int target,::lime::graphics::opengl::GLObject renderbuffer){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","bindRenderbuffer",0xae6b46bd,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.bindRenderbuffer","lime/graphics/opengl/GLES3Context.hx",1287,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(renderbuffer,"renderbuffer")
		HX_STACK_LINE(1289)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1289)
		::lime::graphics::opengl::GLObject tmp1 = renderbuffer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1289)
		this1->bindRenderbuffer(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,bindRenderbuffer,(void))

Void GLES3Context_Impl__obj::bindSampler( ::lime::_backend::native::NativeGLRenderContext this1,int unit,::lime::graphics::opengl::GLObject sampler){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","bindSampler",0x4d851481,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.bindSampler","lime/graphics/opengl/GLES3Context.hx",1296,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(unit,"unit")
		HX_STACK_ARG(sampler,"sampler")
		HX_STACK_LINE(1296)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,bindSampler,(void))

Void GLES3Context_Impl__obj::bindTexture( ::lime::_backend::native::NativeGLRenderContext this1,int target,::lime::graphics::opengl::GLObject texture){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","bindTexture",0x689c1854,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.bindTexture","lime/graphics/opengl/GLES3Context.hx",1301,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(1303)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1303)
		::lime::graphics::opengl::GLObject tmp1 = texture;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1303)
		this1->bindTexture(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,bindTexture,(void))

Void GLES3Context_Impl__obj::bindTransformFeedback( ::lime::_backend::native::NativeGLRenderContext this1,int target,::lime::graphics::opengl::GLObject transformFeedback){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","bindTransformFeedback",0x2e8696ca,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.bindTransformFeedback","lime/graphics/opengl/GLES3Context.hx",1310,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(transformFeedback,"transformFeedback")
		HX_STACK_LINE(1310)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,bindTransformFeedback,(void))

Void GLES3Context_Impl__obj::bindVertexArray( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject vertexArray){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","bindVertexArray",0x5056378e,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.bindVertexArray","lime/graphics/opengl/GLES3Context.hx",1317,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(vertexArray,"vertexArray")
		HX_STACK_LINE(1317)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,bindVertexArray,(void))

Void GLES3Context_Impl__obj::blendColor( ::lime::_backend::native::NativeGLRenderContext this1,Float red,Float green,Float blue,Float alpha){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","blendColor",0x4af1605c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.blendColor","lime/graphics/opengl/GLES3Context.hx",1322,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(1324)
		Float tmp = red;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1324)
		Float tmp1 = green;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1324)
		Float tmp2 = blue;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1324)
		Float tmp3 = alpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1324)
		this1->blendColor(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,blendColor,(void))

Void GLES3Context_Impl__obj::blendEquation( ::lime::_backend::native::NativeGLRenderContext this1,int mode){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","blendEquation",0x63c6ae33,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.blendEquation","lime/graphics/opengl/GLES3Context.hx",1329,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(1331)
		int tmp = mode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1331)
		this1->blendEquation(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,blendEquation,(void))

Void GLES3Context_Impl__obj::blendEquationSeparate( ::lime::_backend::native::NativeGLRenderContext this1,int modeRGB,int modeAlpha){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","blendEquationSeparate",0x960a74b6,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.blendEquationSeparate","lime/graphics/opengl/GLES3Context.hx",1336,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(modeRGB,"modeRGB")
		HX_STACK_ARG(modeAlpha,"modeAlpha")
		HX_STACK_LINE(1338)
		int tmp = modeRGB;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1338)
		int tmp1 = modeAlpha;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1338)
		this1->blendEquationSeparate(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,blendEquationSeparate,(void))

Void GLES3Context_Impl__obj::blendFunc( ::lime::_backend::native::NativeGLRenderContext this1,int sfactor,int dfactor){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","blendFunc",0xae88be6b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.blendFunc","lime/graphics/opengl/GLES3Context.hx",1343,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(sfactor,"sfactor")
		HX_STACK_ARG(dfactor,"dfactor")
		HX_STACK_LINE(1345)
		int tmp = sfactor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1345)
		int tmp1 = dfactor;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1345)
		this1->blendFunc(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,blendFunc,(void))

Void GLES3Context_Impl__obj::blendFuncSeparate( ::lime::_backend::native::NativeGLRenderContext this1,int srcRGB,int dstRGB,int srcAlpha,int dstAlpha){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","blendFuncSeparate",0xae2b7cee,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.blendFuncSeparate","lime/graphics/opengl/GLES3Context.hx",1350,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(srcRGB,"srcRGB")
		HX_STACK_ARG(dstRGB,"dstRGB")
		HX_STACK_ARG(srcAlpha,"srcAlpha")
		HX_STACK_ARG(dstAlpha,"dstAlpha")
		HX_STACK_LINE(1352)
		int tmp = srcRGB;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1352)
		int tmp1 = dstRGB;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1352)
		int tmp2 = srcAlpha;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1352)
		int tmp3 = dstAlpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1352)
		this1->blendFuncSeparate(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,blendFuncSeparate,(void))

Void GLES3Context_Impl__obj::blitFramebuffer( ::lime::_backend::native::NativeGLRenderContext this1,int srcX0,int srcY0,int srcX1,int srcY1,int dstX0,int dstY0,int dstX1,int dstY1,int mask,int filter){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","blitFramebuffer",0x980f756e,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.blitFramebuffer","lime/graphics/opengl/GLES3Context.hx",1359,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(srcX0,"srcX0")
		HX_STACK_ARG(srcY0,"srcY0")
		HX_STACK_ARG(srcX1,"srcX1")
		HX_STACK_ARG(srcY1,"srcY1")
		HX_STACK_ARG(dstX0,"dstX0")
		HX_STACK_ARG(dstY0,"dstY0")
		HX_STACK_ARG(dstX1,"dstX1")
		HX_STACK_ARG(dstY1,"dstY1")
		HX_STACK_ARG(mask,"mask")
		HX_STACK_ARG(filter,"filter")
		HX_STACK_LINE(1359)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC11(GLES3Context_Impl__obj,blitFramebuffer,(void))

Void GLES3Context_Impl__obj::bufferData( ::lime::_backend::native::NativeGLRenderContext this1,int target,int size,Float data,int usage){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","bufferData",0xfbb0ec54,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.bufferData","lime/graphics/opengl/GLES3Context.hx",1364,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(usage,"usage")
		HX_STACK_LINE(1366)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1366)
		int tmp1 = size;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1366)
		Float tmp2 = data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1366)
		int tmp3 = usage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1366)
		this1->bufferData(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,bufferData,(void))

Void GLES3Context_Impl__obj::bufferSubData( ::lime::_backend::native::NativeGLRenderContext this1,int target,int offset,int size,Float data){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","bufferSubData",0xa6fe0be0,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.bufferSubData","lime/graphics/opengl/GLES3Context.hx",1371,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(1373)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1373)
		int tmp1 = offset;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1373)
		int tmp2 = size;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1373)
		Float tmp3 = data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1373)
		this1->bufferSubData(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,bufferSubData,(void))

int GLES3Context_Impl__obj::checkFramebufferStatus( ::lime::_backend::native::NativeGLRenderContext this1,int target){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","checkFramebufferStatus",0xe9c6ba21,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.checkFramebufferStatus","lime/graphics/opengl/GLES3Context.hx",1378,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(target,"target")
	HX_STACK_LINE(1380)
	int tmp = target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1380)
	int tmp1 = this1->checkFramebufferStatus(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1380)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,checkFramebufferStatus,return )

Void GLES3Context_Impl__obj::clear( ::lime::_backend::native::NativeGLRenderContext this1,int mask){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","clear",0x9c8160c3,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.clear","lime/graphics/opengl/GLES3Context.hx",1385,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(1387)
		int tmp = mask;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1387)
		this1->clear(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,clear,(void))

Void GLES3Context_Impl__obj::clearBufferfi( ::lime::_backend::native::NativeGLRenderContext this1,int buffer,int drawbuffer,Float depth,int stencil){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","clearBufferfi",0x41746e26,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.clearBufferfi","lime/graphics/opengl/GLES3Context.hx",1394,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(drawbuffer,"drawbuffer")
		HX_STACK_ARG(depth,"depth")
		HX_STACK_ARG(stencil,"stencil")
		HX_STACK_LINE(1394)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,clearBufferfi,(void))

Void GLES3Context_Impl__obj::clearBufferfv( ::lime::_backend::native::NativeGLRenderContext this1,int buffer,int drawbuffer,Float value){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","clearBufferfv",0x41746e33,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.clearBufferfv","lime/graphics/opengl/GLES3Context.hx",1401,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(drawbuffer,"drawbuffer")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(1401)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,clearBufferfv,(void))

Void GLES3Context_Impl__obj::clearBufferiv( ::lime::_backend::native::NativeGLRenderContext this1,int buffer,int drawbuffer,Float value){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","clearBufferiv",0x417470d0,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.clearBufferiv","lime/graphics/opengl/GLES3Context.hx",1408,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(drawbuffer,"drawbuffer")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(1408)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,clearBufferiv,(void))

Void GLES3Context_Impl__obj::clearBufferuiv( ::lime::_backend::native::NativeGLRenderContext this1,int buffer,int drawbuffer,Float value){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","clearBufferuiv",0x0477555f,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.clearBufferuiv","lime/graphics/opengl/GLES3Context.hx",1415,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(drawbuffer,"drawbuffer")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(1415)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,clearBufferuiv,(void))

Void GLES3Context_Impl__obj::clearColor( ::lime::_backend::native::NativeGLRenderContext this1,Float red,Float green,Float blue,Float alpha){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","clearColor",0x87a3dda0,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.clearColor","lime/graphics/opengl/GLES3Context.hx",1420,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(1422)
		Float tmp = red;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1422)
		Float tmp1 = green;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1422)
		Float tmp2 = blue;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1422)
		Float tmp3 = alpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1422)
		this1->clearColor(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,clearColor,(void))

Void GLES3Context_Impl__obj::clearDepthf( ::lime::_backend::native::NativeGLRenderContext this1,Float depth){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","clearDepthf",0xcec03b26,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.clearDepthf","lime/graphics/opengl/GLES3Context.hx",1427,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(depth,"depth")
		HX_STACK_LINE(1429)
		Float tmp = depth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1429)
		this1->clearDepthf(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,clearDepthf,(void))

Void GLES3Context_Impl__obj::clearStencil( ::lime::_backend::native::NativeGLRenderContext this1,int s){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","clearStencil",0x2f2c7379,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.clearStencil","lime/graphics/opengl/GLES3Context.hx",1434,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(1436)
		int tmp = s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1436)
		this1->clearStencil(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,clearStencil,(void))

int GLES3Context_Impl__obj::clientWaitSync( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject sync,int flags,cpp::Int64Struct timeout){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","clientWaitSync",0x7eb0e2e5,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.clientWaitSync","lime/graphics/opengl/GLES3Context.hx",1443,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(sync,"sync")
	HX_STACK_ARG(flags,"flags")
	HX_STACK_ARG(timeout,"timeout")
	HX_STACK_LINE(1443)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,clientWaitSync,return )

Void GLES3Context_Impl__obj::colorMask( ::lime::_backend::native::NativeGLRenderContext this1,bool red,bool green,bool blue,bool alpha){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","colorMask",0xcab08e25,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.colorMask","lime/graphics/opengl/GLES3Context.hx",1448,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(1450)
		bool tmp = red;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1450)
		bool tmp1 = green;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1450)
		bool tmp2 = blue;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1450)
		bool tmp3 = alpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1450)
		this1->colorMask(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,colorMask,(void))

Void GLES3Context_Impl__obj::compileShader( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject shader){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","compileShader",0x3bcb862e,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.compileShader","lime/graphics/opengl/GLES3Context.hx",1455,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(1457)
		::lime::graphics::opengl::GLObject tmp = shader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1457)
		this1->compileShader(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,compileShader,(void))

Void GLES3Context_Impl__obj::compressedTexImage2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int internalformat,int width,int height,int border,int imageSize,Float data){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","compressedTexImage2D",0x3c657631,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.compressedTexImage2D","lime/graphics/opengl/GLES3Context.hx",1462,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(border,"border")
		HX_STACK_ARG(imageSize,"imageSize")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(1464)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1464)
		int tmp1 = level;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1464)
		int tmp2 = internalformat;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1464)
		int tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1464)
		int tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1464)
		int tmp5 = border;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1464)
		int tmp6 = imageSize;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1464)
		Float tmp7 = data;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1464)
		this1->compressedTexImage2D(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(GLES3Context_Impl__obj,compressedTexImage2D,(void))

Void GLES3Context_Impl__obj::compressedTexImage3D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int internalformat,int width,int height,int depth,int border,int imageSize,Float data){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","compressedTexImage3D",0x3c657710,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.compressedTexImage3D","lime/graphics/opengl/GLES3Context.hx",1471,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(depth,"depth")
		HX_STACK_ARG(border,"border")
		HX_STACK_ARG(imageSize,"imageSize")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(1471)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(GLES3Context_Impl__obj,compressedTexImage3D,(void))

Void GLES3Context_Impl__obj::compressedTexSubImage2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int xoffset,int yoffset,int width,int height,int format,int imageSize,Float data){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","compressedTexSubImage2D",0xbe8daa89,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.compressedTexSubImage2D","lime/graphics/opengl/GLES3Context.hx",1476,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(xoffset,"xoffset")
		HX_STACK_ARG(yoffset,"yoffset")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(imageSize,"imageSize")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(1478)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1478)
		int tmp1 = level;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1478)
		int tmp2 = xoffset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1478)
		int tmp3 = yoffset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1478)
		int tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1478)
		int tmp5 = height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1478)
		int tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1478)
		int tmp7 = imageSize;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1478)
		Float tmp8 = data;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1478)
		this1->compressedTexSubImage2D(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(GLES3Context_Impl__obj,compressedTexSubImage2D,(void))

Void GLES3Context_Impl__obj::compressedTexSubImage3D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int xoffset,int yoffset,int zoffset,int width,int height,int depth,int format,int imageSize,Float data){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","compressedTexSubImage3D",0xbe8dab68,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.compressedTexSubImage3D","lime/graphics/opengl/GLES3Context.hx",1485,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(xoffset,"xoffset")
		HX_STACK_ARG(yoffset,"yoffset")
		HX_STACK_ARG(zoffset,"zoffset")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(depth,"depth")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(imageSize,"imageSize")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(1485)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC12(GLES3Context_Impl__obj,compressedTexSubImage3D,(void))

Void GLES3Context_Impl__obj::copyBufferSubData( ::lime::_backend::native::NativeGLRenderContext this1,int readTarget,int writeTarget,Float readOffset,Float writeOffset,int size){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","copyBufferSubData",0xa56e85eb,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.copyBufferSubData","lime/graphics/opengl/GLES3Context.hx",1492,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(readTarget,"readTarget")
		HX_STACK_ARG(writeTarget,"writeTarget")
		HX_STACK_ARG(readOffset,"readOffset")
		HX_STACK_ARG(writeOffset,"writeOffset")
		HX_STACK_ARG(size,"size")
		HX_STACK_LINE(1492)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GLES3Context_Impl__obj,copyBufferSubData,(void))

Void GLES3Context_Impl__obj::copyTexImage2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int internalformat,int x,int y,int width,int height,int border){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","copyTexImage2D",0x79504ae5,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.copyTexImage2D","lime/graphics/opengl/GLES3Context.hx",1497,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(border,"border")
		HX_STACK_LINE(1499)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1499)
		int tmp1 = level;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1499)
		int tmp2 = internalformat;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1499)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1499)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1499)
		int tmp5 = width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1499)
		int tmp6 = height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1499)
		int tmp7 = border;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1499)
		this1->copyTexImage2D(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(GLES3Context_Impl__obj,copyTexImage2D,(void))

Void GLES3Context_Impl__obj::copyTexSubImage2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int xoffset,int yoffset,int x,int y,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","copyTexSubImage2D",0x8819be55,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.copyTexSubImage2D","lime/graphics/opengl/GLES3Context.hx",1504,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(xoffset,"xoffset")
		HX_STACK_ARG(yoffset,"yoffset")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1506)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1506)
		int tmp1 = level;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1506)
		int tmp2 = xoffset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1506)
		int tmp3 = yoffset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1506)
		int tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1506)
		int tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1506)
		int tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1506)
		int tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1506)
		this1->copyTexSubImage2D(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(GLES3Context_Impl__obj,copyTexSubImage2D,(void))

Void GLES3Context_Impl__obj::copyTexSubImage3D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int xoffset,int yoffset,int zoffset,int x,int y,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","copyTexSubImage3D",0x8819bf34,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.copyTexSubImage3D","lime/graphics/opengl/GLES3Context.hx",1513,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(xoffset,"xoffset")
		HX_STACK_ARG(yoffset,"yoffset")
		HX_STACK_ARG(zoffset,"zoffset")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1513)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(GLES3Context_Impl__obj,copyTexSubImage3D,(void))

::lime::graphics::opengl::GLObject GLES3Context_Impl__obj::createBuffer( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","createBuffer",0xc69400a6,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.createBuffer","lime/graphics/opengl/GLES3Context.hx",1518,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1520)
	::lime::graphics::opengl::GLObject tmp = this1->createBuffer();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1520)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,createBuffer,return )

::lime::graphics::opengl::GLObject GLES3Context_Impl__obj::createFramebuffer( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","createFramebuffer",0xb053d787,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.createFramebuffer","lime/graphics/opengl/GLES3Context.hx",1525,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1527)
	::lime::graphics::opengl::GLObject tmp = this1->createFramebuffer();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1527)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,createFramebuffer,return )

::lime::graphics::opengl::GLObject GLES3Context_Impl__obj::createProgram( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","createProgram",0x3d55381e,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.createProgram","lime/graphics/opengl/GLES3Context.hx",1532,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1534)
	::lime::graphics::opengl::GLObject tmp = this1->createProgram();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1534)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,createProgram,return )

::lime::graphics::opengl::GLObject GLES3Context_Impl__obj::createQuery( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","createQuery",0x54affe22,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.createQuery","lime/graphics/opengl/GLES3Context.hx",1541,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1541)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,createQuery,return )

::lime::graphics::opengl::GLObject GLES3Context_Impl__obj::createRenderbuffer( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","createRenderbuffer",0x1f94d0fc,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.createRenderbuffer","lime/graphics/opengl/GLES3Context.hx",1546,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1548)
	::lime::graphics::opengl::GLObject tmp = this1->createRenderbuffer();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1548)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,createRenderbuffer,return )

::lime::graphics::opengl::GLObject GLES3Context_Impl__obj::createSampler( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","createSampler",0xcd25b2a2,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.createSampler","lime/graphics/opengl/GLES3Context.hx",1555,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1555)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,createSampler,return )

::lime::graphics::opengl::GLObject GLES3Context_Impl__obj::createShader( ::lime::_backend::native::NativeGLRenderContext this1,int type){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","createShader",0x132002cb,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.createShader","lime/graphics/opengl/GLES3Context.hx",1560,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(1562)
	int tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1562)
	::lime::graphics::opengl::GLObject tmp1 = this1->createShader(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1562)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,createShader,return )

::lime::graphics::opengl::GLObject GLES3Context_Impl__obj::createTexture( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","createTexture",0xe83cb675,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.createTexture","lime/graphics/opengl/GLES3Context.hx",1567,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1569)
	::lime::graphics::opengl::GLObject tmp = this1->createTexture();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1569)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,createTexture,return )

::lime::graphics::opengl::GLObject GLES3Context_Impl__obj::createTransformFeedback( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","createTransformFeedback",0x5904882b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.createTransformFeedback","lime/graphics/opengl/GLES3Context.hx",1576,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1576)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,createTransformFeedback,return )

::lime::graphics::opengl::GLObject GLES3Context_Impl__obj::createVertexArray( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","createVertexArray",0x6fd6fa2f,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.createVertexArray","lime/graphics/opengl/GLES3Context.hx",1583,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1583)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,createVertexArray,return )

Void GLES3Context_Impl__obj::cullFace( ::lime::_backend::native::NativeGLRenderContext this1,int mode){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","cullFace",0xdadcddf9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.cullFace","lime/graphics/opengl/GLES3Context.hx",1588,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(1590)
		int tmp = mode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1590)
		this1->cullFace(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,cullFace,(void))

Void GLES3Context_Impl__obj::deleteBuffer( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject buffer){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","deleteBuffer",0x0ad6e715,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.deleteBuffer","lime/graphics/opengl/GLES3Context.hx",1595,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(1597)
		::lime::graphics::opengl::GLObject tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1597)
		this1->deleteBuffer(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,deleteBuffer,(void))

Void GLES3Context_Impl__obj::deleteFramebuffer( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject framebuffer){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","deleteFramebuffer",0x336c3eb8,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.deleteFramebuffer","lime/graphics/opengl/GLES3Context.hx",1602,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(framebuffer,"framebuffer")
		HX_STACK_LINE(1604)
		::lime::graphics::opengl::GLObject tmp = framebuffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1604)
		this1->deleteFramebuffer(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,deleteFramebuffer,(void))

Void GLES3Context_Impl__obj::deleteProgram( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","deleteProgram",0xb39bf2cf,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.deleteProgram","lime/graphics/opengl/GLES3Context.hx",1609,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(1611)
		::lime::graphics::opengl::GLObject tmp = program;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1611)
		this1->deleteProgram(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,deleteProgram,(void))

Void GLES3Context_Impl__obj::deleteQuery( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject query){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","deleteQuery",0xbb29fa93,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.deleteQuery","lime/graphics/opengl/GLES3Context.hx",1618,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(query,"query")
		HX_STACK_LINE(1618)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,deleteQuery,(void))

Void GLES3Context_Impl__obj::deleteRenderbuffer( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject renderbuffer){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","deleteRenderbuffer",0x51d6b4ab,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.deleteRenderbuffer","lime/graphics/opengl/GLES3Context.hx",1623,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(renderbuffer,"renderbuffer")
		HX_STACK_LINE(1625)
		::lime::graphics::opengl::GLObject tmp = renderbuffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1625)
		this1->deleteRenderbuffer(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,deleteRenderbuffer,(void))

Void GLES3Context_Impl__obj::deleteSampler( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject sampler){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","deleteSampler",0x436c6d53,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.deleteSampler","lime/graphics/opengl/GLES3Context.hx",1632,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(sampler,"sampler")
		HX_STACK_LINE(1632)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,deleteSampler,(void))

Void GLES3Context_Impl__obj::deleteShader( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject shader){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","deleteShader",0x5762e93a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.deleteShader","lime/graphics/opengl/GLES3Context.hx",1637,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(1639)
		::lime::graphics::opengl::GLObject tmp = shader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1639)
		this1->deleteShader(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,deleteShader,(void))

Void GLES3Context_Impl__obj::deleteSync( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject sync){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","deleteSync",0x07e9c530,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.deleteSync","lime/graphics/opengl/GLES3Context.hx",1646,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(sync,"sync")
		HX_STACK_LINE(1646)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,deleteSync,(void))

Void GLES3Context_Impl__obj::deleteTexture( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject texture){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","deleteTexture",0x5e837126,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.deleteTexture","lime/graphics/opengl/GLES3Context.hx",1651,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(1653)
		::lime::graphics::opengl::GLObject tmp = texture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1653)
		this1->deleteTexture(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,deleteTexture,(void))

Void GLES3Context_Impl__obj::deleteTransformFeedback( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject transformFeedback){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","deleteTransformFeedback",0x567fea1c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.deleteTransformFeedback","lime/graphics/opengl/GLES3Context.hx",1660,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(transformFeedback,"transformFeedback")
		HX_STACK_LINE(1660)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,deleteTransformFeedback,(void))

Void GLES3Context_Impl__obj::deleteVertexArray( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject vertexArray){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","deleteVertexArray",0xf2ef6160,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.deleteVertexArray","lime/graphics/opengl/GLES3Context.hx",1667,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(vertexArray,"vertexArray")
		HX_STACK_LINE(1667)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,deleteVertexArray,(void))

Void GLES3Context_Impl__obj::depthFunc( ::lime::_backend::native::NativeGLRenderContext this1,int func){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","depthFunc",0x4135081d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.depthFunc","lime/graphics/opengl/GLES3Context.hx",1672,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(1674)
		int tmp = func;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1674)
		this1->depthFunc(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,depthFunc,(void))

Void GLES3Context_Impl__obj::depthMask( ::lime::_backend::native::NativeGLRenderContext this1,bool flag){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","depthMask",0x45c65dc5,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.depthMask","lime/graphics/opengl/GLES3Context.hx",1679,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(flag,"flag")
		HX_STACK_LINE(1681)
		bool tmp = flag;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1681)
		this1->depthMask(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,depthMask,(void))

Void GLES3Context_Impl__obj::depthRangef( ::lime::_backend::native::NativeGLRenderContext this1,Float zNear,Float zFar){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","depthRangef",0x06e52522,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.depthRangef","lime/graphics/opengl/GLES3Context.hx",1686,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(zNear,"zNear")
		HX_STACK_ARG(zFar,"zFar")
		HX_STACK_LINE(1688)
		Float tmp = zNear;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1688)
		Float tmp1 = zFar;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1688)
		this1->depthRangef(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,depthRangef,(void))

Void GLES3Context_Impl__obj::detachShader( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,::lime::graphics::opengl::GLObject shader){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","detachShader",0xbe57d462,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.detachShader","lime/graphics/opengl/GLES3Context.hx",1693,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(1695)
		::lime::graphics::opengl::GLObject tmp = program;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1695)
		::lime::graphics::opengl::GLObject tmp1 = shader;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1695)
		this1->detachShader(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,detachShader,(void))

Void GLES3Context_Impl__obj::disable( ::lime::_backend::native::NativeGLRenderContext this1,int cap){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","disable",0xce41129e,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.disable","lime/graphics/opengl/GLES3Context.hx",1700,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(cap,"cap")
		HX_STACK_LINE(1702)
		int tmp = cap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1702)
		this1->disable(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,disable,(void))

Void GLES3Context_Impl__obj::disableVertexAttribArray( ::lime::_backend::native::NativeGLRenderContext this1,int index){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","disableVertexAttribArray",0xd05a946d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.disableVertexAttribArray","lime/graphics/opengl/GLES3Context.hx",1707,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(1709)
		int tmp = index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1709)
		this1->disableVertexAttribArray(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,disableVertexAttribArray,(void))

Void GLES3Context_Impl__obj::drawArrays( ::lime::_backend::native::NativeGLRenderContext this1,int mode,int first,int count){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","drawArrays",0x61f120e8,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.drawArrays","lime/graphics/opengl/GLES3Context.hx",1714,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(mode,"mode")
		HX_STACK_ARG(first,"first")
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(1716)
		int tmp = mode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1716)
		int tmp1 = first;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1716)
		int tmp2 = count;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1716)
		this1->drawArrays(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,drawArrays,(void))

Void GLES3Context_Impl__obj::drawArraysInstanced( ::lime::_backend::native::NativeGLRenderContext this1,int mode,int first,int count,int instanceCount){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","drawArraysInstanced",0xd754e527,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.drawArraysInstanced","lime/graphics/opengl/GLES3Context.hx",1723,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(mode,"mode")
		HX_STACK_ARG(first,"first")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(instanceCount,"instanceCount")
		HX_STACK_LINE(1723)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,drawArraysInstanced,(void))

Void GLES3Context_Impl__obj::drawBuffers( ::lime::_backend::native::NativeGLRenderContext this1,Array< int > buffers){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","drawBuffers",0xc8232385,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.drawBuffers","lime/graphics/opengl/GLES3Context.hx",1730,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(buffers,"buffers")
		HX_STACK_LINE(1730)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,drawBuffers,(void))

Void GLES3Context_Impl__obj::drawElements( ::lime::_backend::native::NativeGLRenderContext this1,int mode,int count,int type,Float offset){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","drawElements",0x2d61c5e5,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.drawElements","lime/graphics/opengl/GLES3Context.hx",1735,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(mode,"mode")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_LINE(1737)
		int tmp = mode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1737)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1737)
		int tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1737)
		Float tmp3 = offset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1737)
		this1->drawElements(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,drawElements,(void))

Void GLES3Context_Impl__obj::drawElementsInstanced( ::lime::_backend::native::NativeGLRenderContext this1,int mode,int count,int type,Float offset,int instanceCount){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","drawElementsInstanced",0xdc48388a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.drawElementsInstanced","lime/graphics/opengl/GLES3Context.hx",1744,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(mode,"mode")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(instanceCount,"instanceCount")
		HX_STACK_LINE(1744)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GLES3Context_Impl__obj,drawElementsInstanced,(void))

Void GLES3Context_Impl__obj::drawRangeElements( ::lime::_backend::native::NativeGLRenderContext this1,int mode,int start,int end,int count,int type,Float offset){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","drawRangeElements",0x4571f6a6,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.drawRangeElements","lime/graphics/opengl/GLES3Context.hx",1751,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(mode,"mode")
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(end,"end")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_LINE(1751)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(GLES3Context_Impl__obj,drawRangeElements,(void))

Void GLES3Context_Impl__obj::enable( ::lime::_backend::native::NativeGLRenderContext this1,int cap){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","enable",0x45930e8d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.enable","lime/graphics/opengl/GLES3Context.hx",1756,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(cap,"cap")
		HX_STACK_LINE(1758)
		int tmp = cap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1758)
		this1->enable(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,enable,(void))

Void GLES3Context_Impl__obj::enableVertexAttribArray( ::lime::_backend::native::NativeGLRenderContext this1,int index){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","enableVertexAttribArray",0x346a3b9e,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.enableVertexAttribArray","lime/graphics/opengl/GLES3Context.hx",1763,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(1765)
		int tmp = index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1765)
		this1->enableVertexAttribArray(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,enableVertexAttribArray,(void))

Void GLES3Context_Impl__obj::endQuery( ::lime::_backend::native::NativeGLRenderContext this1,int target){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","endQuery",0x8a9313b7,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.endQuery","lime/graphics/opengl/GLES3Context.hx",1772,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(1772)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,endQuery,(void))

Void GLES3Context_Impl__obj::endTransformFeedback( ::lime::_backend::native::NativeGLRenderContext this1){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","endTransformFeedback",0xbabc2940,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.endTransformFeedback","lime/graphics/opengl/GLES3Context.hx",1779,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(1779)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,endTransformFeedback,(void))

::lime::graphics::opengl::GLObject GLES3Context_Impl__obj::fenceSync( ::lime::_backend::native::NativeGLRenderContext this1,int condition,int flags){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","fenceSync",0x1642dbe2,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.fenceSync","lime/graphics/opengl/GLES3Context.hx",1786,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(condition,"condition")
	HX_STACK_ARG(flags,"flags")
	HX_STACK_LINE(1786)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,fenceSync,return )

Void GLES3Context_Impl__obj::finish( ::lime::_backend::native::NativeGLRenderContext this1){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","finish",0xd38aa05d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.finish","lime/graphics/opengl/GLES3Context.hx",1793,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(1793)
		this1->finish();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,finish,(void))

Void GLES3Context_Impl__obj::flush( ::lime::_backend::native::NativeGLRenderContext this1){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","flush",0x56c151fa,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.flush","lime/graphics/opengl/GLES3Context.hx",1800,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(1800)
		this1->flush();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,flush,(void))

Void GLES3Context_Impl__obj::framebufferRenderbuffer( ::lime::_backend::native::NativeGLRenderContext this1,int target,int attachment,int renderbuffertarget,::lime::graphics::opengl::GLObject renderbuffer){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","framebufferRenderbuffer",0xbec2d219,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.framebufferRenderbuffer","lime/graphics/opengl/GLES3Context.hx",1805,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(attachment,"attachment")
		HX_STACK_ARG(renderbuffertarget,"renderbuffertarget")
		HX_STACK_ARG(renderbuffer,"renderbuffer")
		HX_STACK_LINE(1807)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1807)
		int tmp1 = attachment;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1807)
		int tmp2 = renderbuffertarget;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1807)
		::lime::graphics::opengl::GLObject tmp3 = renderbuffer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1807)
		this1->framebufferRenderbuffer(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,framebufferRenderbuffer,(void))

Void GLES3Context_Impl__obj::framebufferTexture2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int attachment,int textarget,::lime::graphics::opengl::GLObject texture,int level){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","framebufferTexture2D",0x3c2a044a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.framebufferTexture2D","lime/graphics/opengl/GLES3Context.hx",1812,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(attachment,"attachment")
		HX_STACK_ARG(textarget,"textarget")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_ARG(level,"level")
		HX_STACK_LINE(1814)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1814)
		int tmp1 = attachment;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1814)
		int tmp2 = textarget;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1814)
		::lime::graphics::opengl::GLObject tmp3 = texture;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1814)
		int tmp4 = level;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1814)
		this1->framebufferTexture2D(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GLES3Context_Impl__obj,framebufferTexture2D,(void))

Void GLES3Context_Impl__obj::framebufferTextureLayer( ::lime::_backend::native::NativeGLRenderContext this1,int target,int attachment,::lime::graphics::opengl::GLObject texture,int level,int layer){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","framebufferTextureLayer",0x1bccb439,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.framebufferTextureLayer","lime/graphics/opengl/GLES3Context.hx",1821,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(attachment,"attachment")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(layer,"layer")
		HX_STACK_LINE(1821)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GLES3Context_Impl__obj,framebufferTextureLayer,(void))

Void GLES3Context_Impl__obj::frontFace( ::lime::_backend::native::NativeGLRenderContext this1,int mode){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","frontFace",0x27adc41c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.frontFace","lime/graphics/opengl/GLES3Context.hx",1826,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(1828)
		int tmp = mode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1828)
		this1->frontFace(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,frontFace,(void))

Array< ::Dynamic > GLES3Context_Impl__obj::genBuffers( ::lime::_backend::native::NativeGLRenderContext this1,int n,Array< ::Dynamic > buffers){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","genBuffers",0x1200a9cd,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.genBuffers","lime/graphics/opengl/GLES3Context.hx",1833,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(n,"n")
	HX_STACK_ARG(buffers,"buffers")
	HX_STACK_LINE(1835)
	bool tmp = (buffers == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1835)
	if ((tmp)){
		HX_STACK_LINE(1835)
		buffers = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(1837)
	{
		HX_STACK_LINE(1837)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1837)
		while((true)){
			HX_STACK_LINE(1837)
			bool tmp1 = (_g < n);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1837)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1837)
			if ((tmp2)){
				HX_STACK_LINE(1837)
				break;
			}
			HX_STACK_LINE(1837)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1837)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1839)
			::lime::graphics::opengl::GLObject tmp4 = this1->createBuffer();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1839)
			buffers[i] = tmp4;
		}
	}
	HX_STACK_LINE(1843)
	return buffers;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,genBuffers,return )

Void GLES3Context_Impl__obj::generateMipmap( ::lime::_backend::native::NativeGLRenderContext this1,int target){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","generateMipmap",0xefe750a7,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.generateMipmap","lime/graphics/opengl/GLES3Context.hx",1848,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(1850)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1850)
		this1->generateMipmap(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,generateMipmap,(void))

Array< ::Dynamic > GLES3Context_Impl__obj::genFramebuffers( ::lime::_backend::native::NativeGLRenderContext this1,int n,Array< ::Dynamic > framebuffers){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","genFramebuffers",0xaea2ee4c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.genFramebuffers","lime/graphics/opengl/GLES3Context.hx",1854,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(n,"n")
	HX_STACK_ARG(framebuffers,"framebuffers")
	HX_STACK_LINE(1856)
	bool tmp = (framebuffers == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1856)
	if ((tmp)){
		HX_STACK_LINE(1856)
		framebuffers = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(1858)
	{
		HX_STACK_LINE(1858)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1858)
		while((true)){
			HX_STACK_LINE(1858)
			bool tmp1 = (_g < n);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1858)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1858)
			if ((tmp2)){
				HX_STACK_LINE(1858)
				break;
			}
			HX_STACK_LINE(1858)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1858)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1860)
			::lime::graphics::opengl::GLObject tmp4 = this1->createFramebuffer();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1860)
			framebuffers[i] = tmp4;
		}
	}
	HX_STACK_LINE(1864)
	return framebuffers;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,genFramebuffers,return )

Array< ::Dynamic > GLES3Context_Impl__obj::genQueries( ::lime::_backend::native::NativeGLRenderContext this1,int n,Array< ::Dynamic > queries){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","genQueries",0xf64d97c0,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.genQueries","lime/graphics/opengl/GLES3Context.hx",1869,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(n,"n")
	HX_STACK_ARG(queries,"queries")
	HX_STACK_LINE(1871)
	bool tmp = (queries == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1871)
	if ((tmp)){
		HX_STACK_LINE(1871)
		queries = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(1873)
	{
		HX_STACK_LINE(1873)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1873)
		while((true)){
			HX_STACK_LINE(1873)
			bool tmp1 = (_g < n);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1873)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1873)
			if ((tmp2)){
				HX_STACK_LINE(1873)
				break;
			}
			HX_STACK_LINE(1873)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1873)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1875)
			queries[i] = null();
		}
	}
	HX_STACK_LINE(1879)
	return queries;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,genQueries,return )

Array< ::Dynamic > GLES3Context_Impl__obj::genRenderbuffers( ::lime::_backend::native::NativeGLRenderContext this1,int n,Array< ::Dynamic > renderbuffers){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","genRenderbuffers",0x53f134b7,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.genRenderbuffers","lime/graphics/opengl/GLES3Context.hx",1884,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(n,"n")
	HX_STACK_ARG(renderbuffers,"renderbuffers")
	HX_STACK_LINE(1886)
	bool tmp = (renderbuffers == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1886)
	if ((tmp)){
		HX_STACK_LINE(1886)
		renderbuffers = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(1888)
	{
		HX_STACK_LINE(1888)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1888)
		while((true)){
			HX_STACK_LINE(1888)
			bool tmp1 = (_g < n);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1888)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1888)
			if ((tmp2)){
				HX_STACK_LINE(1888)
				break;
			}
			HX_STACK_LINE(1888)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1888)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1890)
			::lime::graphics::opengl::GLObject tmp4 = this1->createRenderbuffer();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1890)
			renderbuffers[i] = tmp4;
		}
	}
	HX_STACK_LINE(1894)
	return renderbuffers;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,genRenderbuffers,return )

Array< ::Dynamic > GLES3Context_Impl__obj::genSamplers( ::lime::_backend::native::NativeGLRenderContext this1,int n,Array< ::Dynamic > samplers){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","genSamplers",0xce582ad1,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.genSamplers","lime/graphics/opengl/GLES3Context.hx",1899,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(n,"n")
	HX_STACK_ARG(samplers,"samplers")
	HX_STACK_LINE(1901)
	bool tmp = (samplers == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1901)
	if ((tmp)){
		HX_STACK_LINE(1901)
		samplers = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(1903)
	{
		HX_STACK_LINE(1903)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1903)
		while((true)){
			HX_STACK_LINE(1903)
			bool tmp1 = (_g < n);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1903)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1903)
			if ((tmp2)){
				HX_STACK_LINE(1903)
				break;
			}
			HX_STACK_LINE(1903)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1903)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1905)
			samplers[i] = null();
		}
	}
	HX_STACK_LINE(1909)
	return samplers;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,genSamplers,return )

Array< ::Dynamic > GLES3Context_Impl__obj::genTextures( ::lime::_backend::native::NativeGLRenderContext this1,int n,Array< ::Dynamic > textures){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","genTextures",0x67647f9e,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.genTextures","lime/graphics/opengl/GLES3Context.hx",1914,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(n,"n")
	HX_STACK_ARG(textures,"textures")
	HX_STACK_LINE(1916)
	bool tmp = (textures == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1916)
	if ((tmp)){
		HX_STACK_LINE(1916)
		textures = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(1918)
	{
		HX_STACK_LINE(1918)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1918)
		while((true)){
			HX_STACK_LINE(1918)
			bool tmp1 = (_g < n);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1918)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1918)
			if ((tmp2)){
				HX_STACK_LINE(1918)
				break;
			}
			HX_STACK_LINE(1918)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1918)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1920)
			::lime::graphics::opengl::GLObject tmp4 = this1->createTexture();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1920)
			textures[i] = tmp4;
		}
	}
	HX_STACK_LINE(1924)
	return textures;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,genTextures,return )

Array< ::Dynamic > GLES3Context_Impl__obj::genTransformFeedbacks( ::lime::_backend::native::NativeGLRenderContext this1,int n,Array< ::Dynamic > transformFeedbacks){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","genTransformFeedbacks",0xa637bd28,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.genTransformFeedbacks","lime/graphics/opengl/GLES3Context.hx",1929,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(n,"n")
	HX_STACK_ARG(transformFeedbacks,"transformFeedbacks")
	HX_STACK_LINE(1931)
	bool tmp = (transformFeedbacks == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1931)
	if ((tmp)){
		HX_STACK_LINE(1931)
		transformFeedbacks = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(1933)
	{
		HX_STACK_LINE(1933)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1933)
		while((true)){
			HX_STACK_LINE(1933)
			bool tmp1 = (_g < n);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1933)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1933)
			if ((tmp2)){
				HX_STACK_LINE(1933)
				break;
			}
			HX_STACK_LINE(1933)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1933)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1935)
			transformFeedbacks[i] = null();
		}
	}
	HX_STACK_LINE(1939)
	return transformFeedbacks;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,genTransformFeedbacks,return )

Dynamic GLES3Context_Impl__obj::getActiveAttrib( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int index){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getActiveAttrib",0x0c93da1c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getActiveAttrib","lime/graphics/opengl/GLES3Context.hx",1944,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(1946)
	::lime::graphics::opengl::GLObject tmp = program;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1946)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1946)
	Dynamic tmp2 = this1->getActiveAttrib(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1946)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getActiveAttrib,return )

Dynamic GLES3Context_Impl__obj::getActiveUniform( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int index){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getActiveUniform",0x7101c622,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getActiveUniform","lime/graphics/opengl/GLES3Context.hx",1951,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(1953)
	::lime::graphics::opengl::GLObject tmp = program;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1953)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1953)
	Dynamic tmp2 = this1->getActiveUniform(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1953)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getActiveUniform,return )

int GLES3Context_Impl__obj::getActiveUniformBlocki( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int uniformBlockIndex,int pname){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getActiveUniformBlocki",0xa3f2ae3e,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getActiveUniformBlocki","lime/graphics/opengl/GLES3Context.hx",1960,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(uniformBlockIndex,"uniformBlockIndex")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(1960)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,getActiveUniformBlocki,return )

Void GLES3Context_Impl__obj::getActiveUniformBlockiv( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int uniformBlockIndex,int pname,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getActiveUniformBlockiv",0xd065c878,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getActiveUniformBlockiv","lime/graphics/opengl/GLES3Context.hx",1967,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(uniformBlockIndex,"uniformBlockIndex")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(1967)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,getActiveUniformBlockiv,(void))

::String GLES3Context_Impl__obj::getActiveUniformBlockName( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int uniformBlockIndex){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getActiveUniformBlockName",0xf9da83b6,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getActiveUniformBlockName","lime/graphics/opengl/GLES3Context.hx",1974,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(uniformBlockIndex,"uniformBlockIndex")
	HX_STACK_LINE(1974)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getActiveUniformBlockName,return )

Void GLES3Context_Impl__obj::getActiveUniformsiv( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,Array< int > uniformIndices,int pname,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getActiveUniformsiv",0x5caeda3e,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getActiveUniformsiv","lime/graphics/opengl/GLES3Context.hx",1981,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(uniformIndices,"uniformIndices")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(1981)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,getActiveUniformsiv,(void))

Array< ::Dynamic > GLES3Context_Impl__obj::getAttachedShaders( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getAttachedShaders",0xad9775be,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getAttachedShaders","lime/graphics/opengl/GLES3Context.hx",1986,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(program,"program")
	HX_STACK_LINE(1988)
	::lime::graphics::opengl::GLObject tmp = program;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1988)
	return this1->getAttachedShaders(tmp);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,getAttachedShaders,return )

int GLES3Context_Impl__obj::getAttribLocation( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,::String name){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getAttribLocation",0x407b030b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getAttribLocation","lime/graphics/opengl/GLES3Context.hx",1993,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(1995)
	::lime::graphics::opengl::GLObject tmp = program;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1995)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1995)
	int tmp2 = this1->getAttribLocation(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1995)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getAttribLocation,return )

bool GLES3Context_Impl__obj::getBoolean( ::lime::_backend::native::NativeGLRenderContext this1,int pname){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getBoolean",0x359d9dbc,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getBoolean","lime/graphics/opengl/GLES3Context.hx",2000,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(2002)
	int tmp = pname;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2002)
	bool tmp1 = this1->getBoolean(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2002)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,getBoolean,return )

Void GLES3Context_Impl__obj::getBooleanv( ::lime::_backend::native::NativeGLRenderContext this1,int pname,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getBooleanv",0xb44c673a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getBooleanv","lime/graphics/opengl/GLES3Context.hx",2007,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(2009)
		int tmp = pname;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2009)
		Float tmp1 = params;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2009)
		this1->getBooleanv(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getBooleanv,(void))

int GLES3Context_Impl__obj::getBufferParameteri( ::lime::_backend::native::NativeGLRenderContext this1,int target,int pname){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getBufferParameteri",0xcb370a2c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getBufferParameteri","lime/graphics/opengl/GLES3Context.hx",2014,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(2016)
	int tmp = target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2016)
	int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2016)
	int tmp2 = this1->getBufferParameteri(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2016)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getBufferParameteri,return )

Void GLES3Context_Impl__obj::getBufferParameteri64v( ::lime::_backend::native::NativeGLRenderContext this1,int target,int pname,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getBufferParameteri64v",0x8a89c0cc,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getBufferParameteri64v","lime/graphics/opengl/GLES3Context.hx",2021,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(2023)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2023)
		int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2023)
		Float tmp2 = params;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2023)
		this1->getBufferParameteri64v(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,getBufferParameteri64v,(void))

Void GLES3Context_Impl__obj::getBufferParameteriv( ::lime::_backend::native::NativeGLRenderContext this1,int target,int pname,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getBufferParameteriv",0x04f1dcca,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getBufferParameteriv","lime/graphics/opengl/GLES3Context.hx",2028,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(2030)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2030)
		int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2030)
		Float tmp2 = params;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2030)
		this1->getBufferParameteriv(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,getBufferParameteriv,(void))

Float GLES3Context_Impl__obj::getBufferPointerv( ::lime::_backend::native::NativeGLRenderContext this1,int target,int pname){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getBufferPointerv",0x9b10f5a5,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getBufferPointerv","lime/graphics/opengl/GLES3Context.hx",2035,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(2037)
	Float tmp = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2037)
	return tmp;
	HX_STACK_LINE(2037)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getBufferPointerv,return )

int GLES3Context_Impl__obj::getError( ::lime::_backend::native::NativeGLRenderContext this1){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getError",0x01abd1dc,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getError","lime/graphics/opengl/GLES3Context.hx",2042,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(2044)
	int tmp = this1->getError();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2044)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,getError,return )

Float GLES3Context_Impl__obj::getFloat( ::lime::_backend::native::NativeGLRenderContext this1,int pname){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getFloat",0x9118cbb0,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getFloat","lime/graphics/opengl/GLES3Context.hx",2049,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(2051)
	int tmp = pname;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2051)
	Float tmp1 = this1->getFloat(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2051)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,getFloat,return )

Void GLES3Context_Impl__obj::getFloatv( ::lime::_backend::native::NativeGLRenderContext this1,int pname,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getFloatv",0x64996ec6,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getFloatv","lime/graphics/opengl/GLES3Context.hx",2056,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(2058)
		int tmp = pname;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2058)
		Float tmp1 = params;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2058)
		this1->getFloatv(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getFloatv,(void))

Dynamic GLES3Context_Impl__obj::getExtension( ::lime::_backend::native::NativeGLRenderContext this1,::String name){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getExtension",0xc8113393,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getExtension","lime/graphics/opengl/GLES3Context.hx",2063,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(2065)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2065)
	Dynamic tmp1 = this1->getExtension(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2065)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,getExtension,return )

int GLES3Context_Impl__obj::getFragDataLocation( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,::String name){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getFragDataLocation",0x1eefed3d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getFragDataLocation","lime/graphics/opengl/GLES3Context.hx",2072,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(2072)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getFragDataLocation,return )

int GLES3Context_Impl__obj::getFramebufferAttachmentParameteri( ::lime::_backend::native::NativeGLRenderContext this1,int target,int attachment,int pname){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getFramebufferAttachmentParameteri",0xb35e5904,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getFramebufferAttachmentParameteri","lime/graphics/opengl/GLES3Context.hx",2077,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(attachment,"attachment")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(2079)
	int tmp = target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2079)
	int tmp1 = attachment;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2079)
	int tmp2 = pname;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2079)
	int tmp3 = this1->getFramebufferAttachmentParameteri(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2079)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,getFramebufferAttachmentParameteri,return )

Void GLES3Context_Impl__obj::getFramebufferAttachmentParameteriv( ::lime::_backend::native::NativeGLRenderContext this1,int target,int attachment,int pname,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getFramebufferAttachmentParameteriv",0x3f2f8af2,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getFramebufferAttachmentParameteriv","lime/graphics/opengl/GLES3Context.hx",2084,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(attachment,"attachment")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(2086)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2086)
		int tmp1 = attachment;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2086)
		int tmp2 = pname;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2086)
		Float tmp3 = params;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2086)
		this1->getFramebufferAttachmentParameteriv(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,getFramebufferAttachmentParameteriv,(void))

int GLES3Context_Impl__obj::getInteger( ::lime::_backend::native::NativeGLRenderContext this1,int pname){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getInteger",0xceba70d2,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getInteger","lime/graphics/opengl/GLES3Context.hx",2091,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(2093)
	int tmp = pname;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2093)
	int tmp1 = this1->getInteger(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2093)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,getInteger,return )

cpp::Int64Struct GLES3Context_Impl__obj::getInteger64( ::lime::_backend::native::NativeGLRenderContext this1,int pname){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getInteger64",0xc6d5f890,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getInteger64","lime/graphics/opengl/GLES3Context.hx",2098,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(2100)
	cpp::Int64Struct tmp = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2100)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,getInteger64,return )

cpp::Int64Struct GLES3Context_Impl__obj::getInteger64i( ::lime::_backend::native::NativeGLRenderContext this1,int pname){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getInteger64i",0x346385d9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getInteger64i","lime/graphics/opengl/GLES3Context.hx",2105,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(2107)
	cpp::Int64Struct tmp = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2107)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,getInteger64i,return )

Void GLES3Context_Impl__obj::getInteger64i_v( ::lime::_backend::native::NativeGLRenderContext this1,int pname,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getInteger64i_v",0xb8b3c150,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getInteger64i_v","lime/graphics/opengl/GLES3Context.hx",2114,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(2114)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getInteger64i_v,(void))

Void GLES3Context_Impl__obj::getInteger64v( ::lime::_backend::native::NativeGLRenderContext this1,int pname,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getInteger64v",0x346385e6,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getInteger64v","lime/graphics/opengl/GLES3Context.hx",2119,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(2121)
		int tmp = pname;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2121)
		Float tmp1 = params;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2121)
		this1->getInteger64v(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getInteger64v,(void))

int GLES3Context_Impl__obj::getIntegeri( ::lime::_backend::native::NativeGLRenderContext this1,int pname){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getIntegeri",0x14684757,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getIntegeri","lime/graphics/opengl/GLES3Context.hx",2128,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(2128)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,getIntegeri,return )

Void GLES3Context_Impl__obj::getIntegeri_v( ::lime::_backend::native::NativeGLRenderContext this1,int pname,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getIntegeri_v",0x348a5e4e,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getIntegeri_v","lime/graphics/opengl/GLES3Context.hx",2135,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(2135)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getIntegeri_v,(void))

Void GLES3Context_Impl__obj::getIntegerv( ::lime::_backend::native::NativeGLRenderContext this1,int pname,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getIntegerv",0x14684764,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getIntegerv","lime/graphics/opengl/GLES3Context.hx",2140,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(2142)
		int tmp = pname;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2142)
		Float tmp1 = params;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2142)
		this1->getIntegerv(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getIntegerv,(void))

int GLES3Context_Impl__obj::getInternalformati( ::lime::_backend::native::NativeGLRenderContext this1,int target,int internalformat,int pname){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getInternalformati",0x0b4e52c9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getInternalformati","lime/graphics/opengl/GLES3Context.hx",2149,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(internalformat,"internalformat")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(2149)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,getInternalformati,return )

Void GLES3Context_Impl__obj::getInternalformativ( ::lime::_backend::native::NativeGLRenderContext this1,int target,int internalformat,int pname,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getInternalformativ",0xd93a1d8d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getInternalformativ","lime/graphics/opengl/GLES3Context.hx",2154,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(2156)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2156)
		int tmp1 = internalformat;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2156)
		int tmp2 = pname;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2156)
		Float tmp3 = params;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2156)
		this1->getInternalformativ(tmp,tmp1,tmp2,tmp3);
		HX_STACK_LINE(2156)
		return null();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,getInternalformativ,(void))

::haxe::io::Bytes GLES3Context_Impl__obj::getProgramBinary( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int binaryFormat){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getProgramBinary",0x7f926fb9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getProgramBinary","lime/graphics/opengl/GLES3Context.hx",2163,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(binaryFormat,"binaryFormat")
	HX_STACK_LINE(2163)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getProgramBinary,return )

int GLES3Context_Impl__obj::getProgrami( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int pname){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getProgrami",0x7965e7d1,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getProgrami","lime/graphics/opengl/GLES3Context.hx",2168,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(2170)
	::lime::graphics::opengl::GLObject tmp = program;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2170)
	int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2170)
	int tmp2 = this1->getProgrami(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2170)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getProgrami,return )

::String GLES3Context_Impl__obj::getProgramInfoLog( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getProgramInfoLog",0xb15dd9fe,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getProgramInfoLog","lime/graphics/opengl/GLES3Context.hx",2175,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(program,"program")
	HX_STACK_LINE(2177)
	::lime::graphics::opengl::GLObject tmp = program;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2177)
	::String tmp1 = this1->getProgramInfoLog(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2177)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,getProgramInfoLog,return )

Void GLES3Context_Impl__obj::getProgramiv( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int pname,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getProgramiv",0xbfc4ef85,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getProgramiv","lime/graphics/opengl/GLES3Context.hx",2182,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(2184)
		::lime::graphics::opengl::GLObject tmp = program;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2184)
		int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2184)
		Float tmp2 = params;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2184)
		this1->getProgramiv(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,getProgramiv,(void))

int GLES3Context_Impl__obj::getQueryi( ::lime::_backend::native::NativeGLRenderContext this1,int target,int pname){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getQueryi",0xf29267cd,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getQueryi","lime/graphics/opengl/GLES3Context.hx",2191,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(2191)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getQueryi,return )

Void GLES3Context_Impl__obj::getQueryiv( ::lime::_backend::native::NativeGLRenderContext this1,int target,int pname,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getQueryiv",0x4d886c09,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getQueryiv","lime/graphics/opengl/GLES3Context.hx",2196,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(2198)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2198)
		int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2198)
		Float tmp2 = params;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2198)
		this1->getQueryiv(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,getQueryiv,(void))

int GLES3Context_Impl__obj::getQueryObjectui( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject query,int pname){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getQueryObjectui",0x642b1c0f,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getQueryObjectui","lime/graphics/opengl/GLES3Context.hx",2205,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(query,"query")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(2205)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getQueryObjectui,return )

Void GLES3Context_Impl__obj::getQueryObjectuiv( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject query,int pname,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getQueryObjectuiv",0x418d7187,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getQueryObjectuiv","lime/graphics/opengl/GLES3Context.hx",2210,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(query,"query")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(2212)
		::lime::graphics::opengl::GLObject tmp = query;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2212)
		int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2212)
		Float tmp2 = params;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2212)
		this1->getQueryObjectuiv(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,getQueryObjectuiv,(void))

int GLES3Context_Impl__obj::getRenderbufferParameteri( ::lime::_backend::native::NativeGLRenderContext this1,int target,int pname){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getRenderbufferParameteri",0xa3709a82,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getRenderbufferParameteri","lime/graphics/opengl/GLES3Context.hx",2217,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(2219)
	int tmp = target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2219)
	int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2219)
	int tmp2 = this1->getRenderbufferParameteri(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2219)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getRenderbufferParameteri,return )

Void GLES3Context_Impl__obj::getRenderbufferParameteriv( ::lime::_backend::native::NativeGLRenderContext this1,int target,int pname,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getRenderbufferParameteriv",0x5f1697b4,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getRenderbufferParameteriv","lime/graphics/opengl/GLES3Context.hx",2224,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(2226)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2226)
		int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2226)
		Float tmp2 = params;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2226)
		this1->getRenderbufferParameteriv(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,getRenderbufferParameteriv,(void))

int GLES3Context_Impl__obj::getSamplerParameteri( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject sampler,int pname){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getSamplerParameteri",0x3031f5dc,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getSamplerParameteri","lime/graphics/opengl/GLES3Context.hx",2233,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(sampler,"sampler")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(2233)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getSamplerParameteri,return )

Void GLES3Context_Impl__obj::getSamplerParameteriv( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject sampler,int pname,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getSamplerParameteriv",0xfb852b1a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getSamplerParameteriv","lime/graphics/opengl/GLES3Context.hx",2238,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(sampler,"sampler")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(2240)
		::lime::graphics::opengl::GLObject tmp = sampler;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2240)
		int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2240)
		Float tmp2 = params;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2240)
		this1->getSamplerParameteriv(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,getSamplerParameteriv,(void))

Float GLES3Context_Impl__obj::getSamplerParameterf( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject sampler,int pname){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getSamplerParameterf",0x3031f5d9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getSamplerParameterf","lime/graphics/opengl/GLES3Context.hx",2247,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(sampler,"sampler")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(2247)
	return ((Float)((int)0));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getSamplerParameterf,return )

Void GLES3Context_Impl__obj::getSamplerParameterfv( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject sampler,int pname,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getSamplerParameterfv",0xfb85287d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getSamplerParameterfv","lime/graphics/opengl/GLES3Context.hx",2252,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(sampler,"sampler")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(2254)
		::lime::graphics::opengl::GLObject tmp = sampler;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2254)
		int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2254)
		Float tmp2 = params;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2254)
		this1->getSamplerParameterfv(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,getSamplerParameterfv,(void))

::String GLES3Context_Impl__obj::getShaderInfoLog( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject shader){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getShaderInfoLog",0x8d7c4e25,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getShaderInfoLog","lime/graphics/opengl/GLES3Context.hx",2259,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(shader,"shader")
	HX_STACK_LINE(2261)
	::lime::graphics::opengl::GLObject tmp = shader;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2261)
	::String tmp1 = this1->getShaderInfoLog(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2261)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,getShaderInfoLog,return )

int GLES3Context_Impl__obj::getShaderi( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject shader,int pname){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getShaderi",0x172534b8,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getShaderi","lime/graphics/opengl/GLES3Context.hx",2266,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(shader,"shader")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(2268)
	::lime::graphics::opengl::GLObject tmp = shader;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2268)
	int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2268)
	int tmp2 = this1->getShaderi(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2268)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getShaderi,return )

Void GLES3Context_Impl__obj::getShaderiv( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject shader,int pname,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getShaderiv",0x2968ecbe,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getShaderiv","lime/graphics/opengl/GLES3Context.hx",2273,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(shader,"shader")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(2275)
		::lime::graphics::opengl::GLObject tmp = shader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2275)
		int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2275)
		Float tmp2 = params;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2275)
		this1->getShaderiv(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,getShaderiv,(void))

Dynamic GLES3Context_Impl__obj::getShaderPrecisionFormat( ::lime::_backend::native::NativeGLRenderContext this1,int shadertype,int precisiontype){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getShaderPrecisionFormat",0x54b5e384,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getShaderPrecisionFormat","lime/graphics/opengl/GLES3Context.hx",2280,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(shadertype,"shadertype")
	HX_STACK_ARG(precisiontype,"precisiontype")
	HX_STACK_LINE(2282)
	int tmp = shadertype;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2282)
	int tmp1 = precisiontype;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2282)
	Dynamic tmp2 = this1->getShaderPrecisionFormat(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2282)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getShaderPrecisionFormat,return )

::String GLES3Context_Impl__obj::getShaderSource( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject shader){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getShaderSource",0x6e75f24c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getShaderSource","lime/graphics/opengl/GLES3Context.hx",2287,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(shader,"shader")
	HX_STACK_LINE(2289)
	::lime::graphics::opengl::GLObject tmp = shader;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2289)
	::String tmp1 = this1->getShaderSource(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2289)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,getShaderSource,return )

::String GLES3Context_Impl__obj::getString( ::lime::_backend::native::NativeGLRenderContext this1,int name){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getString",0x3473743d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getString","lime/graphics/opengl/GLES3Context.hx",2294,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(2296)
	int tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2296)
	::String tmp1 = this1->getString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2296)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,getString,return )

::String GLES3Context_Impl__obj::getStringi( ::lime::_backend::native::NativeGLRenderContext this1,int name,int index){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getStringi",0xb092418c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getStringi","lime/graphics/opengl/GLES3Context.hx",2303,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(2303)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getStringi,return )

int GLES3Context_Impl__obj::getSyncParameteri( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject sync,int pname){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getSyncParameteri",0x202ab447,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getSyncParameteri","lime/graphics/opengl/GLES3Context.hx",2310,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(sync,"sync")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(2310)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getSyncParameteri,return )

Void GLES3Context_Impl__obj::getSyncParameteriv( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject sync,int pname,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getSyncParameteriv",0x05330a4f,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getSyncParameteriv","lime/graphics/opengl/GLES3Context.hx",2315,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(sync,"sync")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(2317)
		::lime::graphics::opengl::GLObject tmp = sync;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2317)
		int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2317)
		Float tmp2 = params;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2317)
		this1->getSyncParameteriv(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,getSyncParameteriv,(void))

Float GLES3Context_Impl__obj::getTexParameterf( ::lime::_backend::native::NativeGLRenderContext this1,int target,int pname){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getTexParameterf",0x40056178,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getTexParameterf","lime/graphics/opengl/GLES3Context.hx",2322,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(2324)
	int tmp = target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2324)
	int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2324)
	Float tmp2 = this1->getTexParameterf(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2324)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getTexParameterf,return )

Void GLES3Context_Impl__obj::getTexParameterfv( ::lime::_backend::native::NativeGLRenderContext this1,int target,int pname,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getTexParameterfv",0xc4afe7fe,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getTexParameterfv","lime/graphics/opengl/GLES3Context.hx",2329,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(2331)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2331)
		int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2331)
		Float tmp2 = params;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2331)
		this1->getTexParameterfv(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,getTexParameterfv,(void))

int GLES3Context_Impl__obj::getTexParameteri( ::lime::_backend::native::NativeGLRenderContext this1,int target,int pname){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getTexParameteri",0x4005617b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getTexParameteri","lime/graphics/opengl/GLES3Context.hx",2336,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(2338)
	int tmp = target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2338)
	int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2338)
	int tmp2 = this1->getTexParameteri(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2338)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getTexParameteri,return )

Void GLES3Context_Impl__obj::getTexParameteriv( ::lime::_backend::native::NativeGLRenderContext this1,int target,int pname,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getTexParameteriv",0xc4afea9b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getTexParameteriv","lime/graphics/opengl/GLES3Context.hx",2343,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(2345)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2345)
		int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2345)
		Float tmp2 = params;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2345)
		this1->getTexParameteriv(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,getTexParameteriv,(void))

Dynamic GLES3Context_Impl__obj::getTransformFeedbackVarying( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int index){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getTransformFeedbackVarying",0xbe51f8cb,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getTransformFeedbackVarying","lime/graphics/opengl/GLES3Context.hx",2352,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(2352)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getTransformFeedbackVarying,return )

Float GLES3Context_Impl__obj::getUniformf( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int location){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getUniformf",0xf592cb1e,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getUniformf","lime/graphics/opengl/GLES3Context.hx",2357,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(location,"location")
	HX_STACK_LINE(2359)
	::lime::graphics::opengl::GLObject tmp = program;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2359)
	int tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2359)
	Float tmp2 = this1->getUniformf(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2359)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getUniformf,return )

Void GLES3Context_Impl__obj::getUniformfv( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int location,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getUniformfv",0xeadeef98,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getUniformfv","lime/graphics/opengl/GLES3Context.hx",2364,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(2366)
		::lime::graphics::opengl::GLObject tmp = program;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2366)
		int tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2366)
		Float tmp2 = params;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2366)
		this1->getUniformfv(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,getUniformfv,(void))

int GLES3Context_Impl__obj::getUniformi( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int location){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getUniformi",0xf592cb21,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getUniformi","lime/graphics/opengl/GLES3Context.hx",2371,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(location,"location")
	HX_STACK_LINE(2373)
	::lime::graphics::opengl::GLObject tmp = program;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2373)
	int tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2373)
	int tmp2 = this1->getUniformi(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2373)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getUniformi,return )

Void GLES3Context_Impl__obj::getUniformiv( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int location,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getUniformiv",0xeadef235,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getUniformiv","lime/graphics/opengl/GLES3Context.hx",2378,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(2380)
		::lime::graphics::opengl::GLObject tmp = program;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2380)
		int tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2380)
		Float tmp2 = params;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2380)
		this1->getUniformiv(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,getUniformiv,(void))

int GLES3Context_Impl__obj::getUniformui( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int location){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getUniformui",0xeadefc9c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getUniformui","lime/graphics/opengl/GLES3Context.hx",2387,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(location,"location")
	HX_STACK_LINE(2387)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getUniformui,return )

Void GLES3Context_Impl__obj::getUniformuiv( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int location,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getUniformuiv",0x983e0c5a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getUniformuiv","lime/graphics/opengl/GLES3Context.hx",2392,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(2394)
		::lime::graphics::opengl::GLObject tmp = program;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2394)
		int tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2394)
		Float tmp2 = params;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2394)
		this1->getUniformuiv(tmp,tmp1,tmp2);
		HX_STACK_LINE(2394)
		return null();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,getUniformuiv,(void))

int GLES3Context_Impl__obj::getUniformBlockIndex( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,::String uniformBlockName){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getUniformBlockIndex",0x4c7360ed,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getUniformBlockIndex","lime/graphics/opengl/GLES3Context.hx",2401,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(uniformBlockName,"uniformBlockName")
	HX_STACK_LINE(2401)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getUniformBlockIndex,return )

Array< int > GLES3Context_Impl__obj::getUniformIndices( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,Array< ::String > uniformNames){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getUniformIndices",0xf2d913bf,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getUniformIndices","lime/graphics/opengl/GLES3Context.hx",2408,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(uniformNames,"uniformNames")
	HX_STACK_LINE(2408)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getUniformIndices,return )

int GLES3Context_Impl__obj::getUniformLocation( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,::String name){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getUniformLocation",0x69f4a69d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getUniformLocation","lime/graphics/opengl/GLES3Context.hx",2413,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(2415)
	::lime::graphics::opengl::GLObject tmp = program;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2415)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2415)
	int tmp2 = this1->getUniformLocation(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2415)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getUniformLocation,return )

Float GLES3Context_Impl__obj::getVertexAttribf( ::lime::_backend::native::NativeGLRenderContext this1,int index,int pname){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getVertexAttribf",0xaf40f4ec,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getVertexAttribf","lime/graphics/opengl/GLES3Context.hx",2422,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(2422)
	return ((Float)((int)0));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getVertexAttribf,return )

Void GLES3Context_Impl__obj::getVertexAttribfv( ::lime::_backend::native::NativeGLRenderContext this1,int index,int pname,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getVertexAttribfv",0xa9955a0a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getVertexAttribfv","lime/graphics/opengl/GLES3Context.hx",2427,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(2429)
		int tmp = index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2429)
		int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2429)
		Float tmp2 = params;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2429)
		this1->getVertexAttribfv(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,getVertexAttribfv,(void))

int GLES3Context_Impl__obj::getVertexAttribi( ::lime::_backend::native::NativeGLRenderContext this1,int index,int pname){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getVertexAttribi",0xaf40f4ef,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getVertexAttribi","lime/graphics/opengl/GLES3Context.hx",2434,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(2436)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2436)
	int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2436)
	Dynamic tmp2 = this1->getVertexAttrib(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2436)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getVertexAttribi,return )

int GLES3Context_Impl__obj::getVertexAttribIi( ::lime::_backend::native::NativeGLRenderContext this1,int index,int pname){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getVertexAttribIi",0xa99540ba,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getVertexAttribIi","lime/graphics/opengl/GLES3Context.hx",2443,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(2443)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getVertexAttribIi,return )

Void GLES3Context_Impl__obj::getVertexAttribIiv( ::lime::_backend::native::NativeGLRenderContext this1,int index,int pname,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getVertexAttribIiv",0xb903627c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getVertexAttribIiv","lime/graphics/opengl/GLES3Context.hx",2450,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(2450)
		return null();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,getVertexAttribIiv,(void))

int GLES3Context_Impl__obj::getVertexAttribIui( ::lime::_backend::native::NativeGLRenderContext this1,int index,int pname){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getVertexAttribIui",0xb9036ce3,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getVertexAttribIui","lime/graphics/opengl/GLES3Context.hx",2457,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(2457)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getVertexAttribIui,return )

Void GLES3Context_Impl__obj::getVertexAttribIuiv( ::lime::_backend::native::NativeGLRenderContext this1,int index,int pname,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getVertexAttribIuiv",0x29fbda33,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getVertexAttribIuiv","lime/graphics/opengl/GLES3Context.hx",2464,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(2464)
		return null();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,getVertexAttribIuiv,(void))

Void GLES3Context_Impl__obj::getVertexAttribiv( ::lime::_backend::native::NativeGLRenderContext this1,int index,int pname,Float params){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getVertexAttribiv",0xa9955ca7,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getVertexAttribiv","lime/graphics/opengl/GLES3Context.hx",2469,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(2471)
		int tmp = index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2471)
		int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2471)
		Float tmp2 = params;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2471)
		this1->getVertexAttribiv(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,getVertexAttribiv,(void))

Float GLES3Context_Impl__obj::getVertexAttribPointerv( ::lime::_backend::native::NativeGLRenderContext this1,int index,int pname){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","getVertexAttribPointerv",0x4405e973,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.getVertexAttribPointerv","lime/graphics/opengl/GLES3Context.hx",2476,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(2478)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2478)
	int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2478)
	Float tmp2 = this1->getVertexAttribPointerv(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2478)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,getVertexAttribPointerv,return )

Void GLES3Context_Impl__obj::hint( ::lime::_backend::native::NativeGLRenderContext this1,int target,int mode){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","hint",0xf884a711,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.hint","lime/graphics/opengl/GLES3Context.hx",2483,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(2485)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2485)
		int tmp1 = mode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2485)
		this1->hint(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,hint,(void))

Void GLES3Context_Impl__obj::invalidateFramebuffer( ::lime::_backend::native::NativeGLRenderContext this1,int target,Array< int > attachments){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","invalidateFramebuffer",0x6ae11a68,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.invalidateFramebuffer","lime/graphics/opengl/GLES3Context.hx",2492,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(attachments,"attachments")
		HX_STACK_LINE(2492)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,invalidateFramebuffer,(void))

Void GLES3Context_Impl__obj::invalidateSubFramebuffer( ::lime::_backend::native::NativeGLRenderContext this1,int target,Array< int > attachments,int x,int y,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","invalidateSubFramebuffer",0x32fdccb2,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.invalidateSubFramebuffer","lime/graphics/opengl/GLES3Context.hx",2499,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(attachments,"attachments")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(2499)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(GLES3Context_Impl__obj,invalidateSubFramebuffer,(void))

bool GLES3Context_Impl__obj::isBuffer( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject buffer){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","isBuffer",0x57a94f14,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.isBuffer","lime/graphics/opengl/GLES3Context.hx",2504,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(2506)
	::lime::graphics::opengl::GLObject tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2506)
	bool tmp1 = this1->isBuffer(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2506)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,isBuffer,return )

bool GLES3Context_Impl__obj::isEnabled( ::lime::_backend::native::NativeGLRenderContext this1,int cap){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","isEnabled",0x291c43ed,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.isEnabled","lime/graphics/opengl/GLES3Context.hx",2511,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(cap,"cap")
	HX_STACK_LINE(2513)
	int tmp = cap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2513)
	bool tmp1 = this1->isEnabled(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2513)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,isEnabled,return )

bool GLES3Context_Impl__obj::isFramebuffer( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject framebuffer){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","isFramebuffer",0xe4857a59,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.isFramebuffer","lime/graphics/opengl/GLES3Context.hx",2518,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(framebuffer,"framebuffer")
	HX_STACK_LINE(2520)
	::lime::graphics::opengl::GLObject tmp = framebuffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2520)
	bool tmp1 = this1->isFramebuffer(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2520)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,isFramebuffer,return )

bool GLES3Context_Impl__obj::isProgram( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","isProgram",0x9ee489f0,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.isProgram","lime/graphics/opengl/GLES3Context.hx",2525,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(program,"program")
	HX_STACK_LINE(2527)
	::lime::graphics::opengl::GLObject tmp = program;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2527)
	bool tmp1 = this1->isProgram(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2527)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,isProgram,return )

bool GLES3Context_Impl__obj::isQuery( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject query){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","isQuery",0x1758d774,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.isQuery","lime/graphics/opengl/GLES3Context.hx",2534,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(query,"query")
	HX_STACK_LINE(2534)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,isQuery,return )

bool GLES3Context_Impl__obj::isRenderbuffer( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject renderbuffer){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","isRenderbuffer",0x96d1a5ea,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.isRenderbuffer","lime/graphics/opengl/GLES3Context.hx",2539,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(renderbuffer,"renderbuffer")
	HX_STACK_LINE(2541)
	::lime::graphics::opengl::GLObject tmp = renderbuffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2541)
	bool tmp1 = this1->isRenderbuffer(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2541)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,isRenderbuffer,return )

bool GLES3Context_Impl__obj::isSampler( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject sampler){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","isSampler",0x2eb50474,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.isSampler","lime/graphics/opengl/GLES3Context.hx",2548,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(sampler,"sampler")
	HX_STACK_LINE(2548)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,isSampler,return )

bool GLES3Context_Impl__obj::isShader( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject shader){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","isShader",0xa4355139,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.isShader","lime/graphics/opengl/GLES3Context.hx",2553,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(shader,"shader")
	HX_STACK_LINE(2555)
	::lime::graphics::opengl::GLObject tmp = shader;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2555)
	bool tmp1 = this1->isShader(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2555)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,isShader,return )

bool GLES3Context_Impl__obj::isTexture( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject texture){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","isTexture",0x49cc0847,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.isTexture","lime/graphics/opengl/GLES3Context.hx",2560,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(texture,"texture")
	HX_STACK_LINE(2562)
	::lime::graphics::opengl::GLObject tmp = texture;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2562)
	bool tmp1 = this1->isTexture(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2562)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,isTexture,return )

bool GLES3Context_Impl__obj::isTransformFeedback( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject transformFeedback){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","isTransformFeedback",0xf9b7147d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.isTransformFeedback","lime/graphics/opengl/GLES3Context.hx",2569,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(transformFeedback,"transformFeedback")
	HX_STACK_LINE(2569)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,isTransformFeedback,return )

bool GLES3Context_Impl__obj::isVertexArray( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject vertexArray){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","isVertexArray",0xa4089d01,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.isVertexArray","lime/graphics/opengl/GLES3Context.hx",2576,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(vertexArray,"vertexArray")
	HX_STACK_LINE(2576)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,isVertexArray,return )

Void GLES3Context_Impl__obj::lineWidth( ::lime::_backend::native::NativeGLRenderContext this1,Float width){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","lineWidth",0xb84a7ba8,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.lineWidth","lime/graphics/opengl/GLES3Context.hx",2581,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(width,"width")
		HX_STACK_LINE(2583)
		Float tmp = width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2583)
		this1->lineWidth(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,lineWidth,(void))

Void GLES3Context_Impl__obj::linkProgram( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","linkProgram",0x56c5e960,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.linkProgram","lime/graphics/opengl/GLES3Context.hx",2588,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(2590)
		::lime::graphics::opengl::GLObject tmp = program;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2590)
		this1->linkProgram(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,linkProgram,(void))

Void GLES3Context_Impl__obj::mapBufferRange( ::lime::_backend::native::NativeGLRenderContext this1,int target,Float offset,int length,int access){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","mapBufferRange",0x0ff34d6b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.mapBufferRange","lime/graphics/opengl/GLES3Context.hx",2597,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(length,"length")
		HX_STACK_ARG(access,"access")
		HX_STACK_LINE(2597)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,mapBufferRange,(void))

Void GLES3Context_Impl__obj::pauseTransformFeedback( ::lime::_backend::native::NativeGLRenderContext this1){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","pauseTransformFeedback",0xc8281e45,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.pauseTransformFeedback","lime/graphics/opengl/GLES3Context.hx",2604,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(2604)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,pauseTransformFeedback,(void))

Void GLES3Context_Impl__obj::pixelStorei( ::lime::_backend::native::NativeGLRenderContext this1,int pname,int param){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","pixelStorei",0x4e127044,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.pixelStorei","lime/graphics/opengl/GLES3Context.hx",2609,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(param,"param")
		HX_STACK_LINE(2611)
		int tmp = pname;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2611)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2611)
		this1->pixelStorei(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,pixelStorei,(void))

Void GLES3Context_Impl__obj::polygonOffset( ::lime::_backend::native::NativeGLRenderContext this1,Float factor,Float units){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","polygonOffset",0xc7663ae3,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.polygonOffset","lime/graphics/opengl/GLES3Context.hx",2616,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(factor,"factor")
		HX_STACK_ARG(units,"units")
		HX_STACK_LINE(2618)
		Float tmp = factor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2618)
		Float tmp1 = units;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2618)
		this1->polygonOffset(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,polygonOffset,(void))

Void GLES3Context_Impl__obj::programBinary( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int binaryFormat,Float binary,int length){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","programBinary",0xdcd74adb,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.programBinary","lime/graphics/opengl/GLES3Context.hx",2625,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(binaryFormat,"binaryFormat")
		HX_STACK_ARG(binary,"binary")
		HX_STACK_ARG(length,"length")
		HX_STACK_LINE(2625)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,programBinary,(void))

Void GLES3Context_Impl__obj::programParameteri( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int pname,int value){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","programParameteri",0xee83c27a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.programParameteri","lime/graphics/opengl/GLES3Context.hx",2632,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(2632)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,programParameteri,(void))

Void GLES3Context_Impl__obj::readBuffer( ::lime::_backend::native::NativeGLRenderContext this1,int src){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","readBuffer",0x324dce00,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.readBuffer","lime/graphics/opengl/GLES3Context.hx",2639,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(src,"src")
		HX_STACK_LINE(2639)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,readBuffer,(void))

Void GLES3Context_Impl__obj::readPixels( ::lime::_backend::native::NativeGLRenderContext this1,int x,int y,int width,int height,int format,int type,Float data){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","readPixels",0xee63002d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.readPixels","lime/graphics/opengl/GLES3Context.hx",2644,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(2646)
		int tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2646)
		int tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2646)
		int tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2646)
		int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2646)
		int tmp4 = format;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2646)
		int tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2646)
		Float tmp6 = data;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2646)
		this1->readPixels(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GLES3Context_Impl__obj,readPixels,(void))

Void GLES3Context_Impl__obj::releaseShaderCompiler( ::lime::_backend::native::NativeGLRenderContext this1){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","releaseShaderCompiler",0x8f1c8b41,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.releaseShaderCompiler","lime/graphics/opengl/GLES3Context.hx",2653,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(2653)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,releaseShaderCompiler,(void))

Void GLES3Context_Impl__obj::renderbufferStorage( ::lime::_backend::native::NativeGLRenderContext this1,int target,int internalformat,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","renderbufferStorage",0x498e82bb,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.renderbufferStorage","lime/graphics/opengl/GLES3Context.hx",2658,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(2660)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2660)
		int tmp1 = internalformat;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2660)
		int tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2660)
		int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2660)
		this1->renderbufferStorage(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,renderbufferStorage,(void))

Void GLES3Context_Impl__obj::renderbufferStorageMultisample( ::lime::_backend::native::NativeGLRenderContext this1,int target,int samples,int internalFormat,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","renderbufferStorageMultisample",0x1aecf468,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.renderbufferStorageMultisample","lime/graphics/opengl/GLES3Context.hx",2667,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(samples,"samples")
		HX_STACK_ARG(internalFormat,"internalFormat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(2667)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GLES3Context_Impl__obj,renderbufferStorageMultisample,(void))

Void GLES3Context_Impl__obj::resumeTransformFeedback( ::lime::_backend::native::NativeGLRenderContext this1){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","resumeTransformFeedback",0xf7e56e5a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.resumeTransformFeedback","lime/graphics/opengl/GLES3Context.hx",2674,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(2674)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,resumeTransformFeedback,(void))

Void GLES3Context_Impl__obj::sampleCoverage( ::lime::_backend::native::NativeGLRenderContext this1,Float value,bool invert){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","sampleCoverage",0xd05ae23c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.sampleCoverage","lime/graphics/opengl/GLES3Context.hx",2679,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(invert,"invert")
		HX_STACK_LINE(2681)
		Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2681)
		bool tmp1 = invert;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2681)
		this1->sampleCoverage(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,sampleCoverage,(void))

Void GLES3Context_Impl__obj::samplerParameterf( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject sampler,int pname,Float param){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","samplerParameterf",0xd42009fb,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.samplerParameterf","lime/graphics/opengl/GLES3Context.hx",2688,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(sampler,"sampler")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(param,"param")
		HX_STACK_LINE(2688)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,samplerParameterf,(void))

Void GLES3Context_Impl__obj::samplerParameteri( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject sampler,int pname,int param){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","samplerParameteri",0xd42009fe,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.samplerParameteri","lime/graphics/opengl/GLES3Context.hx",2695,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(sampler,"sampler")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(param,"param")
		HX_STACK_LINE(2695)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,samplerParameteri,(void))

Void GLES3Context_Impl__obj::scissor( ::lime::_backend::native::NativeGLRenderContext this1,int x,int y,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","scissor",0x21cfd0d2,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.scissor","lime/graphics/opengl/GLES3Context.hx",2700,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(2702)
		int tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2702)
		int tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2702)
		int tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2702)
		int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2702)
		this1->scissor(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,scissor,(void))

Void GLES3Context_Impl__obj::shaderBinary( ::lime::_backend::native::NativeGLRenderContext this1,Array< ::Dynamic > shaders,int binaryformat,Float binary,int length){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","shaderBinary",0x309e5c90,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.shaderBinary","lime/graphics/opengl/GLES3Context.hx",2709,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(shaders,"shaders")
		HX_STACK_ARG(binaryformat,"binaryformat")
		HX_STACK_ARG(binary,"binary")
		HX_STACK_ARG(length,"length")
		HX_STACK_LINE(2709)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,shaderBinary,(void))

Void GLES3Context_Impl__obj::shaderSource( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject shader,::String source){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","shaderSource",0x75c4516a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.shaderSource","lime/graphics/opengl/GLES3Context.hx",2714,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(shader,"shader")
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(2716)
		::lime::graphics::opengl::GLObject tmp = shader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2716)
		::String tmp1 = source;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2716)
		this1->shaderSource(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,shaderSource,(void))

Void GLES3Context_Impl__obj::stencilFunc( ::lime::_backend::native::NativeGLRenderContext this1,int func,int ref,int mask){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","stencilFunc",0x0e08bf16,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.stencilFunc","lime/graphics/opengl/GLES3Context.hx",2721,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(ref,"ref")
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(2723)
		int tmp = func;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2723)
		int tmp1 = ref;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2723)
		int tmp2 = mask;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2723)
		this1->stencilFunc(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,stencilFunc,(void))

Void GLES3Context_Impl__obj::stencilFuncSeparate( ::lime::_backend::native::NativeGLRenderContext this1,int face,int func,int ref,int mask){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","stencilFuncSeparate",0x74eca099,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.stencilFuncSeparate","lime/graphics/opengl/GLES3Context.hx",2728,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(face,"face")
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(ref,"ref")
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(2730)
		int tmp = face;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2730)
		int tmp1 = func;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2730)
		int tmp2 = ref;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2730)
		int tmp3 = mask;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2730)
		this1->stencilFuncSeparate(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,stencilFuncSeparate,(void))

Void GLES3Context_Impl__obj::stencilMask( ::lime::_backend::native::NativeGLRenderContext this1,int mask){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","stencilMask",0x129a14be,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.stencilMask","lime/graphics/opengl/GLES3Context.hx",2735,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(2737)
		int tmp = mask;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2737)
		this1->stencilMask(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,stencilMask,(void))

Void GLES3Context_Impl__obj::stencilMaskSeparate( ::lime::_backend::native::NativeGLRenderContext this1,int face,int mask){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","stencilMaskSeparate",0x88c7de41,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.stencilMaskSeparate","lime/graphics/opengl/GLES3Context.hx",2742,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(face,"face")
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(2744)
		int tmp = face;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2744)
		int tmp1 = mask;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2744)
		this1->stencilMaskSeparate(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,stencilMaskSeparate,(void))

Void GLES3Context_Impl__obj::stencilOp( ::lime::_backend::native::NativeGLRenderContext this1,int fail,int zfail,int zpass){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","stencilOp",0xfdd93c73,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.stencilOp","lime/graphics/opengl/GLES3Context.hx",2749,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(fail,"fail")
		HX_STACK_ARG(zfail,"zfail")
		HX_STACK_ARG(zpass,"zpass")
		HX_STACK_LINE(2751)
		int tmp = fail;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2751)
		int tmp1 = zfail;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2751)
		int tmp2 = zpass;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2751)
		this1->stencilOp(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,stencilOp,(void))

Void GLES3Context_Impl__obj::stencilOpSeparate( ::lime::_backend::native::NativeGLRenderContext this1,int face,int fail,int zfail,int zpass){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","stencilOpSeparate",0x36b542f6,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.stencilOpSeparate","lime/graphics/opengl/GLES3Context.hx",2756,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(face,"face")
		HX_STACK_ARG(fail,"fail")
		HX_STACK_ARG(zfail,"zfail")
		HX_STACK_ARG(zpass,"zpass")
		HX_STACK_LINE(2758)
		int tmp = face;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2758)
		int tmp1 = fail;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2758)
		int tmp2 = zfail;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2758)
		int tmp3 = zpass;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2758)
		this1->stencilOpSeparate(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,stencilOpSeparate,(void))

Void GLES3Context_Impl__obj::texImage2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int internalformat,int width,int height,int border,int format,int type,Float data){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","texImage2D",0x21a4a9d0,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.texImage2D","lime/graphics/opengl/GLES3Context.hx",2763,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(border,"border")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(2765)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2765)
		int tmp1 = level;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2765)
		int tmp2 = internalformat;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2765)
		int tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2765)
		int tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2765)
		int tmp5 = border;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2765)
		int tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2765)
		int tmp7 = type;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2765)
		Float tmp8 = data;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2765)
		this1->texImage2D(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(GLES3Context_Impl__obj,texImage2D,(void))

Void GLES3Context_Impl__obj::texImage3D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int internalformat,int width,int height,int depth,int border,int format,int type,Float data){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","texImage3D",0x21a4aaaf,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.texImage3D","lime/graphics/opengl/GLES3Context.hx",2772,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(depth,"depth")
		HX_STACK_ARG(border,"border")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(2772)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC11(GLES3Context_Impl__obj,texImage3D,(void))

Void GLES3Context_Impl__obj::texStorage2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int internalformat,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","texStorage2D",0xa2eea070,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.texStorage2D","lime/graphics/opengl/GLES3Context.hx",2779,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(2779)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GLES3Context_Impl__obj,texStorage2D,(void))

Void GLES3Context_Impl__obj::texStorage3D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int internalformat,int width,int height,int depth){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","texStorage3D",0xa2eea14f,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.texStorage3D","lime/graphics/opengl/GLES3Context.hx",2786,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(depth,"depth")
		HX_STACK_LINE(2786)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(GLES3Context_Impl__obj,texStorage3D,(void))

Void GLES3Context_Impl__obj::texParameterf( ::lime::_backend::native::NativeGLRenderContext this1,int target,int pname,Float param){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","texParameterf",0x9d4a3c9a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.texParameterf","lime/graphics/opengl/GLES3Context.hx",2791,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(param,"param")
		HX_STACK_LINE(2793)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2793)
		int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2793)
		Float tmp2 = param;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2793)
		this1->texParameterf(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,texParameterf,(void))

Void GLES3Context_Impl__obj::texParameteri( ::lime::_backend::native::NativeGLRenderContext this1,int target,int pname,int param){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","texParameteri",0x9d4a3c9d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.texParameteri","lime/graphics/opengl/GLES3Context.hx",2798,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(param,"param")
		HX_STACK_LINE(2800)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2800)
		int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2800)
		int tmp2 = param;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2800)
		this1->texParameteri(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,texParameteri,(void))

Void GLES3Context_Impl__obj::texSubImage2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int xoffset,int yoffset,int width,int height,int format,int type,Float data){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","texSubImage2D",0x89a9444a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.texSubImage2D","lime/graphics/opengl/GLES3Context.hx",2805,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(xoffset,"xoffset")
		HX_STACK_ARG(yoffset,"yoffset")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(2807)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2807)
		int tmp1 = level;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2807)
		int tmp2 = xoffset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2807)
		int tmp3 = yoffset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2807)
		int tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2807)
		int tmp5 = height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2807)
		int tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2807)
		int tmp7 = type;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2807)
		Float tmp8 = data;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2807)
		this1->texSubImage2D(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(GLES3Context_Impl__obj,texSubImage2D,(void))

Void GLES3Context_Impl__obj::texSubImage3D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int xoffset,int yoffset,int zoffset,int width,int height,int depth,int format,int type,Float data){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","texSubImage3D",0x89a94529,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.texSubImage3D","lime/graphics/opengl/GLES3Context.hx",2814,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(xoffset,"xoffset")
		HX_STACK_ARG(yoffset,"yoffset")
		HX_STACK_ARG(zoffset,"zoffset")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(depth,"depth")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(2814)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC12(GLES3Context_Impl__obj,texSubImage3D,(void))

Void GLES3Context_Impl__obj::transformFeedbackVaryings( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,Array< ::String > varyings,int bufferMode){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","transformFeedbackVaryings",0xeb99bf6a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.transformFeedbackVaryings","lime/graphics/opengl/GLES3Context.hx",2821,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(varyings,"varyings")
		HX_STACK_ARG(bufferMode,"bufferMode")
		HX_STACK_LINE(2821)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,transformFeedbackVaryings,(void))

Void GLES3Context_Impl__obj::uniform1f( ::lime::_backend::native::NativeGLRenderContext this1,int location,Float v0){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniform1f",0xaecae37f,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniform1f","lime/graphics/opengl/GLES3Context.hx",2826,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v0,"v0")
		HX_STACK_LINE(2828)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2828)
		Float tmp1 = v0;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2828)
		this1->uniform1f(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,uniform1f,(void))

Void GLES3Context_Impl__obj::uniform1fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,int count,Float v){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniform1fv",0x42bc2c17,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniform1fv","lime/graphics/opengl/GLES3Context.hx",2833,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(2835)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2835)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2835)
		Float tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2835)
		this1->uniform1fv(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,uniform1fv,(void))

Void GLES3Context_Impl__obj::uniform1i( ::lime::_backend::native::NativeGLRenderContext this1,int location,int v0){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniform1i",0xaecae382,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniform1i","lime/graphics/opengl/GLES3Context.hx",2840,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v0,"v0")
		HX_STACK_LINE(2842)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2842)
		int tmp1 = v0;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2842)
		this1->uniform1i(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,uniform1i,(void))

Void GLES3Context_Impl__obj::uniform1iv( ::lime::_backend::native::NativeGLRenderContext this1,int location,int count,Float v){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniform1iv",0x42bc2eb4,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniform1iv","lime/graphics/opengl/GLES3Context.hx",2847,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(2849)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2849)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2849)
		Float tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2849)
		this1->uniform1iv(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,uniform1iv,(void))

Void GLES3Context_Impl__obj::uniform1ui( ::lime::_backend::native::NativeGLRenderContext this1,int location,int v0){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniform1ui",0x42bc391b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniform1ui","lime/graphics/opengl/GLES3Context.hx",2854,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v0,"v0")
		HX_STACK_LINE(2856)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2856)
		int tmp1 = v0;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2856)
		this1->uniform1ui(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,uniform1ui,(void))

Void GLES3Context_Impl__obj::uniform1uiv( ::lime::_backend::native::NativeGLRenderContext this1,int location,int count,Float v){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniform1uiv",0x21f5befb,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniform1uiv","lime/graphics/opengl/GLES3Context.hx",2861,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(2863)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2863)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2863)
		Float tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2863)
		this1->uniform1uiv(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,uniform1uiv,(void))

Void GLES3Context_Impl__obj::uniform2f( ::lime::_backend::native::NativeGLRenderContext this1,int location,Float v0,Float v1){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniform2f",0xaecae45e,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniform2f","lime/graphics/opengl/GLES3Context.hx",2868,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v0,"v0")
		HX_STACK_ARG(v1,"v1")
		HX_STACK_LINE(2870)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2870)
		Float tmp1 = v0;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2870)
		Float tmp2 = v1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2870)
		this1->uniform2f(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,uniform2f,(void))

Void GLES3Context_Impl__obj::uniform2fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,int count,Float v){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniform2fv",0x42bcee58,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniform2fv","lime/graphics/opengl/GLES3Context.hx",2875,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(2877)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2877)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2877)
		Float tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2877)
		this1->uniform2fv(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,uniform2fv,(void))

Void GLES3Context_Impl__obj::uniform2i( ::lime::_backend::native::NativeGLRenderContext this1,int location,int v0,int v1){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniform2i",0xaecae461,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniform2i","lime/graphics/opengl/GLES3Context.hx",2882,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v0,"v0")
		HX_STACK_ARG(v1,"v1")
		HX_STACK_LINE(2884)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2884)
		int tmp1 = v0;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2884)
		int tmp2 = v1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2884)
		this1->uniform2i(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,uniform2i,(void))

Void GLES3Context_Impl__obj::uniform2iv( ::lime::_backend::native::NativeGLRenderContext this1,int location,int count,Float v){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniform2iv",0x42bcf0f5,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniform2iv","lime/graphics/opengl/GLES3Context.hx",2889,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(2891)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2891)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2891)
		Float tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2891)
		this1->uniform2iv(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,uniform2iv,(void))

Void GLES3Context_Impl__obj::uniform2ui( ::lime::_backend::native::NativeGLRenderContext this1,int location,int v0,int v1){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniform2ui",0x42bcfb5c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniform2ui","lime/graphics/opengl/GLES3Context.hx",2896,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v0,"v0")
		HX_STACK_ARG(v1,"v1")
		HX_STACK_LINE(2898)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2898)
		int tmp1 = v0;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2898)
		int tmp2 = v1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2898)
		this1->uniform2ui(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,uniform2ui,(void))

Void GLES3Context_Impl__obj::uniform2uiv( ::lime::_backend::native::NativeGLRenderContext this1,int location,int count,Float v){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniform2uiv",0x229ef59a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniform2uiv","lime/graphics/opengl/GLES3Context.hx",2903,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(2905)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2905)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2905)
		Float tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2905)
		this1->uniform2uiv(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,uniform2uiv,(void))

Void GLES3Context_Impl__obj::uniform3f( ::lime::_backend::native::NativeGLRenderContext this1,int location,Float v0,Float v1,Float v2){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniform3f",0xaecae53d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniform3f","lime/graphics/opengl/GLES3Context.hx",2910,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v0,"v0")
		HX_STACK_ARG(v1,"v1")
		HX_STACK_ARG(v2,"v2")
		HX_STACK_LINE(2912)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2912)
		Float tmp1 = v0;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2912)
		Float tmp2 = v1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2912)
		Float tmp3 = v2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2912)
		this1->uniform3f(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,uniform3f,(void))

Void GLES3Context_Impl__obj::uniform3fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,int count,Float v){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniform3fv",0x42bdb099,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniform3fv","lime/graphics/opengl/GLES3Context.hx",2917,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(2919)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2919)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2919)
		Float tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2919)
		this1->uniform3fv(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,uniform3fv,(void))

Void GLES3Context_Impl__obj::uniform3i( ::lime::_backend::native::NativeGLRenderContext this1,int location,int v0,int v1,int v2){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniform3i",0xaecae540,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniform3i","lime/graphics/opengl/GLES3Context.hx",2924,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v0,"v0")
		HX_STACK_ARG(v1,"v1")
		HX_STACK_ARG(v2,"v2")
		HX_STACK_LINE(2926)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2926)
		int tmp1 = v0;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2926)
		int tmp2 = v1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2926)
		int tmp3 = v2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2926)
		this1->uniform3i(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,uniform3i,(void))

Void GLES3Context_Impl__obj::uniform3iv( ::lime::_backend::native::NativeGLRenderContext this1,int location,int count,Float v){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniform3iv",0x42bdb336,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniform3iv","lime/graphics/opengl/GLES3Context.hx",2931,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(2933)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2933)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2933)
		Float tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2933)
		this1->uniform3iv(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,uniform3iv,(void))

Void GLES3Context_Impl__obj::uniform3ui( ::lime::_backend::native::NativeGLRenderContext this1,int location,int v0,int v1,int v2){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniform3ui",0x42bdbd9d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniform3ui","lime/graphics/opengl/GLES3Context.hx",2938,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v0,"v0")
		HX_STACK_ARG(v1,"v1")
		HX_STACK_ARG(v2,"v2")
		HX_STACK_LINE(2940)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2940)
		int tmp1 = v0;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2940)
		int tmp2 = v1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2940)
		int tmp3 = v2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2940)
		this1->uniform3ui(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,uniform3ui,(void))

Void GLES3Context_Impl__obj::uniform3uiv( ::lime::_backend::native::NativeGLRenderContext this1,int location,int count,Float v){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniform3uiv",0x23482c39,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniform3uiv","lime/graphics/opengl/GLES3Context.hx",2945,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(2947)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2947)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2947)
		Float tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2947)
		this1->uniform3uiv(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,uniform3uiv,(void))

Void GLES3Context_Impl__obj::uniform4f( ::lime::_backend::native::NativeGLRenderContext this1,int location,Float v0,Float v1,Float v2,Float v3){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniform4f",0xaecae61c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniform4f","lime/graphics/opengl/GLES3Context.hx",2952,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v0,"v0")
		HX_STACK_ARG(v1,"v1")
		HX_STACK_ARG(v2,"v2")
		HX_STACK_ARG(v3,"v3")
		HX_STACK_LINE(2954)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2954)
		Float tmp1 = v0;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2954)
		Float tmp2 = v1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2954)
		Float tmp3 = v2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2954)
		Float tmp4 = v3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2954)
		this1->uniform4f(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GLES3Context_Impl__obj,uniform4f,(void))

Void GLES3Context_Impl__obj::uniform4fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,int count,Float v){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniform4fv",0x42be72da,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniform4fv","lime/graphics/opengl/GLES3Context.hx",2959,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(2961)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2961)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2961)
		Float tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2961)
		this1->uniform4fv(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,uniform4fv,(void))

Void GLES3Context_Impl__obj::uniform4i( ::lime::_backend::native::NativeGLRenderContext this1,int location,int v0,int v1,int v2,int v3){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniform4i",0xaecae61f,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniform4i","lime/graphics/opengl/GLES3Context.hx",2966,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v0,"v0")
		HX_STACK_ARG(v1,"v1")
		HX_STACK_ARG(v2,"v2")
		HX_STACK_ARG(v3,"v3")
		HX_STACK_LINE(2968)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2968)
		int tmp1 = v0;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2968)
		int tmp2 = v1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2968)
		int tmp3 = v2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2968)
		int tmp4 = v3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2968)
		this1->uniform4i(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GLES3Context_Impl__obj,uniform4i,(void))

Void GLES3Context_Impl__obj::uniform4iv( ::lime::_backend::native::NativeGLRenderContext this1,int location,int count,Float v){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniform4iv",0x42be7577,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniform4iv","lime/graphics/opengl/GLES3Context.hx",2973,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(2975)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2975)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2975)
		Float tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2975)
		this1->uniform4iv(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,uniform4iv,(void))

Void GLES3Context_Impl__obj::uniform4ui( ::lime::_backend::native::NativeGLRenderContext this1,int location,int v0,int v1,int v2,int v3){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniform4ui",0x42be7fde,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniform4ui","lime/graphics/opengl/GLES3Context.hx",2980,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v0,"v0")
		HX_STACK_ARG(v1,"v1")
		HX_STACK_ARG(v2,"v2")
		HX_STACK_ARG(v3,"v3")
		HX_STACK_LINE(2982)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2982)
		int tmp1 = v0;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2982)
		int tmp2 = v1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2982)
		int tmp3 = v2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2982)
		int tmp4 = v3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2982)
		this1->uniform4ui(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GLES3Context_Impl__obj,uniform4ui,(void))

Void GLES3Context_Impl__obj::uniform4uiv( ::lime::_backend::native::NativeGLRenderContext this1,int location,int count,Float v){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniform4uiv",0x23f162d8,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniform4uiv","lime/graphics/opengl/GLES3Context.hx",2987,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(2989)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2989)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2989)
		Float tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2989)
		this1->uniform4uiv(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,uniform4uiv,(void))

Void GLES3Context_Impl__obj::uniformBlockBinding( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int uniformBlockIndex,int uniformBlockBinding){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniformBlockBinding",0x81e29e82,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniformBlockBinding","lime/graphics/opengl/GLES3Context.hx",2996,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(uniformBlockIndex,"uniformBlockIndex")
		HX_STACK_ARG(uniformBlockBinding,"uniformBlockBinding")
		HX_STACK_LINE(2996)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,uniformBlockBinding,(void))

Void GLES3Context_Impl__obj::uniformMatrix2fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,int count,bool transpose,Float v){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniformMatrix2fv",0x5f0d1b17,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniformMatrix2fv","lime/graphics/opengl/GLES3Context.hx",3001,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(3003)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3003)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3003)
		bool tmp2 = transpose;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3003)
		Float tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3003)
		this1->uniformMatrix2fv(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,uniformMatrix2fv,(void))

Void GLES3Context_Impl__obj::uniformMatrix2x3fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,int count,bool transpose,Float v){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniformMatrix2x3fv",0x1c8ea852,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniformMatrix2x3fv","lime/graphics/opengl/GLES3Context.hx",3008,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(3010)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3010)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3010)
		bool tmp2 = transpose;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3010)
		Float tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3010)
		this1->uniformMatrix2x3fv(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,uniformMatrix2x3fv,(void))

Void GLES3Context_Impl__obj::uniformMatrix2x4fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,int count,bool transpose,Float v){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniformMatrix2x4fv",0x1c8f6a93,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniformMatrix2x4fv","lime/graphics/opengl/GLES3Context.hx",3015,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(3017)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3017)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3017)
		bool tmp2 = transpose;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3017)
		Float tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3017)
		this1->uniformMatrix2x4fv(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,uniformMatrix2x4fv,(void))

Void GLES3Context_Impl__obj::uniformMatrix3fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,int count,bool transpose,Float v){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniformMatrix3fv",0x5f0ddd58,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniformMatrix3fv","lime/graphics/opengl/GLES3Context.hx",3022,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(3024)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3024)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3024)
		bool tmp2 = transpose;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3024)
		Float tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3024)
		this1->uniformMatrix3fv(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,uniformMatrix3fv,(void))

Void GLES3Context_Impl__obj::uniformMatrix3x2fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,int count,bool transpose,Float v){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniformMatrix3x2fv",0xaff47a92,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniformMatrix3x2fv","lime/graphics/opengl/GLES3Context.hx",3029,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(3031)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3031)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3031)
		bool tmp2 = transpose;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3031)
		Float tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3031)
		this1->uniformMatrix3x2fv(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,uniformMatrix3x2fv,(void))

Void GLES3Context_Impl__obj::uniformMatrix3x4fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,int count,bool transpose,Float v){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniformMatrix3x4fv",0xaff5ff14,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniformMatrix3x4fv","lime/graphics/opengl/GLES3Context.hx",3036,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(3038)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3038)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3038)
		bool tmp2 = transpose;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3038)
		Float tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3038)
		this1->uniformMatrix3x4fv(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,uniformMatrix3x4fv,(void))

Void GLES3Context_Impl__obj::uniformMatrix4fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,int count,bool transpose,Float v){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniformMatrix4fv",0x5f0e9f99,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniformMatrix4fv","lime/graphics/opengl/GLES3Context.hx",3043,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(3045)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3045)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3045)
		bool tmp2 = transpose;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3045)
		Float tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3045)
		this1->uniformMatrix4fv(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,uniformMatrix4fv,(void))

Void GLES3Context_Impl__obj::uniformMatrix4x2fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,int count,bool transpose,Float v){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniformMatrix4x2fv",0x435b0f13,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniformMatrix4x2fv","lime/graphics/opengl/GLES3Context.hx",3050,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(3052)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3052)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3052)
		bool tmp2 = transpose;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3052)
		Float tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3052)
		this1->uniformMatrix4x2fv(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,uniformMatrix4x2fv,(void))

Void GLES3Context_Impl__obj::uniformMatrix4x3fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,int count,bool transpose,Float v){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","uniformMatrix4x3fv",0x435bd154,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.uniformMatrix4x3fv","lime/graphics/opengl/GLES3Context.hx",3057,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(3059)
		int tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3059)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3059)
		bool tmp2 = transpose;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3059)
		Float tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3059)
		this1->uniformMatrix4x3fv(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,uniformMatrix4x3fv,(void))

bool GLES3Context_Impl__obj::unmapBuffer( ::lime::_backend::native::NativeGLRenderContext this1,int target){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","unmapBuffer",0x0664daf9,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.unmapBuffer","lime/graphics/opengl/GLES3Context.hx",3066,0xe0a48039)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(target,"target")
	HX_STACK_LINE(3066)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,unmapBuffer,return )

Void GLES3Context_Impl__obj::useProgram( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","useProgram",0x5ee99a07,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.useProgram","lime/graphics/opengl/GLES3Context.hx",3071,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(3073)
		::lime::graphics::opengl::GLObject tmp = program;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3073)
		this1->useProgram(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,useProgram,(void))

Void GLES3Context_Impl__obj::validateProgram( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","validateProgram",0x9880cf44,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.validateProgram","lime/graphics/opengl/GLES3Context.hx",3078,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(3080)
		::lime::graphics::opengl::GLObject tmp = program;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3080)
		this1->validateProgram(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLES3Context_Impl__obj,validateProgram,(void))

Void GLES3Context_Impl__obj::vertexAttrib1f( ::lime::_backend::native::NativeGLRenderContext this1,int indx,Float x){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","vertexAttrib1f",0xe8900e6d,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.vertexAttrib1f","lime/graphics/opengl/GLES3Context.hx",3085,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(3087)
		int tmp = indx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3087)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3087)
		this1->vertexAttrib1f(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,vertexAttrib1f,(void))

Void GLES3Context_Impl__obj::vertexAttrib1fv( ::lime::_backend::native::NativeGLRenderContext this1,int indx,Float values){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","vertexAttrib1fv",0x957c9169,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.vertexAttrib1fv","lime/graphics/opengl/GLES3Context.hx",3092,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(3094)
		int tmp = indx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3094)
		Float tmp1 = values;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3094)
		this1->vertexAttrib1fv(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,vertexAttrib1fv,(void))

Void GLES3Context_Impl__obj::vertexAttrib2f( ::lime::_backend::native::NativeGLRenderContext this1,int indx,Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","vertexAttrib2f",0xe8900f4c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.vertexAttrib2f","lime/graphics/opengl/GLES3Context.hx",3099,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(3101)
		int tmp = indx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3101)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3101)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3101)
		this1->vertexAttrib2f(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,vertexAttrib2f,(void))

Void GLES3Context_Impl__obj::vertexAttrib2fv( ::lime::_backend::native::NativeGLRenderContext this1,int indx,Float values){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","vertexAttrib2fv",0x957d53aa,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.vertexAttrib2fv","lime/graphics/opengl/GLES3Context.hx",3106,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(3108)
		int tmp = indx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3108)
		Float tmp1 = values;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3108)
		this1->vertexAttrib2fv(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,vertexAttrib2fv,(void))

Void GLES3Context_Impl__obj::vertexAttrib3f( ::lime::_backend::native::NativeGLRenderContext this1,int indx,Float x,Float y,Float z){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","vertexAttrib3f",0xe890102b,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.vertexAttrib3f","lime/graphics/opengl/GLES3Context.hx",3113,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(3115)
		int tmp = indx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3115)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3115)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3115)
		Float tmp3 = z;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3115)
		this1->vertexAttrib3f(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,vertexAttrib3f,(void))

Void GLES3Context_Impl__obj::vertexAttrib3fv( ::lime::_backend::native::NativeGLRenderContext this1,int indx,Float values){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","vertexAttrib3fv",0x957e15eb,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.vertexAttrib3fv","lime/graphics/opengl/GLES3Context.hx",3120,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(3122)
		int tmp = indx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3122)
		Float tmp1 = values;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3122)
		this1->vertexAttrib3fv(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,vertexAttrib3fv,(void))

Void GLES3Context_Impl__obj::vertexAttrib4f( ::lime::_backend::native::NativeGLRenderContext this1,int indx,Float x,Float y,Float z,Float w){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","vertexAttrib4f",0xe890110a,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.vertexAttrib4f","lime/graphics/opengl/GLES3Context.hx",3127,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(3129)
		int tmp = indx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3129)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3129)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3129)
		Float tmp3 = z;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3129)
		Float tmp4 = w;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(3129)
		this1->vertexAttrib4f(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GLES3Context_Impl__obj,vertexAttrib4f,(void))

Void GLES3Context_Impl__obj::vertexAttrib4fv( ::lime::_backend::native::NativeGLRenderContext this1,int indx,Float values){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","vertexAttrib4fv",0x957ed82c,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.vertexAttrib4fv","lime/graphics/opengl/GLES3Context.hx",3134,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(3136)
		int tmp = indx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3136)
		Float tmp1 = values;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3136)
		this1->vertexAttrib4fv(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,vertexAttrib4fv,(void))

Void GLES3Context_Impl__obj::vertexAttribDivisor( ::lime::_backend::native::NativeGLRenderContext this1,int index,int divisor){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","vertexAttribDivisor",0x2194eae6,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.vertexAttribDivisor","lime/graphics/opengl/GLES3Context.hx",3143,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(divisor,"divisor")
		HX_STACK_LINE(3143)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,vertexAttribDivisor,(void))

Void GLES3Context_Impl__obj::vertexAttribI4i( ::lime::_backend::native::NativeGLRenderContext this1,int indx,int x,int y,int z,int w){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","vertexAttribI4i",0x958e9be6,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.vertexAttribI4i","lime/graphics/opengl/GLES3Context.hx",3150,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(3150)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GLES3Context_Impl__obj,vertexAttribI4i,(void))

Void GLES3Context_Impl__obj::vertexAttribI4iv( ::lime::_backend::native::NativeGLRenderContext this1,int indx,Float values){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","vertexAttribI4iv",0x4739cdd0,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.vertexAttribI4iv","lime/graphics/opengl/GLES3Context.hx",3157,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(3157)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,vertexAttribI4iv,(void))

Void GLES3Context_Impl__obj::vertexAttribI4ui( ::lime::_backend::native::NativeGLRenderContext this1,int indx,int x,int y,int z,int w){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","vertexAttribI4ui",0x4739d837,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.vertexAttribI4ui","lime/graphics/opengl/GLES3Context.hx",3164,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(3164)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GLES3Context_Impl__obj,vertexAttribI4ui,(void))

Void GLES3Context_Impl__obj::vertexAttribI4uiv( ::lime::_backend::native::NativeGLRenderContext this1,int indx,Float values){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","vertexAttribI4uiv",0x0b63585f,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.vertexAttribI4uiv","lime/graphics/opengl/GLES3Context.hx",3171,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(3171)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLES3Context_Impl__obj,vertexAttribI4uiv,(void))

Void GLES3Context_Impl__obj::vertexAttribIPointer( ::lime::_backend::native::NativeGLRenderContext this1,int indx,int size,int type,int stride,Float pointer){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","vertexAttribIPointer",0x7f5268cc,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.vertexAttribIPointer","lime/graphics/opengl/GLES3Context.hx",3178,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(stride,"stride")
		HX_STACK_ARG(pointer,"pointer")
		HX_STACK_LINE(3178)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GLES3Context_Impl__obj,vertexAttribIPointer,(void))

Void GLES3Context_Impl__obj::vertexAttribPointer( ::lime::_backend::native::NativeGLRenderContext this1,int indx,int size,int type,bool normalized,int stride,Float pointer){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","vertexAttribPointer",0x01d3e645,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.vertexAttribPointer","lime/graphics/opengl/GLES3Context.hx",3183,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(normalized,"normalized")
		HX_STACK_ARG(stride,"stride")
		HX_STACK_ARG(pointer,"pointer")
		HX_STACK_LINE(3185)
		int tmp = indx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3185)
		int tmp1 = size;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3185)
		int tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3185)
		bool tmp3 = normalized;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3185)
		int tmp4 = stride;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(3185)
		Float tmp5 = pointer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(3185)
		this1->vertexAttribPointer(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(GLES3Context_Impl__obj,vertexAttribPointer,(void))

Void GLES3Context_Impl__obj::viewport( ::lime::_backend::native::NativeGLRenderContext this1,int x,int y,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","viewport",0xcb5042f0,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.viewport","lime/graphics/opengl/GLES3Context.hx",3190,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(3192)
		int tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3192)
		int tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3192)
		int tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3192)
		int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3192)
		this1->viewport(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLES3Context_Impl__obj,viewport,(void))

Void GLES3Context_Impl__obj::waitSync( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject sync,int flags,cpp::Int64Struct timeout){
{
		HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","waitSync",0x83ed15fa,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.waitSync","lime/graphics/opengl/GLES3Context.hx",3199,0xe0a48039)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(sync,"sync")
		HX_STACK_ARG(flags,"flags")
		HX_STACK_ARG(timeout,"timeout")
		HX_STACK_LINE(3199)
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLES3Context_Impl__obj,waitSync,(void))

::lime::_backend::native::NativeGLRenderContext GLES3Context_Impl__obj::fromGL( ::hx::Class gl){
	HX_STACK_FRAME("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","fromGL",0x02d1f219,"lime.graphics.opengl._GLES3Context.GLES3Context_Impl_.fromGL","lime/graphics/opengl/GLES3Context.hx",3204,0xe0a48039)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(3207)
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3207)
	::lime::_backend::native::NativeGLRenderContext tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3207)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES3Context_Impl__obj,fromGL,return )


GLES3Context_Impl__obj::GLES3Context_Impl__obj()
{
}

bool GLES3Context_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hint") ) { outValue = hint_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"flush") ) { outValue = flush_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_CW") ) { outValue = get_CW_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_R8") ) { outValue = get_R8_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RG") ) { outValue = get_RG_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"enable") ) { outValue = enable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"finish") ) { outValue = finish_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromGL") ) { outValue = fromGL_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_ONE") ) { outValue = get_ONE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_CCW") ) { outValue = get_CCW_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_INT") ) { outValue = get_INT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGB") ) { outValue = get_RGB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RED") ) { outValue = get_RED_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RG8") ) { outValue = get_RG8_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_R8I") ) { outValue = get_R8I_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MIN") ) { outValue = get_MIN_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX") ) { outValue = get_MAX_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"disable") ) { outValue = disable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isQuery") ) { outValue = isQuery_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"scissor") ) { outValue = scissor_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_ZERO") ) { outValue = get_ZERO_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_BACK") ) { outValue = get_BACK_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_BYTE") ) { outValue = get_BYTE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGBA") ) { outValue = get_RGBA_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_LESS") ) { outValue = get_LESS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_KEEP") ) { outValue = get_KEEP_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_INCR") ) { outValue = get_INCR_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DECR") ) { outValue = get_DECR_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_BOOL") ) { outValue = get_BOOL_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_NONE") ) { outValue = get_NONE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_type") ) { outValue = get_type_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGB8") ) { outValue = get_RGB8_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SRGB") ) { outValue = get_SRGB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_R16F") ) { outValue = get_R16F_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_R32F") ) { outValue = get_R32F_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_R8UI") ) { outValue = get_R8UI_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_R16I") ) { outValue = get_R16I_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_R32I") ) { outValue = get_R32I_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RG8I") ) { outValue = get_RG8I_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cullFace") ) { outValue = cullFace_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"endQuery") ) { outValue = endQuery_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getError") ) { outValue = getError_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getFloat") ) { outValue = getFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isBuffer") ) { outValue = isBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isShader") ) { outValue = isShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"viewport") ) { outValue = viewport_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"waitSync") ) { outValue = waitSync_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_LINES") ) { outValue = get_LINES_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FRONT") ) { outValue = get_FRONT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_BLEND") ) { outValue = get_BLEND_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SHORT") ) { outValue = get_SHORT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FLOAT") ) { outValue = get_FLOAT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_ALPHA") ) { outValue = get_ALPHA_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_NEVER") ) { outValue = get_NEVER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_EQUAL") ) { outValue = get_EQUAL_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGBA4") ) { outValue = get_RGBA4_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGBA8") ) { outValue = get_RGBA8_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SRGB8") ) { outValue = get_SRGB8_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGB8I") ) { outValue = get_RGB8I_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RG16F") ) { outValue = get_RG16F_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RG32F") ) { outValue = get_RG32F_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_R16UI") ) { outValue = get_R16UI_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_R32UI") ) { outValue = get_R32UI_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RG8UI") ) { outValue = get_RG8UI_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RG16I") ) { outValue = get_RG16I_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RG32I") ) { outValue = get_RG32I_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_COLOR") ) { outValue = get_COLOR_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DEPTH") ) { outValue = get_DEPTH_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"blendFunc") ) { outValue = blendFunc_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"colorMask") ) { outValue = colorMask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"depthFunc") ) { outValue = depthFunc_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"depthMask") ) { outValue = depthMask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fenceSync") ) { outValue = fenceSync_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"frontFace") ) { outValue = frontFace_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getFloatv") ) { outValue = getFloatv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getQueryi") ) { outValue = getQueryi_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getString") ) { outValue = getString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isEnabled") ) { outValue = isEnabled_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isProgram") ) { outValue = isProgram_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isSampler") ) { outValue = isSampler_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isTexture") ) { outValue = isTexture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lineWidth") ) { outValue = lineWidth_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stencilOp") ) { outValue = stencilOp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform1f") ) { outValue = uniform1f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform1i") ) { outValue = uniform1i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform2f") ) { outValue = uniform2f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform2i") ) { outValue = uniform2i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform3f") ) { outValue = uniform3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform3i") ) { outValue = uniform3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform4f") ) { outValue = uniform4f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform4i") ) { outValue = uniform4i_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_POINTS") ) { outValue = get_POINTS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DITHER") ) { outValue = get_DITHER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_NICEST") ) { outValue = get_NICEST_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_LEQUAL") ) { outValue = get_LEQUAL_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_GEQUAL") ) { outValue = get_GEQUAL_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_ALWAYS") ) { outValue = get_ALWAYS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_INVERT") ) { outValue = get_INVERT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_VENDOR") ) { outValue = get_VENDOR_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_LINEAR") ) { outValue = get_LINEAR_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_REPEAT") ) { outValue = get_REPEAT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGB565") ) { outValue = get_RGB565_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGB32F") ) { outValue = get_RGB32F_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGB16F") ) { outValue = get_RGB16F_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGB8UI") ) { outValue = get_RGB8UI_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGB32I") ) { outValue = get_RGB32I_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGB16I") ) { outValue = get_RGB16I_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGBA8I") ) { outValue = get_RGBA8I_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RG16UI") ) { outValue = get_RG16UI_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RG32UI") ) { outValue = get_RG32UI_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"beginQuery") ) { outValue = beginQuery_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bindBuffer") ) { outValue = bindBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"blendColor") ) { outValue = blendColor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bufferData") ) { outValue = bufferData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clearColor") ) { outValue = clearColor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteSync") ) { outValue = deleteSync_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawArrays") ) { outValue = drawArrays_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"genBuffers") ) { outValue = genBuffers_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"genQueries") ) { outValue = genQueries_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBoolean") ) { outValue = getBoolean_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getInteger") ) { outValue = getInteger_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getQueryiv") ) { outValue = getQueryiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getShaderi") ) { outValue = getShaderi_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getStringi") ) { outValue = getStringi_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"readBuffer") ) { outValue = readBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"readPixels") ) { outValue = readPixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"texImage2D") ) { outValue = texImage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"texImage3D") ) { outValue = texImage3D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform1fv") ) { outValue = uniform1fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform1iv") ) { outValue = uniform1iv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform1ui") ) { outValue = uniform1ui_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform2fv") ) { outValue = uniform2fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform2iv") ) { outValue = uniform2iv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform2ui") ) { outValue = uniform2ui_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform3fv") ) { outValue = uniform3fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform3iv") ) { outValue = uniform3iv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform3ui") ) { outValue = uniform3ui_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform4fv") ) { outValue = uniform4fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform4iv") ) { outValue = uniform4iv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform4ui") ) { outValue = uniform4ui_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"useProgram") ) { outValue = useProgram_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_SAMPLES") ) { outValue = get_SAMPLES_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FASTEST") ) { outValue = get_FASTEST_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_GREATER") ) { outValue = get_GREATER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_REPLACE") ) { outValue = get_REPLACE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_VERSION") ) { outValue = get_VERSION_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_NEAREST") ) { outValue = get_NEAREST_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE") ) { outValue = get_TEXTURE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_LOW_INT") ) { outValue = get_LOW_INT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGB5_A1") ) { outValue = get_RGB5_A1_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_version") ) { outValue = get_version_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGBA32F") ) { outValue = get_RGBA32F_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGBA16F") ) { outValue = get_RGBA16F_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGB9_E5") ) { outValue = get_RGB9_E5_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGB32UI") ) { outValue = get_RGB32UI_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGB16UI") ) { outValue = get_RGB16UI_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGBA8UI") ) { outValue = get_RGBA8UI_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGBA32I") ) { outValue = get_RGBA32I_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGBA16I") ) { outValue = get_RGBA16I_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_STENCIL") ) { outValue = get_STENCIL_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bindSampler") ) { outValue = bindSampler_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bindTexture") ) { outValue = bindTexture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clearDepthf") ) { outValue = clearDepthf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createQuery") ) { outValue = createQuery_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteQuery") ) { outValue = deleteQuery_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"depthRangef") ) { outValue = depthRangef_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawBuffers") ) { outValue = drawBuffers_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"genSamplers") ) { outValue = genSamplers_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"genTextures") ) { outValue = genTextures_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBooleanv") ) { outValue = getBooleanv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getIntegeri") ) { outValue = getIntegeri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getIntegerv") ) { outValue = getIntegerv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getProgrami") ) { outValue = getProgrami_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getShaderiv") ) { outValue = getShaderiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUniformf") ) { outValue = getUniformf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUniformi") ) { outValue = getUniformi_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"linkProgram") ) { outValue = linkProgram_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pixelStorei") ) { outValue = pixelStorei_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stencilFunc") ) { outValue = stencilFunc_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stencilMask") ) { outValue = stencilMask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform1uiv") ) { outValue = uniform1uiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform2uiv") ) { outValue = uniform2uiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform3uiv") ) { outValue = uniform3uiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform4uiv") ) { outValue = uniform4uiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"unmapBuffer") ) { outValue = unmapBuffer_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_FUNC_ADD") ) { outValue = get_FUNC_ADD_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_NO_ERROR") ) { outValue = get_NO_ERROR_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_VIEWPORT") ) { outValue = get_VIEWPORT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RED_BITS") ) { outValue = get_RED_BITS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_NOTEQUAL") ) { outValue = get_NOTEQUAL_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RENDERER") ) { outValue = get_RENDERER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE0") ) { outValue = get_TEXTURE0_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE1") ) { outValue = get_TEXTURE1_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE2") ) { outValue = get_TEXTURE2_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE3") ) { outValue = get_TEXTURE3_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE4") ) { outValue = get_TEXTURE4_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE5") ) { outValue = get_TEXTURE5_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE6") ) { outValue = get_TEXTURE6_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE7") ) { outValue = get_TEXTURE7_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE8") ) { outValue = get_TEXTURE8_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE9") ) { outValue = get_TEXTURE9_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_INT_VEC2") ) { outValue = get_INT_VEC2_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_INT_VEC3") ) { outValue = get_INT_VEC3_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_INT_VEC4") ) { outValue = get_INT_VEC4_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_HIGH_INT") ) { outValue = get_HIGH_INT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGB10_A2") ) { outValue = get_RGB10_A2_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGBA32UI") ) { outValue = get_RGBA32UI_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGBA16UI") ) { outValue = get_RGBA16UI_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_R8_SNORM") ) { outValue = get_R8_SNORM_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SIGNALED") ) { outValue = get_SIGNALED_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"attachShader") ) { outValue = attachShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clearStencil") ) { outValue = clearStencil_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { outValue = createBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createShader") ) { outValue = createShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteBuffer") ) { outValue = deleteBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteShader") ) { outValue = deleteShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"detachShader") ) { outValue = detachShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawElements") ) { outValue = drawElements_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getExtension") ) { outValue = getExtension_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getInteger64") ) { outValue = getInteger64_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getProgramiv") ) { outValue = getProgramiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUniformfv") ) { outValue = getUniformfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUniformiv") ) { outValue = getUniformiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUniformui") ) { outValue = getUniformui_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"shaderBinary") ) { outValue = shaderBinary_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"shaderSource") ) { outValue = shaderSource_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"texStorage2D") ) { outValue = texStorage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"texStorage3D") ) { outValue = texStorage3D_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_LINE_LOOP") ) { outValue = get_LINE_LOOP_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TRIANGLES") ) { outValue = get_TRIANGLES_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SRC_COLOR") ) { outValue = get_SRC_COLOR_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SRC_ALPHA") ) { outValue = get_SRC_ALPHA_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DST_ALPHA") ) { outValue = get_DST_ALPHA_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DST_COLOR") ) { outValue = get_DST_COLOR_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_CULL_FACE") ) { outValue = get_CULL_FACE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_BLUE_BITS") ) { outValue = get_BLUE_BITS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DONT_CARE") ) { outValue = get_DONT_CARE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_LUMINANCE") ) { outValue = get_LUMINANCE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_INCR_WRAP") ) { outValue = get_INCR_WRAP_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DECR_WRAP") ) { outValue = get_DECR_WRAP_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE10") ) { outValue = get_TEXTURE10_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE11") ) { outValue = get_TEXTURE11_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE12") ) { outValue = get_TEXTURE12_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE13") ) { outValue = get_TEXTURE13_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE14") ) { outValue = get_TEXTURE14_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE15") ) { outValue = get_TEXTURE15_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE16") ) { outValue = get_TEXTURE16_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE17") ) { outValue = get_TEXTURE17_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE18") ) { outValue = get_TEXTURE18_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE19") ) { outValue = get_TEXTURE19_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE20") ) { outValue = get_TEXTURE20_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE21") ) { outValue = get_TEXTURE21_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE22") ) { outValue = get_TEXTURE22_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE23") ) { outValue = get_TEXTURE23_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE24") ) { outValue = get_TEXTURE24_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE25") ) { outValue = get_TEXTURE25_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE26") ) { outValue = get_TEXTURE26_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE27") ) { outValue = get_TEXTURE27_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE28") ) { outValue = get_TEXTURE28_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE29") ) { outValue = get_TEXTURE29_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE30") ) { outValue = get_TEXTURE30_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE31") ) { outValue = get_TEXTURE31_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_BOOL_VEC2") ) { outValue = get_BOOL_VEC2_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_BOOL_VEC3") ) { outValue = get_BOOL_VEC3_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_BOOL_VEC4") ) { outValue = get_BOOL_VEC4_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_LOW_FLOAT") ) { outValue = get_LOW_FLOAT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RG8_SNORM") ) { outValue = get_RG8_SNORM_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"activeTexture") ) { outValue = activeTexture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"blendEquation") ) { outValue = blendEquation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bufferSubData") ) { outValue = bufferSubData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clearBufferfi") ) { outValue = clearBufferfi_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clearBufferfv") ) { outValue = clearBufferfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clearBufferiv") ) { outValue = clearBufferiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"compileShader") ) { outValue = compileShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createProgram") ) { outValue = createProgram_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createSampler") ) { outValue = createSampler_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createTexture") ) { outValue = createTexture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteProgram") ) { outValue = deleteProgram_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteSampler") ) { outValue = deleteSampler_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteTexture") ) { outValue = deleteTexture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getInteger64i") ) { outValue = getInteger64i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getInteger64v") ) { outValue = getInteger64v_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getIntegeri_v") ) { outValue = getIntegeri_v_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUniformuiv") ) { outValue = getUniformuiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isFramebuffer") ) { outValue = isFramebuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isVertexArray") ) { outValue = isVertexArray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"polygonOffset") ) { outValue = polygonOffset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"programBinary") ) { outValue = programBinary_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"texParameterf") ) { outValue = texParameterf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"texParameteri") ) { outValue = texParameteri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"texSubImage2D") ) { outValue = texSubImage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"texSubImage3D") ) { outValue = texSubImage3D_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_EXTENSIONS") ) { outValue = get_EXTENSIONS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_LINE_STRIP") ) { outValue = get_LINE_STRIP_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DEPTH_TEST") ) { outValue = get_DEPTH_TEST_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_LINE_WIDTH") ) { outValue = get_LINE_WIDTH_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FRONT_FACE") ) { outValue = get_FRONT_FACE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DEPTH_FUNC") ) { outValue = get_DEPTH_FUNC_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_GREEN_BITS") ) { outValue = get_GREEN_BITS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_ALPHA_BITS") ) { outValue = get_ALPHA_BITS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DEPTH_BITS") ) { outValue = get_DEPTH_BITS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE_2D") ) { outValue = get_TEXTURE_2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FLOAT_VEC2") ) { outValue = get_FLOAT_VEC2_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FLOAT_VEC3") ) { outValue = get_FLOAT_VEC3_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FLOAT_VEC4") ) { outValue = get_FLOAT_VEC4_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FLOAT_MAT2") ) { outValue = get_FLOAT_MAT2_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FLOAT_MAT3") ) { outValue = get_FLOAT_MAT3_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FLOAT_MAT4") ) { outValue = get_FLOAT_MAT4_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SAMPLER_2D") ) { outValue = get_SAMPLER_2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_HIGH_FLOAT") ) { outValue = get_HIGH_FLOAT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MEDIUM_INT") ) { outValue = get_MEDIUM_INT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE_3D") ) { outValue = get_TEXTURE_3D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGB8_SNORM") ) { outValue = get_RGB8_SNORM_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGB10_A2UI") ) { outValue = get_RGB10_A2UI_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_HALF_FLOAT") ) { outValue = get_HALF_FLOAT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RG_INTEGER") ) { outValue = get_RG_INTEGER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SAMPLER_3D") ) { outValue = get_SAMPLER_3D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SYNC_FLAGS") ) { outValue = get_SYNC_FLAGS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SYNC_FENCE") ) { outValue = get_SYNC_FENCE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNSIGNALED") ) { outValue = get_UNSIGNALED_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bindBufferBase") ) { outValue = bindBufferBase_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clearBufferuiv") ) { outValue = clearBufferuiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clientWaitSync") ) { outValue = clientWaitSync_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"copyTexImage2D") ) { outValue = copyTexImage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"generateMipmap") ) { outValue = generateMipmap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isRenderbuffer") ) { outValue = isRenderbuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"mapBufferRange") ) { outValue = mapBufferRange_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sampleCoverage") ) { outValue = sampleCoverage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib1f") ) { outValue = vertexAttrib1f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib2f") ) { outValue = vertexAttrib2f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib3f") ) { outValue = vertexAttrib3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib4f") ) { outValue = vertexAttrib4f_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_BLEND_COLOR") ) { outValue = get_BLEND_COLOR_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_STREAM_DRAW") ) { outValue = get_STREAM_DRAW_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_STATIC_DRAW") ) { outValue = get_STATIC_DRAW_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_BUFFER_SIZE") ) { outValue = get_BUFFER_SIZE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DEPTH_RANGE") ) { outValue = get_DEPTH_RANGE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_STENCIL_REF") ) { outValue = get_STENCIL_REF_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SCISSOR_BOX") ) { outValue = get_SCISSOR_BOX_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SHADER_TYPE") ) { outValue = get_SHADER_TYPE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_LINK_STATUS") ) { outValue = get_LINK_STATUS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FRAMEBUFFER") ) { outValue = get_FRAMEBUFFER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_READ_BUFFER") ) { outValue = get_READ_BUFFER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RED_INTEGER") ) { outValue = get_RED_INTEGER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGB_INTEGER") ) { outValue = get_RGB_INTEGER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGBA8_SNORM") ) { outValue = get_RGBA8_SNORM_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_SAMPLES") ) { outValue = get_MAX_SAMPLES_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_OBJECT_TYPE") ) { outValue = get_OBJECT_TYPE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SYNC_STATUS") ) { outValue = get_SYNC_STATUS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_WAIT_FAILED") ) { outValue = get_WAIT_FAILED_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_STREAM_READ") ) { outValue = get_STREAM_READ_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_STREAM_COPY") ) { outValue = get_STREAM_COPY_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_STATIC_READ") ) { outValue = get_STATIC_READ_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_STATIC_COPY") ) { outValue = get_STATIC_COPY_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bindBufferRange") ) { outValue = bindBufferRange_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bindFramebuffer") ) { outValue = bindFramebuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bindVertexArray") ) { outValue = bindVertexArray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"blitFramebuffer") ) { outValue = blitFramebuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"genFramebuffers") ) { outValue = genFramebuffers_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getActiveAttrib") ) { outValue = getActiveAttrib_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getInteger64i_v") ) { outValue = getInteger64i_v_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getShaderSource") ) { outValue = getShaderSource_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"validateProgram") ) { outValue = validateProgram_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib1fv") ) { outValue = vertexAttrib1fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib2fv") ) { outValue = vertexAttrib2fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib3fv") ) { outValue = vertexAttrib3fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib4fv") ) { outValue = vertexAttrib4fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttribI4i") ) { outValue = vertexAttribI4i_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_TRIANGLE_FAN") ) { outValue = get_TRIANGLE_FAN_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_ARRAY_BUFFER") ) { outValue = get_ARRAY_BUFFER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DYNAMIC_DRAW") ) { outValue = get_DYNAMIC_DRAW_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_BUFFER_USAGE") ) { outValue = get_BUFFER_USAGE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_STENCIL_TEST") ) { outValue = get_STENCIL_TEST_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SCISSOR_TEST") ) { outValue = get_SCISSOR_TEST_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_INVALID_ENUM") ) { outValue = get_INVALID_ENUM_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_STENCIL_FUNC") ) { outValue = get_STENCIL_FUNC_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_STENCIL_FAIL") ) { outValue = get_STENCIL_FAIL_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_STENCIL_BITS") ) { outValue = get_STENCIL_BITS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNSIGNED_INT") ) { outValue = get_UNSIGNED_INT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SAMPLER_CUBE") ) { outValue = get_SAMPLER_CUBE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_POINT_SPRITE") ) { outValue = get_POINT_SPRITE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MEDIUM_FLOAT") ) { outValue = get_MEDIUM_FLOAT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RENDERBUFFER") ) { outValue = get_RENDERBUFFER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SRGB8_ALPHA8") ) { outValue = get_SRGB8_ALPHA8_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RGBA_INTEGER") ) { outValue = get_RGBA_INTEGER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_QUERY_RESULT") ) { outValue = get_QUERY_RESULT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DRAW_BUFFER0") ) { outValue = get_DRAW_BUFFER0_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DRAW_BUFFER1") ) { outValue = get_DRAW_BUFFER1_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DRAW_BUFFER2") ) { outValue = get_DRAW_BUFFER2_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DRAW_BUFFER3") ) { outValue = get_DRAW_BUFFER3_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DRAW_BUFFER4") ) { outValue = get_DRAW_BUFFER4_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DRAW_BUFFER5") ) { outValue = get_DRAW_BUFFER5_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DRAW_BUFFER6") ) { outValue = get_DRAW_BUFFER6_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DRAW_BUFFER7") ) { outValue = get_DRAW_BUFFER7_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DRAW_BUFFER8") ) { outValue = get_DRAW_BUFFER8_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DRAW_BUFFER9") ) { outValue = get_DRAW_BUFFER9_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FLOAT_MAT2x3") ) { outValue = get_FLOAT_MAT2x3_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FLOAT_MAT2x4") ) { outValue = get_FLOAT_MAT2x4_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FLOAT_MAT3x2") ) { outValue = get_FLOAT_MAT3x2_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FLOAT_MAT3x4") ) { outValue = get_FLOAT_MAT3x4_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FLOAT_MAT4x2") ) { outValue = get_FLOAT_MAT4x2_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FLOAT_MAT4x3") ) { outValue = get_FLOAT_MAT4x3_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNIFORM_TYPE") ) { outValue = get_UNIFORM_TYPE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNIFORM_SIZE") ) { outValue = get_UNIFORM_SIZE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DYNAMIC_READ") ) { outValue = get_DYNAMIC_READ_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DYNAMIC_COPY") ) { outValue = get_DYNAMIC_COPY_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bindRenderbuffer") ) { outValue = bindRenderbuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"genRenderbuffers") ) { outValue = genRenderbuffers_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getActiveUniform") ) { outValue = getActiveUniform_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getProgramBinary") ) { outValue = getProgramBinary_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getQueryObjectui") ) { outValue = getQueryObjectui_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getShaderInfoLog") ) { outValue = getShaderInfoLog_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getTexParameterf") ) { outValue = getTexParameterf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getTexParameteri") ) { outValue = getTexParameteri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getVertexAttribf") ) { outValue = getVertexAttribf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getVertexAttribi") ) { outValue = getVertexAttribi_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformMatrix2fv") ) { outValue = uniformMatrix2fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformMatrix3fv") ) { outValue = uniformMatrix3fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformMatrix4fv") ) { outValue = uniformMatrix4fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttribI4iv") ) { outValue = vertexAttribI4iv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttribI4ui") ) { outValue = vertexAttribI4ui_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_FUNC_SUBTRACT") ) { outValue = get_FUNC_SUBTRACT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_BLEND_DST_RGB") ) { outValue = get_BLEND_DST_RGB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_BLEND_SRC_RGB") ) { outValue = get_BLEND_SRC_RGB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_INVALID_VALUE") ) { outValue = get_INVALID_VALUE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_OUT_OF_MEMORY") ) { outValue = get_OUT_OF_MEMORY_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SUBPIXEL_BITS") ) { outValue = get_SUBPIXEL_BITS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNSIGNED_BYTE") ) { outValue = get_UNSIGNED_BYTE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_VERTEX_SHADER") ) { outValue = get_VERTEX_SHADER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DELETE_STATUS") ) { outValue = get_DELETE_STATUS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_CLAMP_TO_EDGE") ) { outValue = get_CLAMP_TO_EDGE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_STENCIL_INDEX") ) { outValue = get_STENCIL_INDEX_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DEPTH_STENCIL") ) { outValue = get_DEPTH_STENCIL_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_CURRENT_QUERY") ) { outValue = get_CURRENT_QUERY_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DRAW_BUFFER10") ) { outValue = get_DRAW_BUFFER10_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DRAW_BUFFER11") ) { outValue = get_DRAW_BUFFER11_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DRAW_BUFFER12") ) { outValue = get_DRAW_BUFFER12_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DRAW_BUFFER13") ) { outValue = get_DRAW_BUFFER13_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DRAW_BUFFER14") ) { outValue = get_DRAW_BUFFER14_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DRAW_BUFFER15") ) { outValue = get_DRAW_BUFFER15_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_INVALID_INDEX") ) { outValue = get_INVALID_INDEX_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"blendFuncSeparate") ) { outValue = blendFuncSeparate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"copyBufferSubData") ) { outValue = copyBufferSubData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"copyTexSubImage2D") ) { outValue = copyTexSubImage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"copyTexSubImage3D") ) { outValue = copyTexSubImage3D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createFramebuffer") ) { outValue = createFramebuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createVertexArray") ) { outValue = createVertexArray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteFramebuffer") ) { outValue = deleteFramebuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteVertexArray") ) { outValue = deleteVertexArray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawRangeElements") ) { outValue = drawRangeElements_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getAttribLocation") ) { outValue = getAttribLocation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBufferPointerv") ) { outValue = getBufferPointerv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getProgramInfoLog") ) { outValue = getProgramInfoLog_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getQueryObjectuiv") ) { outValue = getQueryObjectuiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSyncParameteri") ) { outValue = getSyncParameteri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getTexParameterfv") ) { outValue = getTexParameterfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getTexParameteriv") ) { outValue = getTexParameteriv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUniformIndices") ) { outValue = getUniformIndices_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getVertexAttribfv") ) { outValue = getVertexAttribfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getVertexAttribIi") ) { outValue = getVertexAttribIi_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getVertexAttribiv") ) { outValue = getVertexAttribiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"programParameteri") ) { outValue = programParameteri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"samplerParameterf") ) { outValue = samplerParameterf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"samplerParameteri") ) { outValue = samplerParameteri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stencilOpSeparate") ) { outValue = stencilOpSeparate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttribI4uiv") ) { outValue = vertexAttribI4uiv_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_TRIANGLE_STRIP") ) { outValue = get_TRIANGLE_STRIP_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_BLEND_EQUATION") ) { outValue = get_BLEND_EQUATION_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_CONSTANT_COLOR") ) { outValue = get_CONSTANT_COLOR_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_CONSTANT_ALPHA") ) { outValue = get_CONSTANT_ALPHA_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FRONT_AND_BACK") ) { outValue = get_FRONT_AND_BACK_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_CULL_FACE_MODE") ) { outValue = get_CULL_FACE_MODE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_PACK_ALIGNMENT") ) { outValue = get_PACK_ALIGNMENT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SAMPLE_BUFFERS") ) { outValue = get_SAMPLE_BUFFERS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNSIGNED_SHORT") ) { outValue = get_UNSIGNED_SHORT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE_WRAP_S") ) { outValue = get_TEXTURE_WRAP_S_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE_WRAP_T") ) { outValue = get_TEXTURE_WRAP_T_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_ACTIVE_TEXTURE") ) { outValue = get_ACTIVE_TEXTURE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_COMPILE_STATUS") ) { outValue = get_COMPILE_STATUS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_STENCIL_INDEX8") ) { outValue = get_STENCIL_INDEX8_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_PACK_SKIP_ROWS") ) { outValue = get_PACK_SKIP_ROWS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE_WRAP_R") ) { outValue = get_TEXTURE_WRAP_R_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_R11F_G11F_B10F") ) { outValue = get_R11F_G11F_B10F_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_INT_SAMPLER_2D") ) { outValue = get_INT_SAMPLER_2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_INT_SAMPLER_3D") ) { outValue = get_INT_SAMPLER_3D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNIFORM_BUFFER") ) { outValue = get_UNIFORM_BUFFER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNIFORM_OFFSET") ) { outValue = get_UNIFORM_OFFSET_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SYNC_CONDITION") ) { outValue = get_SYNC_CONDITION_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bindAttribLocation") ) { outValue = bindAttribLocation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createRenderbuffer") ) { outValue = createRenderbuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteRenderbuffer") ) { outValue = deleteRenderbuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getAttachedShaders") ) { outValue = getAttachedShaders_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getInternalformati") ) { outValue = getInternalformati_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSyncParameteriv") ) { outValue = getSyncParameteriv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUniformLocation") ) { outValue = getUniformLocation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getVertexAttribIiv") ) { outValue = getVertexAttribIiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getVertexAttribIui") ) { outValue = getVertexAttribIui_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformMatrix2x3fv") ) { outValue = uniformMatrix2x3fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformMatrix2x4fv") ) { outValue = uniformMatrix2x4fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformMatrix3x2fv") ) { outValue = uniformMatrix3x2fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformMatrix3x4fv") ) { outValue = uniformMatrix3x4fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformMatrix4x2fv") ) { outValue = uniformMatrix4x2fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformMatrix4x3fv") ) { outValue = uniformMatrix4x3fv_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_BLEND_DST_ALPHA") ) { outValue = get_BLEND_DST_ALPHA_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_BLEND_SRC_ALPHA") ) { outValue = get_BLEND_SRC_ALPHA_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SAMPLE_COVERAGE") ) { outValue = get_SAMPLE_COVERAGE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DEPTH_WRITEMASK") ) { outValue = get_DEPTH_WRITEMASK_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_COLOR_WRITEMASK") ) { outValue = get_COLOR_WRITEMASK_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DEPTH_COMPONENT") ) { outValue = get_DEPTH_COMPONENT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_LUMINANCE_ALPHA") ) { outValue = get_LUMINANCE_ALPHA_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FRAGMENT_SHADER") ) { outValue = get_FRAGMENT_SHADER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_VALIDATE_STATUS") ) { outValue = get_VALIDATE_STATUS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_ACTIVE_UNIFORMS") ) { outValue = get_ACTIVE_UNIFORMS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_CURRENT_PROGRAM") ) { outValue = get_CURRENT_PROGRAM_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MIRRORED_REPEAT") ) { outValue = get_MIRRORED_REPEAT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_PACK_ROW_LENGTH") ) { outValue = get_PACK_ROW_LENGTH_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE_MIN_LOD") ) { outValue = get_TEXTURE_MIN_LOD_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE_MAX_LOD") ) { outValue = get_TEXTURE_MAX_LOD_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SAMPLER_BINDING") ) { outValue = get_SAMPLER_BINDING_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TIMEOUT_EXPIRED") ) { outValue = get_TIMEOUT_EXPIRED_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TIMEOUT_IGNORED") ) { outValue = get_TIMEOUT_IGNORED_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawArraysInstanced") ) { outValue = drawArraysInstanced_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getActiveUniformsiv") ) { outValue = getActiveUniformsiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBufferParameteri") ) { outValue = getBufferParameteri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getFragDataLocation") ) { outValue = getFragDataLocation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getInternalformativ") ) { outValue = getInternalformativ_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getVertexAttribIuiv") ) { outValue = getVertexAttribIuiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isTransformFeedback") ) { outValue = isTransformFeedback_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"renderbufferStorage") ) { outValue = renderbufferStorage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stencilFuncSeparate") ) { outValue = stencilFuncSeparate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stencilMaskSeparate") ) { outValue = stencilMaskSeparate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformBlockBinding") ) { outValue = uniformBlockBinding_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttribDivisor") ) { outValue = vertexAttribDivisor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttribPointer") ) { outValue = vertexAttribPointer_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_DEPTH_BUFFER_BIT") ) { outValue = get_DEPTH_BUFFER_BIT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_COLOR_BUFFER_BIT") ) { outValue = get_COLOR_BUFFER_BIT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_STENCIL_BACK_REF") ) { outValue = get_STENCIL_BACK_REF_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNPACK_ALIGNMENT") ) { outValue = get_UNPACK_ALIGNMENT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_TEXTURE_SIZE") ) { outValue = get_MAX_TEXTURE_SIZE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_ATTACHED_SHADERS") ) { outValue = get_ATTACHED_SHADERS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE_CUBE_MAP") ) { outValue = get_TEXTURE_CUBE_MAP_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DEPTH_ATTACHMENT") ) { outValue = get_DEPTH_ATTACHMENT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNPACK_SKIP_ROWS") ) { outValue = get_UNPACK_SKIP_ROWS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_PACK_SKIP_PIXELS") ) { outValue = get_PACK_SKIP_PIXELS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE_2D_ARRAY") ) { outValue = get_TEXTURE_2D_ARRAY_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_DRAW_BUFFERS") ) { outValue = get_MAX_DRAW_BUFFERS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SAMPLER_2D_ARRAY") ) { outValue = get_SAMPLER_2D_ARRAY_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_INT_SAMPLER_CUBE") ) { outValue = get_INT_SAMPLER_CUBE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_COPY_READ_BUFFER") ) { outValue = get_COPY_READ_BUFFER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SEPARATE_ATTRIBS") ) { outValue = get_SEPARATE_ATTRIBS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DEPTH24_STENCIL8") ) { outValue = get_DEPTH24_STENCIL8_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_READ_FRAMEBUFFER") ) { outValue = get_READ_FRAMEBUFFER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DRAW_FRAMEBUFFER") ) { outValue = get_DRAW_FRAMEBUFFER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_ALREADY_SIGNALED") ) { outValue = get_ALREADY_SIGNALED_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"compressedTexImage2D") ) { outValue = compressedTexImage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"compressedTexImage3D") ) { outValue = compressedTexImage3D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"endTransformFeedback") ) { outValue = endTransformFeedback_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"framebufferTexture2D") ) { outValue = framebufferTexture2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBufferParameteriv") ) { outValue = getBufferParameteriv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSamplerParameteri") ) { outValue = getSamplerParameteri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSamplerParameterf") ) { outValue = getSamplerParameterf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUniformBlockIndex") ) { outValue = getUniformBlockIndex_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttribIPointer") ) { outValue = vertexAttribIPointer_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_INVALID_OPERATION") ) { outValue = get_INVALID_OPERATION_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DEPTH_CLEAR_VALUE") ) { outValue = get_DEPTH_CLEAR_VALUE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_STENCIL_WRITEMASK") ) { outValue = get_STENCIL_WRITEMASK_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_STENCIL_BACK_FUNC") ) { outValue = get_STENCIL_BACK_FUNC_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_STENCIL_BACK_FAIL") ) { outValue = get_STENCIL_BACK_FAIL_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_COLOR_CLEAR_VALUE") ) { outValue = get_COLOR_CLEAR_VALUE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_VIEWPORT_DIMS") ) { outValue = get_MAX_VIEWPORT_DIMS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_ACTIVE_ATTRIBUTES") ) { outValue = get_ACTIVE_ATTRIBUTES_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DEPTH_COMPONENT16") ) { outValue = get_DEPTH_COMPONENT16_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_COLOR_ATTACHMENT0") ) { outValue = get_COLOR_ATTACHMENT0_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNPACK_ROW_LENGTH") ) { outValue = get_UNPACK_ROW_LENGTH_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_ELEMENT_INDEX") ) { outValue = get_MAX_ELEMENT_INDEX_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE_MAX_LEVEL") ) { outValue = get_TEXTURE_MAX_LEVEL_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNSIGNED_INT_24_8") ) { outValue = get_UNSIGNED_INT_24_8_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_COLOR_ATTACHMENT1") ) { outValue = get_COLOR_ATTACHMENT1_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_COLOR_ATTACHMENT2") ) { outValue = get_COLOR_ATTACHMENT2_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_COLOR_ATTACHMENT3") ) { outValue = get_COLOR_ATTACHMENT3_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_COLOR_ATTACHMENT4") ) { outValue = get_COLOR_ATTACHMENT4_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_COLOR_ATTACHMENT5") ) { outValue = get_COLOR_ATTACHMENT5_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_COLOR_ATTACHMENT6") ) { outValue = get_COLOR_ATTACHMENT6_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_COLOR_ATTACHMENT7") ) { outValue = get_COLOR_ATTACHMENT7_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_COLOR_ATTACHMENT8") ) { outValue = get_COLOR_ATTACHMENT8_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_COLOR_ATTACHMENT9") ) { outValue = get_COLOR_ATTACHMENT9_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SAMPLER_2D_SHADOW") ) { outValue = get_SAMPLER_2D_SHADOW_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_PIXEL_PACK_BUFFER") ) { outValue = get_PIXEL_PACK_BUFFER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_COPY_WRITE_BUFFER") ) { outValue = get_COPY_WRITE_BUFFER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNSIGNED_INT_VEC2") ) { outValue = get_UNSIGNED_INT_VEC2_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNSIGNED_INT_VEC3") ) { outValue = get_UNSIGNED_INT_VEC3_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNSIGNED_INT_VEC4") ) { outValue = get_UNSIGNED_INT_VEC4_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SIGNED_NORMALIZED") ) { outValue = get_SIGNED_NORMALIZED_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DEPTH_COMPONENT24") ) { outValue = get_DEPTH_COMPONENT24_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DEPTH32F_STENCIL8") ) { outValue = get_DEPTH32F_STENCIL8_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bindTransformFeedback") ) { outValue = bindTransformFeedback_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"blendEquationSeparate") ) { outValue = blendEquationSeparate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawElementsInstanced") ) { outValue = drawElementsInstanced_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"genTransformFeedbacks") ) { outValue = genTransformFeedbacks_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSamplerParameteriv") ) { outValue = getSamplerParameteriv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSamplerParameterfv") ) { outValue = getSamplerParameterfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"invalidateFramebuffer") ) { outValue = invalidateFramebuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"releaseShaderCompiler") ) { outValue = releaseShaderCompiler_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_STENCIL_BUFFER_BIT") ) { outValue = get_STENCIL_BUFFER_BIT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SRC_ALPHA_SATURATE") ) { outValue = get_SRC_ALPHA_SATURATE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_BLEND_EQUATION_RGB") ) { outValue = get_BLEND_EQUATION_RGB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_STENCIL_VALUE_MASK") ) { outValue = get_STENCIL_VALUE_MASK_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE_BINDING_2D") ) { outValue = get_TEXTURE_BINDING_2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_VERTEX_ATTRIBS") ) { outValue = get_MAX_VERTEX_ATTRIBS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE_MAG_FILTER") ) { outValue = get_TEXTURE_MAG_FILTER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE_MIN_FILTER") ) { outValue = get_TEXTURE_MIN_FILTER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RENDERBUFFER_WIDTH") ) { outValue = get_RENDERBUFFER_WIDTH_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_STENCIL_ATTACHMENT") ) { outValue = get_STENCIL_ATTACHMENT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_CONTEXT_LOST_WEBGL") ) { outValue = get_CONTEXT_LOST_WEBGL_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNPACK_SKIP_PIXELS") ) { outValue = get_UNPACK_SKIP_PIXELS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE_BINDING_3D") ) { outValue = get_TEXTURE_BINDING_3D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNPACK_SKIP_IMAGES") ) { outValue = get_UNPACK_SKIP_IMAGES_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RASTERIZER_DISCARD") ) { outValue = get_RASTERIZER_DISCARD_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE_BASE_LEVEL") ) { outValue = get_TEXTURE_BASE_LEVEL_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_INT_2_10_10_10_REV") ) { outValue = get_INT_2_10_10_10_REV_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_ANY_SAMPLES_PASSED") ) { outValue = get_ANY_SAMPLES_PASSED_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_COLOR_ATTACHMENT10") ) { outValue = get_COLOR_ATTACHMENT10_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_COLOR_ATTACHMENT11") ) { outValue = get_COLOR_ATTACHMENT11_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_COLOR_ATTACHMENT12") ) { outValue = get_COLOR_ATTACHMENT12_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_COLOR_ATTACHMENT13") ) { outValue = get_COLOR_ATTACHMENT13_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_COLOR_ATTACHMENT14") ) { outValue = get_COLOR_ATTACHMENT14_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_COLOR_ATTACHMENT15") ) { outValue = get_COLOR_ATTACHMENT15_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TRANSFORM_FEEDBACK") ) { outValue = get_TRANSFORM_FEEDBACK_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DEPTH_COMPONENT32F") ) { outValue = get_DEPTH_COMPONENT32F_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"beginTransformFeedback") ) { outValue = beginTransformFeedback_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"checkFramebufferStatus") ) { outValue = checkFramebufferStatus_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getActiveUniformBlocki") ) { outValue = getActiveUniformBlocki_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBufferParameteri64v") ) { outValue = getBufferParameteri64v_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pauseTransformFeedback") ) { outValue = pauseTransformFeedback_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_ONE_MINUS_SRC_COLOR") ) { outValue = get_ONE_MINUS_SRC_COLOR_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_ONE_MINUS_SRC_ALPHA") ) { outValue = get_ONE_MINUS_SRC_ALPHA_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_ONE_MINUS_DST_ALPHA") ) { outValue = get_ONE_MINUS_DST_ALPHA_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_ONE_MINUS_DST_COLOR") ) { outValue = get_ONE_MINUS_DST_COLOR_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_POLYGON_OFFSET_FILL") ) { outValue = get_POLYGON_OFFSET_FILL_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_STENCIL_CLEAR_VALUE") ) { outValue = get_STENCIL_CLEAR_VALUE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_VARYING_VECTORS") ) { outValue = get_MAX_VARYING_VECTORS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RENDERBUFFER_HEIGHT") ) { outValue = get_RENDERBUFFER_HEIGHT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FRAMEBUFFER_BINDING") ) { outValue = get_FRAMEBUFFER_BINDING_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNPACK_FLIP_Y_WEBGL") ) { outValue = get_UNPACK_FLIP_Y_WEBGL_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNPACK_IMAGE_HEIGHT") ) { outValue = get_UNPACK_IMAGE_HEIGHT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_3D_TEXTURE_SIZE") ) { outValue = get_MAX_3D_TEXTURE_SIZE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SAMPLER_CUBE_SHADOW") ) { outValue = get_SAMPLER_CUBE_SHADOW_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_PIXEL_UNPACK_BUFFER") ) { outValue = get_PIXEL_UNPACK_BUFFER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNSIGNED_NORMALIZED") ) { outValue = get_UNSIGNED_NORMALIZED_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_INTERLEAVED_ATTRIBS") ) { outValue = get_INTERLEAVED_ATTRIBS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FRAMEBUFFER_DEFAULT") ) { outValue = get_FRAMEBUFFER_DEFAULT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNIFORM_BUFFER_SIZE") ) { outValue = get_UNIFORM_BUFFER_SIZE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNIFORM_BLOCK_INDEX") ) { outValue = get_UNIFORM_BLOCK_INDEX_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_CONDITION_SATISFIED") ) { outValue = get_CONDITION_SATISFIED_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"compressedTexSubImage2D") ) { outValue = compressedTexSubImage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"compressedTexSubImage3D") ) { outValue = compressedTexSubImage3D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createTransformFeedback") ) { outValue = createTransformFeedback_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteTransformFeedback") ) { outValue = deleteTransformFeedback_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"enableVertexAttribArray") ) { outValue = enableVertexAttribArray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"framebufferRenderbuffer") ) { outValue = framebufferRenderbuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"framebufferTextureLayer") ) { outValue = framebufferTextureLayer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getActiveUniformBlockiv") ) { outValue = getActiveUniformBlockiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getVertexAttribPointerv") ) { outValue = getVertexAttribPointerv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"resumeTransformFeedback") ) { outValue = resumeTransformFeedback_dyn(); return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_BLEND_EQUATION_ALPHA") ) { outValue = get_BLEND_EQUATION_ALPHA_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_ELEMENT_ARRAY_BUFFER") ) { outValue = get_ELEMENT_ARRAY_BUFFER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_ARRAY_BUFFER_BINDING") ) { outValue = get_ARRAY_BUFFER_BINDING_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_POLYGON_OFFSET_UNITS") ) { outValue = get_POLYGON_OFFSET_UNITS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_GENERATE_MIPMAP_HINT") ) { outValue = get_GENERATE_MIPMAP_HINT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNSIGNED_SHORT_5_6_5") ) { outValue = get_UNSIGNED_SHORT_5_6_5_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_LINEAR_MIPMAP_LINEAR") ) { outValue = get_LINEAR_MIPMAP_LINEAR_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FRAMEBUFFER_COMPLETE") ) { outValue = get_FRAMEBUFFER_COMPLETE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RENDERBUFFER_BINDING") ) { outValue = get_RENDERBUFFER_BINDING_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_ELEMENTS_INDICES") ) { outValue = get_MAX_ELEMENTS_INDICES_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_TEXTURE_LOD_BIAS") ) { outValue = get_MAX_TEXTURE_LOD_BIAS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_VERTEX_ARRAY_BINDING") ) { outValue = get_VERTEX_ARRAY_BINDING_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE_COMPARE_MODE") ) { outValue = get_TEXTURE_COMPARE_MODE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE_COMPARE_FUNC") ) { outValue = get_TEXTURE_COMPARE_FUNC_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_INT_SAMPLER_2D_ARRAY") ) { outValue = get_INT_SAMPLER_2D_ARRAY_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RENDERBUFFER_SAMPLES") ) { outValue = get_RENDERBUFFER_SAMPLES_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNIFORM_BUFFER_START") ) { outValue = get_UNIFORM_BUFFER_START_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNIFORM_ARRAY_STRIDE") ) { outValue = get_UNIFORM_ARRAY_STRIDE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNIFORM_IS_ROW_MAJOR") ) { outValue = get_UNIFORM_IS_ROW_MAJOR_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"disableVertexAttribArray") ) { outValue = disableVertexAttribArray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getShaderPrecisionFormat") ) { outValue = getShaderPrecisionFormat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"invalidateSubFramebuffer") ) { outValue = invalidateSubFramebuffer_dyn(); return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_FUNC_REVERSE_SUBTRACT") ) { outValue = get_FUNC_REVERSE_SUBTRACT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_CURRENT_VERTEX_ATTRIB") ) { outValue = get_CURRENT_VERTEX_ATTRIB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_POLYGON_OFFSET_FACTOR") ) { outValue = get_POLYGON_OFFSET_FACTOR_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SAMPLE_COVERAGE_VALUE") ) { outValue = get_SAMPLE_COVERAGE_VALUE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_LINEAR_MIPMAP_NEAREST") ) { outValue = get_LINEAR_MIPMAP_NEAREST_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_NEAREST_MIPMAP_LINEAR") ) { outValue = get_NEAREST_MIPMAP_LINEAR_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RENDERBUFFER_RED_SIZE") ) { outValue = get_RENDERBUFFER_RED_SIZE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_RENDERBUFFER_SIZE") ) { outValue = get_MAX_RENDERBUFFER_SIZE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_BROWSER_DEFAULT_WEBGL") ) { outValue = get_BROWSER_DEFAULT_WEBGL_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_ELEMENTS_VERTICES") ) { outValue = get_MAX_ELEMENTS_VERTICES_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_COLOR_ATTACHMENTS") ) { outValue = get_MAX_COLOR_ATTACHMENTS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_ACTIVE_UNIFORM_BLOCKS") ) { outValue = get_ACTIVE_UNIFORM_BLOCKS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNIFORM_MATRIX_STRIDE") ) { outValue = get_UNIFORM_MATRIX_STRIDE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNIFORM_BLOCK_BINDING") ) { outValue = get_UNIFORM_BLOCK_BINDING_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getActiveUniformBlockName") ) { outValue = getActiveUniformBlockName_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getRenderbufferParameteri") ) { outValue = getRenderbufferParameteri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"transformFeedbackVaryings") ) { outValue = transformFeedbackVaryings_dyn(); return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"get_STENCIL_BACK_WRITEMASK") ) { outValue = get_STENCIL_BACK_WRITEMASK_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SAMPLE_COVERAGE_INVERT") ) { outValue = get_SAMPLE_COVERAGE_INVERT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNSIGNED_SHORT_4_4_4_4") ) { outValue = get_UNSIGNED_SHORT_4_4_4_4_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNSIGNED_SHORT_5_5_5_1") ) { outValue = get_UNSIGNED_SHORT_5_5_5_1_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_NEAREST_MIPMAP_NEAREST") ) { outValue = get_NEAREST_MIPMAP_NEAREST_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RENDERBUFFER_BLUE_SIZE") ) { outValue = get_RENDERBUFFER_BLUE_SIZE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_VARYING_COMPONENTS") ) { outValue = get_MAX_VARYING_COMPONENTS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_COMPARE_REF_TO_TEXTURE") ) { outValue = get_COMPARE_REF_TO_TEXTURE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_QUERY_RESULT_AVAILABLE") ) { outValue = get_QUERY_RESULT_AVAILABLE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNIFORM_BUFFER_BINDING") ) { outValue = get_UNIFORM_BUFFER_BINDING_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_UNIFORM_BLOCK_SIZE") ) { outValue = get_MAX_UNIFORM_BLOCK_SIZE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getRenderbufferParameteriv") ) { outValue = getRenderbufferParameteriv_dyn(); return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"get_STENCIL_PASS_DEPTH_FAIL") ) { outValue = get_STENCIL_PASS_DEPTH_FAIL_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_STENCIL_PASS_DEPTH_PASS") ) { outValue = get_STENCIL_PASS_DEPTH_PASS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_STENCIL_BACK_VALUE_MASK") ) { outValue = get_STENCIL_BACK_VALUE_MASK_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_TEXTURE_IMAGE_UNITS") ) { outValue = get_MAX_TEXTURE_IMAGE_UNITS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RENDERBUFFER_GREEN_SIZE") ) { outValue = get_RENDERBUFFER_GREEN_SIZE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RENDERBUFFER_ALPHA_SIZE") ) { outValue = get_RENDERBUFFER_ALPHA_SIZE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RENDERBUFFER_DEPTH_SIZE") ) { outValue = get_RENDERBUFFER_DEPTH_SIZE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FRAMEBUFFER_UNSUPPORTED") ) { outValue = get_FRAMEBUFFER_UNSUPPORTED_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_SERVER_WAIT_TIMEOUT") ) { outValue = get_MAX_SERVER_WAIT_TIMEOUT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SAMPLER_2D_ARRAY_SHADOW") ) { outValue = get_SAMPLER_2D_ARRAY_SHADOW_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNSIGNED_INT_SAMPLER_2D") ) { outValue = get_UNSIGNED_INT_SAMPLER_2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNSIGNED_INT_SAMPLER_3D") ) { outValue = get_UNSIGNED_INT_SAMPLER_3D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNIFORM_BLOCK_DATA_SIZE") ) { outValue = get_UNIFORM_BLOCK_DATA_SIZE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SYNC_FLUSH_COMMANDS_BIT") ) { outValue = get_SYNC_FLUSH_COMMANDS_BIT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getTransformFeedbackVarying") ) { outValue = getTransformFeedbackVarying_dyn(); return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"get_ONE_MINUS_CONSTANT_COLOR") ) { outValue = get_ONE_MINUS_CONSTANT_COLOR_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_ONE_MINUS_CONSTANT_ALPHA") ) { outValue = get_ONE_MINUS_CONSTANT_ALPHA_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SAMPLE_ALPHA_TO_COVERAGE") ) { outValue = get_SAMPLE_ALPHA_TO_COVERAGE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_ALIASED_POINT_SIZE_RANGE") ) { outValue = get_ALIASED_POINT_SIZE_RANGE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_ALIASED_LINE_WIDTH_RANGE") ) { outValue = get_ALIASED_LINE_WIDTH_RANGE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SHADING_LANGUAGE_VERSION") ) { outValue = get_SHADING_LANGUAGE_VERSION_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE_BINDING_CUBE_MAP") ) { outValue = get_TEXTURE_BINDING_CUBE_MAP_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_VERTEX_ATTRIB_ARRAY_SIZE") ) { outValue = get_VERTEX_ATTRIB_ARRAY_SIZE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_VERTEX_ATTRIB_ARRAY_TYPE") ) { outValue = get_VERTEX_ATTRIB_ARRAY_TYPE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DEPTH_STENCIL_ATTACHMENT") ) { outValue = get_DEPTH_STENCIL_ATTACHMENT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_ARRAY_TEXTURE_LAYERS") ) { outValue = get_MAX_ARRAY_TEXTURE_LAYERS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MIN_PROGRAM_TEXEL_OFFSET") ) { outValue = get_MIN_PROGRAM_TEXEL_OFFSET_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_PROGRAM_TEXEL_OFFSET") ) { outValue = get_MAX_PROGRAM_TEXEL_OFFSET_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE_BINDING_2D_ARRAY") ) { outValue = get_TEXTURE_BINDING_2D_ARRAY_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE_IMMUTABLE_FORMAT") ) { outValue = get_TEXTURE_IMMUTABLE_FORMAT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE_IMMUTABLE_LEVELS") ) { outValue = get_TEXTURE_IMMUTABLE_LEVELS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNSIGNED_INT_5_9_9_9_REV") ) { outValue = get_UNSIGNED_INT_5_9_9_9_REV_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_COPY_READ_BUFFER_BINDING") ) { outValue = get_COPY_READ_BUFFER_BINDING_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_DRAW_FRAMEBUFFER_BINDING") ) { outValue = get_DRAW_FRAMEBUFFER_BINDING_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_READ_FRAMEBUFFER_BINDING") ) { outValue = get_READ_FRAMEBUFFER_BINDING_dyn(); return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"get_MAX_CUBE_MAP_TEXTURE_SIZE") ) { outValue = get_MAX_CUBE_MAP_TEXTURE_SIZE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_VERTEX_PROGRAM_POINT_SIZE") ) { outValue = get_VERTEX_PROGRAM_POINT_SIZE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RENDERBUFFER_STENCIL_SIZE") ) { outValue = get_RENDERBUFFER_STENCIL_SIZE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNSIGNED_INT_SAMPLER_CUBE") ) { outValue = get_UNSIGNED_INT_SAMPLER_CUBE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_PIXEL_PACK_BUFFER_BINDING") ) { outValue = get_PIXEL_PACK_BUFFER_BINDING_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_COPY_WRITE_BUFFER_BINDING") ) { outValue = get_COPY_WRITE_BUFFER_BINDING_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TRANSFORM_FEEDBACK_BUFFER") ) { outValue = get_TRANSFORM_FEEDBACK_BUFFER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TRANSFORM_FEEDBACK_PAUSED") ) { outValue = get_TRANSFORM_FEEDBACK_PAUSED_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TRANSFORM_FEEDBACK_ACTIVE") ) { outValue = get_TRANSFORM_FEEDBACK_ACTIVE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_VERTEX_UNIFORM_BLOCKS") ) { outValue = get_MAX_VERTEX_UNIFORM_BLOCKS_dyn(); return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"get_COMPRESSED_TEXTURE_FORMATS") ) { outValue = get_COMPRESSED_TEXTURE_FORMATS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_VERTEX_UNIFORM_VECTORS") ) { outValue = get_MAX_VERTEX_UNIFORM_VECTORS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_VERTEX_ATTRIB_ARRAY_STRIDE") ) { outValue = get_VERTEX_ATTRIB_ARRAY_STRIDE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TRANSFORM_FEEDBACK_BINDING") ) { outValue = get_TRANSFORM_FEEDBACK_BINDING_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_SYNC_GPU_COMMANDS_COMPLETE") ) { outValue = get_SYNC_GPU_COMMANDS_COMPLETE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"renderbufferStorageMultisample") ) { outValue = renderbufferStorageMultisample_dyn(); return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"get_TEXTURE_CUBE_MAP_POSITIVE_X") ) { outValue = get_TEXTURE_CUBE_MAP_POSITIVE_X_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE_CUBE_MAP_NEGATIVE_X") ) { outValue = get_TEXTURE_CUBE_MAP_NEGATIVE_X_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE_CUBE_MAP_POSITIVE_Y") ) { outValue = get_TEXTURE_CUBE_MAP_POSITIVE_Y_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE_CUBE_MAP_NEGATIVE_Y") ) { outValue = get_TEXTURE_CUBE_MAP_NEGATIVE_Y_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE_CUBE_MAP_POSITIVE_Z") ) { outValue = get_TEXTURE_CUBE_MAP_POSITIVE_Z_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TEXTURE_CUBE_MAP_NEGATIVE_Z") ) { outValue = get_TEXTURE_CUBE_MAP_NEGATIVE_Z_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_VERTEX_ATTRIB_ARRAY_ENABLED") ) { outValue = get_VERTEX_ATTRIB_ARRAY_ENABLED_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_VERTEX_ATTRIB_ARRAY_POINTER") ) { outValue = get_VERTEX_ATTRIB_ARRAY_POINTER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNSIGNED_INT_2_10_10_10_REV") ) { outValue = get_UNSIGNED_INT_2_10_10_10_REV_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_PIXEL_UNPACK_BUFFER_BINDING") ) { outValue = get_PIXEL_UNPACK_BUFFER_BINDING_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_VERTEX_ATTRIB_ARRAY_INTEGER") ) { outValue = get_VERTEX_ATTRIB_ARRAY_INTEGER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_VERTEX_ATTRIB_ARRAY_DIVISOR") ) { outValue = get_VERTEX_ATTRIB_ARRAY_DIVISOR_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TRANSFORM_FEEDBACK_VARYINGS") ) { outValue = get_TRANSFORM_FEEDBACK_VARYINGS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_FRAGMENT_UNIFORM_BLOCKS") ) { outValue = get_MAX_FRAGMENT_UNIFORM_BLOCKS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_COMBINED_UNIFORM_BLOCKS") ) { outValue = get_MAX_COMBINED_UNIFORM_BLOCKS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_UNIFORM_BUFFER_BINDINGS") ) { outValue = get_MAX_UNIFORM_BUFFER_BINDINGS_dyn(); return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"get_ELEMENT_ARRAY_BUFFER_BINDING") ) { outValue = get_ELEMENT_ARRAY_BUFFER_BINDING_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_STENCIL_BACK_PASS_DEPTH_FAIL") ) { outValue = get_STENCIL_BACK_PASS_DEPTH_FAIL_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_STENCIL_BACK_PASS_DEPTH_PASS") ) { outValue = get_STENCIL_BACK_PASS_DEPTH_PASS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_FRAGMENT_UNIFORM_VECTORS") ) { outValue = get_MAX_FRAGMENT_UNIFORM_VECTORS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RENDERBUFFER_INTERNAL_FORMAT") ) { outValue = get_RENDERBUFFER_INTERNAL_FORMAT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_VERTEX_OUTPUT_COMPONENTS") ) { outValue = get_MAX_VERTEX_OUTPUT_COMPONENTS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNSIGNED_INT_10F_11F_11F_REV") ) { outValue = get_UNSIGNED_INT_10F_11F_11F_REV_dyn(); return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"get_INVALID_FRAMEBUFFER_OPERATION") ) { outValue = get_INVALID_FRAMEBUFFER_OPERATION_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_VERTEX_UNIFORM_COMPONENTS") ) { outValue = get_MAX_VERTEX_UNIFORM_COMPONENTS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_FRAGMENT_INPUT_COMPONENTS") ) { outValue = get_MAX_FRAGMENT_INPUT_COMPONENTS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNSIGNED_INT_SAMPLER_2D_ARRAY") ) { outValue = get_UNSIGNED_INT_SAMPLER_2D_ARRAY_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNIFORM_BLOCK_ACTIVE_UNIFORMS") ) { outValue = get_UNIFORM_BLOCK_ACTIVE_UNIFORMS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_CLIENT_WAIT_TIMEOUT_WEBGL") ) { outValue = get_MAX_CLIENT_WAIT_TIMEOUT_WEBGL_dyn(); return true;  }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"get_MAX_VERTEX_TEXTURE_IMAGE_UNITS") ) { outValue = get_MAX_VERTEX_TEXTURE_IMAGE_UNITS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_VERTEX_ATTRIB_ARRAY_NORMALIZED") ) { outValue = get_VERTEX_ATTRIB_ARRAY_NORMALIZED_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNPACK_PREMULTIPLY_ALPHA_WEBGL") ) { outValue = get_UNPACK_PREMULTIPLY_ALPHA_WEBGL_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FLOAT_32_UNSIGNED_INT_24_8_REV") ) { outValue = get_FLOAT_32_UNSIGNED_INT_24_8_REV_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TRANSFORM_FEEDBACK_BUFFER_MODE") ) { outValue = get_TRANSFORM_FEEDBACK_BUFFER_MODE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TRANSFORM_FEEDBACK_BUFFER_SIZE") ) { outValue = get_TRANSFORM_FEEDBACK_BUFFER_SIZE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getFramebufferAttachmentParameteri") ) { outValue = getFramebufferAttachmentParameteri_dyn(); return true;  }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"get_MAX_FRAGMENT_UNIFORM_COMPONENTS") ) { outValue = get_MAX_FRAGMENT_UNIFORM_COMPONENTS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FRAGMENT_SHADER_DERIVATIVE_HINT") ) { outValue = get_FRAGMENT_SHADER_DERIVATIVE_HINT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_ANY_SAMPLES_PASSED_CONSERVATIVE") ) { outValue = get_ANY_SAMPLES_PASSED_CONSERVATIVE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TRANSFORM_FEEDBACK_BUFFER_START") ) { outValue = get_TRANSFORM_FEEDBACK_BUFFER_START_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FRAMEBUFFER_ATTACHMENT_RED_SIZE") ) { outValue = get_FRAMEBUFFER_ATTACHMENT_RED_SIZE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNIFORM_BUFFER_OFFSET_ALIGNMENT") ) { outValue = get_UNIFORM_BUFFER_OFFSET_ALIGNMENT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getFramebufferAttachmentParameteriv") ) { outValue = getFramebufferAttachmentParameteriv_dyn(); return true;  }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"get_MAX_COMBINED_TEXTURE_IMAGE_UNITS") ) { outValue = get_MAX_COMBINED_TEXTURE_IMAGE_UNITS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE") ) { outValue = get_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE_dyn(); return true;  }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"get_FRAMEBUFFER_INCOMPLETE_ATTACHMENT") ) { outValue = get_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FRAMEBUFFER_INCOMPLETE_DIMENSIONS") ) { outValue = get_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TRANSFORM_FEEDBACK_BUFFER_BINDING") ) { outValue = get_TRANSFORM_FEEDBACK_BUFFER_BINDING_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE") ) { outValue = get_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE") ) { outValue = get_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE") ) { outValue = get_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE_dyn(); return true;  }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"get_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING") ) { outValue = get_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE") ) { outValue = get_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME") ) { outValue = get_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNPACK_COLORSPACE_CONVERSION_WEBGL") ) { outValue = get_UNPACK_COLORSPACE_CONVERSION_WEBGL_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE") ) { outValue = get_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_dyn(); return true;  }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"get_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE") ) { outValue = get_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE_dyn(); return true;  }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL") ) { outValue = get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER") ) { outValue = get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES") ) { outValue = get_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES_dyn(); return true;  }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"get_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN") ) { outValue = get_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING") ) { outValue = get_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE") ) { outValue = get_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_dyn(); return true;  }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"get_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS") ) { outValue = get_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS_dyn(); return true;  }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"get_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS") ) { outValue = get_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS_dyn(); return true;  }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"get_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS") ) { outValue = get_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS_dyn(); return true;  }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"get_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT") ) { outValue = get_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER") ) { outValue = get_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER_dyn(); return true;  }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"get_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS") ) { outValue = get_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS_dyn(); return true;  }
		break;
	case 47:
		if (HX_FIELD_EQ(inName,"get_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER") ) { outValue = get_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER_dyn(); return true;  }
		break;
	case 48:
		if (HX_FIELD_EQ(inName,"get_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE") ) { outValue = get_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_dyn(); return true;  }
		break;
	case 49:
		if (HX_FIELD_EQ(inName,"get_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS") ) { outValue = get_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &GLES3Context_Impl__obj::__extensions,HX_HCSTRING("__extensions","\x34","\xf7","\x03","\xc2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLES3Context_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GLES3Context_Impl__obj::__extensions,"__extensions");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLES3Context_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GLES3Context_Impl__obj::__extensions,"__extensions");
};

#endif

hx::Class GLES3Context_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__extensions","\x34","\xf7","\x03","\xc2"),
	HX_HCSTRING("get_EXTENSIONS","\x5d","\x78","\x6f","\xf1"),
	HX_HCSTRING("get_DEPTH_BUFFER_BIT","\xd3","\xc0","\x38","\xe5"),
	HX_HCSTRING("get_STENCIL_BUFFER_BIT","\xba","\x0c","\xbe","\x37"),
	HX_HCSTRING("get_COLOR_BUFFER_BIT","\x73","\x5c","\xdf","\x19"),
	HX_HCSTRING("get_POINTS","\xec","\x2d","\x38","\x9a"),
	HX_HCSTRING("get_LINES","\x36","\x72","\x99","\x36"),
	HX_HCSTRING("get_LINE_LOOP","\xa6","\x29","\x25","\xd8"),
	HX_HCSTRING("get_LINE_STRIP","\x36","\xa9","\x7d","\x53"),
	HX_HCSTRING("get_TRIANGLES","\x62","\x74","\xfd","\x3b"),
	HX_HCSTRING("get_TRIANGLE_STRIP","\x8a","\x47","\x06","\x92"),
	HX_HCSTRING("get_TRIANGLE_FAN","\x05","\xdb","\xcd","\x95"),
	HX_HCSTRING("get_ZERO","\xb1","\x92","\x6c","\xbb"),
	HX_HCSTRING("get_ONE","\xdd","\xfe","\xb0","\x26"),
	HX_HCSTRING("get_SRC_COLOR","\x1f","\x72","\x21","\x1e"),
	HX_HCSTRING("get_ONE_MINUS_SRC_COLOR","\xb7","\xe1","\x36","\x51"),
	HX_HCSTRING("get_SRC_ALPHA","\x1a","\xa8","\x5b","\xf5"),
	HX_HCSTRING("get_ONE_MINUS_SRC_ALPHA","\xb2","\x17","\x71","\x28"),
	HX_HCSTRING("get_DST_ALPHA","\xfb","\xd5","\x55","\x95"),
	HX_HCSTRING("get_ONE_MINUS_DST_ALPHA","\x93","\x45","\x6b","\xc8"),
	HX_HCSTRING("get_DST_COLOR","\x00","\xa0","\x1b","\xbe"),
	HX_HCSTRING("get_ONE_MINUS_DST_COLOR","\x98","\x0f","\x31","\xf1"),
	HX_HCSTRING("get_SRC_ALPHA_SATURATE","\xf4","\x5b","\xd2","\x8c"),
	HX_HCSTRING("get_FUNC_ADD","\x4f","\x2c","\x31","\x2a"),
	HX_HCSTRING("get_BLEND_EQUATION","\x63","\xf5","\x2b","\x0d"),
	HX_HCSTRING("get_BLEND_EQUATION_RGB","\xd1","\x9e","\x7f","\xea"),
	HX_HCSTRING("get_BLEND_EQUATION_ALPHA","\x22","\xc8","\x4a","\x7a"),
	HX_HCSTRING("get_FUNC_SUBTRACT","\x06","\xcc","\x10","\x1e"),
	HX_HCSTRING("get_FUNC_REVERSE_SUBTRACT","\x23","\x48","\xed","\xf9"),
	HX_HCSTRING("get_BLEND_DST_RGB","\x5c","\x92","\x65","\xf3"),
	HX_HCSTRING("get_BLEND_SRC_RGB","\xbb","\x4e","\xfc","\x32"),
	HX_HCSTRING("get_BLEND_DST_ALPHA","\x6d","\xf4","\x3c","\xff"),
	HX_HCSTRING("get_BLEND_SRC_ALPHA","\x8c","\xc6","\x42","\x5f"),
	HX_HCSTRING("get_CONSTANT_COLOR","\xb1","\x45","\x24","\x64"),
	HX_HCSTRING("get_ONE_MINUS_CONSTANT_COLOR","\x19","\x4f","\x3b","\x48"),
	HX_HCSTRING("get_CONSTANT_ALPHA","\xac","\x7b","\x5e","\x3b"),
	HX_HCSTRING("get_ONE_MINUS_CONSTANT_ALPHA","\x14","\x85","\x75","\x1f"),
	HX_HCSTRING("get_BLEND_COLOR","\x0c","\x83","\xaa","\x28"),
	HX_HCSTRING("get_ARRAY_BUFFER","\xcf","\x52","\xb6","\xf8"),
	HX_HCSTRING("get_ELEMENT_ARRAY_BUFFER","\x92","\x22","\xef","\x7f"),
	HX_HCSTRING("get_ARRAY_BUFFER_BINDING","\x75","\xf2","\x45","\xbc"),
	HX_HCSTRING("get_ELEMENT_ARRAY_BUFFER_BINDING","\x38","\xbd","\x48","\x1d"),
	HX_HCSTRING("get_STREAM_DRAW","\xfa","\x36","\x0a","\xd6"),
	HX_HCSTRING("get_STATIC_DRAW","\x0c","\x08","\x11","\x7b"),
	HX_HCSTRING("get_DYNAMIC_DRAW","\xad","\xf0","\xbd","\x28"),
	HX_HCSTRING("get_BUFFER_SIZE","\x37","\x33","\x73","\x0d"),
	HX_HCSTRING("get_BUFFER_USAGE","\xcb","\xf1","\xaf","\xe4"),
	HX_HCSTRING("get_CURRENT_VERTEX_ATTRIB","\x76","\x46","\x2d","\xb1"),
	HX_HCSTRING("get_FRONT","\xe0","\xac","\x25","\xc8"),
	HX_HCSTRING("get_BACK","\xb0","\x5d","\x8c","\xab"),
	HX_HCSTRING("get_FRONT_AND_BACK","\x6e","\x1e","\x04","\x5d"),
	HX_HCSTRING("get_CULL_FACE","\x61","\x79","\x58","\x91"),
	HX_HCSTRING("get_BLEND","\x88","\x7c","\x8c","\x76"),
	HX_HCSTRING("get_DITHER","\xaf","\x1c","\xc9","\x60"),
	HX_HCSTRING("get_STENCIL_TEST","\x5e","\xc9","\x08","\xda"),
	HX_HCSTRING("get_DEPTH_TEST","\xb7","\xf4","\x1a","\x9e"),
	HX_HCSTRING("get_SCISSOR_TEST","\x3e","\xab","\xf0","\x5d"),
	HX_HCSTRING("get_POLYGON_OFFSET_FILL","\xe1","\xe3","\x87","\xb4"),
	HX_HCSTRING("get_SAMPLE_ALPHA_TO_COVERAGE","\x1f","\x54","\xaa","\x22"),
	HX_HCSTRING("get_SAMPLE_COVERAGE","\xf4","\x86","\x19","\x4c"),
	HX_HCSTRING("get_NO_ERROR","\xf3","\x69","\x97","\xe4"),
	HX_HCSTRING("get_INVALID_ENUM","\x32","\x61","\x0f","\x18"),
	HX_HCSTRING("get_INVALID_VALUE","\x00","\xf4","\x96","\xb6"),
	HX_HCSTRING("get_INVALID_OPERATION","\x36","\xb4","\x76","\xa8"),
	HX_HCSTRING("get_OUT_OF_MEMORY","\x6f","\xfd","\x07","\xe8"),
	HX_HCSTRING("get_CW","\xfd","\xd1","\x2f","\xa3"),
	HX_HCSTRING("get_CCW","\x4e","\xda","\xa7","\x26"),
	HX_HCSTRING("get_LINE_WIDTH","\x64","\x0c","\xc8","\x99"),
	HX_HCSTRING("get_ALIASED_POINT_SIZE_RANGE","\x07","\x0d","\xf9","\xbc"),
	HX_HCSTRING("get_ALIASED_LINE_WIDTH_RANGE","\xf2","\x38","\x29","\xcc"),
	HX_HCSTRING("get_CULL_FACE_MODE","\x41","\x9e","\x21","\x6d"),
	HX_HCSTRING("get_FRONT_FACE","\x9c","\x3f","\x43","\x65"),
	HX_HCSTRING("get_DEPTH_RANGE","\x98","\x51","\x05","\x90"),
	HX_HCSTRING("get_DEPTH_WRITEMASK","\xa6","\x06","\x4a","\xf1"),
	HX_HCSTRING("get_DEPTH_CLEAR_VALUE","\xfa","\x19","\xbb","\x99"),
	HX_HCSTRING("get_DEPTH_FUNC","\xa9","\x17","\xe6","\x94"),
	HX_HCSTRING("get_STENCIL_CLEAR_VALUE","\x33","\x38","\xd8","\x7b"),
	HX_HCSTRING("get_STENCIL_FUNC","\x50","\xec","\xd3","\xd0"),
	HX_HCSTRING("get_STENCIL_FAIL","\xea","\xba","\xc4","\xd0"),
	HX_HCSTRING("get_STENCIL_PASS_DEPTH_FAIL","\x5c","\x08","\x5c","\x95"),
	HX_HCSTRING("get_STENCIL_PASS_DEPTH_PASS","\x4f","\x33","\xf8","\x9b"),
	HX_HCSTRING("get_STENCIL_REF","\xa7","\x21","\x87","\xfd"),
	HX_HCSTRING("get_STENCIL_VALUE_MASK","\xe6","\xd1","\xf2","\xf9"),
	HX_HCSTRING("get_STENCIL_WRITEMASK","\x9f","\xf4","\x54","\xc8"),
	HX_HCSTRING("get_STENCIL_BACK_FUNC","\x10","\x7b","\x50","\x0f"),
	HX_HCSTRING("get_STENCIL_BACK_FAIL","\xaa","\x49","\x41","\x0f"),
	HX_HCSTRING("get_STENCIL_BACK_PASS_DEPTH_FAIL","\x9c","\x71","\xc0","\xae"),
	HX_HCSTRING("get_STENCIL_BACK_PASS_DEPTH_PASS","\x8f","\x9c","\x5c","\xb5"),
	HX_HCSTRING("get_STENCIL_BACK_REF","\xe7","\xaa","\x22","\x27"),
	HX_HCSTRING("get_STENCIL_BACK_VALUE_MASK","\xa6","\xf0","\x66","\x55"),
	HX_HCSTRING("get_STENCIL_BACK_WRITEMASK","\xdf","\xed","\x1a","\xfa"),
	HX_HCSTRING("get_VIEWPORT","\x6f","\x90","\x44","\xab"),
	HX_HCSTRING("get_SCISSOR_BOX","\x7f","\x00","\x2e","\x16"),
	HX_HCSTRING("get_COLOR_CLEAR_VALUE","\x5a","\xaa","\xdc","\x76"),
	HX_HCSTRING("get_COLOR_WRITEMASK","\x06","\xbf","\x04","\xa0"),
	HX_HCSTRING("get_UNPACK_ALIGNMENT","\xbf","\x8f","\x98","\x69"),
	HX_HCSTRING("get_PACK_ALIGNMENT","\x66","\xb7","\x1f","\x5f"),
	HX_HCSTRING("get_MAX_TEXTURE_SIZE","\xe9","\x70","\xc5","\x19"),
	HX_HCSTRING("get_MAX_VIEWPORT_DIMS","\x80","\x30","\xa9","\x87"),
	HX_HCSTRING("get_SUBPIXEL_BITS","\x76","\xb7","\x84","\x10"),
	HX_HCSTRING("get_RED_BITS","\x1d","\xac","\xb8","\x4b"),
	HX_HCSTRING("get_GREEN_BITS","\xab","\x31","\x91","\x0a"),
	HX_HCSTRING("get_BLUE_BITS","\xe2","\xf9","\xc3","\x62"),
	HX_HCSTRING("get_ALPHA_BITS","\x30","\x87","\x71","\x56"),
	HX_HCSTRING("get_DEPTH_BITS","\x6b","\x27","\x38","\x92"),
	HX_HCSTRING("get_STENCIL_BITS","\x12","\xfc","\x25","\xce"),
	HX_HCSTRING("get_POLYGON_OFFSET_UNITS","\x31","\x06","\xae","\xe8"),
	HX_HCSTRING("get_POLYGON_OFFSET_FACTOR","\xad","\x25","\x10","\x30"),
	HX_HCSTRING("get_TEXTURE_BINDING_2D","\x79","\x65","\x2d","\x0b"),
	HX_HCSTRING("get_SAMPLE_BUFFERS","\xc7","\xf7","\x0a","\xd8"),
	HX_HCSTRING("get_SAMPLES","\x00","\xf9","\x97","\x89"),
	HX_HCSTRING("get_SAMPLE_COVERAGE_VALUE","\x86","\x34","\x05","\x6f"),
	HX_HCSTRING("get_SAMPLE_COVERAGE_INVERT","\x41","\xa4","\xaa","\x05"),
	HX_HCSTRING("get_COMPRESSED_TEXTURE_FORMATS","\xc3","\x7d","\xef","\x61"),
	HX_HCSTRING("get_DONT_CARE","\x56","\x6f","\x25","\x91"),
	HX_HCSTRING("get_FASTEST","\x21","\x03","\x08","\xe4"),
	HX_HCSTRING("get_NICEST","\x47","\xdd","\x1b","\x55"),
	HX_HCSTRING("get_GENERATE_MIPMAP_HINT","\x1d","\xf1","\x71","\xc6"),
	HX_HCSTRING("get_BYTE","\x91","\xa2","\x9e","\xab"),
	HX_HCSTRING("get_UNSIGNED_BYTE","\x29","\x85","\xdb","\x07"),
	HX_HCSTRING("get_SHORT","\xb3","\x18","\xbf","\x3d"),
	HX_HCSTRING("get_UNSIGNED_SHORT","\x1b","\x7b","\xc8","\x96"),
	HX_HCSTRING("get_INT","\x66","\x71","\xac","\x26"),
	HX_HCSTRING("get_UNSIGNED_INT","\xce","\xe9","\x58","\x21"),
	HX_HCSTRING("get_FLOAT","\xd3","\x59","\x2e","\xc4"),
	HX_HCSTRING("get_DEPTH_COMPONENT","\x18","\xee","\x6c","\x9a"),
	HX_HCSTRING("get_ALPHA","\x95","\x3b","\x2e","\xe3"),
	HX_HCSTRING("get_RGB","\x84","\x3f","\xb3","\x26"),
	HX_HCSTRING("get_RGBA","\x3d","\x54","\x24","\xb6"),
	HX_HCSTRING("get_LUMINANCE","\xaf","\x7b","\x44","\x25"),
	HX_HCSTRING("get_LUMINANCE_ALPHA","\x6e","\x0f","\xeb","\x48"),
	HX_HCSTRING("get_UNSIGNED_SHORT_4_4_4_4","\x6f","\x85","\x76","\xb3"),
	HX_HCSTRING("get_UNSIGNED_SHORT_5_5_5_1","\xef","\x52","\x73","\x70"),
	HX_HCSTRING("get_UNSIGNED_SHORT_5_6_5","\xfe","\xd8","\xb2","\xce"),
	HX_HCSTRING("get_FRAGMENT_SHADER","\x0b","\xf6","\x82","\x74"),
	HX_HCSTRING("get_VERTEX_SHADER","\x37","\x75","\xe3","\x4f"),
	HX_HCSTRING("get_MAX_VERTEX_ATTRIBS","\x92","\x42","\xaa","\xb8"),
	HX_HCSTRING("get_MAX_VERTEX_UNIFORM_VECTORS","\x8e","\xd6","\x22","\xa9"),
	HX_HCSTRING("get_MAX_VARYING_VECTORS","\x9d","\x5f","\x4d","\x40"),
	HX_HCSTRING("get_MAX_COMBINED_TEXTURE_IMAGE_UNITS","\xb1","\x98","\x7d","\x56"),
	HX_HCSTRING("get_MAX_VERTEX_TEXTURE_IMAGE_UNITS","\x90","\x53","\x5f","\x72"),
	HX_HCSTRING("get_MAX_TEXTURE_IMAGE_UNITS","\xe3","\xaa","\x03","\x21"),
	HX_HCSTRING("get_MAX_FRAGMENT_UNIFORM_VECTORS","\xfa","\x97","\xa7","\x85"),
	HX_HCSTRING("get_SHADER_TYPE","\xeb","\x9c","\x09","\x48"),
	HX_HCSTRING("get_DELETE_STATUS","\x5d","\xef","\x08","\x25"),
	HX_HCSTRING("get_LINK_STATUS","\xae","\xcf","\x70","\x06"),
	HX_HCSTRING("get_VALIDATE_STATUS","\x12","\xf2","\x11","\x51"),
	HX_HCSTRING("get_ATTACHED_SHADERS","\x7c","\x37","\xe1","\x93"),
	HX_HCSTRING("get_ACTIVE_UNIFORMS","\xaf","\x4c","\x45","\xb7"),
	HX_HCSTRING("get_ACTIVE_ATTRIBUTES","\xc7","\xe8","\x75","\xc9"),
	HX_HCSTRING("get_SHADING_LANGUAGE_VERSION","\xef","\xda","\x43","\xb2"),
	HX_HCSTRING("get_CURRENT_PROGRAM","\x15","\xf8","\xca","\xca"),
	HX_HCSTRING("get_NEVER","\xc3","\xd2","\xc7","\x5a"),
	HX_HCSTRING("get_LESS","\xe2","\x96","\x2b","\xb2"),
	HX_HCSTRING("get_EQUAL","\xeb","\x63","\x1a","\x34"),
	HX_HCSTRING("get_LEQUAL","\x91","\xe3","\x17","\x44"),
	HX_HCSTRING("get_GREATER","\xf1","\xc4","\x8e","\xbd"),
	HX_HCSTRING("get_NOTEQUAL","\xca","\x75","\x03","\x7e"),
	HX_HCSTRING("get_GEQUAL","\xb6","\x15","\x4f","\x44"),
	HX_HCSTRING("get_ALWAYS","\x98","\x2a","\xe1","\xe9"),
	HX_HCSTRING("get_KEEP","\x0e","\x54","\x82","\xb1"),
	HX_HCSTRING("get_REPLACE","\x2b","\x7c","\xf6","\xb0"),
	HX_HCSTRING("get_INCR","\x5d","\xb9","\x36","\xb0"),
	HX_HCSTRING("get_DECR","\xf9","\xd3","\xe1","\xac"),
	HX_HCSTRING("get_INVERT","\xdf","\x02","\xe3","\x42"),
	HX_HCSTRING("get_INCR_WRAP","\x2c","\x53","\xcc","\xed"),
	HX_HCSTRING("get_DECR_WRAP","\x10","\x43","\x4f","\xcc"),
	HX_HCSTRING("get_VENDOR","\x51","\x01","\xa1","\x41"),
	HX_HCSTRING("get_RENDERER","\x4c","\x09","\x7b","\xc1"),
	HX_HCSTRING("get_VERSION","\x0f","\x1b","\xc0","\x82"),
	HX_HCSTRING("get_NEAREST","\x55","\x4c","\x98","\x6b"),
	HX_HCSTRING("get_LINEAR","\xae","\x6d","\xaa","\x8f"),
	HX_HCSTRING("get_NEAREST_MIPMAP_NEAREST","\x31","\x0b","\x69","\xb6"),
	HX_HCSTRING("get_LINEAR_MIPMAP_NEAREST","\xf8","\x55","\xa2","\x6b"),
	HX_HCSTRING("get_NEAREST_MIPMAP_LINEAR","\x52","\x3e","\xf0","\x41"),
	HX_HCSTRING("get_LINEAR_MIPMAP_LINEAR","\x6b","\xa9","\x94","\xdc"),
	HX_HCSTRING("get_TEXTURE_MAG_FILTER","\xd1","\x78","\x6a","\x78"),
	HX_HCSTRING("get_TEXTURE_MIN_FILTER","\xb2","\xdf","\x56","\xa0"),
	HX_HCSTRING("get_TEXTURE_WRAP_S","\x6b","\x0e","\x5d","\x9a"),
	HX_HCSTRING("get_TEXTURE_WRAP_T","\x6c","\x0e","\x5d","\x9a"),
	HX_HCSTRING("get_TEXTURE_2D","\x5f","\x94","\xed","\x18"),
	HX_HCSTRING("get_TEXTURE","\xd2","\xfc","\xae","\xa4"),
	HX_HCSTRING("get_TEXTURE_CUBE_MAP","\x3f","\xdf","\x4b","\xcc"),
	HX_HCSTRING("get_TEXTURE_BINDING_CUBE_MAP","\xd9","\x7f","\xec","\xb6"),
	HX_HCSTRING("get_TEXTURE_CUBE_MAP_POSITIVE_X","\x52","\xb2","\xbe","\x00"),
	HX_HCSTRING("get_TEXTURE_CUBE_MAP_NEGATIVE_X","\x0e","\x99","\xb2","\x47"),
	HX_HCSTRING("get_TEXTURE_CUBE_MAP_POSITIVE_Y","\x53","\xb2","\xbe","\x00"),
	HX_HCSTRING("get_TEXTURE_CUBE_MAP_NEGATIVE_Y","\x0f","\x99","\xb2","\x47"),
	HX_HCSTRING("get_TEXTURE_CUBE_MAP_POSITIVE_Z","\x54","\xb2","\xbe","\x00"),
	HX_HCSTRING("get_TEXTURE_CUBE_MAP_NEGATIVE_Z","\x10","\x99","\xb2","\x47"),
	HX_HCSTRING("get_MAX_CUBE_MAP_TEXTURE_SIZE","\x4e","\xeb","\x63","\x85"),
	HX_HCSTRING("get_TEXTURE0","\x1e","\x3b","\x6e","\x74"),
	HX_HCSTRING("get_TEXTURE1","\x1f","\x3b","\x6e","\x74"),
	HX_HCSTRING("get_TEXTURE2","\x20","\x3b","\x6e","\x74"),
	HX_HCSTRING("get_TEXTURE3","\x21","\x3b","\x6e","\x74"),
	HX_HCSTRING("get_TEXTURE4","\x22","\x3b","\x6e","\x74"),
	HX_HCSTRING("get_TEXTURE5","\x23","\x3b","\x6e","\x74"),
	HX_HCSTRING("get_TEXTURE6","\x24","\x3b","\x6e","\x74"),
	HX_HCSTRING("get_TEXTURE7","\x25","\x3b","\x6e","\x74"),
	HX_HCSTRING("get_TEXTURE8","\x26","\x3b","\x6e","\x74"),
	HX_HCSTRING("get_TEXTURE9","\x27","\x3b","\x6e","\x74"),
	HX_HCSTRING("get_TEXTURE10","\x31","\x80","\x05","\x6c"),
	HX_HCSTRING("get_TEXTURE11","\x32","\x80","\x05","\x6c"),
	HX_HCSTRING("get_TEXTURE12","\x33","\x80","\x05","\x6c"),
	HX_HCSTRING("get_TEXTURE13","\x34","\x80","\x05","\x6c"),
	HX_HCSTRING("get_TEXTURE14","\x35","\x80","\x05","\x6c"),
	HX_HCSTRING("get_TEXTURE15","\x36","\x80","\x05","\x6c"),
	HX_HCSTRING("get_TEXTURE16","\x37","\x80","\x05","\x6c"),
	HX_HCSTRING("get_TEXTURE17","\x38","\x80","\x05","\x6c"),
	HX_HCSTRING("get_TEXTURE18","\x39","\x80","\x05","\x6c"),
	HX_HCSTRING("get_TEXTURE19","\x3a","\x80","\x05","\x6c"),
	HX_HCSTRING("get_TEXTURE20","\x10","\x81","\x05","\x6c"),
	HX_HCSTRING("get_TEXTURE21","\x11","\x81","\x05","\x6c"),
	HX_HCSTRING("get_TEXTURE22","\x12","\x81","\x05","\x6c"),
	HX_HCSTRING("get_TEXTURE23","\x13","\x81","\x05","\x6c"),
	HX_HCSTRING("get_TEXTURE24","\x14","\x81","\x05","\x6c"),
	HX_HCSTRING("get_TEXTURE25","\x15","\x81","\x05","\x6c"),
	HX_HCSTRING("get_TEXTURE26","\x16","\x81","\x05","\x6c"),
	HX_HCSTRING("get_TEXTURE27","\x17","\x81","\x05","\x6c"),
	HX_HCSTRING("get_TEXTURE28","\x18","\x81","\x05","\x6c"),
	HX_HCSTRING("get_TEXTURE29","\x19","\x81","\x05","\x6c"),
	HX_HCSTRING("get_TEXTURE30","\xef","\x81","\x05","\x6c"),
	HX_HCSTRING("get_TEXTURE31","\xf0","\x81","\x05","\x6c"),
	HX_HCSTRING("get_ACTIVE_TEXTURE","\xcb","\xfa","\xbb","\x69"),
	HX_HCSTRING("get_REPEAT","\x24","\xb3","\x86","\xa9"),
	HX_HCSTRING("get_CLAMP_TO_EDGE","\x74","\x07","\xcb","\x9c"),
	HX_HCSTRING("get_MIRRORED_REPEAT","\x73","\x63","\x8b","\xd5"),
	HX_HCSTRING("get_FLOAT_VEC2","\xaa","\x34","\x9a","\x61"),
	HX_HCSTRING("get_FLOAT_VEC3","\xab","\x34","\x9a","\x61"),
	HX_HCSTRING("get_FLOAT_VEC4","\xac","\x34","\x9a","\x61"),
	HX_HCSTRING("get_INT_VEC2","\x37","\xc8","\x1e","\x32"),
	HX_HCSTRING("get_INT_VEC3","\x38","\xc8","\x1e","\x32"),
	HX_HCSTRING("get_INT_VEC4","\x39","\xc8","\x1e","\x32"),
	HX_HCSTRING("get_BOOL","\xb3","\x07","\x97","\xab"),
	HX_HCSTRING("get_BOOL_VEC2","\xca","\x3a","\x8f","\xee"),
	HX_HCSTRING("get_BOOL_VEC3","\xcb","\x3a","\x8f","\xee"),
	HX_HCSTRING("get_BOOL_VEC4","\xcc","\x3a","\x8f","\xee"),
	HX_HCSTRING("get_FLOAT_MAT2","\xde","\x4e","\xa4","\x5b"),
	HX_HCSTRING("get_FLOAT_MAT3","\xdf","\x4e","\xa4","\x5b"),
	HX_HCSTRING("get_FLOAT_MAT4","\xe0","\x4e","\xa4","\x5b"),
	HX_HCSTRING("get_SAMPLER_2D","\x52","\xb2","\x88","\xe4"),
	HX_HCSTRING("get_SAMPLER_CUBE","\x75","\x2b","\x21","\xa9"),
	HX_HCSTRING("get_VERTEX_ATTRIB_ARRAY_ENABLED","\xf8","\x2e","\xda","\x41"),
	HX_HCSTRING("get_VERTEX_ATTRIB_ARRAY_SIZE","\xca","\x1d","\x51","\x4a"),
	HX_HCSTRING("get_VERTEX_ATTRIB_ARRAY_STRIDE","\x62","\x95","\x4d","\xa7"),
	HX_HCSTRING("get_VERTEX_ATTRIB_ARRAY_TYPE","\xc3","\x6f","\x06","\x4b"),
	HX_HCSTRING("get_VERTEX_ATTRIB_ARRAY_NORMALIZED","\x00","\x7a","\xec","\xbe"),
	HX_HCSTRING("get_VERTEX_ATTRIB_ARRAY_POINTER","\x34","\xeb","\xca","\x14"),
	HX_HCSTRING("get_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING","\xef","\xdb","\xc4","\xee"),
	HX_HCSTRING("get_VERTEX_PROGRAM_POINT_SIZE","\xbd","\x88","\xfd","\x1c"),
	HX_HCSTRING("get_POINT_SPRITE","\xfd","\x7f","\xfb","\x18"),
	HX_HCSTRING("get_COMPILE_STATUS","\xa7","\xac","\xe8","\x27"),
	HX_HCSTRING("get_LOW_FLOAT","\x08","\xd8","\xd7","\xa5"),
	HX_HCSTRING("get_MEDIUM_FLOAT","\x7b","\x77","\xe5","\xbd"),
	HX_HCSTRING("get_HIGH_FLOAT","\xe8","\x81","\x31","\xbd"),
	HX_HCSTRING("get_LOW_INT","\x5b","\x88","\x6a","\xcb"),
	HX_HCSTRING("get_MEDIUM_INT","\x0e","\x55","\xa5","\xc5"),
	HX_HCSTRING("get_HIGH_INT","\x3b","\xfa","\x1b","\xbe"),
	HX_HCSTRING("get_FRAMEBUFFER","\x64","\xd8","\x65","\x11"),
	HX_HCSTRING("get_RENDERBUFFER","\x5f","\x91","\x43","\xae"),
	HX_HCSTRING("get_RGBA4","\x57","\x61","\xa5","\xa9"),
	HX_HCSTRING("get_RGB5_A1","\x5e","\xef","\xf3","\x5e"),
	HX_HCSTRING("get_RGB565","\xb0","\xb1","\x06","\xc7"),
	HX_HCSTRING("get_DEPTH_COMPONENT16","\xfd","\xce","\x16","\xc2"),
	HX_HCSTRING("get_STENCIL_INDEX","\x66","\x84","\x26","\x9e"),
	HX_HCSTRING("get_STENCIL_INDEX8","\x12","\x55","\x8d","\xc3"),
	HX_HCSTRING("get_DEPTH_STENCIL","\x97","\x3a","\x90","\x31"),
	HX_HCSTRING("get_RENDERBUFFER_WIDTH","\xc6","\x97","\x75","\x9d"),
	HX_HCSTRING("get_RENDERBUFFER_HEIGHT","\x07","\xae","\xbe","\xdf"),
	HX_HCSTRING("get_RENDERBUFFER_INTERNAL_FORMAT","\x19","\x29","\x9e","\x30"),
	HX_HCSTRING("get_RENDERBUFFER_RED_SIZE","\xef","\x5f","\x56","\x64"),
	HX_HCSTRING("get_RENDERBUFFER_GREEN_SIZE","\x3d","\xd9","\x1f","\x08"),
	HX_HCSTRING("get_RENDERBUFFER_BLUE_SIZE","\xa6","\xe5","\x8b","\x15"),
	HX_HCSTRING("get_RENDERBUFFER_ALPHA_SIZE","\xc2","\x2e","\x00","\x54"),
	HX_HCSTRING("get_RENDERBUFFER_DEPTH_SIZE","\xfd","\xce","\xc6","\x8f"),
	HX_HCSTRING("get_RENDERBUFFER_STENCIL_SIZE","\x64","\x07","\x9a","\x85"),
	HX_HCSTRING("get_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE","\x99","\x7d","\xa1","\xa7"),
	HX_HCSTRING("get_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME","\x2a","\xfd","\x97","\xa3"),
	HX_HCSTRING("get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL","\x7f","\x1b","\x9c","\x6f"),
	HX_HCSTRING("get_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE","\x65","\xfd","\x62","\x67"),
	HX_HCSTRING("get_COLOR_ATTACHMENT0","\x88","\x9d","\xac","\x05"),
	HX_HCSTRING("get_DEPTH_ATTACHMENT","\x08","\xba","\x37","\x08"),
	HX_HCSTRING("get_STENCIL_ATTACHMENT","\xef","\x05","\xbd","\x5a"),
	HX_HCSTRING("get_DEPTH_STENCIL_ATTACHMENT","\xcb","\xf7","\x35","\xe1"),
	HX_HCSTRING("get_NONE","\x41","\x96","\x85","\xb3"),
	HX_HCSTRING("get_FRAMEBUFFER_COMPLETE","\x34","\x83","\x19","\x2d"),
	HX_HCSTRING("get_FRAMEBUFFER_INCOMPLETE_ATTACHMENT","\xc9","\x30","\xcf","\x3a"),
	HX_HCSTRING("get_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT","\x62","\x9a","\x03","\xb4"),
	HX_HCSTRING("get_FRAMEBUFFER_INCOMPLETE_DIMENSIONS","\x33","\xe7","\xfb","\x39"),
	HX_HCSTRING("get_FRAMEBUFFER_UNSUPPORTED","\xfa","\xe4","\xf0","\x94"),
	HX_HCSTRING("get_FRAMEBUFFER_BINDING","\x0a","\x95","\x04","\xce"),
	HX_HCSTRING("get_RENDERBUFFER_BINDING","\x05","\x41","\x0c","\x66"),
	HX_HCSTRING("get_MAX_RENDERBUFFER_SIZE","\xa6","\x8e","\x3b","\x6b"),
	HX_HCSTRING("get_INVALID_FRAMEBUFFER_OPERATION","\x84","\x3d","\x18","\x25"),
	HX_HCSTRING("get_UNPACK_FLIP_Y_WEBGL","\xa5","\x45","\xea","\xa5"),
	HX_HCSTRING("get_UNPACK_PREMULTIPLY_ALPHA_WEBGL","\x3c","\x20","\x95","\x0d"),
	HX_HCSTRING("get_CONTEXT_LOST_WEBGL","\xb7","\xe0","\x05","\x9f"),
	HX_HCSTRING("get_UNPACK_COLORSPACE_CONVERSION_WEBGL","\xe8","\x34","\x4e","\x11"),
	HX_HCSTRING("get_BROWSER_DEFAULT_WEBGL","\x5b","\xbe","\x8f","\xc6"),
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	HX_HCSTRING("get_version","\x2f","\x47","\xec","\x02"),
	HX_HCSTRING("get_READ_BUFFER","\xa0","\xd5","\x72","\x8e"),
	HX_HCSTRING("get_UNPACK_ROW_LENGTH","\x4f","\x07","\x73","\xde"),
	HX_HCSTRING("get_UNPACK_SKIP_ROWS","\x15","\x4b","\xbb","\x6b"),
	HX_HCSTRING("get_UNPACK_SKIP_PIXELS","\x29","\xa0","\xf4","\x08"),
	HX_HCSTRING("get_PACK_ROW_LENGTH","\xc8","\x91","\x2e","\xbf"),
	HX_HCSTRING("get_PACK_SKIP_ROWS","\xbc","\x72","\x42","\x61"),
	HX_HCSTRING("get_PACK_SKIP_PIXELS","\x90","\x3f","\x52","\xcc"),
	HX_HCSTRING("get_TEXTURE_BINDING_3D","\x58","\x66","\x2d","\x0b"),
	HX_HCSTRING("get_UNPACK_SKIP_IMAGES","\xb4","\x01","\xdd","\x7a"),
	HX_HCSTRING("get_UNPACK_IMAGE_HEIGHT","\x2f","\xa4","\xd4","\x1c"),
	HX_HCSTRING("get_MAX_3D_TEXTURE_SIZE","\x2f","\x45","\xe5","\xdd"),
	HX_HCSTRING("get_MAX_ELEMENTS_VERTICES","\xdd","\x78","\x2c","\x2b"),
	HX_HCSTRING("get_MAX_ELEMENTS_INDICES","\xa3","\x9a","\x46","\xb6"),
	HX_HCSTRING("get_MAX_TEXTURE_LOD_BIAS","\x7f","\x1a","\x23","\xab"),
	HX_HCSTRING("get_MAX_FRAGMENT_UNIFORM_COMPONENTS","\x8c","\x19","\x1a","\xe8"),
	HX_HCSTRING("get_MAX_VERTEX_UNIFORM_COMPONENTS","\x78","\x2f","\x8d","\x40"),
	HX_HCSTRING("get_MAX_ARRAY_TEXTURE_LAYERS","\xf0","\xd9","\xaf","\xaf"),
	HX_HCSTRING("get_MIN_PROGRAM_TEXEL_OFFSET","\x35","\x50","\x30","\x4a"),
	HX_HCSTRING("get_MAX_PROGRAM_TEXEL_OFFSET","\xe3","\xf1","\xa8","\xf3"),
	HX_HCSTRING("get_MAX_VARYING_COMPONENTS","\xc9","\x79","\xc8","\x97"),
	HX_HCSTRING("get_FRAGMENT_SHADER_DERIVATIVE_HINT","\x8b","\xfe","\x63","\x28"),
	HX_HCSTRING("get_RASTERIZER_DISCARD","\x63","\xeb","\x70","\xa4"),
	HX_HCSTRING("get_VERTEX_ARRAY_BINDING","\x4d","\x3b","\xc0","\x73"),
	HX_HCSTRING("get_MAX_VERTEX_OUTPUT_COMPONENTS","\xdd","\xb2","\xe5","\x6d"),
	HX_HCSTRING("get_MAX_FRAGMENT_INPUT_COMPONENTS","\xb6","\x35","\xb1","\xb9"),
	HX_HCSTRING("get_MAX_SERVER_WAIT_TIMEOUT","\x4f","\x9b","\xc4","\x4f"),
	HX_HCSTRING("get_MAX_ELEMENT_INDEX","\x6b","\xf2","\x83","\xf3"),
	HX_HCSTRING("get_RED","\xc8","\x3d","\xb3","\x26"),
	HX_HCSTRING("get_RGB8","\x34","\x54","\x24","\xb6"),
	HX_HCSTRING("get_RGBA8","\x5b","\x61","\xa5","\xa9"),
	HX_HCSTRING("get_RGB10_A2","\x6d","\xfb","\xe8","\x49"),
	HX_HCSTRING("get_TEXTURE_3D","\x3e","\x95","\xed","\x18"),
	HX_HCSTRING("get_TEXTURE_WRAP_R","\x6a","\x0e","\x5d","\x9a"),
	HX_HCSTRING("get_TEXTURE_MIN_LOD","\x27","\xfc","\x13","\xc4"),
	HX_HCSTRING("get_TEXTURE_MAX_LOD","\x39","\xe6","\x3a","\x53"),
	HX_HCSTRING("get_TEXTURE_BASE_LEVEL","\x03","\x65","\xe7","\x5e"),
	HX_HCSTRING("get_TEXTURE_MAX_LEVEL","\x3c","\x69","\xdd","\xbd"),
	HX_HCSTRING("get_TEXTURE_COMPARE_MODE","\x6a","\xc3","\x55","\xc9"),
	HX_HCSTRING("get_TEXTURE_COMPARE_FUNC","\x4b","\xdb","\xb9","\xc4"),
	HX_HCSTRING("get_SRGB","\x03","\xe8","\xd5","\xb6"),
	HX_HCSTRING("get_SRGB8","\xd5","\x1a","\x55","\x44"),
	HX_HCSTRING("get_SRGB8_ALPHA8","\xa4","\xa2","\x10","\x3a"),
	HX_HCSTRING("get_COMPARE_REF_TO_TEXTURE","\x06","\x8d","\x3b","\xe2"),
	HX_HCSTRING("get_RGBA32F","\xaa","\x0e","\xc1","\x66"),
	HX_HCSTRING("get_RGB32F","\xc3","\x29","\x05","\xc7"),
	HX_HCSTRING("get_RGBA16F","\xa4","\x8d","\xbf","\x66"),
	HX_HCSTRING("get_RGB16F","\xbd","\xa8","\x03","\xc7"),
	HX_HCSTRING("get_TEXTURE_2D_ARRAY","\x59","\x92","\x30","\x7f"),
	HX_HCSTRING("get_TEXTURE_BINDING_2D_ARRAY","\xf3","\x32","\xd1","\x69"),
	HX_HCSTRING("get_R11F_G11F_B10F","\x63","\xe3","\x17","\xc4"),
	HX_HCSTRING("get_RGB9_E5","\x5a","\xcd","\x98","\x61"),
	HX_HCSTRING("get_RGBA32UI","\x70","\xd3","\x2b","\x82"),
	HX_HCSTRING("get_RGB32UI","\x37","\x6e","\x7f","\x5d"),
	HX_HCSTRING("get_RGBA16UI","\x36","\x6f","\xdc","\x80"),
	HX_HCSTRING("get_RGB16UI","\xfd","\x09","\x30","\x5c"),
	HX_HCSTRING("get_RGBA8UI","\x6f","\xf8","\xc4","\x66"),
	HX_HCSTRING("get_RGB8UI","\x88","\x13","\x09","\xc7"),
	HX_HCSTRING("get_RGBA32I","\xad","\x0e","\xc1","\x66"),
	HX_HCSTRING("get_RGB32I","\xc6","\x29","\x05","\xc7"),
	HX_HCSTRING("get_RGBA16I","\xa7","\x8d","\xbf","\x66"),
	HX_HCSTRING("get_RGB16I","\xc0","\xa8","\x03","\xc7"),
	HX_HCSTRING("get_RGBA8I","\x8e","\xce","\x0f","\xc7"),
	HX_HCSTRING("get_RGB8I","\x95","\x59","\xa5","\xa9"),
	HX_HCSTRING("get_RED_INTEGER","\xe7","\x30","\xfa","\xb4"),
	HX_HCSTRING("get_RGB_INTEGER","\xa3","\x4e","\xac","\x8f"),
	HX_HCSTRING("get_RGBA_INTEGER","\x5c","\x44","\xc6","\xc4"),
	HX_HCSTRING("get_R8","\xef","\xde","\x2f","\xa3"),
	HX_HCSTRING("get_RG8","\x7a","\x3f","\xb3","\x26"),
	HX_HCSTRING("get_R16F","\x38","\x98","\x13","\xb6"),
	HX_HCSTRING("get_R32F","\x3e","\x19","\x15","\xb6"),
	HX_HCSTRING("get_RG16F","\x83","\x71","\x98","\xa9"),
	HX_HCSTRING("get_RG32F","\x89","\xf2","\x99","\xa9"),
	HX_HCSTRING("get_R8I","\x7a","\x32","\xb3","\x26"),
	HX_HCSTRING("get_R8UI","\x03","\x03","\x19","\xb6"),
	HX_HCSTRING("get_R16I","\x3b","\x98","\x13","\xb6"),
	HX_HCSTRING("get_R16UI","\x22","\xa6","\x11","\x9b"),
	HX_HCSTRING("get_R32I","\x41","\x19","\x15","\xb6"),
	HX_HCSTRING("get_R32UI","\x5c","\x0a","\x61","\x9c"),
	HX_HCSTRING("get_RG8I","\x8f","\x4b","\x24","\xb6"),
	HX_HCSTRING("get_RG8UI","\x4e","\xdc","\x9d","\xa9"),
	HX_HCSTRING("get_RG16I","\x86","\x71","\x98","\xa9"),
	HX_HCSTRING("get_RG16UI","\x77","\xee","\xca","\xbb"),
	HX_HCSTRING("get_RG32I","\x8c","\xf2","\x99","\xa9"),
	HX_HCSTRING("get_RG32UI","\xb1","\x52","\x1a","\xbd"),
	HX_HCSTRING("get_R8_SNORM","\x7f","\x87","\xe8","\x19"),
	HX_HCSTRING("get_RG8_SNORM","\x4a","\x62","\x5b","\x42"),
	HX_HCSTRING("get_RGB8_SNORM","\x84","\xbe","\x6b","\x60"),
	HX_HCSTRING("get_RGBA8_SNORM","\xeb","\xa2","\x79","\x57"),
	HX_HCSTRING("get_RGB10_A2UI","\x01","\xbb","\xb0","\x52"),
	HX_HCSTRING("get_TEXTURE_IMMUTABLE_FORMAT","\x41","\x42","\xe9","\x9f"),
	HX_HCSTRING("get_TEXTURE_IMMUTABLE_LEVELS","\x79","\x71","\xaa","\x46"),
	HX_HCSTRING("get_UNSIGNED_INT_2_10_10_10_REV","\xa1","\xd6","\x5d","\x8e"),
	HX_HCSTRING("get_UNSIGNED_INT_10F_11F_11F_REV","\xe8","\xa4","\x9f","\x7e"),
	HX_HCSTRING("get_UNSIGNED_INT_5_9_9_9_REV","\xf6","\x02","\xb8","\x08"),
	HX_HCSTRING("get_FLOAT_32_UNSIGNED_INT_24_8_REV","\xc5","\x68","\x1b","\xdc"),
	HX_HCSTRING("get_UNSIGNED_INT_24_8","\x8c","\x5a","\x84","\x58"),
	HX_HCSTRING("get_HALF_FLOAT","\xf9","\x86","\x77","\xf0"),
	HX_HCSTRING("get_RG","\xfe","\xde","\x2f","\xa3"),
	HX_HCSTRING("get_RG_INTEGER","\x1d","\xf8","\x6b","\x5f"),
	HX_HCSTRING("get_INT_2_10_10_10_REV","\x09","\x9a","\xb2","\x28"),
	HX_HCSTRING("get_CURRENT_QUERY","\x59","\x1e","\xb4","\xc0"),
	HX_HCSTRING("get_QUERY_RESULT","\x1d","\xfd","\x77","\x0d"),
	HX_HCSTRING("get_QUERY_RESULT_AVAILABLE","\xc7","\xa8","\xe6","\x5f"),
	HX_HCSTRING("get_ANY_SAMPLES_PASSED","\xe2","\x87","\x37","\xe0"),
	HX_HCSTRING("get_ANY_SAMPLES_PASSED_CONSERVATIVE","\x6a","\xc5","\x77","\xe8"),
	HX_HCSTRING("get_MAX_DRAW_BUFFERS","\xbc","\xf7","\xf4","\x55"),
	HX_HCSTRING("get_DRAW_BUFFER0","\x3e","\x55","\xc6","\xb0"),
	HX_HCSTRING("get_DRAW_BUFFER1","\x3f","\x55","\xc6","\xb0"),
	HX_HCSTRING("get_DRAW_BUFFER2","\x40","\x55","\xc6","\xb0"),
	HX_HCSTRING("get_DRAW_BUFFER3","\x41","\x55","\xc6","\xb0"),
	HX_HCSTRING("get_DRAW_BUFFER4","\x42","\x55","\xc6","\xb0"),
	HX_HCSTRING("get_DRAW_BUFFER5","\x43","\x55","\xc6","\xb0"),
	HX_HCSTRING("get_DRAW_BUFFER6","\x44","\x55","\xc6","\xb0"),
	HX_HCSTRING("get_DRAW_BUFFER7","\x45","\x55","\xc6","\xb0"),
	HX_HCSTRING("get_DRAW_BUFFER8","\x46","\x55","\xc6","\xb0"),
	HX_HCSTRING("get_DRAW_BUFFER9","\x47","\x55","\xc6","\xb0"),
	HX_HCSTRING("get_DRAW_BUFFER10","\x11","\x42","\xc4","\xfc"),
	HX_HCSTRING("get_DRAW_BUFFER11","\x12","\x42","\xc4","\xfc"),
	HX_HCSTRING("get_DRAW_BUFFER12","\x13","\x42","\xc4","\xfc"),
	HX_HCSTRING("get_DRAW_BUFFER13","\x14","\x42","\xc4","\xfc"),
	HX_HCSTRING("get_DRAW_BUFFER14","\x15","\x42","\xc4","\xfc"),
	HX_HCSTRING("get_DRAW_BUFFER15","\x16","\x42","\xc4","\xfc"),
	HX_HCSTRING("get_MAX_COLOR_ATTACHMENTS","\x70","\x91","\xac","\x0c"),
	HX_HCSTRING("get_COLOR_ATTACHMENT1","\x89","\x9d","\xac","\x05"),
	HX_HCSTRING("get_COLOR_ATTACHMENT2","\x8a","\x9d","\xac","\x05"),
	HX_HCSTRING("get_COLOR_ATTACHMENT3","\x8b","\x9d","\xac","\x05"),
	HX_HCSTRING("get_COLOR_ATTACHMENT4","\x8c","\x9d","\xac","\x05"),
	HX_HCSTRING("get_COLOR_ATTACHMENT5","\x8d","\x9d","\xac","\x05"),
	HX_HCSTRING("get_COLOR_ATTACHMENT6","\x8e","\x9d","\xac","\x05"),
	HX_HCSTRING("get_COLOR_ATTACHMENT7","\x8f","\x9d","\xac","\x05"),
	HX_HCSTRING("get_COLOR_ATTACHMENT8","\x90","\x9d","\xac","\x05"),
	HX_HCSTRING("get_COLOR_ATTACHMENT9","\x91","\x9d","\xac","\x05"),
	HX_HCSTRING("get_COLOR_ATTACHMENT10","\x87","\x3a","\x5d","\xf1"),
	HX_HCSTRING("get_COLOR_ATTACHMENT11","\x88","\x3a","\x5d","\xf1"),
	HX_HCSTRING("get_COLOR_ATTACHMENT12","\x89","\x3a","\x5d","\xf1"),
	HX_HCSTRING("get_COLOR_ATTACHMENT13","\x8a","\x3a","\x5d","\xf1"),
	HX_HCSTRING("get_COLOR_ATTACHMENT14","\x8b","\x3a","\x5d","\xf1"),
	HX_HCSTRING("get_COLOR_ATTACHMENT15","\x8c","\x3a","\x5d","\xf1"),
	HX_HCSTRING("get_SAMPLER_3D","\x31","\xb3","\x88","\xe4"),
	HX_HCSTRING("get_SAMPLER_2D_SHADOW","\x6d","\xa1","\x14","\xe0"),
	HX_HCSTRING("get_SAMPLER_2D_ARRAY","\x8c","\x28","\x5f","\xd8"),
	HX_HCSTRING("get_SAMPLER_2D_ARRAY_SHADOW","\x73","\xc6","\x06","\xe9"),
	HX_HCSTRING("get_SAMPLER_CUBE_SHADOW","\xaa","\xe2","\x52","\x08"),
	HX_HCSTRING("get_INT_SAMPLER_2D","\x82","\xd3","\x99","\x33"),
	HX_HCSTRING("get_INT_SAMPLER_3D","\x61","\xd4","\x99","\x33"),
	HX_HCSTRING("get_INT_SAMPLER_CUBE","\xa5","\xf8","\xa0","\xb7"),
	HX_HCSTRING("get_INT_SAMPLER_2D_ARRAY","\xbc","\x4d","\x85","\x5a"),
	HX_HCSTRING("get_UNSIGNED_INT_SAMPLER_2D","\x1a","\xe4","\x94","\x91"),
	HX_HCSTRING("get_UNSIGNED_INT_SAMPLER_3D","\xf9","\xe4","\x94","\x91"),
	HX_HCSTRING("get_UNSIGNED_INT_SAMPLER_CUBE","\x3d","\x5f","\xf3","\xd6"),
	HX_HCSTRING("get_UNSIGNED_INT_SAMPLER_2D_ARRAY","\x54","\xe0","\xea","\xee"),
	HX_HCSTRING("get_MAX_SAMPLES","\x85","\x74","\x02","\x17"),
	HX_HCSTRING("get_SAMPLER_BINDING","\xa5","\x48","\x81","\xad"),
	HX_HCSTRING("get_PIXEL_PACK_BUFFER","\x24","\x09","\xef","\x02"),
	HX_HCSTRING("get_PIXEL_UNPACK_BUFFER","\xeb","\x26","\xe7","\x39"),
	HX_HCSTRING("get_PIXEL_PACK_BUFFER_BINDING","\xca","\x85","\x4c","\x69"),
	HX_HCSTRING("get_PIXEL_UNPACK_BUFFER_BINDING","\x91","\x42","\xd2","\xaa"),
	HX_HCSTRING("get_COPY_READ_BUFFER","\x48","\xf0","\x5b","\x83"),
	HX_HCSTRING("get_COPY_WRITE_BUFFER","\xa1","\xa0","\x93","\x63"),
	HX_HCSTRING("get_COPY_READ_BUFFER_BINDING","\xee","\x30","\x6b","\xb5"),
	HX_HCSTRING("get_COPY_WRITE_BUFFER_BINDING","\x47","\x62","\xc0","\x72"),
	HX_HCSTRING("get_FLOAT_MAT2x3","\x19","\xab","\x7c","\xc8"),
	HX_HCSTRING("get_FLOAT_MAT2x4","\x1a","\xab","\x7c","\xc8"),
	HX_HCSTRING("get_FLOAT_MAT3x2","\x59","\x6d","\x7d","\xc8"),
	HX_HCSTRING("get_FLOAT_MAT3x4","\x5b","\x6d","\x7d","\xc8"),
	HX_HCSTRING("get_FLOAT_MAT4x2","\x9a","\x2f","\x7e","\xc8"),
	HX_HCSTRING("get_FLOAT_MAT4x3","\x9b","\x2f","\x7e","\xc8"),
	HX_HCSTRING("get_UNSIGNED_INT_VEC2","\xcf","\xd6","\x5c","\x70"),
	HX_HCSTRING("get_UNSIGNED_INT_VEC3","\xd0","\xd6","\x5c","\x70"),
	HX_HCSTRING("get_UNSIGNED_INT_VEC4","\xd1","\xd6","\x5c","\x70"),
	HX_HCSTRING("get_UNSIGNED_NORMALIZED","\x18","\x45","\x3f","\xbe"),
	HX_HCSTRING("get_SIGNED_NORMALIZED","\xd1","\x1f","\xcd","\xec"),
	HX_HCSTRING("get_VERTEX_ATTRIB_ARRAY_INTEGER","\x35","\xe8","\xc4","\xda"),
	HX_HCSTRING("get_VERTEX_ATTRIB_ARRAY_DIVISOR","\xd5","\xef","\x8b","\x34"),
	HX_HCSTRING("get_TRANSFORM_FEEDBACK_BUFFER_MODE","\x24","\xe4","\xea","\x5e"),
	HX_HCSTRING("get_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS","\xaf","\x5b","\x48","\x9e"),
	HX_HCSTRING("get_TRANSFORM_FEEDBACK_VARYINGS","\xe1","\xde","\x88","\x6b"),
	HX_HCSTRING("get_TRANSFORM_FEEDBACK_BUFFER_START","\x61","\x0c","\x50","\x26"),
	HX_HCSTRING("get_TRANSFORM_FEEDBACK_BUFFER_SIZE","\x82","\xb1","\xdd","\x62"),
	HX_HCSTRING("get_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN","\x82","\xfe","\x24","\xd7"),
	HX_HCSTRING("get_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS","\x6f","\x61","\x79","\x20"),
	HX_HCSTRING("get_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS","\x90","\x71","\x82","\xd3"),
	HX_HCSTRING("get_INTERLEAVED_ATTRIBS","\x6a","\xaa","\xad","\xd7"),
	HX_HCSTRING("get_SEPARATE_ATTRIBS","\xb6","\x56","\xe8","\x14"),
	HX_HCSTRING("get_TRANSFORM_FEEDBACK_BUFFER","\x5e","\xfe","\x3a","\xb0"),
	HX_HCSTRING("get_TRANSFORM_FEEDBACK_BUFFER_BINDING","\x04","\x45","\xc7","\xad"),
	HX_HCSTRING("get_TRANSFORM_FEEDBACK","\x61","\xfa","\x43","\xef"),
	HX_HCSTRING("get_TRANSFORM_FEEDBACK_PAUSED","\x0c","\x82","\x2a","\xcf"),
	HX_HCSTRING("get_TRANSFORM_FEEDBACK_ACTIVE","\x24","\x83","\xec","\xf5"),
	HX_HCSTRING("get_TRANSFORM_FEEDBACK_BINDING","\x07","\x7c","\x00","\x51"),
	HX_HCSTRING("get_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING","\xd0","\xe1","\x0b","\x3b"),
	HX_HCSTRING("get_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE","\x1d","\x54","\xdc","\xc7"),
	HX_HCSTRING("get_FRAMEBUFFER_ATTACHMENT_RED_SIZE","\x50","\xfe","\xc4","\x9a"),
	HX_HCSTRING("get_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE","\xde","\x91","\x3b","\xae"),
	HX_HCSTRING("get_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE","\x25","\xdc","\xe7","\x7f"),
	HX_HCSTRING("get_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE","\x63","\xe7","\x1b","\xfa"),
	HX_HCSTRING("get_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE","\x9e","\x87","\xe2","\x35"),
	HX_HCSTRING("get_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE","\x45","\xea","\x8d","\xb4"),
	HX_HCSTRING("get_FRAMEBUFFER_DEFAULT","\x86","\xe2","\x9a","\xea"),
	HX_HCSTRING("get_DEPTH24_STENCIL8","\x3f","\xc3","\x20","\xc5"),
	HX_HCSTRING("get_DRAW_FRAMEBUFFER_BINDING","\x81","\xa9","\xec","\x0f"),
	HX_HCSTRING("get_READ_FRAMEBUFFER","\x2d","\xf0","\x5a","\xbf"),
	HX_HCSTRING("get_DRAW_FRAMEBUFFER","\xdb","\x1d","\xc9","\x98"),
	HX_HCSTRING("get_READ_FRAMEBUFFER_BINDING","\xd3","\x1d","\xf4","\x48"),
	HX_HCSTRING("get_RENDERBUFFER_SAMPLES","\xc9","\x7a","\xa8","\x6a"),
	HX_HCSTRING("get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER","\xcc","\x87","\xf9","\x6c"),
	HX_HCSTRING("get_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE","\x9d","\x2b","\x50","\x28"),
	HX_HCSTRING("get_UNIFORM_BUFFER","\xd4","\xd0","\x3d","\x8a"),
	HX_HCSTRING("get_UNIFORM_BUFFER_BINDING","\x7a","\x7d","\x32","\x9d"),
	HX_HCSTRING("get_UNIFORM_BUFFER_START","\x57","\x1b","\x21","\x34"),
	HX_HCSTRING("get_UNIFORM_BUFFER_SIZE","\x4c","\x33","\x7e","\x21"),
	HX_HCSTRING("get_MAX_VERTEX_UNIFORM_BLOCKS","\xe8","\x87","\xb2","\x88"),
	HX_HCSTRING("get_MAX_FRAGMENT_UNIFORM_BLOCKS","\xfc","\xd7","\x53","\x39"),
	HX_HCSTRING("get_MAX_COMBINED_UNIFORM_BLOCKS","\x67","\x56","\x9c","\xc3"),
	HX_HCSTRING("get_MAX_UNIFORM_BUFFER_BINDINGS","\x1e","\xe3","\xf7","\x9e"),
	HX_HCSTRING("get_MAX_UNIFORM_BLOCK_SIZE","\xc2","\x2e","\x45","\xa4"),
	HX_HCSTRING("get_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS","\xc6","\x6b","\xfc","\x2b"),
	HX_HCSTRING("get_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS","\x5a","\x85","\x0b","\xfb"),
	HX_HCSTRING("get_UNIFORM_BUFFER_OFFSET_ALIGNMENT","\xe2","\x56","\xb9","\x76"),
	HX_HCSTRING("get_ACTIVE_UNIFORM_BLOCKS","\x81","\xe5","\xe0","\x12"),
	HX_HCSTRING("get_UNIFORM_TYPE","\x8e","\xc5","\xf8","\x4c"),
	HX_HCSTRING("get_UNIFORM_SIZE","\x95","\x73","\x43","\x4c"),
	HX_HCSTRING("get_UNIFORM_BLOCK_INDEX","\xcc","\x1e","\xc7","\x9b"),
	HX_HCSTRING("get_UNIFORM_OFFSET","\x67","\xab","\xe8","\x19"),
	HX_HCSTRING("get_UNIFORM_ARRAY_STRIDE","\x33","\xc8","\xe6","\xae"),
	HX_HCSTRING("get_UNIFORM_MATRIX_STRIDE","\x43","\x30","\xf9","\x02"),
	HX_HCSTRING("get_UNIFORM_IS_ROW_MAJOR","\xd3","\xf4","\x2a","\x34"),
	HX_HCSTRING("get_UNIFORM_BLOCK_BINDING","\x7f","\xd5","\x53","\x11"),
	HX_HCSTRING("get_UNIFORM_BLOCK_DATA_SIZE","\x10","\x0f","\xf2","\x3e"),
	HX_HCSTRING("get_UNIFORM_BLOCK_ACTIVE_UNIFORMS","\xf2","\xdd","\xd1","\x4f"),
	HX_HCSTRING("get_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES","\xc9","\x18","\x09","\x6c"),
	HX_HCSTRING("get_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER","\x98","\x1d","\x08","\x1d"),
	HX_HCSTRING("get_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER","\xac","\x38","\x6b","\x52"),
	HX_HCSTRING("get_OBJECT_TYPE","\x11","\x0f","\x0c","\xe0"),
	HX_HCSTRING("get_SYNC_CONDITION","\x20","\xd8","\x6f","\x0f"),
	HX_HCSTRING("get_SYNC_STATUS","\x6d","\xab","\x99","\xc7"),
	HX_HCSTRING("get_SYNC_FLAGS","\x4c","\x6b","\xe6","\xef"),
	HX_HCSTRING("get_SYNC_FENCE","\xb6","\xc6","\x4f","\xeb"),
	HX_HCSTRING("get_SYNC_GPU_COMMANDS_COMPLETE","\x42","\x8e","\x71","\x67"),
	HX_HCSTRING("get_UNSIGNALED","\x69","\xd4","\xff","\x72"),
	HX_HCSTRING("get_SIGNALED","\xd0","\x34","\xdc","\x93"),
	HX_HCSTRING("get_ALREADY_SIGNALED","\xb7","\x42","\xaa","\x01"),
	HX_HCSTRING("get_TIMEOUT_EXPIRED","\x9e","\x33","\x10","\x58"),
	HX_HCSTRING("get_CONDITION_SATISFIED","\x65","\x4d","\x96","\xb8"),
	HX_HCSTRING("get_WAIT_FAILED","\x1e","\x81","\xbd","\x53"),
	HX_HCSTRING("get_SYNC_FLUSH_COMMANDS_BIT","\xec","\x04","\xcf","\x93"),
	HX_HCSTRING("get_COLOR","\x9a","\x05","\xf4","\x0b"),
	HX_HCSTRING("get_DEPTH","\x3a","\x85","\xc1","\x98"),
	HX_HCSTRING("get_STENCIL","\xf3","\xf1","\xd1","\x85"),
	HX_HCSTRING("get_MIN","\x09","\x76","\xaf","\x26"),
	HX_HCSTRING("get_MAX","\x1b","\x6f","\xaf","\x26"),
	HX_HCSTRING("get_DEPTH_COMPONENT24","\xda","\xcf","\x16","\xc2"),
	HX_HCSTRING("get_STREAM_READ","\x4c","\x56","\x41","\xdf"),
	HX_HCSTRING("get_STREAM_COPY","\xab","\xc6","\x5e","\xd5"),
	HX_HCSTRING("get_STATIC_READ","\x5e","\x27","\x48","\x84"),
	HX_HCSTRING("get_STATIC_COPY","\xbd","\x97","\x65","\x7a"),
	HX_HCSTRING("get_DYNAMIC_READ","\xff","\x0f","\xf5","\x31"),
	HX_HCSTRING("get_DYNAMIC_COPY","\x5e","\x80","\x12","\x28"),
	HX_HCSTRING("get_DEPTH_COMPONENT32F","\xaf","\xcf","\xdf","\x11"),
	HX_HCSTRING("get_DEPTH32F_STENCIL8","\xce","\x0a","\x60","\x02"),
	HX_HCSTRING("get_INVALID_INDEX","\xa1","\x0f","\xf3","\x42"),
	HX_HCSTRING("get_TIMEOUT_IGNORED","\x0b","\x0b","\x7f","\x0f"),
	HX_HCSTRING("get_MAX_CLIENT_WAIT_TIMEOUT_WEBGL","\xe1","\xa0","\x66","\xb6"),
	HX_HCSTRING("activeTexture","\xb5","\x13","\xaa","\x56"),
	HX_HCSTRING("attachShader","\xca","\xd0","\x77","\xb2"),
	HX_HCSTRING("beginQuery","\x1f","\x9c","\xb3","\xd3"),
	HX_HCSTRING("beginTransformFeedback","\xa8","\xad","\xbb","\xcc"),
	HX_HCSTRING("bindAttribLocation","\x3c","\xa6","\x30","\x1e"),
	HX_HCSTRING("bindBuffer","\x9d","\x92","\xbe","\xf8"),
	HX_HCSTRING("bindBufferBase","\x4e","\xb9","\x42","\x42"),
	HX_HCSTRING("bindBufferRange","\xe0","\xe9","\x84","\xee"),
	HX_HCSTRING("bindFramebuffer","\x30","\xc6","\x61","\xe7"),
	HX_HCSTRING("bindRenderbuffer","\x33","\xb6","\xb7","\x14"),
	HX_HCSTRING("bindSampler","\xcb","\xd8","\x3a","\x80"),
	HX_HCSTRING("bindTexture","\x9e","\xdc","\x51","\x9b"),
	HX_HCSTRING("bindTransformFeedback","\x94","\x5b","\xe4","\x3f"),
	HX_HCSTRING("bindVertexArray","\xd8","\xe8","\xe4","\xa6"),
	HX_HCSTRING("blendColor","\x52","\x33","\xb4","\xe2"),
	HX_HCSTRING("blendEquation","\xfd","\x98","\xad","\x02"),
	HX_HCSTRING("blendEquationSeparate","\x80","\x39","\x68","\xa7"),
	HX_HCSTRING("blendFunc","\x35","\xfc","\x9b","\x07"),
	HX_HCSTRING("blendFuncSeparate","\xb8","\x94","\xc0","\xca"),
	HX_HCSTRING("blitFramebuffer","\xb8","\x26","\x9e","\xee"),
	HX_HCSTRING("bufferData","\x4a","\xbf","\x73","\x93"),
	HX_HCSTRING("bufferSubData","\xaa","\xf6","\xe4","\x45"),
	HX_HCSTRING("checkFramebufferStatus","\x17","\x26","\x75","\x0a"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("clearBufferfi","\xf0","\x58","\x5b","\xe0"),
	HX_HCSTRING("clearBufferfv","\xfd","\x58","\x5b","\xe0"),
	HX_HCSTRING("clearBufferiv","\x9a","\x5b","\x5b","\xe0"),
	HX_HCSTRING("clearBufferuiv","\x55","\xdb","\x9d","\x6f"),
	HX_HCSTRING("clearColor","\x96","\xb0","\x66","\x1f"),
	HX_HCSTRING("clearDepthf","\x70","\xff","\x75","\x01"),
	HX_HCSTRING("clearStencil","\xef","\x6f","\x82","\x5b"),
	HX_HCSTRING("clientWaitSync","\xdb","\x68","\xd7","\xe9"),
	HX_HCSTRING("colorMask","\xef","\xcb","\xc3","\x23"),
	HX_HCSTRING("compileShader","\xf8","\x70","\xb2","\xda"),
	HX_HCSTRING("compressedTexImage2D","\xa7","\xd8","\x5d","\x24"),
	HX_HCSTRING("compressedTexImage3D","\x86","\xd9","\x5d","\x24"),
	HX_HCSTRING("compressedTexSubImage2D","\xd3","\xb5","\x7d","\x36"),
	HX_HCSTRING("compressedTexSubImage3D","\xb2","\xb6","\x7d","\x36"),
	HX_HCSTRING("copyBufferSubData","\xb5","\x9d","\x03","\xc2"),
	HX_HCSTRING("copyTexImage2D","\xdb","\xd0","\x76","\xe4"),
	HX_HCSTRING("copyTexSubImage2D","\x1f","\xd6","\xae","\xa4"),
	HX_HCSTRING("copyTexSubImage3D","\xfe","\xd6","\xae","\xa4"),
	HX_HCSTRING("createBuffer","\x1c","\xfd","\xe9","\xf2"),
	HX_HCSTRING("createFramebuffer","\x51","\xef","\xe8","\xcc"),
	HX_HCSTRING("createProgram","\xe8","\x22","\x3c","\xdc"),
	HX_HCSTRING("createQuery","\x6c","\xc2","\x65","\x87"),
	HX_HCSTRING("createRenderbuffer","\xf2","\x89","\x74","\x05"),
	HX_HCSTRING("createSampler","\x6c","\x9d","\x0c","\x6c"),
	HX_HCSTRING("createShader","\x41","\xff","\x75","\x3f"),
	HX_HCSTRING("createTexture","\x3f","\xa1","\x23","\x87"),
	HX_HCSTRING("createTransformFeedback","\x75","\x93","\xf4","\xd0"),
	HX_HCSTRING("createVertexArray","\xf9","\x11","\x6c","\x8c"),
	HX_HCSTRING("cullFace","\x6f","\xe7","\x31","\xac"),
	HX_HCSTRING("deleteBuffer","\x8b","\xe3","\x2c","\x37"),
	HX_HCSTRING("deleteFramebuffer","\x82","\x56","\x01","\x50"),
	HX_HCSTRING("deleteProgram","\x99","\xdd","\x82","\x52"),
	HX_HCSTRING("deleteQuery","\xdd","\xbe","\xdf","\xed"),
	HX_HCSTRING("deleteRenderbuffer","\xa1","\x6d","\xb6","\x37"),
	HX_HCSTRING("deleteSampler","\x1d","\x58","\x53","\xe2"),
	HX_HCSTRING("deleteShader","\xb0","\xe5","\xb8","\x83"),
	HX_HCSTRING("deleteSync","\x26","\x98","\xac","\x9f"),
	HX_HCSTRING("deleteTexture","\xf0","\x5b","\x6a","\xfd"),
	HX_HCSTRING("deleteTransformFeedback","\x66","\xf5","\x6f","\xce"),
	HX_HCSTRING("deleteVertexArray","\x2a","\x79","\x84","\x0f"),
	HX_HCSTRING("depthFunc","\xe7","\x45","\x48","\x9a"),
	HX_HCSTRING("depthMask","\x8f","\x9b","\xd9","\x9e"),
	HX_HCSTRING("depthRangef","\x6c","\xe9","\x9a","\x39"),
	HX_HCSTRING("detachShader","\xd8","\xd0","\xad","\xea"),
	HX_HCSTRING("disable","\xe8","\x69","\x58","\xb1"),
	HX_HCSTRING("disableVertexAttribArray","\xe3","\x69","\x74","\x4a"),
	HX_HCSTRING("drawArrays","\xde","\xf3","\xb3","\xf9"),
	HX_HCSTRING("drawArraysInstanced","\x71","\x03","\x37","\x15"),
	HX_HCSTRING("drawBuffers","\xcf","\xe7","\xd8","\xfa"),
	HX_HCSTRING("drawElements","\x5b","\xc2","\xb7","\x59"),
	HX_HCSTRING("drawElementsInstanced","\x54","\xfd","\xa5","\xed"),
	HX_HCSTRING("drawRangeElements","\x70","\x0e","\x07","\x62"),
	HX_HCSTRING("enable","\x83","\xae","\x87","\xf8"),
	HX_HCSTRING("enableVertexAttribArray","\xe8","\x46","\x5a","\xac"),
	HX_HCSTRING("endQuery","\x2d","\x1d","\xe8","\x5b"),
	HX_HCSTRING("endTransformFeedback","\xb6","\x8b","\xb4","\xa2"),
	HX_HCSTRING("fenceSync","\xac","\x19","\x56","\x6f"),
	HX_HCSTRING("finish","\x53","\x40","\x7f","\x86"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("framebufferRenderbuffer","\x63","\xdd","\xb2","\x36"),
	HX_HCSTRING("framebufferTexture2D","\xc0","\x66","\x22","\x24"),
	HX_HCSTRING("framebufferTextureLayer","\x83","\xbf","\xbc","\x93"),
	HX_HCSTRING("frontFace","\xe6","\x01","\xc1","\x80"),
	HX_HCSTRING("genBuffers","\xc3","\x7c","\xc3","\xa9"),
	HX_HCSTRING("generateMipmap","\x9d","\xd6","\x0d","\x5b"),
	HX_HCSTRING("genFramebuffers","\x96","\x9f","\x31","\x05"),
	HX_HCSTRING("genQueries","\xb6","\x6a","\x10","\x8e"),
	HX_HCSTRING("genRenderbuffers","\x2d","\xa4","\x3d","\xba"),
	HX_HCSTRING("genSamplers","\x1b","\xef","\x0d","\x01"),
	HX_HCSTRING("genTextures","\xe8","\x43","\x1a","\x9a"),
	HX_HCSTRING("genTransformFeedbacks","\xf2","\x81","\x95","\xb7"),
	HX_HCSTRING("getActiveAttrib","\x66","\x8b","\x22","\x63"),
	HX_HCSTRING("getActiveUniform","\x98","\x35","\x4e","\xd7"),
	HX_HCSTRING("getActiveUniformBlocki","\x34","\x1a","\xa1","\xc4"),
	HX_HCSTRING("getActiveUniformBlockiv","\xc2","\xd3","\x55","\x48"),
	HX_HCSTRING("getActiveUniformBlockName","\x80","\x75","\x5b","\x56"),
	HX_HCSTRING("getActiveUniformsiv","\x88","\xf8","\x90","\x9a"),
	HX_HCSTRING("getAttachedShaders","\xb4","\x2e","\x77","\x93"),
	HX_HCSTRING("getAttribLocation","\xd5","\x1a","\x10","\x5d"),
	HX_HCSTRING("getBoolean","\xb2","\x70","\x60","\xcd"),
	HX_HCSTRING("getBooleanv","\x84","\x2b","\x02","\xe7"),
	HX_HCSTRING("getBufferParameteri","\x76","\x28","\x19","\x09"),
	HX_HCSTRING("getBufferParameteri64v","\xc2","\x2c","\x38","\xab"),
	HX_HCSTRING("getBufferParameteriv","\x40","\x3f","\xea","\xec"),
	HX_HCSTRING("getBufferPointerv","\x6f","\x0d","\xa6","\xb7"),
	HX_HCSTRING("getError","\x52","\xdb","\x00","\xd3"),
	HX_HCSTRING("getFloat","\x26","\xd5","\x6d","\x62"),
	HX_HCSTRING("getFloatv","\x90","\xac","\xac","\xbd"),
	HX_HCSTRING("getExtension","\x09","\x30","\x67","\xf4"),
	HX_HCSTRING("getFragDataLocation","\x87","\x0b","\xd2","\x5c"),
	HX_HCSTRING("getFramebufferAttachmentParameteri","\xfa","\xdd","\x79","\x9c"),
	HX_HCSTRING("getFramebufferAttachmentParameteriv","\x3c","\x5d","\x28","\x4e"),
	HX_HCSTRING("getInteger","\xc8","\x43","\x7d","\x66"),
	HX_HCSTRING("getInteger64","\x06","\xf5","\x2b","\xf3"),
	HX_HCSTRING("getInteger64i","\xa3","\x70","\x4a","\xd3"),
	HX_HCSTRING("getInteger64i_v","\x9a","\x72","\x42","\x0f"),
	HX_HCSTRING("getInteger64v","\xb0","\x70","\x4a","\xd3"),
	HX_HCSTRING("getIntegeri","\xa1","\x0b","\x1e","\x47"),
	HX_HCSTRING("getIntegeri_v","\x18","\x49","\x71","\xd3"),
	HX_HCSTRING("getIntegerv","\xae","\x0b","\x1e","\x47"),
	HX_HCSTRING("getInternalformati","\xbf","\x0b","\x2e","\xf1"),
	HX_HCSTRING("getInternalformativ","\xd7","\x3b","\x1c","\x17"),
	HX_HCSTRING("getProgramBinary","\x2f","\xdf","\xde","\xe5"),
	HX_HCSTRING("getProgrami","\x1b","\xac","\x1b","\xac"),
	HX_HCSTRING("getProgramInfoLog","\xc8","\xf1","\xf2","\xcd"),
	HX_HCSTRING("getProgramiv","\xfb","\xeb","\x1a","\xec"),
	HX_HCSTRING("getQueryi","\x97","\xa5","\xa5","\x4b"),
	HX_HCSTRING("getQueryiv","\xff","\x3e","\x4b","\xe5"),
	HX_HCSTRING("getQueryObjectui","\x85","\x8b","\x77","\xca"),
	HX_HCSTRING("getQueryObjectuiv","\x51","\x89","\x22","\x5e"),
	HX_HCSTRING("getRenderbufferParameteri","\x4c","\x8c","\xf1","\xff"),
	HX_HCSTRING("getRenderbufferParameteriv","\xaa","\x36","\x69","\xf3"),
	HX_HCSTRING("getSamplerParameteri","\x52","\x58","\x2a","\x18"),
	HX_HCSTRING("getSamplerParameteriv","\xe4","\xef","\xe2","\x0c"),
	HX_HCSTRING("getSamplerParameterf","\x4f","\x58","\x2a","\x18"),
	HX_HCSTRING("getSamplerParameterfv","\x47","\xed","\xe2","\x0c"),
	HX_HCSTRING("getShaderInfoLog","\x9b","\xbd","\xc8","\xf3"),
	HX_HCSTRING("getShaderi","\xae","\x07","\xe8","\xae"),
	HX_HCSTRING("getShaderiv","\x08","\xb1","\x1e","\x5c"),
	HX_HCSTRING("getShaderPrecisionFormat","\xfa","\xb8","\xcf","\xce"),
	HX_HCSTRING("getShaderSource","\x96","\xa3","\x04","\xc5"),
	HX_HCSTRING("getString","\x07","\xb2","\x86","\x8d"),
	HX_HCSTRING("getStringi","\x82","\x14","\x55","\x48"),
	HX_HCSTRING("getSyncParameteri","\x11","\xcc","\xbf","\x3c"),
	HX_HCSTRING("getSyncParameteriv","\x45","\xc3","\x12","\xeb"),
	HX_HCSTRING("getTexParameterf","\xee","\xd0","\x51","\xa6"),
	HX_HCSTRING("getTexParameterfv","\xc8","\xff","\x44","\xe1"),
	HX_HCSTRING("getTexParameteri","\xf1","\xd0","\x51","\xa6"),
	HX_HCSTRING("getTexParameteriv","\x65","\x02","\x45","\xe1"),
	HX_HCSTRING("getTransformFeedbackVarying","\x15","\x71","\x4a","\xf2"),
	HX_HCSTRING("getUniformf","\x68","\x8f","\x48","\x28"),
	HX_HCSTRING("getUniformfv","\x0e","\xec","\x34","\x17"),
	HX_HCSTRING("getUniformi","\x6b","\x8f","\x48","\x28"),
	HX_HCSTRING("getUniformiv","\xab","\xee","\x34","\x17"),
	HX_HCSTRING("getUniformui","\x12","\xf9","\x34","\x17"),
	HX_HCSTRING("getUniformuiv","\x24","\xf7","\x24","\x37"),
	HX_HCSTRING("getUniformBlockIndex","\x63","\xc3","\x6b","\x34"),
	HX_HCSTRING("getUniformIndices","\x89","\x2b","\x6e","\x0f"),
	HX_HCSTRING("getUniformLocation","\x93","\x5f","\xd4","\x4f"),
	HX_HCSTRING("getVertexAttribf","\x62","\x64","\x8d","\x15"),
	HX_HCSTRING("getVertexAttribfv","\xd4","\x71","\x2a","\xc6"),
	HX_HCSTRING("getVertexAttribi","\x65","\x64","\x8d","\x15"),
	HX_HCSTRING("getVertexAttribIi","\x84","\x58","\x2a","\xc6"),
	HX_HCSTRING("getVertexAttribIiv","\x72","\x1b","\xe3","\x9e"),
	HX_HCSTRING("getVertexAttribIui","\xd9","\x25","\xe3","\x9e"),
	HX_HCSTRING("getVertexAttribIuiv","\x7d","\xf8","\xdd","\x67"),
	HX_HCSTRING("getVertexAttribiv","\x71","\x74","\x2a","\xc6"),
	HX_HCSTRING("getVertexAttribPointerv","\xbd","\xf4","\xf5","\xbb"),
	HX_HCSTRING("hint","\x87","\x3d","\x0e","\x45"),
	HX_HCSTRING("invalidateFramebuffer","\x32","\xdf","\x3e","\x7c"),
	HX_HCSTRING("invalidateSubFramebuffer","\x28","\xa2","\x17","\xad"),
	HX_HCSTRING("isBuffer","\x8a","\x58","\xfe","\x28"),
	HX_HCSTRING("isEnabled","\xb7","\x81","\x2f","\x82"),
	HX_HCSTRING("isFramebuffer","\x23","\x65","\x6c","\x83"),
	HX_HCSTRING("isProgram","\xba","\xc7","\xf7","\xf7"),
	HX_HCSTRING("isQuery","\xbe","\x2e","\x70","\xfa"),
	HX_HCSTRING("isRenderbuffer","\xe0","\x2b","\xf8","\x01"),
	HX_HCSTRING("isSampler","\x3e","\x42","\xc8","\x87"),
	HX_HCSTRING("isShader","\xaf","\x5a","\x8a","\x75"),
	HX_HCSTRING("isTexture","\x11","\x46","\xdf","\xa2"),
	HX_HCSTRING("isTransformFeedback","\xc7","\x32","\x99","\x37"),
	HX_HCSTRING("isVertexArray","\xcb","\x87","\xef","\x42"),
	HX_HCSTRING("lineWidth","\x72","\xb9","\x5d","\x11"),
	HX_HCSTRING("linkProgram","\xaa","\xad","\x7b","\x89"),
	HX_HCSTRING("mapBufferRange","\x61","\xd3","\x19","\x7b"),
	HX_HCSTRING("pauseTransformFeedback","\x3b","\x8a","\xd6","\xe8"),
	HX_HCSTRING("pixelStorei","\x8e","\x34","\xc8","\x80"),
	HX_HCSTRING("polygonOffset","\xad","\x25","\x4d","\x66"),
	HX_HCSTRING("programBinary","\xa5","\x35","\xbe","\x7b"),
	HX_HCSTRING("programParameteri","\x44","\xda","\x18","\x0b"),
	HX_HCSTRING("readBuffer","\xf6","\xa0","\x10","\xca"),
	HX_HCSTRING("readPixels","\x23","\xd3","\x25","\x86"),
	HX_HCSTRING("releaseShaderCompiler","\x0b","\x50","\x7a","\xa0"),
	HX_HCSTRING("renderbufferStorage","\x05","\xa1","\x70","\x87"),
	HX_HCSTRING("renderbufferStorageMultisample","\x5e","\x46","\x79","\x34"),
	HX_HCSTRING("resumeTransformFeedback","\xa4","\x79","\xd5","\x6f"),
	HX_HCSTRING("sampleCoverage","\x32","\x68","\x81","\x3b"),
	HX_HCSTRING("samplerParameterf","\xc5","\x21","\xb5","\xf0"),
	HX_HCSTRING("samplerParameteri","\xc8","\x21","\xb5","\xf0"),
	HX_HCSTRING("scissor","\x1c","\x28","\xe7","\x04"),
	HX_HCSTRING("shaderBinary","\x06","\x59","\xf4","\x5c"),
	HX_HCSTRING("shaderSource","\xe0","\x4d","\x1a","\xa2"),
	HX_HCSTRING("stencilFunc","\x60","\x83","\xbe","\x40"),
	HX_HCSTRING("stencilFuncSeparate","\xe3","\xbe","\xce","\xb2"),
	HX_HCSTRING("stencilMask","\x08","\xd9","\x4f","\x45"),
	HX_HCSTRING("stencilMaskSeparate","\x8b","\xfc","\xa9","\xc6"),
	HX_HCSTRING("stencilOp","\x3d","\x7a","\xec","\x56"),
	HX_HCSTRING("stencilOpSeparate","\xc0","\x5a","\x4a","\x53"),
	HX_HCSTRING("texImage2D","\xc6","\x7c","\x67","\xb9"),
	HX_HCSTRING("texImage3D","\xa5","\x7d","\x67","\xb9"),
	HX_HCSTRING("texStorage2D","\xe6","\x9c","\x44","\xcf"),
	HX_HCSTRING("texStorage3D","\xc5","\x9d","\x44","\xcf"),
	HX_HCSTRING("texParameterf","\x64","\x27","\x31","\x3c"),
	HX_HCSTRING("texParameteri","\x67","\x27","\x31","\x3c"),
	HX_HCSTRING("texSubImage2D","\x14","\x2f","\x90","\x28"),
	HX_HCSTRING("texSubImage3D","\xf3","\x2f","\x90","\x28"),
	HX_HCSTRING("transformFeedbackVaryings","\x34","\xb1","\x1a","\x48"),
	HX_HCSTRING("uniform1f","\x49","\x21","\xde","\x07"),
	HX_HCSTRING("uniform1fv","\x0d","\xff","\x7e","\xda"),
	HX_HCSTRING("uniform1i","\x4c","\x21","\xde","\x07"),
	HX_HCSTRING("uniform1iv","\xaa","\x01","\x7f","\xda"),
	HX_HCSTRING("uniform1ui","\x11","\x0c","\x7f","\xda"),
	HX_HCSTRING("uniform1uiv","\x45","\x83","\xab","\x54"),
	HX_HCSTRING("uniform2f","\x28","\x22","\xde","\x07"),
	HX_HCSTRING("uniform2fv","\x4e","\xc1","\x7f","\xda"),
	HX_HCSTRING("uniform2i","\x2b","\x22","\xde","\x07"),
	HX_HCSTRING("uniform2iv","\xeb","\xc3","\x7f","\xda"),
	HX_HCSTRING("uniform2ui","\x52","\xce","\x7f","\xda"),
	HX_HCSTRING("uniform2uiv","\xe4","\xb9","\x54","\x55"),
	HX_HCSTRING("uniform3f","\x07","\x23","\xde","\x07"),
	HX_HCSTRING("uniform3fv","\x8f","\x83","\x80","\xda"),
	HX_HCSTRING("uniform3i","\x0a","\x23","\xde","\x07"),
	HX_HCSTRING("uniform3iv","\x2c","\x86","\x80","\xda"),
	HX_HCSTRING("uniform3ui","\x93","\x90","\x80","\xda"),
	HX_HCSTRING("uniform3uiv","\x83","\xf0","\xfd","\x55"),
	HX_HCSTRING("uniform4f","\xe6","\x23","\xde","\x07"),
	HX_HCSTRING("uniform4fv","\xd0","\x45","\x81","\xda"),
	HX_HCSTRING("uniform4i","\xe9","\x23","\xde","\x07"),
	HX_HCSTRING("uniform4iv","\x6d","\x48","\x81","\xda"),
	HX_HCSTRING("uniform4ui","\xd4","\x52","\x81","\xda"),
	HX_HCSTRING("uniform4uiv","\x22","\x27","\xa7","\x56"),
	HX_HCSTRING("uniformBlockBinding","\xcc","\xbc","\xc4","\xbf"),
	HX_HCSTRING("uniformMatrix2fv","\x8d","\x8a","\x59","\xc5"),
	HX_HCSTRING("uniformMatrix2x3fv","\x48","\x61","\x6e","\x02"),
	HX_HCSTRING("uniformMatrix2x4fv","\x89","\x23","\x6f","\x02"),
	HX_HCSTRING("uniformMatrix3fv","\xce","\x4c","\x5a","\xc5"),
	HX_HCSTRING("uniformMatrix3x2fv","\x88","\x33","\xd4","\x95"),
	HX_HCSTRING("uniformMatrix3x4fv","\x0a","\xb8","\xd5","\x95"),
	HX_HCSTRING("uniformMatrix4fv","\x0f","\x0f","\x5b","\xc5"),
	HX_HCSTRING("uniformMatrix4x2fv","\x09","\xc8","\x3a","\x29"),
	HX_HCSTRING("uniformMatrix4x3fv","\x4a","\x8a","\x3b","\x29"),
	HX_HCSTRING("unmapBuffer","\x43","\x9f","\x1a","\x39"),
	HX_HCSTRING("useProgram","\xfd","\x6c","\xac","\xf6"),
	HX_HCSTRING("validateProgram","\x8e","\x80","\x0f","\xef"),
	HX_HCSTRING("vertexAttrib1f","\x63","\x94","\xb6","\x53"),
	HX_HCSTRING("vertexAttrib1fv","\xb3","\x42","\x0b","\xec"),
	HX_HCSTRING("vertexAttrib2f","\x42","\x95","\xb6","\x53"),
	HX_HCSTRING("vertexAttrib2fv","\xf4","\x04","\x0c","\xec"),
	HX_HCSTRING("vertexAttrib3f","\x21","\x96","\xb6","\x53"),
	HX_HCSTRING("vertexAttrib3fv","\x35","\xc7","\x0c","\xec"),
	HX_HCSTRING("vertexAttrib4f","\x00","\x97","\xb6","\x53"),
	HX_HCSTRING("vertexAttrib4fv","\x76","\x89","\x0d","\xec"),
	HX_HCSTRING("vertexAttribDivisor","\x30","\x09","\x77","\x5f"),
	HX_HCSTRING("vertexAttribI4i","\x30","\x4d","\x1d","\xec"),
	HX_HCSTRING("vertexAttribI4iv","\x46","\x3d","\x86","\xad"),
	HX_HCSTRING("vertexAttribI4ui","\xad","\x47","\x86","\xad"),
	HX_HCSTRING("vertexAttribI4uiv","\x29","\x70","\xf8","\x27"),
	HX_HCSTRING("vertexAttribIPointer","\x42","\xcb","\x4a","\x67"),
	HX_HCSTRING("vertexAttribPointer","\x8f","\x04","\xb6","\x3f"),
	HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c"),
	HX_HCSTRING("waitSync","\x70","\x1f","\x42","\x55"),
	HX_HCSTRING("fromGL","\x0f","\x92","\xc6","\xb5"),
	::String(null()) };

void GLES3Context_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl._GLES3Context.GLES3Context_Impl_","\x24","\x63","\x4a","\x76");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLES3Context_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLES3Context_Impl__obj >;
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
} // end namespace _GLES3Context
