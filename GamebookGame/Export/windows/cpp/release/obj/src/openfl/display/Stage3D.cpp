#include <hxcpp.h>

#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractShaderManager
#include <openfl/_internal/renderer/AbstractShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
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
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
namespace openfl{
namespace display{

Void Stage3D_obj::__construct()
{
{
	super::__construct(null());
	this->set_x((int)0);
	this->set_y((int)0);
	this->visible = true;
}
;
	return null();
}

//Stage3D_obj::~Stage3D_obj() { }

Dynamic Stage3D_obj::__CreateEmpty() { return  new Stage3D_obj; }
hx::ObjectPtr< Stage3D_obj > Stage3D_obj::__new()
{  hx::ObjectPtr< Stage3D_obj > _result_ = new Stage3D_obj();
	_result_->__construct();
	return _result_;}

Dynamic Stage3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stage3D_obj > _result_ = new Stage3D_obj();
	_result_->__construct();
	return _result_;}

Void Stage3D_obj::requestContext3D( Dynamic __o_context3DRenderMode,Dynamic __o_profile){
Dynamic context3DRenderMode = __o_context3DRenderMode.Default(0);
Dynamic profile = __o_profile.Default(0);
{
		this->__contextRequested = true;
		::openfl::display3D::Context3D tmp = this->context3D;
		bool tmp1 = (tmp != null());
		if ((tmp1)){
			Dynamic tmp2 = this->__dispatchCreate_dyn();
			::haxe::Timer_obj::delay(tmp2,(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage3D_obj,requestContext3D,(void))

Void Stage3D_obj::requestContext3DMatchingProfiles( ::openfl::_Vector::ObjectVector profiles){
{
		this->requestContext3D(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage3D_obj,requestContext3DMatchingProfiles,(void))

Void Stage3D_obj::__createContext( ::openfl::display::Stage stage,::openfl::_internal::renderer::RenderSession renderSession){
{
		this->__stage = stage;
		bool tmp = (renderSession->gl != null());
		if ((tmp)){
			::openfl::display3D::Context3D tmp1 = ::openfl::display3D::Context3D_obj::__new(hx::ObjectPtr<OBJ_>(this),renderSession);
			this->context3D = tmp1;
			this->__dispatchCreate();
		}
		else{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage3D_obj,__createContext,(void))

Void Stage3D_obj::__dispatchError( ){
{
		this->__contextRequested = false;
		::openfl::events::ErrorEvent tmp = ::openfl::events::ErrorEvent_obj::__new(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),false,false,HX_HCSTRING("Context3D not available","\x9c","\xfc","\x63","\xd3"),null());
		this->dispatchEvent(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3D_obj,__dispatchError,(void))

Void Stage3D_obj::__dispatchCreate( ){
{
		bool tmp = this->__contextRequested;
		if ((tmp)){
			this->__contextRequested = false;
			::openfl::events::Event tmp1 = ::openfl::events::Event_obj::__new(HX_HCSTRING("context3DCreate","\x7c","\xbf","\x59","\x7b"),null(),null());
			this->dispatchEvent(tmp1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3D_obj,__dispatchCreate,(void))

Void Stage3D_obj::__renderCairo( ::openfl::display::Stage stage,::openfl::_internal::renderer::RenderSession renderSession){
{
		bool tmp = this->visible;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			return null();
		}
		bool tmp2 = this->__contextRequested;
		if ((tmp2)){
			this->__dispatchError();
			this->__contextRequested = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage3D_obj,__renderCairo,(void))

Void Stage3D_obj::__renderCanvas( ::openfl::display::Stage stage,::openfl::_internal::renderer::RenderSession renderSession){
{
		bool tmp = this->visible;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			return null();
		}
		bool tmp2 = this->__contextRequested;
		if ((tmp2)){
			this->__dispatchError();
			this->__contextRequested = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage3D_obj,__renderCanvas,(void))

Void Stage3D_obj::__renderDOM( ::openfl::display::Stage stage,::openfl::_internal::renderer::RenderSession renderSession){
{
		bool tmp = this->visible;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			return null();
		}
		bool tmp2 = this->__contextRequested;
		bool tmp3;
		if ((tmp2)){
			::openfl::display3D::Context3D tmp4 = this->context3D;
			::openfl::display3D::Context3D tmp5 = tmp4;
			tmp3 = (tmp5 == null());
		}
		else{
			tmp3 = false;
		}
		if ((tmp3)){
			::openfl::display::Stage tmp4 = stage;
			::openfl::_internal::renderer::RenderSession tmp5 = renderSession;
			this->__createContext(tmp4,tmp5);
		}
		::openfl::display3D::Context3D tmp4 = this->context3D;
		bool tmp5 = (tmp4 != null());
		if ((tmp5)){
			this->__resetContext3DStates();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage3D_obj,__renderDOM,(void))

Void Stage3D_obj::__renderGL( ::openfl::display::Stage stage,::openfl::_internal::renderer::RenderSession renderSession){
{
		bool tmp = this->visible;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			return null();
		}
		bool tmp2 = this->__contextRequested;
		bool tmp3;
		if ((tmp2)){
			::openfl::display3D::Context3D tmp4 = this->context3D;
			::openfl::display3D::Context3D tmp5 = tmp4;
			tmp3 = (tmp5 == null());
		}
		else{
			tmp3 = false;
		}
		if ((tmp3)){
			::openfl::display::Stage tmp4 = stage;
			::openfl::_internal::renderer::RenderSession tmp5 = renderSession;
			this->__createContext(tmp4,tmp5);
		}
		::openfl::display3D::Context3D tmp4 = this->context3D;
		bool tmp5 = (tmp4 != null());
		if ((tmp5)){
			this->__resetContext3DStates();
			{
				::openfl::display3D::Context3D tmp6 = this->context3D;
				bool tmp7 = (tmp6 != null());
				if ((tmp7)){
					renderSession->blendModeManager->setBlendMode(null());
					::openfl::display::Shader tmp8 = renderSession->shaderManager->currentShader;
					bool tmp9 = (tmp8 != null());
					if ((tmp9)){
						renderSession->shaderManager->setShader(null());
						::openfl::display3D::Context3D tmp10 = this->context3D;
						::openfl::display3D::Program3D tmp11 = tmp10->__program;
						bool tmp12 = (tmp11 != null());
						if ((tmp12)){
							::openfl::display3D::Context3D tmp13 = this->context3D;
							tmp13->__program->__use();
						}
					}
				}
				bool tmp8 = ::openfl::_internal::stage3D::GLUtils_obj::debug;
				if ((tmp8)){
					renderSession->gl->getError();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage3D_obj,__renderGL,(void))

Void Stage3D_obj::__resize( int width,int height){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage3D_obj,__resize,(void))

Void Stage3D_obj::__resetContext3DStates( ){
{
		::openfl::display3D::Context3D tmp = this->context3D;
		tmp->__updateBlendFactors();
		::openfl::display3D::Context3D tmp1 = this->context3D;
		tmp1->__updateBackbufferViewport();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3D_obj,__resetContext3DStates,(void))

Float Stage3D_obj::set_x( Float value){
	Float tmp = this->x;
	Float tmp1 = value;
	bool tmp2 = (tmp == tmp1);
	if ((tmp2)){
		Float tmp3 = value;
		return tmp3;
	}
	this->x = value;
	::openfl::display3D::Context3D tmp3 = this->context3D;
	bool tmp4 = (tmp3 != null());
	if ((tmp4)){
		::openfl::display3D::Context3D tmp5 = this->context3D;
		tmp5->__updateBackbufferViewport();
	}
	Float tmp5 = value;
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage3D_obj,set_x,return )

Float Stage3D_obj::set_y( Float value){
	Float tmp = this->y;
	Float tmp1 = value;
	bool tmp2 = (tmp == tmp1);
	if ((tmp2)){
		Float tmp3 = value;
		return tmp3;
	}
	this->y = value;
	::openfl::display3D::Context3D tmp3 = this->context3D;
	bool tmp4 = (tmp3 != null());
	if ((tmp4)){
		::openfl::display3D::Context3D tmp5 = this->context3D;
		tmp5->__updateBackbufferViewport();
	}
	Float tmp5 = value;
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage3D_obj,set_y,return )

bool Stage3D_obj::__active;


Stage3D_obj::Stage3D_obj()
{
}

void Stage3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stage3D);
	HX_MARK_MEMBER_NAME(context3D,"context3D");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(__contextRequested,"__contextRequested");
	HX_MARK_MEMBER_NAME(__stage,"__stage");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stage3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context3D,"context3D");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(__contextRequested,"__contextRequested");
	HX_VISIT_MEMBER_NAME(__stage,"__stage");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Stage3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"__stage") ) { return __stage; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__resize") ) { return __resize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"context3D") ) { return context3D; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__createContext") ) { return __createContext_dyn(); }
		if (HX_FIELD_EQ(inName,"__dispatchError") ) { return __dispatchError_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"requestContext3D") ) { return requestContext3D_dyn(); }
		if (HX_FIELD_EQ(inName,"__dispatchCreate") ) { return __dispatchCreate_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__contextRequested") ) { return __contextRequested; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__resetContext3DStates") ) { return __resetContext3DStates_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"requestContext3DMatchingProfiles") ) { return requestContext3DMatchingProfiles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Stage3D_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__active") ) { outValue = __active; return true;  }
	}
	return false;
}

Dynamic Stage3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__stage") ) { __stage=inValue.Cast< ::openfl::display::Stage >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"context3D") ) { context3D=inValue.Cast< ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__contextRequested") ) { __contextRequested=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Stage3D_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__active") ) { __active=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void Stage3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("context3D","\x60","\x5c","\xfc","\x16"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("__contextRequested","\x9f","\x10","\x4e","\x81"));
	outFields->push(HX_HCSTRING("__stage","\x9e","\xc3","\x69","\xee"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(int)offsetof(Stage3D_obj,context3D),HX_HCSTRING("context3D","\x60","\x5c","\xfc","\x16")},
	{hx::fsBool,(int)offsetof(Stage3D_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsFloat,(int)offsetof(Stage3D_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Stage3D_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsBool,(int)offsetof(Stage3D_obj,__contextRequested),HX_HCSTRING("__contextRequested","\x9f","\x10","\x4e","\x81")},
	{hx::fsObject /*::openfl::display::Stage*/ ,(int)offsetof(Stage3D_obj,__stage),HX_HCSTRING("__stage","\x9e","\xc3","\x69","\xee")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Stage3D_obj::__active,HX_HCSTRING("__active","\xe6","\xac","\x75","\xbe")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("context3D","\x60","\x5c","\xfc","\x16"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("__contextRequested","\x9f","\x10","\x4e","\x81"),
	HX_HCSTRING("__stage","\x9e","\xc3","\x69","\xee"),
	HX_HCSTRING("requestContext3D","\x11","\x7b","\x31","\xf9"),
	HX_HCSTRING("requestContext3DMatchingProfiles","\x38","\x62","\xbe","\x66"),
	HX_HCSTRING("__createContext","\x33","\xa7","\x6c","\x89"),
	HX_HCSTRING("__dispatchError","\x8e","\x03","\x7c","\x4b"),
	HX_HCSTRING("__dispatchCreate","\x76","\xfc","\xad","\xeb"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__resize","\x14","\xc5","\xaa","\xb0"),
	HX_HCSTRING("__resetContext3DStates","\xd3","\xf3","\x5d","\xf3"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stage3D_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Stage3D_obj::__active,"__active");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stage3D_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Stage3D_obj::__active,"__active");
};

#endif

hx::Class Stage3D_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__active","\xe6","\xac","\x75","\xbe"),
	::String(null()) };

void Stage3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Stage3D","\xc5","\x0f","\x85","\x9c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Stage3D_obj::__GetStatic;
	__mClass->mSetStaticField = &Stage3D_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stage3D_obj >;
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
