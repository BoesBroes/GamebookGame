#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractFilterManager
#include <openfl/_internal/renderer/AbstractFilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractShaderManager
#include <openfl/_internal/renderer/AbstractShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLFilterManager
#include <openfl/_internal/renderer/opengl/GLFilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_GlowFilter
#include <openfl/filters/GlowFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

Void GLFilterManager_obj::__construct(::openfl::_internal::renderer::opengl::GLRenderer renderer,::openfl::_internal::renderer::RenderSession renderSession)
{
{
	::openfl::_internal::renderer::RenderSession tmp = renderSession;
	super::__construct(tmp);
	this->renderer = renderer;
	this->gl = renderSession->gl;
	this->filterDepth = (int)0;
	::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	this->matrix = tmp1;
}
;
	return null();
}

//GLFilterManager_obj::~GLFilterManager_obj() { }

Dynamic GLFilterManager_obj::__CreateEmpty() { return  new GLFilterManager_obj; }
hx::ObjectPtr< GLFilterManager_obj > GLFilterManager_obj::__new(::openfl::_internal::renderer::opengl::GLRenderer renderer,::openfl::_internal::renderer::RenderSession renderSession)
{  hx::ObjectPtr< GLFilterManager_obj > _result_ = new GLFilterManager_obj();
	_result_->__construct(renderer,renderSession);
	return _result_;}

Dynamic GLFilterManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLFilterManager_obj > _result_ = new GLFilterManager_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::openfl::display::Shader GLFilterManager_obj::pushObject( ::openfl::display::DisplayObject object){
	bool tmp = (object->__filters != null());
	bool tmp1;
	if ((tmp)){
		int tmp2 = object->__filters->length;
		int tmp3 = tmp2;
		tmp1 = (tmp3 > (int)0);
	}
	else{
		tmp1 = false;
	}
	if ((tmp1)){
		::openfl::filters::BitmapFilter tmp2 = object->__filters->__get((int)0).StaticCast< ::openfl::filters::BitmapFilter >();
		::openfl::filters::BitmapFilter tmp3 = tmp2;
		bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::openfl::filters::GlowFilter >());
		bool tmp5;
		if ((tmp4)){
			::openfl::display::DisplayObject tmp6 = object;
			::openfl::display::DisplayObject tmp7 = tmp6;
			tmp5 = ::Std_obj::is(tmp7,hx::ClassOf< ::openfl::text::TextField >());
		}
		else{
			tmp5 = false;
		}
		if ((tmp5)){
			::openfl::_internal::renderer::RenderSession tmp6 = this->renderSession;
			::openfl::display::Shader tmp7 = tmp6->shaderManager->defaultShader;
			return tmp7;
		}
		int tmp6 = object->__filters->length;
		bool tmp7 = (tmp6 == (int)1);
		bool tmp8;
		if ((tmp7)){
			::openfl::filters::BitmapFilter tmp9 = object->__filters->__get((int)0).StaticCast< ::openfl::filters::BitmapFilter >();
			::openfl::filters::BitmapFilter tmp10 = tmp9;
			int tmp11 = tmp10->__numPasses;
			tmp8 = (tmp11 == (int)0);
		}
		else{
			tmp8 = false;
		}
		if ((tmp8)){
			::openfl::filters::BitmapFilter tmp9 = object->__filters->__get((int)0).StaticCast< ::openfl::filters::BitmapFilter >();
			::openfl::_internal::renderer::RenderSession tmp10 = this->renderSession;
			::openfl::display::Shader tmp11 = tmp9->__initShader(tmp10,(int)0);
			return tmp11;
		}
		else{
			::openfl::_internal::renderer::opengl::GLRenderer tmp9 = this->renderer;
			tmp9->getRenderTarget(true);
		}
		(this->filterDepth)++;
	}
	::openfl::_internal::renderer::RenderSession tmp2 = this->renderSession;
	::openfl::display::Shader tmp3 = tmp2->shaderManager->defaultShader;
	return tmp3;
}


