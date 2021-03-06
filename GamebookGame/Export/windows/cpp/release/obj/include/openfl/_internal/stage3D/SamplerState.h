#ifndef INCLUDED_openfl__internal_stage3D_SamplerState
#define INCLUDED_openfl__internal_stage3D_SamplerState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,stage3D,SamplerState)
namespace openfl{
namespace _internal{
namespace stage3D{


class HXCPP_CLASS_ATTRIBUTES  SamplerState_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SamplerState_obj OBJ_;
		SamplerState_obj();
		Void __construct(int minFilter,int magFilter,int wrapModeS,int wrapModeT,hx::Null< Float >  __o_lodBias,hx::Null< Float >  __o_maxAniso,hx::Null< bool >  __o_ignoreSampler,hx::Null< bool >  __o_centroid,hx::Null< bool >  __o_mipmapGenerated);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._internal.stage3D.SamplerState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SamplerState_obj > __new(int minFilter,int magFilter,int wrapModeS,int wrapModeT,hx::Null< Float >  __o_lodBias,hx::Null< Float >  __o_maxAniso,hx::Null< bool >  __o_ignoreSampler,hx::Null< bool >  __o_centroid,hx::Null< bool >  __o_mipmapGenerated);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SamplerState_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("SamplerState","\x09","\x30","\xd2","\x83"); }

		Float lodBias;
		int magFilter;
		Float maxAniso;
		int minFilter;
		int wrapModeS;
		int wrapModeT;
		bool centroid;
		bool ignoreSampler;
		bool mipmapGenerated;
		bool __samplerDirty;
		virtual Void copyFrom( ::openfl::_internal::stage3D::SamplerState other);
		Dynamic copyFrom_dyn();

		virtual bool equals( ::openfl::_internal::stage3D::SamplerState other);
		Dynamic equals_dyn();

		virtual Float set_lodBias( Float value);
		Dynamic set_lodBias_dyn();

		virtual int set_magFilter( int value);
		Dynamic set_magFilter_dyn();

		virtual Float set_maxAniso( Float value);
		Dynamic set_maxAniso_dyn();

		virtual int set_minFilter( int value);
		Dynamic set_minFilter_dyn();

		virtual int set_wrapModeS( int value);
		Dynamic set_wrapModeS_dyn();

		virtual int set_wrapModeT( int value);
		Dynamic set_wrapModeT_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D

#endif /* INCLUDED_openfl__internal_stage3D_SamplerState */ 
