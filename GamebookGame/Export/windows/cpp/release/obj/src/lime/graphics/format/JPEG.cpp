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
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_format_JPEG
#include <lime/graphics/format/JPEG.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
namespace lime{
namespace graphics{
namespace format{

Void JPEG_obj::__construct()
{
	return null();
}

//JPEG_obj::~JPEG_obj() { }

Dynamic JPEG_obj::__CreateEmpty() { return  new JPEG_obj; }
hx::ObjectPtr< JPEG_obj > JPEG_obj::__new()
{  hx::ObjectPtr< JPEG_obj > _result_ = new JPEG_obj();
	_result_->__construct();
	return _result_;}

Dynamic JPEG_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JPEG_obj > _result_ = new JPEG_obj();
	_result_->__construct();
	return _result_;}

::lime::graphics::Image JPEG_obj::decodeBytes( ::haxe::io::Bytes bytes,hx::Null< bool >  __o_decodeData){
bool decodeData = __o_decodeData.Default(true);
{
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
			Dynamic buffer = tmp2;
			tmp = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_jpeg_decode_bytes.call(hx::DynamicPtr(bytes),decodeData,hx::DynamicPtr(buffer));
		}
		return tmp;
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JPEG_obj,decodeBytes,return )

::lime::graphics::Image JPEG_obj::decodeFile( ::String path,hx::Null< bool >  __o_decodeData){
bool decodeData = __o_decodeData.Default(true);
{
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
			Dynamic buffer = tmp2;
			tmp = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_jpeg_decode_file.call(path,decodeData,hx::DynamicPtr(buffer));
		}
		return tmp;
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JPEG_obj,decodeFile,return )

::haxe::io::Bytes JPEG_obj::encode( ::lime::graphics::Image image,int quality){
	bool tmp = image->get_premultiplied();
	bool tmp1 = !(tmp);
	bool tmp2;
	if ((tmp1)){
		int tmp3 = image->get_format();
		int tmp4 = tmp3;
		tmp2 = (tmp4 != (int)0);
	}
	else{
		tmp2 = true;
	}
	if ((tmp2)){
		::lime::graphics::Image tmp3 = image->clone();
		image = tmp3;
		image->set_premultiplied(false);
		image->set_format((int)0);
	}
	Dynamic tmp3;
	{
		::haxe::io::Bytes tmp4 = ::haxe::io::Bytes_obj::alloc((int)0);
		Dynamic bytes = tmp4;
		tmp3 = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_encode.call(hx::DynamicPtr(image->buffer),(int)1,quality,hx::DynamicPtr(bytes));
	}
	return tmp3;
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JPEG_obj,encode,return )


JPEG_obj::JPEG_obj()
{
}

bool JPEG_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"decodeFile") ) { outValue = decodeFile_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"decodeBytes") ) { outValue = decodeBytes_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JPEG_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JPEG_obj::__mClass,"__mClass");
};

#endif

hx::Class JPEG_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("decodeBytes","\x5d","\x94","\xb1","\x85"),
	HX_HCSTRING("decodeFile","\xca","\x86","\x63","\xce"),
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	::String(null()) };

void JPEG_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.format.JPEG","\x15","\x91","\x5a","\xe7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JPEG_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< JPEG_obj >;
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
} // end namespace format