Void GLFilterManager_obj::popObject( ::openfl::display::DisplayObject object){
{
		bool tmp = (object->__filters != null());
		bool tmp1;
		if ((tmp)){
			int tmp2 = object->__filters->length;
			int tmp3 = tmp2;
			tmp1 = (tmp3 > (int)0);
		}
		else{
			tmp1 = false;
		}
		if ((tmp1)){
			::openfl::filters::BitmapFilter tmp2 = object->__filters->__get((int)0).StaticCast< ::openfl::filters::BitmapFilter >();
			::openfl::filters::BitmapFilter tmp3 = tmp2;
			bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::openfl::filters::GlowFilter >());
			bool tmp5;
			if ((tmp4)){
				::openfl::display::DisplayObject tmp6 = object;
				::openfl::display::DisplayObject tmp7 = tmp6;
				tmp5 = ::Std_obj::is(tmp7,hx::ClassOf< ::openfl::text::TextField >());
			}
			else{
				tmp5 = false;
			}
			if ((tmp5)){
				return null();
			}
			int numPasses = (int)0;
			int tmp6 = object->__filters->length;
			bool tmp7 = (tmp6 > (int)1);
			bool tmp8 = !(tmp7);
			bool tmp9;
			if ((tmp8)){
				::openfl::filters::BitmapFilter tmp10 = object->__filters->__get((int)0).StaticCast< ::openfl::filters::BitmapFilter >();
				::openfl::filters::BitmapFilter tmp11 = tmp10;
				int tmp12 = tmp11->__numPasses;
				tmp9 = (tmp12 > (int)0);
			}
			else{
				tmp9 = true;
			}
			if ((tmp9)){
				int tmp10 = object->__filters->length;
				numPasses = tmp10;
				{
					int _g = (int)0;
					Array< ::Dynamic > _g1 = object->__filters;
					while((true)){
						bool tmp11 = (_g < _g1->length);
						bool tmp12 = !(tmp11);
						if ((tmp12)){
							break;
						}
						::openfl::filters::BitmapFilter tmp13 = _g1->__get(_g).StaticCast< ::openfl::filters::BitmapFilter >();
						::openfl::filters::BitmapFilter filter = tmp13;
						++(_g);
						bool tmp14 = (filter->__numPasses > (int)0);
						int tmp15;
						if ((tmp14)){
							tmp15 = (filter->__numPasses - (int)1);
						}
						else{
							tmp15 = (int)0;
						}
						hx::AddEq(numPasses,tmp15);
					}
				}
			}
			bool tmp10 = (numPasses > (int)0);
			if ((tmp10)){
				::openfl::display::BitmapData currentTarget;
				::openfl::display::Shader shader;
				{
					int _g = (int)0;
					Array< ::Dynamic > _g1 = object->__filters;
					while((true)){
						bool tmp11 = (_g < _g1->length);
						bool tmp12 = !(tmp11);
						if ((tmp12)){
							break;
						}
						::openfl::filters::BitmapFilter tmp13 = _g1->__get(_g).StaticCast< ::openfl::filters::BitmapFilter >();
						::openfl::filters::BitmapFilter filter = tmp13;
						++(_g);
						bool tmp14 = (filter->__numPasses > (int)0);
						if ((tmp14)){
							int _g3 = (int)0;
							int _g2 = filter->__numPasses;
							while((true)){
								bool tmp15 = (_g3 < _g2);
								bool tmp16 = !(tmp15);
								if ((tmp16)){
									break;
								}
								int tmp17 = (_g3)++;
								int i = tmp17;
								::openfl::_internal::renderer::opengl::GLRenderer tmp18 = this->renderer;
								currentTarget = tmp18->currentRenderTarget;
								::openfl::_internal::renderer::opengl::GLRenderer tmp19 = this->renderer;
								tmp19->getRenderTarget(true);
								::openfl::_internal::renderer::RenderSession tmp20 = this->renderSession;
								int tmp21 = i;
								::openfl::display::Shader tmp22 = filter->__initShader(tmp20,tmp21);
								shader = tmp22;
								::openfl::display::BitmapData tmp23 = currentTarget;
								::openfl::display::Shader tmp24 = shader;
								this->renderPass(tmp23,tmp24);
							}
						}
						else{
							::openfl::_internal::renderer::opengl::GLRenderer tmp15 = this->renderer;
							currentTarget = tmp15->currentRenderTarget;
							::openfl::_internal::renderer::opengl::GLRenderer tmp16 = this->renderer;
							tmp16->getRenderTarget(true);
							::openfl::_internal::renderer::RenderSession tmp17 = this->renderSession;
							::openfl::display::Shader tmp18 = filter->__initShader(tmp17,(int)0);
							shader = tmp18;
							::openfl::display::BitmapData tmp19 = currentTarget;
							::openfl::display::Shader tmp20 = shader;
							this->renderPass(tmp19,tmp20);
						}
						(this->filterDepth)--;
						::openfl::_internal::renderer::opengl::GLRenderer tmp15 = this->renderer;
						int tmp16 = this->filterDepth;
						bool tmp17 = (tmp16 > (int)0);
						tmp15->getRenderTarget(tmp17);
						::openfl::_internal::renderer::opengl::GLRenderer tmp18 = this->renderer;
						::openfl::display::BitmapData tmp19 = tmp18->currentRenderTarget;
						::openfl::_internal::renderer::RenderSession tmp20 = this->renderSession;
						::openfl::display::Shader tmp21 = tmp20->shaderManager->defaultShader;
						this->renderPass(tmp19,tmp21);
					}
				}
			}
			else{
				(this->filterDepth)--;
			}
		}
	}
return null();
}


