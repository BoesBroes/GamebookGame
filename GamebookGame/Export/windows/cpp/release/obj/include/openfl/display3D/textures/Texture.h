#ifndef INCLUDED_openfl_display3D_textures_Texture
#define INCLUDED_openfl_display3D_textures_Texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
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


class HXCPP_CLASS_ATTRIBUTES  Texture_obj : public ::openfl::display3D::textures::TextureBase_obj{
	public:
		typedef ::openfl::display3D::textures::TextureBase_obj super;
		typedef Texture_obj OBJ_;
		Texture_obj();
		Void __construct(::openfl::display3D::Context3D context,int width,int height,Dynamic format,bool optimizeForRenderToTexture,int streamingLevels);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.textures.Texture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Texture_obj > __new(::openfl::display3D::Context3D context,int width,int height,Dynamic format,bool optimizeForRenderToTexture,int streamingLevels);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Texture_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Texture","\xbb","\xf0","\x31","\x6c"); }

		static void __boot();
		static bool __lowMemoryMode;
		virtual Void uploadCompressedTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,hx::Null< bool >  async);
		Dynamic uploadCompressedTextureFromByteArray_dyn();

		virtual Void uploadFromBitmapData( ::openfl::display::BitmapData source,hx::Null< int >  miplevel,hx::Null< bool >  generateMipmap);
		Dynamic uploadFromBitmapData_dyn();

		virtual Void uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,hx::Null< int >  miplevel);
		Dynamic uploadFromByteArray_dyn();

		virtual Void uploadFromTypedArray( ::lime::utils::ArrayBufferView data,hx::Null< int >  miplevel);
		Dynamic uploadFromTypedArray_dyn();

		virtual Void __setSamplerState( ::openfl::_internal::stage3D::SamplerState state);

		virtual Void __uploadATFTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset);
		Dynamic __uploadATFTextureFromByteArray_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace textures

#endif /* INCLUDED_openfl_display3D_textures_Texture */ 
