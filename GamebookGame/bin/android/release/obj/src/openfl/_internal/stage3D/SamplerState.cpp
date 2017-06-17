#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_stage3D_SamplerState
#include <openfl/_internal/stage3D/SamplerState.h>
#endif
namespace openfl{
namespace _internal{
namespace stage3D{

Void SamplerState_obj::__construct(int minFilter,int magFilter,int wrapModeS,int wrapModeT,hx::Null< Float >  __o_lodBias,hx::Null< Float >  __o_maxAniso,hx::Null< bool >  __o_ignoreSampler,hx::Null< bool >  __o_centroid,hx::Null< bool >  __o_mipmapGenerated)
{
Float lodBias = __o_lodBias.Default(((Float)0.0));
Float maxAniso = __o_maxAniso.Default(((Float)0.0));
bool ignoreSampler = __o_ignoreSampler.Default(false);
bool centroid = __o_centroid.Default(false);
bool mipmapGenerated = __o_mipmapGenerated.Default(false);
{
	int tmp = minFilter;
	this->set_minFilter(tmp);
	int tmp1 = magFilter;
	this->set_magFilter(tmp1);
	int tmp2 = wrapModeS;
	this->set_wrapModeS(tmp2);
	int tmp3 = wrapModeT;
	this->set_wrapModeT(tmp3);
	Float tmp4 = lodBias;
	this->set_lodBias(tmp4);
	Float tmp5 = maxAniso;
	this->set_maxAniso(tmp5);
	this->ignoreSampler = ignoreSampler;
	this->centroid = centroid;
	this->mipmapGenerated = mipmapGenerated;
	this->__samplerDirty = true;
}
;
	return null();
}

//SamplerState_obj::~SamplerState_obj() { }

Dynamic SamplerState_obj::__CreateEmpty() { return  new SamplerState_obj; }
hx::ObjectPtr< SamplerState_obj > SamplerState_obj::__new(int minFilter,int magFilter,int wrapModeS,int wrapModeT,hx::Null< Float >  __o_lodBias,hx::Null< Float >  __o_maxAniso,hx::Null< bool >  __o_ignoreSampler,hx::Null< bool >  __o_centroid,hx::Null< bool >  __o_mipmapGenerated)
{  hx::ObjectPtr< SamplerState_obj > _result_ = new SamplerState_obj();
	_result_->__construct(minFilter,magFilter,wrapModeS,wrapModeT,__o_lodBias,__o_maxAniso,__o_ignoreSampler,__o_centroid,__o_mipmapGenerated);
	return _result_;}

Dynamic SamplerState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SamplerState_obj > _result_ = new SamplerState_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return _result_;}

Void SamplerState_obj::copyFrom( ::openfl::_internal::stage3D::SamplerState other){
{
		bool tmp = (other == null());
		bool tmp1 = !(tmp);
		bool tmp2;
		if ((tmp1)){
			tmp2 = other->ignoreSampler;
		}
		else{
			tmp2 = true;
		}
		if ((tmp2)){
			return null();
		}
		int tmp3 = other->minFilter;
		this->set_minFilter(tmp3);
		int tmp4 = other->magFilter;
		this->set_magFilter(tmp4);
		int tmp5 = other->wrapModeS;
		this->set_wrapModeS(tmp5);
		int tmp6 = other->wrapModeT;
		this->set_wrapModeT(tmp6);
		Float tmp7 = other->lodBias;
		this->set_lodBias(tmp7);
		Float tmp8 = other->maxAniso;
		this->set_maxAniso(tmp8);
		this->centroid = other->centroid;
		this->mipmapGenerated = other->mipmapGenerated;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SamplerState_obj,copyFrom,(void))

bool SamplerState_obj::equals( ::openfl::_internal::stage3D::SamplerState other){
	bool tmp = (hx::ObjectPtr<OBJ_>(this) == other);
	if ((tmp)){
		bool tmp1 = this->__samplerDirty;
		bool tmp2 = !(tmp1);
		return tmp2;
	}
	bool tmp1 = (other == null());
	if ((tmp1)){
		return false;
	}
	int tmp2 = this->minFilter;
	int tmp3 = other->minFilter;
	bool tmp4 = (tmp2 == tmp3);
	bool tmp5 = tmp4;
	bool tmp6;
	if ((tmp5)){
		int tmp7 = this->magFilter;
		int tmp8 = tmp7;
		int tmp9 = tmp8;
		int tmp10 = other->magFilter;
		tmp6 = (tmp9 == tmp10);
	}
	else{
		tmp6 = false;
	}
	bool tmp7 = tmp6;
	bool tmp8;
	if ((tmp7)){
		int tmp9 = this->wrapModeS;
		int tmp10 = tmp9;
		int tmp11 = tmp10;
		int tmp12 = other->wrapModeS;
		tmp8 = (tmp11 == tmp12);
	}
	else{
		tmp8 = false;
	}
	bool tmp9 = tmp8;
	bool tmp10;
	if ((tmp9)){
		int tmp11 = this->wrapModeT;
		int tmp12 = tmp11;
		int tmp13 = tmp12;
		int tmp14 = other->wrapModeT;
		tmp10 = (tmp13 == tmp14);
	}
	else{
		tmp10 = false;
	}
	bool tmp11 = tmp10;
	bool tmp12;
	if ((tmp11)){
		Float tmp13 = this->lodBias;
		Float tmp14 = tmp13;
		Float tmp15 = tmp14;
		Float tmp16 = other->lodBias;
		tmp12 = (tmp15 == tmp16);
	}
	else{
		tmp12 = false;
	}
	bool tmp13 = tmp12;
	bool tmp14;
	if ((tmp13)){
		Float tmp15 = this->maxAniso;
		Float tmp16 = tmp15;
		Float tmp17 = tmp16;
		Float tmp18 = other->maxAniso;
		tmp14 = (tmp17 == tmp18);
	}
	else{
		tmp14 = false;
	}
	bool tmp15;
	if ((tmp14)){
		bool tmp16 = this->mipmapGenerated;
		bool tmp17 = tmp16;
		bool tmp18 = other->mipmapGenerated;
		tmp15 = (tmp17 == tmp18);
	}
	else{
		tmp15 = false;
	}
	return tmp15;
}


HX_DEFINE_DYNAMIC_FUNC1(SamplerState_obj,equals,return )

Float SamplerState_obj::set_lodBias( Float value){
	Float tmp = this->lodBias;
	Float tmp1 = value;
	bool tmp2 = (tmp != tmp1);
	if ((tmp2)){
		this->__samplerDirty = true;
	}
	Float tmp3 = this->lodBias = value;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(SamplerState_obj,set_lodBias,return )

int SamplerState_obj::set_magFilter( int value){
	int tmp = this->magFilter;
	int tmp1 = value;
	bool tmp2 = (tmp != tmp1);
	if ((tmp2)){
		this->__samplerDirty = true;
	}
	int tmp3 = this->magFilter = value;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(SamplerState_obj,set_magFilter,return )

Float SamplerState_obj::set_maxAniso( Float value){
	Float tmp = this->maxAniso;
	Float tmp1 = value;
	bool tmp2 = (tmp != tmp1);
	if ((tmp2)){
		this->__samplerDirty = true;
	}
	Float tmp3 = this->maxAniso = value;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(SamplerState_obj,set_maxAniso,return )

int SamplerState_obj::set_minFilter( int value){
	int tmp = this->minFilter;
	int tmp1 = value;
	bool tmp2 = (tmp != tmp1);
	if ((tmp2)){
		this->__samplerDirty = true;
	}
	int tmp3 = this->minFilter = value;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(SamplerState_obj,set_minFilter,return )

int SamplerState_obj::set_wrapModeS( int value){
	int tmp = this->wrapModeS;
	int tmp1 = value;
	bool tmp2 = (tmp != tmp1);
	if ((tmp2)){
		this->__samplerDirty = true;
	}
	int tmp3 = this->wrapModeS = value;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(SamplerState_obj,set_wrapModeS,return )

int SamplerState_obj::set_wrapModeT( int value){
	int tmp = this->wrapModeT;
	int tmp1 = value;
	bool tmp2 = (tmp != tmp1);
	if ((tmp2)){
		this->__samplerDirty = true;
	}
	int tmp3 = this->wrapModeT = value;
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(SamplerState_obj,set_wrapModeT,return )


SamplerState_obj::SamplerState_obj()
{
}

Dynamic SamplerState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lodBias") ) { return lodBias; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxAniso") ) { return maxAniso; }
		if (HX_FIELD_EQ(inName,"centroid") ) { return centroid; }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"magFilter") ) { return magFilter; }
		if (HX_FIELD_EQ(inName,"minFilter") ) { return minFilter; }
		if (HX_FIELD_EQ(inName,"wrapModeS") ) { return wrapModeS; }
		if (HX_FIELD_EQ(inName,"wrapModeT") ) { return wrapModeT; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_lodBias") ) { return set_lodBias_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_maxAniso") ) { return set_maxAniso_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ignoreSampler") ) { return ignoreSampler; }
		if (HX_FIELD_EQ(inName,"set_magFilter") ) { return set_magFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"set_minFilter") ) { return set_minFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wrapModeS") ) { return set_wrapModeS_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wrapModeT") ) { return set_wrapModeT_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__samplerDirty") ) { return __samplerDirty; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mipmapGenerated") ) { return mipmapGenerated; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SamplerState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"lodBias") ) { if (inCallProp == hx::paccAlways) return set_lodBias(inValue);lodBias=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxAniso") ) { if (inCallProp == hx::paccAlways) return set_maxAniso(inValue);maxAniso=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"centroid") ) { centroid=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"magFilter") ) { if (inCallProp == hx::paccAlways) return set_magFilter(inValue);magFilter=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minFilter") ) { if (inCallProp == hx::paccAlways) return set_minFilter(inValue);minFilter=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrapModeS") ) { if (inCallProp == hx::paccAlways) return set_wrapModeS(inValue);wrapModeS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrapModeT") ) { if (inCallProp == hx::paccAlways) return set_wrapModeT(inValue);wrapModeT=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ignoreSampler") ) { ignoreSampler=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__samplerDirty") ) { __samplerDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mipmapGenerated") ) { mipmapGenerated=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SamplerState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("lodBias","\x9a","\x3f","\xad","\xac"));
	outFields->push(HX_HCSTRING("magFilter","\xab","\x4e","\xd3","\xf1"));
	outFields->push(HX_HCSTRING("maxAniso","\x34","\x21","\x01","\xcd"));
	outFields->push(HX_HCSTRING("minFilter","\xea","\x1e","\x7d","\xde"));
	outFields->push(HX_HCSTRING("wrapModeS","\x66","\x9d","\xce","\xaf"));
	outFields->push(HX_HCSTRING("wrapModeT","\x67","\x9d","\xce","\xaf"));
	outFields->push(HX_HCSTRING("centroid","\x40","\xe0","\xe5","\x97"));
	outFields->push(HX_HCSTRING("ignoreSampler","\x16","\x5a","\x57","\xa1"));
	outFields->push(HX_HCSTRING("mipmapGenerated","\xe7","\xb0","\x11","\xf6"));
	outFields->push(HX_HCSTRING("__samplerDirty","\x0a","\x41","\x45","\x32"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SamplerState_obj,lodBias),HX_HCSTRING("lodBias","\x9a","\x3f","\xad","\xac")},
	{hx::fsInt,(int)offsetof(SamplerState_obj,magFilter),HX_HCSTRING("magFilter","\xab","\x4e","\xd3","\xf1")},
	{hx::fsFloat,(int)offsetof(SamplerState_obj,maxAniso),HX_HCSTRING("maxAniso","\x34","\x21","\x01","\xcd")},
	{hx::fsInt,(int)offsetof(SamplerState_obj,minFilter),HX_HCSTRING("minFilter","\xea","\x1e","\x7d","\xde")},
	{hx::fsInt,(int)offsetof(SamplerState_obj,wrapModeS),HX_HCSTRING("wrapModeS","\x66","\x9d","\xce","\xaf")},
	{hx::fsInt,(int)offsetof(SamplerState_obj,wrapModeT),HX_HCSTRING("wrapModeT","\x67","\x9d","\xce","\xaf")},
	{hx::fsBool,(int)offsetof(SamplerState_obj,centroid),HX_HCSTRING("centroid","\x40","\xe0","\xe5","\x97")},
	{hx::fsBool,(int)offsetof(SamplerState_obj,ignoreSampler),HX_HCSTRING("ignoreSampler","\x16","\x5a","\x57","\xa1")},
	{hx::fsBool,(int)offsetof(SamplerState_obj,mipmapGenerated),HX_HCSTRING("mipmapGenerated","\xe7","\xb0","\x11","\xf6")},
	{hx::fsBool,(int)offsetof(SamplerState_obj,__samplerDirty),HX_HCSTRING("__samplerDirty","\x0a","\x41","\x45","\x32")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("lodBias","\x9a","\x3f","\xad","\xac"),
	HX_HCSTRING("magFilter","\xab","\x4e","\xd3","\xf1"),
	HX_HCSTRING("maxAniso","\x34","\x21","\x01","\xcd"),
	HX_HCSTRING("minFilter","\xea","\x1e","\x7d","\xde"),
	HX_HCSTRING("wrapModeS","\x66","\x9d","\xce","\xaf"),
	HX_HCSTRING("wrapModeT","\x67","\x9d","\xce","\xaf"),
	HX_HCSTRING("centroid","\x40","\xe0","\xe5","\x97"),
	HX_HCSTRING("ignoreSampler","\x16","\x5a","\x57","\xa1"),
	HX_HCSTRING("mipmapGenerated","\xe7","\xb0","\x11","\xf6"),
	HX_HCSTRING("__samplerDirty","\x0a","\x41","\x45","\x32"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("set_lodBias","\xbd","\xa6","\x14","\x3d"),
	HX_HCSTRING("set_magFilter","\x8e","\x04","\x3d","\xf8"),
	HX_HCSTRING("set_maxAniso","\xb1","\xf8","\x13","\x97"),
	HX_HCSTRING("set_minFilter","\xcd","\xd4","\xe6","\xe4"),
	HX_HCSTRING("set_wrapModeS","\x49","\x53","\x38","\xb6"),
	HX_HCSTRING("set_wrapModeT","\x4a","\x53","\x38","\xb6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SamplerState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SamplerState_obj::__mClass,"__mClass");
};

#endif

hx::Class SamplerState_obj::__mClass;

void SamplerState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D.SamplerState","\x18","\x1f","\xbc","\x13");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SamplerState_obj >;
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
} // end namespace stage3D
