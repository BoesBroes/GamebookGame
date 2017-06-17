#ifndef INCLUDED_lime_graphics_opengl_ext_KHR_debug
#define INCLUDED_lime_graphics_opengl_ext_KHR_debug

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,opengl,ext,KHR_debug)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES  KHR_debug_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef KHR_debug_obj OBJ_;
		KHR_debug_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.KHR_debug")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< KHR_debug_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~KHR_debug_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("KHR_debug","\x69","\x7f","\xd0","\x07"); }

		int DEBUG_OUTPUT_SYNCHRONOUS;
		int DEBUG_NEXT_LOGGED_MESSAGE_LENGTH;
		int DEBUG_CALLBACK_FUNCTION;
		int DEBUG_CALLBACK_USER_PARAM;
		int DEBUG_SOURCE_API;
		int DEBUG_SOURCE_WINDOW_SYSTEM;
		int DEBUG_SOURCE_SHADER_COMPILER;
		int DEBUG_SOURCE_THIRD_PARTY;
		int DEBUG_SOURCE_APPLICATION;
		int DEBUG_SOURCE_OTHER;
		int DEBUG_TYPE_ERROR;
		int DEBUG_TYPE_DEPRECATED_BEHAVIOR;
		int DEBUG_TYPE_UNDEFINED_BEHAVIOR;
		int DEBUG_TYPE_PORTABILITY;
		int DEBUG_TYPE_PERFORMANCE;
		int DEBUG_TYPE_OTHER;
		int DEBUG_TYPE_MARKER;
		int DEBUG_TYPE_PUSH_GROUP;
		int DEBUG_TYPE_POP_GROUP;
		int DEBUG_SEVERITY_NOTIFICATION;
		int MAX_DEBUG_GROUP_STACK_DEPTH;
		int DEBUG_GROUP_STACK_DEPTH;
		int BUFFER;
		int SHADER;
		int PROGRAM;
		int QUERY;
		int SAMPLER;
		int MAX_LABEL_LENGTH;
		int MAX_DEBUG_MESSAGE_LENGTH;
		int MAX_DEBUG_LOGGED_MESSAGES;
		int DEBUG_LOGGED_MESSAGES;
		int DEBUG_SEVERITY_HIGH;
		int DEBUG_SEVERITY_MEDIUM;
		int DEBUG_SEVERITY_LOW;
		int DEBUG_OUTPUT;
		int CONTEXT_FLAG_DEBUG_BIT;
		int STACK_OVERFLOW;
		int STACK_UNDERFLOW;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_KHR_debug */ 
