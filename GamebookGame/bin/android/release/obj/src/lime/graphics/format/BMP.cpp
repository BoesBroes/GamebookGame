#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMP
#include <lime/graphics/format/BMP.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMPType
#include <lime/graphics/format/BMPType.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
namespace lime{
namespace graphics{
namespace format{

Void BMP_obj::__construct()
{
	return null();
}

//BMP_obj::~BMP_obj() { }

Dynamic BMP_obj::__CreateEmpty() { return  new BMP_obj; }
hx::ObjectPtr< BMP_obj > BMP_obj::__new()
{  hx::ObjectPtr< BMP_obj > _result_ = new BMP_obj();
	_result_->__construct();
	return _result_;}

Dynamic BMP_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BMP_obj > _result_ = new BMP_obj();
	_result_->__construct();
	return _result_;}

::haxe::io::Bytes BMP_obj::encode( ::lime::graphics::Image image,::lime::graphics::format::BMPType type){
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
	bool tmp3 = (type == null());
	if ((tmp3)){
		type = ::lime::graphics::format::BMPType_obj::RGB;
	}
	int fileHeaderLength = (int)14;
	int infoHeaderLength = (int)40;
	int tmp4 = (image->width * image->height);
	int tmp5 = (tmp4 * (int)4);
	int pixelValuesLength = tmp5;
	bool tmp6 = (type != null());
	if ((tmp6)){
		switch( (int)(type->__Index())){
			case (int)1: {
				infoHeaderLength = (int)108;
			}
			;break;
			case (int)2: {
				fileHeaderLength = (int)0;
				int tmp7 = (image->width * image->height);
				hx::AddEq(pixelValuesLength,tmp7);
			}
			;break;
			case (int)0: {
				int tmp7 = (image->width * (int)3);
				int tmp8 = (image->width * (int)3);
				int tmp9 = hx::Mod(tmp8,(int)4);
				int tmp10 = (tmp7 + tmp9);
				int tmp11 = (image->height * (int)3);
				int tmp12 = (tmp10 + tmp11);
				int tmp13 = (image->height * (int)3);
				int tmp14 = (tmp12 + tmp13);
				pixelValuesLength = tmp14;
			}
			;break;
			default: {
			}
		}
	}
	else{
	}
	int tmp7 = (fileHeaderLength + infoHeaderLength);
	int tmp8 = pixelValuesLength;
	int tmp9 = (tmp7 + tmp8);
	::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);
	::haxe::io::Bytes data = tmp10;
	int position = (int)0;
	bool tmp11 = (fileHeaderLength > (int)0);
	if ((tmp11)){
		{
			int tmp12 = (position)++;
			int pos = tmp12;
			data->b[pos] = (int)66;
		}
		{
			int tmp12 = (position)++;
			int pos = tmp12;
			data->b[pos] = (int)77;
		}
		{
			int v = data->length;
			{
				int tmp12 = v;
				data->b[position] = tmp12;
			}
			{
				int tmp12 = (position + (int)1);
				int tmp13 = (int(v) >> int((int)8));
				data->b[tmp12] = tmp13;
			}
			{
				int tmp12 = (position + (int)2);
				int tmp13 = (int(v) >> int((int)16));
				data->b[tmp12] = tmp13;
			}
			{
				int tmp12 = (position + (int)3);
				int tmp13 = hx::UShr(v,(int)24);
				data->b[tmp12] = tmp13;
			}
		}
		hx::AddEq(position,(int)4);
		{
			data->b[position] = (int)0;
			{
				int tmp12 = (position + (int)1);
				int tmp13 = (int)0;
				data->b[tmp12] = tmp13;
			}
		}
		hx::AddEq(position,(int)2);
		{
			data->b[position] = (int)0;
			{
				int tmp12 = (position + (int)1);
				int tmp13 = (int)0;
				data->b[tmp12] = tmp13;
			}
		}
		hx::AddEq(position,(int)2);
		{
			int tmp12 = (fileHeaderLength + infoHeaderLength);
			int v = tmp12;
			{
				int tmp13 = v;
				data->b[position] = tmp13;
			}
			{
				int tmp13 = (position + (int)1);
				int tmp14 = (int(v) >> int((int)8));
				data->b[tmp13] = tmp14;
			}
			{
				int tmp13 = (position + (int)2);
				int tmp14 = (int(v) >> int((int)16));
				data->b[tmp13] = tmp14;
			}
			{
				int tmp13 = (position + (int)3);
				int tmp14 = hx::UShr(v,(int)24);
				data->b[tmp13] = tmp14;
			}
		}
		hx::AddEq(position,(int)4);
	}
	{
		{
			int tmp12 = infoHeaderLength;
			data->b[position] = tmp12;
		}
		{
			int tmp12 = (position + (int)1);
			int tmp13 = (int(infoHeaderLength) >> int((int)8));
			data->b[tmp12] = tmp13;
		}
		{
			int tmp12 = (position + (int)2);
			int tmp13 = (int(infoHeaderLength) >> int((int)16));
			data->b[tmp12] = tmp13;
		}
		{
			int tmp12 = (position + (int)3);
			int tmp13 = hx::UShr(infoHeaderLength,(int)24);
			data->b[tmp12] = tmp13;
		}
	}
	hx::AddEq(position,(int)4);
	{
		int v = image->width;
		{
			int tmp12 = v;
			data->b[position] = tmp12;
		}
		{
			int tmp12 = (position + (int)1);
			int tmp13 = (int(v) >> int((int)8));
			data->b[tmp12] = tmp13;
		}
		{
			int tmp12 = (position + (int)2);
			int tmp13 = (int(v) >> int((int)16));
			data->b[tmp12] = tmp13;
		}
		{
			int tmp12 = (position + (int)3);
			int tmp13 = hx::UShr(v,(int)24);
			data->b[tmp12] = tmp13;
		}
	}
	hx::AddEq(position,(int)4);
	{
		bool tmp12 = (type == ::lime::graphics::format::BMPType_obj::ICO);
		int tmp13;
		if ((tmp12)){
			tmp13 = (image->height * (int)2);
		}
		else{
			tmp13 = image->height;
		}
		int v = tmp13;
		{
			int tmp14 = v;
			data->b[position] = tmp14;
		}
		{
			int tmp14 = (position + (int)1);
			int tmp15 = (int(v) >> int((int)8));
			data->b[tmp14] = tmp15;
		}
		{
			int tmp14 = (position + (int)2);
			int tmp15 = (int(v) >> int((int)16));
			data->b[tmp14] = tmp15;
		}
		{
			int tmp14 = (position + (int)3);
			int tmp15 = hx::UShr(v,(int)24);
			data->b[tmp14] = tmp15;
		}
	}
	hx::AddEq(position,(int)4);
	{
		data->b[position] = (int)1;
		{
			int tmp12 = (position + (int)1);
			int tmp13 = (int)0;
			data->b[tmp12] = tmp13;
		}
	}
	hx::AddEq(position,(int)2);
	{
		bool tmp12 = (type == ::lime::graphics::format::BMPType_obj::RGB);
		int tmp13;
		if ((tmp12)){
			tmp13 = (int)24;
		}
		else{
			tmp13 = (int)32;
		}
		int v = tmp13;
		{
			int tmp14 = v;
			data->b[position] = tmp14;
		}
		{
			int tmp14 = (position + (int)1);
			int tmp15 = (int(v) >> int((int)8));
			data->b[tmp14] = tmp15;
		}
	}
	hx::AddEq(position,(int)2);
	{
		bool tmp12 = (type == ::lime::graphics::format::BMPType_obj::BITFIELD);
		int tmp13;
		if ((tmp12)){
			tmp13 = (int)3;
		}
		else{
			tmp13 = (int)0;
		}
		int v = tmp13;
		{
			int tmp14 = v;
			data->b[position] = tmp14;
		}
		{
			int tmp14 = (position + (int)1);
			int tmp15 = (int(v) >> int((int)8));
			data->b[tmp14] = tmp15;
		}
		{
			int tmp14 = (position + (int)2);
			int tmp15 = (int(v) >> int((int)16));
			data->b[tmp14] = tmp15;
		}
		{
			int tmp14 = (position + (int)3);
			int tmp15 = hx::UShr(v,(int)24);
			data->b[tmp14] = tmp15;
		}
	}
	hx::AddEq(position,(int)4);
	{
		{
			int tmp12 = pixelValuesLength;
			data->b[position] = tmp12;
		}
		{
			int tmp12 = (position + (int)1);
			int tmp13 = (int(pixelValuesLength) >> int((int)8));
			data->b[tmp12] = tmp13;
		}
		{
			int tmp12 = (position + (int)2);
			int tmp13 = (int(pixelValuesLength) >> int((int)16));
			data->b[tmp12] = tmp13;
		}
		{
			int tmp12 = (position + (int)3);
			int tmp13 = hx::UShr(pixelValuesLength,(int)24);
			data->b[tmp12] = tmp13;
		}
	}
	hx::AddEq(position,(int)4);
	{
		data->b[position] = (int)11824;
		{
			int tmp12 = (position + (int)1);
			int tmp13 = (int)46;
			data->b[tmp12] = tmp13;
		}
		{
			int tmp12 = (position + (int)2);
			int tmp13 = (int)0;
			data->b[tmp12] = tmp13;
		}
		{
			int tmp12 = (position + (int)3);
			int tmp13 = (int)0;
			data->b[tmp12] = tmp13;
		}
	}
	hx::AddEq(position,(int)4);
	{
		data->b[position] = (int)11824;
		{
			int tmp12 = (position + (int)1);
			int tmp13 = (int)46;
			data->b[tmp12] = tmp13;
		}
		{
			int tmp12 = (position + (int)2);
			int tmp13 = (int)0;
			data->b[tmp12] = tmp13;
		}
		{
			int tmp12 = (position + (int)3);
			int tmp13 = (int)0;
			data->b[tmp12] = tmp13;
		}
	}
	hx::AddEq(position,(int)4);
	{
		data->b[position] = (int)0;
		{
			int tmp12 = (position + (int)1);
			int tmp13 = (int)0;
			data->b[tmp12] = tmp13;
		}
		{
			int tmp12 = (position + (int)2);
			int tmp13 = (int)0;
			data->b[tmp12] = tmp13;
		}
		{
			int tmp12 = (position + (int)3);
			int tmp13 = (int)0;
			data->b[tmp12] = tmp13;
		}
	}
	hx::AddEq(position,(int)4);
	{
		data->b[position] = (int)0;
		{
			int tmp12 = (position + (int)1);
			int tmp13 = (int)0;
			data->b[tmp12] = tmp13;
		}
		{
			int tmp12 = (position + (int)2);
			int tmp13 = (int)0;
			data->b[tmp12] = tmp13;
		}
		{
			int tmp12 = (position + (int)3);
			int tmp13 = (int)0;
			data->b[tmp12] = tmp13;
		}
	}
	hx::AddEq(position,(int)4);
	bool tmp12 = (type == ::lime::graphics::format::BMPType_obj::BITFIELD);
	if ((tmp12)){
		{
			data->b[position] = (int)16711680;
			{
				int tmp13 = (position + (int)1);
				int tmp14 = (int)65280;
				data->b[tmp13] = tmp14;
			}
			{
				int tmp13 = (position + (int)2);
				int tmp14 = (int)255;
				data->b[tmp13] = tmp14;
			}
			{
				int tmp13 = (position + (int)3);
				int tmp14 = (int)0;
				data->b[tmp13] = tmp14;
			}
		}
		hx::AddEq(position,(int)4);
		{
			data->b[position] = (int)65280;
			{
				int tmp13 = (position + (int)1);
				int tmp14 = (int)255;
				data->b[tmp13] = tmp14;
			}
			{
				int tmp13 = (position + (int)2);
				int tmp14 = (int)0;
				data->b[tmp13] = tmp14;
			}
			{
				int tmp13 = (position + (int)3);
				int tmp14 = (int)0;
				data->b[tmp13] = tmp14;
			}
		}
		hx::AddEq(position,(int)4);
		{
			data->b[position] = (int)255;
			{
				int tmp13 = (position + (int)1);
				int tmp14 = (int)0;
				data->b[tmp13] = tmp14;
			}
			{
				int tmp13 = (position + (int)2);
				int tmp14 = (int)0;
				data->b[tmp13] = tmp14;
			}
			{
				int tmp13 = (position + (int)3);
				int tmp14 = (int)0;
				data->b[tmp13] = tmp14;
			}
		}
		hx::AddEq(position,(int)4);
		{
			data->b[position] = (int)-16777216;
			{
				int tmp13 = (position + (int)1);
				int tmp14 = (int)-65536;
				data->b[tmp13] = tmp14;
			}
			{
				int tmp13 = (position + (int)2);
				int tmp14 = (int)-256;
				data->b[tmp13] = tmp14;
			}
			{
				int tmp13 = (position + (int)3);
				int tmp14 = (int)255;
				data->b[tmp13] = tmp14;
			}
		}
		hx::AddEq(position,(int)4);
		{
			int tmp13 = (position)++;
			int pos = tmp13;
			data->b[pos] = (int)32;
		}
		{
			int tmp13 = (position)++;
			int pos = tmp13;
			data->b[pos] = (int)110;
		}
		{
			int tmp13 = (position)++;
			int pos = tmp13;
			data->b[pos] = (int)105;
		}
		{
			int tmp13 = (position)++;
			int pos = tmp13;
			data->b[pos] = (int)87;
		}
		{
			int _g = (int)0;
			while((true)){
				bool tmp13 = (_g < (int)48);
				bool tmp14 = !(tmp13);
				if ((tmp14)){
					break;
				}
				int tmp15 = (_g)++;
				int i = tmp15;
				{
					int tmp16 = (position)++;
					int pos = tmp16;
					data->b[pos] = (int)0;
				}
			}
		}
	}
	::lime::math::Rectangle tmp13 = ::lime::math::Rectangle_obj::__new((int)0,(int)0,image->width,image->height);
	::haxe::io::Bytes tmp14 = image->getPixels(tmp13,(int)1);
	::haxe::io::Bytes pixels = tmp14;
	int readPosition = (int)0;
	int a;
	int r;
	int g;
	int b;
	bool tmp15 = (type != null());
	if ((tmp15)){
		switch( (int)(type->__Index())){
			case (int)1: {
				int _g1 = (int)0;
				int _g = image->height;
				while((true)){
					bool tmp16 = (_g1 < _g);
					bool tmp17 = !(tmp16);
					if ((tmp17)){
						break;
					}
					int tmp18 = (_g1)++;
					int y = tmp18;
					int tmp19 = (image->height - (int)1);
					int tmp20 = y;
					int tmp21 = (tmp19 - tmp20);
					int tmp22 = (tmp21 * (int)4);
					int tmp23 = image->width;
					int tmp24 = (tmp22 * tmp23);
					readPosition = tmp24;
					{
						int _g3 = (int)0;
						int _g2 = image->width;
						while((true)){
							bool tmp25 = (_g3 < _g2);
							bool tmp26 = !(tmp25);
							if ((tmp26)){
								break;
							}
							int tmp27 = (_g3)++;
							int x = tmp27;
							int tmp28;
							{
								int tmp29 = (readPosition)++;
								int pos = tmp29;
								tmp28 = pixels->b->__get(pos);
							}
							a = tmp28;
							int tmp29;
							{
								int tmp30 = (readPosition)++;
								int pos = tmp30;
								tmp29 = pixels->b->__get(pos);
							}
							r = tmp29;
							int tmp30;
							{
								int tmp31 = (readPosition)++;
								int pos = tmp31;
								tmp30 = pixels->b->__get(pos);
							}
							g = tmp30;
							int tmp31;
							{
								int tmp32 = (readPosition)++;
								int pos = tmp32;
								tmp31 = pixels->b->__get(pos);
							}
							b = tmp31;
							{
								int tmp32 = (position)++;
								int pos = tmp32;
								int tmp33 = b;
								data->b[pos] = tmp33;
							}
							{
								int tmp32 = (position)++;
								int pos = tmp32;
								int tmp33 = g;
								data->b[pos] = tmp33;
							}
							{
								int tmp32 = (position)++;
								int pos = tmp32;
								int tmp33 = r;
								data->b[pos] = tmp33;
							}
							{
								int tmp32 = (position)++;
								int pos = tmp32;
								int tmp33 = a;
								data->b[pos] = tmp33;
							}
						}
					}
				}
			}
			;break;
			case (int)2: {
				int tmp16 = (image->width * image->height);
				::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);
				::haxe::io::Bytes andMask = tmp17;
				int maskPosition = (int)0;
				{
					int _g1 = (int)0;
					int _g = image->height;
					while((true)){
						bool tmp18 = (_g1 < _g);
						bool tmp19 = !(tmp18);
						if ((tmp19)){
							break;
						}
						int tmp20 = (_g1)++;
						int y = tmp20;
						int tmp21 = (image->height - (int)1);
						int tmp22 = y;
						int tmp23 = (tmp21 - tmp22);
						int tmp24 = (tmp23 * (int)4);
						int tmp25 = image->width;
						int tmp26 = (tmp24 * tmp25);
						readPosition = tmp26;
						{
							int _g3 = (int)0;
							int _g2 = image->width;
							while((true)){
								bool tmp27 = (_g3 < _g2);
								bool tmp28 = !(tmp27);
								if ((tmp28)){
									break;
								}
								int tmp29 = (_g3)++;
								int x = tmp29;
								int tmp30;
								{
									int tmp31 = (readPosition)++;
									int pos = tmp31;
									tmp30 = pixels->b->__get(pos);
								}
								a = tmp30;
								int tmp31;
								{
									int tmp32 = (readPosition)++;
									int pos = tmp32;
									tmp31 = pixels->b->__get(pos);
								}
								r = tmp31;
								int tmp32;
								{
									int tmp33 = (readPosition)++;
									int pos = tmp33;
									tmp32 = pixels->b->__get(pos);
								}
								g = tmp32;
								int tmp33;
								{
									int tmp34 = (readPosition)++;
									int pos = tmp34;
									tmp33 = pixels->b->__get(pos);
								}
								b = tmp33;
								{
									int tmp34 = (position)++;
									int pos = tmp34;
									int tmp35 = b;
									data->b[pos] = tmp35;
								}
								{
									int tmp34 = (position)++;
									int pos = tmp34;
									int tmp35 = g;
									data->b[pos] = tmp35;
								}
								{
									int tmp34 = (position)++;
									int pos = tmp34;
									int tmp35 = r;
									data->b[pos] = tmp35;
								}
								{
									int tmp34 = (position)++;
									int pos = tmp34;
									int tmp35 = a;
									data->b[pos] = tmp35;
								}
								{
									int tmp34 = (maskPosition)++;
									int pos = tmp34;
									andMask->b[pos] = (int)0;
								}
							}
						}
					}
				}
				int tmp18 = position;
				::haxe::io::Bytes tmp19 = andMask;
				int tmp20 = (image->width * image->height);
				data->blit(tmp18,tmp19,(int)0,tmp20);
			}
			;break;
			case (int)0: {
				int _g1 = (int)0;
				int _g = image->height;
				while((true)){
					bool tmp16 = (_g1 < _g);
					bool tmp17 = !(tmp16);
					if ((tmp17)){
						break;
					}
					int tmp18 = (_g1)++;
					int y = tmp18;
					int tmp19 = (image->height - (int)1);
					int tmp20 = y;
					int tmp21 = (tmp19 - tmp20);
					int tmp22 = (tmp21 * (int)4);
					int tmp23 = image->width;
					int tmp24 = (tmp22 * tmp23);
					readPosition = tmp24;
					{
						int _g3 = (int)0;
						int _g2 = image->width;
						while((true)){
							bool tmp25 = (_g3 < _g2);
							bool tmp26 = !(tmp25);
							if ((tmp26)){
								break;
							}
							int tmp27 = (_g3)++;
							int x = tmp27;
							int tmp28;
							{
								int tmp29 = (readPosition)++;
								int pos = tmp29;
								tmp28 = pixels->b->__get(pos);
							}
							a = tmp28;
							int tmp29;
							{
								int tmp30 = (readPosition)++;
								int pos = tmp30;
								tmp29 = pixels->b->__get(pos);
							}
							r = tmp29;
							int tmp30;
							{
								int tmp31 = (readPosition)++;
								int pos = tmp31;
								tmp30 = pixels->b->__get(pos);
							}
							g = tmp30;
							int tmp31;
							{
								int tmp32 = (readPosition)++;
								int pos = tmp32;
								tmp31 = pixels->b->__get(pos);
							}
							b = tmp31;
							{
								int tmp32 = (position)++;
								int pos = tmp32;
								int tmp33 = b;
								data->b[pos] = tmp33;
							}
							{
								int tmp32 = (position)++;
								int pos = tmp32;
								int tmp33 = g;
								data->b[pos] = tmp33;
							}
							{
								int tmp32 = (position)++;
								int pos = tmp32;
								int tmp33 = r;
								data->b[pos] = tmp33;
							}
						}
					}
					{
						int _g3 = (int)0;
						int tmp25 = (image->width * (int)3);
						int tmp26 = hx::Mod(tmp25,(int)4);
						int _g2 = tmp26;
						while((true)){
							bool tmp27 = (_g3 < _g2);
							bool tmp28 = !(tmp27);
							if ((tmp28)){
								break;
							}
							int tmp29 = (_g3)++;
							int i = tmp29;
							{
								int tmp30 = (position)++;
								int pos = tmp30;
								data->b[pos] = (int)0;
							}
						}
					}
				}
			}
			;break;
			default: {
			}
		}
	}
	else{
	}
	::haxe::io::Bytes tmp16 = data;
	return tmp16;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BMP_obj,encode,return )


BMP_obj::BMP_obj()
{
}

bool BMP_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BMP_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BMP_obj::__mClass,"__mClass");
};

#endif

hx::Class BMP_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	::String(null()) };

void BMP_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.format.BMP","\x58","\xee","\xa1","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BMP_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BMP_obj >;
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
