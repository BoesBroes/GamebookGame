#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFTFontFace_CairoFTFontFace_Impl_
#include <lime/graphics/cairo/_CairoFTFontFace/CairoFTFontFace_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFontOptions_CairoFontOptions_Impl_
#include <lime/graphics/cairo/_CairoFontOptions/CairoFontOptions_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoTextField
#include <openfl/_internal/renderer/cairo/CairoTextField.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextEngine
#include <openfl/_internal/text/TextEngine.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextLayoutGroup
#include <openfl/_internal/text/TextLayoutGroup.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_GlowFilter
#include <openfl/filters/GlowFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoTextField_obj::__construct()
{
	return null();
}

//CairoTextField_obj::~CairoTextField_obj() { }

Dynamic CairoTextField_obj::__CreateEmpty() { return  new CairoTextField_obj; }
hx::ObjectPtr< CairoTextField_obj > CairoTextField_obj::__new()
{  hx::ObjectPtr< CairoTextField_obj > _result_ = new CairoTextField_obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoTextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoTextField_obj > _result_ = new CairoTextField_obj();
	_result_->__construct();
	return _result_;}

Void CairoTextField_obj::render( ::openfl::text::TextField textField,::openfl::_internal::renderer::RenderSession renderSession,::openfl::geom::Matrix transform){
{
		::openfl::_internal::text::TextEngine textEngine = textField->__textEngine;
		::openfl::geom::Rectangle bounds = textEngine->bounds;
		::openfl::display::Graphics graphics = textField->__graphics;
		::lime::graphics::cairo::Cairo cairo = graphics->__cairo;
		bool tmp = textField->__dirty;
		if ((tmp)){
			textField->__updateLayout();
			bool tmp1 = (graphics->__bounds == null());
			if ((tmp1)){
				::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());
				graphics->__bounds = tmp2;
			}
			::openfl::geom::Rectangle tmp2 = bounds;
			graphics->__bounds->copyFrom(tmp2);
		}
		graphics->__update();
		int width = graphics->__width;
		int height = graphics->__height;
		bool tmp1 = textEngine->border;
		bool tmp2 = !(tmp1);
		bool tmp3 = tmp2;
		bool tmp4;
		if ((tmp3)){
			tmp4 = textEngine->background;
		}
		else{
			tmp4 = true;
		}
		bool tmp5 = !(tmp4);
		bool tmp6;
		if ((tmp5)){
			bool tmp7 = (textEngine->text != null());
			bool tmp8 = tmp7;
			bool tmp9 = tmp8;
			if ((tmp9)){
				tmp6 = (textEngine->text != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			}
			else{
				tmp6 = false;
			}
		}
		else{
			tmp6 = true;
		}
		bool renderable = tmp6;
		bool tmp7 = (cairo != null());
		if ((tmp7)){
			Dynamic tmp8 = graphics->__bitmap->getSurface();
			Dynamic surface = tmp8;
			bool tmp9 = renderable;
			bool tmp10 = tmp9;
			bool tmp11 = !(tmp10);
			bool tmp12 = !(tmp11);
			bool tmp13;
			if ((tmp12)){
				bool tmp14 = graphics->__dirty;
				bool tmp15 = tmp14;
				if ((tmp15)){
					int tmp16 = width;
					Dynamic tmp17 = surface;
					Dynamic tmp18 = tmp17;
					Dynamic tmp19 = tmp18;
					int tmp20 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_width(tmp19);
					int tmp21 = tmp20;
					int tmp22 = tmp21;
					bool tmp23 = (tmp16 != tmp22);
					bool tmp24 = tmp23;
					bool tmp25 = tmp24;
					bool tmp26 = tmp25;
					bool tmp27 = tmp26;
					bool tmp28 = !(tmp27);
					bool tmp29 = tmp28;
					bool tmp30 = tmp29;
					bool tmp31 = tmp30;
					bool tmp32 = tmp31;
					if ((tmp32)){
						int tmp33 = height;
						Dynamic tmp34 = surface;
						Dynamic tmp35 = tmp34;
						Dynamic tmp36 = tmp35;
						Dynamic tmp37 = tmp36;
						int tmp38 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_height(tmp37);
						int tmp39 = tmp38;
						int tmp40 = tmp39;
						int tmp41 = tmp40;
						tmp13 = (tmp33 != tmp41);
					}
					else{
						tmp13 = true;
					}
				}
				else{
					tmp13 = false;
				}
			}
			else{
				tmp13 = true;
			}
			if ((tmp13)){
				graphics->__cairo = null();
				graphics->__bitmap = null();
				graphics->__visible = false;
				cairo = null();
			}
		}
		bool tmp8 = (width <= (int)0);
		bool tmp9 = !(tmp8);
		bool tmp10 = tmp9;
		bool tmp11;
		if ((tmp10)){
			tmp11 = (height <= (int)0);
		}
		else{
			tmp11 = true;
		}
		bool tmp12 = !(tmp11);
		bool tmp13 = tmp12;
		bool tmp14;
		if ((tmp13)){
			bool tmp15 = textField->__dirty;
			bool tmp16 = tmp15;
			bool tmp17 = tmp16;
			bool tmp18 = tmp17;
			bool tmp19 = !(tmp18);
			bool tmp20 = tmp19;
			bool tmp21 = tmp20;
			bool tmp22 = tmp21;
			bool tmp23 = tmp22;
			if ((tmp23)){
				bool tmp24 = graphics->__dirty;
				bool tmp25 = tmp24;
				bool tmp26 = tmp25;
				bool tmp27 = tmp26;
				tmp14 = !(tmp27);
			}
			else{
				tmp14 = false;
			}
		}
		else{
			tmp14 = true;
		}
		bool tmp15 = !(tmp14);
		bool tmp16;
		if ((tmp15)){
			bool tmp17 = renderable;
			bool tmp18 = tmp17;
			tmp16 = !(tmp18);
		}
		else{
			tmp16 = true;
		}
		if ((tmp16)){
			textField->__dirty = false;
			return null();
		}
		bool tmp17 = (cairo == null());
		if ((tmp17)){
			::openfl::display::BitmapData tmp18 = ::openfl::display::BitmapData_obj::__new(width,height,true,(int)0);
			::openfl::display::BitmapData bitmap = tmp18;
			Dynamic tmp19 = bitmap->getSurface();
			Dynamic surface = tmp19;
			::lime::graphics::cairo::Cairo tmp20 = ::lime::graphics::cairo::Cairo_obj::__new(surface);
			graphics->__cairo = tmp20;
			graphics->__visible = true;
			graphics->__managed = true;
			graphics->__bitmap = bitmap;
			cairo = graphics->__cairo;
			Dynamic tmp21 = ::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::_new();
			Dynamic options = tmp21;
			bool tmp22 = (textEngine->antiAliasType == ((Dynamic)((int)0)));
			bool tmp23;
			if ((tmp22)){
				tmp23 = (textEngine->sharpness == (int)400);
			}
			else{
				tmp23 = false;
			}
			if ((tmp23)){
				Dynamic tmp24 = options;
				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintStyle(tmp24,(int)1);
				Dynamic tmp25 = options;
				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintMetrics(tmp25,(int)1);
				Dynamic tmp26 = options;
				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_antialias(tmp26,(int)1);
			}
			else{
				Dynamic tmp24 = options;
				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintStyle(tmp24,(int)2);
				Dynamic tmp25 = options;
				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintMetrics(tmp25,(int)1);
				Dynamic tmp26 = options;
				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_antialias(tmp26,(int)5);
			}
			Dynamic tmp24 = options;
			cairo->set_fontOptions(tmp24);
		}
		bool tmp18 = false;
		bool tmp19;
		if ((tmp18)){
			tmp19 = renderSession->roundPixels;
		}
		else{
			tmp19 = true;
		}
		if ((tmp19)){
			::lime::math::Matrix3 tmp20 = graphics->__renderTransform->__toMatrix3();
			::lime::math::Matrix3 matrix = tmp20;
			Float tmp21 = matrix->tx;
			int tmp22 = ::Math_obj::round(tmp21);
			matrix->tx = tmp22;
			Float tmp23 = matrix->ty;
			int tmp24 = ::Math_obj::round(tmp23);
			matrix->ty = tmp24;
			::lime::math::Matrix3 tmp25 = matrix;
			cairo->set_matrix(tmp25);
		}
		else{
			::lime::math::Matrix3 tmp20 = graphics->__renderTransform->__toMatrix3();
			cairo->set_matrix(tmp20);
		}
		bool tmp20 = textEngine->border;
		if ((tmp20)){
			Float tmp21 = (bounds->width - (int)1);
			int tmp22 = ::Std_obj::_int(tmp21);
			Float tmp23 = (bounds->height - (int)1);
			int tmp24 = ::Std_obj::_int(tmp23);
			cairo->rectangle(((Float)0.5),((Float)0.5),tmp22,tmp24);
		}
		else{
			Float tmp21 = bounds->width;
			Float tmp22 = bounds->height;
			cairo->rectangle((int)0,(int)0,tmp21,tmp22);
		}
		bool tmp21 = textEngine->background;
		bool tmp22 = !(tmp21);
		if ((tmp22)){
			cairo->set_operator((int)0);
			cairo->paint();
			cairo->set_operator((int)2);
		}
		else{
			int color = textEngine->backgroundColor;
			int tmp23 = (int(color) & int((int)16711680));
			int tmp24 = hx::UShr(tmp23,(int)16);
			Float tmp25 = (Float(tmp24) / Float((int)255));
			Float r = tmp25;
			int tmp26 = (int(color) & int((int)65280));
			int tmp27 = hx::UShr(tmp26,(int)8);
			Float tmp28 = (Float(tmp27) / Float((int)255));
			Float g = tmp28;
			int tmp29 = (int(color) & int((int)255));
			Float tmp30 = (Float(tmp29) / Float((int)255));
			Float b = tmp30;
			Float tmp31 = r;
			Float tmp32 = g;
			Float tmp33 = b;
			cairo->setSourceRGB(tmp31,tmp32,tmp33);
			cairo->fillPreserve();
		}
		bool tmp23 = textEngine->border;
		if ((tmp23)){
			int color = textEngine->borderColor;
			int tmp24 = (int(color) & int((int)16711680));
			int tmp25 = hx::UShr(tmp24,(int)16);
			Float tmp26 = (Float(tmp25) / Float((int)255));
			Float r = tmp26;
			int tmp27 = (int(color) & int((int)65280));
			int tmp28 = hx::UShr(tmp27,(int)8);
			Float tmp29 = (Float(tmp28) / Float((int)255));
			Float g = tmp29;
			int tmp30 = (int(color) & int((int)255));
			Float tmp31 = (Float(tmp30) / Float((int)255));
			Float b = tmp31;
			Float tmp32 = r;
			Float tmp33 = g;
			Float tmp34 = b;
			cairo->setSourceRGB(tmp32,tmp33,tmp34);
			cairo->set_lineWidth((int)1);
			cairo->stroke();
		}
		bool tmp24 = (textEngine->text != null());
		bool tmp25;
		if ((tmp24)){
			tmp25 = (textEngine->text != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			tmp25 = false;
		}
		if ((tmp25)){
			Float tmp26 = bounds->width;
			bool tmp27 = textField->get_border();
			int tmp28;
			if ((tmp27)){
				tmp28 = (int)1;
			}
			else{
				tmp28 = (int)0;
			}
			Float tmp29 = (tmp26 - tmp28);
			Float tmp30 = bounds->height;
			bool tmp31 = textField->get_border();
			int tmp32;
			if ((tmp31)){
				tmp32 = (int)1;
			}
			else{
				tmp32 = (int)0;
			}
			Float tmp33 = (tmp30 - tmp32);
			cairo->rectangle((int)0,(int)0,tmp29,tmp33);
			cairo->clip();
			::String text = textEngine->text;
			int tmp34 = textField->get_scrollH();
			int tmp35 = -(tmp34);
			int scrollX = tmp35;
			Float scrollY = ((Float)0.0);
			{
				int _g1 = (int)0;
				int tmp36 = textField->get_scrollV();
				int tmp37 = (tmp36 - (int)1);
				int _g = tmp37;
				while((true)){
					bool tmp38 = (_g1 < _g);
					bool tmp39 = !(tmp38);
					if ((tmp39)){
						break;
					}
					int tmp40 = (_g1)++;
					int i = tmp40;
					int tmp41 = i;
					Float tmp42 = textEngine->lineHeights->get(tmp41);
					hx::SubEq(scrollY,tmp42);
				}
			}
			Dynamic color;
			Float r;
			Float g;
			Float b;
			::openfl::text::Font font;
			int size;
			Float advance;
			{
				int _g = (int)0;
				::openfl::_Vector::ObjectVector _g1 = textEngine->layoutGroups;
				while((true)){
					int tmp36 = _g;
					int tmp37 = _g1->get_length();
					bool tmp38 = (tmp36 < tmp37);
					bool tmp39 = !(tmp38);
					if ((tmp39)){
						break;
					}
					int tmp40 = _g;
					::openfl::_internal::text::TextLayoutGroup tmp41 = _g1->get(tmp40);
					::openfl::_internal::text::TextLayoutGroup group = tmp41;
					++(_g);
					int tmp42 = group->lineIndex;
					int tmp43 = textField->get_scrollV();
					int tmp44 = (tmp43 - (int)1);
					bool tmp45 = (tmp42 < tmp44);
					if ((tmp45)){
						continue;
					}
					int tmp46 = group->lineIndex;
					int tmp47 = textField->get_scrollV();
					int tmp48 = textEngine->bottomScrollV;
					int tmp49 = (tmp47 + tmp48);
					int tmp50 = (tmp49 - (int)2);
					bool tmp51 = (tmp46 > tmp50);
					if ((tmp51)){
						break;
					}
					Dynamic tmp52 = group->format->color;
					color = tmp52;
					int tmp53 = (int(color) & int((int)16711680));
					int tmp54 = hx::UShr(tmp53,(int)16);
					Float tmp55 = (Float(tmp54) / Float((int)255));
					r = tmp55;
					int tmp56 = (int(color) & int((int)65280));
					int tmp57 = hx::UShr(tmp56,(int)8);
					Float tmp58 = (Float(tmp57) / Float((int)255));
					g = tmp58;
					int tmp59 = (int(color) & int((int)255));
					Float tmp60 = (Float(tmp59) / Float((int)255));
					b = tmp60;
					Float tmp61 = r;
					Float tmp62 = g;
					Float tmp63 = b;
					cairo->setSourceRGB(tmp61,tmp62,tmp63);
					::openfl::text::TextFormat tmp64 = group->format;
					::openfl::text::Font tmp65 = ::openfl::_internal::text::TextEngine_obj::getFontInstance(tmp64);
					font = tmp65;
					bool tmp66 = (font != null());
					bool tmp67;
					if ((tmp66)){
						Dynamic tmp68 = group->format->size;
						Dynamic tmp69 = tmp68;
						tmp67 = (tmp69 != null());
					}
					else{
						tmp67 = false;
					}
					if ((tmp67)){
						bool tmp68 = (textEngine->__cairoFont != null());
						if ((tmp68)){
							bool tmp69 = (textEngine->__font != font);
							if ((tmp69)){
								textEngine->__cairoFont = null();
							}
						}
						bool tmp69 = (textEngine->__cairoFont == null());
						if ((tmp69)){
							textEngine->__font = font;
							::openfl::text::Font tmp70 = font;
							Dynamic tmp71 = ::lime::graphics::cairo::_CairoFTFontFace::CairoFTFontFace_Impl__obj::create(tmp70,(int)0);
							textEngine->__cairoFont = tmp71;
						}
						Dynamic tmp70 = textEngine->__cairoFont;
						cairo->set_fontFace(tmp70);
						Dynamic tmp71 = group->format->size;
						int tmp72 = ::Std_obj::_int(tmp71);
						size = tmp72;
						int tmp73 = size;
						cairo->setFontSize(tmp73);
						Float tmp74 = (group->offsetX + scrollX);
						Float tmp75 = (group->offsetY + group->ascent);
						Float tmp76 = scrollY;
						Float tmp77 = (tmp75 + tmp76);
						cairo->moveTo(tmp74,tmp77);
						bool usedHack = false;
						bool tmp78 = (textField->__filters != null());
						bool tmp79;
						if ((tmp78)){
							int tmp80 = textField->__filters->length;
							int tmp81 = tmp80;
							tmp79 = (tmp81 > (int)0);
						}
						else{
							tmp79 = false;
						}
						if ((tmp79)){
							::openfl::filters::BitmapFilter tmp80 = textField->__filters->__get((int)0).StaticCast< ::openfl::filters::BitmapFilter >();
							bool tmp81 = ::Std_obj::is(tmp80,hx::ClassOf< ::openfl::filters::GlowFilter >());
							if ((tmp81)){
								int tmp82 = group->startIndex;
								int tmp83 = group->endIndex;
								::String tmp84 = text.substring(tmp82,tmp83);
								cairo->textPath(tmp84);
								::openfl::filters::BitmapFilter tmp85 = textField->__filters->__get((int)0).StaticCast< ::openfl::filters::BitmapFilter >();
								::openfl::filters::GlowFilter glowFilter = ((::openfl::filters::GlowFilter)(tmp85));
								color = glowFilter->color;
								int tmp86 = (int(color) & int((int)16711680));
								int tmp87 = hx::UShr(tmp86,(int)16);
								Float tmp88 = (Float(tmp87) / Float((int)255));
								r = tmp88;
								int tmp89 = (int(color) & int((int)65280));
								int tmp90 = hx::UShr(tmp89,(int)8);
								Float tmp91 = (Float(tmp90) / Float((int)255));
								g = tmp91;
								int tmp92 = (int(color) & int((int)255));
								Float tmp93 = (Float(tmp92) / Float((int)255));
								b = tmp93;
								Float tmp94 = r;
								Float tmp95 = g;
								Float tmp96 = b;
								Float tmp97 = glowFilter->alpha;
								cairo->setSourceRGBA(tmp94,tmp95,tmp96,tmp97);
								Float tmp98 = glowFilter->blurX;
								Float tmp99 = glowFilter->blurY;
								Float tmp100 = ::Math_obj::max(tmp98,tmp99);
								cairo->set_lineWidth(tmp100);
								cairo->strokePreserve();
								Dynamic tmp101 = group->format->color;
								color = tmp101;
								int tmp102 = (int(color) & int((int)16711680));
								int tmp103 = hx::UShr(tmp102,(int)16);
								Float tmp104 = (Float(tmp103) / Float((int)255));
								r = tmp104;
								int tmp105 = (int(color) & int((int)65280));
								int tmp106 = hx::UShr(tmp105,(int)8);
								Float tmp107 = (Float(tmp106) / Float((int)255));
								g = tmp107;
								int tmp108 = (int(color) & int((int)255));
								Float tmp109 = (Float(tmp108) / Float((int)255));
								b = tmp109;
								Float tmp110 = r;
								Float tmp111 = g;
								Float tmp112 = b;
								cairo->setSourceRGB(tmp110,tmp111,tmp112);
								cairo->fillPreserve();
								usedHack = true;
							}
						}
						bool tmp80 = usedHack;
						bool tmp81 = !(tmp80);
						if ((tmp81)){
							int tmp82 = group->startIndex;
							int tmp83 = group->endIndex;
							::String tmp84 = text.substring(tmp82,tmp83);
							cairo->showText(tmp84);
						}
						int tmp82 = textField->__caretIndex;
						int tmp83 = (int)-1;
						bool tmp84 = (tmp82 > tmp83);
						bool tmp85;
						if ((tmp84)){
							tmp85 = textEngine->selectable;
						}
						else{
							tmp85 = false;
						}
						if ((tmp85)){
							bool tmp86 = (textField->__selectionIndex == textField->__caretIndex);
							if ((tmp86)){
								bool tmp87 = textField->__showCursor;
								bool tmp88 = tmp87;
								bool tmp89;
								if ((tmp88)){
									tmp89 = (group->startIndex <= textField->__caretIndex);
								}
								else{
									tmp89 = false;
								}
								bool tmp90;
								if ((tmp89)){
									tmp90 = (group->endIndex >= textField->__caretIndex);
								}
								else{
									tmp90 = false;
								}
								if ((tmp90)){
									advance = ((Float)0.0);
									{
										int _g3 = (int)0;
										int tmp91 = (textField->__caretIndex - group->startIndex);
										int _g2 = tmp91;
										while((true)){
											bool tmp92 = (_g3 < _g2);
											bool tmp93 = !(tmp92);
											if ((tmp93)){
												break;
											}
											int tmp94 = (_g3)++;
											int i = tmp94;
											int tmp95 = group->advances->length;
											int tmp96 = i;
											bool tmp97 = (tmp95 <= tmp96);
											if ((tmp97)){
												break;
											}
											Float tmp98 = group->advances->__get(i);
											hx::AddEq(advance,tmp98);
										}
									}
									Float tmp91 = (group->offsetX + advance);
									int tmp92 = ::Math_obj::floor(tmp91);
									Float tmp93 = (tmp92 + ((Float)0.5));
									Float tmp94 = (group->offsetY + ((Float)0.5));
									cairo->moveTo(tmp93,tmp94);
									cairo->set_lineWidth((int)1);
									Float tmp95 = (group->offsetX + advance);
									int tmp96 = ::Math_obj::floor(tmp95);
									Float tmp97 = (tmp96 + ((Float)0.5));
									Float tmp98 = (group->offsetY + group->height);
									Float tmp99 = (tmp98 - (int)1);
									cairo->lineTo(tmp97,tmp99);
									cairo->stroke();
								}
							}
							else{
								bool tmp87 = (group->startIndex <= textField->__caretIndex);
								bool tmp88 = tmp87;
								bool tmp89;
								if ((tmp88)){
									tmp89 = (group->endIndex >= textField->__caretIndex);
								}
								else{
									tmp89 = false;
								}
								bool tmp90 = !(tmp89);
								bool tmp91 = tmp90;
								bool tmp92;
								if ((tmp91)){
									bool tmp93 = (group->startIndex <= textField->__selectionIndex);
									bool tmp94 = tmp93;
									bool tmp95 = tmp94;
									bool tmp96 = tmp95;
									bool tmp97 = tmp96;
									if ((tmp97)){
										tmp92 = (group->endIndex >= textField->__selectionIndex);
									}
									else{
										tmp92 = false;
									}
								}
								else{
									tmp92 = true;
								}
								bool tmp93 = !(tmp92);
								bool tmp94 = tmp93;
								bool tmp95;
								if ((tmp94)){
									bool tmp96 = (group->startIndex > textField->__caretIndex);
									bool tmp97 = tmp96;
									bool tmp98 = tmp97;
									bool tmp99 = tmp98;
									bool tmp100 = tmp99;
									if ((tmp100)){
										tmp95 = (group->endIndex < textField->__selectionIndex);
									}
									else{
										tmp95 = false;
									}
								}
								else{
									tmp95 = true;
								}
								bool tmp96 = !(tmp95);
								bool tmp97;
								if ((tmp96)){
									bool tmp98 = (group->startIndex > textField->__selectionIndex);
									bool tmp99 = tmp98;
									bool tmp100 = tmp99;
									if ((tmp100)){
										tmp97 = (group->endIndex < textField->__caretIndex);
									}
									else{
										tmp97 = false;
									}
								}
								else{
									tmp97 = true;
								}
								if ((tmp97)){
									int tmp98 = textField->__selectionIndex;
									int tmp99 = textField->__caretIndex;
									Float tmp100 = ::Math_obj::min(tmp98,tmp99);
									int tmp101 = ::Std_obj::_int(tmp100);
									int selectionStart = tmp101;
									int tmp102 = textField->__selectionIndex;
									int tmp103 = textField->__caretIndex;
									Float tmp104 = ::Math_obj::max(tmp102,tmp103);
									int tmp105 = ::Std_obj::_int(tmp104);
									int selectionEnd = tmp105;
									bool tmp106 = (group->startIndex > selectionStart);
									if ((tmp106)){
										selectionStart = group->startIndex;
									}
									bool tmp107 = (group->endIndex < selectionEnd);
									if ((tmp107)){
										selectionEnd = group->endIndex;
									}
									::openfl::geom::Rectangle start;
									::openfl::geom::Rectangle end;
									int tmp108 = selectionStart;
									::openfl::geom::Rectangle tmp109 = textField->getCharBoundaries(tmp108);
									start = tmp109;
									int tmp110 = selectionEnd;
									int tmp111 = textEngine->text.length;
									bool tmp112 = (tmp110 >= tmp111);
									if ((tmp112)){
										int tmp113 = textEngine->text.length;
										int tmp114 = (tmp113 - (int)1);
										::openfl::geom::Rectangle tmp115 = textField->getCharBoundaries(tmp114);
										end = tmp115;
										Float tmp116 = (end->width + (int)2);
										hx::AddEq(end->x,tmp116);
									}
									else{
										int tmp113 = selectionEnd;
										::openfl::geom::Rectangle tmp114 = textField->getCharBoundaries(tmp113);
										end = tmp114;
									}
									bool tmp113 = (start != null());
									bool tmp114;
									if ((tmp113)){
										tmp114 = (end != null());
									}
									else{
										tmp114 = false;
									}
									if ((tmp114)){
										cairo->setSourceRGB((int)0,(int)0,(int)0);
										Float tmp115 = start->x;
										Float tmp116 = start->y;
										Float tmp117 = (end->x - start->x);
										Float tmp118 = group->height;
										cairo->rectangle(tmp115,tmp116,tmp117,tmp118);
										cairo->fill();
										cairo->setSourceRGB((int)1,(int)1,(int)1);
										Float tmp119 = (scrollX + start->x);
										Float tmp120 = (group->offsetY + group->ascent);
										Float tmp121 = scrollY;
										Float tmp122 = (tmp120 + tmp121);
										cairo->moveTo(tmp119,tmp122);
										int tmp123 = selectionStart;
										int tmp124 = selectionEnd;
										::String tmp125 = text.substring(tmp123,tmp124);
										cairo->showText(tmp125);
									}
								}
							}
						}
					}
				}
			}
		}
		else{
			int tmp26 = textField->__caretIndex;
			int tmp27 = (int)-1;
			bool tmp28 = (tmp26 > tmp27);
			bool tmp29 = tmp28;
			bool tmp30;
			if ((tmp29)){
				tmp30 = textEngine->selectable;
			}
			else{
				tmp30 = false;
			}
			bool tmp31;
			if ((tmp30)){
				tmp31 = textField->__showCursor;
			}
			else{
				tmp31 = false;
			}
			if ((tmp31)){
				int tmp32 = textField->get_scrollH();
				int tmp33 = -(tmp32);
				int scrollX = tmp33;
				Float scrollY = ((Float)0.0);
				{
					int _g1 = (int)0;
					int tmp34 = textField->get_scrollV();
					int tmp35 = (tmp34 - (int)1);
					int _g = tmp35;
					while((true)){
						bool tmp36 = (_g1 < _g);
						bool tmp37 = !(tmp36);
						if ((tmp37)){
							break;
						}
						int tmp38 = (_g1)++;
						int i = tmp38;
						int tmp39 = i;
						Float tmp40 = textEngine->lineHeights->get(tmp39);
						hx::SubEq(scrollY,tmp40);
					}
				}
				::openfl::text::TextFormat tmp34 = textField->get_defaultTextFormat();
				Dynamic color = tmp34->color;
				int tmp35 = (int(color) & int((int)16711680));
				int tmp36 = hx::UShr(tmp35,(int)16);
				Float tmp37 = (Float(tmp36) / Float((int)255));
				Float r = tmp37;
				int tmp38 = (int(color) & int((int)65280));
				int tmp39 = hx::UShr(tmp38,(int)8);
				Float tmp40 = (Float(tmp39) / Float((int)255));
				Float g = tmp40;
				int tmp41 = (int(color) & int((int)255));
				Float tmp42 = (Float(tmp41) / Float((int)255));
				Float b = tmp42;
				Float tmp43 = r;
				Float tmp44 = g;
				Float tmp45 = b;
				cairo->setSourceRGB(tmp43,tmp44,tmp45);
				cairo->newPath();
				Float tmp46 = (scrollX + ((Float)2.5));
				Float tmp47 = (scrollY + ((Float)2.5));
				cairo->moveTo(tmp46,tmp47);
				cairo->set_lineWidth((int)1);
				Float tmp48 = (scrollX + ((Float)2.5));
				Float tmp49 = scrollY;
				::openfl::text::TextFormat tmp50 = textField->get_defaultTextFormat();
				Float tmp51 = ::openfl::_internal::text::TextEngine_obj::getFormatHeight(tmp50);
				Float tmp52 = (tmp49 + tmp51);
				Float tmp53 = (tmp52 - (int)1);
				cairo->lineTo(tmp48,tmp53);
				cairo->stroke();
				cairo->closePath();
			}
		}
		::lime::graphics::Image tmp26 = graphics->__bitmap->image;
		tmp26->dirty = true;
		::lime::graphics::Image tmp27 = graphics->__bitmap->image;
		(tmp27->version)++;
		textField->__dirty = false;
		graphics->set___dirty(false);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoTextField_obj,render,(void))


CairoTextField_obj::CairoTextField_obj()
{
}

bool CairoTextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoTextField_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoTextField_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoTextField_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void CairoTextField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoTextField","\x46","\x1d","\x84","\xa5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoTextField_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoTextField_obj >;
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
} // end namespace renderer
} // end namespace cairo
