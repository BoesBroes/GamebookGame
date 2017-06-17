#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeRenderer
#include <lime/_backend/native/NativeRenderer.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeWindow
#include <lime/_backend/native/NativeWindow.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_graphics_RendererType
#include <lime/graphics/RendererType.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
namespace lime{
namespace _backend{
namespace native{

Void NativeRenderer_obj::__construct(::lime::graphics::Renderer parent)
{
{
	this->parent = parent;
}
;
	return null();
}

//NativeRenderer_obj::~NativeRenderer_obj() { }

Dynamic NativeRenderer_obj::__CreateEmpty() { return  new NativeRenderer_obj; }
hx::ObjectPtr< NativeRenderer_obj > NativeRenderer_obj::__new(::lime::graphics::Renderer parent)
{  hx::ObjectPtr< NativeRenderer_obj > _result_ = new NativeRenderer_obj();
	_result_->__construct(parent);
	return _result_;}

Dynamic NativeRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeRenderer_obj > _result_ = new NativeRenderer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void NativeRenderer_obj::create( ){
{
		this->handle = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_renderer_create.call(hx::DynamicPtr(this->parent->window->backend->handle))));
		::lime::graphics::Renderer tmp = this->parent;
		tmp->window->__scale = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_renderer_get_scale.call(hx::DynamicPtr(this->handle));
		::String type = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_renderer_get_type.call(hx::DynamicPtr(this->handle))));
		::String tmp1 = type;
		::String _switch_1 = (tmp1);
		if (  ( _switch_1==HX_HCSTRING("opengl","\x6f","\x64","\x94","\x21"))){
			::lime::_backend::native::NativeGLRenderContext tmp2 = ::lime::_backend::native::NativeGLRenderContext_obj::__new();
			::lime::_backend::native::NativeGLRenderContext context = tmp2;
			this->useHardware = true;
			::lime::_backend::native::NativeGLRenderContext tmp3 = context;
			::lime::graphics::RenderContext tmp4 = ::lime::graphics::RenderContext_obj::OPENGL(tmp3);
			::lime::graphics::Renderer tmp5 = this->parent;
			tmp5->context = tmp4;
			::lime::graphics::Renderer tmp6 = this->parent;
			tmp6->type = ::lime::graphics::RendererType_obj::OPENGL;
			::lime::_backend::native::NativeGLRenderContext tmp7 = ::lime::graphics::opengl::GL_obj::context;
			bool tmp8 = (tmp7 == null());
			if ((tmp8)){
				::lime::graphics::opengl::GL_obj::context = context;
			}
		}
		else  {
			this->useHardware = false;
			this->render();
			::lime::graphics::cairo::Cairo tmp2 = this->cairo;
			::lime::graphics::RenderContext tmp3 = ::lime::graphics::RenderContext_obj::CAIRO(tmp2);
			::lime::graphics::Renderer tmp4 = this->parent;
			tmp4->context = tmp3;
			::lime::graphics::Renderer tmp5 = this->parent;
			tmp5->type = ::lime::graphics::RendererType_obj::CAIRO;
		}
;
;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeRenderer_obj,create,(void))

Void NativeRenderer_obj::dispatch( ){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeRenderer_obj,dispatch,(void))

Void NativeRenderer_obj::flip( ){
{
		bool tmp = this->useHardware;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			::lime::graphics::cairo::Cairo tmp2 = this->cairo;
			bool tmp3 = (tmp2 != null());
			if ((tmp3)){
				Dynamic tmp4 = this->primarySurface;
				::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::flush(tmp4);
			}
			::lime::_backend::native::NativeCFFI_obj::cffi_lime_renderer_unlock.call(hx::DynamicPtr(this->handle));
		}
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_renderer_flip.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeRenderer_obj,flip,(void))

