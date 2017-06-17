#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_text_Font
#include <lime/app/Promise_lime_text_Font.h>
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
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_Bytes
#include <lime/net/_HTTPRequest_Bytes.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_lime_text_Font
#include <lime/net/_HTTPRequest_lime_text_Font.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_text_GlyphMetrics
#include <lime/text/GlyphMetrics.h>
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
namespace text{

Void Font_obj::__construct(::String name)
{
{
	bool tmp = (name != null());
	if ((tmp)){
		this->name = name;
	}
	::String tmp1 = this->__fontPath;
	bool tmp2 = (tmp1 != null());
	if ((tmp2)){
		::String tmp3 = this->__fontPath;
		this->__fromFile(tmp3);
	}
}
;
	return null();
}

//Font_obj::~Font_obj() { }

Dynamic Font_obj::__CreateEmpty() { return  new Font_obj; }
hx::ObjectPtr< Font_obj > Font_obj::__new(::String name)
{  hx::ObjectPtr< Font_obj > _result_ = new Font_obj();
	_result_->__construct(name);
	return _result_;}

Dynamic Font_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Font_obj > _result_ = new Font_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic Font_obj::decompose( ){
	Dynamic tmp = this->src;
	bool tmp1 = (tmp == null());
	if ((tmp1)){
		HX_STACK_DO_THROW(HX_HCSTRING("Uninitialized font handle.","\x3a","\x84","\xab","\x29"));
	}
	Dynamic data = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_outline_decompose.call(hx::DynamicPtr(this->src),(int)20480)));
	Dynamic tmp2 = data;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,decompose,return )

int Font_obj::getGlyph( ::String character){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_get_glyph_index.call(hx::DynamicPtr(this->src),character);
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,getGlyph,return )

Array< int > Font_obj::getGlyphs( ::String __o_characters){
::String characters = __o_characters.Default(HX_HCSTRING("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^`'\"/\\&*()[]{}<>|:;_-+=?,. ","\xc1","\xf6","\x34","\x50"));
{
		Dynamic glyphs = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_get_glyph_indices.call(hx::DynamicPtr(this->src),characters)));
		Dynamic tmp = glyphs;
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,getGlyphs,return )

::lime::text::GlyphMetrics Font_obj::getGlyphMetrics( int glyph){
	Dynamic value = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_get_glyph_metrics.call(hx::DynamicPtr(this->src),glyph)));
	::lime::text::GlyphMetrics tmp = ::lime::text::GlyphMetrics_obj::__new();
	::lime::text::GlyphMetrics metrics = tmp;
	::lime::math::Vector2 tmp1 = ::lime::math::Vector2_obj::__new(value->__Field(HX_HCSTRING("horizontalAdvance","\xfe","\x57","\x3e","\xce"), hx::paccDynamic ),value->__Field(HX_HCSTRING("verticalAdvance","\xac","\x8e","\xf7","\x57"), hx::paccDynamic ));
	metrics->advance = tmp1;
	metrics->height = value->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
	::lime::math::Vector2 tmp2 = ::lime::math::Vector2_obj::__new(value->__Field(HX_HCSTRING("horizontalBearingX","\xae","\x21","\x22","\x6c"), hx::paccDynamic ),value->__Field(HX_HCSTRING("horizontalBearingY","\xaf","\x21","\x22","\x6c"), hx::paccDynamic ));
	metrics->horizontalBearing = tmp2;
	::lime::math::Vector2 tmp3 = ::lime::math::Vector2_obj::__new(value->__Field(HX_HCSTRING("verticalBearingX","\x40","\xc3","\x78","\x64"), hx::paccDynamic ),value->__Field(HX_HCSTRING("verticalBearingY","\x41","\xc3","\x78","\x64"), hx::paccDynamic ));
	metrics->verticalBearing = tmp3;
	::lime::text::GlyphMetrics tmp4 = metrics;
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,getGlyphMetrics,return )

