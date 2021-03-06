#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#define INCLUDED_openfl_display3D_textures_TextureBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,_backend,native,NativeGLRenderContext)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(openfl,_internal,stage3D,SamplerState)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS3(openfl,display3D,textures,Texture)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
namespace openfl{
namespace display3D{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES  TextureBase_obj : public ::openfl::events::EventDispatcher_obj{
	public:
		typedef ::openfl::events::EventDispatcher_obj super;
		typedef TextureBase_obj OBJ_;
		TextureBase_obj();
		Void __construct(::openfl::display3D::Context3D context,int target);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.textures.TextureBase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextureBase_obj > __new(::openfl::display3D::Context3D context,int target);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextureBase_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TextureBase","\x6c","\x7e","\xc2","\xdb"); }

		static void __boot();
		static Dynamic __supportsBGRA;
		static int __textureFormat;
		static int __textureInternalFormat;
		static Dynamic __supportsCompressed;
		static int __textureFormatCompressed;
		static int __textureFormatCompressedAlpha;
		::openfl::display3D::textures::Texture __alphaTexture;
		int __compressedMemoryUsage;
		::openfl::display3D::Context3D __context;
		int __format;
		int __height;
		int __internalFormat;
		int __memoryUsage;
		bool __optimizeForRenderToTexture;
		bool __outputTextureMemoryUsage;
		::openfl::_internal::stage3D::SamplerState __samplerState;
		int __streamingLevels;
		::lime::_backend::native::NativeGLRenderContext __textureContext;
		::lime::graphics::opengl::GLObject __textureID;
		int __textureTarget;
		int __width;
		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual int __getATFVersion( ::openfl::utils::ByteArrayData data);
		Dynamic __getATFVersion_dyn();

		virtual ::lime::graphics::Image __getImage( ::openfl::display::BitmapData bitmapData);
		Dynamic __getImage_dyn();

		virtual ::lime::graphics::opengl::GLObject __getTexture( );
		Dynamic __getTexture_dyn();

		virtual int __readUInt24( ::openfl::utils::ByteArrayData data);
		Dynamic __readUInt24_dyn();

		virtual int __readUInt32( ::openfl::utils::ByteArrayData data);
		Dynamic __readUInt32_dyn();

		virtual Void __setSamplerState( ::openfl::_internal::stage3D::SamplerState state);
		Dynamic __setSamplerState_dyn();

		virtual Void __trackCompressedMemoryUsage( int memory);
		Dynamic __trackCompressedMemoryUsage_dyn();

		virtual Void __trackMemoryUsage( int memory);
		Dynamic __trackMemoryUsage_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace textures

#endif /* INCLUDED_openfl_display3D_textures_TextureBase */ 
