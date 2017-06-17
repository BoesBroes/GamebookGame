#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
namespace lime{
namespace graphics{

Void ImageBuffer_obj::__construct(::lime::utils::ArrayBufferView data,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_bitsPerPixel,Dynamic format)
{
int width = __o_width.Default(0);
int height = __o_height.Default(0);
int bitsPerPixel = __o_bitsPerPixel.Default(32);
{
	this->data = data;
	this->width = width;
	this->height = height;
	this->bitsPerPixel = bitsPerPixel;
	bool tmp = (format == null());
	int tmp1;
	if ((tmp)){
		tmp1 = (int)0;
	}
	else{
		tmp1 = format;
	}
	this->format = tmp1;
	this->premultiplied = false;
	this->transparent = true;
}
;
	return null();
}

//ImageBuffer_obj::~ImageBuffer_obj() { }

Dynamic ImageBuffer_obj::__CreateEmpty() { return  new ImageBuffer_obj; }
hx::ObjectPtr< ImageBuffer_obj > ImageBuffer_obj::__new(::lime::utils::ArrayBufferView data,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_bitsPerPixel,Dynamic format)
{  hx::ObjectPtr< ImageBuffer_obj > _result_ = new ImageBuffer_obj();
	_result_->__construct(data,__o_width,__o_height,__o_bitsPerPixel,format);
	return _result_;}

Dynamic ImageBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ImageBuffer_obj > _result_ = new ImageBuffer_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

::lime::graphics::ImageBuffer ImageBuffer_obj::clone( ){
	::lime::utils::ArrayBufferView tmp = this->data;
	int tmp1 = this->width;
	int tmp2 = this->height;
	int tmp3 = this->bitsPerPixel;
	::lime::graphics::ImageBuffer tmp4 = ::lime::graphics::ImageBuffer_obj::__new(tmp,tmp1,tmp2,tmp3,null());
	::lime::graphics::ImageBuffer buffer = tmp4;
	::lime::utils::ArrayBufferView tmp5 = this->data;
	bool tmp6 = (tmp5 != null());
	if ((tmp6)){
		::lime::utils::ArrayBufferView tmp7 = this->data;
		int tmp8 = tmp7->byteLength;
		::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);
		::haxe::io::Bytes bytes = tmp9;
		::haxe::io::Bytes tmp10 = buffer->data->buffer;
		::lime::utils::ArrayBufferView tmp11 = this->data;
		int tmp12 = tmp11->byteLength;
		bytes->blit((int)0,tmp10,(int)0,tmp12);
		::lime::utils::ArrayBufferView tmp13;
		{
			::lime::utils::ArrayBufferView this1;
			bool tmp14 = false;
			if ((tmp14)){
				::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);
				this1 = tmp15;
			}
			else{
				bool tmp15 = false;
				if ((tmp15)){
					::lime::utils::ArrayBufferView tmp16;
					{
						::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
						::lime::utils::ArrayBufferView _this = tmp17;
						_this->byteOffset = (int)0;
						int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
						_this->length = tmp18;
						int tmp19 = (_this->length * _this->bytesPerElement);
						_this->byteLength = tmp19;
						::haxe::io::Bytes tmp20;
						{
							::haxe::io::Bytes this2;
							int tmp21 = _this->byteLength;
							::haxe::io::Bytes tmp22 = ::haxe::io::Bytes_obj::alloc(tmp21);
							this2 = tmp22;
							tmp20 = this2;
						}
						_this->buffer = tmp20;
						_this->copyFromArray(((Array< Float >)(null())),null());
						tmp16 = _this;
					}
					this1 = tmp16;
				}
				else{
					bool tmp16 = false;
					if ((tmp16)){
						::lime::utils::ArrayBufferView tmp17;
						{
							::lime::utils::ArrayBufferView tmp18 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
							::lime::utils::ArrayBufferView _this = tmp18;
							cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->byteOffset = (int)0;
							_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
							int tmp19 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp19;
							::haxe::io::Bytes tmp20;
							{
								::haxe::io::Bytes this2;
								int tmp21 = _this->byteLength;
								::haxe::io::Bytes tmp22 = ::haxe::io::Bytes_obj::alloc(tmp21);
								this2 = tmp22;
								tmp20 = this2;
							}
							_this->buffer = tmp20;
							_this->copyFromArray(((Array< Float >)(array)),null());
							tmp17 = _this;
						}
						this1 = tmp17;
					}
					else{
						bool tmp17 = false;
						if ((tmp17)){
							::lime::utils::ArrayBufferView tmp18;
							{
								::lime::utils::ArrayBufferView tmp19 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
								::lime::utils::ArrayBufferView _this = tmp19;
								::haxe::io::Bytes tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								::haxe::io::Bytes srcData = tmp20;
								int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcLength = tmp21;
								int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcByteOffset = tmp22;
								int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcElementSize = tmp23;
								int elementSize = _this->bytesPerElement;
								int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int tmp25 = _this->type;
								bool tmp26 = (tmp24 == tmp25);
								if ((tmp26)){
									int srcLength1 = srcData->length;
									int tmp27 = (srcLength1 - srcByteOffset);
									int cloneLength = tmp27;
									::haxe::io::Bytes tmp28;
									{
										::haxe::io::Bytes this2;
										int tmp29 = cloneLength;
										::haxe::io::Bytes tmp30 = ::haxe::io::Bytes_obj::alloc(tmp29);
										this2 = tmp30;
										tmp28 = this2;
									}
									_this->buffer = tmp28;
									::haxe::io::Bytes tmp29 = srcData;
									int tmp30 = srcByteOffset;
									int tmp31 = cloneLength;
									_this->buffer->blit((int)0,tmp29,tmp30,tmp31);
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								int tmp27 = (_this->bytesPerElement * srcLength);
								_this->byteLength = tmp27;
								_this->byteOffset = (int)0;
								_this->length = srcLength;
								tmp18 = _this;
							}
							this1 = tmp18;
						}
						else{
							bool tmp18 = (bytes != null());
							if ((tmp18)){
								::lime::utils::ArrayBufferView tmp19;
								{
									::lime::utils::ArrayBufferView tmp20 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
									::lime::utils::ArrayBufferView _this = tmp20;
									int in_byteOffset = (int)0;
									bool tmp21 = (in_byteOffset < (int)0);
									if ((tmp21)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									int tmp22 = hx::Mod(in_byteOffset,_this->bytesPerElement);
									bool tmp23 = (tmp22 != (int)0);
									if ((tmp23)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									int bufferByteLength = bytes->length;
									int elementSize = _this->bytesPerElement;
									int newByteLength = bufferByteLength;
									bool tmp24 = true;
									if ((tmp24)){
										int tmp25 = (bufferByteLength - in_byteOffset);
										newByteLength = tmp25;
										int tmp26 = hx::Mod(bufferByteLength,_this->bytesPerElement);
										bool tmp27 = (tmp26 != (int)0);
										if ((tmp27)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										bool tmp28 = (newByteLength < (int)0);
										if ((tmp28)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										int tmp25 = (null() * _this->bytesPerElement);
										newByteLength = tmp25;
										int tmp26 = (in_byteOffset + newByteLength);
										int newRange = tmp26;
										bool tmp27 = (newRange > bufferByteLength);
										if ((tmp27)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									_this->buffer = bytes;
									_this->byteOffset = in_byteOffset;
									_this->byteLength = newByteLength;
									Float tmp25 = (Float(newByteLength) / Float(_this->bytesPerElement));
									int tmp26 = ::Std_obj::_int(tmp25);
									_this->length = tmp26;
									tmp19 = _this;
								}
								this1 = tmp19;
							}
							else{
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
							}
						}
					}
				}
			}
			tmp13 = this1;
		}
		buffer->data = tmp13;
	}
	int tmp7 = this->bitsPerPixel;
	buffer->bitsPerPixel = tmp7;
	int tmp8 = this->format;
	buffer->format = tmp8;
	bool tmp9 = this->premultiplied;
	buffer->premultiplied = tmp9;
	bool tmp10 = this->transparent;
	buffer->transparent = tmp10;
	::lime::graphics::ImageBuffer tmp11 = buffer;
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC0(ImageBuffer_obj,clone,return )

Dynamic ImageBuffer_obj::get_src( ){
	Dynamic tmp = this->__srcCustom;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ImageBuffer_obj,get_src,return )

Dynamic ImageBuffer_obj::set_src( Dynamic value){
	this->__srcCustom = value;
	Dynamic tmp = value;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ImageBuffer_obj,set_src,return )

int ImageBuffer_obj::get_stride( ){
	int tmp = this->width;
	int tmp1 = (tmp * (int)4);
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ImageBuffer_obj,get_stride,return )


ImageBuffer_obj::ImageBuffer_obj()
{
}

void ImageBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageBuffer);
	HX_MARK_MEMBER_NAME(bitsPerPixel,"bitsPerPixel");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(premultiplied,"premultiplied");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(__srcBitmapData,"__srcBitmapData");
	HX_MARK_MEMBER_NAME(__srcCanvas,"__srcCanvas");
	HX_MARK_MEMBER_NAME(__srcContext,"__srcContext");
	HX_MARK_MEMBER_NAME(__srcCustom,"__srcCustom");
	HX_MARK_MEMBER_NAME(__srcImage,"__srcImage");
	HX_MARK_MEMBER_NAME(__srcImageData,"__srcImageData");
	HX_MARK_END_CLASS();
}

void ImageBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitsPerPixel,"bitsPerPixel");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(premultiplied,"premultiplied");
	HX_VISIT_MEMBER_NAME(transparent,"transparent");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(__srcBitmapData,"__srcBitmapData");
	HX_VISIT_MEMBER_NAME(__srcCanvas,"__srcCanvas");
	HX_VISIT_MEMBER_NAME(__srcContext,"__srcContext");
	HX_VISIT_MEMBER_NAME(__srcCustom,"__srcCustom");
	HX_VISIT_MEMBER_NAME(__srcImage,"__srcImage");
	HX_VISIT_MEMBER_NAME(__srcImageData,"__srcImageData");
}

Dynamic ImageBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == hx::paccAlways) return get_src(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"stride") ) { if (inCallProp == hx::paccAlways) return get_stride(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_src") ) { return get_src_dyn(); }
		if (HX_FIELD_EQ(inName,"set_src") ) { return set_src_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__srcImage") ) { return __srcImage; }
		if (HX_FIELD_EQ(inName,"get_stride") ) { return get_stride_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { return transparent; }
		if (HX_FIELD_EQ(inName,"__srcCanvas") ) { return __srcCanvas; }
		if (HX_FIELD_EQ(inName,"__srcCustom") ) { return __srcCustom; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitsPerPixel") ) { return bitsPerPixel; }
		if (HX_FIELD_EQ(inName,"__srcContext") ) { return __srcContext; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"premultiplied") ) { return premultiplied; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__srcImageData") ) { return __srcImageData; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__srcBitmapData") ) { return __srcBitmapData; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ImageBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == hx::paccAlways) return set_src(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__srcImage") ) { __srcImage=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcCanvas") ) { __srcCanvas=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcCustom") ) { __srcCustom=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitsPerPixel") ) { bitsPerPixel=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcContext") ) { __srcContext=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"premultiplied") ) { premultiplied=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__srcImageData") ) { __srcImageData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__srcBitmapData") ) { __srcBitmapData=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitsPerPixel","\x8f","\x4d","\xee","\x1c"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("premultiplied","\x56","\xf1","\x4e","\xa4"));
	outFields->push(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"));
	outFields->push(HX_HCSTRING("stride","\x19","\x20","\x30","\x11"));
	outFields->push(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("__srcBitmapData","\x9d","\x9e","\xde","\x24"));
	outFields->push(HX_HCSTRING("__srcCanvas","\xbc","\xfb","\xb8","\x6a"));
	outFields->push(HX_HCSTRING("__srcContext","\x8b","\xf6","\xd2","\x8e"));
	outFields->push(HX_HCSTRING("__srcCustom","\x95","\x2e","\x09","\xf2"));
	outFields->push(HX_HCSTRING("__srcImage","\xf7","\xe0","\x5b","\xbf"));
	outFields->push(HX_HCSTRING("__srcImageData","\xc1","\xaa","\x01","\x30"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ImageBuffer_obj,bitsPerPixel),HX_HCSTRING("bitsPerPixel","\x8f","\x4d","\xee","\x1c")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(ImageBuffer_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsInt,(int)offsetof(ImageBuffer_obj,format),HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")},
	{hx::fsInt,(int)offsetof(ImageBuffer_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsBool,(int)offsetof(ImageBuffer_obj,premultiplied),HX_HCSTRING("premultiplied","\x56","\xf1","\x4e","\xa4")},
	{hx::fsBool,(int)offsetof(ImageBuffer_obj,transparent),HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22")},
	{hx::fsInt,(int)offsetof(ImageBuffer_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,__srcBitmapData),HX_HCSTRING("__srcBitmapData","\x9d","\x9e","\xde","\x24")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,__srcCanvas),HX_HCSTRING("__srcCanvas","\xbc","\xfb","\xb8","\x6a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,__srcContext),HX_HCSTRING("__srcContext","\x8b","\xf6","\xd2","\x8e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,__srcCustom),HX_HCSTRING("__srcCustom","\x95","\x2e","\x09","\xf2")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,__srcImage),HX_HCSTRING("__srcImage","\xf7","\xe0","\x5b","\xbf")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,__srcImageData),HX_HCSTRING("__srcImageData","\xc1","\xaa","\x01","\x30")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bitsPerPixel","\x8f","\x4d","\xee","\x1c"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("premultiplied","\x56","\xf1","\x4e","\xa4"),
	HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("__srcBitmapData","\x9d","\x9e","\xde","\x24"),
	HX_HCSTRING("__srcCanvas","\xbc","\xfb","\xb8","\x6a"),
	HX_HCSTRING("__srcContext","\x8b","\xf6","\xd2","\x8e"),
	HX_HCSTRING("__srcCustom","\x95","\x2e","\x09","\xf2"),
	HX_HCSTRING("__srcImage","\xf7","\xe0","\x5b","\xbf"),
	HX_HCSTRING("__srcImageData","\xc1","\xaa","\x01","\x30"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("get_src","\x7b","\x6f","\xcc","\x26"),
	HX_HCSTRING("set_src","\x87","\x00","\xce","\x19"),
	HX_HCSTRING("get_stride","\xe2","\x8f","\xb7","\x01"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageBuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class ImageBuffer_obj::__mClass;

void ImageBuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.ImageBuffer","\x71","\x9c","\xe0","\x10");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ImageBuffer_obj >;
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