::lime::graphics::Image Font_obj::renderGlyph( int glyph,int fontSize){
	int tmp = fontSize;
	this->__setSize(tmp);
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::alloc((int)0);
	::haxe::io::Bytes bytes = tmp1;
	int dataPosition = (int)0;
	if ((::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_render_glyph.call(hx::DynamicPtr(this->src),glyph,hx::DynamicPtr(bytes)))){
		int tmp2 = bytes->b->__get(dataPosition);
		int tmp3 = (dataPosition + (int)1);
		int tmp4 = bytes->b->__get(tmp3);
		int tmp5 = (int(tmp4) << int((int)8));
		int tmp6 = (int(tmp2) | int(tmp5));
		int tmp7 = (dataPosition + (int)2);
		int tmp8 = bytes->b->__get(tmp7);
		int tmp9 = (int(tmp8) << int((int)16));
		int tmp10 = (int(tmp6) | int(tmp9));
		int tmp11 = (dataPosition + (int)3);
		int tmp12 = bytes->b->__get(tmp11);
		int tmp13 = (int(tmp12) << int((int)24));
		int tmp14 = (int(tmp10) | int(tmp13));
		int index = tmp14;
		hx::AddEq(dataPosition,(int)4);
		int tmp15 = bytes->b->__get(dataPosition);
		int tmp16 = (dataPosition + (int)1);
		int tmp17 = bytes->b->__get(tmp16);
		int tmp18 = (int(tmp17) << int((int)8));
		int tmp19 = (int(tmp15) | int(tmp18));
		int tmp20 = (dataPosition + (int)2);
		int tmp21 = bytes->b->__get(tmp20);
		int tmp22 = (int(tmp21) << int((int)16));
		int tmp23 = (int(tmp19) | int(tmp22));
		int tmp24 = (dataPosition + (int)3);
		int tmp25 = bytes->b->__get(tmp24);
		int tmp26 = (int(tmp25) << int((int)24));
		int tmp27 = (int(tmp23) | int(tmp26));
		int width = tmp27;
		hx::AddEq(dataPosition,(int)4);
		int tmp28 = bytes->b->__get(dataPosition);
		int tmp29 = (dataPosition + (int)1);
		int tmp30 = bytes->b->__get(tmp29);
		int tmp31 = (int(tmp30) << int((int)8));
		int tmp32 = (int(tmp28) | int(tmp31));
		int tmp33 = (dataPosition + (int)2);
		int tmp34 = bytes->b->__get(tmp33);
		int tmp35 = (int(tmp34) << int((int)16));
		int tmp36 = (int(tmp32) | int(tmp35));
		int tmp37 = (dataPosition + (int)3);
		int tmp38 = bytes->b->__get(tmp37);
		int tmp39 = (int(tmp38) << int((int)24));
		int tmp40 = (int(tmp36) | int(tmp39));
		int height = tmp40;
		hx::AddEq(dataPosition,(int)4);
		int tmp41 = bytes->b->__get(dataPosition);
		int tmp42 = (dataPosition + (int)1);
		int tmp43 = bytes->b->__get(tmp42);
		int tmp44 = (int(tmp43) << int((int)8));
		int tmp45 = (int(tmp41) | int(tmp44));
		int tmp46 = (dataPosition + (int)2);
		int tmp47 = bytes->b->__get(tmp46);
		int tmp48 = (int(tmp47) << int((int)16));
		int tmp49 = (int(tmp45) | int(tmp48));
		int tmp50 = (dataPosition + (int)3);
		int tmp51 = bytes->b->__get(tmp50);
		int tmp52 = (int(tmp51) << int((int)24));
		int tmp53 = (int(tmp49) | int(tmp52));
		int x = tmp53;
		hx::AddEq(dataPosition,(int)4);
		int tmp54 = bytes->b->__get(dataPosition);
		int tmp55 = (dataPosition + (int)1);
		int tmp56 = bytes->b->__get(tmp55);
		int tmp57 = (int(tmp56) << int((int)8));
		int tmp58 = (int(tmp54) | int(tmp57));
		int tmp59 = (dataPosition + (int)2);
		int tmp60 = bytes->b->__get(tmp59);
		int tmp61 = (int(tmp60) << int((int)16));
		int tmp62 = (int(tmp58) | int(tmp61));
		int tmp63 = (dataPosition + (int)3);
		int tmp64 = bytes->b->__get(tmp63);
		int tmp65 = (int(tmp64) << int((int)24));
		int tmp66 = (int(tmp62) | int(tmp65));
		int y = tmp66;
		hx::AddEq(dataPosition,(int)4);
		int tmp67 = dataPosition;
		int tmp68 = (width * height);
		::haxe::io::Bytes tmp69 = bytes->sub(tmp67,tmp68);
		::haxe::io::Bytes data = tmp69;
		int tmp70 = (width * height);
		hx::AddEq(dataPosition,tmp70);
		::lime::utils::ArrayBufferView tmp71;
		{
			::lime::utils::ArrayBufferView this1;
			bool tmp72 = false;
			if ((tmp72)){
				::lime::utils::ArrayBufferView tmp73 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);
				this1 = tmp73;
			}
			else{
				bool tmp73 = false;
				if ((tmp73)){
					::lime::utils::ArrayBufferView tmp74;
					{
						::lime::utils::ArrayBufferView tmp75 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
						::lime::utils::ArrayBufferView _this = tmp75;
						_this->byteOffset = (int)0;
						int tmp76 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
						_this->length = tmp76;
						int tmp77 = (_this->length * _this->bytesPerElement);
						_this->byteLength = tmp77;
						::haxe::io::Bytes tmp78;
						{
							::haxe::io::Bytes this2;
							int tmp79 = _this->byteLength;
							::haxe::io::Bytes tmp80 = ::haxe::io::Bytes_obj::alloc(tmp79);
							this2 = tmp80;
							tmp78 = this2;
						}
						_this->buffer = tmp78;
						_this->copyFromArray(((Array< Float >)(null())),null());
						tmp74 = _this;
					}
					this1 = tmp74;
				}
				else{
					bool tmp74 = false;
					if ((tmp74)){
						::lime::utils::ArrayBufferView tmp75;
						{
							::lime::utils::ArrayBufferView tmp76 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
							::lime::utils::ArrayBufferView _this = tmp76;
							cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->byteOffset = (int)0;
							_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
							int tmp77 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp77;
							::haxe::io::Bytes tmp78;
							{
								::haxe::io::Bytes this2;
								int tmp79 = _this->byteLength;
								::haxe::io::Bytes tmp80 = ::haxe::io::Bytes_obj::alloc(tmp79);
								this2 = tmp80;
								tmp78 = this2;
							}
							_this->buffer = tmp78;
							_this->copyFromArray(((Array< Float >)(array)),null());
							tmp75 = _this;
						}
						this1 = tmp75;
					}
					else{
						bool tmp75 = false;
						if ((tmp75)){
							::lime::utils::ArrayBufferView tmp76;
							{
								::lime::utils::ArrayBufferView tmp77 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
								::lime::utils::ArrayBufferView _this = tmp77;
								::haxe::io::Bytes tmp78 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								::haxe::io::Bytes srcData = tmp78;
								int tmp79 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcLength = tmp79;
								int tmp80 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcByteOffset = tmp80;
								int tmp81 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int srcElementSize = tmp81;
								int elementSize = _this->bytesPerElement;
								int tmp82 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								int tmp83 = _this->type;
								bool tmp84 = (tmp82 == tmp83);
								if ((tmp84)){
									int srcLength1 = srcData->length;
									int tmp85 = (srcLength1 - srcByteOffset);
									int cloneLength = tmp85;
									::haxe::io::Bytes tmp86;
									{
										::haxe::io::Bytes this2;
										int tmp87 = cloneLength;
										::haxe::io::Bytes tmp88 = ::haxe::io::Bytes_obj::alloc(tmp87);
										this2 = tmp88;
										tmp86 = this2;
									}
									_this->buffer = tmp86;
									::haxe::io::Bytes tmp87 = srcData;
									int tmp88 = srcByteOffset;
									int tmp89 = cloneLength;
									_this->buffer->blit((int)0,tmp87,tmp88,tmp89);
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								int tmp85 = (_this->bytesPerElement * srcLength);
								_this->byteLength = tmp85;
								_this->byteOffset = (int)0;
								_this->length = srcLength;
								tmp76 = _this;
							}
							this1 = tmp76;
						}
						else{
							bool tmp76 = (data != null());
							if ((tmp76)){
								::lime::utils::ArrayBufferView tmp77;
								{
									::lime::utils::ArrayBufferView tmp78 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
									::lime::utils::ArrayBufferView _this = tmp78;
									int in_byteOffset = (int)0;
									bool tmp79 = (in_byteOffset < (int)0);
									if ((tmp79)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									int tmp80 = hx::Mod(in_byteOffset,_this->bytesPerElement);
									bool tmp81 = (tmp80 != (int)0);
									if ((tmp81)){
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									int bufferByteLength = data->length;
									int elementSize = _this->bytesPerElement;
									int newByteLength = bufferByteLength;
									bool tmp82 = true;
									if ((tmp82)){
										int tmp83 = (bufferByteLength - in_byteOffset);
										newByteLength = tmp83;
										int tmp84 = hx::Mod(bufferByteLength,_this->bytesPerElement);
										bool tmp85 = (tmp84 != (int)0);
										if ((tmp85)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										bool tmp86 = (newByteLength < (int)0);
										if ((tmp86)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										int tmp83 = (null() * _this->bytesPerElement);
										newByteLength = tmp83;
										int tmp84 = (in_byteOffset + newByteLength);
										int newRange = tmp84;
										bool tmp85 = (newRange > bufferByteLength);
										if ((tmp85)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									_this->buffer = data;
									_this->byteOffset = in_byteOffset;
									_this->byteLength = newByteLength;
									Float tmp83 = (Float(newByteLength) / Float(_this->bytesPerElement));
									int tmp84 = ::Std_obj::_int(tmp83);
									_this->length = tmp84;
									tmp77 = _this;
								}
								this1 = tmp77;
							}
							else{
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
							}
						}
					}
				}
			}
			tmp71 = this1;
		}
		int tmp72 = width;
		int tmp73 = height;
		::lime::graphics::ImageBuffer tmp74 = ::lime::graphics::ImageBuffer_obj::__new(tmp71,tmp72,tmp73,(int)1,null());
		::lime::graphics::ImageBuffer buffer = tmp74;
		::lime::graphics::Image tmp75 = ::lime::graphics::Image_obj::__new(buffer,(int)0,(int)0,width,height,null(),null());
		::lime::graphics::Image image = tmp75;
		image->x = x;
		image->y = y;
		::lime::graphics::Image tmp76 = image;
		return tmp76;
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Font_obj,renderGlyph,return )

::haxe::ds::IntMap Font_obj::renderGlyphs( Array< int > glyphs,int fontSize){
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Font_obj,renderGlyphs,return )

Void Font_obj::__fromBytes( ::haxe::io::Bytes bytes){
{
		this->__fontPath = null();
		this->__fontPathWithoutDirectory = null();
		this->src = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_load.call(hx::DynamicPtr(bytes))));
		Dynamic tmp = this->src;
		bool tmp1 = (tmp != null());
		bool tmp2;
		if ((tmp1)){
			::String tmp3 = this->name;
			::String tmp4 = tmp3;
			tmp2 = (tmp4 == null());
		}
		else{
			tmp2 = false;
		}
		if ((tmp2)){
			this->name = ((::String)(((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_get_family_name.call(hx::DynamicPtr(this->src))))));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,__fromBytes,(void))

Void Font_obj::__fromFile( ::String path){
{
		this->__fontPath = path;
		::String tmp = this->__fontPath;
		::String tmp1 = ::haxe::io::Path_obj::withoutDirectory(tmp);
		this->__fontPathWithoutDirectory = tmp1;
		this->src = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_load.call(hx::DynamicPtr(this->__fontPath))));
		Dynamic tmp2 = this->src;
		bool tmp3 = (tmp2 != null());
		bool tmp4;
		if ((tmp3)){
			::String tmp5 = this->name;
			::String tmp6 = tmp5;
			tmp4 = (tmp6 == null());
		}
		else{
			tmp4 = false;
		}
		if ((tmp4)){
			this->name = ((::String)(((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_get_family_name.call(hx::DynamicPtr(this->src))))));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,__fromFile,(void))

::lime::app::Future Font_obj::__loadFromName( ::String name){
	::lime::app::Promise_lime_text_Font tmp = ::lime::app::Promise_lime_text_Font_obj::__new();
	::lime::app::Promise_lime_text_Font promise = tmp;
	promise->error(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	::lime::app::Future tmp1 = promise->future;
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,__loadFromName,return )

Void Font_obj::__setSize( int size){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_set_size.call(hx::DynamicPtr(this->src),size);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,__setSize,(void))

int Font_obj::get_ascender( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_get_ascender.call(hx::DynamicPtr(this->src));
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_ascender,return )

int Font_obj::get_descender( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_get_descender.call(hx::DynamicPtr(this->src));
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_descender,return )

int Font_obj::get_height( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_get_height.call(hx::DynamicPtr(this->src));
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_height,return )

int Font_obj::get_numGlyphs( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_get_num_glyphs.call(hx::DynamicPtr(this->src));
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_numGlyphs,return )

int Font_obj::get_underlinePosition( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_get_underline_position.call(hx::DynamicPtr(this->src));
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_underlinePosition,return )

int Font_obj::get_underlineThickness( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_get_underline_thickness.call(hx::DynamicPtr(this->src));
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_underlineThickness,return )

int Font_obj::get_unitsPerEM( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_get_units_per_em.call(hx::DynamicPtr(this->src));
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_unitsPerEM,return )

::lime::text::Font Font_obj::fromBytes( ::haxe::io::Bytes bytes){
	bool tmp = (bytes == null());
	if ((tmp)){
		return null();
	}
	::lime::text::Font tmp1 = ::lime::text::Font_obj::__new(null());
	::lime::text::Font font = tmp1;
	::haxe::io::Bytes tmp2 = bytes;
	font->__fromBytes(tmp2);
	bool tmp3 = (font->src != null());
	::lime::text::Font tmp4;
	if ((tmp3)){
		tmp4 = font;
	}
	else{
		tmp4 = null();
	}
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,fromBytes,return )

::lime::text::Font Font_obj::fromFile( ::String path){
	bool tmp = (path == null());
	if ((tmp)){
		return null();
	}
	::lime::text::Font tmp1 = ::lime::text::Font_obj::__new(null());
	::lime::text::Font font = tmp1;
	::String tmp2 = path;
	font->__fromFile(tmp2);
	bool tmp3 = (font->src != null());
	::lime::text::Font tmp4;
	if ((tmp3)){
		tmp4 = font;
	}
	else{
		tmp4 = null();
	}
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,fromFile,return )

::lime::app::Future Font_obj::loadFromBytes( ::haxe::io::Bytes bytes){
	::haxe::io::Bytes tmp = bytes;
	::lime::text::Font tmp1 = ::lime::text::Font_obj::fromBytes(tmp);
	::lime::app::Future tmp2 = ::lime::app::Future_obj::withValue(tmp1);
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,loadFromBytes,return )

::lime::app::Future Font_obj::loadFromFile( ::String path){
	::lime::net::_HTTPRequest_lime_text_Font tmp = ::lime::net::_HTTPRequest_lime_text_Font_obj::__new(null());
	::lime::net::_HTTPRequest_lime_text_Font request = tmp;
	::String tmp1 = path;
	::lime::app::Future tmp2 = request->load(tmp1);

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	::lime::app::Future run(::lime::text::Font font){
		{
			bool tmp3 = (font != null());
			if ((tmp3)){
				::lime::text::Font tmp4 = font;
				::lime::app::Future tmp5 = ::lime::app::Future_obj::withValue(tmp4);
				return tmp5;
			}
			else{
				::lime::app::Future tmp4 = ::lime::app::Future_obj::withError(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
				::lime::app::Future tmp5 = tmp4;
				return tmp5;
			}
			return null();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	::lime::app::Future tmp3 = tmp2->then( Dynamic(new _Function_1_1()));
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,loadFromFile,return )

::lime::app::Future Font_obj::loadFromName( ::String path){
	::lime::app::Future tmp = ::lime::app::Future_obj::withError(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	::lime::app::Future tmp1 = tmp;
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,loadFromName,return )


Font_obj::Font_obj()
{
}

void Font_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Font);
	HX_MARK_MEMBER_NAME(ascender,"ascender");
	HX_MARK_MEMBER_NAME(descender,"descender");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(numGlyphs,"numGlyphs");
	HX_MARK_MEMBER_NAME(src,"src");
	HX_MARK_MEMBER_NAME(underlinePosition,"underlinePosition");
	HX_MARK_MEMBER_NAME(underlineThickness,"underlineThickness");
	HX_MARK_MEMBER_NAME(unitsPerEM,"unitsPerEM");
	HX_MARK_MEMBER_NAME(__fontPath,"__fontPath");
	HX_MARK_MEMBER_NAME(__fontPathWithoutDirectory,"__fontPathWithoutDirectory");
	HX_MARK_END_CLASS();
}

void Font_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ascender,"ascender");
	HX_VISIT_MEMBER_NAME(descender,"descender");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(numGlyphs,"numGlyphs");
	HX_VISIT_MEMBER_NAME(src,"src");
	HX_VISIT_MEMBER_NAME(underlinePosition,"underlinePosition");
	HX_VISIT_MEMBER_NAME(underlineThickness,"underlineThickness");
	HX_VISIT_MEMBER_NAME(unitsPerEM,"unitsPerEM");
	HX_VISIT_MEMBER_NAME(__fontPath,"__fontPath");
	HX_VISIT_MEMBER_NAME(__fontPathWithoutDirectory,"__fontPathWithoutDirectory");
}

Dynamic Font_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { return src; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp == hx::paccAlways ? get_height() : height; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ascender") ) { return inCallProp == hx::paccAlways ? get_ascender() : ascender; }
		if (HX_FIELD_EQ(inName,"getGlyph") ) { return getGlyph_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"descender") ) { return inCallProp == hx::paccAlways ? get_descender() : descender; }
		if (HX_FIELD_EQ(inName,"numGlyphs") ) { return inCallProp == hx::paccAlways ? get_numGlyphs() : numGlyphs; }
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
		if (HX_FIELD_EQ(inName,"getGlyphs") ) { return getGlyphs_dyn(); }
		if (HX_FIELD_EQ(inName,"__setSize") ) { return __setSize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unitsPerEM") ) { return inCallProp == hx::paccAlways ? get_unitsPerEM() : unitsPerEM; }
		if (HX_FIELD_EQ(inName,"__fontPath") ) { return __fontPath; }
		if (HX_FIELD_EQ(inName,"__fromFile") ) { return __fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"renderGlyph") ) { return renderGlyph_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderGlyphs") ) { return renderGlyphs_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ascender") ) { return get_ascender_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_descender") ) { return get_descender_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numGlyphs") ) { return get_numGlyphs_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__loadFromName") ) { return __loadFromName_dyn(); }
		if (HX_FIELD_EQ(inName,"get_unitsPerEM") ) { return get_unitsPerEM_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getGlyphMetrics") ) { return getGlyphMetrics_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"underlinePosition") ) { return inCallProp == hx::paccAlways ? get_underlinePosition() : underlinePosition; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"underlineThickness") ) { return inCallProp == hx::paccAlways ? get_underlineThickness() : underlineThickness; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_underlinePosition") ) { return get_underlinePosition_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_underlineThickness") ) { return get_underlineThickness_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__fontPathWithoutDirectory") ) { return __fontPathWithoutDirectory; }
	}
	return super::__Field(inName,inCallProp);
}

bool Font_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromFile") ) { outValue = loadFromFile_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadFromName") ) { outValue = loadFromName_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadFromBytes") ) { outValue = loadFromBytes_dyn(); return true;  }
	}
	return false;
}