Void GLFilterManager_obj::renderPass( ::openfl::display::BitmapData target,::openfl::display::Shader shader){
{
		::openfl::display::ShaderData tmp = shader->get_data();
		tmp->uImage0->input = target;
		::openfl::_internal::renderer::RenderSession tmp1 = this->renderSession;
		bool tmp2 = tmp1->allowSmoothing;
		bool tmp3;
		if ((tmp2)){
			::openfl::_internal::renderer::RenderSession tmp4 = this->renderSession;
			::openfl::_internal::renderer::RenderSession tmp5 = tmp4;
			tmp3 = tmp5->upscaled;
		}
		else{
			tmp3 = false;
		}
		::openfl::display::ShaderData tmp4 = shader->get_data();
		tmp4->uImage0->smoothing = tmp3;
		::openfl::_internal::renderer::opengl::GLRenderer tmp5 = this->renderer;
		::openfl::geom::Matrix tmp6 = this->matrix;
		::openfl::display::ShaderData tmp7 = shader->get_data();
		tmp7->uMatrix->value = tmp5->getMatrix(tmp6);
		::openfl::_internal::renderer::RenderSession tmp8 = this->renderSession;
		::openfl::display::Shader tmp9 = shader;
		tmp8->shaderManager->setShader(tmp9);
		::lime::_backend::native::NativeGLRenderContext tmp10 = this->gl;
		::lime::_backend::native::NativeGLRenderContext tmp11 = this->gl;
		int tmp12 = tmp11->ARRAY_BUFFER;
		::lime::_backend::native::NativeGLRenderContext tmp13 = this->gl;
		::lime::graphics::opengl::GLObject tmp14 = target->getBuffer(tmp13,(int)1);
		tmp10->bindBuffer(tmp12,tmp14);
		::lime::_backend::native::NativeGLRenderContext tmp15 = this->gl;
		::openfl::display::ShaderData tmp16 = shader->get_data();
		int tmp17 = tmp16->aPosition->index;
		::lime::_backend::native::NativeGLRenderContext tmp18 = this->gl;
		int tmp19 = tmp18->FLOAT;
		int tmp20 = (int)24;
		Float tmp21 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)0);
		tmp15->vertexAttribPointer(tmp17,(int)3,tmp19,false,tmp20,tmp21);
		::lime::_backend::native::NativeGLRenderContext tmp22 = this->gl;
		::openfl::display::ShaderData tmp23 = shader->get_data();
		int tmp24 = tmp23->aTexCoord->index;
		::lime::_backend::native::NativeGLRenderContext tmp25 = this->gl;
		int tmp26 = tmp25->FLOAT;
		int tmp27 = (int)24;
		int tmp28 = (int)12;
		Float tmp29 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt(tmp28);
		tmp22->vertexAttribPointer(tmp24,(int)2,tmp26,false,tmp27,tmp29);
		::lime::_backend::native::NativeGLRenderContext tmp30 = this->gl;
		::openfl::display::ShaderData tmp31 = shader->get_data();
		int tmp32 = tmp31->aAlpha->index;
		::lime::_backend::native::NativeGLRenderContext tmp33 = this->gl;
		int tmp34 = tmp33->FLOAT;
		int tmp35 = (int)24;
		int tmp36 = (int)20;
		Float tmp37 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt(tmp36);
		tmp30->vertexAttribPointer(tmp32,(int)1,tmp34,false,tmp35,tmp37);
		::lime::_backend::native::NativeGLRenderContext tmp38 = this->gl;
		::lime::_backend::native::NativeGLRenderContext tmp39 = this->gl;
		int tmp40 = tmp39->TRIANGLE_STRIP;
		tmp38->drawArrays(tmp40,(int)0,(int)4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLFilterManager_obj,renderPass,(void))


GLFilterManager_obj::GLFilterManager_obj()
{
}

void GLFilterManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLFilterManager);
	HX_MARK_MEMBER_NAME(filterDepth,"filterDepth");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	::openfl::_internal::renderer::AbstractFilterManager_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLFilterManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(filterDepth,"filterDepth");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	::openfl::_internal::renderer::AbstractFilterManager_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GLFilterManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { return renderer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"popObject") ) { return popObject_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pushObject") ) { return pushObject_dyn(); }
		if (HX_FIELD_EQ(inName,"renderPass") ) { return renderPass_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"filterDepth") ) { return filterDepth; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLFilterManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::_backend::native::NativeGLRenderContext >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::openfl::_internal::renderer::opengl::GLRenderer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"filterDepth") ) { filterDepth=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLFilterManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("filterDepth","\x2b","\x46","\xdc","\x86"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(GLFilterManager_obj,filterDepth),HX_HCSTRING("filterDepth","\x2b","\x46","\xdc","\x86")},
	{hx::fsObject /*::lime::_backend::native::NativeGLRenderContext*/ ,(int)offsetof(GLFilterManager_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(GLFilterManager_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::GLRenderer*/ ,(int)offsetof(GLFilterManager_obj,renderer),HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("filterDepth","\x2b","\x46","\xdc","\x86"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("pushObject","\x39","\xe4","\x1e","\x69"),
	HX_HCSTRING("popObject","\x30","\x53","\xb5","\x91"),
	HX_HCSTRING("renderPass","\x47","\xdf","\x5b","\xe7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLFilterManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLFilterManager_obj::__mClass,"__mClass");
};

#endif

hx::Class GLFilterManager_obj::__mClass;

void GLFilterManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLFilterManager","\xcc","\x8b","\x5c","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLFilterManager_obj >;
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
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