::lime::graphics::Image NativeRenderer_obj::readPixels( ::lime::math::Rectangle rect){
	::lime::graphics::ImageBuffer imageBuffer = null();
	Dynamic tmp;
	{
		::lime::utils::ArrayBufferView tmp1;
		{
			::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::alloc((int)0);
			::haxe::io::Bytes buffer = tmp2;
			::lime::utils::ArrayBufferView this1;
			bool tmp3 = (buffer != null());
			if ((tmp3)){
				::lime::utils::ArrayBufferView tmp4;
				{
					::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
					::lime::utils::ArrayBufferView _this = tmp5;
					int in_byteOffset = (int)0;
					bool tmp6 = (in_byteOffset < (int)0);
					if ((tmp6)){
						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
					}
					int tmp7 = hx::Mod(in_byteOffset,_this->bytesPerElement);
					bool tmp8 = (tmp7 != (int)0);
					if ((tmp8)){
						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
					}
					int bufferByteLength = buffer->length;
					int elementSize = _this->bytesPerElement;
					int newByteLength = bufferByteLength;
					{
						int tmp9 = (bufferByteLength - in_byteOffset);
						newByteLength = tmp9;
						int tmp10 = hx::Mod(bufferByteLength,_this->bytesPerElement);
						bool tmp11 = (tmp10 != (int)0);
						if ((tmp11)){
							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
						}
						bool tmp12 = (newByteLength < (int)0);
						if ((tmp12)){
							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
						}
					}
					_this->buffer = buffer;
					_this->byteOffset = in_byteOffset;
					_this->byteLength = newByteLength;
					Float tmp9 = (Float(newByteLength) / Float(_this->bytesPerElement));
					int tmp10 = ::Std_obj::_int(tmp9);
					_this->length = tmp10;
					tmp4 = _this;
				}
				this1 = tmp4;
			}
			else{
				HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
			}
			tmp1 = this1;
		}
		::lime::graphics::ImageBuffer tmp2 = ::lime::graphics::ImageBuffer_obj::__new(tmp1,null(),null(),null(),null());
		Dynamic imageBuffer1 = tmp2;
		tmp = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_renderer_read_pixels.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(rect),hx::DynamicPtr(imageBuffer1));
	}
	imageBuffer = tmp;
	bool tmp1 = (imageBuffer != null());
	if ((tmp1)){
		imageBuffer->format = (int)0;
		::lime::graphics::Image tmp2 = ::lime::graphics::Image_obj::__new(imageBuffer,null(),null(),null(),null(),null(),null());
		return tmp2;
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeRenderer_obj,readPixels,return )