Dynamic Font_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { src=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ascender") ) { ascender=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"descender") ) { descender=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numGlyphs") ) { numGlyphs=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unitsPerEM") ) { unitsPerEM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__fontPath") ) { __fontPath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"underlinePosition") ) { underlinePosition=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"underlineThickness") ) { underlineThickness=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__fontPathWithoutDirectory") ) { __fontPathWithoutDirectory=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Font_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ascender","\x37","\x98","\x10","\x60"));
	outFields->push(HX_HCSTRING("descender","\x17","\x65","\x27","\xab"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("numGlyphs","\x2d","\x44","\x5a","\x5f"));
	outFields->push(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"));
	outFields->push(HX_HCSTRING("underlinePosition","\xd5","\x5d","\x6b","\x96"));
	outFields->push(HX_HCSTRING("underlineThickness","\xc8","\xba","\x9b","\x91"));
	outFields->push(HX_HCSTRING("unitsPerEM","\x96","\xb6","\x60","\x21"));
	outFields->push(HX_HCSTRING("__fontPath","\x34","\x76","\x08","\x70"));
	outFields->push(HX_HCSTRING("__fontPathWithoutDirectory","\x59","\x11","\x28","\x91"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Font_obj,ascender),HX_HCSTRING("ascender","\x37","\x98","\x10","\x60")},
	{hx::fsInt,(int)offsetof(Font_obj,descender),HX_HCSTRING("descender","\x17","\x65","\x27","\xab")},
	{hx::fsInt,(int)offsetof(Font_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsString,(int)offsetof(Font_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(Font_obj,numGlyphs),HX_HCSTRING("numGlyphs","\x2d","\x44","\x5a","\x5f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Font_obj,src),HX_HCSTRING("src","\xe4","\xa6","\x57","\x00")},
	{hx::fsInt,(int)offsetof(Font_obj,underlinePosition),HX_HCSTRING("underlinePosition","\xd5","\x5d","\x6b","\x96")},
	{hx::fsInt,(int)offsetof(Font_obj,underlineThickness),HX_HCSTRING("underlineThickness","\xc8","\xba","\x9b","\x91")},
	{hx::fsInt,(int)offsetof(Font_obj,unitsPerEM),HX_HCSTRING("unitsPerEM","\x96","\xb6","\x60","\x21")},
	{hx::fsString,(int)offsetof(Font_obj,__fontPath),HX_HCSTRING("__fontPath","\x34","\x76","\x08","\x70")},
	{hx::fsString,(int)offsetof(Font_obj,__fontPathWithoutDirectory),HX_HCSTRING("__fontPathWithoutDirectory","\x59","\x11","\x28","\x91")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("ascender","\x37","\x98","\x10","\x60"),
	HX_HCSTRING("descender","\x17","\x65","\x27","\xab"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("numGlyphs","\x2d","\x44","\x5a","\x5f"),
	HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"),
	HX_HCSTRING("underlinePosition","\xd5","\x5d","\x6b","\x96"),
	HX_HCSTRING("underlineThickness","\xc8","\xba","\x9b","\x91"),
	HX_HCSTRING("unitsPerEM","\x96","\xb6","\x60","\x21"),
	HX_HCSTRING("__fontPath","\x34","\x76","\x08","\x70"),
	HX_HCSTRING("__fontPathWithoutDirectory","\x59","\x11","\x28","\x91"),
	HX_HCSTRING("decompose","\xb1","\xc3","\xa7","\x7a"),
	HX_HCSTRING("getGlyph","\x36","\x0d","\xdc","\xf5"),
	HX_HCSTRING("getGlyphs","\x7d","\x82","\xaf","\x2a"),
	HX_HCSTRING("getGlyphMetrics","\xad","\x6f","\x39","\x58"),
	HX_HCSTRING("renderGlyph","\x76","\x2a","\xb6","\x61"),
	HX_HCSTRING("renderGlyphs","\x3d","\xfd","\xae","\x1d"),
	HX_HCSTRING("__fromBytes","\x81","\x3b","\x4d","\xa0"),
	HX_HCSTRING("__fromFile","\x26","\x10","\xc0","\x44"),
	HX_HCSTRING("__loadFromName","\x3b","\xb0","\xf4","\x80"),
	HX_HCSTRING("__setSize","\x63","\x32","\x26","\x93"),
	HX_HCSTRING("get_ascender","\x40","\x4c","\x2a","\x15"),
	HX_HCSTRING("get_descender","\xee","\x38","\x8b","\x6c"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("get_numGlyphs","\x04","\x18","\xbe","\x20"),
	HX_HCSTRING("get_underlinePosition","\xac","\x60","\x19","\x15"),
	HX_HCSTRING("get_underlineThickness","\x11","\x34","\x30","\xeb"),
	HX_HCSTRING("get_unitsPerEM","\xdf","\x3e","\x56","\x97"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Font_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Font_obj::__mClass,"__mClass");
};

#endif

hx::Class Font_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("loadFromBytes","\x9b","\xc3","\x86","\xf4"),
	HX_HCSTRING("loadFromFile","\x4c","\x89","\xf0","\x5a"),
	HX_HCSTRING("loadFromName","\x1b","\x2d","\x34","\x60"),
	::String(null()) };

void Font_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.text.Font","\xb7","\x86","\x7e","\xd1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Font_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Font_obj >;
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
} // end namespace text