Void NativeRenderer_obj::render( ){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_renderer_make_current.call(hx::DynamicPtr(this->handle));
		bool tmp = this->useHardware;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			Dynamic lock = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_renderer_lock.call(hx::DynamicPtr(this->handle))));
			Dynamic tmp2 = this->cacheLock;
			bool tmp3 = (tmp2 == null());
			bool tmp4 = !(tmp3);
			bool tmp5 = tmp4;
			bool tmp6;
			if ((tmp5)){
				Dynamic tmp7 = this->cacheLock;
				Dynamic tmp8 = tmp7;
				Dynamic tmp9 = tmp8;
				tmp6 = (tmp9->__Field(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"), hx::paccDynamic ) != lock->__Field(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"), hx::paccDynamic ));
			}
			else{
				tmp6 = true;
			}
			bool tmp7 = !(tmp6);
			bool tmp8 = tmp7;
			bool tmp9;
			if ((tmp8)){
				Dynamic tmp10 = this->cacheLock;
				Dynamic tmp11 = tmp10;
				Dynamic tmp12 = tmp11;
				tmp9 = (tmp12->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) != lock->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ));
			}
			else{
				tmp9 = true;
			}
			bool tmp10 = !(tmp9);
			bool tmp11;
			if ((tmp10)){
				Dynamic tmp12 = this->cacheLock;
				Dynamic tmp13 = tmp12;
				tmp11 = (tmp13->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ) != lock->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ));
			}
			else{
				tmp11 = true;
			}
			if ((tmp11)){
				Dynamic tmp12 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::create(lock->__Field(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"), hx::paccDynamic ),(int)0,lock->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),lock->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),lock->__Field(HX_HCSTRING("pitch","\xc0","\xbb","\xa0","\xc2"), hx::paccDynamic ));
				this->primarySurface = tmp12;
				::lime::graphics::cairo::Cairo tmp13 = this->cairo;
				bool tmp14 = (tmp13 != null());
				if ((tmp14)){
					::lime::graphics::cairo::Cairo tmp15 = this->cairo;
					Dynamic tmp16 = this->primarySurface;
					tmp15->recreate(tmp16);
				}
				else{
					Dynamic tmp15 = this->primarySurface;
					::lime::graphics::cairo::Cairo tmp16 = ::lime::graphics::cairo::Cairo_obj::__new(tmp15);
					this->cairo = tmp16;
				}
			}
			this->cacheLock = lock;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeRenderer_obj,render,(void))


NativeRenderer_obj::NativeRenderer_obj()
{
}

void NativeRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeRenderer);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(useHardware,"useHardware");
	HX_MARK_MEMBER_NAME(cacheLock,"cacheLock");
	HX_MARK_MEMBER_NAME(cairo,"cairo");
	HX_MARK_MEMBER_NAME(primarySurface,"primarySurface");
	HX_MARK_END_CLASS();
}

void NativeRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(useHardware,"useHardware");
	HX_VISIT_MEMBER_NAME(cacheLock,"cacheLock");
	HX_VISIT_MEMBER_NAME(cairo,"cairo");
	HX_VISIT_MEMBER_NAME(primarySurface,"primarySurface");
}

Dynamic NativeRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flip") ) { return flip_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { return cairo; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { return dispatch_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cacheLock") ) { return cacheLock; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readPixels") ) { return readPixels_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"useHardware") ) { return useHardware; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primarySurface") ) { return primarySurface; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NativeRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=inValue.Cast< ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::lime::graphics::Renderer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cacheLock") ) { cacheLock=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"useHardware") ) { useHardware=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primarySurface") ) { primarySurface=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NativeRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("useHardware","\x0f","\xea","\xde","\xcf"));
	outFields->push(HX_HCSTRING("cacheLock","\x4d","\xab","\x6c","\x43"));
	outFields->push(HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"));
	outFields->push(HX_HCSTRING("primarySurface","\x8b","\xaa","\xee","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeRenderer_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{hx::fsObject /*::lime::graphics::Renderer*/ ,(int)offsetof(NativeRenderer_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsBool,(int)offsetof(NativeRenderer_obj,useHardware),HX_HCSTRING("useHardware","\x0f","\xea","\xde","\xcf")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeRenderer_obj,cacheLock),HX_HCSTRING("cacheLock","\x4d","\xab","\x6c","\x43")},
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(int)offsetof(NativeRenderer_obj,cairo),HX_HCSTRING("cairo","\x88","\x30","\x19","\x41")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeRenderer_obj,primarySurface),HX_HCSTRING("primarySurface","\x8b","\xaa","\xee","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("useHardware","\x0f","\xea","\xde","\xcf"),
	HX_HCSTRING("cacheLock","\x4d","\xab","\x6c","\x43"),
	HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"),
	HX_HCSTRING("primarySurface","\x8b","\xaa","\xee","\x10"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"),
	HX_HCSTRING("flip","\xad","\x12","\xbe","\x43"),
	HX_HCSTRING("readPixels","\x23","\xd3","\x25","\x86"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class NativeRenderer_obj::__mClass;

void NativeRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native.NativeRenderer","\xb1","\xc4","\x96","\xae");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NativeRenderer_obj >;
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
} // end namespace _backend
} // end namespace native
