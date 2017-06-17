#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
namespace lime{
namespace _backend{
namespace native{

Void NativeCFFI_obj::__construct()
{
	return null();
}

//NativeCFFI_obj::~NativeCFFI_obj() { }

Dynamic NativeCFFI_obj::__CreateEmpty() { return  new NativeCFFI_obj; }
hx::ObjectPtr< NativeCFFI_obj > NativeCFFI_obj::__new()
{  hx::ObjectPtr< NativeCFFI_obj > _result_ = new NativeCFFI_obj();
	_result_->__construct();
	return _result_;}

Dynamic NativeCFFI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeCFFI_obj > _result_ = new NativeCFFI_obj();
	_result_->__construct();
	return _result_;}

Dynamic NativeCFFI_obj::lime_application_create( Dynamic config){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_application_create.call(hx::DynamicPtr(config));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_application_create,return )

Void NativeCFFI_obj::lime_application_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_application_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_application_event_manager_register,(void))

int NativeCFFI_obj::lime_application_exec( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_application_exec.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_application_exec,return )

Void NativeCFFI_obj::lime_application_init( Dynamic handle){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_application_init.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_application_init,(void))

int NativeCFFI_obj::lime_application_quit( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_application_quit.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_application_quit,return )

Void NativeCFFI_obj::lime_application_set_frame_rate( Dynamic handle,Float value){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_application_set_frame_rate.call(hx::DynamicPtr(handle),value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_application_set_frame_rate,(void))

bool NativeCFFI_obj::lime_application_update( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_application_update.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_application_update,return )

Dynamic NativeCFFI_obj::lime_audio_load( Dynamic data,Dynamic buffer){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_audio_load.call(hx::DynamicPtr(data),hx::DynamicPtr(buffer));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_audio_load,return )

Dynamic NativeCFFI_obj::lime_bytes_from_data_pointer( Float data,int length){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_bytes_from_data_pointer.call(data,length);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_bytes_from_data_pointer,return )

Float NativeCFFI_obj::lime_bytes_get_data_pointer( Dynamic data){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_bytes_get_data_pointer.call(hx::DynamicPtr(data));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_bytes_get_data_pointer,return )

Float NativeCFFI_obj::lime_bytes_get_data_pointer_offset( Dynamic data,int offset){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_bytes_get_data_pointer_offset.call(hx::DynamicPtr(data),offset);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_bytes_get_data_pointer_offset,return )

Dynamic NativeCFFI_obj::lime_bytes_read_file( ::String path,Dynamic bytes){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_bytes_read_file.call(path,hx::DynamicPtr(bytes));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_bytes_read_file,return )

Float NativeCFFI_obj::lime_cffi_get_native_pointer( Dynamic ptr){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cffi_get_native_pointer.call(hx::DynamicPtr(ptr));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cffi_get_native_pointer,return )

Dynamic NativeCFFI_obj::lime_clipboard_get_text( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_clipboard_get_text.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeCFFI_obj,lime_clipboard_get_text,return )

Void NativeCFFI_obj::lime_clipboard_set_text( ::String text){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_clipboard_set_text.call(text);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_clipboard_set_text,(void))

Float NativeCFFI_obj::lime_data_pointer_offset( Float dataPointer,int offset){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_data_pointer_offset.call(dataPointer,offset);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_data_pointer_offset,return )

Dynamic NativeCFFI_obj::lime_deflate_compress( Dynamic data,Dynamic bytes){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_deflate_compress.call(hx::DynamicPtr(data),hx::DynamicPtr(bytes));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_deflate_compress,return )

Dynamic NativeCFFI_obj::lime_deflate_decompress( Dynamic data,Dynamic bytes){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_deflate_decompress.call(hx::DynamicPtr(data),hx::DynamicPtr(bytes));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_deflate_decompress,return )

Void NativeCFFI_obj::lime_drop_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_drop_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_drop_event_manager_register,(void))

Dynamic NativeCFFI_obj::lime_file_dialog_open_directory( ::String title,::String filter,::String defaultPath){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_file_dialog_open_directory.call(title,filter,defaultPath);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_file_dialog_open_directory,return )

Dynamic NativeCFFI_obj::lime_file_dialog_open_file( ::String title,::String filter,::String defaultPath){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_file_dialog_open_file.call(title,filter,defaultPath);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_file_dialog_open_file,return )

Dynamic NativeCFFI_obj::lime_file_dialog_open_files( ::String title,::String filter,::String defaultPath){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_file_dialog_open_files.call(title,filter,defaultPath);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_file_dialog_open_files,return )

Dynamic NativeCFFI_obj::lime_file_dialog_save_file( ::String title,::String filter,::String defaultPath){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_file_dialog_save_file.call(title,filter,defaultPath);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_file_dialog_save_file,return )

int NativeCFFI_obj::lime_font_get_ascender( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_get_ascender.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_font_get_ascender,return )

int NativeCFFI_obj::lime_font_get_descender( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_get_descender.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_font_get_descender,return )

Dynamic NativeCFFI_obj::lime_font_get_family_name( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_get_family_name.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_font_get_family_name,return )

int NativeCFFI_obj::lime_font_get_glyph_index( Dynamic handle,::String character){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_get_glyph_index.call(hx::DynamicPtr(handle),character);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_font_get_glyph_index,return )

Dynamic NativeCFFI_obj::lime_font_get_glyph_indices( Dynamic handle,::String characters){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_get_glyph_indices.call(hx::DynamicPtr(handle),characters);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_font_get_glyph_indices,return )

Dynamic NativeCFFI_obj::lime_font_get_glyph_metrics( Dynamic handle,int index){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_get_glyph_metrics.call(hx::DynamicPtr(handle),index);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_font_get_glyph_metrics,return )

int NativeCFFI_obj::lime_font_get_height( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_get_height.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_font_get_height,return )

int NativeCFFI_obj::lime_font_get_num_glyphs( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_get_num_glyphs.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_font_get_num_glyphs,return )

int NativeCFFI_obj::lime_font_get_underline_position( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_get_underline_position.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_font_get_underline_position,return )

int NativeCFFI_obj::lime_font_get_underline_thickness( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_get_underline_thickness.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_font_get_underline_thickness,return )

int NativeCFFI_obj::lime_font_get_units_per_em( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_get_units_per_em.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_font_get_units_per_em,return )

Dynamic NativeCFFI_obj::lime_font_load( Dynamic data){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_load.call(hx::DynamicPtr(data));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_font_load,return )

Dynamic NativeCFFI_obj::lime_font_outline_decompose( Dynamic handle,int size){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_outline_decompose.call(hx::DynamicPtr(handle),size);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_font_outline_decompose,return )

bool NativeCFFI_obj::lime_font_render_glyph( Dynamic handle,int index,Dynamic data){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_render_glyph.call(hx::DynamicPtr(handle),index,hx::DynamicPtr(data));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_font_render_glyph,return )

bool NativeCFFI_obj::lime_font_render_glyphs( Dynamic handle,Dynamic indices,Dynamic data){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_render_glyphs.call(hx::DynamicPtr(handle),hx::DynamicPtr(indices),hx::DynamicPtr(data));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_font_render_glyphs,return )

Void NativeCFFI_obj::lime_font_set_size( Dynamic handle,int size){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_font_set_size.call(hx::DynamicPtr(handle),size);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_font_set_size,(void))

Void NativeCFFI_obj::lime_gamepad_add_mappings( Dynamic mappings){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gamepad_add_mappings.call(hx::DynamicPtr(mappings));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gamepad_add_mappings,(void))

Dynamic NativeCFFI_obj::lime_gamepad_get_device_guid( int id){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gamepad_get_device_guid.call(id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gamepad_get_device_guid,return )

Dynamic NativeCFFI_obj::lime_gamepad_get_device_name( int id){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gamepad_get_device_name.call(id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gamepad_get_device_name,return )

Void NativeCFFI_obj::lime_gamepad_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gamepad_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gamepad_event_manager_register,(void))

Dynamic NativeCFFI_obj::lime_gzip_compress( Dynamic data,Dynamic bytes){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gzip_compress.call(hx::DynamicPtr(data),hx::DynamicPtr(bytes));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gzip_compress,return )

Dynamic NativeCFFI_obj::lime_gzip_decompress( Dynamic data,Dynamic bytes){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gzip_decompress.call(hx::DynamicPtr(data),hx::DynamicPtr(bytes));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gzip_decompress,return )

Void NativeCFFI_obj::lime_haptic_vibrate( int period,int duration){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_haptic_vibrate.call(period,duration);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_haptic_vibrate,(void))

Dynamic NativeCFFI_obj::lime_image_encode( Dynamic data,int type,int quality,Dynamic bytes){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_encode.call(hx::DynamicPtr(data),type,quality,hx::DynamicPtr(bytes));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_image_encode,return )

Dynamic NativeCFFI_obj::lime_image_load( Dynamic data,Dynamic buffer){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_load.call(hx::DynamicPtr(data),hx::DynamicPtr(buffer));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_image_load,return )

Void NativeCFFI_obj::lime_image_data_util_color_transform( Dynamic image,Dynamic rect,Dynamic colorMatrix){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_data_util_color_transform.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),hx::DynamicPtr(colorMatrix));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_image_data_util_color_transform,(void))

Void NativeCFFI_obj::lime_image_data_util_copy_channel( Dynamic image,Dynamic sourceImage,Dynamic sourceRect,Dynamic destPoint,int srcChannel,int destChannel){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_data_util_copy_channel.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),srcChannel,destChannel);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(NativeCFFI_obj,lime_image_data_util_copy_channel,(void))

Void NativeCFFI_obj::lime_image_data_util_copy_pixels( Dynamic image,Dynamic sourceImage,Dynamic sourceRect,Dynamic destPoint,Dynamic alphaImage,Dynamic alphaPoint,bool mergeAlpha){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_data_util_copy_pixels.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),hx::DynamicPtr(alphaImage),hx::DynamicPtr(alphaPoint),mergeAlpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(NativeCFFI_obj,lime_image_data_util_copy_pixels,(void))

Void NativeCFFI_obj::lime_image_data_util_fill_rect( Dynamic image,Dynamic rect,int rg,int ba){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_data_util_fill_rect.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),rg,ba);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_image_data_util_fill_rect,(void))

Void NativeCFFI_obj::lime_image_data_util_flood_fill( Dynamic image,int x,int y,int rg,int ba){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_data_util_flood_fill.call(hx::DynamicPtr(image),x,y,rg,ba);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(NativeCFFI_obj,lime_image_data_util_flood_fill,(void))

Void NativeCFFI_obj::lime_image_data_util_get_pixels( Dynamic image,Dynamic rect,int format,Dynamic bytes){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_data_util_get_pixels.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),format,hx::DynamicPtr(bytes));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_image_data_util_get_pixels,(void))

Void NativeCFFI_obj::lime_image_data_util_merge( Dynamic image,Dynamic sourceImage,Dynamic sourceRect,Dynamic destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_data_util_merge.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(NativeCFFI_obj,lime_image_data_util_merge,(void))

Void NativeCFFI_obj::lime_image_data_util_multiply_alpha( Dynamic image){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_data_util_multiply_alpha.call(hx::DynamicPtr(image));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_image_data_util_multiply_alpha,(void))

Void NativeCFFI_obj::lime_image_data_util_resize( Dynamic image,Dynamic buffer,int width,int height){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_data_util_resize.call(hx::DynamicPtr(image),hx::DynamicPtr(buffer),width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_image_data_util_resize,(void))

Void NativeCFFI_obj::lime_image_data_util_set_format( Dynamic image,int format){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_data_util_set_format.call(hx::DynamicPtr(image),format);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_image_data_util_set_format,(void))

Void NativeCFFI_obj::lime_image_data_util_set_pixels( Dynamic image,Dynamic rect,Dynamic bytes,int format){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_data_util_set_pixels.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),hx::DynamicPtr(bytes),format);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_image_data_util_set_pixels,(void))

int NativeCFFI_obj::lime_image_data_util_threshold( Dynamic image,Dynamic sourceImage,Dynamic sourceRect,Dynamic destPoint,int operation,int thresholdRG,int thresholdBA,int colorRG,int colorBA,int maskRG,int maskBA,bool copySource){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_data_util_threshold.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),operation,thresholdRG,thresholdBA,colorRG,colorBA,maskRG,maskBA,copySource);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC12(NativeCFFI_obj,lime_image_data_util_threshold,return )

Void NativeCFFI_obj::lime_image_data_util_unmultiply_alpha( Dynamic image){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_data_util_unmultiply_alpha.call(hx::DynamicPtr(image));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_image_data_util_unmultiply_alpha,(void))

Dynamic NativeCFFI_obj::lime_joystick_get_device_guid( int id){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_joystick_get_device_guid.call(id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_joystick_get_device_guid,return )

Dynamic NativeCFFI_obj::lime_joystick_get_device_name( int id){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_joystick_get_device_name.call(id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_joystick_get_device_name,return )

int NativeCFFI_obj::lime_joystick_get_num_axes( int id){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_joystick_get_num_axes.call(id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_joystick_get_num_axes,return )

int NativeCFFI_obj::lime_joystick_get_num_buttons( int id){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_joystick_get_num_buttons.call(id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_joystick_get_num_buttons,return )

int NativeCFFI_obj::lime_joystick_get_num_hats( int id){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_joystick_get_num_hats.call(id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_joystick_get_num_hats,return )

int NativeCFFI_obj::lime_joystick_get_num_trackballs( int id){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_joystick_get_num_trackballs.call(id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_joystick_get_num_trackballs,return )

Void NativeCFFI_obj::lime_joystick_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_joystick_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_joystick_event_manager_register,(void))

Dynamic NativeCFFI_obj::lime_jpeg_decode_bytes( Dynamic data,bool decodeData,Dynamic buffer){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_jpeg_decode_bytes.call(hx::DynamicPtr(data),decodeData,hx::DynamicPtr(buffer));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_jpeg_decode_bytes,return )

Dynamic NativeCFFI_obj::lime_jpeg_decode_file( ::String path,bool decodeData,Dynamic buffer){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_jpeg_decode_file.call(path,decodeData,hx::DynamicPtr(buffer));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_jpeg_decode_file,return )

::cpp::Float32 NativeCFFI_obj::lime_key_code_from_scan_code( ::cpp::Float32 scanCode){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_key_code_from_scan_code.call(scanCode);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_key_code_from_scan_code,return )

::cpp::Float32 NativeCFFI_obj::lime_key_code_to_scan_code( ::cpp::Float32 keyCode){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_key_code_to_scan_code.call(keyCode);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_key_code_to_scan_code,return )

Void NativeCFFI_obj::lime_key_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_key_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_key_event_manager_register,(void))

Dynamic NativeCFFI_obj::lime_lzma_compress( Dynamic data,Dynamic bytes){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_lzma_compress.call(hx::DynamicPtr(data),hx::DynamicPtr(bytes));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_lzma_compress,return )

Dynamic NativeCFFI_obj::lime_lzma_decompress( Dynamic data,Dynamic bytes){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_lzma_decompress.call(hx::DynamicPtr(data),hx::DynamicPtr(bytes));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_lzma_decompress,return )

Void NativeCFFI_obj::lime_mouse_hide( ){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_mouse_hide.call();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeCFFI_obj,lime_mouse_hide,(void))

Void NativeCFFI_obj::lime_mouse_set_cursor( int cursor){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_mouse_set_cursor.call(cursor);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_mouse_set_cursor,(void))

Void NativeCFFI_obj::lime_mouse_set_lock( bool lock){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_mouse_set_lock.call(lock);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_mouse_set_lock,(void))

Void NativeCFFI_obj::lime_mouse_show( ){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_mouse_show.call();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeCFFI_obj,lime_mouse_show,(void))

Void NativeCFFI_obj::lime_mouse_warp( int x,int y,Dynamic window){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_mouse_warp.call(x,y,hx::DynamicPtr(window));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_mouse_warp,(void))

Void NativeCFFI_obj::lime_mouse_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_mouse_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_mouse_event_manager_register,(void))

Void NativeCFFI_obj::lime_neko_execute( ::String module){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_neko_execute.call(module);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_neko_execute,(void))

Dynamic NativeCFFI_obj::lime_png_decode_bytes( Dynamic data,bool decodeData,Dynamic buffer){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_png_decode_bytes.call(hx::DynamicPtr(data),decodeData,hx::DynamicPtr(buffer));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_png_decode_bytes,return )

Dynamic NativeCFFI_obj::lime_png_decode_file( ::String path,bool decodeData,Dynamic buffer){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_png_decode_file.call(path,decodeData,hx::DynamicPtr(buffer));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_png_decode_file,return )

Dynamic NativeCFFI_obj::lime_renderer_create( Dynamic window){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_renderer_create.call(hx::DynamicPtr(window));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_renderer_create,return )

Void NativeCFFI_obj::lime_renderer_flip( Dynamic handle){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_renderer_flip.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_renderer_flip,(void))

Float NativeCFFI_obj::lime_renderer_get_context( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_renderer_get_context.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_renderer_get_context,return )

Float NativeCFFI_obj::lime_renderer_get_scale( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_renderer_get_scale.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_renderer_get_scale,return )

Dynamic NativeCFFI_obj::lime_renderer_get_type( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_renderer_get_type.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_renderer_get_type,return )

Dynamic NativeCFFI_obj::lime_renderer_lock( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_renderer_lock.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_renderer_lock,return )

Void NativeCFFI_obj::lime_renderer_make_current( Dynamic handle){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_renderer_make_current.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_renderer_make_current,(void))

Dynamic NativeCFFI_obj::lime_renderer_read_pixels( Dynamic handle,Dynamic rect,Dynamic imageBuffer){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_renderer_read_pixels.call(hx::DynamicPtr(handle),hx::DynamicPtr(rect),hx::DynamicPtr(imageBuffer));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_renderer_read_pixels,return )

Void NativeCFFI_obj::lime_renderer_unlock( Dynamic handle){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_renderer_unlock.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_renderer_unlock,(void))

Void NativeCFFI_obj::lime_render_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_render_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_render_event_manager_register,(void))

Void NativeCFFI_obj::lime_sensor_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_sensor_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_sensor_event_manager_register,(void))

bool NativeCFFI_obj::lime_system_get_allow_screen_timeout( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_system_get_allow_screen_timeout.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeCFFI_obj,lime_system_get_allow_screen_timeout,return )

bool NativeCFFI_obj::lime_system_set_allow_screen_timeout( bool value){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_system_set_allow_screen_timeout.call(value);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_system_set_allow_screen_timeout,return )

Dynamic NativeCFFI_obj::lime_system_get_directory( int type,::String company,::String title){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_system_get_directory.call(type,company,title);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_system_get_directory,return )

Dynamic NativeCFFI_obj::lime_system_get_display( int index){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_system_get_display.call(index);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_system_get_display,return )

bool NativeCFFI_obj::lime_system_get_ios_tablet( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_system_get_ios_tablet.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeCFFI_obj,lime_system_get_ios_tablet,return )

int NativeCFFI_obj::lime_system_get_num_displays( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_system_get_num_displays.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeCFFI_obj,lime_system_get_num_displays,return )

Float NativeCFFI_obj::lime_system_get_timer( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_system_get_timer.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeCFFI_obj,lime_system_get_timer,return )

Void NativeCFFI_obj::lime_system_open_file( ::String path){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_system_open_file.call(path);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_system_open_file,(void))

Void NativeCFFI_obj::lime_system_open_url( ::String url,::String target){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_system_open_url.call(url,target);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_system_open_url,(void))

Void NativeCFFI_obj::lime_text_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_text_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_text_event_manager_register,(void))

Dynamic NativeCFFI_obj::lime_text_layout_create( int direction,::String script,::String language){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_text_layout_create.call(direction,script,language);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_text_layout_create,return )

Dynamic NativeCFFI_obj::lime_text_layout_position( Dynamic textHandle,Dynamic fontHandle,int size,::String textString,Dynamic data){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_text_layout_position.call(hx::DynamicPtr(textHandle),hx::DynamicPtr(fontHandle),size,textString,hx::DynamicPtr(data));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(NativeCFFI_obj,lime_text_layout_position,return )

Void NativeCFFI_obj::lime_text_layout_set_direction( Dynamic textHandle,int direction){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_text_layout_set_direction.call(hx::DynamicPtr(textHandle),direction);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_text_layout_set_direction,(void))

Void NativeCFFI_obj::lime_text_layout_set_language( Dynamic textHandle,::String language){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_text_layout_set_language.call(hx::DynamicPtr(textHandle),language);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_text_layout_set_language,(void))

Void NativeCFFI_obj::lime_text_layout_set_script( Dynamic textHandle,::String script){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_text_layout_set_script.call(hx::DynamicPtr(textHandle),script);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_text_layout_set_script,(void))

Void NativeCFFI_obj::lime_touch_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_touch_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_touch_event_manager_register,(void))

Void NativeCFFI_obj::lime_window_alert( Dynamic handle,::String message,::String title){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_alert.call(hx::DynamicPtr(handle),message,title);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_window_alert,(void))

Void NativeCFFI_obj::lime_window_close( Dynamic handle){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_close.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_window_close,(void))

Dynamic NativeCFFI_obj::lime_window_create( Dynamic application,int width,int height,int flags,::String title){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_create.call(hx::DynamicPtr(application),width,height,flags,title);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(NativeCFFI_obj,lime_window_create,return )

Void NativeCFFI_obj::lime_window_focus( Dynamic handle){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_focus.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_window_focus,(void))

int NativeCFFI_obj::lime_window_get_display( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_display.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_window_get_display,return )

Dynamic NativeCFFI_obj::lime_window_get_display_mode( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_display_mode.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_window_get_display_mode,return )

bool NativeCFFI_obj::lime_window_get_enable_text_events( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_enable_text_events.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_window_get_enable_text_events,return )

int NativeCFFI_obj::lime_window_get_height( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_height.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_window_get_height,return )

int NativeCFFI_obj::lime_window_get_id( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_id.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_window_get_id,return )

int NativeCFFI_obj::lime_window_get_width( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_width.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_window_get_width,return )

int NativeCFFI_obj::lime_window_get_x( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_x.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_window_get_x,return )

int NativeCFFI_obj::lime_window_get_y( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_y.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_window_get_y,return )

Void NativeCFFI_obj::lime_window_move( Dynamic handle,int x,int y){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_move.call(hx::DynamicPtr(handle),x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_window_move,(void))

Void NativeCFFI_obj::lime_window_resize( Dynamic handle,int width,int height){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_resize.call(hx::DynamicPtr(handle),width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_window_resize,(void))

bool NativeCFFI_obj::lime_window_set_borderless( Dynamic handle,bool borderless){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_borderless.call(hx::DynamicPtr(handle),borderless);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_window_set_borderless,return )

Dynamic NativeCFFI_obj::lime_window_set_display_mode( Dynamic handle,Dynamic displayMode){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_display_mode.call(hx::DynamicPtr(handle),hx::DynamicPtr(displayMode));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_window_set_display_mode,return )

Void NativeCFFI_obj::lime_window_set_enable_text_events( Dynamic handle,bool enabled){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_enable_text_events.call(hx::DynamicPtr(handle),enabled);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_window_set_enable_text_events,(void))

bool NativeCFFI_obj::lime_window_set_fullscreen( Dynamic handle,bool fullscreen){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_fullscreen.call(hx::DynamicPtr(handle),fullscreen);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_window_set_fullscreen,return )

Void NativeCFFI_obj::lime_window_set_icon( Dynamic handle,Dynamic buffer){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_icon.call(hx::DynamicPtr(handle),hx::DynamicPtr(buffer));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_window_set_icon,(void))

bool NativeCFFI_obj::lime_window_set_maximized( Dynamic handle,bool maximized){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_maximized.call(hx::DynamicPtr(handle),maximized);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_window_set_maximized,return )

bool NativeCFFI_obj::lime_window_set_minimized( Dynamic handle,bool minimized){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_minimized.call(hx::DynamicPtr(handle),minimized);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_window_set_minimized,return )

bool NativeCFFI_obj::lime_window_set_resizable( Dynamic handle,bool resizable){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_resizable.call(hx::DynamicPtr(handle),resizable);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_window_set_resizable,return )

Dynamic NativeCFFI_obj::lime_window_set_title( Dynamic handle,::String title){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_title.call(hx::DynamicPtr(handle),title);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_window_set_title,return )

Void NativeCFFI_obj::lime_window_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_window_event_manager_register,(void))

Dynamic NativeCFFI_obj::lime_zlib_compress( Dynamic data,Dynamic bytes){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_zlib_compress.call(hx::DynamicPtr(data),hx::DynamicPtr(bytes));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_zlib_compress,return )

Dynamic NativeCFFI_obj::lime_zlib_decompress( Dynamic data,Dynamic bytes){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_zlib_decompress.call(hx::DynamicPtr(data),hx::DynamicPtr(bytes));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_zlib_decompress,return )

Void NativeCFFI_obj::lime_al_buffer_data( Dynamic buffer,int format,Dynamic data,int size,int freq){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_buffer_data.call(hx::DynamicPtr(buffer),format,hx::DynamicPtr(data),size,freq);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(NativeCFFI_obj,lime_al_buffer_data,(void))

Void NativeCFFI_obj::lime_al_buffer3f( Dynamic buffer,int param,::cpp::Float32 value1,::cpp::Float32 value2,::cpp::Float32 value3){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_buffer3f.call(hx::DynamicPtr(buffer),param,value1,value2,value3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(NativeCFFI_obj,lime_al_buffer3f,(void))

Void NativeCFFI_obj::lime_al_buffer3i( Dynamic buffer,int param,int value1,int value2,int value3){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_buffer3i.call(hx::DynamicPtr(buffer),param,value1,value2,value3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(NativeCFFI_obj,lime_al_buffer3i,(void))

Void NativeCFFI_obj::lime_al_bufferf( Dynamic buffer,int param,::cpp::Float32 value){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_bufferf.call(hx::DynamicPtr(buffer),param,value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_al_bufferf,(void))

Void NativeCFFI_obj::lime_al_bufferfv( Dynamic buffer,int param,Dynamic values){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_bufferfv.call(hx::DynamicPtr(buffer),param,hx::DynamicPtr(values));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_al_bufferfv,(void))

Void NativeCFFI_obj::lime_al_bufferi( Dynamic buffer,int param,int value){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_bufferi.call(hx::DynamicPtr(buffer),param,value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_al_bufferi,(void))

Void NativeCFFI_obj::lime_al_bufferiv( Dynamic buffer,int param,Dynamic values){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_bufferiv.call(hx::DynamicPtr(buffer),param,hx::DynamicPtr(values));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_al_bufferiv,(void))

Void NativeCFFI_obj::lime_al_delete_buffer( Dynamic buffer){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_delete_buffer.call(hx::DynamicPtr(buffer));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_delete_buffer,(void))

Void NativeCFFI_obj::lime_al_delete_buffers( int n,Dynamic buffers){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_delete_buffers.call(n,hx::DynamicPtr(buffers));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_al_delete_buffers,(void))

Void NativeCFFI_obj::lime_al_delete_source( Dynamic source){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_delete_source.call(hx::DynamicPtr(source));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_delete_source,(void))

Void NativeCFFI_obj::lime_al_delete_sources( int n,Dynamic sources){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_delete_sources.call(n,hx::DynamicPtr(sources));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_al_delete_sources,(void))

Void NativeCFFI_obj::lime_al_disable( int capability){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_disable.call(capability);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_disable,(void))

Void NativeCFFI_obj::lime_al_distance_model( int distanceModel){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_distance_model.call(distanceModel);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_distance_model,(void))

Void NativeCFFI_obj::lime_al_doppler_factor( ::cpp::Float32 value){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_doppler_factor.call(value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_doppler_factor,(void))

Void NativeCFFI_obj::lime_al_doppler_velocity( ::cpp::Float32 value){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_doppler_velocity.call(value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_doppler_velocity,(void))

Void NativeCFFI_obj::lime_al_enable( int capability){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_enable.call(capability);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_enable,(void))

Dynamic NativeCFFI_obj::lime_al_gen_source( ){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_gen_source.call();
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeCFFI_obj,lime_al_gen_source,return )

cpp::ArrayBase NativeCFFI_obj::lime_al_gen_sources( int n){
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_gen_sources.call(n);
		::hx::Object * tmp = inVal;
		::hx::Object * tmp1 = hx::DynamicPtr(tmp);
		return Dynamic(tmp1);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_gen_sources,return )

bool NativeCFFI_obj::lime_al_get_boolean( int param){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_boolean.call(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_get_boolean,return )

Array< bool > NativeCFFI_obj::lime_al_get_booleanv( int param,int count){
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_booleanv.call(param,count);
		::hx::Object * tmp = inVal;
		::hx::Object * tmp1 = hx::DynamicPtr(tmp);
		return Dynamic(tmp1);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_al_get_booleanv,return )

Dynamic NativeCFFI_obj::lime_al_gen_buffer( ){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_gen_buffer.call();
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeCFFI_obj,lime_al_gen_buffer,return )

cpp::ArrayBase NativeCFFI_obj::lime_al_gen_buffers( int n){
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_gen_buffers.call(n);
		::hx::Object * tmp = inVal;
		::hx::Object * tmp1 = hx::DynamicPtr(tmp);
		return Dynamic(tmp1);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_gen_buffers,return )

Array< Float > NativeCFFI_obj::lime_al_get_buffer3f( Dynamic buffer,int param){
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_buffer3f.call(hx::DynamicPtr(buffer),param);
		::hx::Object * tmp = inVal;
		::hx::Object * tmp1 = hx::DynamicPtr(tmp);
		return Dynamic(tmp1);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_al_get_buffer3f,return )

Array< int > NativeCFFI_obj::lime_al_get_buffer3i( Dynamic buffer,int param){
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_buffer3i.call(hx::DynamicPtr(buffer),param);
		::hx::Object * tmp = inVal;
		::hx::Object * tmp1 = hx::DynamicPtr(tmp);
		return Dynamic(tmp1);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_al_get_buffer3i,return )

::cpp::Float32 NativeCFFI_obj::lime_al_get_bufferf( Dynamic buffer,int param){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_bufferf.call(hx::DynamicPtr(buffer),param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_al_get_bufferf,return )

Array< Float > NativeCFFI_obj::lime_al_get_bufferfv( Dynamic buffer,int param,int count){
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_bufferfv.call(hx::DynamicPtr(buffer),param,count);
		::hx::Object * tmp = inVal;
		::hx::Object * tmp1 = hx::DynamicPtr(tmp);
		return Dynamic(tmp1);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_al_get_bufferfv,return )

int NativeCFFI_obj::lime_al_get_bufferi( Dynamic buffer,int param){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_bufferi.call(hx::DynamicPtr(buffer),param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_al_get_bufferi,return )

Array< int > NativeCFFI_obj::lime_al_get_bufferiv( Dynamic buffer,int param,int count){
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_bufferiv.call(hx::DynamicPtr(buffer),param,count);
		::hx::Object * tmp = inVal;
		::hx::Object * tmp1 = hx::DynamicPtr(tmp);
		return Dynamic(tmp1);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_al_get_bufferiv,return )

Float NativeCFFI_obj::lime_al_get_double( int param){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_double.call(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_get_double,return )

Array< Float > NativeCFFI_obj::lime_al_get_doublev( int param,int count){
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_doublev.call(param,count);
		::hx::Object * tmp = inVal;
		::hx::Object * tmp1 = hx::DynamicPtr(tmp);
		return Dynamic(tmp1);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_al_get_doublev,return )

int NativeCFFI_obj::lime_al_get_enum_value( ::String ename){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_enum_value.call(ename);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_get_enum_value,return )

int NativeCFFI_obj::lime_al_get_error( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_error.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeCFFI_obj,lime_al_get_error,return )

::cpp::Float32 NativeCFFI_obj::lime_al_get_float( int param){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_float.call(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_get_float,return )

Array< Float > NativeCFFI_obj::lime_al_get_floatv( int param,int count){
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_floatv.call(param,count);
		::hx::Object * tmp = inVal;
		::hx::Object * tmp1 = hx::DynamicPtr(tmp);
		return Dynamic(tmp1);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_al_get_floatv,return )

int NativeCFFI_obj::lime_al_get_integer( int param){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_integer.call(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_get_integer,return )

Array< int > NativeCFFI_obj::lime_al_get_integerv( int param,int count){
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_integerv.call(param,count);
		::hx::Object * tmp = inVal;
		::hx::Object * tmp1 = hx::DynamicPtr(tmp);
		return Dynamic(tmp1);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_al_get_integerv,return )

Array< Float > NativeCFFI_obj::lime_al_get_listener3f( int param){
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_listener3f.call(param);
		::hx::Object * tmp = inVal;
		::hx::Object * tmp1 = hx::DynamicPtr(tmp);
		return Dynamic(tmp1);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_get_listener3f,return )

Array< int > NativeCFFI_obj::lime_al_get_listener3i( int param){
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_listener3i.call(param);
		::hx::Object * tmp = inVal;
		::hx::Object * tmp1 = hx::DynamicPtr(tmp);
		return Dynamic(tmp1);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_get_listener3i,return )

::cpp::Float32 NativeCFFI_obj::lime_al_get_listenerf( int param){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_listenerf.call(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_get_listenerf,return )

Array< Float > NativeCFFI_obj::lime_al_get_listenerfv( int param,int count){
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_listenerfv.call(param,count);
		::hx::Object * tmp = inVal;
		::hx::Object * tmp1 = hx::DynamicPtr(tmp);
		return Dynamic(tmp1);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_al_get_listenerfv,return )

int NativeCFFI_obj::lime_al_get_listeneri( int param){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_listeneri.call(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_get_listeneri,return )

Array< int > NativeCFFI_obj::lime_al_get_listeneriv( int param,int count){
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_listeneriv.call(param,count);
		::hx::Object * tmp = inVal;
		::hx::Object * tmp1 = hx::DynamicPtr(tmp);
		return Dynamic(tmp1);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_al_get_listeneriv,return )

Float NativeCFFI_obj::lime_al_get_proc_address( ::String fname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_proc_address.call(fname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_get_proc_address,return )

Array< Float > NativeCFFI_obj::lime_al_get_source3f( Dynamic source,int param){
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_source3f.call(hx::DynamicPtr(source),param);
		::hx::Object * tmp = inVal;
		::hx::Object * tmp1 = hx::DynamicPtr(tmp);
		return Dynamic(tmp1);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_al_get_source3f,return )

Array< int > NativeCFFI_obj::lime_al_get_source3i( Dynamic source,int param){
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_source3i.call(hx::DynamicPtr(source),param);
		::hx::Object * tmp = inVal;
		::hx::Object * tmp1 = hx::DynamicPtr(tmp);
		return Dynamic(tmp1);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_al_get_source3i,return )

::cpp::Float32 NativeCFFI_obj::lime_al_get_sourcef( Dynamic source,int param){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_sourcef.call(hx::DynamicPtr(source),param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_al_get_sourcef,return )

Array< Float > NativeCFFI_obj::lime_al_get_sourcefv( Dynamic source,int param,int count){
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_sourcefv.call(hx::DynamicPtr(source),param,count);
		::hx::Object * tmp = inVal;
		::hx::Object * tmp1 = hx::DynamicPtr(tmp);
		return Dynamic(tmp1);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_al_get_sourcefv,return )

Dynamic NativeCFFI_obj::lime_al_get_sourcei( Dynamic source,int param){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_sourcei.call(hx::DynamicPtr(source),param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_al_get_sourcei,return )

Array< int > NativeCFFI_obj::lime_al_get_sourceiv( Dynamic source,int param,int count){
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_sourceiv.call(hx::DynamicPtr(source),param,count);
		::hx::Object * tmp = inVal;
		::hx::Object * tmp1 = hx::DynamicPtr(tmp);
		return Dynamic(tmp1);
	}
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_al_get_sourceiv,return )

Dynamic NativeCFFI_obj::lime_al_get_string( int param){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_get_string.call(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_get_string,return )

bool NativeCFFI_obj::lime_al_is_buffer( Dynamic buffer){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_is_buffer.call(hx::DynamicPtr(buffer));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_is_buffer,return )

bool NativeCFFI_obj::lime_al_is_enabled( int capability){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_is_enabled.call(capability);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_is_enabled,return )

bool NativeCFFI_obj::lime_al_is_extension_present( ::String extname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_is_extension_present.call(extname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_is_extension_present,return )

bool NativeCFFI_obj::lime_al_is_source( Dynamic source){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_is_source.call(hx::DynamicPtr(source));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_is_source,return )

Void NativeCFFI_obj::lime_al_listener3f( int param,::cpp::Float32 value1,::cpp::Float32 value2,::cpp::Float32 value3){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_listener3f.call(param,value1,value2,value3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_al_listener3f,(void))

Void NativeCFFI_obj::lime_al_listener3i( int param,int value1,int value2,int value3){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_listener3i.call(param,value1,value2,value3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_al_listener3i,(void))

Void NativeCFFI_obj::lime_al_listenerf( int param,::cpp::Float32 value1){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_listenerf.call(param,value1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_al_listenerf,(void))

Void NativeCFFI_obj::lime_al_listenerfv( int param,Dynamic values){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_listenerfv.call(param,hx::DynamicPtr(values));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_al_listenerfv,(void))

Void NativeCFFI_obj::lime_al_listeneri( int param,int value1){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_listeneri.call(param,value1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_al_listeneri,(void))

Void NativeCFFI_obj::lime_al_listeneriv( int param,Dynamic values){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_listeneriv.call(param,hx::DynamicPtr(values));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_al_listeneriv,(void))

Void NativeCFFI_obj::lime_al_source_pause( Dynamic source){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_source_pause.call(hx::DynamicPtr(source));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_source_pause,(void))

Void NativeCFFI_obj::lime_al_source_pausev( int n,Dynamic sources){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_source_pausev.call(n,hx::DynamicPtr(sources));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_al_source_pausev,(void))

Void NativeCFFI_obj::lime_al_source_play( Dynamic source){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_source_play.call(hx::DynamicPtr(source));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_source_play,(void))

Void NativeCFFI_obj::lime_al_source_playv( int n,Dynamic sources){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_source_playv.call(n,hx::DynamicPtr(sources));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_al_source_playv,(void))

Void NativeCFFI_obj::lime_al_source_queue_buffers( Dynamic source,int nb,Dynamic buffers){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_source_queue_buffers.call(hx::DynamicPtr(source),nb,hx::DynamicPtr(buffers));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_al_source_queue_buffers,(void))

Void NativeCFFI_obj::lime_al_source_rewind( Dynamic source){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_source_rewind.call(hx::DynamicPtr(source));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_source_rewind,(void))

Void NativeCFFI_obj::lime_al_source_rewindv( int n,Dynamic sources){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_source_rewindv.call(n,hx::DynamicPtr(sources));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_al_source_rewindv,(void))

Void NativeCFFI_obj::lime_al_source_stop( Dynamic source){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_source_stop.call(hx::DynamicPtr(source));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_source_stop,(void))

Void NativeCFFI_obj::lime_al_source_stopv( int n,Dynamic sources){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_source_stopv.call(n,hx::DynamicPtr(sources));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_al_source_stopv,(void))

Dynamic NativeCFFI_obj::lime_al_source_unqueue_buffers( Dynamic source,int nb){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_source_unqueue_buffers.call(hx::DynamicPtr(source),nb);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_al_source_unqueue_buffers,return )

Void NativeCFFI_obj::lime_al_source3f( Dynamic source,int param,::cpp::Float32 value1,::cpp::Float32 value2,::cpp::Float32 value3){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_source3f.call(hx::DynamicPtr(source),param,value1,value2,value3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(NativeCFFI_obj,lime_al_source3f,(void))

Void NativeCFFI_obj::lime_al_source3i( Dynamic source,int param,int value1,int value2,int value3){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_source3i.call(hx::DynamicPtr(source),param,value1,value2,value3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(NativeCFFI_obj,lime_al_source3i,(void))

Void NativeCFFI_obj::lime_al_sourcef( Dynamic source,int param,::cpp::Float32 value){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_sourcef.call(hx::DynamicPtr(source),param,value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_al_sourcef,(void))

Void NativeCFFI_obj::lime_al_sourcefv( Dynamic source,int param,Dynamic values){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_sourcefv.call(hx::DynamicPtr(source),param,hx::DynamicPtr(values));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_al_sourcefv,(void))

Void NativeCFFI_obj::lime_al_sourcei( Dynamic source,int param,Dynamic value){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_sourcei.call(hx::DynamicPtr(source),param,hx::DynamicPtr(value));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_al_sourcei,(void))

Void NativeCFFI_obj::lime_al_sourceiv( Dynamic source,int param,Dynamic values){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_sourceiv.call(hx::DynamicPtr(source),param,hx::DynamicPtr(values));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_al_sourceiv,(void))

Void NativeCFFI_obj::lime_al_speed_of_sound( ::cpp::Float32 speed){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_al_speed_of_sound.call(speed);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_al_speed_of_sound,(void))

bool NativeCFFI_obj::lime_alc_close_device( Dynamic device){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_close_device.call(hx::DynamicPtr(device));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_alc_close_device,return )

Dynamic NativeCFFI_obj::lime_alc_create_context( Dynamic device,Dynamic attrlist){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_create_context.call(hx::DynamicPtr(device),hx::DynamicPtr(attrlist));
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_alc_create_context,return )

Void NativeCFFI_obj::lime_alc_destroy_context( Dynamic context){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_destroy_context.call(hx::DynamicPtr(context));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_alc_destroy_context,(void))

Dynamic NativeCFFI_obj::lime_alc_get_contexts_device( Dynamic context){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_get_contexts_device.call(hx::DynamicPtr(context));
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_alc_get_contexts_device,return )

Dynamic NativeCFFI_obj::lime_alc_get_current_context( ){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_get_current_context.call();
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeCFFI_obj,lime_alc_get_current_context,return )

int NativeCFFI_obj::lime_alc_get_error( Dynamic device){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_get_error.call(hx::DynamicPtr(device));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_alc_get_error,return )

Dynamic NativeCFFI_obj::lime_alc_get_integerv( Dynamic device,int param,int size){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_get_integerv.call(hx::DynamicPtr(device),param,size);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_alc_get_integerv,return )

Dynamic NativeCFFI_obj::lime_alc_get_string( Dynamic device,int param){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_get_string.call(hx::DynamicPtr(device),param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_alc_get_string,return )

bool NativeCFFI_obj::lime_alc_make_context_current( Dynamic context){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_make_context_current.call(hx::DynamicPtr(context));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_alc_make_context_current,return )

Dynamic NativeCFFI_obj::lime_alc_open_device( ::String devicename){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_open_device.call(devicename);
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_alc_open_device,return )

Void NativeCFFI_obj::lime_alc_pause_device( Dynamic device){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_pause_device.call(hx::DynamicPtr(device));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_alc_pause_device,(void))

Void NativeCFFI_obj::lime_alc_process_context( Dynamic context){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_process_context.call(hx::DynamicPtr(context));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_alc_process_context,(void))

Void NativeCFFI_obj::lime_alc_resume_device( Dynamic device){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_resume_device.call(hx::DynamicPtr(device));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_alc_resume_device,(void))

Void NativeCFFI_obj::lime_alc_suspend_context( Dynamic context){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_alc_suspend_context.call(hx::DynamicPtr(context));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_alc_suspend_context,(void))

Void NativeCFFI_obj::lime_cairo_arc( Dynamic handle,Float xc,Float yc,Float radius,Float angle1,Float angle2){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_arc.call(hx::DynamicPtr(handle),xc,yc,radius,angle1,angle2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(NativeCFFI_obj,lime_cairo_arc,(void))

Void NativeCFFI_obj::lime_cairo_arc_negative( Dynamic handle,Float xc,Float yc,Float radius,Float angle1,Float angle2){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_arc_negative.call(hx::DynamicPtr(handle),xc,yc,radius,angle1,angle2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(NativeCFFI_obj,lime_cairo_arc_negative,(void))

Void NativeCFFI_obj::lime_cairo_clip( Dynamic handle){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_clip.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_clip,(void))

Void NativeCFFI_obj::lime_cairo_clip_preserve( Dynamic handle){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_clip_preserve.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_clip_preserve,(void))

Void NativeCFFI_obj::lime_cairo_clip_extents( Dynamic handle,Float x1,Float y1,Float x2,Float y2){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_clip_extents.call(hx::DynamicPtr(handle),x1,y1,x2,y2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(NativeCFFI_obj,lime_cairo_clip_extents,(void))

Void NativeCFFI_obj::lime_cairo_close_path( Dynamic handle){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_close_path.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_close_path,(void))

Void NativeCFFI_obj::lime_cairo_copy_page( Dynamic handle){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_copy_page.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_copy_page,(void))

Dynamic NativeCFFI_obj::lime_cairo_create( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_create.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_create,return )

Void NativeCFFI_obj::lime_cairo_curve_to( Dynamic handle,Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_curve_to.call(hx::DynamicPtr(handle),x1,y1,x2,y2,x3,y3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(NativeCFFI_obj,lime_cairo_curve_to,(void))

Void NativeCFFI_obj::lime_cairo_fill( Dynamic handle){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_fill.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_fill,(void))

Void NativeCFFI_obj::lime_cairo_fill_extents( Dynamic handle,Float x1,Float y1,Float x2,Float y2){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_fill_extents.call(hx::DynamicPtr(handle),x1,y1,x2,y2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(NativeCFFI_obj,lime_cairo_fill_extents,(void))

Void NativeCFFI_obj::lime_cairo_fill_preserve( Dynamic handle){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_fill_preserve.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_fill_preserve,(void))

int NativeCFFI_obj::lime_cairo_get_antialias( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_antialias.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_get_antialias,return )

Dynamic NativeCFFI_obj::lime_cairo_get_current_point( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_current_point.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_get_current_point,return )

Dynamic NativeCFFI_obj::lime_cairo_get_dash( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_dash.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_get_dash,return )

int NativeCFFI_obj::lime_cairo_get_dash_count( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_dash_count.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_get_dash_count,return )

int NativeCFFI_obj::lime_cairo_get_fill_rule( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_fill_rule.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_get_fill_rule,return )

Dynamic NativeCFFI_obj::lime_cairo_get_font_face( Dynamic handle){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_font_face.call(hx::DynamicPtr(handle));
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_get_font_face,return )

Dynamic NativeCFFI_obj::lime_cairo_get_font_options( Dynamic handle){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_font_options.call(hx::DynamicPtr(handle));
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_get_font_options,return )

Dynamic NativeCFFI_obj::lime_cairo_get_group_target( Dynamic handle){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_group_target.call(hx::DynamicPtr(handle));
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_get_group_target,return )

int NativeCFFI_obj::lime_cairo_get_line_cap( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_line_cap.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_get_line_cap,return )

int NativeCFFI_obj::lime_cairo_get_line_join( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_line_join.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_get_line_join,return )

Float NativeCFFI_obj::lime_cairo_get_line_width( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_line_width.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_get_line_width,return )

Dynamic NativeCFFI_obj::lime_cairo_get_matrix( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_matrix.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_get_matrix,return )

Float NativeCFFI_obj::lime_cairo_get_miter_limit( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_miter_limit.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_get_miter_limit,return )

int NativeCFFI_obj::lime_cairo_get_operator( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_operator.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_get_operator,return )

Dynamic NativeCFFI_obj::lime_cairo_get_source( Dynamic handle){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_source.call(hx::DynamicPtr(handle));
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_get_source,return )

Dynamic NativeCFFI_obj::lime_cairo_get_target( Dynamic handle){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_target.call(hx::DynamicPtr(handle));
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_get_target,return )

Float NativeCFFI_obj::lime_cairo_get_tolerance( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_get_tolerance.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_get_tolerance,return )

bool NativeCFFI_obj::lime_cairo_has_current_point( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_has_current_point.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_has_current_point,return )

Void NativeCFFI_obj::lime_cairo_identity_matrix( Dynamic handle){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_identity_matrix.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_identity_matrix,(void))

bool NativeCFFI_obj::lime_cairo_in_clip( Dynamic handle,Float x,Float y){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_in_clip.call(hx::DynamicPtr(handle),x,y);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_cairo_in_clip,return )

bool NativeCFFI_obj::lime_cairo_in_fill( Dynamic handle,Float x,Float y){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_in_fill.call(hx::DynamicPtr(handle),x,y);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_cairo_in_fill,return )

bool NativeCFFI_obj::lime_cairo_in_stroke( Dynamic handle,Float x,Float y){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_in_stroke.call(hx::DynamicPtr(handle),x,y);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_cairo_in_stroke,return )

Void NativeCFFI_obj::lime_cairo_line_to( Dynamic handle,Float x,Float y){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_line_to.call(hx::DynamicPtr(handle),x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_cairo_line_to,(void))

Void NativeCFFI_obj::lime_cairo_mask( Dynamic handle,Dynamic pattern){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_mask.call(hx::DynamicPtr(handle),hx::DynamicPtr(pattern));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_mask,(void))

Void NativeCFFI_obj::lime_cairo_mask_surface( Dynamic handle,Dynamic surface,Float x,Float y){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_mask_surface.call(hx::DynamicPtr(handle),hx::DynamicPtr(surface),x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_cairo_mask_surface,(void))

Void NativeCFFI_obj::lime_cairo_move_to( Dynamic handle,Float x,Float y){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_move_to.call(hx::DynamicPtr(handle),x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_cairo_move_to,(void))

Void NativeCFFI_obj::lime_cairo_new_path( Dynamic handle){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_new_path.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_new_path,(void))

Void NativeCFFI_obj::lime_cairo_paint( Dynamic handle){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_paint.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_paint,(void))

Void NativeCFFI_obj::lime_cairo_paint_with_alpha( Dynamic handle,Float alpha){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_paint_with_alpha.call(hx::DynamicPtr(handle),alpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_paint_with_alpha,(void))

Dynamic NativeCFFI_obj::lime_cairo_pop_group( Dynamic handle){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pop_group.call(hx::DynamicPtr(handle));
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_pop_group,return )

Void NativeCFFI_obj::lime_cairo_pop_group_to_source( Dynamic handle){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pop_group_to_source.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_pop_group_to_source,(void))

Void NativeCFFI_obj::lime_cairo_push_group( Dynamic handle){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_push_group.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_push_group,(void))

Void NativeCFFI_obj::lime_cairo_push_group_with_content( Dynamic handle,int content){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_push_group_with_content.call(hx::DynamicPtr(handle),content);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_push_group_with_content,(void))

Void NativeCFFI_obj::lime_cairo_rectangle( Dynamic handle,Float x,Float y,Float width,Float height){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_rectangle.call(hx::DynamicPtr(handle),x,y,width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(NativeCFFI_obj,lime_cairo_rectangle,(void))

Void NativeCFFI_obj::lime_cairo_rel_curve_to( Dynamic handle,Float dx1,Float dy1,Float dx2,Float dy2,Float dx3,Float dy3){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_rel_curve_to.call(hx::DynamicPtr(handle),dx1,dy1,dx2,dy2,dx3,dy3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(NativeCFFI_obj,lime_cairo_rel_curve_to,(void))

Void NativeCFFI_obj::lime_cairo_rel_line_to( Dynamic handle,Float dx,Float dy){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_rel_line_to.call(hx::DynamicPtr(handle),dx,dy);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_cairo_rel_line_to,(void))

Void NativeCFFI_obj::lime_cairo_rel_move_to( Dynamic handle,Float dx,Float dy){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_rel_move_to.call(hx::DynamicPtr(handle),dx,dy);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_cairo_rel_move_to,(void))

Void NativeCFFI_obj::lime_cairo_reset_clip( Dynamic handle){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_reset_clip.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_reset_clip,(void))

Void NativeCFFI_obj::lime_cairo_restore( Dynamic handle){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_restore.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_restore,(void))

Void NativeCFFI_obj::lime_cairo_rotate( Dynamic handle,Float amount){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_rotate.call(hx::DynamicPtr(handle),amount);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_rotate,(void))

Void NativeCFFI_obj::lime_cairo_save( Dynamic handle){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_save.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_save,(void))

Void NativeCFFI_obj::lime_cairo_scale( Dynamic handle,Float x,Float y){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_scale.call(hx::DynamicPtr(handle),x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_cairo_scale,(void))

Void NativeCFFI_obj::lime_cairo_set_antialias( Dynamic handle,int cap){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_antialias.call(hx::DynamicPtr(handle),cap);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_set_antialias,(void))

Void NativeCFFI_obj::lime_cairo_set_dash( Dynamic handle,Dynamic dash){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_dash.call(hx::DynamicPtr(handle),hx::DynamicPtr(dash));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_set_dash,(void))

Void NativeCFFI_obj::lime_cairo_set_fill_rule( Dynamic handle,int cap){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_fill_rule.call(hx::DynamicPtr(handle),cap);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_set_fill_rule,(void))

Void NativeCFFI_obj::lime_cairo_set_font_face( Dynamic handle,Dynamic face){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_font_face.call(hx::DynamicPtr(handle),hx::DynamicPtr(face));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_set_font_face,(void))

Void NativeCFFI_obj::lime_cairo_set_font_options( Dynamic handle,Dynamic options){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_font_options.call(hx::DynamicPtr(handle),hx::DynamicPtr(options));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_set_font_options,(void))

Void NativeCFFI_obj::lime_cairo_set_font_size( Dynamic handle,Float size){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_font_size.call(hx::DynamicPtr(handle),size);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_set_font_size,(void))

Void NativeCFFI_obj::lime_cairo_set_line_cap( Dynamic handle,int cap){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_line_cap.call(hx::DynamicPtr(handle),cap);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_set_line_cap,(void))

Void NativeCFFI_obj::lime_cairo_set_line_join( Dynamic handle,int join){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_line_join.call(hx::DynamicPtr(handle),join);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_set_line_join,(void))

Void NativeCFFI_obj::lime_cairo_set_line_width( Dynamic handle,Float width){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_line_width.call(hx::DynamicPtr(handle),width);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_set_line_width,(void))

Void NativeCFFI_obj::lime_cairo_set_matrix( Dynamic handle,Float a,Float b,Float c,Float d,Float tx,Float ty){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_matrix.call(hx::DynamicPtr(handle),a,b,c,d,tx,ty);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(NativeCFFI_obj,lime_cairo_set_matrix,(void))

Void NativeCFFI_obj::lime_cairo_set_miter_limit( Dynamic handle,Float miterLimit){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_miter_limit.call(hx::DynamicPtr(handle),miterLimit);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_set_miter_limit,(void))

Void NativeCFFI_obj::lime_cairo_set_operator( Dynamic handle,int op){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_operator.call(hx::DynamicPtr(handle),op);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_set_operator,(void))

Void NativeCFFI_obj::lime_cairo_set_source( Dynamic handle,Dynamic pattern){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_source.call(hx::DynamicPtr(handle),hx::DynamicPtr(pattern));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_set_source,(void))

Void NativeCFFI_obj::lime_cairo_set_source_rgb( Dynamic handle,Float r,Float g,Float b){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_source_rgb.call(hx::DynamicPtr(handle),r,g,b);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_cairo_set_source_rgb,(void))

Void NativeCFFI_obj::lime_cairo_set_source_rgba( Dynamic handle,Float r,Float g,Float b,Float a){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_source_rgba.call(hx::DynamicPtr(handle),r,g,b,a);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(NativeCFFI_obj,lime_cairo_set_source_rgba,(void))

Void NativeCFFI_obj::lime_cairo_set_source_surface( Dynamic handle,Dynamic surface,Float x,Float y){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_source_surface.call(hx::DynamicPtr(handle),hx::DynamicPtr(surface),x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_cairo_set_source_surface,(void))

Void NativeCFFI_obj::lime_cairo_set_tolerance( Dynamic handle,Float tolerance){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_set_tolerance.call(hx::DynamicPtr(handle),tolerance);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_set_tolerance,(void))

Void NativeCFFI_obj::lime_cairo_show_glyphs( Dynamic handle,Dynamic glyphs){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_show_glyphs.call(hx::DynamicPtr(handle),hx::DynamicPtr(glyphs));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_show_glyphs,(void))

Void NativeCFFI_obj::lime_cairo_show_page( Dynamic handle){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_show_page.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_show_page,(void))

Void NativeCFFI_obj::lime_cairo_show_text( Dynamic handle,::String text){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_show_text.call(hx::DynamicPtr(handle),text);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_show_text,(void))

int NativeCFFI_obj::lime_cairo_status( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_status.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_status,return )

Void NativeCFFI_obj::lime_cairo_stroke( Dynamic handle){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_stroke.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_stroke,(void))

Void NativeCFFI_obj::lime_cairo_stroke_extents( Dynamic handle,Float x1,Float y1,Float x2,Float y2){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_stroke_extents.call(hx::DynamicPtr(handle),x1,y1,x2,y2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(NativeCFFI_obj,lime_cairo_stroke_extents,(void))

Void NativeCFFI_obj::lime_cairo_stroke_preserve( Dynamic handle){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_stroke_preserve.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_stroke_preserve,(void))

Void NativeCFFI_obj::lime_cairo_text_path( Dynamic handle,::String text){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_text_path.call(hx::DynamicPtr(handle),text);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_text_path,(void))

Void NativeCFFI_obj::lime_cairo_transform( Dynamic handle,Dynamic matrix){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_transform.call(hx::DynamicPtr(handle),hx::DynamicPtr(matrix));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_transform,(void))

Void NativeCFFI_obj::lime_cairo_translate( Dynamic handle,Float x,Float y){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_translate.call(hx::DynamicPtr(handle),x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_cairo_translate,(void))

int NativeCFFI_obj::lime_cairo_version( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_version.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeCFFI_obj,lime_cairo_version,return )

::String NativeCFFI_obj::lime_cairo_version_string( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_version_string.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeCFFI_obj,lime_cairo_version_string,return )

int NativeCFFI_obj::lime_cairo_font_face_status( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_face_status.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_font_face_status,return )

Dynamic NativeCFFI_obj::lime_cairo_font_options_create( ){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_options_create.call();
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeCFFI_obj,lime_cairo_font_options_create,return )

int NativeCFFI_obj::lime_cairo_font_options_get_antialias( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_options_get_antialias.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_font_options_get_antialias,return )

int NativeCFFI_obj::lime_cairo_font_options_get_hint_metrics( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_options_get_hint_metrics.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_font_options_get_hint_metrics,return )

int NativeCFFI_obj::lime_cairo_font_options_get_hint_style( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_options_get_hint_style.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_font_options_get_hint_style,return )

int NativeCFFI_obj::lime_cairo_font_options_get_subpixel_order( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_options_get_subpixel_order.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_font_options_get_subpixel_order,return )

Void NativeCFFI_obj::lime_cairo_font_options_set_antialias( Dynamic handle,int v){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_options_set_antialias.call(hx::DynamicPtr(handle),v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_font_options_set_antialias,(void))

Void NativeCFFI_obj::lime_cairo_font_options_set_hint_metrics( Dynamic handle,int v){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_options_set_hint_metrics.call(hx::DynamicPtr(handle),v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_font_options_set_hint_metrics,(void))

Void NativeCFFI_obj::lime_cairo_font_options_set_hint_style( Dynamic handle,int v){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_options_set_hint_style.call(hx::DynamicPtr(handle),v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_font_options_set_hint_style,(void))

Void NativeCFFI_obj::lime_cairo_font_options_set_subpixel_order( Dynamic handle,int v){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_font_options_set_subpixel_order.call(hx::DynamicPtr(handle),v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_font_options_set_subpixel_order,(void))

Dynamic NativeCFFI_obj::lime_cairo_ft_font_face_create( Dynamic face,int flags){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_ft_font_face_create.call(hx::DynamicPtr(face),flags);
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_ft_font_face_create,return )

Dynamic NativeCFFI_obj::lime_cairo_image_surface_create( int format,int width,int height){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_image_surface_create.call(format,width,height);
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_cairo_image_surface_create,return )

Dynamic NativeCFFI_obj::lime_cairo_image_surface_create_for_data( Float data,int format,int width,int height,int stride){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_image_surface_create_for_data.call(data,format,width,height,stride);
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(NativeCFFI_obj,lime_cairo_image_surface_create_for_data,return )

Float NativeCFFI_obj::lime_cairo_image_surface_get_data( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_image_surface_get_data.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_image_surface_get_data,return )

int NativeCFFI_obj::lime_cairo_image_surface_get_format( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_image_surface_get_format.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_image_surface_get_format,return )

int NativeCFFI_obj::lime_cairo_image_surface_get_height( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_image_surface_get_height.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_image_surface_get_height,return )

int NativeCFFI_obj::lime_cairo_image_surface_get_stride( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_image_surface_get_stride.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_image_surface_get_stride,return )

int NativeCFFI_obj::lime_cairo_image_surface_get_width( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_image_surface_get_width.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_image_surface_get_width,return )

Void NativeCFFI_obj::lime_cairo_pattern_add_color_stop_rgb( Dynamic handle,Float offset,Float red,Float green,Float blue){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_add_color_stop_rgb.call(hx::DynamicPtr(handle),offset,red,green,blue);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(NativeCFFI_obj,lime_cairo_pattern_add_color_stop_rgb,(void))

Void NativeCFFI_obj::lime_cairo_pattern_add_color_stop_rgba( Dynamic handle,Float offset,Float red,Float green,Float blue,Float alpha){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_add_color_stop_rgba.call(hx::DynamicPtr(handle),offset,red,green,blue,alpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(NativeCFFI_obj,lime_cairo_pattern_add_color_stop_rgba,(void))

Dynamic NativeCFFI_obj::lime_cairo_pattern_create_for_surface( Dynamic surface){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_create_for_surface.call(hx::DynamicPtr(surface));
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_pattern_create_for_surface,return )

Dynamic NativeCFFI_obj::lime_cairo_pattern_create_linear( Float x0,Float y0,Float x1,Float y1){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_create_linear.call(x0,y0,x1,y1);
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_cairo_pattern_create_linear,return )

Dynamic NativeCFFI_obj::lime_cairo_pattern_create_radial( Float cx0,Float cy0,Float radius0,Float cx1,Float cy1,Float radius1){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_create_radial.call(cx0,cy0,radius0,cx1,cy1,radius1);
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(NativeCFFI_obj,lime_cairo_pattern_create_radial,return )

Dynamic NativeCFFI_obj::lime_cairo_pattern_create_rgb( Float r,Float g,Float b){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_create_rgb.call(r,g,b);
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_cairo_pattern_create_rgb,return )

Dynamic NativeCFFI_obj::lime_cairo_pattern_create_rgba( Float r,Float g,Float b,Float a){
	Dynamic tmp;
	{
		::hx::Object * inVal = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_create_rgba.call(r,g,b,a);
		::hx::Object * tmp1 = inVal;
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);
		tmp = Dynamic(tmp2);
	}
	return tmp;
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_cairo_pattern_create_rgba,return )

int NativeCFFI_obj::lime_cairo_pattern_get_color_stop_count( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_get_color_stop_count.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_pattern_get_color_stop_count,return )

int NativeCFFI_obj::lime_cairo_pattern_get_extend( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_get_extend.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_pattern_get_extend,return )

int NativeCFFI_obj::lime_cairo_pattern_get_filter( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_get_filter.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_pattern_get_filter,return )

Dynamic NativeCFFI_obj::lime_cairo_pattern_get_matrix( Dynamic handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_get_matrix.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_pattern_get_matrix,return )

Void NativeCFFI_obj::lime_cairo_pattern_set_extend( Dynamic handle,int extend){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_set_extend.call(hx::DynamicPtr(handle),extend);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_pattern_set_extend,(void))

Void NativeCFFI_obj::lime_cairo_pattern_set_filter( Dynamic handle,int filter){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_set_filter.call(hx::DynamicPtr(handle),filter);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_pattern_set_filter,(void))

Void NativeCFFI_obj::lime_cairo_pattern_set_matrix( Dynamic handle,Dynamic matrix){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_pattern_set_matrix.call(hx::DynamicPtr(handle),hx::DynamicPtr(matrix));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_cairo_pattern_set_matrix,(void))

Void NativeCFFI_obj::lime_cairo_surface_flush( Dynamic surface){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_surface_flush.call(hx::DynamicPtr(surface));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_cairo_surface_flush,(void))

Float NativeCFFI_obj::lime_curl_getdate( ::String date,Float now){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_getdate.call(date,now);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_curl_getdate,return )

Void NativeCFFI_obj::lime_curl_global_cleanup( ){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_global_cleanup.call();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeCFFI_obj,lime_curl_global_cleanup,(void))

int NativeCFFI_obj::lime_curl_global_init( int flags){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_global_init.call(flags);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_curl_global_init,return )

Dynamic NativeCFFI_obj::lime_curl_version( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_version.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeCFFI_obj,lime_curl_version,return )

Dynamic NativeCFFI_obj::lime_curl_version_info( int type){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_version_info.call(type);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_curl_version_info,return )

Void NativeCFFI_obj::lime_curl_easy_cleanup( Float handle){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_cleanup.call(handle);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_curl_easy_cleanup,(void))

Float NativeCFFI_obj::lime_curl_easy_duphandle( Float handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_duphandle.call(handle);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_curl_easy_duphandle,return )

Dynamic NativeCFFI_obj::lime_curl_easy_escape( Float curl,::String url,int length){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_escape.call(curl,url,length);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_curl_easy_escape,return )

Dynamic NativeCFFI_obj::lime_curl_easy_getinfo( Float curl,int info){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_getinfo.call(curl,info);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_curl_easy_getinfo,return )

Float NativeCFFI_obj::lime_curl_easy_init( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_init.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeCFFI_obj,lime_curl_easy_init,return )

int NativeCFFI_obj::lime_curl_easy_pause( Float handle,int bitmask){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_pause.call(handle,bitmask);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_curl_easy_pause,return )

int NativeCFFI_obj::lime_curl_easy_perform( Float easy_handle){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_perform.call(easy_handle);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_curl_easy_perform,return )

int NativeCFFI_obj::lime_curl_easy_recv( Float curl,Dynamic buffer,int buflen,int n){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_recv.call(curl,hx::DynamicPtr(buffer),buflen,n);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_curl_easy_recv,return )

Void NativeCFFI_obj::lime_curl_easy_reset( Float curl){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_reset.call(curl);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_curl_easy_reset,(void))

int NativeCFFI_obj::lime_curl_easy_send( Float curl,Dynamic buffer,int buflen,int n){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_send.call(curl,hx::DynamicPtr(buffer),buflen,n);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_curl_easy_send,return )

int NativeCFFI_obj::lime_curl_easy_setopt( Float handle,int option,Dynamic parameter){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_setopt.call(handle,option,hx::DynamicPtr(parameter));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_curl_easy_setopt,return )

Dynamic NativeCFFI_obj::lime_curl_easy_strerror( int errornum){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_strerror.call(errornum);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_curl_easy_strerror,return )

Dynamic NativeCFFI_obj::lime_curl_easy_unescape( Float curl,::String url,int inlength,int outlength){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_unescape.call(curl,url,inlength,outlength);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_curl_easy_unescape,return )

Void NativeCFFI_obj::lime_gl_active_texture( int texture){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_active_texture.call(texture);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_active_texture,(void))

Void NativeCFFI_obj::lime_gl_attach_shader( int program,int shader){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_attach_shader.call(program,shader);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_attach_shader,(void))

Void NativeCFFI_obj::lime_gl_bind_attrib_location( int program,int index,::String name){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_bind_attrib_location.call(program,index,name);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_bind_attrib_location,(void))

Void NativeCFFI_obj::lime_gl_bind_buffer( int target,int buffer){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_bind_buffer.call(target,buffer);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_bind_buffer,(void))

Void NativeCFFI_obj::lime_gl_bind_framebuffer( int target,int framebuffer){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_bind_framebuffer.call(target,framebuffer);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_bind_framebuffer,(void))

Void NativeCFFI_obj::lime_gl_bind_renderbuffer( int target,int renderbuffer){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_bind_renderbuffer.call(target,renderbuffer);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_bind_renderbuffer,(void))

Void NativeCFFI_obj::lime_gl_bind_texture( int target,int texture){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_bind_texture.call(target,texture);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_bind_texture,(void))

Void NativeCFFI_obj::lime_gl_blend_color( ::cpp::Float32 red,::cpp::Float32 green,::cpp::Float32 blue,::cpp::Float32 alpha){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_blend_color.call(red,green,blue,alpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_gl_blend_color,(void))

Void NativeCFFI_obj::lime_gl_blend_equation( int mode){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_blend_equation.call(mode);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_blend_equation,(void))

Void NativeCFFI_obj::lime_gl_blend_equation_separate( int modeRGB,int modeAlpha){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_blend_equation_separate.call(modeRGB,modeAlpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_blend_equation_separate,(void))

Void NativeCFFI_obj::lime_gl_blend_func( int sfactor,int dfactor){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_blend_func.call(sfactor,dfactor);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_blend_func,(void))

Void NativeCFFI_obj::lime_gl_blend_func_separate( int srcRGB,int dstRGB,int srcAlpha,int dstAlpha){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_blend_func_separate.call(srcRGB,dstRGB,srcAlpha,dstAlpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_gl_blend_func_separate,(void))

Void NativeCFFI_obj::lime_gl_buffer_data( int target,int size,Float srcData,int usage){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_buffer_data.call(target,size,srcData,usage);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_gl_buffer_data,(void))

Void NativeCFFI_obj::lime_gl_buffer_sub_data( int target,int offset,int size,Float srcData){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_buffer_sub_data.call(target,offset,size,srcData);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_gl_buffer_sub_data,(void))

int NativeCFFI_obj::lime_gl_check_framebuffer_status( int target){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_check_framebuffer_status.call(target);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_check_framebuffer_status,return )

Void NativeCFFI_obj::lime_gl_clear( int mask){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_clear.call(mask);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_clear,(void))

Void NativeCFFI_obj::lime_gl_clear_color( ::cpp::Float32 red,::cpp::Float32 green,::cpp::Float32 blue,::cpp::Float32 alpha){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_clear_color.call(red,green,blue,alpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_gl_clear_color,(void))

Void NativeCFFI_obj::lime_gl_clear_depthf( ::cpp::Float32 depth){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_clear_depthf.call(depth);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_clear_depthf,(void))

Void NativeCFFI_obj::lime_gl_clear_stencil( int s){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_clear_stencil.call(s);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_clear_stencil,(void))

Void NativeCFFI_obj::lime_gl_color_mask( bool red,bool green,bool blue,bool alpha){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_color_mask.call(red,green,blue,alpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_gl_color_mask,(void))

Void NativeCFFI_obj::lime_gl_compile_shader( int shader){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_compile_shader.call(shader);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_compile_shader,(void))

Void NativeCFFI_obj::lime_gl_compressed_tex_image_2d( int target,int level,int internalformat,int width,int height,int border,int imageSize,Float data){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_compressed_tex_image_2d.call(target,level,internalformat,width,height,border,imageSize,data);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(NativeCFFI_obj,lime_gl_compressed_tex_image_2d,(void))

Void NativeCFFI_obj::lime_gl_compressed_tex_sub_image_2d( int target,int level,int xoffset,int yoffset,int width,int height,int format,int imageSize,Float data){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_compressed_tex_sub_image_2d.call(target,level,xoffset,yoffset,width,height,format,imageSize,data);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(NativeCFFI_obj,lime_gl_compressed_tex_sub_image_2d,(void))

Void NativeCFFI_obj::lime_gl_copy_tex_image_2d( int target,int level,int internalformat,int x,int y,int width,int height,int border){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_copy_tex_image_2d.call(target,level,internalformat,x,y,width,height,border);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(NativeCFFI_obj,lime_gl_copy_tex_image_2d,(void))

Void NativeCFFI_obj::lime_gl_copy_tex_sub_image_2d( int target,int level,int xoffset,int yoffset,int x,int y,int width,int height){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_copy_tex_sub_image_2d.call(target,level,xoffset,yoffset,x,y,width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(NativeCFFI_obj,lime_gl_copy_tex_sub_image_2d,(void))

int NativeCFFI_obj::lime_gl_create_buffer( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_create_buffer.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeCFFI_obj,lime_gl_create_buffer,return )

int NativeCFFI_obj::lime_gl_create_framebuffer( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_create_framebuffer.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeCFFI_obj,lime_gl_create_framebuffer,return )

int NativeCFFI_obj::lime_gl_create_program( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_create_program.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeCFFI_obj,lime_gl_create_program,return )

int NativeCFFI_obj::lime_gl_create_renderbuffer( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_create_renderbuffer.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeCFFI_obj,lime_gl_create_renderbuffer,return )

int NativeCFFI_obj::lime_gl_create_shader( int type){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_create_shader.call(type);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_create_shader,return )

int NativeCFFI_obj::lime_gl_create_texture( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_create_texture.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeCFFI_obj,lime_gl_create_texture,return )

Void NativeCFFI_obj::lime_gl_cull_face( int mode){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_cull_face.call(mode);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_cull_face,(void))

Void NativeCFFI_obj::lime_gl_delete_buffer( int buffer){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_delete_buffer.call(buffer);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_delete_buffer,(void))

Void NativeCFFI_obj::lime_gl_delete_framebuffer( int framebuffer){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_delete_framebuffer.call(framebuffer);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_delete_framebuffer,(void))

Void NativeCFFI_obj::lime_gl_delete_program( int program){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_delete_program.call(program);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_delete_program,(void))

Void NativeCFFI_obj::lime_gl_delete_renderbuffer( int renderbuffer){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_delete_renderbuffer.call(renderbuffer);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_delete_renderbuffer,(void))

Void NativeCFFI_obj::lime_gl_delete_shader( int shader){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_delete_shader.call(shader);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_delete_shader,(void))

Void NativeCFFI_obj::lime_gl_delete_texture( int texture){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_delete_texture.call(texture);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_delete_texture,(void))

Void NativeCFFI_obj::lime_gl_depth_func( int func){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_depth_func.call(func);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_depth_func,(void))

Void NativeCFFI_obj::lime_gl_depth_mask( bool flag){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_depth_mask.call(flag);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_depth_mask,(void))

Void NativeCFFI_obj::lime_gl_depth_rangef( ::cpp::Float32 zNear,::cpp::Float32 zFar){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_depth_rangef.call(zNear,zFar);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_depth_rangef,(void))

Void NativeCFFI_obj::lime_gl_detach_shader( int program,int shader){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_detach_shader.call(program,shader);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_detach_shader,(void))

Void NativeCFFI_obj::lime_gl_disable( int cap){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_disable.call(cap);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_disable,(void))

Void NativeCFFI_obj::lime_gl_disable_vertex_attrib_array( int index){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_disable_vertex_attrib_array.call(index);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_disable_vertex_attrib_array,(void))

Void NativeCFFI_obj::lime_gl_draw_arrays( int mode,int first,int count){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_draw_arrays.call(mode,first,count);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_draw_arrays,(void))

Void NativeCFFI_obj::lime_gl_draw_elements( int mode,int count,int type,Float offset){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_draw_elements.call(mode,count,type,offset);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_gl_draw_elements,(void))

Void NativeCFFI_obj::lime_gl_enable( int cap){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_enable.call(cap);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_enable,(void))

Void NativeCFFI_obj::lime_gl_enable_vertex_attrib_array( int index){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_enable_vertex_attrib_array.call(index);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_enable_vertex_attrib_array,(void))

Void NativeCFFI_obj::lime_gl_finish( ){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_finish.call();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeCFFI_obj,lime_gl_finish,(void))

Void NativeCFFI_obj::lime_gl_flush( ){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_flush.call();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeCFFI_obj,lime_gl_flush,(void))

Void NativeCFFI_obj::lime_gl_framebuffer_renderbuffer( int target,int attachment,int renderbuffertarget,int renderbuffer){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_framebuffer_renderbuffer.call(target,attachment,renderbuffertarget,renderbuffer);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_gl_framebuffer_renderbuffer,(void))

Void NativeCFFI_obj::lime_gl_framebuffer_texture2D( int target,int attachment,int textarget,int texture,int level){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_framebuffer_texture2D.call(target,attachment,textarget,texture,level);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(NativeCFFI_obj,lime_gl_framebuffer_texture2D,(void))

Void NativeCFFI_obj::lime_gl_front_face( int mode){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_front_face.call(mode);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_front_face,(void))

Void NativeCFFI_obj::lime_gl_generate_mipmap( int target){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_generate_mipmap.call(target);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_generate_mipmap,(void))

Dynamic NativeCFFI_obj::lime_gl_get_active_attrib( int program,int index){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_active_attrib.call(program,index);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_get_active_attrib,return )

Dynamic NativeCFFI_obj::lime_gl_get_active_uniform( int program,int index){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_active_uniform.call(program,index);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_get_active_uniform,return )

Dynamic NativeCFFI_obj::lime_gl_get_attached_shaders( int program){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_attached_shaders.call(program);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_get_attached_shaders,return )

int NativeCFFI_obj::lime_gl_get_attrib_location( int program,::String name){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_attrib_location.call(program,name);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_get_attrib_location,return )

bool NativeCFFI_obj::lime_gl_get_boolean( int pname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_boolean.call(pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_get_boolean,return )

Void NativeCFFI_obj::lime_gl_get_booleanv( int pname,Float params){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_booleanv.call(pname,params);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_get_booleanv,(void))

int NativeCFFI_obj::lime_gl_get_buffer_parameteri( int target,int pname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_buffer_parameteri.call(target,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_get_buffer_parameteri,return )

Void NativeCFFI_obj::lime_gl_get_buffer_parameteriv( int target,int pname,Float params){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_buffer_parameteriv.call(target,pname,params);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_get_buffer_parameteriv,(void))

Dynamic NativeCFFI_obj::lime_gl_get_context_attributes( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_context_attributes.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeCFFI_obj,lime_gl_get_context_attributes,return )

int NativeCFFI_obj::lime_gl_get_error( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_error.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeCFFI_obj,lime_gl_get_error,return )

Dynamic NativeCFFI_obj::lime_gl_get_extension( ::String name){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_extension.call(name);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_get_extension,return )

::cpp::Float32 NativeCFFI_obj::lime_gl_get_float( int pname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_float.call(pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_get_float,return )

Void NativeCFFI_obj::lime_gl_get_floatv( int pname,Float params){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_floatv.call(pname,params);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_get_floatv,(void))

int NativeCFFI_obj::lime_gl_get_framebuffer_attachment_parameteri( int target,int attachment,int pname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_framebuffer_attachment_parameteri.call(target,attachment,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_get_framebuffer_attachment_parameteri,return )

Void NativeCFFI_obj::lime_gl_get_framebuffer_attachment_parameteriv( int target,int attachment,int pname,Float params){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_framebuffer_attachment_parameteriv.call(target,attachment,pname,params);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_gl_get_framebuffer_attachment_parameteriv,(void))

int NativeCFFI_obj::lime_gl_get_integer( int pname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_integer.call(pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_get_integer,return )

Void NativeCFFI_obj::lime_gl_get_integerv( int pname,Float params){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_integerv.call(pname,params);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_get_integerv,(void))

Dynamic NativeCFFI_obj::lime_gl_get_program_info_log( int program){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_program_info_log.call(program);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_get_program_info_log,return )

int NativeCFFI_obj::lime_gl_get_programi( int program,int pname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_programi.call(program,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_get_programi,return )

Void NativeCFFI_obj::lime_gl_get_programiv( int program,int pname,Float params){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_programiv.call(program,pname,params);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_get_programiv,(void))

int NativeCFFI_obj::lime_gl_get_renderbuffer_parameteri( int target,int pname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_renderbuffer_parameteri.call(target,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_get_renderbuffer_parameteri,return )

Void NativeCFFI_obj::lime_gl_get_renderbuffer_parameteriv( int target,int pname,Float params){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_renderbuffer_parameteriv.call(target,pname,params);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_get_renderbuffer_parameteriv,(void))

Dynamic NativeCFFI_obj::lime_gl_get_shader_info_log( int shader){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_shader_info_log.call(shader);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_get_shader_info_log,return )

int NativeCFFI_obj::lime_gl_get_shaderi( int shader,int pname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_shaderi.call(shader,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_get_shaderi,return )

Void NativeCFFI_obj::lime_gl_get_shaderiv( int shader,int pname,Float params){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_shaderiv.call(shader,pname,params);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_get_shaderiv,(void))

Dynamic NativeCFFI_obj::lime_gl_get_shader_precision_format( int shadertype,int precisiontype){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_shader_precision_format.call(shadertype,precisiontype);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_get_shader_precision_format,return )

Dynamic NativeCFFI_obj::lime_gl_get_shader_source( int shader){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_shader_source.call(shader);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_get_shader_source,return )

Dynamic NativeCFFI_obj::lime_gl_get_string( int pname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_string.call(pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_get_string,return )

::cpp::Float32 NativeCFFI_obj::lime_gl_get_tex_parameterf( int target,int pname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_tex_parameterf.call(target,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_get_tex_parameterf,return )

Void NativeCFFI_obj::lime_gl_get_tex_parameterfv( int target,int pname,Float params){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_tex_parameterfv.call(target,pname,params);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_get_tex_parameterfv,(void))

int NativeCFFI_obj::lime_gl_get_tex_parameteri( int target,int pname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_tex_parameteri.call(target,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_get_tex_parameteri,return )

Void NativeCFFI_obj::lime_gl_get_tex_parameteriv( int target,int pname,Float params){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_tex_parameteriv.call(target,pname,params);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_get_tex_parameteriv,(void))

::cpp::Float32 NativeCFFI_obj::lime_gl_get_uniformf( int program,int location){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_uniformf.call(program,location);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_get_uniformf,return )

Void NativeCFFI_obj::lime_gl_get_uniformfv( int program,int location,Float params){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_uniformfv.call(program,location,params);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_get_uniformfv,(void))

int NativeCFFI_obj::lime_gl_get_uniformi( int program,int location){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_uniformi.call(program,location);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_get_uniformi,return )

Void NativeCFFI_obj::lime_gl_get_uniformiv( int program,int location,Float params){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_uniformiv.call(program,location,params);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_get_uniformiv,(void))

int NativeCFFI_obj::lime_gl_get_uniform_location( int program,::String name){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_uniform_location.call(program,name);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_get_uniform_location,return )

int NativeCFFI_obj::lime_gl_get_vertex_attribi( int index,int pname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_vertex_attribi.call(index,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_get_vertex_attribi,return )

Void NativeCFFI_obj::lime_gl_get_vertex_attribiv( int index,int pname,Float params){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_vertex_attribiv.call(index,pname,params);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_get_vertex_attribiv,(void))

Float NativeCFFI_obj::lime_gl_get_vertex_attrib_pointerv( int index,int pname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_vertex_attrib_pointerv.call(index,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_get_vertex_attrib_pointerv,return )

Void NativeCFFI_obj::lime_gl_hint( int target,int mode){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_hint.call(target,mode);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_hint,(void))

bool NativeCFFI_obj::lime_gl_is_buffer( int buffer){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_is_buffer.call(buffer);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_is_buffer,return )

bool NativeCFFI_obj::lime_gl_is_enabled( int cap){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_is_enabled.call(cap);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_is_enabled,return )

bool NativeCFFI_obj::lime_gl_is_framebuffer( int framebuffer){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_is_framebuffer.call(framebuffer);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_is_framebuffer,return )

bool NativeCFFI_obj::lime_gl_is_program( int program){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_is_program.call(program);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_is_program,return )

bool NativeCFFI_obj::lime_gl_is_renderbuffer( int renderbuffer){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_is_renderbuffer.call(renderbuffer);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_is_renderbuffer,return )

bool NativeCFFI_obj::lime_gl_is_shader( int shader){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_is_shader.call(shader);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_is_shader,return )

bool NativeCFFI_obj::lime_gl_is_texture( int texture){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_is_texture.call(texture);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_is_texture,return )

Void NativeCFFI_obj::lime_gl_line_width( ::cpp::Float32 width){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_line_width.call(width);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_line_width,(void))

Void NativeCFFI_obj::lime_gl_link_program( int program){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_link_program.call(program);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_link_program,(void))

Void NativeCFFI_obj::lime_gl_object_deregister( Dynamic object){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_object_deregister.call(hx::DynamicPtr(object));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_object_deregister,(void))

Dynamic NativeCFFI_obj::lime_gl_object_from_id( int id,int type){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_object_from_id.call(id,type);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_object_from_id,return )

Void NativeCFFI_obj::lime_gl_object_register( int id,int type,Dynamic object){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_object_register.call(id,type,hx::DynamicPtr(object));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_object_register,(void))

Void NativeCFFI_obj::lime_gl_pixel_storei( int pname,int param){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_pixel_storei.call(pname,param);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_pixel_storei,(void))

Void NativeCFFI_obj::lime_gl_polygon_offset( ::cpp::Float32 factor,::cpp::Float32 units){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_polygon_offset.call(factor,units);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_polygon_offset,(void))

Void NativeCFFI_obj::lime_gl_read_pixels( int x,int y,int width,int height,int format,int type,Float pixels){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_read_pixels.call(x,y,width,height,format,type,pixels);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(NativeCFFI_obj,lime_gl_read_pixels,(void))

Void NativeCFFI_obj::lime_gl_renderbuffer_storage( int target,int internalformat,int width,int height){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_renderbuffer_storage.call(target,internalformat,width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_gl_renderbuffer_storage,(void))

Void NativeCFFI_obj::lime_gl_sample_coverage( ::cpp::Float32 value,bool invert){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_sample_coverage.call(value,invert);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_sample_coverage,(void))

Void NativeCFFI_obj::lime_gl_scissor( int x,int y,int width,int height){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_scissor.call(x,y,width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_gl_scissor,(void))

Void NativeCFFI_obj::lime_gl_shader_source( int shader,::String source){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_shader_source.call(shader,source);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_shader_source,(void))

Void NativeCFFI_obj::lime_gl_stencil_func( int func,int ref,int mask){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_stencil_func.call(func,ref,mask);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_stencil_func,(void))

Void NativeCFFI_obj::lime_gl_stencil_func_separate( int face,int func,int ref,int mask){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_stencil_func_separate.call(face,func,ref,mask);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_gl_stencil_func_separate,(void))

Void NativeCFFI_obj::lime_gl_stencil_mask( int mask){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_stencil_mask.call(mask);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_stencil_mask,(void))

Void NativeCFFI_obj::lime_gl_stencil_mask_separate( int face,int mask){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_stencil_mask_separate.call(face,mask);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_stencil_mask_separate,(void))

Void NativeCFFI_obj::lime_gl_stencil_op( int fail,int zfail,int zpass){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_stencil_op.call(fail,zfail,zpass);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_stencil_op,(void))

Void NativeCFFI_obj::lime_gl_stencil_op_separate( int face,int fail,int zfail,int zpass){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_stencil_op_separate.call(face,fail,zfail,zpass);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_gl_stencil_op_separate,(void))

Void NativeCFFI_obj::lime_gl_tex_image_2d( int target,int level,int internalformat,int width,int height,int border,int format,int type,Float data){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_tex_image_2d.call(target,level,internalformat,width,height,border,format,type,data);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(NativeCFFI_obj,lime_gl_tex_image_2d,(void))

Void NativeCFFI_obj::lime_gl_tex_parameterf( int target,int pname,::cpp::Float32 param){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_tex_parameterf.call(target,pname,param);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_tex_parameterf,(void))

Void NativeCFFI_obj::lime_gl_tex_parameteri( int target,int pname,int param){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_tex_parameteri.call(target,pname,param);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_tex_parameteri,(void))

Void NativeCFFI_obj::lime_gl_tex_sub_image_2d( int target,int level,int xoffset,int yoffset,int width,int height,int format,int type,Float data){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_tex_sub_image_2d.call(target,level,xoffset,yoffset,width,height,format,type,data);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(NativeCFFI_obj,lime_gl_tex_sub_image_2d,(void))

Void NativeCFFI_obj::lime_gl_uniform1f( int location,::cpp::Float32 v0){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform1f.call(location,v0);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_uniform1f,(void))

Void NativeCFFI_obj::lime_gl_uniform1fv( int location,int count,Float v){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform1fv.call(location,count,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_uniform1fv,(void))

Void NativeCFFI_obj::lime_gl_uniform1i( int location,int v0){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform1i.call(location,v0);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_uniform1i,(void))

Void NativeCFFI_obj::lime_gl_uniform1iv( int location,int count,Float v){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform1iv.call(location,count,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_uniform1iv,(void))

Void NativeCFFI_obj::lime_gl_uniform2f( int location,::cpp::Float32 v0,::cpp::Float32 v1){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform2f.call(location,v0,v1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_uniform2f,(void))

Void NativeCFFI_obj::lime_gl_uniform2fv( int location,int count,Float v){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform2fv.call(location,count,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_uniform2fv,(void))

Void NativeCFFI_obj::lime_gl_uniform2i( int location,int v0,int v1){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform2i.call(location,v0,v1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_uniform2i,(void))

Void NativeCFFI_obj::lime_gl_uniform2iv( int location,int count,Float v){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform2iv.call(location,count,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_uniform2iv,(void))

Void NativeCFFI_obj::lime_gl_uniform3f( int location,::cpp::Float32 v0,::cpp::Float32 v1,::cpp::Float32 v2){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform3f.call(location,v0,v1,v2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_gl_uniform3f,(void))

Void NativeCFFI_obj::lime_gl_uniform3fv( int location,int count,Float v){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform3fv.call(location,count,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_uniform3fv,(void))

Void NativeCFFI_obj::lime_gl_uniform3i( int location,int v0,int v1,int v2){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform3i.call(location,v0,v1,v2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_gl_uniform3i,(void))

Void NativeCFFI_obj::lime_gl_uniform3iv( int location,int count,Float v){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform3iv.call(location,count,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_uniform3iv,(void))

Void NativeCFFI_obj::lime_gl_uniform4f( int location,::cpp::Float32 v0,::cpp::Float32 v1,::cpp::Float32 v2,::cpp::Float32 v3){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform4f.call(location,v0,v1,v2,v3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(NativeCFFI_obj,lime_gl_uniform4f,(void))

Void NativeCFFI_obj::lime_gl_uniform4fv( int location,int count,Float v){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform4fv.call(location,count,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_uniform4fv,(void))

Void NativeCFFI_obj::lime_gl_uniform4i( int location,int v0,int v1,int v2,int v3){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform4i.call(location,v0,v1,v2,v3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(NativeCFFI_obj,lime_gl_uniform4i,(void))

Void NativeCFFI_obj::lime_gl_uniform4iv( int location,int count,Float v){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform4iv.call(location,count,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_uniform4iv,(void))

Void NativeCFFI_obj::lime_gl_uniform_matrix2fv( int location,int count,bool transpose,Float value){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform_matrix2fv.call(location,count,transpose,value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_gl_uniform_matrix2fv,(void))

Void NativeCFFI_obj::lime_gl_uniform_matrix3fv( int location,int count,bool transpose,Float value){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform_matrix3fv.call(location,count,transpose,value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_gl_uniform_matrix3fv,(void))

Void NativeCFFI_obj::lime_gl_uniform_matrix4fv( int location,int count,bool transpose,Float value){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform_matrix4fv.call(location,count,transpose,value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_gl_uniform_matrix4fv,(void))

Void NativeCFFI_obj::lime_gl_use_program( int program){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_use_program.call(program);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_use_program,(void))

Void NativeCFFI_obj::lime_gl_validate_program( int program){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_validate_program.call(program);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_gl_validate_program,(void))

Void NativeCFFI_obj::lime_gl_vertex_attrib1f( int indx,::cpp::Float32 v0){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_vertex_attrib1f.call(indx,v0);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_vertex_attrib1f,(void))

Void NativeCFFI_obj::lime_gl_vertex_attrib1fv( int indx,Float values){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_vertex_attrib1fv.call(indx,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_vertex_attrib1fv,(void))

Void NativeCFFI_obj::lime_gl_vertex_attrib2f( int indx,::cpp::Float32 v0,::cpp::Float32 v1){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_vertex_attrib2f.call(indx,v0,v1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_gl_vertex_attrib2f,(void))

Void NativeCFFI_obj::lime_gl_vertex_attrib2fv( int indx,Float values){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_vertex_attrib2fv.call(indx,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_vertex_attrib2fv,(void))

Void NativeCFFI_obj::lime_gl_vertex_attrib3f( int indx,::cpp::Float32 v0,::cpp::Float32 v1,::cpp::Float32 v2){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_vertex_attrib3f.call(indx,v0,v1,v2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_gl_vertex_attrib3f,(void))

Void NativeCFFI_obj::lime_gl_vertex_attrib3fv( int indx,Float values){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_vertex_attrib3fv.call(indx,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_vertex_attrib3fv,(void))

Void NativeCFFI_obj::lime_gl_vertex_attrib4f( int indx,::cpp::Float32 v0,::cpp::Float32 v1,::cpp::Float32 v2,::cpp::Float32 v3){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_vertex_attrib4f.call(indx,v0,v1,v2,v3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(NativeCFFI_obj,lime_gl_vertex_attrib4f,(void))

Void NativeCFFI_obj::lime_gl_vertex_attrib4fv( int indx,Float values){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_vertex_attrib4fv.call(indx,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_gl_vertex_attrib4fv,(void))

Void NativeCFFI_obj::lime_gl_vertex_attrib_pointer( int indx,int size,int type,bool normalized,int stride,Float offset){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_vertex_attrib_pointer.call(indx,size,type,normalized,stride,offset);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(NativeCFFI_obj,lime_gl_vertex_attrib_pointer,(void))

Void NativeCFFI_obj::lime_gl_viewport( int x,int y,int width,int height){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_viewport.call(x,y,width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NativeCFFI_obj,lime_gl_viewport,(void))

int NativeCFFI_obj::lime_vorbis_file_bitrate( Dynamic vorbisFile,int bitstream){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_bitrate.call(hx::DynamicPtr(vorbisFile),bitstream);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_vorbis_file_bitrate,return )

int NativeCFFI_obj::lime_vorbis_file_bitrate_instant( Dynamic vorbisFile){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_bitrate_instant.call(hx::DynamicPtr(vorbisFile));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_vorbis_file_bitrate_instant,return )

Void NativeCFFI_obj::lime_vorbis_file_clear( Dynamic vorbisFile){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_clear.call(hx::DynamicPtr(vorbisFile));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_vorbis_file_clear,(void))

Dynamic NativeCFFI_obj::lime_vorbis_file_comment( Dynamic vorbisFile,int bitstream){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_comment.call(hx::DynamicPtr(vorbisFile),bitstream);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_vorbis_file_comment,return )

Dynamic NativeCFFI_obj::lime_vorbis_file_crosslap( Dynamic vorbisFile,Dynamic otherVorbisFile){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_crosslap.call(hx::DynamicPtr(vorbisFile),hx::DynamicPtr(otherVorbisFile));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_vorbis_file_crosslap,return )

Dynamic NativeCFFI_obj::lime_vorbis_file_from_bytes( Dynamic bytes){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_from_bytes.call(hx::DynamicPtr(bytes));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_vorbis_file_from_bytes,return )

Dynamic NativeCFFI_obj::lime_vorbis_file_from_file( ::String path){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_from_file.call(path);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_vorbis_file_from_file,return )

Dynamic NativeCFFI_obj::lime_vorbis_file_info( Dynamic vorbisFile,int bitstream){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_info.call(hx::DynamicPtr(vorbisFile),bitstream);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_vorbis_file_info,return )

int NativeCFFI_obj::lime_vorbis_file_pcm_seek( Dynamic vorbisFile,Dynamic posLow,Dynamic posHigh){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_pcm_seek.call(hx::DynamicPtr(vorbisFile),hx::DynamicPtr(posLow),hx::DynamicPtr(posHigh));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_vorbis_file_pcm_seek,return )

int NativeCFFI_obj::lime_vorbis_file_pcm_seek_lap( Dynamic vorbisFile,Dynamic posLow,Dynamic posHigh){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_pcm_seek_lap.call(hx::DynamicPtr(vorbisFile),hx::DynamicPtr(posLow),hx::DynamicPtr(posHigh));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_vorbis_file_pcm_seek_lap,return )

int NativeCFFI_obj::lime_vorbis_file_pcm_seek_page( Dynamic vorbisFile,Dynamic posLow,Dynamic posHigh){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_pcm_seek_page.call(hx::DynamicPtr(vorbisFile),hx::DynamicPtr(posLow),hx::DynamicPtr(posHigh));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_vorbis_file_pcm_seek_page,return )

int NativeCFFI_obj::lime_vorbis_file_pcm_seek_page_lap( Dynamic vorbisFile,Dynamic posLow,Dynamic posHigh){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_pcm_seek_page_lap.call(hx::DynamicPtr(vorbisFile),hx::DynamicPtr(posLow),hx::DynamicPtr(posHigh));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_vorbis_file_pcm_seek_page_lap,return )

int NativeCFFI_obj::lime_vorbis_file_raw_seek( Dynamic vorbisFile,Dynamic posLow,Dynamic posHigh){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_raw_seek.call(hx::DynamicPtr(vorbisFile),hx::DynamicPtr(posLow),hx::DynamicPtr(posHigh));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_vorbis_file_raw_seek,return )

int NativeCFFI_obj::lime_vorbis_file_raw_seek_lap( Dynamic vorbisFile,Dynamic posLow,Dynamic posHigh){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_raw_seek_lap.call(hx::DynamicPtr(vorbisFile),hx::DynamicPtr(posLow),hx::DynamicPtr(posHigh));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_vorbis_file_raw_seek_lap,return )

Dynamic NativeCFFI_obj::lime_vorbis_file_pcm_tell( Dynamic vorbisFile){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_pcm_tell.call(hx::DynamicPtr(vorbisFile));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_vorbis_file_pcm_tell,return )

Dynamic NativeCFFI_obj::lime_vorbis_file_pcm_total( Dynamic vorbisFile,int bitstream){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_pcm_total.call(hx::DynamicPtr(vorbisFile),bitstream);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_vorbis_file_pcm_total,return )

Dynamic NativeCFFI_obj::lime_vorbis_file_raw_tell( Dynamic vorbisFile){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_raw_tell.call(hx::DynamicPtr(vorbisFile));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_vorbis_file_raw_tell,return )

Dynamic NativeCFFI_obj::lime_vorbis_file_raw_total( Dynamic vorbisFile,int bitstream){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_raw_total.call(hx::DynamicPtr(vorbisFile),bitstream);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_vorbis_file_raw_total,return )

Dynamic NativeCFFI_obj::lime_vorbis_file_read( Dynamic vorbisFile,Dynamic buffer,int position,int length,bool bigendianp,int word,bool _signed){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_read.call(hx::DynamicPtr(vorbisFile),hx::DynamicPtr(buffer),position,length,bigendianp,word,_signed);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(NativeCFFI_obj,lime_vorbis_file_read,return )

Dynamic NativeCFFI_obj::lime_vorbis_file_read_float( Dynamic vorbisFile,Dynamic pcmChannels,int samples){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_read_float.call(hx::DynamicPtr(vorbisFile),hx::DynamicPtr(pcmChannels),samples);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeCFFI_obj,lime_vorbis_file_read_float,return )

bool NativeCFFI_obj::lime_vorbis_file_seekable( Dynamic vorbisFile){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_seekable.call(hx::DynamicPtr(vorbisFile));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_vorbis_file_seekable,return )

int NativeCFFI_obj::lime_vorbis_file_serial_number( Dynamic vorbisFile,int bitstream){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_serial_number.call(hx::DynamicPtr(vorbisFile),bitstream);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_vorbis_file_serial_number,return )

int NativeCFFI_obj::lime_vorbis_file_streams( Dynamic vorbisFile){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_streams.call(hx::DynamicPtr(vorbisFile));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_vorbis_file_streams,return )

int NativeCFFI_obj::lime_vorbis_file_time_seek( Dynamic vorbisFile,Float s){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_time_seek.call(hx::DynamicPtr(vorbisFile),s);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_vorbis_file_time_seek,return )

int NativeCFFI_obj::lime_vorbis_file_time_seek_lap( Dynamic vorbisFile,Float s){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_time_seek_lap.call(hx::DynamicPtr(vorbisFile),s);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_vorbis_file_time_seek_lap,return )

int NativeCFFI_obj::lime_vorbis_file_time_seek_page( Dynamic vorbisFile,Float s){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_time_seek_page.call(hx::DynamicPtr(vorbisFile),s);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_vorbis_file_time_seek_page,return )

int NativeCFFI_obj::lime_vorbis_file_time_seek_page_lap( Dynamic vorbisFile,Float s){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_time_seek_page_lap.call(hx::DynamicPtr(vorbisFile),s);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_vorbis_file_time_seek_page_lap,return )

Float NativeCFFI_obj::lime_vorbis_file_time_tell( Dynamic vorbisFile){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_time_tell.call(hx::DynamicPtr(vorbisFile));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeCFFI_obj,lime_vorbis_file_time_tell,return )

Float NativeCFFI_obj::lime_vorbis_file_time_total( Dynamic vorbisFile,int bitstream){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_vorbis_file_time_total.call(hx::DynamicPtr(vorbisFile),bitstream);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeCFFI_obj,lime_vorbis_file_time_total,return )

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_application_create;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_application_event_manager_register;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_application_exec;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_application_init;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_application_quit;

::cpp::Function< void ( ::hx::Object * ,Float ) > NativeCFFI_obj::cffi_lime_application_set_frame_rate;

::cpp::Function< bool ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_application_update;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_audio_load;

::cpp::Function< ::hx::Object * ( Float ,int ) > NativeCFFI_obj::cffi_lime_bytes_from_data_pointer;

::cpp::Function< Float ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_bytes_get_data_pointer;

::cpp::Function< Float ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_bytes_get_data_pointer_offset;

::cpp::Function< ::hx::Object * ( ::String ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_bytes_read_file;

::cpp::Function< Float ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cffi_get_native_pointer;

::cpp::Function< ::hx::Object * ( ) > NativeCFFI_obj::cffi_lime_clipboard_get_text;

::cpp::Function< void ( ::String ) > NativeCFFI_obj::cffi_lime_clipboard_set_text;

::cpp::Function< Float ( Float ,int ) > NativeCFFI_obj::cffi_lime_data_pointer_offset;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_deflate_compress;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_deflate_decompress;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_drop_event_manager_register;

::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ) > NativeCFFI_obj::cffi_lime_file_dialog_open_directory;

::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ) > NativeCFFI_obj::cffi_lime_file_dialog_open_file;

::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ) > NativeCFFI_obj::cffi_lime_file_dialog_open_files;

::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ) > NativeCFFI_obj::cffi_lime_file_dialog_save_file;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_font_get_ascender;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_font_get_descender;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_font_get_family_name;

::cpp::Function< int ( ::hx::Object * ,::String ) > NativeCFFI_obj::cffi_lime_font_get_glyph_index;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::String ) > NativeCFFI_obj::cffi_lime_font_get_glyph_indices;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_font_get_glyph_metrics;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_font_get_height;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_font_get_num_glyphs;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_font_get_underline_position;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_font_get_underline_thickness;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_font_get_units_per_em;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_font_load;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_font_outline_decompose;

::cpp::Function< bool ( ::hx::Object * ,int ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_font_render_glyph;

::cpp::Function< bool ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_font_render_glyphs;

::cpp::Function< void ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_font_set_size;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_gamepad_add_mappings;

::cpp::Function< ::hx::Object * ( int ) > NativeCFFI_obj::cffi_lime_gamepad_get_device_guid;

::cpp::Function< ::hx::Object * ( int ) > NativeCFFI_obj::cffi_lime_gamepad_get_device_name;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_gamepad_event_manager_register;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_gzip_compress;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_gzip_decompress;

::cpp::Function< void ( int ,int ) > NativeCFFI_obj::cffi_lime_haptic_vibrate;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_image_encode;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_image_load;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_image_data_util_color_transform;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ) > NativeCFFI_obj::cffi_lime_image_data_util_copy_channel;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,bool ) > NativeCFFI_obj::cffi_lime_image_data_util_copy_pixels;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) > NativeCFFI_obj::cffi_lime_image_data_util_fill_rect;

::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) > NativeCFFI_obj::cffi_lime_image_data_util_flood_fill;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_image_data_util_get_pixels;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ) > NativeCFFI_obj::cffi_lime_image_data_util_merge;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_image_data_util_multiply_alpha;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) > NativeCFFI_obj::cffi_lime_image_data_util_resize;

::cpp::Function< void ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_image_data_util_set_format;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_image_data_util_set_pixels;

::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ,int ,int ,int ,bool ) > NativeCFFI_obj::cffi_lime_image_data_util_threshold;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_image_data_util_unmultiply_alpha;

::cpp::Function< ::hx::Object * ( int ) > NativeCFFI_obj::cffi_lime_joystick_get_device_guid;

::cpp::Function< ::hx::Object * ( int ) > NativeCFFI_obj::cffi_lime_joystick_get_device_name;

::cpp::Function< int ( int ) > NativeCFFI_obj::cffi_lime_joystick_get_num_axes;

::cpp::Function< int ( int ) > NativeCFFI_obj::cffi_lime_joystick_get_num_buttons;

::cpp::Function< int ( int ) > NativeCFFI_obj::cffi_lime_joystick_get_num_hats;

::cpp::Function< int ( int ) > NativeCFFI_obj::cffi_lime_joystick_get_num_trackballs;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_joystick_event_manager_register;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,bool ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_jpeg_decode_bytes;

::cpp::Function< ::hx::Object * ( ::String ,bool ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_jpeg_decode_file;

::cpp::Function< ::cpp::Float32 ( ::cpp::Float32 ) > NativeCFFI_obj::cffi_lime_key_code_from_scan_code;

::cpp::Function< ::cpp::Float32 ( ::cpp::Float32 ) > NativeCFFI_obj::cffi_lime_key_code_to_scan_code;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_key_event_manager_register;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_lzma_compress;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_lzma_decompress;

::cpp::Function< void ( ) > NativeCFFI_obj::cffi_lime_mouse_hide;

::cpp::Function< void ( int ) > NativeCFFI_obj::cffi_lime_mouse_set_cursor;

::cpp::Function< void ( bool ) > NativeCFFI_obj::cffi_lime_mouse_set_lock;

::cpp::Function< void ( ) > NativeCFFI_obj::cffi_lime_mouse_show;

::cpp::Function< void ( int ,int ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_mouse_warp;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_mouse_event_manager_register;

::cpp::Function< void ( ::String ) > NativeCFFI_obj::cffi_lime_neko_execute;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,bool ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_png_decode_bytes;

::cpp::Function< ::hx::Object * ( ::String ,bool ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_png_decode_file;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_renderer_create;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_renderer_flip;

::cpp::Function< Float ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_renderer_get_context;

::cpp::Function< Float ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_renderer_get_scale;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_renderer_get_type;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_renderer_lock;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_renderer_make_current;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_renderer_read_pixels;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_renderer_unlock;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_render_event_manager_register;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_sensor_event_manager_register;

::cpp::Function< bool ( ) > NativeCFFI_obj::cffi_lime_system_get_allow_screen_timeout;

::cpp::Function< bool ( bool ) > NativeCFFI_obj::cffi_lime_system_set_allow_screen_timeout;

::cpp::Function< ::hx::Object * ( int ,::String ,::String ) > NativeCFFI_obj::cffi_lime_system_get_directory;

::cpp::Function< ::hx::Object * ( int ) > NativeCFFI_obj::cffi_lime_system_get_display;

::cpp::Function< bool ( ) > NativeCFFI_obj::cffi_lime_system_get_ios_tablet;

::cpp::Function< int ( ) > NativeCFFI_obj::cffi_lime_system_get_num_displays;

::cpp::Function< Float ( ) > NativeCFFI_obj::cffi_lime_system_get_timer;

::cpp::Function< void ( ::String ) > NativeCFFI_obj::cffi_lime_system_open_file;

::cpp::Function< void ( ::String ,::String ) > NativeCFFI_obj::cffi_lime_system_open_url;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_text_event_manager_register;

::cpp::Function< ::hx::Object * ( int ,::String ,::String ) > NativeCFFI_obj::cffi_lime_text_layout_create;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,int ,::String ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_text_layout_position;

::cpp::Function< void ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_text_layout_set_direction;

::cpp::Function< void ( ::hx::Object * ,::String ) > NativeCFFI_obj::cffi_lime_text_layout_set_language;

::cpp::Function< void ( ::hx::Object * ,::String ) > NativeCFFI_obj::cffi_lime_text_layout_set_script;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_touch_event_manager_register;

::cpp::Function< void ( ::hx::Object * ,::String ,::String ) > NativeCFFI_obj::cffi_lime_window_alert;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_window_close;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ,int ,::String ) > NativeCFFI_obj::cffi_lime_window_create;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_window_focus;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_window_get_display;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_window_get_display_mode;

::cpp::Function< bool ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_window_get_enable_text_events;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_window_get_height;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_window_get_id;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_window_get_width;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_window_get_x;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_window_get_y;

::cpp::Function< void ( ::hx::Object * ,int ,int ) > NativeCFFI_obj::cffi_lime_window_move;

::cpp::Function< void ( ::hx::Object * ,int ,int ) > NativeCFFI_obj::cffi_lime_window_resize;

::cpp::Function< bool ( ::hx::Object * ,bool ) > NativeCFFI_obj::cffi_lime_window_set_borderless;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_window_set_display_mode;

::cpp::Function< void ( ::hx::Object * ,bool ) > NativeCFFI_obj::cffi_lime_window_set_enable_text_events;

::cpp::Function< bool ( ::hx::Object * ,bool ) > NativeCFFI_obj::cffi_lime_window_set_fullscreen;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_window_set_icon;

::cpp::Function< bool ( ::hx::Object * ,bool ) > NativeCFFI_obj::cffi_lime_window_set_maximized;

::cpp::Function< bool ( ::hx::Object * ,bool ) > NativeCFFI_obj::cffi_lime_window_set_minimized;

::cpp::Function< bool ( ::hx::Object * ,bool ) > NativeCFFI_obj::cffi_lime_window_set_resizable;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::String ) > NativeCFFI_obj::cffi_lime_window_set_title;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_window_event_manager_register;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_zlib_compress;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_zlib_decompress;

::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ,int ,int ) > NativeCFFI_obj::cffi_lime_al_buffer_data;

::cpp::Function< void ( ::hx::Object * ,int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > NativeCFFI_obj::cffi_lime_al_buffer3f;

::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) > NativeCFFI_obj::cffi_lime_al_buffer3i;

::cpp::Function< void ( ::hx::Object * ,int ,::cpp::Float32 ) > NativeCFFI_obj::cffi_lime_al_bufferf;

::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_al_bufferfv;

::cpp::Function< void ( ::hx::Object * ,int ,int ) > NativeCFFI_obj::cffi_lime_al_bufferi;

::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_al_bufferiv;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_al_delete_buffer;

::cpp::Function< void ( int ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_al_delete_buffers;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_al_delete_source;

::cpp::Function< void ( int ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_al_delete_sources;

::cpp::Function< void ( int ) > NativeCFFI_obj::cffi_lime_al_disable;

::cpp::Function< void ( int ) > NativeCFFI_obj::cffi_lime_al_distance_model;

::cpp::Function< void ( ::cpp::Float32 ) > NativeCFFI_obj::cffi_lime_al_doppler_factor;

::cpp::Function< void ( ::cpp::Float32 ) > NativeCFFI_obj::cffi_lime_al_doppler_velocity;

::cpp::Function< void ( int ) > NativeCFFI_obj::cffi_lime_al_enable;

::cpp::Function< ::hx::Object * ( ) > NativeCFFI_obj::cffi_lime_al_gen_source;

::cpp::Function< ::hx::Object * ( int ) > NativeCFFI_obj::cffi_lime_al_gen_sources;

::cpp::Function< bool ( int ) > NativeCFFI_obj::cffi_lime_al_get_boolean;

::cpp::Function< ::hx::Object * ( int ,int ) > NativeCFFI_obj::cffi_lime_al_get_booleanv;

::cpp::Function< ::hx::Object * ( ) > NativeCFFI_obj::cffi_lime_al_gen_buffer;

::cpp::Function< ::hx::Object * ( int ) > NativeCFFI_obj::cffi_lime_al_gen_buffers;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_al_get_buffer3f;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_al_get_buffer3i;

::cpp::Function< ::cpp::Float32 ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_al_get_bufferf;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) > NativeCFFI_obj::cffi_lime_al_get_bufferfv;

::cpp::Function< int ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_al_get_bufferi;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) > NativeCFFI_obj::cffi_lime_al_get_bufferiv;

::cpp::Function< Float ( int ) > NativeCFFI_obj::cffi_lime_al_get_double;

::cpp::Function< ::hx::Object * ( int ,int ) > NativeCFFI_obj::cffi_lime_al_get_doublev;

::cpp::Function< int ( ::String ) > NativeCFFI_obj::cffi_lime_al_get_enum_value;

::cpp::Function< int ( ) > NativeCFFI_obj::cffi_lime_al_get_error;

::cpp::Function< ::cpp::Float32 ( int ) > NativeCFFI_obj::cffi_lime_al_get_float;

::cpp::Function< ::hx::Object * ( int ,int ) > NativeCFFI_obj::cffi_lime_al_get_floatv;

::cpp::Function< int ( int ) > NativeCFFI_obj::cffi_lime_al_get_integer;

::cpp::Function< ::hx::Object * ( int ,int ) > NativeCFFI_obj::cffi_lime_al_get_integerv;

::cpp::Function< ::hx::Object * ( int ) > NativeCFFI_obj::cffi_lime_al_get_listener3f;

::cpp::Function< ::hx::Object * ( int ) > NativeCFFI_obj::cffi_lime_al_get_listener3i;

::cpp::Function< ::cpp::Float32 ( int ) > NativeCFFI_obj::cffi_lime_al_get_listenerf;

::cpp::Function< ::hx::Object * ( int ,int ) > NativeCFFI_obj::cffi_lime_al_get_listenerfv;

::cpp::Function< int ( int ) > NativeCFFI_obj::cffi_lime_al_get_listeneri;

::cpp::Function< ::hx::Object * ( int ,int ) > NativeCFFI_obj::cffi_lime_al_get_listeneriv;

::cpp::Function< Float ( ::String ) > NativeCFFI_obj::cffi_lime_al_get_proc_address;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_al_get_source3f;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_al_get_source3i;

::cpp::Function< ::cpp::Float32 ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_al_get_sourcef;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) > NativeCFFI_obj::cffi_lime_al_get_sourcefv;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_al_get_sourcei;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) > NativeCFFI_obj::cffi_lime_al_get_sourceiv;

::cpp::Function< ::hx::Object * ( int ) > NativeCFFI_obj::cffi_lime_al_get_string;

::cpp::Function< bool ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_al_is_buffer;

::cpp::Function< bool ( int ) > NativeCFFI_obj::cffi_lime_al_is_enabled;

::cpp::Function< bool ( ::String ) > NativeCFFI_obj::cffi_lime_al_is_extension_present;

::cpp::Function< bool ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_al_is_source;

::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > NativeCFFI_obj::cffi_lime_al_listener3f;

::cpp::Function< void ( int ,int ,int ,int ) > NativeCFFI_obj::cffi_lime_al_listener3i;

::cpp::Function< void ( int ,::cpp::Float32 ) > NativeCFFI_obj::cffi_lime_al_listenerf;

::cpp::Function< void ( int ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_al_listenerfv;

::cpp::Function< void ( int ,int ) > NativeCFFI_obj::cffi_lime_al_listeneri;

::cpp::Function< void ( int ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_al_listeneriv;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_al_source_pause;

::cpp::Function< void ( int ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_al_source_pausev;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_al_source_play;

::cpp::Function< void ( int ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_al_source_playv;

::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_al_source_queue_buffers;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_al_source_rewind;

::cpp::Function< void ( int ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_al_source_rewindv;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_al_source_stop;

::cpp::Function< void ( int ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_al_source_stopv;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_al_source_unqueue_buffers;

::cpp::Function< void ( ::hx::Object * ,int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > NativeCFFI_obj::cffi_lime_al_source3f;

::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) > NativeCFFI_obj::cffi_lime_al_source3i;

::cpp::Function< void ( ::hx::Object * ,int ,::cpp::Float32 ) > NativeCFFI_obj::cffi_lime_al_sourcef;

::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_al_sourcefv;

::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_al_sourcei;

::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_al_sourceiv;

::cpp::Function< void ( ::cpp::Float32 ) > NativeCFFI_obj::cffi_lime_al_speed_of_sound;

::cpp::Function< bool ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_alc_close_device;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_alc_create_context;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_alc_destroy_context;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_alc_get_contexts_device;

::cpp::Function< ::hx::Object * ( ) > NativeCFFI_obj::cffi_lime_alc_get_current_context;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_alc_get_error;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) > NativeCFFI_obj::cffi_lime_alc_get_integerv;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_alc_get_string;

::cpp::Function< bool ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_alc_make_context_current;

::cpp::Function< ::hx::Object * ( ::String ) > NativeCFFI_obj::cffi_lime_alc_open_device;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_alc_pause_device;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_alc_process_context;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_alc_resume_device;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_alc_suspend_context;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_arc;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_arc_negative;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_clip;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_clip_preserve;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_clip_extents;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_close_path;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_copy_page;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_create;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_curve_to;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_fill;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_fill_extents;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_fill_preserve;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_get_antialias;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_get_current_point;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_get_dash;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_get_dash_count;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_get_fill_rule;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_get_font_face;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_get_font_options;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_get_group_target;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_get_line_cap;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_get_line_join;

::cpp::Function< Float ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_get_line_width;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_get_matrix;

::cpp::Function< Float ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_get_miter_limit;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_get_operator;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_get_source;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_get_target;

::cpp::Function< Float ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_get_tolerance;

::cpp::Function< bool ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_has_current_point;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_identity_matrix;

::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_in_clip;

::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_in_fill;

::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_in_stroke;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_line_to;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_mask;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_mask_surface;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_move_to;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_new_path;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_paint;

::cpp::Function< void ( ::hx::Object * ,Float ) > NativeCFFI_obj::cffi_lime_cairo_paint_with_alpha;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_pop_group;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_pop_group_to_source;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_push_group;

::cpp::Function< void ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_cairo_push_group_with_content;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_rectangle;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_rel_curve_to;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_rel_line_to;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_rel_move_to;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_reset_clip;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_restore;

::cpp::Function< void ( ::hx::Object * ,Float ) > NativeCFFI_obj::cffi_lime_cairo_rotate;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_save;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_scale;

::cpp::Function< void ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_cairo_set_antialias;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_set_dash;

::cpp::Function< void ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_cairo_set_fill_rule;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_set_font_face;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_set_font_options;

::cpp::Function< void ( ::hx::Object * ,Float ) > NativeCFFI_obj::cffi_lime_cairo_set_font_size;

::cpp::Function< void ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_cairo_set_line_cap;

::cpp::Function< void ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_cairo_set_line_join;

::cpp::Function< void ( ::hx::Object * ,Float ) > NativeCFFI_obj::cffi_lime_cairo_set_line_width;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_set_matrix;

::cpp::Function< void ( ::hx::Object * ,Float ) > NativeCFFI_obj::cffi_lime_cairo_set_miter_limit;

::cpp::Function< void ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_cairo_set_operator;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_set_source;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_set_source_rgb;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_set_source_rgba;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_set_source_surface;

::cpp::Function< void ( ::hx::Object * ,Float ) > NativeCFFI_obj::cffi_lime_cairo_set_tolerance;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_show_glyphs;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_show_page;

::cpp::Function< void ( ::hx::Object * ,::String ) > NativeCFFI_obj::cffi_lime_cairo_show_text;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_status;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_stroke;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_stroke_extents;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_stroke_preserve;

::cpp::Function< void ( ::hx::Object * ,::String ) > NativeCFFI_obj::cffi_lime_cairo_text_path;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_transform;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_translate;

::cpp::Function< int ( ) > NativeCFFI_obj::cffi_lime_cairo_version;

::cpp::Function< ::String ( ) > NativeCFFI_obj::cffi_lime_cairo_version_string;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_font_face_status;

::cpp::Function< ::hx::Object * ( ) > NativeCFFI_obj::cffi_lime_cairo_font_options_create;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_font_options_get_antialias;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_font_options_get_hint_metrics;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_font_options_get_hint_style;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_font_options_get_subpixel_order;

::cpp::Function< void ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_cairo_font_options_set_antialias;

::cpp::Function< void ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_cairo_font_options_set_hint_metrics;

::cpp::Function< void ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_cairo_font_options_set_hint_style;

::cpp::Function< void ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_cairo_font_options_set_subpixel_order;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_cairo_ft_font_face_create;

::cpp::Function< ::hx::Object * ( int ,int ,int ) > NativeCFFI_obj::cffi_lime_cairo_image_surface_create;

::cpp::Function< ::hx::Object * ( Float ,int ,int ,int ,int ) > NativeCFFI_obj::cffi_lime_cairo_image_surface_create_for_data;

::cpp::Function< Float ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_image_surface_get_data;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_image_surface_get_format;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_image_surface_get_height;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_image_surface_get_stride;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_image_surface_get_width;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_pattern_add_color_stop_rgb;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_pattern_add_color_stop_rgba;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_pattern_create_for_surface;

::cpp::Function< ::hx::Object * ( Float ,Float ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_pattern_create_linear;

::cpp::Function< ::hx::Object * ( Float ,Float ,Float ,Float ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_pattern_create_radial;

::cpp::Function< ::hx::Object * ( Float ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_pattern_create_rgb;

::cpp::Function< ::hx::Object * ( Float ,Float ,Float ,Float ) > NativeCFFI_obj::cffi_lime_cairo_pattern_create_rgba;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_pattern_get_color_stop_count;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_pattern_get_extend;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_pattern_get_filter;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_pattern_get_matrix;

::cpp::Function< void ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_cairo_pattern_set_extend;

::cpp::Function< void ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_cairo_pattern_set_filter;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_pattern_set_matrix;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_cairo_surface_flush;

::cpp::Function< Float ( ::String ,Float ) > NativeCFFI_obj::cffi_lime_curl_getdate;

::cpp::Function< void ( ) > NativeCFFI_obj::cffi_lime_curl_global_cleanup;

::cpp::Function< int ( int ) > NativeCFFI_obj::cffi_lime_curl_global_init;

::cpp::Function< ::hx::Object * ( ) > NativeCFFI_obj::cffi_lime_curl_version;

::cpp::Function< ::hx::Object * ( int ) > NativeCFFI_obj::cffi_lime_curl_version_info;

::cpp::Function< void ( Float ) > NativeCFFI_obj::cffi_lime_curl_easy_cleanup;

::cpp::Function< Float ( Float ) > NativeCFFI_obj::cffi_lime_curl_easy_duphandle;

::cpp::Function< ::hx::Object * ( Float ,::String ,int ) > NativeCFFI_obj::cffi_lime_curl_easy_escape;

::cpp::Function< ::hx::Object * ( Float ,int ) > NativeCFFI_obj::cffi_lime_curl_easy_getinfo;

::cpp::Function< Float ( ) > NativeCFFI_obj::cffi_lime_curl_easy_init;

::cpp::Function< int ( Float ,int ) > NativeCFFI_obj::cffi_lime_curl_easy_pause;

::cpp::Function< int ( Float ) > NativeCFFI_obj::cffi_lime_curl_easy_perform;

::cpp::Function< int ( Float ,::hx::Object * ,int ,int ) > NativeCFFI_obj::cffi_lime_curl_easy_recv;

::cpp::Function< void ( Float ) > NativeCFFI_obj::cffi_lime_curl_easy_reset;

::cpp::Function< int ( Float ,::hx::Object * ,int ,int ) > NativeCFFI_obj::cffi_lime_curl_easy_send;

::cpp::Function< int ( Float ,int ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_curl_easy_setopt;

::cpp::Function< ::hx::Object * ( int ) > NativeCFFI_obj::cffi_lime_curl_easy_strerror;

::cpp::Function< ::hx::Object * ( Float ,::String ,int ,int ) > NativeCFFI_obj::cffi_lime_curl_easy_unescape;

::cpp::Function< void ( int ) > NativeCFFI_obj::cffi_lime_gl_active_texture;

::cpp::Function< void ( int ,int ) > NativeCFFI_obj::cffi_lime_gl_attach_shader;

::cpp::Function< void ( int ,int ,::String ) > NativeCFFI_obj::cffi_lime_gl_bind_attrib_location;

::cpp::Function< void ( int ,int ) > NativeCFFI_obj::cffi_lime_gl_bind_buffer;

::cpp::Function< void ( int ,int ) > NativeCFFI_obj::cffi_lime_gl_bind_framebuffer;

::cpp::Function< void ( int ,int ) > NativeCFFI_obj::cffi_lime_gl_bind_renderbuffer;

::cpp::Function< void ( int ,int ) > NativeCFFI_obj::cffi_lime_gl_bind_texture;

::cpp::Function< void ( ::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > NativeCFFI_obj::cffi_lime_gl_blend_color;

::cpp::Function< void ( int ) > NativeCFFI_obj::cffi_lime_gl_blend_equation;

::cpp::Function< void ( int ,int ) > NativeCFFI_obj::cffi_lime_gl_blend_equation_separate;

::cpp::Function< void ( int ,int ) > NativeCFFI_obj::cffi_lime_gl_blend_func;

::cpp::Function< void ( int ,int ,int ,int ) > NativeCFFI_obj::cffi_lime_gl_blend_func_separate;

::cpp::Function< void ( int ,int ,Float ,int ) > NativeCFFI_obj::cffi_lime_gl_buffer_data;

::cpp::Function< void ( int ,int ,int ,Float ) > NativeCFFI_obj::cffi_lime_gl_buffer_sub_data;

::cpp::Function< int ( int ) > NativeCFFI_obj::cffi_lime_gl_check_framebuffer_status;

::cpp::Function< void ( int ) > NativeCFFI_obj::cffi_lime_gl_clear;

::cpp::Function< void ( ::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > NativeCFFI_obj::cffi_lime_gl_clear_color;

::cpp::Function< void ( ::cpp::Float32 ) > NativeCFFI_obj::cffi_lime_gl_clear_depthf;

::cpp::Function< void ( int ) > NativeCFFI_obj::cffi_lime_gl_clear_stencil;

::cpp::Function< void ( bool ,bool ,bool ,bool ) > NativeCFFI_obj::cffi_lime_gl_color_mask;

::cpp::Function< void ( int ) > NativeCFFI_obj::cffi_lime_gl_compile_shader;

::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,Float ) > NativeCFFI_obj::cffi_lime_gl_compressed_tex_image_2d;

::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ,Float ) > NativeCFFI_obj::cffi_lime_gl_compressed_tex_sub_image_2d;

::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ) > NativeCFFI_obj::cffi_lime_gl_copy_tex_image_2d;

::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ) > NativeCFFI_obj::cffi_lime_gl_copy_tex_sub_image_2d;

::cpp::Function< int ( ) > NativeCFFI_obj::cffi_lime_gl_create_buffer;

::cpp::Function< int ( ) > NativeCFFI_obj::cffi_lime_gl_create_framebuffer;

::cpp::Function< int ( ) > NativeCFFI_obj::cffi_lime_gl_create_program;

::cpp::Function< int ( ) > NativeCFFI_obj::cffi_lime_gl_create_renderbuffer;

::cpp::Function< int ( int ) > NativeCFFI_obj::cffi_lime_gl_create_shader;

::cpp::Function< int ( ) > NativeCFFI_obj::cffi_lime_gl_create_texture;

::cpp::Function< void ( int ) > NativeCFFI_obj::cffi_lime_gl_cull_face;

::cpp::Function< void ( int ) > NativeCFFI_obj::cffi_lime_gl_delete_buffer;

::cpp::Function< void ( int ) > NativeCFFI_obj::cffi_lime_gl_delete_framebuffer;

::cpp::Function< void ( int ) > NativeCFFI_obj::cffi_lime_gl_delete_program;

::cpp::Function< void ( int ) > NativeCFFI_obj::cffi_lime_gl_delete_renderbuffer;

::cpp::Function< void ( int ) > NativeCFFI_obj::cffi_lime_gl_delete_shader;

::cpp::Function< void ( int ) > NativeCFFI_obj::cffi_lime_gl_delete_texture;

::cpp::Function< void ( int ) > NativeCFFI_obj::cffi_lime_gl_depth_func;

::cpp::Function< void ( bool ) > NativeCFFI_obj::cffi_lime_gl_depth_mask;

::cpp::Function< void ( ::cpp::Float32 ,::cpp::Float32 ) > NativeCFFI_obj::cffi_lime_gl_depth_rangef;

::cpp::Function< void ( int ,int ) > NativeCFFI_obj::cffi_lime_gl_detach_shader;

::cpp::Function< void ( int ) > NativeCFFI_obj::cffi_lime_gl_disable;

::cpp::Function< void ( int ) > NativeCFFI_obj::cffi_lime_gl_disable_vertex_attrib_array;

::cpp::Function< void ( int ,int ,int ) > NativeCFFI_obj::cffi_lime_gl_draw_arrays;

::cpp::Function< void ( int ,int ,int ,Float ) > NativeCFFI_obj::cffi_lime_gl_draw_elements;

::cpp::Function< void ( int ) > NativeCFFI_obj::cffi_lime_gl_enable;

::cpp::Function< void ( int ) > NativeCFFI_obj::cffi_lime_gl_enable_vertex_attrib_array;

::cpp::Function< void ( ) > NativeCFFI_obj::cffi_lime_gl_finish;

::cpp::Function< void ( ) > NativeCFFI_obj::cffi_lime_gl_flush;

::cpp::Function< void ( int ,int ,int ,int ) > NativeCFFI_obj::cffi_lime_gl_framebuffer_renderbuffer;

::cpp::Function< void ( int ,int ,int ,int ,int ) > NativeCFFI_obj::cffi_lime_gl_framebuffer_texture2D;

::cpp::Function< void ( int ) > NativeCFFI_obj::cffi_lime_gl_front_face;

::cpp::Function< void ( int ) > NativeCFFI_obj::cffi_lime_gl_generate_mipmap;

::cpp::Function< ::hx::Object * ( int ,int ) > NativeCFFI_obj::cffi_lime_gl_get_active_attrib;

::cpp::Function< ::hx::Object * ( int ,int ) > NativeCFFI_obj::cffi_lime_gl_get_active_uniform;

::cpp::Function< ::hx::Object * ( int ) > NativeCFFI_obj::cffi_lime_gl_get_attached_shaders;

::cpp::Function< int ( int ,::String ) > NativeCFFI_obj::cffi_lime_gl_get_attrib_location;

::cpp::Function< bool ( int ) > NativeCFFI_obj::cffi_lime_gl_get_boolean;

::cpp::Function< void ( int ,Float ) > NativeCFFI_obj::cffi_lime_gl_get_booleanv;

::cpp::Function< int ( int ,int ) > NativeCFFI_obj::cffi_lime_gl_get_buffer_parameteri;

::cpp::Function< void ( int ,int ,Float ) > NativeCFFI_obj::cffi_lime_gl_get_buffer_parameteriv;

::cpp::Function< ::hx::Object * ( ) > NativeCFFI_obj::cffi_lime_gl_get_context_attributes;

::cpp::Function< int ( ) > NativeCFFI_obj::cffi_lime_gl_get_error;

::cpp::Function< ::hx::Object * ( ::String ) > NativeCFFI_obj::cffi_lime_gl_get_extension;

::cpp::Function< ::cpp::Float32 ( int ) > NativeCFFI_obj::cffi_lime_gl_get_float;

::cpp::Function< void ( int ,Float ) > NativeCFFI_obj::cffi_lime_gl_get_floatv;

::cpp::Function< int ( int ,int ,int ) > NativeCFFI_obj::cffi_lime_gl_get_framebuffer_attachment_parameteri;

::cpp::Function< void ( int ,int ,int ,Float ) > NativeCFFI_obj::cffi_lime_gl_get_framebuffer_attachment_parameteriv;

::cpp::Function< int ( int ) > NativeCFFI_obj::cffi_lime_gl_get_integer;

::cpp::Function< void ( int ,Float ) > NativeCFFI_obj::cffi_lime_gl_get_integerv;

::cpp::Function< ::hx::Object * ( int ) > NativeCFFI_obj::cffi_lime_gl_get_program_info_log;

::cpp::Function< int ( int ,int ) > NativeCFFI_obj::cffi_lime_gl_get_programi;

::cpp::Function< void ( int ,int ,Float ) > NativeCFFI_obj::cffi_lime_gl_get_programiv;

::cpp::Function< int ( int ,int ) > NativeCFFI_obj::cffi_lime_gl_get_renderbuffer_parameteri;

::cpp::Function< void ( int ,int ,Float ) > NativeCFFI_obj::cffi_lime_gl_get_renderbuffer_parameteriv;

::cpp::Function< ::hx::Object * ( int ) > NativeCFFI_obj::cffi_lime_gl_get_shader_info_log;

::cpp::Function< int ( int ,int ) > NativeCFFI_obj::cffi_lime_gl_get_shaderi;

::cpp::Function< void ( int ,int ,Float ) > NativeCFFI_obj::cffi_lime_gl_get_shaderiv;

::cpp::Function< ::hx::Object * ( int ,int ) > NativeCFFI_obj::cffi_lime_gl_get_shader_precision_format;

::cpp::Function< ::hx::Object * ( int ) > NativeCFFI_obj::cffi_lime_gl_get_shader_source;

::cpp::Function< ::hx::Object * ( int ) > NativeCFFI_obj::cffi_lime_gl_get_string;

::cpp::Function< ::cpp::Float32 ( int ,int ) > NativeCFFI_obj::cffi_lime_gl_get_tex_parameterf;

::cpp::Function< void ( int ,int ,Float ) > NativeCFFI_obj::cffi_lime_gl_get_tex_parameterfv;

::cpp::Function< int ( int ,int ) > NativeCFFI_obj::cffi_lime_gl_get_tex_parameteri;

::cpp::Function< void ( int ,int ,Float ) > NativeCFFI_obj::cffi_lime_gl_get_tex_parameteriv;

::cpp::Function< ::cpp::Float32 ( int ,int ) > NativeCFFI_obj::cffi_lime_gl_get_uniformf;

::cpp::Function< void ( int ,int ,Float ) > NativeCFFI_obj::cffi_lime_gl_get_uniformfv;

::cpp::Function< int ( int ,int ) > NativeCFFI_obj::cffi_lime_gl_get_uniformi;

::cpp::Function< void ( int ,int ,Float ) > NativeCFFI_obj::cffi_lime_gl_get_uniformiv;

::cpp::Function< int ( int ,::String ) > NativeCFFI_obj::cffi_lime_gl_get_uniform_location;

::cpp::Function< int ( int ,int ) > NativeCFFI_obj::cffi_lime_gl_get_vertex_attribi;

::cpp::Function< void ( int ,int ,Float ) > NativeCFFI_obj::cffi_lime_gl_get_vertex_attribiv;

::cpp::Function< Float ( int ,int ) > NativeCFFI_obj::cffi_lime_gl_get_vertex_attrib_pointerv;

::cpp::Function< void ( int ,int ) > NativeCFFI_obj::cffi_lime_gl_hint;

::cpp::Function< bool ( int ) > NativeCFFI_obj::cffi_lime_gl_is_buffer;

::cpp::Function< bool ( int ) > NativeCFFI_obj::cffi_lime_gl_is_enabled;

::cpp::Function< bool ( int ) > NativeCFFI_obj::cffi_lime_gl_is_framebuffer;

::cpp::Function< bool ( int ) > NativeCFFI_obj::cffi_lime_gl_is_program;

::cpp::Function< bool ( int ) > NativeCFFI_obj::cffi_lime_gl_is_renderbuffer;

::cpp::Function< bool ( int ) > NativeCFFI_obj::cffi_lime_gl_is_shader;

::cpp::Function< bool ( int ) > NativeCFFI_obj::cffi_lime_gl_is_texture;

::cpp::Function< void ( ::cpp::Float32 ) > NativeCFFI_obj::cffi_lime_gl_line_width;

::cpp::Function< void ( int ) > NativeCFFI_obj::cffi_lime_gl_link_program;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_gl_object_deregister;

::cpp::Function< ::hx::Object * ( int ,int ) > NativeCFFI_obj::cffi_lime_gl_object_from_id;

::cpp::Function< void ( int ,int ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_gl_object_register;

::cpp::Function< void ( int ,int ) > NativeCFFI_obj::cffi_lime_gl_pixel_storei;

::cpp::Function< void ( ::cpp::Float32 ,::cpp::Float32 ) > NativeCFFI_obj::cffi_lime_gl_polygon_offset;

::cpp::Function< void ( int ,int ,int ,int ,int ,int ,Float ) > NativeCFFI_obj::cffi_lime_gl_read_pixels;

::cpp::Function< void ( int ,int ,int ,int ) > NativeCFFI_obj::cffi_lime_gl_renderbuffer_storage;

::cpp::Function< void ( ::cpp::Float32 ,bool ) > NativeCFFI_obj::cffi_lime_gl_sample_coverage;

::cpp::Function< void ( int ,int ,int ,int ) > NativeCFFI_obj::cffi_lime_gl_scissor;

::cpp::Function< void ( int ,::String ) > NativeCFFI_obj::cffi_lime_gl_shader_source;

::cpp::Function< void ( int ,int ,int ) > NativeCFFI_obj::cffi_lime_gl_stencil_func;

::cpp::Function< void ( int ,int ,int ,int ) > NativeCFFI_obj::cffi_lime_gl_stencil_func_separate;

::cpp::Function< void ( int ) > NativeCFFI_obj::cffi_lime_gl_stencil_mask;

::cpp::Function< void ( int ,int ) > NativeCFFI_obj::cffi_lime_gl_stencil_mask_separate;

::cpp::Function< void ( int ,int ,int ) > NativeCFFI_obj::cffi_lime_gl_stencil_op;

::cpp::Function< void ( int ,int ,int ,int ) > NativeCFFI_obj::cffi_lime_gl_stencil_op_separate;

::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ,Float ) > NativeCFFI_obj::cffi_lime_gl_tex_image_2d;

::cpp::Function< void ( int ,int ,::cpp::Float32 ) > NativeCFFI_obj::cffi_lime_gl_tex_parameterf;

::cpp::Function< void ( int ,int ,int ) > NativeCFFI_obj::cffi_lime_gl_tex_parameteri;

::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ,Float ) > NativeCFFI_obj::cffi_lime_gl_tex_sub_image_2d;

::cpp::Function< void ( int ,::cpp::Float32 ) > NativeCFFI_obj::cffi_lime_gl_uniform1f;

::cpp::Function< void ( int ,int ,Float ) > NativeCFFI_obj::cffi_lime_gl_uniform1fv;

::cpp::Function< void ( int ,int ) > NativeCFFI_obj::cffi_lime_gl_uniform1i;

::cpp::Function< void ( int ,int ,Float ) > NativeCFFI_obj::cffi_lime_gl_uniform1iv;

::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ) > NativeCFFI_obj::cffi_lime_gl_uniform2f;

::cpp::Function< void ( int ,int ,Float ) > NativeCFFI_obj::cffi_lime_gl_uniform2fv;

::cpp::Function< void ( int ,int ,int ) > NativeCFFI_obj::cffi_lime_gl_uniform2i;

::cpp::Function< void ( int ,int ,Float ) > NativeCFFI_obj::cffi_lime_gl_uniform2iv;

::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > NativeCFFI_obj::cffi_lime_gl_uniform3f;

::cpp::Function< void ( int ,int ,Float ) > NativeCFFI_obj::cffi_lime_gl_uniform3fv;

::cpp::Function< void ( int ,int ,int ,int ) > NativeCFFI_obj::cffi_lime_gl_uniform3i;

::cpp::Function< void ( int ,int ,Float ) > NativeCFFI_obj::cffi_lime_gl_uniform3iv;

::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > NativeCFFI_obj::cffi_lime_gl_uniform4f;

::cpp::Function< void ( int ,int ,Float ) > NativeCFFI_obj::cffi_lime_gl_uniform4fv;

::cpp::Function< void ( int ,int ,int ,int ,int ) > NativeCFFI_obj::cffi_lime_gl_uniform4i;

::cpp::Function< void ( int ,int ,Float ) > NativeCFFI_obj::cffi_lime_gl_uniform4iv;

::cpp::Function< void ( int ,int ,bool ,Float ) > NativeCFFI_obj::cffi_lime_gl_uniform_matrix2fv;

::cpp::Function< void ( int ,int ,bool ,Float ) > NativeCFFI_obj::cffi_lime_gl_uniform_matrix3fv;

::cpp::Function< void ( int ,int ,bool ,Float ) > NativeCFFI_obj::cffi_lime_gl_uniform_matrix4fv;

::cpp::Function< void ( int ) > NativeCFFI_obj::cffi_lime_gl_use_program;

::cpp::Function< void ( int ) > NativeCFFI_obj::cffi_lime_gl_validate_program;

::cpp::Function< void ( int ,::cpp::Float32 ) > NativeCFFI_obj::cffi_lime_gl_vertex_attrib1f;

::cpp::Function< void ( int ,Float ) > NativeCFFI_obj::cffi_lime_gl_vertex_attrib1fv;

::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ) > NativeCFFI_obj::cffi_lime_gl_vertex_attrib2f;

::cpp::Function< void ( int ,Float ) > NativeCFFI_obj::cffi_lime_gl_vertex_attrib2fv;

::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > NativeCFFI_obj::cffi_lime_gl_vertex_attrib3f;

::cpp::Function< void ( int ,Float ) > NativeCFFI_obj::cffi_lime_gl_vertex_attrib3fv;

::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > NativeCFFI_obj::cffi_lime_gl_vertex_attrib4f;

::cpp::Function< void ( int ,Float ) > NativeCFFI_obj::cffi_lime_gl_vertex_attrib4fv;

::cpp::Function< void ( int ,int ,int ,bool ,int ,Float ) > NativeCFFI_obj::cffi_lime_gl_vertex_attrib_pointer;

::cpp::Function< void ( int ,int ,int ,int ) > NativeCFFI_obj::cffi_lime_gl_viewport;

::cpp::Function< int ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_vorbis_file_bitrate;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_vorbis_file_bitrate_instant;

::cpp::Function< void ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_vorbis_file_clear;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_vorbis_file_comment;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_vorbis_file_crosslap;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_vorbis_file_from_bytes;

::cpp::Function< ::hx::Object * ( ::String ) > NativeCFFI_obj::cffi_lime_vorbis_file_from_file;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_vorbis_file_info;

::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_vorbis_file_pcm_seek;

::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_vorbis_file_pcm_seek_lap;

::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_vorbis_file_pcm_seek_page;

::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_vorbis_file_pcm_seek_page_lap;

::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_vorbis_file_raw_seek;

::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > NativeCFFI_obj::cffi_lime_vorbis_file_raw_seek_lap;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_vorbis_file_pcm_tell;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_vorbis_file_pcm_total;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_vorbis_file_raw_tell;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_vorbis_file_raw_total;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,int ,int ,bool ,int ,bool ) > NativeCFFI_obj::cffi_lime_vorbis_file_read;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_vorbis_file_read_float;

::cpp::Function< bool ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_vorbis_file_seekable;

::cpp::Function< int ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_vorbis_file_serial_number;

::cpp::Function< int ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_vorbis_file_streams;

::cpp::Function< int ( ::hx::Object * ,Float ) > NativeCFFI_obj::cffi_lime_vorbis_file_time_seek;

::cpp::Function< int ( ::hx::Object * ,Float ) > NativeCFFI_obj::cffi_lime_vorbis_file_time_seek_lap;

::cpp::Function< int ( ::hx::Object * ,Float ) > NativeCFFI_obj::cffi_lime_vorbis_file_time_seek_page;

::cpp::Function< int ( ::hx::Object * ,Float ) > NativeCFFI_obj::cffi_lime_vorbis_file_time_seek_page_lap;

::cpp::Function< Float ( ::hx::Object * ) > NativeCFFI_obj::cffi_lime_vorbis_file_time_tell;

::cpp::Function< Float ( ::hx::Object * ,int ) > NativeCFFI_obj::cffi_lime_vorbis_file_time_total;


NativeCFFI_obj::NativeCFFI_obj()
{
}

bool NativeCFFI_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"lime_gl_hint") ) { outValue = lime_gl_hint_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lime_gl_clear") ) { outValue = lime_gl_clear_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_flush") ) { outValue = lime_gl_flush_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lime_font_load") ) { outValue = lime_font_load_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_enable") ) { outValue = lime_al_enable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_arc") ) { outValue = lime_cairo_arc_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_enable") ) { outValue = lime_gl_enable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_finish") ) { outValue = lime_gl_finish_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_audio_load") ) { outValue = lime_audio_load_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_load") ) { outValue = lime_image_load_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_mouse_hide") ) { outValue = lime_mouse_hide_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_mouse_show") ) { outValue = lime_mouse_show_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_mouse_warp") ) { outValue = lime_mouse_warp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_bufferf") ) { outValue = lime_al_bufferf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_bufferi") ) { outValue = lime_al_bufferi_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_disable") ) { outValue = lime_al_disable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_sourcef") ) { outValue = lime_al_sourcef_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_sourcei") ) { outValue = lime_al_sourcei_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_clip") ) { outValue = lime_cairo_clip_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_fill") ) { outValue = lime_cairo_fill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_mask") ) { outValue = lime_cairo_mask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_save") ) { outValue = lime_cairo_save_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_disable") ) { outValue = lime_gl_disable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_scissor") ) { outValue = lime_gl_scissor_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_window_move") ) { outValue = lime_window_move_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_buffer3f") ) { outValue = lime_al_buffer3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_buffer3i") ) { outValue = lime_al_buffer3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_bufferfv") ) { outValue = lime_al_bufferfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_bufferiv") ) { outValue = lime_al_bufferiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_source3f") ) { outValue = lime_al_source3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_source3i") ) { outValue = lime_al_source3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_sourcefv") ) { outValue = lime_al_sourcefv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_sourceiv") ) { outValue = lime_al_sourceiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_paint") ) { outValue = lime_cairo_paint_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_scale") ) { outValue = lime_cairo_scale_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_viewport") ) { outValue = lime_gl_viewport_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_image_encode") ) { outValue = lime_image_encode_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_neko_execute") ) { outValue = lime_neko_execute_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_alert") ) { outValue = lime_window_alert_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_close") ) { outValue = lime_window_close_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_focus") ) { outValue = lime_window_focus_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_get_x") ) { outValue = lime_window_get_x_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_get_y") ) { outValue = lime_window_get_y_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_error") ) { outValue = lime_al_get_error_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_float") ) { outValue = lime_al_get_float_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_is_buffer") ) { outValue = lime_al_is_buffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_is_source") ) { outValue = lime_al_is_source_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_listenerf") ) { outValue = lime_al_listenerf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_listeneri") ) { outValue = lime_al_listeneri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_create") ) { outValue = lime_cairo_create_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_rotate") ) { outValue = lime_cairo_rotate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_status") ) { outValue = lime_cairo_status_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_stroke") ) { outValue = lime_cairo_stroke_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_getdate") ) { outValue = lime_curl_getdate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_version") ) { outValue = lime_curl_version_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_cull_face") ) { outValue = lime_gl_cull_face_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_error") ) { outValue = lime_gl_get_error_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_float") ) { outValue = lime_gl_get_float_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_is_buffer") ) { outValue = lime_gl_is_buffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_is_shader") ) { outValue = lime_gl_is_shader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1f") ) { outValue = lime_gl_uniform1f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1i") ) { outValue = lime_gl_uniform1i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2f") ) { outValue = lime_gl_uniform2f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2i") ) { outValue = lime_gl_uniform2i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3f") ) { outValue = lime_gl_uniform3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3i") ) { outValue = lime_gl_uniform3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4f") ) { outValue = lime_gl_uniform4f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4i") ) { outValue = lime_gl_uniform4i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_hint") ) { outValue = cffi_lime_gl_hint; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_font_set_size") ) { outValue = lime_font_set_size_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gzip_compress") ) { outValue = lime_gzip_compress_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_lzma_compress") ) { outValue = lime_lzma_compress_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_renderer_flip") ) { outValue = lime_renderer_flip_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_renderer_lock") ) { outValue = lime_renderer_lock_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_create") ) { outValue = lime_window_create_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_get_id") ) { outValue = lime_window_get_id_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_resize") ) { outValue = lime_window_resize_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_zlib_compress") ) { outValue = lime_zlib_compress_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_gen_source") ) { outValue = lime_al_gen_source_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_gen_buffer") ) { outValue = lime_al_gen_buffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_double") ) { outValue = lime_al_get_double_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_floatv") ) { outValue = lime_al_get_floatv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_string") ) { outValue = lime_al_get_string_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_is_enabled") ) { outValue = lime_al_is_enabled_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_listener3f") ) { outValue = lime_al_listener3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_listener3i") ) { outValue = lime_al_listener3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_listenerfv") ) { outValue = lime_al_listenerfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_listeneriv") ) { outValue = lime_al_listeneriv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_alc_get_error") ) { outValue = lime_alc_get_error_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_in_clip") ) { outValue = lime_cairo_in_clip_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_in_fill") ) { outValue = lime_cairo_in_fill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_line_to") ) { outValue = lime_cairo_line_to_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_move_to") ) { outValue = lime_cairo_move_to_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_restore") ) { outValue = lime_cairo_restore_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_version") ) { outValue = lime_cairo_version_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_blend_func") ) { outValue = lime_gl_blend_func_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_color_mask") ) { outValue = lime_gl_color_mask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_depth_func") ) { outValue = lime_gl_depth_func_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_depth_mask") ) { outValue = lime_gl_depth_mask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_front_face") ) { outValue = lime_gl_front_face_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_floatv") ) { outValue = lime_gl_get_floatv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_string") ) { outValue = lime_gl_get_string_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_is_enabled") ) { outValue = lime_gl_is_enabled_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_is_program") ) { outValue = lime_gl_is_program_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_is_texture") ) { outValue = lime_gl_is_texture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_line_width") ) { outValue = lime_gl_line_width_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_op") ) { outValue = lime_gl_stencil_op_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1fv") ) { outValue = lime_gl_uniform1fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1iv") ) { outValue = lime_gl_uniform1iv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2fv") ) { outValue = lime_gl_uniform2fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2iv") ) { outValue = lime_gl_uniform2iv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3fv") ) { outValue = lime_gl_uniform3fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3iv") ) { outValue = lime_gl_uniform3iv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4fv") ) { outValue = lime_gl_uniform4fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4iv") ) { outValue = lime_gl_uniform4iv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_clear") ) { outValue = cffi_lime_gl_clear; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_flush") ) { outValue = cffi_lime_gl_flush; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lime_haptic_vibrate") ) { outValue = lime_haptic_vibrate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_mouse_set_lock") ) { outValue = lime_mouse_set_lock_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_buffer_data") ) { outValue = lime_al_buffer_data_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_gen_sources") ) { outValue = lime_al_gen_sources_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_boolean") ) { outValue = lime_al_get_boolean_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_gen_buffers") ) { outValue = lime_al_gen_buffers_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_bufferf") ) { outValue = lime_al_get_bufferf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_bufferi") ) { outValue = lime_al_get_bufferi_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_doublev") ) { outValue = lime_al_get_doublev_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_integer") ) { outValue = lime_al_get_integer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_sourcef") ) { outValue = lime_al_get_sourcef_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_sourcei") ) { outValue = lime_al_get_sourcei_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_source_play") ) { outValue = lime_al_source_play_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_source_stop") ) { outValue = lime_al_source_stop_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_alc_get_string") ) { outValue = lime_alc_get_string_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_curve_to") ) { outValue = lime_cairo_curve_to_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_dash") ) { outValue = lime_cairo_get_dash_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_new_path") ) { outValue = lime_cairo_new_path_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_dash") ) { outValue = lime_cairo_set_dash_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_easy_init") ) { outValue = lime_curl_easy_init_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_easy_recv") ) { outValue = lime_curl_easy_recv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_easy_send") ) { outValue = lime_curl_easy_send_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_bind_buffer") ) { outValue = lime_gl_bind_buffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_blend_color") ) { outValue = lime_gl_blend_color_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_buffer_data") ) { outValue = lime_gl_buffer_data_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_clear_color") ) { outValue = lime_gl_clear_color_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_draw_arrays") ) { outValue = lime_gl_draw_arrays_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_boolean") ) { outValue = lime_gl_get_boolean_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_integer") ) { outValue = lime_gl_get_integer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shaderi") ) { outValue = lime_gl_get_shaderi_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_read_pixels") ) { outValue = lime_gl_read_pixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_use_program") ) { outValue = lime_gl_use_program_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_load") ) { outValue = cffi_lime_font_load; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_enable") ) { outValue = cffi_lime_al_enable; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_arc") ) { outValue = cffi_lime_cairo_arc; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_enable") ) { outValue = cffi_lime_gl_enable; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_finish") ) { outValue = cffi_lime_gl_finish; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_bytes_read_file") ) { outValue = lime_bytes_read_file_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_font_get_height") ) { outValue = lime_font_get_height_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gzip_decompress") ) { outValue = lime_gzip_decompress_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_lzma_decompress") ) { outValue = lime_lzma_decompress_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_png_decode_file") ) { outValue = lime_png_decode_file_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_renderer_create") ) { outValue = lime_renderer_create_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_renderer_unlock") ) { outValue = lime_renderer_unlock_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_system_open_url") ) { outValue = lime_system_open_url_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_set_icon") ) { outValue = lime_window_set_icon_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_zlib_decompress") ) { outValue = lime_zlib_decompress_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_booleanv") ) { outValue = lime_al_get_booleanv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_buffer3f") ) { outValue = lime_al_get_buffer3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_buffer3i") ) { outValue = lime_al_get_buffer3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_bufferfv") ) { outValue = lime_al_get_bufferfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_bufferiv") ) { outValue = lime_al_get_bufferiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_integerv") ) { outValue = lime_al_get_integerv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_source3f") ) { outValue = lime_al_get_source3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_source3i") ) { outValue = lime_al_get_source3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_sourcefv") ) { outValue = lime_al_get_sourcefv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_sourceiv") ) { outValue = lime_al_get_sourceiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_source_pause") ) { outValue = lime_al_source_pause_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_source_playv") ) { outValue = lime_al_source_playv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_source_stopv") ) { outValue = lime_al_source_stopv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_alc_open_device") ) { outValue = lime_alc_open_device_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_copy_page") ) { outValue = lime_cairo_copy_page_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_in_stroke") ) { outValue = lime_cairo_in_stroke_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_pop_group") ) { outValue = lime_cairo_pop_group_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_rectangle") ) { outValue = lime_cairo_rectangle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_show_page") ) { outValue = lime_cairo_show_page_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_show_text") ) { outValue = lime_cairo_show_text_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_text_path") ) { outValue = lime_cairo_text_path_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_transform") ) { outValue = lime_cairo_transform_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_translate") ) { outValue = lime_cairo_translate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_easy_pause") ) { outValue = lime_curl_easy_pause_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_easy_reset") ) { outValue = lime_curl_easy_reset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_bind_texture") ) { outValue = lime_gl_bind_texture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_clear_depthf") ) { outValue = lime_gl_clear_depthf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_depth_rangef") ) { outValue = lime_gl_depth_rangef_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_booleanv") ) { outValue = lime_gl_get_booleanv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_integerv") ) { outValue = lime_gl_get_integerv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_programi") ) { outValue = lime_gl_get_programi_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shaderiv") ) { outValue = lime_gl_get_shaderiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_uniformf") ) { outValue = lime_gl_get_uniformf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_uniformi") ) { outValue = lime_gl_get_uniformi_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_link_program") ) { outValue = lime_gl_link_program_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_pixel_storei") ) { outValue = lime_gl_pixel_storei_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_func") ) { outValue = lime_gl_stencil_func_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_mask") ) { outValue = lime_gl_stencil_mask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_image_2d") ) { outValue = lime_gl_tex_image_2d_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_audio_load") ) { outValue = cffi_lime_audio_load; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_load") ) { outValue = cffi_lime_image_load; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_mouse_hide") ) { outValue = cffi_lime_mouse_hide; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_mouse_show") ) { outValue = cffi_lime_mouse_show; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_mouse_warp") ) { outValue = cffi_lime_mouse_warp; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_bufferf") ) { outValue = cffi_lime_al_bufferf; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_bufferi") ) { outValue = cffi_lime_al_bufferi; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_disable") ) { outValue = cffi_lime_al_disable; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_sourcef") ) { outValue = cffi_lime_al_sourcef; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_sourcei") ) { outValue = cffi_lime_al_sourcei; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_clip") ) { outValue = cffi_lime_cairo_clip; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_fill") ) { outValue = cffi_lime_cairo_fill; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_mask") ) { outValue = cffi_lime_cairo_mask; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_save") ) { outValue = cffi_lime_cairo_save; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_disable") ) { outValue = cffi_lime_gl_disable; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_scissor") ) { outValue = cffi_lime_gl_scissor; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_application_exec") ) { outValue = lime_application_exec_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_application_init") ) { outValue = lime_application_init_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_application_quit") ) { outValue = lime_application_quit_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_deflate_compress") ) { outValue = lime_deflate_compress_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_jpeg_decode_file") ) { outValue = lime_jpeg_decode_file_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_mouse_set_cursor") ) { outValue = lime_mouse_set_cursor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_png_decode_bytes") ) { outValue = lime_png_decode_bytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_system_get_timer") ) { outValue = lime_system_get_timer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_system_open_file") ) { outValue = lime_system_open_file_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_get_width") ) { outValue = lime_window_get_width_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_set_title") ) { outValue = lime_window_set_title_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_delete_buffer") ) { outValue = lime_al_delete_buffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_delete_source") ) { outValue = lime_al_delete_source_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_listenerf") ) { outValue = lime_al_get_listenerf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_listeneri") ) { outValue = lime_al_get_listeneri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_source_pausev") ) { outValue = lime_al_source_pausev_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_source_rewind") ) { outValue = lime_al_source_rewind_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_alc_close_device") ) { outValue = lime_alc_close_device_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_alc_get_integerv") ) { outValue = lime_alc_get_integerv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_alc_pause_device") ) { outValue = lime_alc_pause_device_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_close_path") ) { outValue = lime_cairo_close_path_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_matrix") ) { outValue = lime_cairo_get_matrix_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_source") ) { outValue = lime_cairo_get_source_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_target") ) { outValue = lime_cairo_get_target_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_push_group") ) { outValue = lime_cairo_push_group_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_reset_clip") ) { outValue = lime_cairo_reset_clip_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_matrix") ) { outValue = lime_cairo_set_matrix_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_source") ) { outValue = lime_cairo_set_source_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_global_init") ) { outValue = lime_curl_global_init_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_easy_escape") ) { outValue = lime_curl_easy_escape_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_easy_setopt") ) { outValue = lime_curl_easy_setopt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_attach_shader") ) { outValue = lime_gl_attach_shader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_clear_stencil") ) { outValue = lime_gl_clear_stencil_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_create_buffer") ) { outValue = lime_gl_create_buffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_create_shader") ) { outValue = lime_gl_create_shader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_buffer") ) { outValue = lime_gl_delete_buffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_shader") ) { outValue = lime_gl_delete_shader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_detach_shader") ) { outValue = lime_gl_detach_shader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_draw_elements") ) { outValue = lime_gl_draw_elements_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_extension") ) { outValue = lime_gl_get_extension_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_programiv") ) { outValue = lime_gl_get_programiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_uniformfv") ) { outValue = lime_gl_get_uniformfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_uniformiv") ) { outValue = lime_gl_get_uniformiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_shader_source") ) { outValue = lime_gl_shader_source_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_info") ) { outValue = lime_vorbis_file_info_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_read") ) { outValue = lime_vorbis_file_read_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_move") ) { outValue = cffi_lime_window_move; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_buffer3f") ) { outValue = cffi_lime_al_buffer3f; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_buffer3i") ) { outValue = cffi_lime_al_buffer3i; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_bufferfv") ) { outValue = cffi_lime_al_bufferfv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_bufferiv") ) { outValue = cffi_lime_al_bufferiv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_source3f") ) { outValue = cffi_lime_al_source3f; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_source3i") ) { outValue = cffi_lime_al_source3i; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_sourcefv") ) { outValue = cffi_lime_al_sourcefv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_sourceiv") ) { outValue = cffi_lime_al_sourceiv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_paint") ) { outValue = cffi_lime_cairo_paint; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_scale") ) { outValue = cffi_lime_cairo_scale; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_viewport") ) { outValue = cffi_lime_gl_viewport; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_font_get_ascender") ) { outValue = lime_font_get_ascender_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_font_render_glyph") ) { outValue = lime_font_render_glyph_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_jpeg_decode_bytes") ) { outValue = lime_jpeg_decode_bytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_renderer_get_type") ) { outValue = lime_renderer_get_type_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_get_height") ) { outValue = lime_window_get_height_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_delete_buffers") ) { outValue = lime_al_delete_buffers_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_delete_sources") ) { outValue = lime_al_delete_sources_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_distance_model") ) { outValue = lime_al_distance_model_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_doppler_factor") ) { outValue = lime_al_doppler_factor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_enum_value") ) { outValue = lime_al_get_enum_value_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_listener3f") ) { outValue = lime_al_get_listener3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_listener3i") ) { outValue = lime_al_get_listener3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_listenerfv") ) { outValue = lime_al_get_listenerfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_listeneriv") ) { outValue = lime_al_get_listeneriv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_source_rewindv") ) { outValue = lime_al_source_rewindv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_speed_of_sound") ) { outValue = lime_al_speed_of_sound_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_alc_resume_device") ) { outValue = lime_alc_resume_device_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_rel_line_to") ) { outValue = lime_cairo_rel_line_to_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_rel_move_to") ) { outValue = lime_cairo_rel_move_to_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_show_glyphs") ) { outValue = lime_cairo_show_glyphs_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_version_info") ) { outValue = lime_curl_version_info_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_easy_cleanup") ) { outValue = lime_curl_easy_cleanup_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_easy_getinfo") ) { outValue = lime_curl_easy_getinfo_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_easy_perform") ) { outValue = lime_curl_easy_perform_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_active_texture") ) { outValue = lime_gl_active_texture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_blend_equation") ) { outValue = lime_gl_blend_equation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_compile_shader") ) { outValue = lime_gl_compile_shader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_create_program") ) { outValue = lime_gl_create_program_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_create_texture") ) { outValue = lime_gl_create_texture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_program") ) { outValue = lime_gl_delete_program_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_texture") ) { outValue = lime_gl_delete_texture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_is_framebuffer") ) { outValue = lime_gl_is_framebuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_object_from_id") ) { outValue = lime_gl_object_from_id_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_polygon_offset") ) { outValue = lime_gl_polygon_offset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_parameterf") ) { outValue = lime_gl_tex_parameterf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_parameteri") ) { outValue = lime_gl_tex_parameteri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_clear") ) { outValue = lime_vorbis_file_clear_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_encode") ) { outValue = cffi_lime_image_encode; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_neko_execute") ) { outValue = cffi_lime_neko_execute; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_alert") ) { outValue = cffi_lime_window_alert; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_close") ) { outValue = cffi_lime_window_close; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_focus") ) { outValue = cffi_lime_window_focus; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_x") ) { outValue = cffi_lime_window_get_x; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_y") ) { outValue = cffi_lime_window_get_y; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_error") ) { outValue = cffi_lime_al_get_error; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_float") ) { outValue = cffi_lime_al_get_float; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_is_buffer") ) { outValue = cffi_lime_al_is_buffer; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_is_source") ) { outValue = cffi_lime_al_is_source; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_listenerf") ) { outValue = cffi_lime_al_listenerf; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_listeneri") ) { outValue = cffi_lime_al_listeneri; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_create") ) { outValue = cffi_lime_cairo_create; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_rotate") ) { outValue = cffi_lime_cairo_rotate; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_status") ) { outValue = cffi_lime_cairo_status; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_stroke") ) { outValue = cffi_lime_cairo_stroke; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_getdate") ) { outValue = cffi_lime_curl_getdate; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_version") ) { outValue = cffi_lime_curl_version; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_cull_face") ) { outValue = cffi_lime_gl_cull_face; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_error") ) { outValue = cffi_lime_gl_get_error; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_float") ) { outValue = cffi_lime_gl_get_float; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_is_buffer") ) { outValue = cffi_lime_gl_is_buffer; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_is_shader") ) { outValue = cffi_lime_gl_is_shader; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform1f") ) { outValue = cffi_lime_gl_uniform1f; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform1i") ) { outValue = cffi_lime_gl_uniform1i; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform2f") ) { outValue = cffi_lime_gl_uniform2f; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform2i") ) { outValue = cffi_lime_gl_uniform2i; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform3f") ) { outValue = cffi_lime_gl_uniform3f; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform3i") ) { outValue = cffi_lime_gl_uniform3i; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform4f") ) { outValue = cffi_lime_gl_uniform4f; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform4i") ) { outValue = cffi_lime_gl_uniform4i; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_application_create") ) { outValue = lime_application_create_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_application_update") ) { outValue = lime_application_update_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_clipboard_get_text") ) { outValue = lime_clipboard_get_text_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_clipboard_set_text") ) { outValue = lime_clipboard_set_text_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_deflate_decompress") ) { outValue = lime_deflate_decompress_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_font_get_descender") ) { outValue = lime_font_get_descender_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_font_render_glyphs") ) { outValue = lime_font_render_glyphs_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_renderer_get_scale") ) { outValue = lime_renderer_get_scale_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_system_get_display") ) { outValue = lime_system_get_display_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_layout_create") ) { outValue = lime_text_layout_create_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_get_display") ) { outValue = lime_window_get_display_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_alc_create_context") ) { outValue = lime_alc_create_context_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_arc_negative") ) { outValue = lime_cairo_arc_negative_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_clip_extents") ) { outValue = lime_cairo_clip_extents_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_fill_extents") ) { outValue = lime_cairo_fill_extents_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_line_cap") ) { outValue = lime_cairo_get_line_cap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_operator") ) { outValue = lime_cairo_get_operator_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_mask_surface") ) { outValue = lime_cairo_mask_surface_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_rel_curve_to") ) { outValue = lime_cairo_rel_curve_to_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_line_cap") ) { outValue = lime_cairo_set_line_cap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_operator") ) { outValue = lime_cairo_set_operator_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_easy_strerror") ) { outValue = lime_curl_easy_strerror_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_easy_unescape") ) { outValue = lime_curl_easy_unescape_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_buffer_sub_data") ) { outValue = lime_gl_buffer_sub_data_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_generate_mipmap") ) { outValue = lime_gl_generate_mipmap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_is_renderbuffer") ) { outValue = lime_gl_is_renderbuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_object_register") ) { outValue = lime_gl_object_register_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_sample_coverage") ) { outValue = lime_gl_sample_coverage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib1f") ) { outValue = lime_gl_vertex_attrib1f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib2f") ) { outValue = lime_gl_vertex_attrib2f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib3f") ) { outValue = lime_gl_vertex_attrib3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib4f") ) { outValue = lime_gl_vertex_attrib4f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_set_size") ) { outValue = cffi_lime_font_set_size; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gzip_compress") ) { outValue = cffi_lime_gzip_compress; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_lzma_compress") ) { outValue = cffi_lime_lzma_compress; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_flip") ) { outValue = cffi_lime_renderer_flip; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_lock") ) { outValue = cffi_lime_renderer_lock; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_create") ) { outValue = cffi_lime_window_create; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_id") ) { outValue = cffi_lime_window_get_id; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_resize") ) { outValue = cffi_lime_window_resize; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_zlib_compress") ) { outValue = cffi_lime_zlib_compress; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_gen_source") ) { outValue = cffi_lime_al_gen_source; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_gen_buffer") ) { outValue = cffi_lime_al_gen_buffer; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_double") ) { outValue = cffi_lime_al_get_double; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_floatv") ) { outValue = cffi_lime_al_get_floatv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_string") ) { outValue = cffi_lime_al_get_string; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_is_enabled") ) { outValue = cffi_lime_al_is_enabled; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_listener3f") ) { outValue = cffi_lime_al_listener3f; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_listener3i") ) { outValue = cffi_lime_al_listener3i; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_listenerfv") ) { outValue = cffi_lime_al_listenerfv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_listeneriv") ) { outValue = cffi_lime_al_listeneriv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_get_error") ) { outValue = cffi_lime_alc_get_error; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_in_clip") ) { outValue = cffi_lime_cairo_in_clip; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_in_fill") ) { outValue = cffi_lime_cairo_in_fill; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_line_to") ) { outValue = cffi_lime_cairo_line_to; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_move_to") ) { outValue = cffi_lime_cairo_move_to; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_restore") ) { outValue = cffi_lime_cairo_restore; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_version") ) { outValue = cffi_lime_cairo_version; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_blend_func") ) { outValue = cffi_lime_gl_blend_func; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_color_mask") ) { outValue = cffi_lime_gl_color_mask; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_depth_func") ) { outValue = cffi_lime_gl_depth_func; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_depth_mask") ) { outValue = cffi_lime_gl_depth_mask; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_front_face") ) { outValue = cffi_lime_gl_front_face; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_floatv") ) { outValue = cffi_lime_gl_get_floatv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_string") ) { outValue = cffi_lime_gl_get_string; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_is_enabled") ) { outValue = cffi_lime_gl_is_enabled; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_is_program") ) { outValue = cffi_lime_gl_is_program; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_is_texture") ) { outValue = cffi_lime_gl_is_texture; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_line_width") ) { outValue = cffi_lime_gl_line_width; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_stencil_op") ) { outValue = cffi_lime_gl_stencil_op; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform1fv") ) { outValue = cffi_lime_gl_uniform1fv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform1iv") ) { outValue = cffi_lime_gl_uniform1iv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform2fv") ) { outValue = cffi_lime_gl_uniform2fv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform2iv") ) { outValue = cffi_lime_gl_uniform2iv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform3fv") ) { outValue = cffi_lime_gl_uniform3fv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform3iv") ) { outValue = cffi_lime_gl_uniform3iv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform4fv") ) { outValue = cffi_lime_gl_uniform4fv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform4iv") ) { outValue = cffi_lime_gl_uniform4iv; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_data_pointer_offset") ) { outValue = lime_data_pointer_offset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_font_get_num_glyphs") ) { outValue = lime_font_get_num_glyphs_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_doppler_velocity") ) { outValue = lime_al_doppler_velocity_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_proc_address") ) { outValue = lime_al_get_proc_address_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_alc_destroy_context") ) { outValue = lime_alc_destroy_context_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_alc_process_context") ) { outValue = lime_alc_process_context_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_alc_suspend_context") ) { outValue = lime_alc_suspend_context_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_clip_preserve") ) { outValue = lime_cairo_clip_preserve_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_fill_preserve") ) { outValue = lime_cairo_fill_preserve_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_antialias") ) { outValue = lime_cairo_get_antialias_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_fill_rule") ) { outValue = lime_cairo_get_fill_rule_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_font_face") ) { outValue = lime_cairo_get_font_face_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_line_join") ) { outValue = lime_cairo_get_line_join_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_tolerance") ) { outValue = lime_cairo_get_tolerance_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_antialias") ) { outValue = lime_cairo_set_antialias_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_fill_rule") ) { outValue = lime_cairo_set_fill_rule_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_font_face") ) { outValue = lime_cairo_set_font_face_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_font_size") ) { outValue = lime_cairo_set_font_size_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_line_join") ) { outValue = lime_cairo_set_line_join_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_tolerance") ) { outValue = lime_cairo_set_tolerance_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_surface_flush") ) { outValue = lime_cairo_surface_flush_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_global_cleanup") ) { outValue = lime_curl_global_cleanup_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_easy_duphandle") ) { outValue = lime_curl_easy_duphandle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_bind_framebuffer") ) { outValue = lime_gl_bind_framebuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_sub_image_2d") ) { outValue = lime_gl_tex_sub_image_2d_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_validate_program") ) { outValue = lime_gl_validate_program_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib1fv") ) { outValue = lime_gl_vertex_attrib1fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib2fv") ) { outValue = lime_gl_vertex_attrib2fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib3fv") ) { outValue = lime_gl_vertex_attrib3fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib4fv") ) { outValue = lime_gl_vertex_attrib4fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_bitrate") ) { outValue = lime_vorbis_file_bitrate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_comment") ) { outValue = lime_vorbis_file_comment_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_streams") ) { outValue = lime_vorbis_file_streams_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_haptic_vibrate") ) { outValue = cffi_lime_haptic_vibrate; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_mouse_set_lock") ) { outValue = cffi_lime_mouse_set_lock; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_buffer_data") ) { outValue = cffi_lime_al_buffer_data; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_gen_sources") ) { outValue = cffi_lime_al_gen_sources; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_boolean") ) { outValue = cffi_lime_al_get_boolean; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_gen_buffers") ) { outValue = cffi_lime_al_gen_buffers; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_bufferf") ) { outValue = cffi_lime_al_get_bufferf; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_bufferi") ) { outValue = cffi_lime_al_get_bufferi; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_doublev") ) { outValue = cffi_lime_al_get_doublev; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_integer") ) { outValue = cffi_lime_al_get_integer; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_sourcef") ) { outValue = cffi_lime_al_get_sourcef; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_sourcei") ) { outValue = cffi_lime_al_get_sourcei; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_source_play") ) { outValue = cffi_lime_al_source_play; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_source_stop") ) { outValue = cffi_lime_al_source_stop; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_get_string") ) { outValue = cffi_lime_alc_get_string; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_curve_to") ) { outValue = cffi_lime_cairo_curve_to; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_dash") ) { outValue = cffi_lime_cairo_get_dash; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_new_path") ) { outValue = cffi_lime_cairo_new_path; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_dash") ) { outValue = cffi_lime_cairo_set_dash; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_init") ) { outValue = cffi_lime_curl_easy_init; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_recv") ) { outValue = cffi_lime_curl_easy_recv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_send") ) { outValue = cffi_lime_curl_easy_send; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_bind_buffer") ) { outValue = cffi_lime_gl_bind_buffer; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_blend_color") ) { outValue = cffi_lime_gl_blend_color; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_buffer_data") ) { outValue = cffi_lime_gl_buffer_data; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_clear_color") ) { outValue = cffi_lime_gl_clear_color; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_draw_arrays") ) { outValue = cffi_lime_gl_draw_arrays; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_boolean") ) { outValue = cffi_lime_gl_get_boolean; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_integer") ) { outValue = cffi_lime_gl_get_integer; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_shaderi") ) { outValue = cffi_lime_gl_get_shaderi; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_read_pixels") ) { outValue = cffi_lime_gl_read_pixels; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_use_program") ) { outValue = cffi_lime_gl_use_program; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_font_get_family_name") ) { outValue = lime_font_get_family_name_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_font_get_glyph_index") ) { outValue = lime_font_get_glyph_index_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gamepad_add_mappings") ) { outValue = lime_gamepad_add_mappings_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_renderer_get_context") ) { outValue = lime_renderer_get_context_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_renderer_read_pixels") ) { outValue = lime_renderer_read_pixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_system_get_directory") ) { outValue = lime_system_get_directory_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_layout_position") ) { outValue = lime_text_layout_position_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_set_maximized") ) { outValue = lime_window_set_maximized_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_set_minimized") ) { outValue = lime_window_set_minimized_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_set_resizable") ) { outValue = lime_window_set_resizable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_dash_count") ) { outValue = lime_cairo_get_dash_count_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_line_width") ) { outValue = lime_cairo_get_line_width_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_line_width") ) { outValue = lime_cairo_set_line_width_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_source_rgb") ) { outValue = lime_cairo_set_source_rgb_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_stroke_extents") ) { outValue = lime_cairo_stroke_extents_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_version_string") ) { outValue = lime_cairo_version_string_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_bind_renderbuffer") ) { outValue = lime_gl_bind_renderbuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_copy_tex_image_2d") ) { outValue = lime_gl_copy_tex_image_2d_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_active_attrib") ) { outValue = lime_gl_get_active_attrib_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shader_source") ) { outValue = lime_gl_get_shader_source_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_object_deregister") ) { outValue = lime_gl_object_deregister_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform_matrix2fv") ) { outValue = lime_gl_uniform_matrix2fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform_matrix3fv") ) { outValue = lime_gl_uniform_matrix3fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform_matrix4fv") ) { outValue = lime_gl_uniform_matrix4fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_crosslap") ) { outValue = lime_vorbis_file_crosslap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_pcm_seek") ) { outValue = lime_vorbis_file_pcm_seek_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_raw_seek") ) { outValue = lime_vorbis_file_raw_seek_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_pcm_tell") ) { outValue = lime_vorbis_file_pcm_tell_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_raw_tell") ) { outValue = lime_vorbis_file_raw_tell_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_seekable") ) { outValue = lime_vorbis_file_seekable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_bytes_read_file") ) { outValue = cffi_lime_bytes_read_file; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_height") ) { outValue = cffi_lime_font_get_height; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gzip_decompress") ) { outValue = cffi_lime_gzip_decompress; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_lzma_decompress") ) { outValue = cffi_lime_lzma_decompress; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_png_decode_file") ) { outValue = cffi_lime_png_decode_file; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_create") ) { outValue = cffi_lime_renderer_create; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_unlock") ) { outValue = cffi_lime_renderer_unlock; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_system_open_url") ) { outValue = cffi_lime_system_open_url; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_icon") ) { outValue = cffi_lime_window_set_icon; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_zlib_decompress") ) { outValue = cffi_lime_zlib_decompress; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_booleanv") ) { outValue = cffi_lime_al_get_booleanv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_buffer3f") ) { outValue = cffi_lime_al_get_buffer3f; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_buffer3i") ) { outValue = cffi_lime_al_get_buffer3i; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_bufferfv") ) { outValue = cffi_lime_al_get_bufferfv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_bufferiv") ) { outValue = cffi_lime_al_get_bufferiv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_integerv") ) { outValue = cffi_lime_al_get_integerv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_source3f") ) { outValue = cffi_lime_al_get_source3f; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_source3i") ) { outValue = cffi_lime_al_get_source3i; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_sourcefv") ) { outValue = cffi_lime_al_get_sourcefv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_sourceiv") ) { outValue = cffi_lime_al_get_sourceiv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_source_pause") ) { outValue = cffi_lime_al_source_pause; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_source_playv") ) { outValue = cffi_lime_al_source_playv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_source_stopv") ) { outValue = cffi_lime_al_source_stopv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_open_device") ) { outValue = cffi_lime_alc_open_device; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_copy_page") ) { outValue = cffi_lime_cairo_copy_page; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_in_stroke") ) { outValue = cffi_lime_cairo_in_stroke; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pop_group") ) { outValue = cffi_lime_cairo_pop_group; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_rectangle") ) { outValue = cffi_lime_cairo_rectangle; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_show_page") ) { outValue = cffi_lime_cairo_show_page; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_show_text") ) { outValue = cffi_lime_cairo_show_text; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_text_path") ) { outValue = cffi_lime_cairo_text_path; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_transform") ) { outValue = cffi_lime_cairo_transform; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_translate") ) { outValue = cffi_lime_cairo_translate; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_pause") ) { outValue = cffi_lime_curl_easy_pause; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_reset") ) { outValue = cffi_lime_curl_easy_reset; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_bind_texture") ) { outValue = cffi_lime_gl_bind_texture; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_clear_depthf") ) { outValue = cffi_lime_gl_clear_depthf; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_depth_rangef") ) { outValue = cffi_lime_gl_depth_rangef; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_booleanv") ) { outValue = cffi_lime_gl_get_booleanv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_integerv") ) { outValue = cffi_lime_gl_get_integerv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_programi") ) { outValue = cffi_lime_gl_get_programi; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_shaderiv") ) { outValue = cffi_lime_gl_get_shaderiv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_uniformf") ) { outValue = cffi_lime_gl_get_uniformf; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_uniformi") ) { outValue = cffi_lime_gl_get_uniformi; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_link_program") ) { outValue = cffi_lime_gl_link_program; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_pixel_storei") ) { outValue = cffi_lime_gl_pixel_storei; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_stencil_func") ) { outValue = cffi_lime_gl_stencil_func; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_stencil_mask") ) { outValue = cffi_lime_gl_stencil_mask; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_tex_image_2d") ) { outValue = cffi_lime_gl_tex_image_2d; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_file_dialog_open_file") ) { outValue = lime_file_dialog_open_file_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_file_dialog_save_file") ) { outValue = lime_file_dialog_save_file_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_font_get_units_per_em") ) { outValue = lime_font_get_units_per_em_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_merge") ) { outValue = lime_image_data_util_merge_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_joystick_get_num_axes") ) { outValue = lime_joystick_get_num_axes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_joystick_get_num_hats") ) { outValue = lime_joystick_get_num_hats_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_key_code_to_scan_code") ) { outValue = lime_key_code_to_scan_code_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_renderer_make_current") ) { outValue = lime_renderer_make_current_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_system_get_ios_tablet") ) { outValue = lime_system_get_ios_tablet_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_set_borderless") ) { outValue = lime_window_set_borderless_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_set_fullscreen") ) { outValue = lime_window_set_fullscreen_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_miter_limit") ) { outValue = lime_cairo_get_miter_limit_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_identity_matrix") ) { outValue = lime_cairo_identity_matrix_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_miter_limit") ) { outValue = lime_cairo_set_miter_limit_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_source_rgba") ) { outValue = lime_cairo_set_source_rgba_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_stroke_preserve") ) { outValue = lime_cairo_stroke_preserve_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_create_framebuffer") ) { outValue = lime_gl_create_framebuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_framebuffer") ) { outValue = lime_gl_delete_framebuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_active_uniform") ) { outValue = lime_gl_get_active_uniform_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_tex_parameterf") ) { outValue = lime_gl_get_tex_parameterf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_tex_parameteri") ) { outValue = lime_gl_get_tex_parameteri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_vertex_attribi") ) { outValue = lime_gl_get_vertex_attribi_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_from_file") ) { outValue = lime_vorbis_file_from_file_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_pcm_total") ) { outValue = lime_vorbis_file_pcm_total_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_raw_total") ) { outValue = lime_vorbis_file_raw_total_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_time_seek") ) { outValue = lime_vorbis_file_time_seek_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_time_tell") ) { outValue = lime_vorbis_file_time_tell_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_application_exec") ) { outValue = cffi_lime_application_exec; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_application_init") ) { outValue = cffi_lime_application_init; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_application_quit") ) { outValue = cffi_lime_application_quit; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_deflate_compress") ) { outValue = cffi_lime_deflate_compress; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_jpeg_decode_file") ) { outValue = cffi_lime_jpeg_decode_file; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_mouse_set_cursor") ) { outValue = cffi_lime_mouse_set_cursor; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_png_decode_bytes") ) { outValue = cffi_lime_png_decode_bytes; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_system_get_timer") ) { outValue = cffi_lime_system_get_timer; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_system_open_file") ) { outValue = cffi_lime_system_open_file; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_width") ) { outValue = cffi_lime_window_get_width; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_title") ) { outValue = cffi_lime_window_set_title; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_delete_buffer") ) { outValue = cffi_lime_al_delete_buffer; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_delete_source") ) { outValue = cffi_lime_al_delete_source; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_listenerf") ) { outValue = cffi_lime_al_get_listenerf; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_listeneri") ) { outValue = cffi_lime_al_get_listeneri; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_source_pausev") ) { outValue = cffi_lime_al_source_pausev; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_source_rewind") ) { outValue = cffi_lime_al_source_rewind; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_close_device") ) { outValue = cffi_lime_alc_close_device; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_get_integerv") ) { outValue = cffi_lime_alc_get_integerv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_pause_device") ) { outValue = cffi_lime_alc_pause_device; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_close_path") ) { outValue = cffi_lime_cairo_close_path; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_matrix") ) { outValue = cffi_lime_cairo_get_matrix; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_source") ) { outValue = cffi_lime_cairo_get_source; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_target") ) { outValue = cffi_lime_cairo_get_target; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_push_group") ) { outValue = cffi_lime_cairo_push_group; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_reset_clip") ) { outValue = cffi_lime_cairo_reset_clip; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_matrix") ) { outValue = cffi_lime_cairo_set_matrix; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_source") ) { outValue = cffi_lime_cairo_set_source; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_global_init") ) { outValue = cffi_lime_curl_global_init; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_escape") ) { outValue = cffi_lime_curl_easy_escape; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_setopt") ) { outValue = cffi_lime_curl_easy_setopt; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_attach_shader") ) { outValue = cffi_lime_gl_attach_shader; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_clear_stencil") ) { outValue = cffi_lime_gl_clear_stencil; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_create_buffer") ) { outValue = cffi_lime_gl_create_buffer; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_create_shader") ) { outValue = cffi_lime_gl_create_shader; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_delete_buffer") ) { outValue = cffi_lime_gl_delete_buffer; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_delete_shader") ) { outValue = cffi_lime_gl_delete_shader; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_detach_shader") ) { outValue = cffi_lime_gl_detach_shader; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_draw_elements") ) { outValue = cffi_lime_gl_draw_elements; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_extension") ) { outValue = cffi_lime_gl_get_extension; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_programiv") ) { outValue = cffi_lime_gl_get_programiv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_uniformfv") ) { outValue = cffi_lime_gl_get_uniformfv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_uniformiv") ) { outValue = cffi_lime_gl_get_uniformiv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_shader_source") ) { outValue = cffi_lime_gl_shader_source; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_info") ) { outValue = cffi_lime_vorbis_file_info; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_read") ) { outValue = cffi_lime_vorbis_file_read; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_bytes_get_data_pointer") ) { outValue = lime_bytes_get_data_pointer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_file_dialog_open_files") ) { outValue = lime_file_dialog_open_files_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_font_get_glyph_indices") ) { outValue = lime_font_get_glyph_indices_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_font_get_glyph_metrics") ) { outValue = lime_font_get_glyph_metrics_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_font_outline_decompose") ) { outValue = lime_font_outline_decompose_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_resize") ) { outValue = lime_image_data_util_resize_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_layout_set_script") ) { outValue = lime_text_layout_set_script_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_font_options") ) { outValue = lime_cairo_get_font_options_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_group_target") ) { outValue = lime_cairo_get_group_target_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_paint_with_alpha") ) { outValue = lime_cairo_paint_with_alpha_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_font_options") ) { outValue = lime_cairo_set_font_options_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_font_face_status") ) { outValue = lime_cairo_font_face_status_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_blend_func_separate") ) { outValue = lime_gl_blend_func_separate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_create_renderbuffer") ) { outValue = lime_gl_create_renderbuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_renderbuffer") ) { outValue = lime_gl_delete_renderbuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_attrib_location") ) { outValue = lime_gl_get_attrib_location_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shader_info_log") ) { outValue = lime_gl_get_shader_info_log_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_tex_parameterfv") ) { outValue = lime_gl_get_tex_parameterfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_tex_parameteriv") ) { outValue = lime_gl_get_tex_parameteriv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_vertex_attribiv") ) { outValue = lime_gl_get_vertex_attribiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_op_separate") ) { outValue = lime_gl_stencil_op_separate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_from_bytes") ) { outValue = lime_vorbis_file_from_bytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_read_float") ) { outValue = lime_vorbis_file_read_float_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_time_total") ) { outValue = lime_vorbis_file_time_total_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_ascender") ) { outValue = cffi_lime_font_get_ascender; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_render_glyph") ) { outValue = cffi_lime_font_render_glyph; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_jpeg_decode_bytes") ) { outValue = cffi_lime_jpeg_decode_bytes; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_get_type") ) { outValue = cffi_lime_renderer_get_type; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_height") ) { outValue = cffi_lime_window_get_height; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_delete_buffers") ) { outValue = cffi_lime_al_delete_buffers; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_delete_sources") ) { outValue = cffi_lime_al_delete_sources; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_distance_model") ) { outValue = cffi_lime_al_distance_model; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_doppler_factor") ) { outValue = cffi_lime_al_doppler_factor; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_enum_value") ) { outValue = cffi_lime_al_get_enum_value; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_listener3f") ) { outValue = cffi_lime_al_get_listener3f; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_listener3i") ) { outValue = cffi_lime_al_get_listener3i; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_listenerfv") ) { outValue = cffi_lime_al_get_listenerfv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_listeneriv") ) { outValue = cffi_lime_al_get_listeneriv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_source_rewindv") ) { outValue = cffi_lime_al_source_rewindv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_speed_of_sound") ) { outValue = cffi_lime_al_speed_of_sound; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_resume_device") ) { outValue = cffi_lime_alc_resume_device; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_rel_line_to") ) { outValue = cffi_lime_cairo_rel_line_to; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_rel_move_to") ) { outValue = cffi_lime_cairo_rel_move_to; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_show_glyphs") ) { outValue = cffi_lime_cairo_show_glyphs; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_version_info") ) { outValue = cffi_lime_curl_version_info; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_cleanup") ) { outValue = cffi_lime_curl_easy_cleanup; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_getinfo") ) { outValue = cffi_lime_curl_easy_getinfo; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_perform") ) { outValue = cffi_lime_curl_easy_perform; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_active_texture") ) { outValue = cffi_lime_gl_active_texture; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_blend_equation") ) { outValue = cffi_lime_gl_blend_equation; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_compile_shader") ) { outValue = cffi_lime_gl_compile_shader; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_create_program") ) { outValue = cffi_lime_gl_create_program; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_create_texture") ) { outValue = cffi_lime_gl_create_texture; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_delete_program") ) { outValue = cffi_lime_gl_delete_program; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_delete_texture") ) { outValue = cffi_lime_gl_delete_texture; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_is_framebuffer") ) { outValue = cffi_lime_gl_is_framebuffer; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_object_from_id") ) { outValue = cffi_lime_gl_object_from_id; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_polygon_offset") ) { outValue = cffi_lime_gl_polygon_offset; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_tex_parameterf") ) { outValue = cffi_lime_gl_tex_parameterf; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_tex_parameteri") ) { outValue = cffi_lime_gl_tex_parameteri; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_clear") ) { outValue = cffi_lime_vorbis_file_clear; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_bytes_from_data_pointer") ) { outValue = lime_bytes_from_data_pointer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cffi_get_native_pointer") ) { outValue = lime_cffi_get_native_pointer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gamepad_get_device_guid") ) { outValue = lime_gamepad_get_device_guid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gamepad_get_device_name") ) { outValue = lime_gamepad_get_device_name_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_key_code_from_scan_code") ) { outValue = lime_key_code_from_scan_code_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_system_get_num_displays") ) { outValue = lime_system_get_num_displays_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_get_display_mode") ) { outValue = lime_window_get_display_mode_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_set_display_mode") ) { outValue = lime_window_set_display_mode_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_is_extension_present") ) { outValue = lime_al_is_extension_present_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_source_queue_buffers") ) { outValue = lime_al_source_queue_buffers_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_alc_get_contexts_device") ) { outValue = lime_alc_get_contexts_device_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_alc_get_current_context") ) { outValue = lime_alc_get_current_context_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_current_point") ) { outValue = lime_cairo_get_current_point_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_has_current_point") ) { outValue = lime_cairo_has_current_point_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_bind_attrib_location") ) { outValue = lime_gl_bind_attrib_location_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_attached_shaders") ) { outValue = lime_gl_get_attached_shaders_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_program_info_log") ) { outValue = lime_gl_get_program_info_log_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_uniform_location") ) { outValue = lime_gl_get_uniform_location_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_renderbuffer_storage") ) { outValue = lime_gl_renderbuffer_storage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_application_create") ) { outValue = cffi_lime_application_create; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_application_update") ) { outValue = cffi_lime_application_update; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_clipboard_get_text") ) { outValue = cffi_lime_clipboard_get_text; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_clipboard_set_text") ) { outValue = cffi_lime_clipboard_set_text; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_deflate_decompress") ) { outValue = cffi_lime_deflate_decompress; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_descender") ) { outValue = cffi_lime_font_get_descender; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_render_glyphs") ) { outValue = cffi_lime_font_render_glyphs; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_get_scale") ) { outValue = cffi_lime_renderer_get_scale; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_system_get_display") ) { outValue = cffi_lime_system_get_display; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_create") ) { outValue = cffi_lime_text_layout_create; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_display") ) { outValue = cffi_lime_window_get_display; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_create_context") ) { outValue = cffi_lime_alc_create_context; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_arc_negative") ) { outValue = cffi_lime_cairo_arc_negative; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_clip_extents") ) { outValue = cffi_lime_cairo_clip_extents; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_fill_extents") ) { outValue = cffi_lime_cairo_fill_extents; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_line_cap") ) { outValue = cffi_lime_cairo_get_line_cap; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_operator") ) { outValue = cffi_lime_cairo_get_operator; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_mask_surface") ) { outValue = cffi_lime_cairo_mask_surface; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_rel_curve_to") ) { outValue = cffi_lime_cairo_rel_curve_to; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_line_cap") ) { outValue = cffi_lime_cairo_set_line_cap; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_operator") ) { outValue = cffi_lime_cairo_set_operator; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_strerror") ) { outValue = cffi_lime_curl_easy_strerror; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_unescape") ) { outValue = cffi_lime_curl_easy_unescape; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_buffer_sub_data") ) { outValue = cffi_lime_gl_buffer_sub_data; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_generate_mipmap") ) { outValue = cffi_lime_gl_generate_mipmap; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_is_renderbuffer") ) { outValue = cffi_lime_gl_is_renderbuffer; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_object_register") ) { outValue = cffi_lime_gl_object_register; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_sample_coverage") ) { outValue = cffi_lime_gl_sample_coverage; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_vertex_attrib1f") ) { outValue = cffi_lime_gl_vertex_attrib1f; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_vertex_attrib2f") ) { outValue = cffi_lime_gl_vertex_attrib2f; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_vertex_attrib3f") ) { outValue = cffi_lime_gl_vertex_attrib3f; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_vertex_attrib4f") ) { outValue = cffi_lime_gl_vertex_attrib4f; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_joystick_get_device_guid") ) { outValue = lime_joystick_get_device_guid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_joystick_get_device_name") ) { outValue = lime_joystick_get_device_name_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_joystick_get_num_buttons") ) { outValue = lime_joystick_get_num_buttons_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_layout_set_language") ) { outValue = lime_text_layout_set_language_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_alc_make_context_current") ) { outValue = lime_alc_make_context_current_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_source_surface") ) { outValue = lime_cairo_set_source_surface_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_create_rgb") ) { outValue = lime_cairo_pattern_create_rgb_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_get_extend") ) { outValue = lime_cairo_pattern_get_extend_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_get_filter") ) { outValue = lime_cairo_pattern_get_filter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_get_matrix") ) { outValue = lime_cairo_pattern_get_matrix_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_set_extend") ) { outValue = lime_cairo_pattern_set_extend_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_set_filter") ) { outValue = lime_cairo_pattern_set_filter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_set_matrix") ) { outValue = lime_cairo_pattern_set_matrix_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_copy_tex_sub_image_2d") ) { outValue = lime_gl_copy_tex_sub_image_2d_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_framebuffer_texture2D") ) { outValue = lime_gl_framebuffer_texture2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_buffer_parameteri") ) { outValue = lime_gl_get_buffer_parameteri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_func_separate") ) { outValue = lime_gl_stencil_func_separate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_mask_separate") ) { outValue = lime_gl_stencil_mask_separate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib_pointer") ) { outValue = lime_gl_vertex_attrib_pointer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_pcm_seek_lap") ) { outValue = lime_vorbis_file_pcm_seek_lap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_raw_seek_lap") ) { outValue = lime_vorbis_file_raw_seek_lap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_data_pointer_offset") ) { outValue = cffi_lime_data_pointer_offset; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_num_glyphs") ) { outValue = cffi_lime_font_get_num_glyphs; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_doppler_velocity") ) { outValue = cffi_lime_al_doppler_velocity; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_proc_address") ) { outValue = cffi_lime_al_get_proc_address; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_destroy_context") ) { outValue = cffi_lime_alc_destroy_context; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_process_context") ) { outValue = cffi_lime_alc_process_context; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_suspend_context") ) { outValue = cffi_lime_alc_suspend_context; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_clip_preserve") ) { outValue = cffi_lime_cairo_clip_preserve; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_fill_preserve") ) { outValue = cffi_lime_cairo_fill_preserve; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_antialias") ) { outValue = cffi_lime_cairo_get_antialias; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_fill_rule") ) { outValue = cffi_lime_cairo_get_fill_rule; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_font_face") ) { outValue = cffi_lime_cairo_get_font_face; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_line_join") ) { outValue = cffi_lime_cairo_get_line_join; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_tolerance") ) { outValue = cffi_lime_cairo_get_tolerance; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_antialias") ) { outValue = cffi_lime_cairo_set_antialias; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_fill_rule") ) { outValue = cffi_lime_cairo_set_fill_rule; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_font_face") ) { outValue = cffi_lime_cairo_set_font_face; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_font_size") ) { outValue = cffi_lime_cairo_set_font_size; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_line_join") ) { outValue = cffi_lime_cairo_set_line_join; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_tolerance") ) { outValue = cffi_lime_cairo_set_tolerance; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_surface_flush") ) { outValue = cffi_lime_cairo_surface_flush; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_global_cleanup") ) { outValue = cffi_lime_curl_global_cleanup; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_duphandle") ) { outValue = cffi_lime_curl_easy_duphandle; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_bind_framebuffer") ) { outValue = cffi_lime_gl_bind_framebuffer; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_tex_sub_image_2d") ) { outValue = cffi_lime_gl_tex_sub_image_2d; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_validate_program") ) { outValue = cffi_lime_gl_validate_program; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_vertex_attrib1fv") ) { outValue = cffi_lime_gl_vertex_attrib1fv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_vertex_attrib2fv") ) { outValue = cffi_lime_gl_vertex_attrib2fv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_vertex_attrib3fv") ) { outValue = cffi_lime_gl_vertex_attrib3fv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_vertex_attrib4fv") ) { outValue = cffi_lime_gl_vertex_attrib4fv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_bitrate") ) { outValue = cffi_lime_vorbis_file_bitrate; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_comment") ) { outValue = cffi_lime_vorbis_file_comment; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_streams") ) { outValue = cffi_lime_vorbis_file_streams; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_fill_rect") ) { outValue = lime_image_data_util_fill_rect_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_threshold") ) { outValue = lime_image_data_util_threshold_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_layout_set_direction") ) { outValue = lime_text_layout_set_direction_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_source_unqueue_buffers") ) { outValue = lime_al_source_unqueue_buffers_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_pop_group_to_source") ) { outValue = lime_cairo_pop_group_to_source_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_create") ) { outValue = lime_cairo_font_options_create_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_ft_font_face_create") ) { outValue = lime_cairo_ft_font_face_create_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_create_rgba") ) { outValue = lime_cairo_pattern_create_rgba_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_buffer_parameteriv") ) { outValue = lime_gl_get_buffer_parameteriv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_context_attributes") ) { outValue = lime_gl_get_context_attributes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_pcm_seek_page") ) { outValue = lime_vorbis_file_pcm_seek_page_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_serial_number") ) { outValue = lime_vorbis_file_serial_number_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_time_seek_lap") ) { outValue = lime_vorbis_file_time_seek_lap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_family_name") ) { outValue = cffi_lime_font_get_family_name; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_glyph_index") ) { outValue = cffi_lime_font_get_glyph_index; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gamepad_add_mappings") ) { outValue = cffi_lime_gamepad_add_mappings; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_get_context") ) { outValue = cffi_lime_renderer_get_context; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_read_pixels") ) { outValue = cffi_lime_renderer_read_pixels; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_system_get_directory") ) { outValue = cffi_lime_system_get_directory; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_position") ) { outValue = cffi_lime_text_layout_position; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_maximized") ) { outValue = cffi_lime_window_set_maximized; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_minimized") ) { outValue = cffi_lime_window_set_minimized; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_resizable") ) { outValue = cffi_lime_window_set_resizable; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_dash_count") ) { outValue = cffi_lime_cairo_get_dash_count; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_line_width") ) { outValue = cffi_lime_cairo_get_line_width; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_line_width") ) { outValue = cffi_lime_cairo_set_line_width; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_source_rgb") ) { outValue = cffi_lime_cairo_set_source_rgb; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_stroke_extents") ) { outValue = cffi_lime_cairo_stroke_extents; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_version_string") ) { outValue = cffi_lime_cairo_version_string; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_bind_renderbuffer") ) { outValue = cffi_lime_gl_bind_renderbuffer; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_copy_tex_image_2d") ) { outValue = cffi_lime_gl_copy_tex_image_2d; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_active_attrib") ) { outValue = cffi_lime_gl_get_active_attrib; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_shader_source") ) { outValue = cffi_lime_gl_get_shader_source; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_object_deregister") ) { outValue = cffi_lime_gl_object_deregister; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform_matrix2fv") ) { outValue = cffi_lime_gl_uniform_matrix2fv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform_matrix3fv") ) { outValue = cffi_lime_gl_uniform_matrix3fv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform_matrix4fv") ) { outValue = cffi_lime_gl_uniform_matrix4fv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_crosslap") ) { outValue = cffi_lime_vorbis_file_crosslap; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_pcm_seek") ) { outValue = cffi_lime_vorbis_file_pcm_seek; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_raw_seek") ) { outValue = cffi_lime_vorbis_file_raw_seek; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_pcm_tell") ) { outValue = cffi_lime_vorbis_file_pcm_tell; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_raw_tell") ) { outValue = cffi_lime_vorbis_file_raw_tell; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_seekable") ) { outValue = cffi_lime_vorbis_file_seekable; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_application_set_frame_rate") ) { outValue = lime_application_set_frame_rate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_file_dialog_open_directory") ) { outValue = lime_file_dialog_open_directory_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_flood_fill") ) { outValue = lime_image_data_util_flood_fill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_get_pixels") ) { outValue = lime_image_data_util_get_pixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_set_format") ) { outValue = lime_image_data_util_set_format_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_set_pixels") ) { outValue = lime_image_data_util_set_pixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_key_event_manager_register") ) { outValue = lime_key_event_manager_register_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_image_surface_create") ) { outValue = lime_cairo_image_surface_create_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_blend_equation_separate") ) { outValue = lime_gl_blend_equation_separate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_compressed_tex_image_2d") ) { outValue = lime_gl_compressed_tex_image_2d_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_time_seek_page") ) { outValue = lime_vorbis_file_time_seek_page_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_file_dialog_open_file") ) { outValue = cffi_lime_file_dialog_open_file; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_file_dialog_save_file") ) { outValue = cffi_lime_file_dialog_save_file; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_units_per_em") ) { outValue = cffi_lime_font_get_units_per_em; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_merge") ) { outValue = cffi_lime_image_data_util_merge; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_num_axes") ) { outValue = cffi_lime_joystick_get_num_axes; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_num_hats") ) { outValue = cffi_lime_joystick_get_num_hats; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_key_code_to_scan_code") ) { outValue = cffi_lime_key_code_to_scan_code; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_make_current") ) { outValue = cffi_lime_renderer_make_current; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_system_get_ios_tablet") ) { outValue = cffi_lime_system_get_ios_tablet; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_borderless") ) { outValue = cffi_lime_window_set_borderless; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_fullscreen") ) { outValue = cffi_lime_window_set_fullscreen; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_miter_limit") ) { outValue = cffi_lime_cairo_get_miter_limit; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_identity_matrix") ) { outValue = cffi_lime_cairo_identity_matrix; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_miter_limit") ) { outValue = cffi_lime_cairo_set_miter_limit; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_source_rgba") ) { outValue = cffi_lime_cairo_set_source_rgba; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_stroke_preserve") ) { outValue = cffi_lime_cairo_stroke_preserve; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_create_framebuffer") ) { outValue = cffi_lime_gl_create_framebuffer; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_delete_framebuffer") ) { outValue = cffi_lime_gl_delete_framebuffer; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_active_uniform") ) { outValue = cffi_lime_gl_get_active_uniform; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_tex_parameterf") ) { outValue = cffi_lime_gl_get_tex_parameterf; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_tex_parameteri") ) { outValue = cffi_lime_gl_get_tex_parameteri; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_vertex_attribi") ) { outValue = cffi_lime_gl_get_vertex_attribi; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_from_file") ) { outValue = cffi_lime_vorbis_file_from_file; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_pcm_total") ) { outValue = cffi_lime_vorbis_file_pcm_total; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_raw_total") ) { outValue = cffi_lime_vorbis_file_raw_total; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_time_seek") ) { outValue = cffi_lime_vorbis_file_time_seek; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_time_tell") ) { outValue = cffi_lime_vorbis_file_time_tell; return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_drop_event_manager_register") ) { outValue = lime_drop_event_manager_register_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_font_get_underline_position") ) { outValue = lime_font_get_underline_position_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_copy_pixels") ) { outValue = lime_image_data_util_copy_pixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_joystick_get_num_trackballs") ) { outValue = lime_joystick_get_num_trackballs_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_event_manager_register") ) { outValue = lime_text_event_manager_register_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_create_linear") ) { outValue = lime_cairo_pattern_create_linear_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_create_radial") ) { outValue = lime_cairo_pattern_create_radial_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_check_framebuffer_status") ) { outValue = lime_gl_check_framebuffer_status_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_framebuffer_renderbuffer") ) { outValue = lime_gl_framebuffer_renderbuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_bitrate_instant") ) { outValue = lime_vorbis_file_bitrate_instant_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_bytes_get_data_pointer") ) { outValue = cffi_lime_bytes_get_data_pointer; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_file_dialog_open_files") ) { outValue = cffi_lime_file_dialog_open_files; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_glyph_indices") ) { outValue = cffi_lime_font_get_glyph_indices; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_glyph_metrics") ) { outValue = cffi_lime_font_get_glyph_metrics; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_outline_decompose") ) { outValue = cffi_lime_font_outline_decompose; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_resize") ) { outValue = cffi_lime_image_data_util_resize; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_set_script") ) { outValue = cffi_lime_text_layout_set_script; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_font_options") ) { outValue = cffi_lime_cairo_get_font_options; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_group_target") ) { outValue = cffi_lime_cairo_get_group_target; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_paint_with_alpha") ) { outValue = cffi_lime_cairo_paint_with_alpha; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_font_options") ) { outValue = cffi_lime_cairo_set_font_options; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_font_face_status") ) { outValue = cffi_lime_cairo_font_face_status; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_blend_func_separate") ) { outValue = cffi_lime_gl_blend_func_separate; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_create_renderbuffer") ) { outValue = cffi_lime_gl_create_renderbuffer; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_delete_renderbuffer") ) { outValue = cffi_lime_gl_delete_renderbuffer; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_attrib_location") ) { outValue = cffi_lime_gl_get_attrib_location; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_shader_info_log") ) { outValue = cffi_lime_gl_get_shader_info_log; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_tex_parameterfv") ) { outValue = cffi_lime_gl_get_tex_parameterfv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_tex_parameteriv") ) { outValue = cffi_lime_gl_get_tex_parameteriv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_vertex_attribiv") ) { outValue = cffi_lime_gl_get_vertex_attribiv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_stencil_op_separate") ) { outValue = cffi_lime_gl_stencil_op_separate; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_from_bytes") ) { outValue = cffi_lime_vorbis_file_from_bytes; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_read_float") ) { outValue = cffi_lime_vorbis_file_read_float; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_time_total") ) { outValue = cffi_lime_vorbis_file_time_total; return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_font_get_underline_thickness") ) { outValue = lime_font_get_underline_thickness_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_copy_channel") ) { outValue = lime_image_data_util_copy_channel_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_mouse_event_manager_register") ) { outValue = lime_mouse_event_manager_register_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_touch_event_manager_register") ) { outValue = lime_touch_event_manager_register_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_image_surface_get_data") ) { outValue = lime_cairo_image_surface_get_data_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_bytes_from_data_pointer") ) { outValue = cffi_lime_bytes_from_data_pointer; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cffi_get_native_pointer") ) { outValue = cffi_lime_cffi_get_native_pointer; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gamepad_get_device_guid") ) { outValue = cffi_lime_gamepad_get_device_guid; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gamepad_get_device_name") ) { outValue = cffi_lime_gamepad_get_device_name; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_key_code_from_scan_code") ) { outValue = cffi_lime_key_code_from_scan_code; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_system_get_num_displays") ) { outValue = cffi_lime_system_get_num_displays; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_display_mode") ) { outValue = cffi_lime_window_get_display_mode; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_display_mode") ) { outValue = cffi_lime_window_set_display_mode; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_is_extension_present") ) { outValue = cffi_lime_al_is_extension_present; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_source_queue_buffers") ) { outValue = cffi_lime_al_source_queue_buffers; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_get_contexts_device") ) { outValue = cffi_lime_alc_get_contexts_device; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_get_current_context") ) { outValue = cffi_lime_alc_get_current_context; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_current_point") ) { outValue = cffi_lime_cairo_get_current_point; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_has_current_point") ) { outValue = cffi_lime_cairo_has_current_point; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_bind_attrib_location") ) { outValue = cffi_lime_gl_bind_attrib_location; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_attached_shaders") ) { outValue = cffi_lime_gl_get_attached_shaders; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_program_info_log") ) { outValue = cffi_lime_gl_get_program_info_log; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_uniform_location") ) { outValue = cffi_lime_gl_get_uniform_location; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_renderbuffer_storage") ) { outValue = cffi_lime_gl_renderbuffer_storage; return true;  }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_bytes_get_data_pointer_offset") ) { outValue = lime_bytes_get_data_pointer_offset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_render_event_manager_register") ) { outValue = lime_render_event_manager_register_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_sensor_event_manager_register") ) { outValue = lime_sensor_event_manager_register_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_get_enable_text_events") ) { outValue = lime_window_get_enable_text_events_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_set_enable_text_events") ) { outValue = lime_window_set_enable_text_events_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_event_manager_register") ) { outValue = lime_window_event_manager_register_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_push_group_with_content") ) { outValue = lime_cairo_push_group_with_content_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_image_surface_get_width") ) { outValue = lime_cairo_image_surface_get_width_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_enable_vertex_attrib_array") ) { outValue = lime_gl_enable_vertex_attrib_array_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_vertex_attrib_pointerv") ) { outValue = lime_gl_get_vertex_attrib_pointerv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_pcm_seek_page_lap") ) { outValue = lime_vorbis_file_pcm_seek_page_lap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_device_guid") ) { outValue = cffi_lime_joystick_get_device_guid; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_device_name") ) { outValue = cffi_lime_joystick_get_device_name; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_num_buttons") ) { outValue = cffi_lime_joystick_get_num_buttons; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_set_language") ) { outValue = cffi_lime_text_layout_set_language; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_make_context_current") ) { outValue = cffi_lime_alc_make_context_current; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_source_surface") ) { outValue = cffi_lime_cairo_set_source_surface; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_create_rgb") ) { outValue = cffi_lime_cairo_pattern_create_rgb; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_get_extend") ) { outValue = cffi_lime_cairo_pattern_get_extend; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_get_filter") ) { outValue = cffi_lime_cairo_pattern_get_filter; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_get_matrix") ) { outValue = cffi_lime_cairo_pattern_get_matrix; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_set_extend") ) { outValue = cffi_lime_cairo_pattern_set_extend; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_set_filter") ) { outValue = cffi_lime_cairo_pattern_set_filter; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_set_matrix") ) { outValue = cffi_lime_cairo_pattern_set_matrix; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_copy_tex_sub_image_2d") ) { outValue = cffi_lime_gl_copy_tex_sub_image_2d; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_framebuffer_texture2D") ) { outValue = cffi_lime_gl_framebuffer_texture2D; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_buffer_parameteri") ) { outValue = cffi_lime_gl_get_buffer_parameteri; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_stencil_func_separate") ) { outValue = cffi_lime_gl_stencil_func_separate; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_stencil_mask_separate") ) { outValue = cffi_lime_gl_stencil_mask_separate; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_vertex_attrib_pointer") ) { outValue = cffi_lime_gl_vertex_attrib_pointer; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_pcm_seek_lap") ) { outValue = cffi_lime_vorbis_file_pcm_seek_lap; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_raw_seek_lap") ) { outValue = cffi_lime_vorbis_file_raw_seek_lap; return true;  }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_gamepad_event_manager_register") ) { outValue = lime_gamepad_event_manager_register_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_multiply_alpha") ) { outValue = lime_image_data_util_multiply_alpha_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_image_surface_get_format") ) { outValue = lime_cairo_image_surface_get_format_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_image_surface_get_height") ) { outValue = lime_cairo_image_surface_get_height_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_image_surface_get_stride") ) { outValue = lime_cairo_image_surface_get_stride_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_compressed_tex_sub_image_2d") ) { outValue = lime_gl_compressed_tex_sub_image_2d_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_disable_vertex_attrib_array") ) { outValue = lime_gl_disable_vertex_attrib_array_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_renderbuffer_parameteri") ) { outValue = lime_gl_get_renderbuffer_parameteri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shader_precision_format") ) { outValue = lime_gl_get_shader_precision_format_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_vorbis_file_time_seek_page_lap") ) { outValue = lime_vorbis_file_time_seek_page_lap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_fill_rect") ) { outValue = cffi_lime_image_data_util_fill_rect; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_threshold") ) { outValue = cffi_lime_image_data_util_threshold; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_set_direction") ) { outValue = cffi_lime_text_layout_set_direction; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_source_unqueue_buffers") ) { outValue = cffi_lime_al_source_unqueue_buffers; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pop_group_to_source") ) { outValue = cffi_lime_cairo_pop_group_to_source; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_font_options_create") ) { outValue = cffi_lime_cairo_font_options_create; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_ft_font_face_create") ) { outValue = cffi_lime_cairo_ft_font_face_create; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_create_rgba") ) { outValue = cffi_lime_cairo_pattern_create_rgba; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_buffer_parameteriv") ) { outValue = cffi_lime_gl_get_buffer_parameteriv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_context_attributes") ) { outValue = cffi_lime_gl_get_context_attributes; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_pcm_seek_page") ) { outValue = cffi_lime_vorbis_file_pcm_seek_page; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_serial_number") ) { outValue = cffi_lime_vorbis_file_serial_number; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_time_seek_lap") ) { outValue = cffi_lime_vorbis_file_time_seek_lap; return true;  }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_color_transform") ) { outValue = lime_image_data_util_color_transform_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_joystick_event_manager_register") ) { outValue = lime_joystick_event_manager_register_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_system_get_allow_screen_timeout") ) { outValue = lime_system_get_allow_screen_timeout_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_system_set_allow_screen_timeout") ) { outValue = lime_system_set_allow_screen_timeout_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_renderbuffer_parameteriv") ) { outValue = lime_gl_get_renderbuffer_parameteriv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_application_set_frame_rate") ) { outValue = cffi_lime_application_set_frame_rate; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_file_dialog_open_directory") ) { outValue = cffi_lime_file_dialog_open_directory; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_flood_fill") ) { outValue = cffi_lime_image_data_util_flood_fill; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_get_pixels") ) { outValue = cffi_lime_image_data_util_get_pixels; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_set_format") ) { outValue = cffi_lime_image_data_util_set_format; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_set_pixels") ) { outValue = cffi_lime_image_data_util_set_pixels; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_key_event_manager_register") ) { outValue = cffi_lime_key_event_manager_register; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_image_surface_create") ) { outValue = cffi_lime_cairo_image_surface_create; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_blend_equation_separate") ) { outValue = cffi_lime_gl_blend_equation_separate; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_compressed_tex_image_2d") ) { outValue = cffi_lime_gl_compressed_tex_image_2d; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_time_seek_page") ) { outValue = cffi_lime_vorbis_file_time_seek_page; return true;  }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_unmultiply_alpha") ) { outValue = lime_image_data_util_unmultiply_alpha_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_get_antialias") ) { outValue = lime_cairo_font_options_get_antialias_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_set_antialias") ) { outValue = lime_cairo_font_options_set_antialias_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_add_color_stop_rgb") ) { outValue = lime_cairo_pattern_add_color_stop_rgb_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_create_for_surface") ) { outValue = lime_cairo_pattern_create_for_surface_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_drop_event_manager_register") ) { outValue = cffi_lime_drop_event_manager_register; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_underline_position") ) { outValue = cffi_lime_font_get_underline_position; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_copy_pixels") ) { outValue = cffi_lime_image_data_util_copy_pixels; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_num_trackballs") ) { outValue = cffi_lime_joystick_get_num_trackballs; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_text_event_manager_register") ) { outValue = cffi_lime_text_event_manager_register; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_create_linear") ) { outValue = cffi_lime_cairo_pattern_create_linear; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_create_radial") ) { outValue = cffi_lime_cairo_pattern_create_radial; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_check_framebuffer_status") ) { outValue = cffi_lime_gl_check_framebuffer_status; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_framebuffer_renderbuffer") ) { outValue = cffi_lime_gl_framebuffer_renderbuffer; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_bitrate_instant") ) { outValue = cffi_lime_vorbis_file_bitrate_instant; return true;  }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_get_hint_style") ) { outValue = lime_cairo_font_options_get_hint_style_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_set_hint_style") ) { outValue = lime_cairo_font_options_set_hint_style_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_add_color_stop_rgba") ) { outValue = lime_cairo_pattern_add_color_stop_rgba_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_underline_thickness") ) { outValue = cffi_lime_font_get_underline_thickness; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_copy_channel") ) { outValue = cffi_lime_image_data_util_copy_channel; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_mouse_event_manager_register") ) { outValue = cffi_lime_mouse_event_manager_register; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_touch_event_manager_register") ) { outValue = cffi_lime_touch_event_manager_register; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_image_surface_get_data") ) { outValue = cffi_lime_cairo_image_surface_get_data; return true;  }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"lime_application_event_manager_register") ) { outValue = lime_application_event_manager_register_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_get_color_stop_count") ) { outValue = lime_cairo_pattern_get_color_stop_count_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_bytes_get_data_pointer_offset") ) { outValue = cffi_lime_bytes_get_data_pointer_offset; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_render_event_manager_register") ) { outValue = cffi_lime_render_event_manager_register; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_sensor_event_manager_register") ) { outValue = cffi_lime_sensor_event_manager_register; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_enable_text_events") ) { outValue = cffi_lime_window_get_enable_text_events; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_enable_text_events") ) { outValue = cffi_lime_window_set_enable_text_events; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_event_manager_register") ) { outValue = cffi_lime_window_event_manager_register; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_push_group_with_content") ) { outValue = cffi_lime_cairo_push_group_with_content; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_image_surface_get_width") ) { outValue = cffi_lime_cairo_image_surface_get_width; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_enable_vertex_attrib_array") ) { outValue = cffi_lime_gl_enable_vertex_attrib_array; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_vertex_attrib_pointerv") ) { outValue = cffi_lime_gl_get_vertex_attrib_pointerv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_pcm_seek_page_lap") ) { outValue = cffi_lime_vorbis_file_pcm_seek_page_lap; return true;  }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_get_hint_metrics") ) { outValue = lime_cairo_font_options_get_hint_metrics_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_set_hint_metrics") ) { outValue = lime_cairo_font_options_set_hint_metrics_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_image_surface_create_for_data") ) { outValue = lime_cairo_image_surface_create_for_data_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gamepad_event_manager_register") ) { outValue = cffi_lime_gamepad_event_manager_register; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_multiply_alpha") ) { outValue = cffi_lime_image_data_util_multiply_alpha; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_image_surface_get_format") ) { outValue = cffi_lime_cairo_image_surface_get_format; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_image_surface_get_height") ) { outValue = cffi_lime_cairo_image_surface_get_height; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_image_surface_get_stride") ) { outValue = cffi_lime_cairo_image_surface_get_stride; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_compressed_tex_sub_image_2d") ) { outValue = cffi_lime_gl_compressed_tex_sub_image_2d; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_disable_vertex_attrib_array") ) { outValue = cffi_lime_gl_disable_vertex_attrib_array; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_renderbuffer_parameteri") ) { outValue = cffi_lime_gl_get_renderbuffer_parameteri; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_shader_precision_format") ) { outValue = cffi_lime_gl_get_shader_precision_format; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_time_seek_page_lap") ) { outValue = cffi_lime_vorbis_file_time_seek_page_lap; return true;  }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_color_transform") ) { outValue = cffi_lime_image_data_util_color_transform; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_event_manager_register") ) { outValue = cffi_lime_joystick_event_manager_register; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_system_get_allow_screen_timeout") ) { outValue = cffi_lime_system_get_allow_screen_timeout; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_system_set_allow_screen_timeout") ) { outValue = cffi_lime_system_set_allow_screen_timeout; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_renderbuffer_parameteriv") ) { outValue = cffi_lime_gl_get_renderbuffer_parameteriv; return true;  }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_get_subpixel_order") ) { outValue = lime_cairo_font_options_get_subpixel_order_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_set_subpixel_order") ) { outValue = lime_cairo_font_options_set_subpixel_order_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_unmultiply_alpha") ) { outValue = cffi_lime_image_data_util_unmultiply_alpha; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_font_options_get_antialias") ) { outValue = cffi_lime_cairo_font_options_get_antialias; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_font_options_set_antialias") ) { outValue = cffi_lime_cairo_font_options_set_antialias; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_add_color_stop_rgb") ) { outValue = cffi_lime_cairo_pattern_add_color_stop_rgb; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_create_for_surface") ) { outValue = cffi_lime_cairo_pattern_create_for_surface; return true;  }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_font_options_get_hint_style") ) { outValue = cffi_lime_cairo_font_options_get_hint_style; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_font_options_set_hint_style") ) { outValue = cffi_lime_cairo_font_options_set_hint_style; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_add_color_stop_rgba") ) { outValue = cffi_lime_cairo_pattern_add_color_stop_rgba; return true;  }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"cffi_lime_application_event_manager_register") ) { outValue = cffi_lime_application_event_manager_register; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_get_color_stop_count") ) { outValue = cffi_lime_cairo_pattern_get_color_stop_count; return true;  }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"lime_gl_get_framebuffer_attachment_parameteri") ) { outValue = lime_gl_get_framebuffer_attachment_parameteri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_font_options_get_hint_metrics") ) { outValue = cffi_lime_cairo_font_options_get_hint_metrics; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_font_options_set_hint_metrics") ) { outValue = cffi_lime_cairo_font_options_set_hint_metrics; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_image_surface_create_for_data") ) { outValue = cffi_lime_cairo_image_surface_create_for_data; return true;  }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"lime_gl_get_framebuffer_attachment_parameteriv") ) { outValue = lime_gl_get_framebuffer_attachment_parameteriv_dyn(); return true;  }
		break;
	case 47:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_font_options_get_subpixel_order") ) { outValue = cffi_lime_cairo_font_options_get_subpixel_order; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_font_options_set_subpixel_order") ) { outValue = cffi_lime_cairo_font_options_set_subpixel_order; return true;  }
		break;
	case 50:
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_framebuffer_attachment_parameteri") ) { outValue = cffi_lime_gl_get_framebuffer_attachment_parameteri; return true;  }
		break;
	case 51:
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_framebuffer_attachment_parameteriv") ) { outValue = cffi_lime_gl_get_framebuffer_attachment_parameteriv; return true;  }
	}
	return false;
}

bool NativeCFFI_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_hint") ) { cffi_lime_gl_hint=ioValue.Cast< ::cpp::Function< void ( int ,int ) > >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_clear") ) { cffi_lime_gl_clear=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_flush") ) { cffi_lime_gl_flush=ioValue.Cast< ::cpp::Function< void ( ) > >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"cffi_lime_font_load") ) { cffi_lime_font_load=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_enable") ) { cffi_lime_al_enable=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_arc") ) { cffi_lime_cairo_arc=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_enable") ) { cffi_lime_gl_enable=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_finish") ) { cffi_lime_gl_finish=ioValue.Cast< ::cpp::Function< void ( ) > >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"cffi_lime_audio_load") ) { cffi_lime_audio_load=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_load") ) { cffi_lime_image_load=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_mouse_hide") ) { cffi_lime_mouse_hide=ioValue.Cast< ::cpp::Function< void ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_mouse_show") ) { cffi_lime_mouse_show=ioValue.Cast< ::cpp::Function< void ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_mouse_warp") ) { cffi_lime_mouse_warp=ioValue.Cast< ::cpp::Function< void ( int ,int ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_bufferf") ) { cffi_lime_al_bufferf=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ,::cpp::Float32 ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_bufferi") ) { cffi_lime_al_bufferi=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_disable") ) { cffi_lime_al_disable=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_sourcef") ) { cffi_lime_al_sourcef=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ,::cpp::Float32 ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_sourcei") ) { cffi_lime_al_sourcei=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_clip") ) { cffi_lime_cairo_clip=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_fill") ) { cffi_lime_cairo_fill=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_mask") ) { cffi_lime_cairo_mask=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_save") ) { cffi_lime_cairo_save=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_disable") ) { cffi_lime_gl_disable=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_scissor") ) { cffi_lime_gl_scissor=ioValue.Cast< ::cpp::Function< void ( int ,int ,int ,int ) > >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"cffi_lime_window_move") ) { cffi_lime_window_move=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_buffer3f") ) { cffi_lime_al_buffer3f=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_buffer3i") ) { cffi_lime_al_buffer3i=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_bufferfv") ) { cffi_lime_al_bufferfv=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_bufferiv") ) { cffi_lime_al_bufferiv=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_source3f") ) { cffi_lime_al_source3f=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_source3i") ) { cffi_lime_al_source3i=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_sourcefv") ) { cffi_lime_al_sourcefv=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_sourceiv") ) { cffi_lime_al_sourceiv=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_paint") ) { cffi_lime_cairo_paint=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_scale") ) { cffi_lime_cairo_scale=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_viewport") ) { cffi_lime_gl_viewport=ioValue.Cast< ::cpp::Function< void ( int ,int ,int ,int ) > >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_encode") ) { cffi_lime_image_encode=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_neko_execute") ) { cffi_lime_neko_execute=ioValue.Cast< ::cpp::Function< void ( ::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_alert") ) { cffi_lime_window_alert=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::String ,::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_close") ) { cffi_lime_window_close=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_focus") ) { cffi_lime_window_focus=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_x") ) { cffi_lime_window_get_x=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_y") ) { cffi_lime_window_get_y=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_error") ) { cffi_lime_al_get_error=ioValue.Cast< ::cpp::Function< int ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_float") ) { cffi_lime_al_get_float=ioValue.Cast< ::cpp::Function< ::cpp::Float32 ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_is_buffer") ) { cffi_lime_al_is_buffer=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_is_source") ) { cffi_lime_al_is_source=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_listenerf") ) { cffi_lime_al_listenerf=ioValue.Cast< ::cpp::Function< void ( int ,::cpp::Float32 ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_listeneri") ) { cffi_lime_al_listeneri=ioValue.Cast< ::cpp::Function< void ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_create") ) { cffi_lime_cairo_create=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_rotate") ) { cffi_lime_cairo_rotate=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_status") ) { cffi_lime_cairo_status=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_stroke") ) { cffi_lime_cairo_stroke=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_getdate") ) { cffi_lime_curl_getdate=ioValue.Cast< ::cpp::Function< Float ( ::String ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_version") ) { cffi_lime_curl_version=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_cull_face") ) { cffi_lime_gl_cull_face=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_error") ) { cffi_lime_gl_get_error=ioValue.Cast< ::cpp::Function< int ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_float") ) { cffi_lime_gl_get_float=ioValue.Cast< ::cpp::Function< ::cpp::Float32 ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_is_buffer") ) { cffi_lime_gl_is_buffer=ioValue.Cast< ::cpp::Function< bool ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_is_shader") ) { cffi_lime_gl_is_shader=ioValue.Cast< ::cpp::Function< bool ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform1f") ) { cffi_lime_gl_uniform1f=ioValue.Cast< ::cpp::Function< void ( int ,::cpp::Float32 ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform1i") ) { cffi_lime_gl_uniform1i=ioValue.Cast< ::cpp::Function< void ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform2f") ) { cffi_lime_gl_uniform2f=ioValue.Cast< ::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform2i") ) { cffi_lime_gl_uniform2i=ioValue.Cast< ::cpp::Function< void ( int ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform3f") ) { cffi_lime_gl_uniform3f=ioValue.Cast< ::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform3i") ) { cffi_lime_gl_uniform3i=ioValue.Cast< ::cpp::Function< void ( int ,int ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform4f") ) { cffi_lime_gl_uniform4f=ioValue.Cast< ::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform4i") ) { cffi_lime_gl_uniform4i=ioValue.Cast< ::cpp::Function< void ( int ,int ,int ,int ,int ) > >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"cffi_lime_font_set_size") ) { cffi_lime_font_set_size=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gzip_compress") ) { cffi_lime_gzip_compress=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_lzma_compress") ) { cffi_lime_lzma_compress=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_flip") ) { cffi_lime_renderer_flip=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_lock") ) { cffi_lime_renderer_lock=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_create") ) { cffi_lime_window_create=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ,int ,::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_id") ) { cffi_lime_window_get_id=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_resize") ) { cffi_lime_window_resize=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_zlib_compress") ) { cffi_lime_zlib_compress=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_gen_source") ) { cffi_lime_al_gen_source=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_gen_buffer") ) { cffi_lime_al_gen_buffer=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_double") ) { cffi_lime_al_get_double=ioValue.Cast< ::cpp::Function< Float ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_floatv") ) { cffi_lime_al_get_floatv=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_string") ) { cffi_lime_al_get_string=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_is_enabled") ) { cffi_lime_al_is_enabled=ioValue.Cast< ::cpp::Function< bool ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_listener3f") ) { cffi_lime_al_listener3f=ioValue.Cast< ::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_listener3i") ) { cffi_lime_al_listener3i=ioValue.Cast< ::cpp::Function< void ( int ,int ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_listenerfv") ) { cffi_lime_al_listenerfv=ioValue.Cast< ::cpp::Function< void ( int ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_listeneriv") ) { cffi_lime_al_listeneriv=ioValue.Cast< ::cpp::Function< void ( int ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_get_error") ) { cffi_lime_alc_get_error=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_in_clip") ) { cffi_lime_cairo_in_clip=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_in_fill") ) { cffi_lime_cairo_in_fill=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_line_to") ) { cffi_lime_cairo_line_to=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_move_to") ) { cffi_lime_cairo_move_to=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_restore") ) { cffi_lime_cairo_restore=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_version") ) { cffi_lime_cairo_version=ioValue.Cast< ::cpp::Function< int ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_blend_func") ) { cffi_lime_gl_blend_func=ioValue.Cast< ::cpp::Function< void ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_color_mask") ) { cffi_lime_gl_color_mask=ioValue.Cast< ::cpp::Function< void ( bool ,bool ,bool ,bool ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_depth_func") ) { cffi_lime_gl_depth_func=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_depth_mask") ) { cffi_lime_gl_depth_mask=ioValue.Cast< ::cpp::Function< void ( bool ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_front_face") ) { cffi_lime_gl_front_face=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_floatv") ) { cffi_lime_gl_get_floatv=ioValue.Cast< ::cpp::Function< void ( int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_string") ) { cffi_lime_gl_get_string=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_is_enabled") ) { cffi_lime_gl_is_enabled=ioValue.Cast< ::cpp::Function< bool ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_is_program") ) { cffi_lime_gl_is_program=ioValue.Cast< ::cpp::Function< bool ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_is_texture") ) { cffi_lime_gl_is_texture=ioValue.Cast< ::cpp::Function< bool ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_line_width") ) { cffi_lime_gl_line_width=ioValue.Cast< ::cpp::Function< void ( ::cpp::Float32 ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_stencil_op") ) { cffi_lime_gl_stencil_op=ioValue.Cast< ::cpp::Function< void ( int ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform1fv") ) { cffi_lime_gl_uniform1fv=ioValue.Cast< ::cpp::Function< void ( int ,int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform1iv") ) { cffi_lime_gl_uniform1iv=ioValue.Cast< ::cpp::Function< void ( int ,int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform2fv") ) { cffi_lime_gl_uniform2fv=ioValue.Cast< ::cpp::Function< void ( int ,int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform2iv") ) { cffi_lime_gl_uniform2iv=ioValue.Cast< ::cpp::Function< void ( int ,int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform3fv") ) { cffi_lime_gl_uniform3fv=ioValue.Cast< ::cpp::Function< void ( int ,int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform3iv") ) { cffi_lime_gl_uniform3iv=ioValue.Cast< ::cpp::Function< void ( int ,int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform4fv") ) { cffi_lime_gl_uniform4fv=ioValue.Cast< ::cpp::Function< void ( int ,int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform4iv") ) { cffi_lime_gl_uniform4iv=ioValue.Cast< ::cpp::Function< void ( int ,int ,Float ) > >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"cffi_lime_haptic_vibrate") ) { cffi_lime_haptic_vibrate=ioValue.Cast< ::cpp::Function< void ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_mouse_set_lock") ) { cffi_lime_mouse_set_lock=ioValue.Cast< ::cpp::Function< void ( bool ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_buffer_data") ) { cffi_lime_al_buffer_data=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_gen_sources") ) { cffi_lime_al_gen_sources=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_boolean") ) { cffi_lime_al_get_boolean=ioValue.Cast< ::cpp::Function< bool ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_gen_buffers") ) { cffi_lime_al_gen_buffers=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_bufferf") ) { cffi_lime_al_get_bufferf=ioValue.Cast< ::cpp::Function< ::cpp::Float32 ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_bufferi") ) { cffi_lime_al_get_bufferi=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_doublev") ) { cffi_lime_al_get_doublev=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_integer") ) { cffi_lime_al_get_integer=ioValue.Cast< ::cpp::Function< int ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_sourcef") ) { cffi_lime_al_get_sourcef=ioValue.Cast< ::cpp::Function< ::cpp::Float32 ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_sourcei") ) { cffi_lime_al_get_sourcei=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_source_play") ) { cffi_lime_al_source_play=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_source_stop") ) { cffi_lime_al_source_stop=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_get_string") ) { cffi_lime_alc_get_string=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_curve_to") ) { cffi_lime_cairo_curve_to=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_dash") ) { cffi_lime_cairo_get_dash=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_new_path") ) { cffi_lime_cairo_new_path=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_dash") ) { cffi_lime_cairo_set_dash=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_init") ) { cffi_lime_curl_easy_init=ioValue.Cast< ::cpp::Function< Float ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_recv") ) { cffi_lime_curl_easy_recv=ioValue.Cast< ::cpp::Function< int ( Float ,::hx::Object * ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_send") ) { cffi_lime_curl_easy_send=ioValue.Cast< ::cpp::Function< int ( Float ,::hx::Object * ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_bind_buffer") ) { cffi_lime_gl_bind_buffer=ioValue.Cast< ::cpp::Function< void ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_blend_color") ) { cffi_lime_gl_blend_color=ioValue.Cast< ::cpp::Function< void ( ::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_buffer_data") ) { cffi_lime_gl_buffer_data=ioValue.Cast< ::cpp::Function< void ( int ,int ,Float ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_clear_color") ) { cffi_lime_gl_clear_color=ioValue.Cast< ::cpp::Function< void ( ::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_draw_arrays") ) { cffi_lime_gl_draw_arrays=ioValue.Cast< ::cpp::Function< void ( int ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_boolean") ) { cffi_lime_gl_get_boolean=ioValue.Cast< ::cpp::Function< bool ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_integer") ) { cffi_lime_gl_get_integer=ioValue.Cast< ::cpp::Function< int ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_shaderi") ) { cffi_lime_gl_get_shaderi=ioValue.Cast< ::cpp::Function< int ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_read_pixels") ) { cffi_lime_gl_read_pixels=ioValue.Cast< ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_use_program") ) { cffi_lime_gl_use_program=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"cffi_lime_bytes_read_file") ) { cffi_lime_bytes_read_file=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::String ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_height") ) { cffi_lime_font_get_height=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gzip_decompress") ) { cffi_lime_gzip_decompress=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_lzma_decompress") ) { cffi_lime_lzma_decompress=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_png_decode_file") ) { cffi_lime_png_decode_file=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::String ,bool ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_create") ) { cffi_lime_renderer_create=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_unlock") ) { cffi_lime_renderer_unlock=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_system_open_url") ) { cffi_lime_system_open_url=ioValue.Cast< ::cpp::Function< void ( ::String ,::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_icon") ) { cffi_lime_window_set_icon=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_zlib_decompress") ) { cffi_lime_zlib_decompress=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_booleanv") ) { cffi_lime_al_get_booleanv=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_buffer3f") ) { cffi_lime_al_get_buffer3f=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_buffer3i") ) { cffi_lime_al_get_buffer3i=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_bufferfv") ) { cffi_lime_al_get_bufferfv=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_bufferiv") ) { cffi_lime_al_get_bufferiv=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_integerv") ) { cffi_lime_al_get_integerv=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_source3f") ) { cffi_lime_al_get_source3f=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_source3i") ) { cffi_lime_al_get_source3i=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_sourcefv") ) { cffi_lime_al_get_sourcefv=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_sourceiv") ) { cffi_lime_al_get_sourceiv=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_source_pause") ) { cffi_lime_al_source_pause=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_source_playv") ) { cffi_lime_al_source_playv=ioValue.Cast< ::cpp::Function< void ( int ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_source_stopv") ) { cffi_lime_al_source_stopv=ioValue.Cast< ::cpp::Function< void ( int ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_open_device") ) { cffi_lime_alc_open_device=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_copy_page") ) { cffi_lime_cairo_copy_page=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_in_stroke") ) { cffi_lime_cairo_in_stroke=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pop_group") ) { cffi_lime_cairo_pop_group=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_rectangle") ) { cffi_lime_cairo_rectangle=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_show_page") ) { cffi_lime_cairo_show_page=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_show_text") ) { cffi_lime_cairo_show_text=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_text_path") ) { cffi_lime_cairo_text_path=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_transform") ) { cffi_lime_cairo_transform=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_translate") ) { cffi_lime_cairo_translate=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_pause") ) { cffi_lime_curl_easy_pause=ioValue.Cast< ::cpp::Function< int ( Float ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_reset") ) { cffi_lime_curl_easy_reset=ioValue.Cast< ::cpp::Function< void ( Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_bind_texture") ) { cffi_lime_gl_bind_texture=ioValue.Cast< ::cpp::Function< void ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_clear_depthf") ) { cffi_lime_gl_clear_depthf=ioValue.Cast< ::cpp::Function< void ( ::cpp::Float32 ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_depth_rangef") ) { cffi_lime_gl_depth_rangef=ioValue.Cast< ::cpp::Function< void ( ::cpp::Float32 ,::cpp::Float32 ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_booleanv") ) { cffi_lime_gl_get_booleanv=ioValue.Cast< ::cpp::Function< void ( int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_integerv") ) { cffi_lime_gl_get_integerv=ioValue.Cast< ::cpp::Function< void ( int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_programi") ) { cffi_lime_gl_get_programi=ioValue.Cast< ::cpp::Function< int ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_shaderiv") ) { cffi_lime_gl_get_shaderiv=ioValue.Cast< ::cpp::Function< void ( int ,int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_uniformf") ) { cffi_lime_gl_get_uniformf=ioValue.Cast< ::cpp::Function< ::cpp::Float32 ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_uniformi") ) { cffi_lime_gl_get_uniformi=ioValue.Cast< ::cpp::Function< int ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_link_program") ) { cffi_lime_gl_link_program=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_pixel_storei") ) { cffi_lime_gl_pixel_storei=ioValue.Cast< ::cpp::Function< void ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_stencil_func") ) { cffi_lime_gl_stencil_func=ioValue.Cast< ::cpp::Function< void ( int ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_stencil_mask") ) { cffi_lime_gl_stencil_mask=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_tex_image_2d") ) { cffi_lime_gl_tex_image_2d=ioValue.Cast< ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ,Float ) > >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"cffi_lime_application_exec") ) { cffi_lime_application_exec=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_application_init") ) { cffi_lime_application_init=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_application_quit") ) { cffi_lime_application_quit=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_deflate_compress") ) { cffi_lime_deflate_compress=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_jpeg_decode_file") ) { cffi_lime_jpeg_decode_file=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::String ,bool ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_mouse_set_cursor") ) { cffi_lime_mouse_set_cursor=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_png_decode_bytes") ) { cffi_lime_png_decode_bytes=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,bool ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_system_get_timer") ) { cffi_lime_system_get_timer=ioValue.Cast< ::cpp::Function< Float ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_system_open_file") ) { cffi_lime_system_open_file=ioValue.Cast< ::cpp::Function< void ( ::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_width") ) { cffi_lime_window_get_width=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_title") ) { cffi_lime_window_set_title=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_delete_buffer") ) { cffi_lime_al_delete_buffer=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_delete_source") ) { cffi_lime_al_delete_source=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_listenerf") ) { cffi_lime_al_get_listenerf=ioValue.Cast< ::cpp::Function< ::cpp::Float32 ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_listeneri") ) { cffi_lime_al_get_listeneri=ioValue.Cast< ::cpp::Function< int ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_source_pausev") ) { cffi_lime_al_source_pausev=ioValue.Cast< ::cpp::Function< void ( int ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_source_rewind") ) { cffi_lime_al_source_rewind=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_close_device") ) { cffi_lime_alc_close_device=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_get_integerv") ) { cffi_lime_alc_get_integerv=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_pause_device") ) { cffi_lime_alc_pause_device=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_close_path") ) { cffi_lime_cairo_close_path=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_matrix") ) { cffi_lime_cairo_get_matrix=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_source") ) { cffi_lime_cairo_get_source=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_target") ) { cffi_lime_cairo_get_target=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_push_group") ) { cffi_lime_cairo_push_group=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_reset_clip") ) { cffi_lime_cairo_reset_clip=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_matrix") ) { cffi_lime_cairo_set_matrix=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_source") ) { cffi_lime_cairo_set_source=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_global_init") ) { cffi_lime_curl_global_init=ioValue.Cast< ::cpp::Function< int ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_escape") ) { cffi_lime_curl_easy_escape=ioValue.Cast< ::cpp::Function< ::hx::Object * ( Float ,::String ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_setopt") ) { cffi_lime_curl_easy_setopt=ioValue.Cast< ::cpp::Function< int ( Float ,int ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_attach_shader") ) { cffi_lime_gl_attach_shader=ioValue.Cast< ::cpp::Function< void ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_clear_stencil") ) { cffi_lime_gl_clear_stencil=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_create_buffer") ) { cffi_lime_gl_create_buffer=ioValue.Cast< ::cpp::Function< int ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_create_shader") ) { cffi_lime_gl_create_shader=ioValue.Cast< ::cpp::Function< int ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_delete_buffer") ) { cffi_lime_gl_delete_buffer=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_delete_shader") ) { cffi_lime_gl_delete_shader=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_detach_shader") ) { cffi_lime_gl_detach_shader=ioValue.Cast< ::cpp::Function< void ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_draw_elements") ) { cffi_lime_gl_draw_elements=ioValue.Cast< ::cpp::Function< void ( int ,int ,int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_extension") ) { cffi_lime_gl_get_extension=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_programiv") ) { cffi_lime_gl_get_programiv=ioValue.Cast< ::cpp::Function< void ( int ,int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_uniformfv") ) { cffi_lime_gl_get_uniformfv=ioValue.Cast< ::cpp::Function< void ( int ,int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_uniformiv") ) { cffi_lime_gl_get_uniformiv=ioValue.Cast< ::cpp::Function< void ( int ,int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_shader_source") ) { cffi_lime_gl_shader_source=ioValue.Cast< ::cpp::Function< void ( int ,::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_info") ) { cffi_lime_vorbis_file_info=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_read") ) { cffi_lime_vorbis_file_read=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,int ,int ,bool ,int ,bool ) > >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_ascender") ) { cffi_lime_font_get_ascender=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_render_glyph") ) { cffi_lime_font_render_glyph=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ,int ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_jpeg_decode_bytes") ) { cffi_lime_jpeg_decode_bytes=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,bool ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_get_type") ) { cffi_lime_renderer_get_type=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_height") ) { cffi_lime_window_get_height=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_delete_buffers") ) { cffi_lime_al_delete_buffers=ioValue.Cast< ::cpp::Function< void ( int ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_delete_sources") ) { cffi_lime_al_delete_sources=ioValue.Cast< ::cpp::Function< void ( int ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_distance_model") ) { cffi_lime_al_distance_model=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_doppler_factor") ) { cffi_lime_al_doppler_factor=ioValue.Cast< ::cpp::Function< void ( ::cpp::Float32 ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_enum_value") ) { cffi_lime_al_get_enum_value=ioValue.Cast< ::cpp::Function< int ( ::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_listener3f") ) { cffi_lime_al_get_listener3f=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_listener3i") ) { cffi_lime_al_get_listener3i=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_listenerfv") ) { cffi_lime_al_get_listenerfv=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_listeneriv") ) { cffi_lime_al_get_listeneriv=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_source_rewindv") ) { cffi_lime_al_source_rewindv=ioValue.Cast< ::cpp::Function< void ( int ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_speed_of_sound") ) { cffi_lime_al_speed_of_sound=ioValue.Cast< ::cpp::Function< void ( ::cpp::Float32 ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_resume_device") ) { cffi_lime_alc_resume_device=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_rel_line_to") ) { cffi_lime_cairo_rel_line_to=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_rel_move_to") ) { cffi_lime_cairo_rel_move_to=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_show_glyphs") ) { cffi_lime_cairo_show_glyphs=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_version_info") ) { cffi_lime_curl_version_info=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_cleanup") ) { cffi_lime_curl_easy_cleanup=ioValue.Cast< ::cpp::Function< void ( Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_getinfo") ) { cffi_lime_curl_easy_getinfo=ioValue.Cast< ::cpp::Function< ::hx::Object * ( Float ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_perform") ) { cffi_lime_curl_easy_perform=ioValue.Cast< ::cpp::Function< int ( Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_active_texture") ) { cffi_lime_gl_active_texture=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_blend_equation") ) { cffi_lime_gl_blend_equation=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_compile_shader") ) { cffi_lime_gl_compile_shader=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_create_program") ) { cffi_lime_gl_create_program=ioValue.Cast< ::cpp::Function< int ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_create_texture") ) { cffi_lime_gl_create_texture=ioValue.Cast< ::cpp::Function< int ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_delete_program") ) { cffi_lime_gl_delete_program=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_delete_texture") ) { cffi_lime_gl_delete_texture=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_is_framebuffer") ) { cffi_lime_gl_is_framebuffer=ioValue.Cast< ::cpp::Function< bool ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_object_from_id") ) { cffi_lime_gl_object_from_id=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_polygon_offset") ) { cffi_lime_gl_polygon_offset=ioValue.Cast< ::cpp::Function< void ( ::cpp::Float32 ,::cpp::Float32 ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_tex_parameterf") ) { cffi_lime_gl_tex_parameterf=ioValue.Cast< ::cpp::Function< void ( int ,int ,::cpp::Float32 ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_tex_parameteri") ) { cffi_lime_gl_tex_parameteri=ioValue.Cast< ::cpp::Function< void ( int ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_clear") ) { cffi_lime_vorbis_file_clear=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_application_create") ) { cffi_lime_application_create=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_application_update") ) { cffi_lime_application_update=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_clipboard_get_text") ) { cffi_lime_clipboard_get_text=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_clipboard_set_text") ) { cffi_lime_clipboard_set_text=ioValue.Cast< ::cpp::Function< void ( ::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_deflate_decompress") ) { cffi_lime_deflate_decompress=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_descender") ) { cffi_lime_font_get_descender=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_render_glyphs") ) { cffi_lime_font_render_glyphs=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_get_scale") ) { cffi_lime_renderer_get_scale=ioValue.Cast< ::cpp::Function< Float ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_system_get_display") ) { cffi_lime_system_get_display=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_create") ) { cffi_lime_text_layout_create=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ,::String ,::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_display") ) { cffi_lime_window_get_display=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_create_context") ) { cffi_lime_alc_create_context=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_arc_negative") ) { cffi_lime_cairo_arc_negative=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_clip_extents") ) { cffi_lime_cairo_clip_extents=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_fill_extents") ) { cffi_lime_cairo_fill_extents=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_line_cap") ) { cffi_lime_cairo_get_line_cap=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_operator") ) { cffi_lime_cairo_get_operator=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_mask_surface") ) { cffi_lime_cairo_mask_surface=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_rel_curve_to") ) { cffi_lime_cairo_rel_curve_to=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_line_cap") ) { cffi_lime_cairo_set_line_cap=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_operator") ) { cffi_lime_cairo_set_operator=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_strerror") ) { cffi_lime_curl_easy_strerror=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_unescape") ) { cffi_lime_curl_easy_unescape=ioValue.Cast< ::cpp::Function< ::hx::Object * ( Float ,::String ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_buffer_sub_data") ) { cffi_lime_gl_buffer_sub_data=ioValue.Cast< ::cpp::Function< void ( int ,int ,int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_generate_mipmap") ) { cffi_lime_gl_generate_mipmap=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_is_renderbuffer") ) { cffi_lime_gl_is_renderbuffer=ioValue.Cast< ::cpp::Function< bool ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_object_register") ) { cffi_lime_gl_object_register=ioValue.Cast< ::cpp::Function< void ( int ,int ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_sample_coverage") ) { cffi_lime_gl_sample_coverage=ioValue.Cast< ::cpp::Function< void ( ::cpp::Float32 ,bool ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_vertex_attrib1f") ) { cffi_lime_gl_vertex_attrib1f=ioValue.Cast< ::cpp::Function< void ( int ,::cpp::Float32 ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_vertex_attrib2f") ) { cffi_lime_gl_vertex_attrib2f=ioValue.Cast< ::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_vertex_attrib3f") ) { cffi_lime_gl_vertex_attrib3f=ioValue.Cast< ::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_vertex_attrib4f") ) { cffi_lime_gl_vertex_attrib4f=ioValue.Cast< ::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"cffi_lime_data_pointer_offset") ) { cffi_lime_data_pointer_offset=ioValue.Cast< ::cpp::Function< Float ( Float ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_num_glyphs") ) { cffi_lime_font_get_num_glyphs=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_doppler_velocity") ) { cffi_lime_al_doppler_velocity=ioValue.Cast< ::cpp::Function< void ( ::cpp::Float32 ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_get_proc_address") ) { cffi_lime_al_get_proc_address=ioValue.Cast< ::cpp::Function< Float ( ::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_destroy_context") ) { cffi_lime_alc_destroy_context=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_process_context") ) { cffi_lime_alc_process_context=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_suspend_context") ) { cffi_lime_alc_suspend_context=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_clip_preserve") ) { cffi_lime_cairo_clip_preserve=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_fill_preserve") ) { cffi_lime_cairo_fill_preserve=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_antialias") ) { cffi_lime_cairo_get_antialias=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_fill_rule") ) { cffi_lime_cairo_get_fill_rule=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_font_face") ) { cffi_lime_cairo_get_font_face=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_line_join") ) { cffi_lime_cairo_get_line_join=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_tolerance") ) { cffi_lime_cairo_get_tolerance=ioValue.Cast< ::cpp::Function< Float ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_antialias") ) { cffi_lime_cairo_set_antialias=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_fill_rule") ) { cffi_lime_cairo_set_fill_rule=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_font_face") ) { cffi_lime_cairo_set_font_face=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_font_size") ) { cffi_lime_cairo_set_font_size=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_line_join") ) { cffi_lime_cairo_set_line_join=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_tolerance") ) { cffi_lime_cairo_set_tolerance=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_surface_flush") ) { cffi_lime_cairo_surface_flush=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_global_cleanup") ) { cffi_lime_curl_global_cleanup=ioValue.Cast< ::cpp::Function< void ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_duphandle") ) { cffi_lime_curl_easy_duphandle=ioValue.Cast< ::cpp::Function< Float ( Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_bind_framebuffer") ) { cffi_lime_gl_bind_framebuffer=ioValue.Cast< ::cpp::Function< void ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_tex_sub_image_2d") ) { cffi_lime_gl_tex_sub_image_2d=ioValue.Cast< ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_validate_program") ) { cffi_lime_gl_validate_program=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_vertex_attrib1fv") ) { cffi_lime_gl_vertex_attrib1fv=ioValue.Cast< ::cpp::Function< void ( int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_vertex_attrib2fv") ) { cffi_lime_gl_vertex_attrib2fv=ioValue.Cast< ::cpp::Function< void ( int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_vertex_attrib3fv") ) { cffi_lime_gl_vertex_attrib3fv=ioValue.Cast< ::cpp::Function< void ( int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_vertex_attrib4fv") ) { cffi_lime_gl_vertex_attrib4fv=ioValue.Cast< ::cpp::Function< void ( int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_bitrate") ) { cffi_lime_vorbis_file_bitrate=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_comment") ) { cffi_lime_vorbis_file_comment=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_streams") ) { cffi_lime_vorbis_file_streams=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_family_name") ) { cffi_lime_font_get_family_name=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_glyph_index") ) { cffi_lime_font_get_glyph_index=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ,::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gamepad_add_mappings") ) { cffi_lime_gamepad_add_mappings=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_get_context") ) { cffi_lime_renderer_get_context=ioValue.Cast< ::cpp::Function< Float ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_read_pixels") ) { cffi_lime_renderer_read_pixels=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_system_get_directory") ) { cffi_lime_system_get_directory=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ,::String ,::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_position") ) { cffi_lime_text_layout_position=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,int ,::String ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_maximized") ) { cffi_lime_window_set_maximized=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ,bool ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_minimized") ) { cffi_lime_window_set_minimized=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ,bool ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_resizable") ) { cffi_lime_window_set_resizable=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ,bool ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_dash_count") ) { cffi_lime_cairo_get_dash_count=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_line_width") ) { cffi_lime_cairo_get_line_width=ioValue.Cast< ::cpp::Function< Float ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_line_width") ) { cffi_lime_cairo_set_line_width=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_source_rgb") ) { cffi_lime_cairo_set_source_rgb=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_stroke_extents") ) { cffi_lime_cairo_stroke_extents=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_version_string") ) { cffi_lime_cairo_version_string=ioValue.Cast< ::cpp::Function< ::String ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_bind_renderbuffer") ) { cffi_lime_gl_bind_renderbuffer=ioValue.Cast< ::cpp::Function< void ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_copy_tex_image_2d") ) { cffi_lime_gl_copy_tex_image_2d=ioValue.Cast< ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_active_attrib") ) { cffi_lime_gl_get_active_attrib=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_shader_source") ) { cffi_lime_gl_get_shader_source=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_object_deregister") ) { cffi_lime_gl_object_deregister=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform_matrix2fv") ) { cffi_lime_gl_uniform_matrix2fv=ioValue.Cast< ::cpp::Function< void ( int ,int ,bool ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform_matrix3fv") ) { cffi_lime_gl_uniform_matrix3fv=ioValue.Cast< ::cpp::Function< void ( int ,int ,bool ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_uniform_matrix4fv") ) { cffi_lime_gl_uniform_matrix4fv=ioValue.Cast< ::cpp::Function< void ( int ,int ,bool ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_crosslap") ) { cffi_lime_vorbis_file_crosslap=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_pcm_seek") ) { cffi_lime_vorbis_file_pcm_seek=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_raw_seek") ) { cffi_lime_vorbis_file_raw_seek=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_pcm_tell") ) { cffi_lime_vorbis_file_pcm_tell=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_raw_tell") ) { cffi_lime_vorbis_file_raw_tell=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_seekable") ) { cffi_lime_vorbis_file_seekable=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ) > >(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"cffi_lime_file_dialog_open_file") ) { cffi_lime_file_dialog_open_file=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_file_dialog_save_file") ) { cffi_lime_file_dialog_save_file=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_units_per_em") ) { cffi_lime_font_get_units_per_em=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_merge") ) { cffi_lime_image_data_util_merge=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_num_axes") ) { cffi_lime_joystick_get_num_axes=ioValue.Cast< ::cpp::Function< int ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_num_hats") ) { cffi_lime_joystick_get_num_hats=ioValue.Cast< ::cpp::Function< int ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_key_code_to_scan_code") ) { cffi_lime_key_code_to_scan_code=ioValue.Cast< ::cpp::Function< ::cpp::Float32 ( ::cpp::Float32 ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_make_current") ) { cffi_lime_renderer_make_current=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_system_get_ios_tablet") ) { cffi_lime_system_get_ios_tablet=ioValue.Cast< ::cpp::Function< bool ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_borderless") ) { cffi_lime_window_set_borderless=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ,bool ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_fullscreen") ) { cffi_lime_window_set_fullscreen=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ,bool ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_miter_limit") ) { cffi_lime_cairo_get_miter_limit=ioValue.Cast< ::cpp::Function< Float ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_identity_matrix") ) { cffi_lime_cairo_identity_matrix=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_miter_limit") ) { cffi_lime_cairo_set_miter_limit=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_source_rgba") ) { cffi_lime_cairo_set_source_rgba=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_stroke_preserve") ) { cffi_lime_cairo_stroke_preserve=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_create_framebuffer") ) { cffi_lime_gl_create_framebuffer=ioValue.Cast< ::cpp::Function< int ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_delete_framebuffer") ) { cffi_lime_gl_delete_framebuffer=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_active_uniform") ) { cffi_lime_gl_get_active_uniform=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_tex_parameterf") ) { cffi_lime_gl_get_tex_parameterf=ioValue.Cast< ::cpp::Function< ::cpp::Float32 ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_tex_parameteri") ) { cffi_lime_gl_get_tex_parameteri=ioValue.Cast< ::cpp::Function< int ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_vertex_attribi") ) { cffi_lime_gl_get_vertex_attribi=ioValue.Cast< ::cpp::Function< int ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_from_file") ) { cffi_lime_vorbis_file_from_file=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_pcm_total") ) { cffi_lime_vorbis_file_pcm_total=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_raw_total") ) { cffi_lime_vorbis_file_raw_total=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_time_seek") ) { cffi_lime_vorbis_file_time_seek=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_time_tell") ) { cffi_lime_vorbis_file_time_tell=ioValue.Cast< ::cpp::Function< Float ( ::hx::Object * ) > >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"cffi_lime_bytes_get_data_pointer") ) { cffi_lime_bytes_get_data_pointer=ioValue.Cast< ::cpp::Function< Float ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_file_dialog_open_files") ) { cffi_lime_file_dialog_open_files=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_glyph_indices") ) { cffi_lime_font_get_glyph_indices=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_glyph_metrics") ) { cffi_lime_font_get_glyph_metrics=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_outline_decompose") ) { cffi_lime_font_outline_decompose=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_resize") ) { cffi_lime_image_data_util_resize=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_set_script") ) { cffi_lime_text_layout_set_script=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_font_options") ) { cffi_lime_cairo_get_font_options=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_group_target") ) { cffi_lime_cairo_get_group_target=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_paint_with_alpha") ) { cffi_lime_cairo_paint_with_alpha=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_font_options") ) { cffi_lime_cairo_set_font_options=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_font_face_status") ) { cffi_lime_cairo_font_face_status=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_blend_func_separate") ) { cffi_lime_gl_blend_func_separate=ioValue.Cast< ::cpp::Function< void ( int ,int ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_create_renderbuffer") ) { cffi_lime_gl_create_renderbuffer=ioValue.Cast< ::cpp::Function< int ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_delete_renderbuffer") ) { cffi_lime_gl_delete_renderbuffer=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_attrib_location") ) { cffi_lime_gl_get_attrib_location=ioValue.Cast< ::cpp::Function< int ( int ,::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_shader_info_log") ) { cffi_lime_gl_get_shader_info_log=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_tex_parameterfv") ) { cffi_lime_gl_get_tex_parameterfv=ioValue.Cast< ::cpp::Function< void ( int ,int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_tex_parameteriv") ) { cffi_lime_gl_get_tex_parameteriv=ioValue.Cast< ::cpp::Function< void ( int ,int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_vertex_attribiv") ) { cffi_lime_gl_get_vertex_attribiv=ioValue.Cast< ::cpp::Function< void ( int ,int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_stencil_op_separate") ) { cffi_lime_gl_stencil_op_separate=ioValue.Cast< ::cpp::Function< void ( int ,int ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_from_bytes") ) { cffi_lime_vorbis_file_from_bytes=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_read_float") ) { cffi_lime_vorbis_file_read_float=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_time_total") ) { cffi_lime_vorbis_file_time_total=ioValue.Cast< ::cpp::Function< Float ( ::hx::Object * ,int ) > >(); return true; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"cffi_lime_bytes_from_data_pointer") ) { cffi_lime_bytes_from_data_pointer=ioValue.Cast< ::cpp::Function< ::hx::Object * ( Float ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cffi_get_native_pointer") ) { cffi_lime_cffi_get_native_pointer=ioValue.Cast< ::cpp::Function< Float ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gamepad_get_device_guid") ) { cffi_lime_gamepad_get_device_guid=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gamepad_get_device_name") ) { cffi_lime_gamepad_get_device_name=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_key_code_from_scan_code") ) { cffi_lime_key_code_from_scan_code=ioValue.Cast< ::cpp::Function< ::cpp::Float32 ( ::cpp::Float32 ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_system_get_num_displays") ) { cffi_lime_system_get_num_displays=ioValue.Cast< ::cpp::Function< int ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_display_mode") ) { cffi_lime_window_get_display_mode=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_display_mode") ) { cffi_lime_window_set_display_mode=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_is_extension_present") ) { cffi_lime_al_is_extension_present=ioValue.Cast< ::cpp::Function< bool ( ::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_source_queue_buffers") ) { cffi_lime_al_source_queue_buffers=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_get_contexts_device") ) { cffi_lime_alc_get_contexts_device=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_get_current_context") ) { cffi_lime_alc_get_current_context=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_current_point") ) { cffi_lime_cairo_get_current_point=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_has_current_point") ) { cffi_lime_cairo_has_current_point=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_bind_attrib_location") ) { cffi_lime_gl_bind_attrib_location=ioValue.Cast< ::cpp::Function< void ( int ,int ,::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_attached_shaders") ) { cffi_lime_gl_get_attached_shaders=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_program_info_log") ) { cffi_lime_gl_get_program_info_log=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_uniform_location") ) { cffi_lime_gl_get_uniform_location=ioValue.Cast< ::cpp::Function< int ( int ,::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_renderbuffer_storage") ) { cffi_lime_gl_renderbuffer_storage=ioValue.Cast< ::cpp::Function< void ( int ,int ,int ,int ) > >(); return true; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_device_guid") ) { cffi_lime_joystick_get_device_guid=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_device_name") ) { cffi_lime_joystick_get_device_name=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_num_buttons") ) { cffi_lime_joystick_get_num_buttons=ioValue.Cast< ::cpp::Function< int ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_set_language") ) { cffi_lime_text_layout_set_language=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_make_context_current") ) { cffi_lime_alc_make_context_current=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_source_surface") ) { cffi_lime_cairo_set_source_surface=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_create_rgb") ) { cffi_lime_cairo_pattern_create_rgb=ioValue.Cast< ::cpp::Function< ::hx::Object * ( Float ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_get_extend") ) { cffi_lime_cairo_pattern_get_extend=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_get_filter") ) { cffi_lime_cairo_pattern_get_filter=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_get_matrix") ) { cffi_lime_cairo_pattern_get_matrix=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_set_extend") ) { cffi_lime_cairo_pattern_set_extend=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_set_filter") ) { cffi_lime_cairo_pattern_set_filter=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_set_matrix") ) { cffi_lime_cairo_pattern_set_matrix=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_copy_tex_sub_image_2d") ) { cffi_lime_gl_copy_tex_sub_image_2d=ioValue.Cast< ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_framebuffer_texture2D") ) { cffi_lime_gl_framebuffer_texture2D=ioValue.Cast< ::cpp::Function< void ( int ,int ,int ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_buffer_parameteri") ) { cffi_lime_gl_get_buffer_parameteri=ioValue.Cast< ::cpp::Function< int ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_stencil_func_separate") ) { cffi_lime_gl_stencil_func_separate=ioValue.Cast< ::cpp::Function< void ( int ,int ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_stencil_mask_separate") ) { cffi_lime_gl_stencil_mask_separate=ioValue.Cast< ::cpp::Function< void ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_vertex_attrib_pointer") ) { cffi_lime_gl_vertex_attrib_pointer=ioValue.Cast< ::cpp::Function< void ( int ,int ,int ,bool ,int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_pcm_seek_lap") ) { cffi_lime_vorbis_file_pcm_seek_lap=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_raw_seek_lap") ) { cffi_lime_vorbis_file_raw_seek_lap=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > >(); return true; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_fill_rect") ) { cffi_lime_image_data_util_fill_rect=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_threshold") ) { cffi_lime_image_data_util_threshold=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ,int ,int ,int ,bool ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_set_direction") ) { cffi_lime_text_layout_set_direction=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_al_source_unqueue_buffers") ) { cffi_lime_al_source_unqueue_buffers=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pop_group_to_source") ) { cffi_lime_cairo_pop_group_to_source=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_font_options_create") ) { cffi_lime_cairo_font_options_create=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_ft_font_face_create") ) { cffi_lime_cairo_ft_font_face_create=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_create_rgba") ) { cffi_lime_cairo_pattern_create_rgba=ioValue.Cast< ::cpp::Function< ::hx::Object * ( Float ,Float ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_buffer_parameteriv") ) { cffi_lime_gl_get_buffer_parameteriv=ioValue.Cast< ::cpp::Function< void ( int ,int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_context_attributes") ) { cffi_lime_gl_get_context_attributes=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_pcm_seek_page") ) { cffi_lime_vorbis_file_pcm_seek_page=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_serial_number") ) { cffi_lime_vorbis_file_serial_number=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_time_seek_lap") ) { cffi_lime_vorbis_file_time_seek_lap=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ,Float ) > >(); return true; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"cffi_lime_application_set_frame_rate") ) { cffi_lime_application_set_frame_rate=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_file_dialog_open_directory") ) { cffi_lime_file_dialog_open_directory=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_flood_fill") ) { cffi_lime_image_data_util_flood_fill=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_get_pixels") ) { cffi_lime_image_data_util_get_pixels=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_set_format") ) { cffi_lime_image_data_util_set_format=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_set_pixels") ) { cffi_lime_image_data_util_set_pixels=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_key_event_manager_register") ) { cffi_lime_key_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_image_surface_create") ) { cffi_lime_cairo_image_surface_create=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_blend_equation_separate") ) { cffi_lime_gl_blend_equation_separate=ioValue.Cast< ::cpp::Function< void ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_compressed_tex_image_2d") ) { cffi_lime_gl_compressed_tex_image_2d=ioValue.Cast< ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_time_seek_page") ) { cffi_lime_vorbis_file_time_seek_page=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ,Float ) > >(); return true; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"cffi_lime_drop_event_manager_register") ) { cffi_lime_drop_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_underline_position") ) { cffi_lime_font_get_underline_position=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_copy_pixels") ) { cffi_lime_image_data_util_copy_pixels=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,bool ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_num_trackballs") ) { cffi_lime_joystick_get_num_trackballs=ioValue.Cast< ::cpp::Function< int ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_text_event_manager_register") ) { cffi_lime_text_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_create_linear") ) { cffi_lime_cairo_pattern_create_linear=ioValue.Cast< ::cpp::Function< ::hx::Object * ( Float ,Float ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_create_radial") ) { cffi_lime_cairo_pattern_create_radial=ioValue.Cast< ::cpp::Function< ::hx::Object * ( Float ,Float ,Float ,Float ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_check_framebuffer_status") ) { cffi_lime_gl_check_framebuffer_status=ioValue.Cast< ::cpp::Function< int ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_framebuffer_renderbuffer") ) { cffi_lime_gl_framebuffer_renderbuffer=ioValue.Cast< ::cpp::Function< void ( int ,int ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_bitrate_instant") ) { cffi_lime_vorbis_file_bitrate_instant=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_underline_thickness") ) { cffi_lime_font_get_underline_thickness=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_copy_channel") ) { cffi_lime_image_data_util_copy_channel=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_mouse_event_manager_register") ) { cffi_lime_mouse_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_touch_event_manager_register") ) { cffi_lime_touch_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_image_surface_get_data") ) { cffi_lime_cairo_image_surface_get_data=ioValue.Cast< ::cpp::Function< Float ( ::hx::Object * ) > >(); return true; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"cffi_lime_bytes_get_data_pointer_offset") ) { cffi_lime_bytes_get_data_pointer_offset=ioValue.Cast< ::cpp::Function< Float ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_render_event_manager_register") ) { cffi_lime_render_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_sensor_event_manager_register") ) { cffi_lime_sensor_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_enable_text_events") ) { cffi_lime_window_get_enable_text_events=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_enable_text_events") ) { cffi_lime_window_set_enable_text_events=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,bool ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_event_manager_register") ) { cffi_lime_window_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_push_group_with_content") ) { cffi_lime_cairo_push_group_with_content=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_image_surface_get_width") ) { cffi_lime_cairo_image_surface_get_width=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_enable_vertex_attrib_array") ) { cffi_lime_gl_enable_vertex_attrib_array=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_vertex_attrib_pointerv") ) { cffi_lime_gl_get_vertex_attrib_pointerv=ioValue.Cast< ::cpp::Function< Float ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_pcm_seek_page_lap") ) { cffi_lime_vorbis_file_pcm_seek_page_lap=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > >(); return true; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"cffi_lime_gamepad_event_manager_register") ) { cffi_lime_gamepad_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_multiply_alpha") ) { cffi_lime_image_data_util_multiply_alpha=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_image_surface_get_format") ) { cffi_lime_cairo_image_surface_get_format=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_image_surface_get_height") ) { cffi_lime_cairo_image_surface_get_height=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_image_surface_get_stride") ) { cffi_lime_cairo_image_surface_get_stride=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_compressed_tex_sub_image_2d") ) { cffi_lime_gl_compressed_tex_sub_image_2d=ioValue.Cast< ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_disable_vertex_attrib_array") ) { cffi_lime_gl_disable_vertex_attrib_array=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_renderbuffer_parameteri") ) { cffi_lime_gl_get_renderbuffer_parameteri=ioValue.Cast< ::cpp::Function< int ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_shader_precision_format") ) { cffi_lime_gl_get_shader_precision_format=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_vorbis_file_time_seek_page_lap") ) { cffi_lime_vorbis_file_time_seek_page_lap=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ,Float ) > >(); return true; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_color_transform") ) { cffi_lime_image_data_util_color_transform=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_event_manager_register") ) { cffi_lime_joystick_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_system_get_allow_screen_timeout") ) { cffi_lime_system_get_allow_screen_timeout=ioValue.Cast< ::cpp::Function< bool ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_system_set_allow_screen_timeout") ) { cffi_lime_system_set_allow_screen_timeout=ioValue.Cast< ::cpp::Function< bool ( bool ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_renderbuffer_parameteriv") ) { cffi_lime_gl_get_renderbuffer_parameteriv=ioValue.Cast< ::cpp::Function< void ( int ,int ,Float ) > >(); return true; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_unmultiply_alpha") ) { cffi_lime_image_data_util_unmultiply_alpha=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_font_options_get_antialias") ) { cffi_lime_cairo_font_options_get_antialias=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_font_options_set_antialias") ) { cffi_lime_cairo_font_options_set_antialias=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_add_color_stop_rgb") ) { cffi_lime_cairo_pattern_add_color_stop_rgb=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_create_for_surface") ) { cffi_lime_cairo_pattern_create_for_surface=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_font_options_get_hint_style") ) { cffi_lime_cairo_font_options_get_hint_style=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_font_options_set_hint_style") ) { cffi_lime_cairo_font_options_set_hint_style=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_add_color_stop_rgba") ) { cffi_lime_cairo_pattern_add_color_stop_rgba=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) > >(); return true; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"cffi_lime_application_event_manager_register") ) { cffi_lime_application_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pattern_get_color_stop_count") ) { cffi_lime_cairo_pattern_get_color_stop_count=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_font_options_get_hint_metrics") ) { cffi_lime_cairo_font_options_get_hint_metrics=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_font_options_set_hint_metrics") ) { cffi_lime_cairo_font_options_set_hint_metrics=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_image_surface_create_for_data") ) { cffi_lime_cairo_image_surface_create_for_data=ioValue.Cast< ::cpp::Function< ::hx::Object * ( Float ,int ,int ,int ,int ) > >(); return true; }
		break;
	case 47:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_font_options_get_subpixel_order") ) { cffi_lime_cairo_font_options_get_subpixel_order=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_font_options_set_subpixel_order") ) { cffi_lime_cairo_font_options_set_subpixel_order=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ) > >(); return true; }
		break;
	case 50:
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_framebuffer_attachment_parameteri") ) { cffi_lime_gl_get_framebuffer_attachment_parameteri=ioValue.Cast< ::cpp::Function< int ( int ,int ,int ) > >(); return true; }
		break;
	case 51:
		if (HX_FIELD_EQ(inName,"cffi_lime_gl_get_framebuffer_attachment_parameteriv") ) { cffi_lime_gl_get_framebuffer_attachment_parameteriv=ioValue.Cast< ::cpp::Function< void ( int ,int ,int ,Float ) > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_application_create,HX_HCSTRING("cffi_lime_application_create","\x9c","\x71","\x49","\x96")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_application_event_manager_register,HX_HCSTRING("cffi_lime_application_event_manager_register","\x5a","\x89","\x33","\xc0")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_application_exec,HX_HCSTRING("cffi_lime_application_exec","\x31","\x16","\x12","\x9e")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_application_init,HX_HCSTRING("cffi_lime_application_init","\xb0","\x5d","\xaf","\xa0")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_application_quit,HX_HCSTRING("cffi_lime_application_quit","\x6f","\x62","\xfe","\xa5")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_application_set_frame_rate,HX_HCSTRING("cffi_lime_application_set_frame_rate","\xcf","\x4e","\xf9","\x0d")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_application_update,HX_HCSTRING("cffi_lime_application_update","\xa9","\x90","\x3f","\xa1")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_audio_load,HX_HCSTRING("cffi_lime_audio_load","\xc0","\xd6","\x0b","\xc1")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( Float ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_bytes_from_data_pointer,HX_HCSTRING("cffi_lime_bytes_from_data_pointer","\x98","\x81","\xca","\x81")},
	{hx::fsObject /*::cpp::Function< Float ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_bytes_get_data_pointer,HX_HCSTRING("cffi_lime_bytes_get_data_pointer","\x56","\xeb","\xe8","\x02")},
	{hx::fsObject /*::cpp::Function< Float ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_bytes_get_data_pointer_offset,HX_HCSTRING("cffi_lime_bytes_get_data_pointer_offset","\x9c","\x74","\x83","\xfe")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::String ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_bytes_read_file,HX_HCSTRING("cffi_lime_bytes_read_file","\x40","\x58","\x83","\x5f")},
	{hx::fsObject /*::cpp::Function< Float ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cffi_get_native_pointer,HX_HCSTRING("cffi_lime_cffi_get_native_pointer","\xe6","\x38","\xa0","\xf9")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_clipboard_get_text,HX_HCSTRING("cffi_lime_clipboard_get_text","\x50","\x49","\x61","\xdf")},
	{hx::fsObject /*::cpp::Function< void ( ::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_clipboard_set_text,HX_HCSTRING("cffi_lime_clipboard_set_text","\xc4","\xa2","\xbe","\x8d")},
	{hx::fsObject /*::cpp::Function< Float ( Float ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_data_pointer_offset,HX_HCSTRING("cffi_lime_data_pointer_offset","\x59","\x08","\xa4","\x47")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_deflate_compress,HX_HCSTRING("cffi_lime_deflate_compress","\x47","\xa2","\x02","\x3b")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_deflate_decompress,HX_HCSTRING("cffi_lime_deflate_decompress","\x08","\x96","\xdf","\x6c")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_drop_event_manager_register,HX_HCSTRING("cffi_lime_drop_event_manager_register","\x99","\xbf","\x28","\x6d")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_file_dialog_open_directory,HX_HCSTRING("cffi_lime_file_dialog_open_directory","\x5d","\xaf","\x2b","\xd2")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_file_dialog_open_file,HX_HCSTRING("cffi_lime_file_dialog_open_file","\x8c","\x37","\x2e","\x23")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_file_dialog_open_files,HX_HCSTRING("cffi_lime_file_dialog_open_files","\x67","\x63","\x42","\xa5")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_file_dialog_save_file,HX_HCSTRING("cffi_lime_file_dialog_save_file","\x39","\xcf","\xb5","\x3e")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_font_get_ascender,HX_HCSTRING("cffi_lime_font_get_ascender","\xbf","\xa6","\x45","\xba")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_font_get_descender,HX_HCSTRING("cffi_lime_font_get_descender","\x8f","\x0d","\x5f","\x3f")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_font_get_family_name,HX_HCSTRING("cffi_lime_font_get_family_name","\x7e","\xb2","\x6a","\x33")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ,::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_font_get_glyph_index,HX_HCSTRING("cffi_lime_font_get_glyph_index","\x77","\x1f","\x95","\x21")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_font_get_glyph_indices,HX_HCSTRING("cffi_lime_font_get_glyph_indices","\xcc","\x6e","\x4a","\x8b")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_font_get_glyph_metrics,HX_HCSTRING("cffi_lime_font_get_glyph_metrics","\xe8","\xc9","\xca","\xd4")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_font_get_height,HX_HCSTRING("cffi_lime_font_get_height","\x6f","\xe4","\xaa","\xa1")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_font_get_num_glyphs,HX_HCSTRING("cffi_lime_font_get_num_glyphs","\xe8","\xe1","\x1a","\x9c")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_font_get_underline_position,HX_HCSTRING("cffi_lime_font_get_underline_position","\x04","\x0a","\x6e","\x56")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_font_get_underline_thickness,HX_HCSTRING("cffi_lime_font_get_underline_thickness","\xb9","\xb7","\xef","\xd3")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_font_get_units_per_em,HX_HCSTRING("cffi_lime_font_get_units_per_em","\x62","\xf8","\x84","\x3e")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_font_load,HX_HCSTRING("cffi_lime_font_load","\xa5","\xdd","\x94","\x73")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_font_outline_decompose,HX_HCSTRING("cffi_lime_font_outline_decompose","\x95","\xc6","\xee","\xdc")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ,int ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_font_render_glyph,HX_HCSTRING("cffi_lime_font_render_glyph","\x42","\x2f","\xc9","\x71")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_font_render_glyphs,HX_HCSTRING("cffi_lime_font_render_glyphs","\xf1","\x2a","\x40","\x1e")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_font_set_size,HX_HCSTRING("cffi_lime_font_set_size","\xbd","\x24","\x8a","\x51")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gamepad_add_mappings,HX_HCSTRING("cffi_lime_gamepad_add_mappings","\xf2","\x1c","\x61","\x57")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gamepad_get_device_guid,HX_HCSTRING("cffi_lime_gamepad_get_device_guid","\xda","\x49","\xe7","\x1e")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gamepad_get_device_name,HX_HCSTRING("cffi_lime_gamepad_get_device_name","\x9c","\x9e","\x78","\x23")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gamepad_event_manager_register,HX_HCSTRING("cffi_lime_gamepad_event_manager_register","\xa9","\x21","\x63","\x7c")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gzip_compress,HX_HCSTRING("cffi_lime_gzip_compress","\x36","\xf2","\x55","\xee")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gzip_decompress,HX_HCSTRING("cffi_lime_gzip_decompress","\xb7","\xff","\x99","\x17")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_haptic_vibrate,HX_HCSTRING("cffi_lime_haptic_vibrate","\xd8","\xc4","\x18","\xcb")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_image_encode,HX_HCSTRING("cffi_lime_image_encode","\x4b","\x6d","\x81","\x82")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_image_load,HX_HCSTRING("cffi_lime_image_load","\x1b","\x6e","\x80","\x2d")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_image_data_util_color_transform,HX_HCSTRING("cffi_lime_image_data_util_color_transform","\x33","\xb4","\x2f","\xf1")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_image_data_util_copy_channel,HX_HCSTRING("cffi_lime_image_data_util_copy_channel","\x36","\xf7","\xde","\x9a")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,bool ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_image_data_util_copy_pixels,HX_HCSTRING("cffi_lime_image_data_util_copy_pixels","\x1a","\xc8","\x5a","\xd9")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_image_data_util_fill_rect,HX_HCSTRING("cffi_lime_image_data_util_fill_rect","\x43","\x23","\xe6","\xb7")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_image_data_util_flood_fill,HX_HCSTRING("cffi_lime_image_data_util_flood_fill","\xe1","\x32","\x7e","\xe2")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_image_data_util_get_pixels,HX_HCSTRING("cffi_lime_image_data_util_get_pixels","\xf3","\x89","\x00","\xfd")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_image_data_util_merge,HX_HCSTRING("cffi_lime_image_data_util_merge","\xdb","\x58","\xe1","\x59")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_image_data_util_multiply_alpha,HX_HCSTRING("cffi_lime_image_data_util_multiply_alpha","\x40","\xf1","\xf1","\x88")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_image_data_util_resize,HX_HCSTRING("cffi_lime_image_data_util_resize","\x71","\x02","\xc0","\x4b")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_image_data_util_set_format,HX_HCSTRING("cffi_lime_image_data_util_set_format","\x71","\xc8","\x62","\x71")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_image_data_util_set_pixels,HX_HCSTRING("cffi_lime_image_data_util_set_pixels","\x67","\x28","\x7e","\x00")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ,int ,int ,int ,bool ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_image_data_util_threshold,HX_HCSTRING("cffi_lime_image_data_util_threshold","\x4e","\xc7","\x57","\xb2")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_image_data_util_unmultiply_alpha,HX_HCSTRING("cffi_lime_image_data_util_unmultiply_alpha","\x99","\x7a","\x47","\x65")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_joystick_get_device_guid,HX_HCSTRING("cffi_lime_joystick_get_device_guid","\xf7","\xbc","\x8f","\xdf")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_joystick_get_device_name,HX_HCSTRING("cffi_lime_joystick_get_device_name","\xb9","\x11","\x21","\xe4")},
	{hx::fsObject /*::cpp::Function< int ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_joystick_get_num_axes,HX_HCSTRING("cffi_lime_joystick_get_num_axes","\xf9","\x67","\x04","\x0c")},
	{hx::fsObject /*::cpp::Function< int ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_joystick_get_num_buttons,HX_HCSTRING("cffi_lime_joystick_get_num_buttons","\xed","\xff","\x8f","\xa2")},
	{hx::fsObject /*::cpp::Function< int ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_joystick_get_num_hats,HX_HCSTRING("cffi_lime_joystick_get_num_hats","\x8c","\x7f","\x93","\x10")},
	{hx::fsObject /*::cpp::Function< int ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_joystick_get_num_trackballs,HX_HCSTRING("cffi_lime_joystick_get_num_trackballs","\xfd","\xdc","\xcd","\xc7")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_joystick_event_manager_register,HX_HCSTRING("cffi_lime_joystick_event_manager_register","\x2c","\xfc","\xb5","\xc4")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,bool ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_jpeg_decode_bytes,HX_HCSTRING("cffi_lime_jpeg_decode_bytes","\x60","\xb5","\xa0","\x2b")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::String ,bool ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_jpeg_decode_file,HX_HCSTRING("cffi_lime_jpeg_decode_file","\x27","\xb7","\x3e","\xc8")},
	{hx::fsObject /*::cpp::Function< ::cpp::Float32 ( ::cpp::Float32 ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_key_code_from_scan_code,HX_HCSTRING("cffi_lime_key_code_from_scan_code","\x5b","\xb0","\x3e","\xae")},
	{hx::fsObject /*::cpp::Function< ::cpp::Float32 ( ::cpp::Float32 ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_key_code_to_scan_code,HX_HCSTRING("cffi_lime_key_code_to_scan_code","\x6c","\x4d","\xc6","\x92")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_key_event_manager_register,HX_HCSTRING("cffi_lime_key_event_manager_register","\xeb","\x5b","\x98","\x27")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_lzma_compress,HX_HCSTRING("cffi_lime_lzma_compress","\xae","\x0c","\x35","\x0a")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_lzma_decompress,HX_HCSTRING("cffi_lime_lzma_decompress","\x2f","\xa8","\x4e","\x3d")},
	{hx::fsObject /*::cpp::Function< void ( ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_mouse_hide,HX_HCSTRING("cffi_lime_mouse_hide","\xad","\x35","\xd6","\x3c")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_mouse_set_cursor,HX_HCSTRING("cffi_lime_mouse_set_cursor","\x3e","\xa0","\xe9","\x5c")},
	{hx::fsObject /*::cpp::Function< void ( bool ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_mouse_set_lock,HX_HCSTRING("cffi_lime_mouse_set_lock","\x53","\x03","\xc2","\x40")},
	{hx::fsObject /*::cpp::Function< void ( ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_mouse_show,HX_HCSTRING("cffi_lime_mouse_show","\xe8","\xd5","\x1a","\x44")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_mouse_warp,HX_HCSTRING("cffi_lime_mouse_warp","\x33","\x63","\xba","\x46")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_mouse_event_manager_register,HX_HCSTRING("cffi_lime_mouse_event_manager_register","\x65","\xd6","\x2b","\xe0")},
	{hx::fsObject /*::cpp::Function< void ( ::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_neko_execute,HX_HCSTRING("cffi_lime_neko_execute","\xe2","\x87","\x42","\xeb")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,bool ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_png_decode_bytes,HX_HCSTRING("cffi_lime_png_decode_bytes","\x01","\x38","\x28","\xe2")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::String ,bool ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_png_decode_file,HX_HCSTRING("cffi_lime_png_decode_file","\xa6","\x23","\x36","\xca")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_renderer_create,HX_HCSTRING("cffi_lime_renderer_create","\xc7","\x6a","\x82","\x36")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_renderer_flip,HX_HCSTRING("cffi_lime_renderer_flip","\xb8","\xfd","\x97","\xe3")},
	{hx::fsObject /*::cpp::Function< Float ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_renderer_get_context,HX_HCSTRING("cffi_lime_renderer_get_context","\x5b","\x52","\xa6","\x60")},
	{hx::fsObject /*::cpp::Function< Float ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_renderer_get_scale,HX_HCSTRING("cffi_lime_renderer_get_scale","\xf6","\x57","\xb7","\x4d")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_renderer_get_type,HX_HCSTRING("cffi_lime_renderer_get_type","\xce","\x7a","\xd7","\x4c")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_renderer_lock,HX_HCSTRING("cffi_lime_renderer_lock","\xf6","\x86","\x91","\xe7")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_renderer_make_current,HX_HCSTRING("cffi_lime_renderer_make_current","\xb3","\x3b","\x5f","\xbd")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_renderer_read_pixels,HX_HCSTRING("cffi_lime_renderer_read_pixels","\x8b","\xc8","\xef","\x41")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_renderer_unlock,HX_HCSTRING("cffi_lime_renderer_unlock","\x8f","\xa6","\xff","\x1f")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_render_event_manager_register,HX_HCSTRING("cffi_lime_render_event_manager_register","\x12","\x53","\xd3","\xec")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_sensor_event_manager_register,HX_HCSTRING("cffi_lime_sensor_event_manager_register","\xae","\xe8","\xbc","\x0e")},
	{hx::fsObject /*::cpp::Function< bool ( ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_system_get_allow_screen_timeout,HX_HCSTRING("cffi_lime_system_get_allow_screen_timeout","\xec","\x70","\x0c","\x2b")},
	{hx::fsObject /*::cpp::Function< bool ( bool ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_system_set_allow_screen_timeout,HX_HCSTRING("cffi_lime_system_set_allow_screen_timeout","\x60","\xf2","\xe6","\x3d")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ,::String ,::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_system_get_directory,HX_HCSTRING("cffi_lime_system_get_directory","\x45","\x82","\xbc","\xfa")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_system_get_display,HX_HCSTRING("cffi_lime_system_get_display","\x1a","\x94","\xb1","\xad")},
	{hx::fsObject /*::cpp::Function< bool ( ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_system_get_ios_tablet,HX_HCSTRING("cffi_lime_system_get_ios_tablet","\x40","\xa9","\xdb","\x2f")},
	{hx::fsObject /*::cpp::Function< int ( ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_system_get_num_displays,HX_HCSTRING("cffi_lime_system_get_num_displays","\x72","\xd7","\xff","\x40")},
	{hx::fsObject /*::cpp::Function< Float ( ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_system_get_timer,HX_HCSTRING("cffi_lime_system_get_timer","\x9d","\x83","\x02","\x23")},
	{hx::fsObject /*::cpp::Function< void ( ::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_system_open_file,HX_HCSTRING("cffi_lime_system_open_file","\xd2","\x51","\xe8","\xa5")},
	{hx::fsObject /*::cpp::Function< void ( ::String ,::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_system_open_url,HX_HCSTRING("cffi_lime_system_open_url","\xd9","\xe4","\x2e","\x59")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_text_event_manager_register,HX_HCSTRING("cffi_lime_text_event_manager_register","\xdb","\xfa","\x47","\x8b")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ,::String ,::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_text_layout_create,HX_HCSTRING("cffi_lime_text_layout_create","\x30","\x9f","\x85","\x5c")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,int ,::String ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_text_layout_position,HX_HCSTRING("cffi_lime_text_layout_position","\xdd","\x4d","\x96","\x5f")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_text_layout_set_direction,HX_HCSTRING("cffi_lime_text_layout_set_direction","\x6e","\x0e","\x2a","\x78")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_text_layout_set_language,HX_HCSTRING("cffi_lime_text_layout_set_language","\x09","\xaf","\x70","\x05")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_text_layout_set_script,HX_HCSTRING("cffi_lime_text_layout_set_script","\x7c","\xbe","\x2d","\xf0")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_touch_event_manager_register,HX_HCSTRING("cffi_lime_touch_event_manager_register","\x0b","\xc8","\x9c","\xeb")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::String ,::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_window_alert,HX_HCSTRING("cffi_lime_window_alert","\x1e","\xde","\x00","\xa8")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_window_close,HX_HCSTRING("cffi_lime_window_close","\x7a","\x9e","\xd5","\xce")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ,int ,::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_window_create,HX_HCSTRING("cffi_lime_window_create","\xfa","\xc9","\xd2","\x99")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_window_focus,HX_HCSTRING("cffi_lime_window_focus","\x9a","\xe6","\xfb","\x8a")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_window_get_display,HX_HCSTRING("cffi_lime_window_get_display","\x9b","\x8e","\xa3","\xe8")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_window_get_display_mode,HX_HCSTRING("cffi_lime_window_get_display_mode","\xc7","\x8e","\x7c","\x8a")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_window_get_enable_text_events,HX_HCSTRING("cffi_lime_window_get_enable_text_events","\xf6","\x00","\x95","\xd8")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_window_get_height,HX_HCSTRING("cffi_lime_window_get_height","\xae","\x31","\xb7","\x32")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_window_get_id,HX_HCSTRING("cffi_lime_window_get_id","\x22","\x56","\xf3","\xc0")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_window_get_width,HX_HCSTRING("cffi_lime_window_get_width","\x1f","\x22","\xf6","\x1a")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_window_get_x,HX_HCSTRING("cffi_lime_window_get_x","\x11","\x2c","\xd3","\x17")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_window_get_y,HX_HCSTRING("cffi_lime_window_get_y","\x12","\x2c","\xd3","\x17")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_window_move,HX_HCSTRING("cffi_lime_window_move","\x8f","\xea","\x74","\x73")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_window_resize,HX_HCSTRING("cffi_lime_window_resize","\xf2","\xbc","\x3e","\x26")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ,bool ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_window_set_borderless,HX_HCSTRING("cffi_lime_window_set_borderless","\x00","\x48","\x02","\x7c")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_window_set_display_mode,HX_HCSTRING("cffi_lime_window_set_display_mode","\x3b","\x7c","\xbe","\xe0")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,bool ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_window_set_enable_text_events,HX_HCSTRING("cffi_lime_window_set_enable_text_events","\x6a","\x7d","\x40","\x0c")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ,bool ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_window_set_fullscreen,HX_HCSTRING("cffi_lime_window_set_fullscreen","\xf6","\x3b","\x45","\x5e")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_window_set_icon,HX_HCSTRING("cffi_lime_window_set_icon","\xf4","\x9a","\x6b","\x13")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ,bool ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_window_set_maximized,HX_HCSTRING("cffi_lime_window_set_maximized","\xbd","\xdc","\xa4","\x85")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ,bool ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_window_set_minimized,HX_HCSTRING("cffi_lime_window_set_minimized","\x2b","\xca","\x61","\xaf")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ,bool ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_window_set_resizable,HX_HCSTRING("cffi_lime_window_set_resizable","\x10","\x06","\x14","\x30")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_window_set_title,HX_HCSTRING("cffi_lime_window_set_title","\xbd","\x6d","\x1f","\x44")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_window_event_manager_register,HX_HCSTRING("cffi_lime_window_event_manager_register","\xb8","\xfd","\x73","\x0b")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_zlib_compress,HX_HCSTRING("cffi_lime_zlib_compress","\xe5","\xb5","\x14","\xff")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_zlib_decompress,HX_HCSTRING("cffi_lime_zlib_decompress","\x26","\x4d","\x54","\xe8")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_buffer_data,HX_HCSTRING("cffi_lime_al_buffer_data","\x46","\xaa","\xce","\x29")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_buffer3f,HX_HCSTRING("cffi_lime_al_buffer3f","\x76","\x1c","\xa3","\x02")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_buffer3i,HX_HCSTRING("cffi_lime_al_buffer3i","\x79","\x1c","\xa3","\x02")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ,::cpp::Float32 ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_bufferf,HX_HCSTRING("cffi_lime_al_bufferf","\x23","\x16","\x70","\x7f")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_bufferfv,HX_HCSTRING("cffi_lime_al_bufferfv","\xf3","\x48","\xa3","\x02")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_bufferi,HX_HCSTRING("cffi_lime_al_bufferi","\x26","\x16","\x70","\x7f")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_bufferiv,HX_HCSTRING("cffi_lime_al_bufferiv","\x90","\x4b","\xa3","\x02")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_delete_buffer,HX_HCSTRING("cffi_lime_al_delete_buffer","\x51","\xd8","\x9d","\x11")},
	{hx::fsObject /*::cpp::Function< void ( int ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_delete_buffers,HX_HCSTRING("cffi_lime_al_delete_buffers","\x02","\x6f","\x7f","\x58")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_delete_source,HX_HCSTRING("cffi_lime_al_delete_source","\x2c","\xcc","\x3a","\x73")},
	{hx::fsObject /*::cpp::Function< void ( int ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_delete_sources,HX_HCSTRING("cffi_lime_al_delete_sources","\xc7","\xda","\x37","\x60")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_disable,HX_HCSTRING("cffi_lime_al_disable","\xa5","\xdc","\x37","\x7f")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_distance_model,HX_HCSTRING("cffi_lime_al_distance_model","\xc2","\xe2","\x2b","\x91")},
	{hx::fsObject /*::cpp::Function< void ( ::cpp::Float32 ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_doppler_factor,HX_HCSTRING("cffi_lime_al_doppler_factor","\xa3","\x68","\xef","\x7f")},
	{hx::fsObject /*::cpp::Function< void ( ::cpp::Float32 ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_doppler_velocity,HX_HCSTRING("cffi_lime_al_doppler_velocity","\xf1","\x6e","\xd2","\xd2")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_enable,HX_HCSTRING("cffi_lime_al_enable","\x66","\xa2","\xdd","\xd5")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_gen_source,HX_HCSTRING("cffi_lime_al_gen_source","\x4d","\x95","\x4b","\x8a")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_gen_sources,HX_HCSTRING("cffi_lime_al_gen_sources","\x86","\x0e","\xd7","\x77")},
	{hx::fsObject /*::cpp::Function< bool ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_boolean,HX_HCSTRING("cffi_lime_al_get_boolean","\xfc","\x5f","\x35","\x2e")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_booleanv,HX_HCSTRING("cffi_lime_al_get_booleanv","\xfa","\x9c","\x7e","\x40")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_gen_buffer,HX_HCSTRING("cffi_lime_al_gen_buffer","\x72","\xa1","\xae","\x28")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_gen_buffers,HX_HCSTRING("cffi_lime_al_gen_buffers","\xc1","\xa2","\x1e","\x70")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_buffer3f,HX_HCSTRING("cffi_lime_al_get_buffer3f","\xff","\x5d","\x6e","\x2c")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_buffer3i,HX_HCSTRING("cffi_lime_al_get_buffer3i","\x02","\x5e","\x6e","\x2c")},
	{hx::fsObject /*::cpp::Function< ::cpp::Float32 ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_bufferf,HX_HCSTRING("cffi_lime_al_get_bufferf","\xba","\x18","\xc7","\x61")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_bufferfv,HX_HCSTRING("cffi_lime_al_get_bufferfv","\x7c","\x8a","\x6e","\x2c")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_bufferi,HX_HCSTRING("cffi_lime_al_get_bufferi","\xbd","\x18","\xc7","\x61")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_bufferiv,HX_HCSTRING("cffi_lime_al_get_bufferiv","\x19","\x8d","\x6e","\x2c")},
	{hx::fsObject /*::cpp::Function< Float ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_double,HX_HCSTRING("cffi_lime_al_get_double","\x3d","\xbc","\x13","\xe2")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_doublev,HX_HCSTRING("cffi_lime_al_get_doublev","\x99","\xf9","\x30","\xef")},
	{hx::fsObject /*::cpp::Function< int ( ::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_enum_value,HX_HCSTRING("cffi_lime_al_get_enum_value","\x9f","\x7f","\x74","\xea")},
	{hx::fsObject /*::cpp::Function< int ( ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_error,HX_HCSTRING("cffi_lime_al_get_error","\x1c","\x84","\x82","\x51")},
	{hx::fsObject /*::cpp::Function< ::cpp::Float32 ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_float,HX_HCSTRING("cffi_lime_al_get_float","\xf0","\x7d","\xef","\xe0")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_floatv,HX_HCSTRING("cffi_lime_al_get_floatv","\x86","\xb4","\x9e","\xf0")},
	{hx::fsObject /*::cpp::Function< int ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_integer,HX_HCSTRING("cffi_lime_al_get_integer","\x12","\x33","\x52","\xc7")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_integerv,HX_HCSTRING("cffi_lime_al_get_integerv","\x24","\x7d","\x9a","\xa0")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_listener3f,HX_HCSTRING("cffi_lime_al_get_listener3f","\x73","\xc9","\x10","\x8c")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_listener3i,HX_HCSTRING("cffi_lime_al_get_listener3i","\x76","\xc9","\x10","\x8c")},
	{hx::fsObject /*::cpp::Function< ::cpp::Float32 ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_listenerf,HX_HCSTRING("cffi_lime_al_get_listenerf","\xc6","\xd7","\x4b","\xf6")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_listenerfv,HX_HCSTRING("cffi_lime_al_get_listenerfv","\xf0","\xf5","\x10","\x8c")},
	{hx::fsObject /*::cpp::Function< int ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_listeneri,HX_HCSTRING("cffi_lime_al_get_listeneri","\xc9","\xd7","\x4b","\xf6")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_listeneriv,HX_HCSTRING("cffi_lime_al_get_listeneriv","\x8d","\xf8","\x10","\x8c")},
	{hx::fsObject /*::cpp::Function< Float ( ::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_proc_address,HX_HCSTRING("cffi_lime_al_get_proc_address","\xf7","\xd2","\x70","\x14")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_source3f,HX_HCSTRING("cffi_lime_al_get_source3f","\x9a","\x3e","\x14","\xe6")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_source3i,HX_HCSTRING("cffi_lime_al_get_source3i","\x9d","\x3e","\x14","\xe6")},
	{hx::fsObject /*::cpp::Function< ::cpp::Float32 ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_sourcef,HX_HCSTRING("cffi_lime_al_get_sourcef","\x7f","\x84","\x7f","\x69")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_sourcefv,HX_HCSTRING("cffi_lime_al_get_sourcefv","\x17","\x6b","\x14","\xe6")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_sourcei,HX_HCSTRING("cffi_lime_al_get_sourcei","\x82","\x84","\x7f","\x69")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_sourceiv,HX_HCSTRING("cffi_lime_al_get_sourceiv","\xb4","\x6d","\x14","\xe6")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_get_string,HX_HCSTRING("cffi_lime_al_get_string","\xfd","\xb9","\x78","\xc0")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_is_buffer,HX_HCSTRING("cffi_lime_al_is_buffer","\xf2","\x7f","\x68","\x10")},
	{hx::fsObject /*::cpp::Function< bool ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_is_enabled,HX_HCSTRING("cffi_lime_al_is_enabled","\x4f","\xd5","\xa7","\x17")},
	{hx::fsObject /*::cpp::Function< bool ( ::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_is_extension_present,HX_HCSTRING("cffi_lime_al_is_extension_present","\x49","\x5d","\xc8","\xe0")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_is_source,HX_HCSTRING("cffi_lime_al_is_source","\xcd","\x73","\x05","\x72")},
	{hx::fsObject /*::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_listener3f,HX_HCSTRING("cffi_lime_al_listener3f","\xaa","\x53","\xcb","\xe7")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_listener3i,HX_HCSTRING("cffi_lime_al_listener3i","\xad","\x53","\xcb","\xe7")},
	{hx::fsObject /*::cpp::Function< void ( int ,::cpp::Float32 ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_listenerf,HX_HCSTRING("cffi_lime_al_listenerf","\x6f","\xc1","\x3d","\x8e")},
	{hx::fsObject /*::cpp::Function< void ( int ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_listenerfv,HX_HCSTRING("cffi_lime_al_listenerfv","\x27","\x80","\xcb","\xe7")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_listeneri,HX_HCSTRING("cffi_lime_al_listeneri","\x72","\xc1","\x3d","\x8e")},
	{hx::fsObject /*::cpp::Function< void ( int ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_listeneriv,HX_HCSTRING("cffi_lime_al_listeneriv","\xc4","\x82","\xcb","\xe7")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_source_pause,HX_HCSTRING("cffi_lime_al_source_pause","\x75","\xe5","\x07","\x45")},
	{hx::fsObject /*::cpp::Function< void ( int ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_source_pausev,HX_HCSTRING("cffi_lime_al_source_pausev","\x61","\xe1","\xe0","\x21")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_source_play,HX_HCSTRING("cffi_lime_al_source_play","\x55","\xb4","\x7f","\xc3")},
	{hx::fsObject /*::cpp::Function< void ( int ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_source_playv,HX_HCSTRING("cffi_lime_al_source_playv","\x81","\x16","\x3e","\x4c")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_source_queue_buffers,HX_HCSTRING("cffi_lime_al_source_queue_buffers","\x04","\x29","\xf6","\x45")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_source_rewind,HX_HCSTRING("cffi_lime_al_source_rewind","\x9c","\xca","\x7c","\x3d")},
	{hx::fsObject /*::cpp::Function< void ( int ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_source_rewindv,HX_HCSTRING("cffi_lime_al_source_rewindv","\x5a","\x7e","\xb4","\x8f")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_source_stop,HX_HCSTRING("cffi_lime_al_source_stop","\x63","\x76","\x81","\xc5")},
	{hx::fsObject /*::cpp::Function< void ( int ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_source_stopv,HX_HCSTRING("cffi_lime_al_source_stopv","\xb3","\x20","\xc6","\x0b")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_source_unqueue_buffers,HX_HCSTRING("cffi_lime_al_source_unqueue_buffers","\xcb","\x9c","\x23","\x8e")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_source3f,HX_HCSTRING("cffi_lime_al_source3f","\x11","\xfd","\x48","\xbc")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_source3i,HX_HCSTRING("cffi_lime_al_source3i","\x14","\xfd","\x48","\xbc")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ,::cpp::Float32 ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_sourcef,HX_HCSTRING("cffi_lime_al_sourcef","\xe8","\x81","\x28","\x87")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_sourcefv,HX_HCSTRING("cffi_lime_al_sourcefv","\x8e","\x29","\x49","\xbc")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_sourcei,HX_HCSTRING("cffi_lime_al_sourcei","\xeb","\x81","\x28","\x87")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_sourceiv,HX_HCSTRING("cffi_lime_al_sourceiv","\x2b","\x2c","\x49","\xbc")},
	{hx::fsObject /*::cpp::Function< void ( ::cpp::Float32 ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_al_speed_of_sound,HX_HCSTRING("cffi_lime_al_speed_of_sound","\x42","\x66","\x38","\xed")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_alc_close_device,HX_HCSTRING("cffi_lime_alc_close_device","\x55","\x3c","\xec","\x8c")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_alc_create_context,HX_HCSTRING("cffi_lime_alc_create_context","\x44","\x97","\xb5","\xb3")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_alc_destroy_context,HX_HCSTRING("cffi_lime_alc_destroy_context","\x92","\xfe","\xcd","\x00")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_alc_get_contexts_device,HX_HCSTRING("cffi_lime_alc_get_contexts_device","\x50","\x2a","\x77","\xd8")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_alc_get_current_context,HX_HCSTRING("cffi_lime_alc_get_current_context","\xe8","\x47","\xb9","\x3a")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_alc_get_error,HX_HCSTRING("cffi_lime_alc_get_error","\x47","\x72","\xb0","\xd4")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_alc_get_integerv,HX_HCSTRING("cffi_lime_alc_get_integerv","\xd9","\x7b","\xc1","\x04")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_alc_get_string,HX_HCSTRING("cffi_lime_alc_get_string","\x72","\x31","\x7b","\x05")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_alc_make_context_current,HX_HCSTRING("cffi_lime_alc_make_context_current","\xf0","\x61","\x12","\x68")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_alc_open_device,HX_HCSTRING("cffi_lime_alc_open_device","\xd3","\x7b","\x41","\xf5")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_alc_pause_device,HX_HCSTRING("cffi_lime_alc_pause_device","\xd7","\x00","\xd5","\xdb")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_alc_process_context,HX_HCSTRING("cffi_lime_alc_process_context","\x07","\x71","\xe4","\xee")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_alc_resume_device,HX_HCSTRING("cffi_lime_alc_resume_device","\x50","\x42","\x22","\x87")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_alc_suspend_context,HX_HCSTRING("cffi_lime_alc_suspend_context","\x14","\x53","\x00","\x46")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_arc,HX_HCSTRING("cffi_lime_cairo_arc","\xaa","\x4b","\x23","\x6b")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_arc_negative,HX_HCSTRING("cffi_lime_cairo_arc_negative","\xea","\x0c","\xe7","\xb3")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_clip,HX_HCSTRING("cffi_lime_cairo_clip","\x78","\xce","\x0c","\x55")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_clip_preserve,HX_HCSTRING("cffi_lime_cairo_clip_preserve","\xb3","\x05","\x42","\x67")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_clip_extents,HX_HCSTRING("cffi_lime_cairo_clip_extents","\x42","\x3b","\xc9","\x0e")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_close_path,HX_HCSTRING("cffi_lime_cairo_close_path","\x74","\x7c","\x08","\x9d")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_copy_page,HX_HCSTRING("cffi_lime_cairo_copy_page","\xb1","\x89","\xe2","\xc3")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_create,HX_HCSTRING("cffi_lime_cairo_create","\xa4","\x00","\x6f","\xbe")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_curve_to,HX_HCSTRING("cffi_lime_cairo_curve_to","\xf3","\x59","\x8b","\x35")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_fill,HX_HCSTRING("cffi_lime_cairo_fill","\x2b","\x2e","\x06","\x57")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_fill_extents,HX_HCSTRING("cffi_lime_cairo_fill_extents","\xf5","\x05","\x86","\x46")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_fill_preserve,HX_HCSTRING("cffi_lime_cairo_fill_preserve","\xa0","\x97","\xb6","\xf4")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_get_antialias,HX_HCSTRING("cffi_lime_cairo_get_antialias","\xdd","\x15","\x1e","\x3e")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_get_current_point,HX_HCSTRING("cffi_lime_cairo_get_current_point","\x39","\x0b","\xd4","\xb1")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_get_dash,HX_HCSTRING("cffi_lime_cairo_get_dash","\x83","\x64","\xd5","\x0e")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_get_dash_count,HX_HCSTRING("cffi_lime_cairo_get_dash_count","\xd3","\xb4","\xbe","\x4c")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_get_fill_rule,HX_HCSTRING("cffi_lime_cairo_get_fill_rule","\xa7","\x8a","\x72","\x02")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_get_font_face,HX_HCSTRING("cffi_lime_cairo_get_font_face","\x7c","\x43","\xa9","\xd7")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_get_font_options,HX_HCSTRING("cffi_lime_cairo_get_font_options","\xdf","\xf9","\x9d","\x75")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_get_group_target,HX_HCSTRING("cffi_lime_cairo_get_group_target","\xc2","\xef","\xf3","\xae")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_get_line_cap,HX_HCSTRING("cffi_lime_cairo_get_line_cap","\xb8","\xd6","\x2e","\xb8")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_get_line_join,HX_HCSTRING("cffi_lime_cairo_get_line_join","\x84","\x22","\x78","\x75")},
	{hx::fsObject /*::cpp::Function< Float ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_get_line_width,HX_HCSTRING("cffi_lime_cairo_get_line_width","\x2c","\x8e","\xe0","\xcb")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_get_matrix,HX_HCSTRING("cffi_lime_cairo_get_matrix","\xb2","\x33","\x41","\x14")},
	{hx::fsObject /*::cpp::Function< Float ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_get_miter_limit,HX_HCSTRING("cffi_lime_cairo_get_miter_limit","\x30","\x61","\x26","\x46")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_get_operator,HX_HCSTRING("cffi_lime_cairo_get_operator","\x55","\x17","\x3b","\x6b")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_get_source,HX_HCSTRING("cffi_lime_cairo_get_source","\x4c","\xae","\xaa","\x8a")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_get_target,HX_HCSTRING("cffi_lime_cairo_get_target","\xc2","\xf0","\x65","\xdf")},
	{hx::fsObject /*::cpp::Function< Float ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_get_tolerance,HX_HCSTRING("cffi_lime_cairo_get_tolerance","\x3c","\x7c","\xb0","\xfb")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_has_current_point,HX_HCSTRING("cffi_lime_cairo_has_current_point","\xfd","\x98","\x0b","\x83")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_identity_matrix,HX_HCSTRING("cffi_lime_cairo_identity_matrix","\xba","\x37","\x2e","\xa4")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_in_clip,HX_HCSTRING("cffi_lime_cairo_in_clip","\x02","\xca","\xa9","\xcf")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_in_fill,HX_HCSTRING("cffi_lime_cairo_in_fill","\xb5","\x29","\xa3","\xd1")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_in_stroke,HX_HCSTRING("cffi_lime_cairo_in_stroke","\x6a","\xbf","\x0e","\x6c")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_line_to,HX_HCSTRING("cffi_lime_cairo_line_to","\x7e","\xad","\xec","\xf0")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_mask,HX_HCSTRING("cffi_lime_cairo_mask","\x94","\xa0","\xa0","\x5b")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_mask_surface,HX_HCSTRING("cffi_lime_cairo_mask_surface","\x42","\x14","\xd3","\x67")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_move_to,HX_HCSTRING("cffi_lime_cairo_move_to","\x81","\xf2","\xda","\x1b")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_new_path,HX_HCSTRING("cffi_lime_cairo_new_path","\xcc","\x28","\x37","\xda")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_paint,HX_HCSTRING("cffi_lime_cairo_paint","\xf6","\x0a","\x18","\x8b")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_paint_with_alpha,HX_HCSTRING("cffi_lime_cairo_paint_with_alpha","\x0e","\x07","\x61","\xeb")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_pop_group,HX_HCSTRING("cffi_lime_cairo_pop_group","\x29","\x3a","\x6f","\xb1")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_pop_group_to_source,HX_HCSTRING("cffi_lime_cairo_pop_group_to_source","\x89","\x35","\xa9","\xd8")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_push_group,HX_HCSTRING("cffi_lime_cairo_push_group","\x82","\x79","\x18","\x1d")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_push_group_with_content,HX_HCSTRING("cffi_lime_cairo_push_group_with_content","\xdd","\xa2","\xf9","\xd0")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_rectangle,HX_HCSTRING("cffi_lime_cairo_rectangle","\x87","\xb3","\x2e","\xed")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_rel_curve_to,HX_HCSTRING("cffi_lime_cairo_rel_curve_to","\xd9","\xf8","\x81","\xe0")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_rel_line_to,HX_HCSTRING("cffi_lime_cairo_rel_line_to","\x58","\xed","\x0d","\x23")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_rel_move_to,HX_HCSTRING("cffi_lime_cairo_rel_move_to","\x5b","\x32","\xfc","\x4d")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_reset_clip,HX_HCSTRING("cffi_lime_cairo_reset_clip","\x28","\xe0","\x33","\xb2")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_restore,HX_HCSTRING("cffi_lime_cairo_restore","\xa6","\x40","\xf7","\x3b")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_rotate,HX_HCSTRING("cffi_lime_cairo_rotate","\x03","\xe0","\x7f","\x0d")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_save,HX_HCSTRING("cffi_lime_cairo_save","\xe5","\xea","\x97","\x5f")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_scale,HX_HCSTRING("cffi_lime_cairo_scale","\xe2","\x21","\x98","\x46")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_set_antialias,HX_HCSTRING("cffi_lime_cairo_set_antialias","\xe9","\xf7","\x23","\x83")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_set_dash,HX_HCSTRING("cffi_lime_cairo_set_dash","\xf7","\xbd","\x32","\xbd")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_set_fill_rule,HX_HCSTRING("cffi_lime_cairo_set_fill_rule","\xb3","\x6c","\x78","\x47")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_set_font_face,HX_HCSTRING("cffi_lime_cairo_set_font_face","\x88","\x25","\xaf","\x1c")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_set_font_options,HX_HCSTRING("cffi_lime_cairo_set_font_options","\x53","\xe7","\xdf","\xcb")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_set_font_size,HX_HCSTRING("cffi_lime_cairo_set_font_size","\xac","\x11","\x4d","\x25")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_set_line_cap,HX_HCSTRING("cffi_lime_cairo_set_line_cap","\x2c","\xfa","\x27","\xcd")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_set_line_join,HX_HCSTRING("cffi_lime_cairo_set_line_join","\x90","\x04","\x7e","\xba")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_set_line_width,HX_HCSTRING("cffi_lime_cairo_set_line_width","\xa0","\x76","\x00","\xec")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_set_matrix,HX_HCSTRING("cffi_lime_cairo_set_matrix","\x26","\xd2","\xbe","\x17")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_set_miter_limit,HX_HCSTRING("cffi_lime_cairo_set_miter_limit","\x3c","\xde","\xf1","\x41")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_set_operator,HX_HCSTRING("cffi_lime_cairo_set_operator","\xc9","\x3a","\x34","\x80")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_set_source,HX_HCSTRING("cffi_lime_cairo_set_source","\xc0","\x4c","\x28","\x8e")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_set_source_rgb,HX_HCSTRING("cffi_lime_cairo_set_source_rgb","\xce","\xcc","\x4f","\x02")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_set_source_rgba,HX_HCSTRING("cffi_lime_cairo_set_source_rgba","\xd3","\x67","\x83","\x03")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_set_source_surface,HX_HCSTRING("cffi_lime_cairo_set_source_surface","\x6e","\xcc","\x64","\x6d")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_set_tolerance,HX_HCSTRING("cffi_lime_cairo_set_tolerance","\x48","\x5e","\xb6","\x40")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_show_glyphs,HX_HCSTRING("cffi_lime_cairo_show_glyphs","\xe1","\xe4","\x84","\xb7")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_show_page,HX_HCSTRING("cffi_lime_cairo_show_page","\x69","\xcb","\x4b","\x6c")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_show_text,HX_HCSTRING("cffi_lime_cairo_show_text","\xc7","\xbd","\xf3","\x6e")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_status,HX_HCSTRING("cffi_lime_cairo_status","\xda","\x80","\x5b","\x48")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_stroke,HX_HCSTRING("cffi_lime_cairo_stroke","\x60","\x4d","\x94","\x53")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_stroke_extents,HX_HCSTRING("cffi_lime_cairo_stroke_extents","\x2a","\xe2","\xc5","\x68")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_stroke_preserve,HX_HCSTRING("cffi_lime_cairo_stroke_preserve","\xcb","\x69","\x57","\xca")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_text_path,HX_HCSTRING("cffi_lime_cairo_text_path","\x0f","\x01","\xd5","\xd6")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_transform,HX_HCSTRING("cffi_lime_cairo_transform","\xc4","\x0c","\x45","\x19")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_translate,HX_HCSTRING("cffi_lime_cairo_translate","\xa6","\xb6","\x31","\x1d")},
	{hx::fsObject /*::cpp::Function< int ( ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_version,HX_HCSTRING("cffi_lime_cairo_version","\x70","\xc0","\x38","\x4e")},
	{hx::fsObject /*::cpp::Function< ::String ( ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_version_string,HX_HCSTRING("cffi_lime_cairo_version_string","\x00","\x68","\x18","\xc4")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_font_face_status,HX_HCSTRING("cffi_lime_cairo_font_face_status","\xcc","\x03","\xc2","\x7a")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_font_options_create,HX_HCSTRING("cffi_lime_cairo_font_options_create","\x05","\xd6","\xdf","\xc6")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_font_options_get_antialias,HX_HCSTRING("cffi_lime_cairo_font_options_get_antialias","\x9c","\x1e","\xbf","\xc8")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_font_options_get_hint_metrics,HX_HCSTRING("cffi_lime_cairo_font_options_get_hint_metrics","\x1d","\x79","\xb0","\x18")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_font_options_get_hint_style,HX_HCSTRING("cffi_lime_cairo_font_options_get_hint_style","\x8b","\x31","\x7a","\xb6")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_font_options_get_subpixel_order,HX_HCSTRING("cffi_lime_cairo_font_options_get_subpixel_order","\xa7","\xa6","\xb7","\xb6")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_font_options_set_antialias,HX_HCSTRING("cffi_lime_cairo_font_options_set_antialias","\xa8","\x00","\xc5","\x0d")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_font_options_set_hint_metrics,HX_HCSTRING("cffi_lime_cairo_font_options_set_hint_metrics","\x91","\x66","\xf2","\x6e")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_font_options_set_hint_style,HX_HCSTRING("cffi_lime_cairo_font_options_set_hint_style","\xff","\x19","\x9a","\xd6")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_font_options_set_subpixel_order,HX_HCSTRING("cffi_lime_cairo_font_options_set_subpixel_order","\x1b","\xd9","\x66","\x93")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_ft_font_face_create,HX_HCSTRING("cffi_lime_cairo_ft_font_face_create","\x97","\x02","\x73","\x99")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_image_surface_create,HX_HCSTRING("cffi_lime_cairo_image_surface_create","\x5a","\xb9","\x1e","\xbf")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( Float ,int ,int ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_image_surface_create_for_data,HX_HCSTRING("cffi_lime_cairo_image_surface_create_for_data","\x25","\xcd","\x91","\x7b")},
	{hx::fsObject /*::cpp::Function< Float ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_image_surface_get_data,HX_HCSTRING("cffi_lime_cairo_image_surface_get_data","\x91","\x37","\x6d","\x65")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_image_surface_get_format,HX_HCSTRING("cffi_lime_cairo_image_surface_get_format","\x5e","\xd8","\xe0","\x5f")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_image_surface_get_height,HX_HCSTRING("cffi_lime_cairo_image_surface_get_height","\x0e","\x51","\x9e","\x64")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_image_surface_get_stride,HX_HCSTRING("cffi_lime_cairo_image_surface_get_stride","\x40","\x69","\x82","\x73")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_image_surface_get_width,HX_HCSTRING("cffi_lime_cairo_image_surface_get_width","\xbf","\x0e","\xfe","\x4f")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_pattern_add_color_stop_rgb,HX_HCSTRING("cffi_lime_cairo_pattern_add_color_stop_rgb","\xc1","\xeb","\x6e","\x90")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_pattern_add_color_stop_rgba,HX_HCSTRING("cffi_lime_cairo_pattern_add_color_stop_rgba","\x80","\x5d","\x9f","\xd0")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_pattern_create_for_surface,HX_HCSTRING("cffi_lime_cairo_pattern_create_for_surface","\x2b","\xe4","\x30","\x7c")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( Float ,Float ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_pattern_create_linear,HX_HCSTRING("cffi_lime_cairo_pattern_create_linear","\xf1","\xf9","\x21","\xfd")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( Float ,Float ,Float ,Float ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_pattern_create_radial,HX_HCSTRING("cffi_lime_cairo_pattern_create_radial","\xeb","\x66","\x78","\xc1")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( Float ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_pattern_create_rgb,HX_HCSTRING("cffi_lime_cairo_pattern_create_rgb","\x81","\xf3","\xe0","\x6b")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( Float ,Float ,Float ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_pattern_create_rgba,HX_HCSTRING("cffi_lime_cairo_pattern_create_rgba","\xc0","\x1d","\xf4","\xf8")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_pattern_get_color_stop_count,HX_HCSTRING("cffi_lime_cairo_pattern_get_color_stop_count","\x6e","\xc8","\xcf","\xae")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_pattern_get_extend,HX_HCSTRING("cffi_lime_cairo_pattern_get_extend","\x1a","\x80","\xac","\xbc")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_pattern_get_filter,HX_HCSTRING("cffi_lime_cairo_pattern_get_filter","\xf8","\xcd","\xc6","\x7a")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_pattern_get_matrix,HX_HCSTRING("cffi_lime_cairo_pattern_get_matrix","\x81","\xe4","\x59","\xb1")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_pattern_set_extend,HX_HCSTRING("cffi_lime_cairo_pattern_set_extend","\x8e","\x1e","\x2a","\xc0")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_pattern_set_filter,HX_HCSTRING("cffi_lime_cairo_pattern_set_filter","\x6c","\x6c","\x44","\x7e")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_pattern_set_matrix,HX_HCSTRING("cffi_lime_cairo_pattern_set_matrix","\xf5","\x82","\xd7","\xb4")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_cairo_surface_flush,HX_HCSTRING("cffi_lime_cairo_surface_flush","\x4a","\xdb","\xf2","\xdb")},
	{hx::fsObject /*::cpp::Function< Float ( ::String ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_curl_getdate,HX_HCSTRING("cffi_lime_curl_getdate","\xc2","\x61","\x24","\x4d")},
	{hx::fsObject /*::cpp::Function< void ( ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_curl_global_cleanup,HX_HCSTRING("cffi_lime_curl_global_cleanup","\xca","\xc5","\x25","\x2f")},
	{hx::fsObject /*::cpp::Function< int ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_curl_global_init,HX_HCSTRING("cffi_lime_curl_global_init","\xaa","\x9d","\x8b","\x90")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_curl_version,HX_HCSTRING("cffi_lime_curl_version","\x16","\x6f","\x09","\xa0")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_curl_version_info,HX_HCSTRING("cffi_lime_curl_version_info","\x77","\x75","\x0a","\x01")},
	{hx::fsObject /*::cpp::Function< void ( Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_curl_easy_cleanup,HX_HCSTRING("cffi_lime_curl_easy_cleanup","\xe9","\x82","\x3a","\xc5")},
	{hx::fsObject /*::cpp::Function< Float ( Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_curl_easy_duphandle,HX_HCSTRING("cffi_lime_curl_easy_duphandle","\xac","\x16","\xd4","\x55")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( Float ,::String ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_curl_easy_escape,HX_HCSTRING("cffi_lime_curl_easy_escape","\x5c","\x8c","\x41","\x1b")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( Float ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_curl_easy_getinfo,HX_HCSTRING("cffi_lime_curl_easy_getinfo","\xc9","\x32","\x5d","\x47")},
	{hx::fsObject /*::cpp::Function< Float ( ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_curl_easy_init,HX_HCSTRING("cffi_lime_curl_easy_init","\x2b","\x07","\x83","\xab")},
	{hx::fsObject /*::cpp::Function< int ( Float ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_curl_easy_pause,HX_HCSTRING("cffi_lime_curl_easy_pause","\x7b","\xa2","\x62","\x66")},
	{hx::fsObject /*::cpp::Function< int ( Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_curl_easy_perform,HX_HCSTRING("cffi_lime_curl_easy_perform","\x66","\x5f","\xd6","\x94")},
	{hx::fsObject /*::cpp::Function< int ( Float ,::hx::Object * ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_curl_easy_recv,HX_HCSTRING("cffi_lime_curl_easy_recv","\x41","\x19","\x6f","\xb1")},
	{hx::fsObject /*::cpp::Function< void ( Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_curl_easy_reset,HX_HCSTRING("cffi_lime_curl_easy_reset","\x54","\x15","\xd3","\x8f")},
	{hx::fsObject /*::cpp::Function< int ( Float ,::hx::Object * ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_curl_easy_send,HX_HCSTRING("cffi_lime_curl_easy_send","\x63","\x59","\x18","\xb2")},
	{hx::fsObject /*::cpp::Function< int ( Float ,int ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_curl_easy_setopt,HX_HCSTRING("cffi_lime_curl_easy_setopt","\xac","\xba","\xeb","\xaf")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_curl_easy_strerror,HX_HCSTRING("cffi_lime_curl_easy_strerror","\x12","\x77","\xab","\x30")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( Float ,::String ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_curl_easy_unescape,HX_HCSTRING("cffi_lime_curl_easy_unescape","\x35","\xe8","\x90","\x7c")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_active_texture,HX_HCSTRING("cffi_lime_gl_active_texture","\x0b","\x95","\x07","\x16")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_attach_shader,HX_HCSTRING("cffi_lime_gl_attach_shader","\xd6","\x9c","\x99","\xc1")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_bind_attrib_location,HX_HCSTRING("cffi_lime_gl_bind_attrib_location","\xf1","\x16","\xec","\x0b")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_bind_buffer,HX_HCSTRING("cffi_lime_gl_bind_buffer","\xf9","\xc3","\x77","\x28")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_bind_framebuffer,HX_HCSTRING("cffi_lime_gl_bind_framebuffer","\x54","\x27","\x8c","\x5e")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_bind_renderbuffer,HX_HCSTRING("cffi_lime_gl_bind_renderbuffer","\x8f","\x54","\xa2","\xe2")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_bind_texture,HX_HCSTRING("cffi_lime_gl_bind_texture","\xc2","\xdb","\xa3","\x2d")},
	{hx::fsObject /*::cpp::Function< void ( ::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_blend_color,HX_HCSTRING("cffi_lime_gl_blend_color","\x2c","\x3d","\x6d","\x80")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_blend_equation,HX_HCSTRING("cffi_lime_gl_blend_equation","\x63","\xb3","\x98","\x81")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_blend_equation_separate,HX_HCSTRING("cffi_lime_gl_blend_equation_separate","\xff","\x5e","\xb7","\x48")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_blend_func,HX_HCSTRING("cffi_lime_gl_blend_func","\x9b","\x6b","\x44","\x5d")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_blend_func_separate,HX_HCSTRING("cffi_lime_gl_blend_func_separate","\xc7","\xdf","\x1e","\xb6")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,Float ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_buffer_data,HX_HCSTRING("cffi_lime_gl_buffer_data","\x80","\x9e","\xde","\xb9")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_buffer_sub_data,HX_HCSTRING("cffi_lime_gl_buffer_sub_data","\xdf","\x83","\x9b","\x86")},
	{hx::fsObject /*::cpp::Function< int ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_check_framebuffer_status,HX_HCSTRING("cffi_lime_gl_check_framebuffer_status","\x04","\xac","\xc0","\x18")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_clear,HX_HCSTRING("cffi_lime_gl_clear","\xc4","\x77","\x82","\x3b")},
	{hx::fsObject /*::cpp::Function< void ( ::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_clear_color,HX_HCSTRING("cffi_lime_gl_clear_color","\x68","\x5b","\xe8","\x5f")},
	{hx::fsObject /*::cpp::Function< void ( ::cpp::Float32 ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_clear_depthf,HX_HCSTRING("cffi_lime_gl_clear_depthf","\x5e","\xcc","\x69","\x32")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_clear_stencil,HX_HCSTRING("cffi_lime_gl_clear_stencil","\x41","\xf3","\xe1","\xff")},
	{hx::fsObject /*::cpp::Function< void ( bool ,bool ,bool ,bool ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_color_mask,HX_HCSTRING("cffi_lime_gl_color_mask","\xf1","\x16","\xea","\xed")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_compile_shader,HX_HCSTRING("cffi_lime_gl_compile_shader","\x9a","\x8a","\xf8","\xde")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_compressed_tex_image_2d,HX_HCSTRING("cffi_lime_gl_compressed_tex_image_2d","\xe3","\xbb","\xda","\x66")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_compressed_tex_sub_image_2d,HX_HCSTRING("cffi_lime_gl_compressed_tex_sub_image_2d","\x42","\x84","\x71","\x32")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_copy_tex_image_2d,HX_HCSTRING("cffi_lime_gl_copy_tex_image_2d","\xef","\xf8","\xce","\xb8")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_copy_tex_sub_image_2d,HX_HCSTRING("cffi_lime_gl_copy_tex_sub_image_2d","\x4e","\x37","\x97","\xe8")},
	{hx::fsObject /*::cpp::Function< int ( ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_create_buffer,HX_HCSTRING("cffi_lime_gl_create_buffer","\x5a","\x14","\x78","\x46")},
	{hx::fsObject /*::cpp::Function< int ( ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_create_framebuffer,HX_HCSTRING("cffi_lime_gl_create_framebuffer","\x53","\xd7","\x07","\xd6")},
	{hx::fsObject /*::cpp::Function< int ( ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_create_program,HX_HCSTRING("cffi_lime_gl_create_program","\xea","\x61","\x02","\xa5")},
	{hx::fsObject /*::cpp::Function< int ( ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_create_renderbuffer,HX_HCSTRING("cffi_lime_gl_create_renderbuffer","\xb0","\xa3","\x60","\xf7")},
	{hx::fsObject /*::cpp::Function< int ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_create_shader,HX_HCSTRING("cffi_lime_gl_create_shader","\x7f","\x16","\x04","\x93")},
	{hx::fsObject /*::cpp::Function< int ( ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_create_texture,HX_HCSTRING("cffi_lime_gl_create_texture","\x41","\xe0","\xe9","\x4f")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_cull_face,HX_HCSTRING("cffi_lime_gl_cull_face","\x41","\x93","\xf5","\x8c")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_delete_buffer,HX_HCSTRING("cffi_lime_gl_delete_buffer","\x0b","\xcf","\xbe","\xbc")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_delete_framebuffer,HX_HCSTRING("cffi_lime_gl_delete_framebuffer","\x02","\xbb","\x49","\x08")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_delete_program,HX_HCSTRING("cffi_lime_gl_delete_program","\x19","\x02","\x9f","\xac")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_delete_renderbuffer,HX_HCSTRING("cffi_lime_gl_delete_renderbuffer","\x21","\xf9","\xc5","\xbe")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_delete_shader,HX_HCSTRING("cffi_lime_gl_delete_shader","\x30","\xd1","\x4a","\x09")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_delete_texture,HX_HCSTRING("cffi_lime_gl_delete_texture","\x70","\x80","\x86","\x57")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_depth_func,HX_HCSTRING("cffi_lime_gl_depth_func","\xa9","\x9d","\x58","\x21")},
	{hx::fsObject /*::cpp::Function< void ( bool ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_depth_mask,HX_HCSTRING("cffi_lime_gl_depth_mask","\x51","\xf3","\xe9","\x25")},
	{hx::fsObject /*::cpp::Function< void ( ::cpp::Float32 ,::cpp::Float32 ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_depth_rangef,HX_HCSTRING("cffi_lime_gl_depth_rangef","\xae","\x35","\x42","\xe7")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_detach_shader,HX_HCSTRING("cffi_lime_gl_detach_shader","\x08","\xa9","\xa3","\xb8")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_disable,HX_HCSTRING("cffi_lime_gl_disable","\xdf","\xab","\xf6","\x00")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_disable_vertex_attrib_array,HX_HCSTRING("cffi_lime_gl_disable_vertex_attrib_array","\xff","\x24","\xd3","\x35")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_draw_arrays,HX_HCSTRING("cffi_lime_gl_draw_arrays","\x4c","\xb0","\xaa","\x5c")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_draw_elements,HX_HCSTRING("cffi_lime_gl_draw_elements","\x49","\xf6","\x28","\x75")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_enable,HX_HCSTRING("cffi_lime_gl_enable","\x6c","\x18","\x86","\xc7")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_enable_vertex_attrib_array,HX_HCSTRING("cffi_lime_gl_enable_vertex_attrib_array","\x0c","\x06","\x88","\xe8")},
	{hx::fsObject /*::cpp::Function< void ( ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_finish,HX_HCSTRING("cffi_lime_gl_finish","\x3c","\xaa","\x7d","\x55")},
	{hx::fsObject /*::cpp::Function< void ( ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_flush,HX_HCSTRING("cffi_lime_gl_flush","\xfb","\x68","\xc2","\xf5")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_framebuffer_renderbuffer,HX_HCSTRING("cffi_lime_gl_framebuffer_renderbuffer","\xd1","\x92","\x2a","\xc8")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,int ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_framebuffer_texture2D,HX_HCSTRING("cffi_lime_gl_framebuffer_texture2D","\x92","\x20","\xf3","\xa7")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_front_face,HX_HCSTRING("cffi_lime_gl_front_face","\x9c","\xc5","\xb5","\xf1")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_generate_mipmap,HX_HCSTRING("cffi_lime_gl_generate_mipmap","\x89","\xf1","\x67","\xc1")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_active_attrib,HX_HCSTRING("cffi_lime_gl_get_active_attrib","\xf1","\x23","\x6f","\x50")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_active_uniform,HX_HCSTRING("cffi_lime_gl_get_active_uniform","\xad","\x16","\x07","\x8d")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_attached_shaders,HX_HCSTRING("cffi_lime_gl_get_attached_shaders","\x45","\x63","\x80","\xff")},
	{hx::fsObject /*::cpp::Function< int ( int ,::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_attrib_location,HX_HCSTRING("cffi_lime_gl_get_attrib_location","\x98","\xec","\x30","\x2d")},
	{hx::fsObject /*::cpp::Function< bool ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_boolean,HX_HCSTRING("cffi_lime_gl_get_boolean","\x36","\x54","\x45","\xbe")},
	{hx::fsObject /*::cpp::Function< void ( int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_booleanv,HX_HCSTRING("cffi_lime_gl_get_booleanv","\x80","\x5b","\x64","\xbe")},
	{hx::fsObject /*::cpp::Function< int ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_buffer_parameteri,HX_HCSTRING("cffi_lime_gl_get_buffer_parameteri","\xcd","\x15","\x06","\x51")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_buffer_parameteriv,HX_HCSTRING("cffi_lime_gl_get_buffer_parameteriv","\x09","\xfe","\x4c","\x94")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_context_attributes,HX_HCSTRING("cffi_lime_gl_get_context_attributes","\x99","\x5d","\x08","\x68")},
	{hx::fsObject /*::cpp::Function< int ( ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_error,HX_HCSTRING("cffi_lime_gl_get_error","\xd6","\x15","\xff","\xdb")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_extension,HX_HCSTRING("cffi_lime_gl_get_extension","\x8d","\xfc","\xee","\x92")},
	{hx::fsObject /*::cpp::Function< ::cpp::Float32 ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_float,HX_HCSTRING("cffi_lime_gl_get_float","\xaa","\x0f","\x6c","\x6b")},
	{hx::fsObject /*::cpp::Function< void ( int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_floatv,HX_HCSTRING("cffi_lime_gl_get_floatv","\x8c","\xa5","\x21","\x93")},
	{hx::fsObject /*::cpp::Function< int ( int ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_framebuffer_attachment_parameteri,HX_HCSTRING("cffi_lime_gl_get_framebuffer_attachment_parameteri","\xb8","\x43","\xb2","\xeb")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_framebuffer_attachment_parameteriv,HX_HCSTRING("cffi_lime_gl_get_framebuffer_attachment_parameteriv","\xbe","\xfd","\x48","\x50")},
	{hx::fsObject /*::cpp::Function< int ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_integer,HX_HCSTRING("cffi_lime_gl_get_integer","\x4c","\x27","\x62","\x57")},
	{hx::fsObject /*::cpp::Function< void ( int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_integerv,HX_HCSTRING("cffi_lime_gl_get_integerv","\xaa","\x3b","\x80","\x1e")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_program_info_log,HX_HCSTRING("cffi_lime_gl_get_program_info_log","\x00","\xd2","\xe4","\x39")},
	{hx::fsObject /*::cpp::Function< int ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_programi,HX_HCSTRING("cffi_lime_gl_get_programi","\x17","\xdc","\x7d","\x83")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_programiv,HX_HCSTRING("cffi_lime_gl_get_programiv","\x7f","\xb8","\xa2","\x8a")},
	{hx::fsObject /*::cpp::Function< int ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_renderbuffer_parameteri,HX_HCSTRING("cffi_lime_gl_get_renderbuffer_parameteri","\x37","\x48","\xaa","\xe7")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_renderbuffer_parameteriv,HX_HCSTRING("cffi_lime_gl_get_renderbuffer_parameteriv","\x5f","\xe8","\x54","\xcd")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_shader_info_log,HX_HCSTRING("cffi_lime_gl_get_shader_info_log","\x1b","\xf4","\xd0","\x21")},
	{hx::fsObject /*::cpp::Function< int ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_shaderi,HX_HCSTRING("cffi_lime_gl_get_shaderi","\x32","\xeb","\xcc","\x9f")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_shaderiv,HX_HCSTRING("cffi_lime_gl_get_shaderiv","\x04","\xe1","\x80","\x33")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_shader_precision_format,HX_HCSTRING("cffi_lime_gl_get_shader_precision_format","\x80","\xca","\xf5","\xb4")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_shader_source,HX_HCSTRING("cffi_lime_gl_get_shader_source","\x03","\x6a","\x5b","\x66")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_string,HX_HCSTRING("cffi_lime_gl_get_string","\x03","\xab","\xfb","\x62")},
	{hx::fsObject /*::cpp::Function< ::cpp::Float32 ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_tex_parameterf,HX_HCSTRING("cffi_lime_gl_get_tex_parameterf","\x67","\x3d","\x83","\x10")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_tex_parameterfv,HX_HCSTRING("cffi_lime_gl_get_tex_parameterfv","\x2f","\x7d","\x52","\x62")},
	{hx::fsObject /*::cpp::Function< int ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_tex_parameteri,HX_HCSTRING("cffi_lime_gl_get_tex_parameteri","\x6a","\x3d","\x83","\x10")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_tex_parameteriv,HX_HCSTRING("cffi_lime_gl_get_tex_parameteriv","\xcc","\x7f","\x52","\x62")},
	{hx::fsObject /*::cpp::Function< ::cpp::Float32 ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_uniformf,HX_HCSTRING("cffi_lime_gl_get_uniformf","\x64","\xbf","\xaa","\xff")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_uniformfv,HX_HCSTRING("cffi_lime_gl_get_uniformfv","\x92","\xb8","\xbc","\xb5")},
	{hx::fsObject /*::cpp::Function< int ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_uniformi,HX_HCSTRING("cffi_lime_gl_get_uniformi","\x67","\xbf","\xaa","\xff")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_uniformiv,HX_HCSTRING("cffi_lime_gl_get_uniformiv","\x2f","\xbb","\xbc","\xb5")},
	{hx::fsObject /*::cpp::Function< int ( int ,::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_uniform_location,HX_HCSTRING("cffi_lime_gl_get_uniform_location","\x92","\x52","\xfb","\x5d")},
	{hx::fsObject /*::cpp::Function< int ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_vertex_attribi,HX_HCSTRING("cffi_lime_gl_get_vertex_attribi","\xf6","\xb6","\x91","\x7d")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_vertex_attribiv,HX_HCSTRING("cffi_lime_gl_get_vertex_attribiv","\xc0","\x60","\xee","\x61")},
	{hx::fsObject /*::cpp::Function< Float ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_get_vertex_attrib_pointerv,HX_HCSTRING("cffi_lime_gl_get_vertex_attrib_pointerv","\x05","\x68","\x2b","\xba")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_hint,HX_HCSTRING("cffi_lime_gl_hint","\x30","\x2b","\xb7","\xe5")},
	{hx::fsObject /*::cpp::Function< bool ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_is_buffer,HX_HCSTRING("cffi_lime_gl_is_buffer","\xac","\x11","\xe5","\x9a")},
	{hx::fsObject /*::cpp::Function< bool ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_is_enabled,HX_HCSTRING("cffi_lime_gl_is_enabled","\x55","\xc6","\x2a","\xba")},
	{hx::fsObject /*::cpp::Function< bool ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_is_framebuffer,HX_HCSTRING("cffi_lime_gl_is_framebuffer","\xc1","\x50","\xa9","\x0d")},
	{hx::fsObject /*::cpp::Function< bool ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_is_program,HX_HCSTRING("cffi_lime_gl_is_program","\x58","\x0c","\xf3","\x2f")},
	{hx::fsObject /*::cpp::Function< bool ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_is_renderbuffer,HX_HCSTRING("cffi_lime_gl_is_renderbuffer","\x82","\x6a","\x09","\x6d")},
	{hx::fsObject /*::cpp::Function< bool ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_is_shader,HX_HCSTRING("cffi_lime_gl_is_shader","\xd1","\x13","\x71","\xe7")},
	{hx::fsObject /*::cpp::Function< bool ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_is_texture,HX_HCSTRING("cffi_lime_gl_is_texture","\xaf","\x8a","\xda","\xda")},
	{hx::fsObject /*::cpp::Function< void ( ::cpp::Float32 ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_line_width,HX_HCSTRING("cffi_lime_gl_line_width","\xa4","\x96","\xa1","\xc7")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_link_program,HX_HCSTRING("cffi_lime_gl_link_program","\xa8","\x84","\xd0","\xd8")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_object_deregister,HX_HCSTRING("cffi_lime_gl_object_deregister","\x5b","\xbc","\x59","\x55")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_object_from_id,HX_HCSTRING("cffi_lime_gl_object_from_id","\xf9","\xb4","\x96","\xb0")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_object_register,HX_HCSTRING("cffi_lime_gl_object_register","\x1a","\x60","\xd9","\xf1")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_pixel_storei,HX_HCSTRING("cffi_lime_gl_pixel_storei","\xea","\x57","\x57","\xe2")},
	{hx::fsObject /*::cpp::Function< void ( ::cpp::Float32 ,::cpp::Float32 ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_polygon_offset,HX_HCSTRING("cffi_lime_gl_polygon_offset","\xe1","\x44","\xfc","\x45")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,int ,int ,int ,int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_read_pixels,HX_HCSTRING("cffi_lime_gl_read_pixels","\xad","\x75","\x07","\x3b")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_renderbuffer_storage,HX_HCSTRING("cffi_lime_gl_renderbuffer_storage","\x3b","\xdb","\xb9","\x6d")},
	{hx::fsObject /*::cpp::Function< void ( ::cpp::Float32 ,bool ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_sample_coverage,HX_HCSTRING("cffi_lime_gl_sample_coverage","\xd4","\xe4","\xf4","\x61")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_scissor,HX_HCSTRING("cffi_lime_gl_scissor","\x13","\x6a","\x85","\x54")},
	{hx::fsObject /*::cpp::Function< void ( int ,::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_shader_source,HX_HCSTRING("cffi_lime_gl_shader_source","\x2c","\xf7","\x72","\x3b")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_stencil_func,HX_HCSTRING("cffi_lime_gl_stencil_func","\x50","\x56","\x50","\x09")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_stencil_func_separate,HX_HCSTRING("cffi_lime_gl_stencil_func_separate","\x72","\x76","\xec","\xb6")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_stencil_mask,HX_HCSTRING("cffi_lime_gl_stencil_mask","\xf8","\xab","\xe1","\x0d")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_stencil_mask_separate,HX_HCSTRING("cffi_lime_gl_stencil_mask_separate","\xca","\x2b","\xe7","\x02")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_stencil_op,HX_HCSTRING("cffi_lime_gl_stencil_op","\x2d","\xb1","\x4e","\x19")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_stencil_op_separate,HX_HCSTRING("cffi_lime_gl_stencil_op_separate","\xf5","\x57","\x9c","\xe5")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_tex_image_2d,HX_HCSTRING("cffi_lime_gl_tex_image_2d","\xd7","\x50","\x7b","\xd9")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,::cpp::Float32 ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_tex_parameterf,HX_HCSTRING("cffi_lime_gl_tex_parameterf","\x1e","\x34","\x07","\xb0")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_tex_parameteri,HX_HCSTRING("cffi_lime_gl_tex_parameteri","\x21","\x34","\x07","\xb0")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_tex_sub_image_2d,HX_HCSTRING("cffi_lime_gl_tex_sub_image_2d","\x36","\xa3","\xb1","\x40")},
	{hx::fsObject /*::cpp::Function< void ( int ,::cpp::Float32 ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_uniform1f,HX_HCSTRING("cffi_lime_gl_uniform1f","\x00","\x0f","\x0a","\x2d")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_uniform1fv,HX_HCSTRING("cffi_lime_gl_uniform1fv","\x76","\x11","\xc3","\x3b")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_uniform1i,HX_HCSTRING("cffi_lime_gl_uniform1i","\x03","\x0f","\x0a","\x2d")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_uniform1iv,HX_HCSTRING("cffi_lime_gl_uniform1iv","\x13","\x14","\xc3","\x3b")},
	{hx::fsObject /*::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_uniform2f,HX_HCSTRING("cffi_lime_gl_uniform2f","\xdf","\x0f","\x0a","\x2d")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_uniform2fv,HX_HCSTRING("cffi_lime_gl_uniform2fv","\xb7","\xd3","\xc3","\x3b")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_uniform2i,HX_HCSTRING("cffi_lime_gl_uniform2i","\xe2","\x0f","\x0a","\x2d")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_uniform2iv,HX_HCSTRING("cffi_lime_gl_uniform2iv","\x54","\xd6","\xc3","\x3b")},
	{hx::fsObject /*::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_uniform3f,HX_HCSTRING("cffi_lime_gl_uniform3f","\xbe","\x10","\x0a","\x2d")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_uniform3fv,HX_HCSTRING("cffi_lime_gl_uniform3fv","\xf8","\x95","\xc4","\x3b")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_uniform3i,HX_HCSTRING("cffi_lime_gl_uniform3i","\xc1","\x10","\x0a","\x2d")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_uniform3iv,HX_HCSTRING("cffi_lime_gl_uniform3iv","\x95","\x98","\xc4","\x3b")},
	{hx::fsObject /*::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_uniform4f,HX_HCSTRING("cffi_lime_gl_uniform4f","\x9d","\x11","\x0a","\x2d")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_uniform4fv,HX_HCSTRING("cffi_lime_gl_uniform4fv","\x39","\x58","\xc5","\x3b")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,int ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_uniform4i,HX_HCSTRING("cffi_lime_gl_uniform4i","\xa0","\x11","\x0a","\x2d")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_uniform4iv,HX_HCSTRING("cffi_lime_gl_uniform4iv","\xd6","\x5a","\xc5","\x3b")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,bool ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_uniform_matrix2fv,HX_HCSTRING("cffi_lime_gl_uniform_matrix2fv","\x0d","\x75","\x3d","\x9b")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,bool ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_uniform_matrix3fv,HX_HCSTRING("cffi_lime_gl_uniform_matrix3fv","\x4e","\x37","\x3e","\x9b")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,bool ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_uniform_matrix4fv,HX_HCSTRING("cffi_lime_gl_uniform_matrix4fv","\x8f","\xf9","\x3e","\x9b")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_use_program,HX_HCSTRING("cffi_lime_gl_use_program","\xc3","\xf8","\x56","\x68")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_validate_program,HX_HCSTRING("cffi_lime_gl_validate_program","\xc4","\x41","\x44","\x49")},
	{hx::fsObject /*::cpp::Function< void ( int ,::cpp::Float32 ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_vertex_attrib1f,HX_HCSTRING("cffi_lime_gl_vertex_attrib1f","\x51","\x19","\xe2","\x55")},
	{hx::fsObject /*::cpp::Function< void ( int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_vertex_attrib1fv,HX_HCSTRING("cffi_lime_gl_vertex_attrib1fv","\x05","\x0e","\xf4","\xcf")},
	{hx::fsObject /*::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_vertex_attrib2f,HX_HCSTRING("cffi_lime_gl_vertex_attrib2f","\x30","\x1a","\xe2","\x55")},
	{hx::fsObject /*::cpp::Function< void ( int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_vertex_attrib2fv,HX_HCSTRING("cffi_lime_gl_vertex_attrib2fv","\x46","\xd0","\xf4","\xcf")},
	{hx::fsObject /*::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_vertex_attrib3f,HX_HCSTRING("cffi_lime_gl_vertex_attrib3f","\x0f","\x1b","\xe2","\x55")},
	{hx::fsObject /*::cpp::Function< void ( int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_vertex_attrib3fv,HX_HCSTRING("cffi_lime_gl_vertex_attrib3fv","\x87","\x92","\xf5","\xcf")},
	{hx::fsObject /*::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_vertex_attrib4f,HX_HCSTRING("cffi_lime_gl_vertex_attrib4f","\xee","\x1b","\xe2","\x55")},
	{hx::fsObject /*::cpp::Function< void ( int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_vertex_attrib4fv,HX_HCSTRING("cffi_lime_gl_vertex_attrib4fv","\xc8","\x54","\xf6","\xcf")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,int ,bool ,int ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_vertex_attrib_pointer,HX_HCSTRING("cffi_lime_gl_vertex_attrib_pointer","\x7a","\x5d","\xea","\xb2")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,int ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_gl_viewport,HX_HCSTRING("cffi_lime_gl_viewport","\x8f","\xc2","\x80","\xf7")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_bitrate,HX_HCSTRING("cffi_lime_vorbis_file_bitrate","\x65","\x1e","\x94","\xc6")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_bitrate_instant,HX_HCSTRING("cffi_lime_vorbis_file_bitrate_instant","\xc7","\xbb","\x73","\xc5")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_clear,HX_HCSTRING("cffi_lime_vorbis_file_clear","\xc5","\x9b","\x56","\x7d")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_comment,HX_HCSTRING("cffi_lime_vorbis_file_comment","\x97","\xa2","\x34","\x4b")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_crosslap,HX_HCSTRING("cffi_lime_vorbis_file_crosslap","\xa3","\xa1","\xf7","\x49")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_from_bytes,HX_HCSTRING("cffi_lime_vorbis_file_from_bytes","\x5e","\xab","\x77","\x06")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::String ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_from_file,HX_HCSTRING("cffi_lime_vorbis_file_from_file","\xe9","\x0a","\x71","\xf9")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_info,HX_HCSTRING("cffi_lime_vorbis_file_info","\x36","\x3d","\xa4","\x1c")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_pcm_seek,HX_HCSTRING("cffi_lime_vorbis_file_pcm_seek","\xc5","\xd8","\x05","\x71")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_pcm_seek_lap,HX_HCSTRING("cffi_lime_vorbis_file_pcm_seek_lap","\xa1","\xac","\xdf","\x11")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_pcm_seek_page,HX_HCSTRING("cffi_lime_vorbis_file_pcm_seek_page","\x49","\x33","\x7c","\x94")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_pcm_seek_page_lap,HX_HCSTRING("cffi_lime_vorbis_file_pcm_seek_page_lap","\x25","\x99","\x6f","\x39")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_raw_seek,HX_HCSTRING("cffi_lime_vorbis_file_raw_seek","\x37","\x6b","\xd1","\x8f")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_raw_seek_lap,HX_HCSTRING("cffi_lime_vorbis_file_raw_seek_lap","\x13","\x60","\x8a","\x16")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_pcm_tell,HX_HCSTRING("cffi_lime_vorbis_file_pcm_tell","\x7e","\x15","\xaf","\x71")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_pcm_total,HX_HCSTRING("cffi_lime_vorbis_file_pcm_total","\xd7","\xe3","\x25","\x0e")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_raw_tell,HX_HCSTRING("cffi_lime_vorbis_file_raw_tell","\xf0","\xa7","\x7a","\x90")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_raw_total,HX_HCSTRING("cffi_lime_vorbis_file_raw_total","\x25","\x75","\x7a","\xe1")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,int ,int ,bool ,int ,bool ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_read,HX_HCSTRING("cffi_lime_vorbis_file_read","\x1e","\x50","\x90","\x22")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_read_float,HX_HCSTRING("cffi_lime_vorbis_file_read_float","\x7b","\x47","\xae","\x01")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_seekable,HX_HCSTRING("cffi_lime_vorbis_file_seekable","\xda","\x17","\xd4","\x19")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_serial_number,HX_HCSTRING("cffi_lime_vorbis_file_serial_number","\x2c","\x37","\x4c","\x8e")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_streams,HX_HCSTRING("cffi_lime_vorbis_file_streams","\x2b","\x04","\x09","\xc0")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_time_seek,HX_HCSTRING("cffi_lime_vorbis_file_time_seek","\x62","\xac","\x6d","\x02")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_time_seek_lap,HX_HCSTRING("cffi_lime_vorbis_file_time_seek_lap","\xbe","\x12","\x16","\xd5")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_time_seek_page,HX_HCSTRING("cffi_lime_vorbis_file_time_seek_page","\x8c","\x26","\xdf","\xa0")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ,Float ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_time_seek_page_lap,HX_HCSTRING("cffi_lime_vorbis_file_time_seek_page_lap","\xe8","\xe9","\xa0","\x11")},
	{hx::fsObject /*::cpp::Function< Float ( ::hx::Object * ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_time_tell,HX_HCSTRING("cffi_lime_vorbis_file_time_tell","\x1b","\xe9","\x16","\x03")},
	{hx::fsObject /*::cpp::Function< Float ( ::hx::Object * ,int ) >*/ ,(void *) &NativeCFFI_obj::cffi_lime_vorbis_file_time_total,HX_HCSTRING("cffi_lime_vorbis_file_time_total","\x9a","\x39","\x97","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_application_create,"cffi_lime_application_create");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_application_event_manager_register,"cffi_lime_application_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_application_exec,"cffi_lime_application_exec");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_application_init,"cffi_lime_application_init");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_application_quit,"cffi_lime_application_quit");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_application_set_frame_rate,"cffi_lime_application_set_frame_rate");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_application_update,"cffi_lime_application_update");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_audio_load,"cffi_lime_audio_load");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_bytes_from_data_pointer,"cffi_lime_bytes_from_data_pointer");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_bytes_get_data_pointer,"cffi_lime_bytes_get_data_pointer");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_bytes_get_data_pointer_offset,"cffi_lime_bytes_get_data_pointer_offset");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_bytes_read_file,"cffi_lime_bytes_read_file");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cffi_get_native_pointer,"cffi_lime_cffi_get_native_pointer");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_clipboard_get_text,"cffi_lime_clipboard_get_text");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_clipboard_set_text,"cffi_lime_clipboard_set_text");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_data_pointer_offset,"cffi_lime_data_pointer_offset");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_deflate_compress,"cffi_lime_deflate_compress");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_deflate_decompress,"cffi_lime_deflate_decompress");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_drop_event_manager_register,"cffi_lime_drop_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_file_dialog_open_directory,"cffi_lime_file_dialog_open_directory");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_file_dialog_open_file,"cffi_lime_file_dialog_open_file");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_file_dialog_open_files,"cffi_lime_file_dialog_open_files");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_file_dialog_save_file,"cffi_lime_file_dialog_save_file");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_get_ascender,"cffi_lime_font_get_ascender");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_get_descender,"cffi_lime_font_get_descender");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_get_family_name,"cffi_lime_font_get_family_name");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_get_glyph_index,"cffi_lime_font_get_glyph_index");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_get_glyph_indices,"cffi_lime_font_get_glyph_indices");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_get_glyph_metrics,"cffi_lime_font_get_glyph_metrics");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_get_height,"cffi_lime_font_get_height");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_get_num_glyphs,"cffi_lime_font_get_num_glyphs");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_get_underline_position,"cffi_lime_font_get_underline_position");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_get_underline_thickness,"cffi_lime_font_get_underline_thickness");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_get_units_per_em,"cffi_lime_font_get_units_per_em");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_load,"cffi_lime_font_load");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_outline_decompose,"cffi_lime_font_outline_decompose");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_render_glyph,"cffi_lime_font_render_glyph");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_render_glyphs,"cffi_lime_font_render_glyphs");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_set_size,"cffi_lime_font_set_size");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gamepad_add_mappings,"cffi_lime_gamepad_add_mappings");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gamepad_get_device_guid,"cffi_lime_gamepad_get_device_guid");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gamepad_get_device_name,"cffi_lime_gamepad_get_device_name");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gamepad_event_manager_register,"cffi_lime_gamepad_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gzip_compress,"cffi_lime_gzip_compress");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gzip_decompress,"cffi_lime_gzip_decompress");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_haptic_vibrate,"cffi_lime_haptic_vibrate");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_encode,"cffi_lime_image_encode");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_load,"cffi_lime_image_load");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_data_util_color_transform,"cffi_lime_image_data_util_color_transform");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_data_util_copy_channel,"cffi_lime_image_data_util_copy_channel");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_data_util_copy_pixels,"cffi_lime_image_data_util_copy_pixels");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_data_util_fill_rect,"cffi_lime_image_data_util_fill_rect");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_data_util_flood_fill,"cffi_lime_image_data_util_flood_fill");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_data_util_get_pixels,"cffi_lime_image_data_util_get_pixels");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_data_util_merge,"cffi_lime_image_data_util_merge");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_data_util_multiply_alpha,"cffi_lime_image_data_util_multiply_alpha");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_data_util_resize,"cffi_lime_image_data_util_resize");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_data_util_set_format,"cffi_lime_image_data_util_set_format");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_data_util_set_pixels,"cffi_lime_image_data_util_set_pixels");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_data_util_threshold,"cffi_lime_image_data_util_threshold");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_data_util_unmultiply_alpha,"cffi_lime_image_data_util_unmultiply_alpha");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_joystick_get_device_guid,"cffi_lime_joystick_get_device_guid");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_joystick_get_device_name,"cffi_lime_joystick_get_device_name");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_joystick_get_num_axes,"cffi_lime_joystick_get_num_axes");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_joystick_get_num_buttons,"cffi_lime_joystick_get_num_buttons");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_joystick_get_num_hats,"cffi_lime_joystick_get_num_hats");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_joystick_get_num_trackballs,"cffi_lime_joystick_get_num_trackballs");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_joystick_event_manager_register,"cffi_lime_joystick_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_jpeg_decode_bytes,"cffi_lime_jpeg_decode_bytes");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_jpeg_decode_file,"cffi_lime_jpeg_decode_file");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_key_code_from_scan_code,"cffi_lime_key_code_from_scan_code");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_key_code_to_scan_code,"cffi_lime_key_code_to_scan_code");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_key_event_manager_register,"cffi_lime_key_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_lzma_compress,"cffi_lime_lzma_compress");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_lzma_decompress,"cffi_lime_lzma_decompress");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_mouse_hide,"cffi_lime_mouse_hide");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_mouse_set_cursor,"cffi_lime_mouse_set_cursor");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_mouse_set_lock,"cffi_lime_mouse_set_lock");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_mouse_show,"cffi_lime_mouse_show");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_mouse_warp,"cffi_lime_mouse_warp");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_mouse_event_manager_register,"cffi_lime_mouse_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_neko_execute,"cffi_lime_neko_execute");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_png_decode_bytes,"cffi_lime_png_decode_bytes");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_png_decode_file,"cffi_lime_png_decode_file");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_renderer_create,"cffi_lime_renderer_create");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_renderer_flip,"cffi_lime_renderer_flip");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_renderer_get_context,"cffi_lime_renderer_get_context");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_renderer_get_scale,"cffi_lime_renderer_get_scale");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_renderer_get_type,"cffi_lime_renderer_get_type");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_renderer_lock,"cffi_lime_renderer_lock");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_renderer_make_current,"cffi_lime_renderer_make_current");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_renderer_read_pixels,"cffi_lime_renderer_read_pixels");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_renderer_unlock,"cffi_lime_renderer_unlock");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_render_event_manager_register,"cffi_lime_render_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_sensor_event_manager_register,"cffi_lime_sensor_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_system_get_allow_screen_timeout,"cffi_lime_system_get_allow_screen_timeout");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_system_set_allow_screen_timeout,"cffi_lime_system_set_allow_screen_timeout");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_system_get_directory,"cffi_lime_system_get_directory");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_system_get_display,"cffi_lime_system_get_display");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_system_get_ios_tablet,"cffi_lime_system_get_ios_tablet");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_system_get_num_displays,"cffi_lime_system_get_num_displays");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_system_get_timer,"cffi_lime_system_get_timer");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_system_open_file,"cffi_lime_system_open_file");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_system_open_url,"cffi_lime_system_open_url");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_text_event_manager_register,"cffi_lime_text_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_text_layout_create,"cffi_lime_text_layout_create");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_text_layout_position,"cffi_lime_text_layout_position");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_text_layout_set_direction,"cffi_lime_text_layout_set_direction");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_text_layout_set_language,"cffi_lime_text_layout_set_language");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_text_layout_set_script,"cffi_lime_text_layout_set_script");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_touch_event_manager_register,"cffi_lime_touch_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_alert,"cffi_lime_window_alert");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_close,"cffi_lime_window_close");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_create,"cffi_lime_window_create");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_focus,"cffi_lime_window_focus");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_get_display,"cffi_lime_window_get_display");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_get_display_mode,"cffi_lime_window_get_display_mode");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_get_enable_text_events,"cffi_lime_window_get_enable_text_events");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_get_height,"cffi_lime_window_get_height");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_get_id,"cffi_lime_window_get_id");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_get_width,"cffi_lime_window_get_width");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_get_x,"cffi_lime_window_get_x");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_get_y,"cffi_lime_window_get_y");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_move,"cffi_lime_window_move");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_resize,"cffi_lime_window_resize");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_set_borderless,"cffi_lime_window_set_borderless");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_set_display_mode,"cffi_lime_window_set_display_mode");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_set_enable_text_events,"cffi_lime_window_set_enable_text_events");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_set_fullscreen,"cffi_lime_window_set_fullscreen");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_set_icon,"cffi_lime_window_set_icon");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_set_maximized,"cffi_lime_window_set_maximized");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_set_minimized,"cffi_lime_window_set_minimized");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_set_resizable,"cffi_lime_window_set_resizable");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_set_title,"cffi_lime_window_set_title");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_event_manager_register,"cffi_lime_window_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_zlib_compress,"cffi_lime_zlib_compress");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_zlib_decompress,"cffi_lime_zlib_decompress");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_buffer_data,"cffi_lime_al_buffer_data");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_buffer3f,"cffi_lime_al_buffer3f");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_buffer3i,"cffi_lime_al_buffer3i");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_bufferf,"cffi_lime_al_bufferf");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_bufferfv,"cffi_lime_al_bufferfv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_bufferi,"cffi_lime_al_bufferi");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_bufferiv,"cffi_lime_al_bufferiv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_delete_buffer,"cffi_lime_al_delete_buffer");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_delete_buffers,"cffi_lime_al_delete_buffers");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_delete_source,"cffi_lime_al_delete_source");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_delete_sources,"cffi_lime_al_delete_sources");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_disable,"cffi_lime_al_disable");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_distance_model,"cffi_lime_al_distance_model");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_doppler_factor,"cffi_lime_al_doppler_factor");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_doppler_velocity,"cffi_lime_al_doppler_velocity");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_enable,"cffi_lime_al_enable");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_gen_source,"cffi_lime_al_gen_source");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_gen_sources,"cffi_lime_al_gen_sources");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_boolean,"cffi_lime_al_get_boolean");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_booleanv,"cffi_lime_al_get_booleanv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_gen_buffer,"cffi_lime_al_gen_buffer");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_gen_buffers,"cffi_lime_al_gen_buffers");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_buffer3f,"cffi_lime_al_get_buffer3f");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_buffer3i,"cffi_lime_al_get_buffer3i");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_bufferf,"cffi_lime_al_get_bufferf");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_bufferfv,"cffi_lime_al_get_bufferfv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_bufferi,"cffi_lime_al_get_bufferi");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_bufferiv,"cffi_lime_al_get_bufferiv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_double,"cffi_lime_al_get_double");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_doublev,"cffi_lime_al_get_doublev");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_enum_value,"cffi_lime_al_get_enum_value");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_error,"cffi_lime_al_get_error");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_float,"cffi_lime_al_get_float");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_floatv,"cffi_lime_al_get_floatv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_integer,"cffi_lime_al_get_integer");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_integerv,"cffi_lime_al_get_integerv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_listener3f,"cffi_lime_al_get_listener3f");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_listener3i,"cffi_lime_al_get_listener3i");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_listenerf,"cffi_lime_al_get_listenerf");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_listenerfv,"cffi_lime_al_get_listenerfv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_listeneri,"cffi_lime_al_get_listeneri");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_listeneriv,"cffi_lime_al_get_listeneriv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_proc_address,"cffi_lime_al_get_proc_address");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_source3f,"cffi_lime_al_get_source3f");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_source3i,"cffi_lime_al_get_source3i");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_sourcef,"cffi_lime_al_get_sourcef");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_sourcefv,"cffi_lime_al_get_sourcefv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_sourcei,"cffi_lime_al_get_sourcei");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_sourceiv,"cffi_lime_al_get_sourceiv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_string,"cffi_lime_al_get_string");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_is_buffer,"cffi_lime_al_is_buffer");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_is_enabled,"cffi_lime_al_is_enabled");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_is_extension_present,"cffi_lime_al_is_extension_present");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_is_source,"cffi_lime_al_is_source");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_listener3f,"cffi_lime_al_listener3f");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_listener3i,"cffi_lime_al_listener3i");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_listenerf,"cffi_lime_al_listenerf");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_listenerfv,"cffi_lime_al_listenerfv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_listeneri,"cffi_lime_al_listeneri");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_listeneriv,"cffi_lime_al_listeneriv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_source_pause,"cffi_lime_al_source_pause");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_source_pausev,"cffi_lime_al_source_pausev");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_source_play,"cffi_lime_al_source_play");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_source_playv,"cffi_lime_al_source_playv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_source_queue_buffers,"cffi_lime_al_source_queue_buffers");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_source_rewind,"cffi_lime_al_source_rewind");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_source_rewindv,"cffi_lime_al_source_rewindv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_source_stop,"cffi_lime_al_source_stop");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_source_stopv,"cffi_lime_al_source_stopv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_source_unqueue_buffers,"cffi_lime_al_source_unqueue_buffers");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_source3f,"cffi_lime_al_source3f");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_source3i,"cffi_lime_al_source3i");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_sourcef,"cffi_lime_al_sourcef");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_sourcefv,"cffi_lime_al_sourcefv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_sourcei,"cffi_lime_al_sourcei");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_sourceiv,"cffi_lime_al_sourceiv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_speed_of_sound,"cffi_lime_al_speed_of_sound");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_close_device,"cffi_lime_alc_close_device");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_create_context,"cffi_lime_alc_create_context");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_destroy_context,"cffi_lime_alc_destroy_context");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_get_contexts_device,"cffi_lime_alc_get_contexts_device");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_get_current_context,"cffi_lime_alc_get_current_context");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_get_error,"cffi_lime_alc_get_error");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_get_integerv,"cffi_lime_alc_get_integerv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_get_string,"cffi_lime_alc_get_string");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_make_context_current,"cffi_lime_alc_make_context_current");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_open_device,"cffi_lime_alc_open_device");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_pause_device,"cffi_lime_alc_pause_device");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_process_context,"cffi_lime_alc_process_context");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_resume_device,"cffi_lime_alc_resume_device");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_suspend_context,"cffi_lime_alc_suspend_context");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_arc,"cffi_lime_cairo_arc");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_arc_negative,"cffi_lime_cairo_arc_negative");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_clip,"cffi_lime_cairo_clip");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_clip_preserve,"cffi_lime_cairo_clip_preserve");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_clip_extents,"cffi_lime_cairo_clip_extents");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_close_path,"cffi_lime_cairo_close_path");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_copy_page,"cffi_lime_cairo_copy_page");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_create,"cffi_lime_cairo_create");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_curve_to,"cffi_lime_cairo_curve_to");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_fill,"cffi_lime_cairo_fill");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_fill_extents,"cffi_lime_cairo_fill_extents");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_fill_preserve,"cffi_lime_cairo_fill_preserve");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_antialias,"cffi_lime_cairo_get_antialias");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_current_point,"cffi_lime_cairo_get_current_point");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_dash,"cffi_lime_cairo_get_dash");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_dash_count,"cffi_lime_cairo_get_dash_count");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_fill_rule,"cffi_lime_cairo_get_fill_rule");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_font_face,"cffi_lime_cairo_get_font_face");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_font_options,"cffi_lime_cairo_get_font_options");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_group_target,"cffi_lime_cairo_get_group_target");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_line_cap,"cffi_lime_cairo_get_line_cap");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_line_join,"cffi_lime_cairo_get_line_join");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_line_width,"cffi_lime_cairo_get_line_width");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_matrix,"cffi_lime_cairo_get_matrix");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_miter_limit,"cffi_lime_cairo_get_miter_limit");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_operator,"cffi_lime_cairo_get_operator");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_source,"cffi_lime_cairo_get_source");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_target,"cffi_lime_cairo_get_target");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_tolerance,"cffi_lime_cairo_get_tolerance");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_has_current_point,"cffi_lime_cairo_has_current_point");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_identity_matrix,"cffi_lime_cairo_identity_matrix");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_in_clip,"cffi_lime_cairo_in_clip");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_in_fill,"cffi_lime_cairo_in_fill");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_in_stroke,"cffi_lime_cairo_in_stroke");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_line_to,"cffi_lime_cairo_line_to");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_mask,"cffi_lime_cairo_mask");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_mask_surface,"cffi_lime_cairo_mask_surface");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_move_to,"cffi_lime_cairo_move_to");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_new_path,"cffi_lime_cairo_new_path");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_paint,"cffi_lime_cairo_paint");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_paint_with_alpha,"cffi_lime_cairo_paint_with_alpha");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pop_group,"cffi_lime_cairo_pop_group");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pop_group_to_source,"cffi_lime_cairo_pop_group_to_source");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_push_group,"cffi_lime_cairo_push_group");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_push_group_with_content,"cffi_lime_cairo_push_group_with_content");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_rectangle,"cffi_lime_cairo_rectangle");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_rel_curve_to,"cffi_lime_cairo_rel_curve_to");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_rel_line_to,"cffi_lime_cairo_rel_line_to");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_rel_move_to,"cffi_lime_cairo_rel_move_to");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_reset_clip,"cffi_lime_cairo_reset_clip");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_restore,"cffi_lime_cairo_restore");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_rotate,"cffi_lime_cairo_rotate");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_save,"cffi_lime_cairo_save");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_scale,"cffi_lime_cairo_scale");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_antialias,"cffi_lime_cairo_set_antialias");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_dash,"cffi_lime_cairo_set_dash");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_fill_rule,"cffi_lime_cairo_set_fill_rule");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_font_face,"cffi_lime_cairo_set_font_face");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_font_options,"cffi_lime_cairo_set_font_options");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_font_size,"cffi_lime_cairo_set_font_size");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_line_cap,"cffi_lime_cairo_set_line_cap");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_line_join,"cffi_lime_cairo_set_line_join");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_line_width,"cffi_lime_cairo_set_line_width");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_matrix,"cffi_lime_cairo_set_matrix");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_miter_limit,"cffi_lime_cairo_set_miter_limit");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_operator,"cffi_lime_cairo_set_operator");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_source,"cffi_lime_cairo_set_source");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_source_rgb,"cffi_lime_cairo_set_source_rgb");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_source_rgba,"cffi_lime_cairo_set_source_rgba");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_source_surface,"cffi_lime_cairo_set_source_surface");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_tolerance,"cffi_lime_cairo_set_tolerance");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_show_glyphs,"cffi_lime_cairo_show_glyphs");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_show_page,"cffi_lime_cairo_show_page");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_show_text,"cffi_lime_cairo_show_text");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_status,"cffi_lime_cairo_status");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_stroke,"cffi_lime_cairo_stroke");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_stroke_extents,"cffi_lime_cairo_stroke_extents");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_stroke_preserve,"cffi_lime_cairo_stroke_preserve");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_text_path,"cffi_lime_cairo_text_path");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_transform,"cffi_lime_cairo_transform");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_translate,"cffi_lime_cairo_translate");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_version,"cffi_lime_cairo_version");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_version_string,"cffi_lime_cairo_version_string");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_font_face_status,"cffi_lime_cairo_font_face_status");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_font_options_create,"cffi_lime_cairo_font_options_create");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_font_options_get_antialias,"cffi_lime_cairo_font_options_get_antialias");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_font_options_get_hint_metrics,"cffi_lime_cairo_font_options_get_hint_metrics");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_font_options_get_hint_style,"cffi_lime_cairo_font_options_get_hint_style");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_font_options_get_subpixel_order,"cffi_lime_cairo_font_options_get_subpixel_order");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_font_options_set_antialias,"cffi_lime_cairo_font_options_set_antialias");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_font_options_set_hint_metrics,"cffi_lime_cairo_font_options_set_hint_metrics");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_font_options_set_hint_style,"cffi_lime_cairo_font_options_set_hint_style");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_font_options_set_subpixel_order,"cffi_lime_cairo_font_options_set_subpixel_order");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_ft_font_face_create,"cffi_lime_cairo_ft_font_face_create");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_image_surface_create,"cffi_lime_cairo_image_surface_create");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_image_surface_create_for_data,"cffi_lime_cairo_image_surface_create_for_data");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_image_surface_get_data,"cffi_lime_cairo_image_surface_get_data");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_image_surface_get_format,"cffi_lime_cairo_image_surface_get_format");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_image_surface_get_height,"cffi_lime_cairo_image_surface_get_height");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_image_surface_get_stride,"cffi_lime_cairo_image_surface_get_stride");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_image_surface_get_width,"cffi_lime_cairo_image_surface_get_width");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_add_color_stop_rgb,"cffi_lime_cairo_pattern_add_color_stop_rgb");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_add_color_stop_rgba,"cffi_lime_cairo_pattern_add_color_stop_rgba");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_create_for_surface,"cffi_lime_cairo_pattern_create_for_surface");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_create_linear,"cffi_lime_cairo_pattern_create_linear");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_create_radial,"cffi_lime_cairo_pattern_create_radial");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_create_rgb,"cffi_lime_cairo_pattern_create_rgb");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_create_rgba,"cffi_lime_cairo_pattern_create_rgba");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_get_color_stop_count,"cffi_lime_cairo_pattern_get_color_stop_count");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_get_extend,"cffi_lime_cairo_pattern_get_extend");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_get_filter,"cffi_lime_cairo_pattern_get_filter");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_get_matrix,"cffi_lime_cairo_pattern_get_matrix");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_set_extend,"cffi_lime_cairo_pattern_set_extend");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_set_filter,"cffi_lime_cairo_pattern_set_filter");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_set_matrix,"cffi_lime_cairo_pattern_set_matrix");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_surface_flush,"cffi_lime_cairo_surface_flush");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_getdate,"cffi_lime_curl_getdate");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_global_cleanup,"cffi_lime_curl_global_cleanup");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_global_init,"cffi_lime_curl_global_init");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_version,"cffi_lime_curl_version");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_version_info,"cffi_lime_curl_version_info");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_easy_cleanup,"cffi_lime_curl_easy_cleanup");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_easy_duphandle,"cffi_lime_curl_easy_duphandle");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_easy_escape,"cffi_lime_curl_easy_escape");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_easy_getinfo,"cffi_lime_curl_easy_getinfo");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_easy_init,"cffi_lime_curl_easy_init");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_easy_pause,"cffi_lime_curl_easy_pause");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_easy_perform,"cffi_lime_curl_easy_perform");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_easy_recv,"cffi_lime_curl_easy_recv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_easy_reset,"cffi_lime_curl_easy_reset");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_easy_send,"cffi_lime_curl_easy_send");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_easy_setopt,"cffi_lime_curl_easy_setopt");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_easy_strerror,"cffi_lime_curl_easy_strerror");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_easy_unescape,"cffi_lime_curl_easy_unescape");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_active_texture,"cffi_lime_gl_active_texture");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_attach_shader,"cffi_lime_gl_attach_shader");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_bind_attrib_location,"cffi_lime_gl_bind_attrib_location");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_bind_buffer,"cffi_lime_gl_bind_buffer");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_bind_framebuffer,"cffi_lime_gl_bind_framebuffer");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_bind_renderbuffer,"cffi_lime_gl_bind_renderbuffer");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_bind_texture,"cffi_lime_gl_bind_texture");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_blend_color,"cffi_lime_gl_blend_color");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_blend_equation,"cffi_lime_gl_blend_equation");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_blend_equation_separate,"cffi_lime_gl_blend_equation_separate");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_blend_func,"cffi_lime_gl_blend_func");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_blend_func_separate,"cffi_lime_gl_blend_func_separate");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_buffer_data,"cffi_lime_gl_buffer_data");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_buffer_sub_data,"cffi_lime_gl_buffer_sub_data");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_check_framebuffer_status,"cffi_lime_gl_check_framebuffer_status");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_clear,"cffi_lime_gl_clear");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_clear_color,"cffi_lime_gl_clear_color");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_clear_depthf,"cffi_lime_gl_clear_depthf");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_clear_stencil,"cffi_lime_gl_clear_stencil");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_color_mask,"cffi_lime_gl_color_mask");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_compile_shader,"cffi_lime_gl_compile_shader");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_compressed_tex_image_2d,"cffi_lime_gl_compressed_tex_image_2d");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_compressed_tex_sub_image_2d,"cffi_lime_gl_compressed_tex_sub_image_2d");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_copy_tex_image_2d,"cffi_lime_gl_copy_tex_image_2d");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_copy_tex_sub_image_2d,"cffi_lime_gl_copy_tex_sub_image_2d");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_create_buffer,"cffi_lime_gl_create_buffer");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_create_framebuffer,"cffi_lime_gl_create_framebuffer");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_create_program,"cffi_lime_gl_create_program");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_create_renderbuffer,"cffi_lime_gl_create_renderbuffer");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_create_shader,"cffi_lime_gl_create_shader");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_create_texture,"cffi_lime_gl_create_texture");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_cull_face,"cffi_lime_gl_cull_face");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_delete_buffer,"cffi_lime_gl_delete_buffer");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_delete_framebuffer,"cffi_lime_gl_delete_framebuffer");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_delete_program,"cffi_lime_gl_delete_program");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_delete_renderbuffer,"cffi_lime_gl_delete_renderbuffer");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_delete_shader,"cffi_lime_gl_delete_shader");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_delete_texture,"cffi_lime_gl_delete_texture");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_depth_func,"cffi_lime_gl_depth_func");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_depth_mask,"cffi_lime_gl_depth_mask");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_depth_rangef,"cffi_lime_gl_depth_rangef");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_detach_shader,"cffi_lime_gl_detach_shader");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_disable,"cffi_lime_gl_disable");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_disable_vertex_attrib_array,"cffi_lime_gl_disable_vertex_attrib_array");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_draw_arrays,"cffi_lime_gl_draw_arrays");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_draw_elements,"cffi_lime_gl_draw_elements");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_enable,"cffi_lime_gl_enable");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_enable_vertex_attrib_array,"cffi_lime_gl_enable_vertex_attrib_array");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_finish,"cffi_lime_gl_finish");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_flush,"cffi_lime_gl_flush");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_framebuffer_renderbuffer,"cffi_lime_gl_framebuffer_renderbuffer");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_framebuffer_texture2D,"cffi_lime_gl_framebuffer_texture2D");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_front_face,"cffi_lime_gl_front_face");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_generate_mipmap,"cffi_lime_gl_generate_mipmap");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_active_attrib,"cffi_lime_gl_get_active_attrib");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_active_uniform,"cffi_lime_gl_get_active_uniform");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_attached_shaders,"cffi_lime_gl_get_attached_shaders");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_attrib_location,"cffi_lime_gl_get_attrib_location");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_boolean,"cffi_lime_gl_get_boolean");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_booleanv,"cffi_lime_gl_get_booleanv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_buffer_parameteri,"cffi_lime_gl_get_buffer_parameteri");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_buffer_parameteriv,"cffi_lime_gl_get_buffer_parameteriv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_context_attributes,"cffi_lime_gl_get_context_attributes");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_error,"cffi_lime_gl_get_error");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_extension,"cffi_lime_gl_get_extension");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_float,"cffi_lime_gl_get_float");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_floatv,"cffi_lime_gl_get_floatv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_framebuffer_attachment_parameteri,"cffi_lime_gl_get_framebuffer_attachment_parameteri");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_framebuffer_attachment_parameteriv,"cffi_lime_gl_get_framebuffer_attachment_parameteriv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_integer,"cffi_lime_gl_get_integer");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_integerv,"cffi_lime_gl_get_integerv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_program_info_log,"cffi_lime_gl_get_program_info_log");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_programi,"cffi_lime_gl_get_programi");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_programiv,"cffi_lime_gl_get_programiv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_renderbuffer_parameteri,"cffi_lime_gl_get_renderbuffer_parameteri");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_renderbuffer_parameteriv,"cffi_lime_gl_get_renderbuffer_parameteriv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_shader_info_log,"cffi_lime_gl_get_shader_info_log");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_shaderi,"cffi_lime_gl_get_shaderi");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_shaderiv,"cffi_lime_gl_get_shaderiv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_shader_precision_format,"cffi_lime_gl_get_shader_precision_format");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_shader_source,"cffi_lime_gl_get_shader_source");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_string,"cffi_lime_gl_get_string");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_tex_parameterf,"cffi_lime_gl_get_tex_parameterf");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_tex_parameterfv,"cffi_lime_gl_get_tex_parameterfv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_tex_parameteri,"cffi_lime_gl_get_tex_parameteri");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_tex_parameteriv,"cffi_lime_gl_get_tex_parameteriv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_uniformf,"cffi_lime_gl_get_uniformf");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_uniformfv,"cffi_lime_gl_get_uniformfv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_uniformi,"cffi_lime_gl_get_uniformi");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_uniformiv,"cffi_lime_gl_get_uniformiv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_uniform_location,"cffi_lime_gl_get_uniform_location");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_vertex_attribi,"cffi_lime_gl_get_vertex_attribi");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_vertex_attribiv,"cffi_lime_gl_get_vertex_attribiv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_vertex_attrib_pointerv,"cffi_lime_gl_get_vertex_attrib_pointerv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_hint,"cffi_lime_gl_hint");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_is_buffer,"cffi_lime_gl_is_buffer");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_is_enabled,"cffi_lime_gl_is_enabled");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_is_framebuffer,"cffi_lime_gl_is_framebuffer");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_is_program,"cffi_lime_gl_is_program");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_is_renderbuffer,"cffi_lime_gl_is_renderbuffer");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_is_shader,"cffi_lime_gl_is_shader");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_is_texture,"cffi_lime_gl_is_texture");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_line_width,"cffi_lime_gl_line_width");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_link_program,"cffi_lime_gl_link_program");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_object_deregister,"cffi_lime_gl_object_deregister");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_object_from_id,"cffi_lime_gl_object_from_id");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_object_register,"cffi_lime_gl_object_register");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_pixel_storei,"cffi_lime_gl_pixel_storei");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_polygon_offset,"cffi_lime_gl_polygon_offset");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_read_pixels,"cffi_lime_gl_read_pixels");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_renderbuffer_storage,"cffi_lime_gl_renderbuffer_storage");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_sample_coverage,"cffi_lime_gl_sample_coverage");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_scissor,"cffi_lime_gl_scissor");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_shader_source,"cffi_lime_gl_shader_source");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_stencil_func,"cffi_lime_gl_stencil_func");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_stencil_func_separate,"cffi_lime_gl_stencil_func_separate");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_stencil_mask,"cffi_lime_gl_stencil_mask");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_stencil_mask_separate,"cffi_lime_gl_stencil_mask_separate");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_stencil_op,"cffi_lime_gl_stencil_op");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_stencil_op_separate,"cffi_lime_gl_stencil_op_separate");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_tex_image_2d,"cffi_lime_gl_tex_image_2d");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_tex_parameterf,"cffi_lime_gl_tex_parameterf");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_tex_parameteri,"cffi_lime_gl_tex_parameteri");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_tex_sub_image_2d,"cffi_lime_gl_tex_sub_image_2d");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform1f,"cffi_lime_gl_uniform1f");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform1fv,"cffi_lime_gl_uniform1fv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform1i,"cffi_lime_gl_uniform1i");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform1iv,"cffi_lime_gl_uniform1iv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform2f,"cffi_lime_gl_uniform2f");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform2fv,"cffi_lime_gl_uniform2fv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform2i,"cffi_lime_gl_uniform2i");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform2iv,"cffi_lime_gl_uniform2iv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform3f,"cffi_lime_gl_uniform3f");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform3fv,"cffi_lime_gl_uniform3fv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform3i,"cffi_lime_gl_uniform3i");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform3iv,"cffi_lime_gl_uniform3iv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform4f,"cffi_lime_gl_uniform4f");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform4fv,"cffi_lime_gl_uniform4fv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform4i,"cffi_lime_gl_uniform4i");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform4iv,"cffi_lime_gl_uniform4iv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform_matrix2fv,"cffi_lime_gl_uniform_matrix2fv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform_matrix3fv,"cffi_lime_gl_uniform_matrix3fv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform_matrix4fv,"cffi_lime_gl_uniform_matrix4fv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_use_program,"cffi_lime_gl_use_program");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_validate_program,"cffi_lime_gl_validate_program");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_vertex_attrib1f,"cffi_lime_gl_vertex_attrib1f");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_vertex_attrib1fv,"cffi_lime_gl_vertex_attrib1fv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_vertex_attrib2f,"cffi_lime_gl_vertex_attrib2f");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_vertex_attrib2fv,"cffi_lime_gl_vertex_attrib2fv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_vertex_attrib3f,"cffi_lime_gl_vertex_attrib3f");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_vertex_attrib3fv,"cffi_lime_gl_vertex_attrib3fv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_vertex_attrib4f,"cffi_lime_gl_vertex_attrib4f");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_vertex_attrib4fv,"cffi_lime_gl_vertex_attrib4fv");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_vertex_attrib_pointer,"cffi_lime_gl_vertex_attrib_pointer");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_viewport,"cffi_lime_gl_viewport");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_bitrate,"cffi_lime_vorbis_file_bitrate");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_bitrate_instant,"cffi_lime_vorbis_file_bitrate_instant");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_clear,"cffi_lime_vorbis_file_clear");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_comment,"cffi_lime_vorbis_file_comment");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_crosslap,"cffi_lime_vorbis_file_crosslap");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_from_bytes,"cffi_lime_vorbis_file_from_bytes");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_from_file,"cffi_lime_vorbis_file_from_file");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_info,"cffi_lime_vorbis_file_info");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_pcm_seek,"cffi_lime_vorbis_file_pcm_seek");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_pcm_seek_lap,"cffi_lime_vorbis_file_pcm_seek_lap");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_pcm_seek_page,"cffi_lime_vorbis_file_pcm_seek_page");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_pcm_seek_page_lap,"cffi_lime_vorbis_file_pcm_seek_page_lap");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_raw_seek,"cffi_lime_vorbis_file_raw_seek");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_raw_seek_lap,"cffi_lime_vorbis_file_raw_seek_lap");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_pcm_tell,"cffi_lime_vorbis_file_pcm_tell");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_pcm_total,"cffi_lime_vorbis_file_pcm_total");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_raw_tell,"cffi_lime_vorbis_file_raw_tell");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_raw_total,"cffi_lime_vorbis_file_raw_total");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_read,"cffi_lime_vorbis_file_read");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_read_float,"cffi_lime_vorbis_file_read_float");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_seekable,"cffi_lime_vorbis_file_seekable");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_serial_number,"cffi_lime_vorbis_file_serial_number");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_streams,"cffi_lime_vorbis_file_streams");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_time_seek,"cffi_lime_vorbis_file_time_seek");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_time_seek_lap,"cffi_lime_vorbis_file_time_seek_lap");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_time_seek_page,"cffi_lime_vorbis_file_time_seek_page");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_time_seek_page_lap,"cffi_lime_vorbis_file_time_seek_page_lap");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_time_tell,"cffi_lime_vorbis_file_time_tell");
	HX_MARK_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_time_total,"cffi_lime_vorbis_file_time_total");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_application_create,"cffi_lime_application_create");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_application_event_manager_register,"cffi_lime_application_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_application_exec,"cffi_lime_application_exec");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_application_init,"cffi_lime_application_init");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_application_quit,"cffi_lime_application_quit");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_application_set_frame_rate,"cffi_lime_application_set_frame_rate");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_application_update,"cffi_lime_application_update");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_audio_load,"cffi_lime_audio_load");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_bytes_from_data_pointer,"cffi_lime_bytes_from_data_pointer");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_bytes_get_data_pointer,"cffi_lime_bytes_get_data_pointer");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_bytes_get_data_pointer_offset,"cffi_lime_bytes_get_data_pointer_offset");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_bytes_read_file,"cffi_lime_bytes_read_file");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cffi_get_native_pointer,"cffi_lime_cffi_get_native_pointer");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_clipboard_get_text,"cffi_lime_clipboard_get_text");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_clipboard_set_text,"cffi_lime_clipboard_set_text");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_data_pointer_offset,"cffi_lime_data_pointer_offset");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_deflate_compress,"cffi_lime_deflate_compress");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_deflate_decompress,"cffi_lime_deflate_decompress");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_drop_event_manager_register,"cffi_lime_drop_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_file_dialog_open_directory,"cffi_lime_file_dialog_open_directory");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_file_dialog_open_file,"cffi_lime_file_dialog_open_file");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_file_dialog_open_files,"cffi_lime_file_dialog_open_files");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_file_dialog_save_file,"cffi_lime_file_dialog_save_file");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_get_ascender,"cffi_lime_font_get_ascender");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_get_descender,"cffi_lime_font_get_descender");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_get_family_name,"cffi_lime_font_get_family_name");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_get_glyph_index,"cffi_lime_font_get_glyph_index");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_get_glyph_indices,"cffi_lime_font_get_glyph_indices");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_get_glyph_metrics,"cffi_lime_font_get_glyph_metrics");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_get_height,"cffi_lime_font_get_height");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_get_num_glyphs,"cffi_lime_font_get_num_glyphs");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_get_underline_position,"cffi_lime_font_get_underline_position");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_get_underline_thickness,"cffi_lime_font_get_underline_thickness");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_get_units_per_em,"cffi_lime_font_get_units_per_em");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_load,"cffi_lime_font_load");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_outline_decompose,"cffi_lime_font_outline_decompose");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_render_glyph,"cffi_lime_font_render_glyph");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_render_glyphs,"cffi_lime_font_render_glyphs");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_font_set_size,"cffi_lime_font_set_size");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gamepad_add_mappings,"cffi_lime_gamepad_add_mappings");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gamepad_get_device_guid,"cffi_lime_gamepad_get_device_guid");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gamepad_get_device_name,"cffi_lime_gamepad_get_device_name");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gamepad_event_manager_register,"cffi_lime_gamepad_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gzip_compress,"cffi_lime_gzip_compress");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gzip_decompress,"cffi_lime_gzip_decompress");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_haptic_vibrate,"cffi_lime_haptic_vibrate");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_encode,"cffi_lime_image_encode");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_load,"cffi_lime_image_load");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_data_util_color_transform,"cffi_lime_image_data_util_color_transform");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_data_util_copy_channel,"cffi_lime_image_data_util_copy_channel");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_data_util_copy_pixels,"cffi_lime_image_data_util_copy_pixels");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_data_util_fill_rect,"cffi_lime_image_data_util_fill_rect");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_data_util_flood_fill,"cffi_lime_image_data_util_flood_fill");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_data_util_get_pixels,"cffi_lime_image_data_util_get_pixels");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_data_util_merge,"cffi_lime_image_data_util_merge");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_data_util_multiply_alpha,"cffi_lime_image_data_util_multiply_alpha");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_data_util_resize,"cffi_lime_image_data_util_resize");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_data_util_set_format,"cffi_lime_image_data_util_set_format");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_data_util_set_pixels,"cffi_lime_image_data_util_set_pixels");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_data_util_threshold,"cffi_lime_image_data_util_threshold");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_image_data_util_unmultiply_alpha,"cffi_lime_image_data_util_unmultiply_alpha");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_joystick_get_device_guid,"cffi_lime_joystick_get_device_guid");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_joystick_get_device_name,"cffi_lime_joystick_get_device_name");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_joystick_get_num_axes,"cffi_lime_joystick_get_num_axes");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_joystick_get_num_buttons,"cffi_lime_joystick_get_num_buttons");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_joystick_get_num_hats,"cffi_lime_joystick_get_num_hats");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_joystick_get_num_trackballs,"cffi_lime_joystick_get_num_trackballs");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_joystick_event_manager_register,"cffi_lime_joystick_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_jpeg_decode_bytes,"cffi_lime_jpeg_decode_bytes");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_jpeg_decode_file,"cffi_lime_jpeg_decode_file");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_key_code_from_scan_code,"cffi_lime_key_code_from_scan_code");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_key_code_to_scan_code,"cffi_lime_key_code_to_scan_code");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_key_event_manager_register,"cffi_lime_key_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_lzma_compress,"cffi_lime_lzma_compress");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_lzma_decompress,"cffi_lime_lzma_decompress");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_mouse_hide,"cffi_lime_mouse_hide");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_mouse_set_cursor,"cffi_lime_mouse_set_cursor");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_mouse_set_lock,"cffi_lime_mouse_set_lock");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_mouse_show,"cffi_lime_mouse_show");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_mouse_warp,"cffi_lime_mouse_warp");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_mouse_event_manager_register,"cffi_lime_mouse_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_neko_execute,"cffi_lime_neko_execute");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_png_decode_bytes,"cffi_lime_png_decode_bytes");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_png_decode_file,"cffi_lime_png_decode_file");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_renderer_create,"cffi_lime_renderer_create");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_renderer_flip,"cffi_lime_renderer_flip");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_renderer_get_context,"cffi_lime_renderer_get_context");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_renderer_get_scale,"cffi_lime_renderer_get_scale");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_renderer_get_type,"cffi_lime_renderer_get_type");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_renderer_lock,"cffi_lime_renderer_lock");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_renderer_make_current,"cffi_lime_renderer_make_current");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_renderer_read_pixels,"cffi_lime_renderer_read_pixels");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_renderer_unlock,"cffi_lime_renderer_unlock");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_render_event_manager_register,"cffi_lime_render_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_sensor_event_manager_register,"cffi_lime_sensor_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_system_get_allow_screen_timeout,"cffi_lime_system_get_allow_screen_timeout");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_system_set_allow_screen_timeout,"cffi_lime_system_set_allow_screen_timeout");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_system_get_directory,"cffi_lime_system_get_directory");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_system_get_display,"cffi_lime_system_get_display");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_system_get_ios_tablet,"cffi_lime_system_get_ios_tablet");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_system_get_num_displays,"cffi_lime_system_get_num_displays");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_system_get_timer,"cffi_lime_system_get_timer");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_system_open_file,"cffi_lime_system_open_file");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_system_open_url,"cffi_lime_system_open_url");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_text_event_manager_register,"cffi_lime_text_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_text_layout_create,"cffi_lime_text_layout_create");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_text_layout_position,"cffi_lime_text_layout_position");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_text_layout_set_direction,"cffi_lime_text_layout_set_direction");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_text_layout_set_language,"cffi_lime_text_layout_set_language");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_text_layout_set_script,"cffi_lime_text_layout_set_script");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_touch_event_manager_register,"cffi_lime_touch_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_alert,"cffi_lime_window_alert");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_close,"cffi_lime_window_close");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_create,"cffi_lime_window_create");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_focus,"cffi_lime_window_focus");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_get_display,"cffi_lime_window_get_display");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_get_display_mode,"cffi_lime_window_get_display_mode");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_get_enable_text_events,"cffi_lime_window_get_enable_text_events");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_get_height,"cffi_lime_window_get_height");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_get_id,"cffi_lime_window_get_id");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_get_width,"cffi_lime_window_get_width");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_get_x,"cffi_lime_window_get_x");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_get_y,"cffi_lime_window_get_y");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_move,"cffi_lime_window_move");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_resize,"cffi_lime_window_resize");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_set_borderless,"cffi_lime_window_set_borderless");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_set_display_mode,"cffi_lime_window_set_display_mode");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_set_enable_text_events,"cffi_lime_window_set_enable_text_events");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_set_fullscreen,"cffi_lime_window_set_fullscreen");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_set_icon,"cffi_lime_window_set_icon");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_set_maximized,"cffi_lime_window_set_maximized");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_set_minimized,"cffi_lime_window_set_minimized");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_set_resizable,"cffi_lime_window_set_resizable");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_set_title,"cffi_lime_window_set_title");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_window_event_manager_register,"cffi_lime_window_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_zlib_compress,"cffi_lime_zlib_compress");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_zlib_decompress,"cffi_lime_zlib_decompress");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_buffer_data,"cffi_lime_al_buffer_data");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_buffer3f,"cffi_lime_al_buffer3f");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_buffer3i,"cffi_lime_al_buffer3i");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_bufferf,"cffi_lime_al_bufferf");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_bufferfv,"cffi_lime_al_bufferfv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_bufferi,"cffi_lime_al_bufferi");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_bufferiv,"cffi_lime_al_bufferiv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_delete_buffer,"cffi_lime_al_delete_buffer");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_delete_buffers,"cffi_lime_al_delete_buffers");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_delete_source,"cffi_lime_al_delete_source");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_delete_sources,"cffi_lime_al_delete_sources");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_disable,"cffi_lime_al_disable");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_distance_model,"cffi_lime_al_distance_model");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_doppler_factor,"cffi_lime_al_doppler_factor");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_doppler_velocity,"cffi_lime_al_doppler_velocity");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_enable,"cffi_lime_al_enable");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_gen_source,"cffi_lime_al_gen_source");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_gen_sources,"cffi_lime_al_gen_sources");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_boolean,"cffi_lime_al_get_boolean");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_booleanv,"cffi_lime_al_get_booleanv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_gen_buffer,"cffi_lime_al_gen_buffer");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_gen_buffers,"cffi_lime_al_gen_buffers");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_buffer3f,"cffi_lime_al_get_buffer3f");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_buffer3i,"cffi_lime_al_get_buffer3i");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_bufferf,"cffi_lime_al_get_bufferf");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_bufferfv,"cffi_lime_al_get_bufferfv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_bufferi,"cffi_lime_al_get_bufferi");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_bufferiv,"cffi_lime_al_get_bufferiv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_double,"cffi_lime_al_get_double");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_doublev,"cffi_lime_al_get_doublev");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_enum_value,"cffi_lime_al_get_enum_value");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_error,"cffi_lime_al_get_error");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_float,"cffi_lime_al_get_float");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_floatv,"cffi_lime_al_get_floatv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_integer,"cffi_lime_al_get_integer");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_integerv,"cffi_lime_al_get_integerv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_listener3f,"cffi_lime_al_get_listener3f");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_listener3i,"cffi_lime_al_get_listener3i");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_listenerf,"cffi_lime_al_get_listenerf");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_listenerfv,"cffi_lime_al_get_listenerfv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_listeneri,"cffi_lime_al_get_listeneri");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_listeneriv,"cffi_lime_al_get_listeneriv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_proc_address,"cffi_lime_al_get_proc_address");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_source3f,"cffi_lime_al_get_source3f");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_source3i,"cffi_lime_al_get_source3i");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_sourcef,"cffi_lime_al_get_sourcef");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_sourcefv,"cffi_lime_al_get_sourcefv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_sourcei,"cffi_lime_al_get_sourcei");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_sourceiv,"cffi_lime_al_get_sourceiv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_get_string,"cffi_lime_al_get_string");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_is_buffer,"cffi_lime_al_is_buffer");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_is_enabled,"cffi_lime_al_is_enabled");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_is_extension_present,"cffi_lime_al_is_extension_present");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_is_source,"cffi_lime_al_is_source");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_listener3f,"cffi_lime_al_listener3f");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_listener3i,"cffi_lime_al_listener3i");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_listenerf,"cffi_lime_al_listenerf");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_listenerfv,"cffi_lime_al_listenerfv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_listeneri,"cffi_lime_al_listeneri");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_listeneriv,"cffi_lime_al_listeneriv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_source_pause,"cffi_lime_al_source_pause");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_source_pausev,"cffi_lime_al_source_pausev");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_source_play,"cffi_lime_al_source_play");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_source_playv,"cffi_lime_al_source_playv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_source_queue_buffers,"cffi_lime_al_source_queue_buffers");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_source_rewind,"cffi_lime_al_source_rewind");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_source_rewindv,"cffi_lime_al_source_rewindv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_source_stop,"cffi_lime_al_source_stop");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_source_stopv,"cffi_lime_al_source_stopv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_source_unqueue_buffers,"cffi_lime_al_source_unqueue_buffers");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_source3f,"cffi_lime_al_source3f");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_source3i,"cffi_lime_al_source3i");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_sourcef,"cffi_lime_al_sourcef");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_sourcefv,"cffi_lime_al_sourcefv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_sourcei,"cffi_lime_al_sourcei");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_sourceiv,"cffi_lime_al_sourceiv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_al_speed_of_sound,"cffi_lime_al_speed_of_sound");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_close_device,"cffi_lime_alc_close_device");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_create_context,"cffi_lime_alc_create_context");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_destroy_context,"cffi_lime_alc_destroy_context");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_get_contexts_device,"cffi_lime_alc_get_contexts_device");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_get_current_context,"cffi_lime_alc_get_current_context");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_get_error,"cffi_lime_alc_get_error");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_get_integerv,"cffi_lime_alc_get_integerv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_get_string,"cffi_lime_alc_get_string");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_make_context_current,"cffi_lime_alc_make_context_current");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_open_device,"cffi_lime_alc_open_device");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_pause_device,"cffi_lime_alc_pause_device");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_process_context,"cffi_lime_alc_process_context");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_resume_device,"cffi_lime_alc_resume_device");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_alc_suspend_context,"cffi_lime_alc_suspend_context");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_arc,"cffi_lime_cairo_arc");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_arc_negative,"cffi_lime_cairo_arc_negative");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_clip,"cffi_lime_cairo_clip");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_clip_preserve,"cffi_lime_cairo_clip_preserve");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_clip_extents,"cffi_lime_cairo_clip_extents");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_close_path,"cffi_lime_cairo_close_path");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_copy_page,"cffi_lime_cairo_copy_page");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_create,"cffi_lime_cairo_create");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_curve_to,"cffi_lime_cairo_curve_to");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_fill,"cffi_lime_cairo_fill");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_fill_extents,"cffi_lime_cairo_fill_extents");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_fill_preserve,"cffi_lime_cairo_fill_preserve");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_antialias,"cffi_lime_cairo_get_antialias");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_current_point,"cffi_lime_cairo_get_current_point");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_dash,"cffi_lime_cairo_get_dash");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_dash_count,"cffi_lime_cairo_get_dash_count");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_fill_rule,"cffi_lime_cairo_get_fill_rule");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_font_face,"cffi_lime_cairo_get_font_face");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_font_options,"cffi_lime_cairo_get_font_options");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_group_target,"cffi_lime_cairo_get_group_target");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_line_cap,"cffi_lime_cairo_get_line_cap");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_line_join,"cffi_lime_cairo_get_line_join");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_line_width,"cffi_lime_cairo_get_line_width");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_matrix,"cffi_lime_cairo_get_matrix");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_miter_limit,"cffi_lime_cairo_get_miter_limit");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_operator,"cffi_lime_cairo_get_operator");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_source,"cffi_lime_cairo_get_source");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_target,"cffi_lime_cairo_get_target");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_get_tolerance,"cffi_lime_cairo_get_tolerance");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_has_current_point,"cffi_lime_cairo_has_current_point");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_identity_matrix,"cffi_lime_cairo_identity_matrix");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_in_clip,"cffi_lime_cairo_in_clip");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_in_fill,"cffi_lime_cairo_in_fill");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_in_stroke,"cffi_lime_cairo_in_stroke");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_line_to,"cffi_lime_cairo_line_to");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_mask,"cffi_lime_cairo_mask");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_mask_surface,"cffi_lime_cairo_mask_surface");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_move_to,"cffi_lime_cairo_move_to");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_new_path,"cffi_lime_cairo_new_path");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_paint,"cffi_lime_cairo_paint");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_paint_with_alpha,"cffi_lime_cairo_paint_with_alpha");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pop_group,"cffi_lime_cairo_pop_group");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pop_group_to_source,"cffi_lime_cairo_pop_group_to_source");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_push_group,"cffi_lime_cairo_push_group");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_push_group_with_content,"cffi_lime_cairo_push_group_with_content");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_rectangle,"cffi_lime_cairo_rectangle");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_rel_curve_to,"cffi_lime_cairo_rel_curve_to");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_rel_line_to,"cffi_lime_cairo_rel_line_to");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_rel_move_to,"cffi_lime_cairo_rel_move_to");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_reset_clip,"cffi_lime_cairo_reset_clip");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_restore,"cffi_lime_cairo_restore");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_rotate,"cffi_lime_cairo_rotate");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_save,"cffi_lime_cairo_save");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_scale,"cffi_lime_cairo_scale");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_antialias,"cffi_lime_cairo_set_antialias");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_dash,"cffi_lime_cairo_set_dash");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_fill_rule,"cffi_lime_cairo_set_fill_rule");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_font_face,"cffi_lime_cairo_set_font_face");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_font_options,"cffi_lime_cairo_set_font_options");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_font_size,"cffi_lime_cairo_set_font_size");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_line_cap,"cffi_lime_cairo_set_line_cap");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_line_join,"cffi_lime_cairo_set_line_join");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_line_width,"cffi_lime_cairo_set_line_width");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_matrix,"cffi_lime_cairo_set_matrix");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_miter_limit,"cffi_lime_cairo_set_miter_limit");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_operator,"cffi_lime_cairo_set_operator");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_source,"cffi_lime_cairo_set_source");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_source_rgb,"cffi_lime_cairo_set_source_rgb");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_source_rgba,"cffi_lime_cairo_set_source_rgba");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_source_surface,"cffi_lime_cairo_set_source_surface");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_set_tolerance,"cffi_lime_cairo_set_tolerance");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_show_glyphs,"cffi_lime_cairo_show_glyphs");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_show_page,"cffi_lime_cairo_show_page");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_show_text,"cffi_lime_cairo_show_text");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_status,"cffi_lime_cairo_status");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_stroke,"cffi_lime_cairo_stroke");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_stroke_extents,"cffi_lime_cairo_stroke_extents");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_stroke_preserve,"cffi_lime_cairo_stroke_preserve");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_text_path,"cffi_lime_cairo_text_path");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_transform,"cffi_lime_cairo_transform");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_translate,"cffi_lime_cairo_translate");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_version,"cffi_lime_cairo_version");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_version_string,"cffi_lime_cairo_version_string");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_font_face_status,"cffi_lime_cairo_font_face_status");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_font_options_create,"cffi_lime_cairo_font_options_create");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_font_options_get_antialias,"cffi_lime_cairo_font_options_get_antialias");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_font_options_get_hint_metrics,"cffi_lime_cairo_font_options_get_hint_metrics");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_font_options_get_hint_style,"cffi_lime_cairo_font_options_get_hint_style");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_font_options_get_subpixel_order,"cffi_lime_cairo_font_options_get_subpixel_order");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_font_options_set_antialias,"cffi_lime_cairo_font_options_set_antialias");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_font_options_set_hint_metrics,"cffi_lime_cairo_font_options_set_hint_metrics");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_font_options_set_hint_style,"cffi_lime_cairo_font_options_set_hint_style");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_font_options_set_subpixel_order,"cffi_lime_cairo_font_options_set_subpixel_order");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_ft_font_face_create,"cffi_lime_cairo_ft_font_face_create");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_image_surface_create,"cffi_lime_cairo_image_surface_create");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_image_surface_create_for_data,"cffi_lime_cairo_image_surface_create_for_data");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_image_surface_get_data,"cffi_lime_cairo_image_surface_get_data");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_image_surface_get_format,"cffi_lime_cairo_image_surface_get_format");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_image_surface_get_height,"cffi_lime_cairo_image_surface_get_height");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_image_surface_get_stride,"cffi_lime_cairo_image_surface_get_stride");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_image_surface_get_width,"cffi_lime_cairo_image_surface_get_width");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_add_color_stop_rgb,"cffi_lime_cairo_pattern_add_color_stop_rgb");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_add_color_stop_rgba,"cffi_lime_cairo_pattern_add_color_stop_rgba");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_create_for_surface,"cffi_lime_cairo_pattern_create_for_surface");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_create_linear,"cffi_lime_cairo_pattern_create_linear");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_create_radial,"cffi_lime_cairo_pattern_create_radial");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_create_rgb,"cffi_lime_cairo_pattern_create_rgb");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_create_rgba,"cffi_lime_cairo_pattern_create_rgba");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_get_color_stop_count,"cffi_lime_cairo_pattern_get_color_stop_count");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_get_extend,"cffi_lime_cairo_pattern_get_extend");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_get_filter,"cffi_lime_cairo_pattern_get_filter");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_get_matrix,"cffi_lime_cairo_pattern_get_matrix");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_set_extend,"cffi_lime_cairo_pattern_set_extend");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_set_filter,"cffi_lime_cairo_pattern_set_filter");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_pattern_set_matrix,"cffi_lime_cairo_pattern_set_matrix");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_cairo_surface_flush,"cffi_lime_cairo_surface_flush");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_getdate,"cffi_lime_curl_getdate");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_global_cleanup,"cffi_lime_curl_global_cleanup");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_global_init,"cffi_lime_curl_global_init");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_version,"cffi_lime_curl_version");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_version_info,"cffi_lime_curl_version_info");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_easy_cleanup,"cffi_lime_curl_easy_cleanup");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_easy_duphandle,"cffi_lime_curl_easy_duphandle");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_easy_escape,"cffi_lime_curl_easy_escape");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_easy_getinfo,"cffi_lime_curl_easy_getinfo");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_easy_init,"cffi_lime_curl_easy_init");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_easy_pause,"cffi_lime_curl_easy_pause");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_easy_perform,"cffi_lime_curl_easy_perform");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_easy_recv,"cffi_lime_curl_easy_recv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_easy_reset,"cffi_lime_curl_easy_reset");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_easy_send,"cffi_lime_curl_easy_send");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_easy_setopt,"cffi_lime_curl_easy_setopt");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_easy_strerror,"cffi_lime_curl_easy_strerror");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_curl_easy_unescape,"cffi_lime_curl_easy_unescape");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_active_texture,"cffi_lime_gl_active_texture");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_attach_shader,"cffi_lime_gl_attach_shader");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_bind_attrib_location,"cffi_lime_gl_bind_attrib_location");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_bind_buffer,"cffi_lime_gl_bind_buffer");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_bind_framebuffer,"cffi_lime_gl_bind_framebuffer");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_bind_renderbuffer,"cffi_lime_gl_bind_renderbuffer");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_bind_texture,"cffi_lime_gl_bind_texture");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_blend_color,"cffi_lime_gl_blend_color");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_blend_equation,"cffi_lime_gl_blend_equation");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_blend_equation_separate,"cffi_lime_gl_blend_equation_separate");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_blend_func,"cffi_lime_gl_blend_func");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_blend_func_separate,"cffi_lime_gl_blend_func_separate");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_buffer_data,"cffi_lime_gl_buffer_data");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_buffer_sub_data,"cffi_lime_gl_buffer_sub_data");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_check_framebuffer_status,"cffi_lime_gl_check_framebuffer_status");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_clear,"cffi_lime_gl_clear");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_clear_color,"cffi_lime_gl_clear_color");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_clear_depthf,"cffi_lime_gl_clear_depthf");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_clear_stencil,"cffi_lime_gl_clear_stencil");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_color_mask,"cffi_lime_gl_color_mask");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_compile_shader,"cffi_lime_gl_compile_shader");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_compressed_tex_image_2d,"cffi_lime_gl_compressed_tex_image_2d");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_compressed_tex_sub_image_2d,"cffi_lime_gl_compressed_tex_sub_image_2d");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_copy_tex_image_2d,"cffi_lime_gl_copy_tex_image_2d");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_copy_tex_sub_image_2d,"cffi_lime_gl_copy_tex_sub_image_2d");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_create_buffer,"cffi_lime_gl_create_buffer");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_create_framebuffer,"cffi_lime_gl_create_framebuffer");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_create_program,"cffi_lime_gl_create_program");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_create_renderbuffer,"cffi_lime_gl_create_renderbuffer");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_create_shader,"cffi_lime_gl_create_shader");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_create_texture,"cffi_lime_gl_create_texture");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_cull_face,"cffi_lime_gl_cull_face");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_delete_buffer,"cffi_lime_gl_delete_buffer");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_delete_framebuffer,"cffi_lime_gl_delete_framebuffer");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_delete_program,"cffi_lime_gl_delete_program");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_delete_renderbuffer,"cffi_lime_gl_delete_renderbuffer");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_delete_shader,"cffi_lime_gl_delete_shader");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_delete_texture,"cffi_lime_gl_delete_texture");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_depth_func,"cffi_lime_gl_depth_func");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_depth_mask,"cffi_lime_gl_depth_mask");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_depth_rangef,"cffi_lime_gl_depth_rangef");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_detach_shader,"cffi_lime_gl_detach_shader");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_disable,"cffi_lime_gl_disable");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_disable_vertex_attrib_array,"cffi_lime_gl_disable_vertex_attrib_array");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_draw_arrays,"cffi_lime_gl_draw_arrays");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_draw_elements,"cffi_lime_gl_draw_elements");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_enable,"cffi_lime_gl_enable");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_enable_vertex_attrib_array,"cffi_lime_gl_enable_vertex_attrib_array");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_finish,"cffi_lime_gl_finish");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_flush,"cffi_lime_gl_flush");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_framebuffer_renderbuffer,"cffi_lime_gl_framebuffer_renderbuffer");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_framebuffer_texture2D,"cffi_lime_gl_framebuffer_texture2D");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_front_face,"cffi_lime_gl_front_face");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_generate_mipmap,"cffi_lime_gl_generate_mipmap");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_active_attrib,"cffi_lime_gl_get_active_attrib");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_active_uniform,"cffi_lime_gl_get_active_uniform");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_attached_shaders,"cffi_lime_gl_get_attached_shaders");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_attrib_location,"cffi_lime_gl_get_attrib_location");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_boolean,"cffi_lime_gl_get_boolean");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_booleanv,"cffi_lime_gl_get_booleanv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_buffer_parameteri,"cffi_lime_gl_get_buffer_parameteri");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_buffer_parameteriv,"cffi_lime_gl_get_buffer_parameteriv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_context_attributes,"cffi_lime_gl_get_context_attributes");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_error,"cffi_lime_gl_get_error");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_extension,"cffi_lime_gl_get_extension");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_float,"cffi_lime_gl_get_float");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_floatv,"cffi_lime_gl_get_floatv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_framebuffer_attachment_parameteri,"cffi_lime_gl_get_framebuffer_attachment_parameteri");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_framebuffer_attachment_parameteriv,"cffi_lime_gl_get_framebuffer_attachment_parameteriv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_integer,"cffi_lime_gl_get_integer");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_integerv,"cffi_lime_gl_get_integerv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_program_info_log,"cffi_lime_gl_get_program_info_log");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_programi,"cffi_lime_gl_get_programi");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_programiv,"cffi_lime_gl_get_programiv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_renderbuffer_parameteri,"cffi_lime_gl_get_renderbuffer_parameteri");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_renderbuffer_parameteriv,"cffi_lime_gl_get_renderbuffer_parameteriv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_shader_info_log,"cffi_lime_gl_get_shader_info_log");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_shaderi,"cffi_lime_gl_get_shaderi");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_shaderiv,"cffi_lime_gl_get_shaderiv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_shader_precision_format,"cffi_lime_gl_get_shader_precision_format");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_shader_source,"cffi_lime_gl_get_shader_source");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_string,"cffi_lime_gl_get_string");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_tex_parameterf,"cffi_lime_gl_get_tex_parameterf");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_tex_parameterfv,"cffi_lime_gl_get_tex_parameterfv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_tex_parameteri,"cffi_lime_gl_get_tex_parameteri");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_tex_parameteriv,"cffi_lime_gl_get_tex_parameteriv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_uniformf,"cffi_lime_gl_get_uniformf");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_uniformfv,"cffi_lime_gl_get_uniformfv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_uniformi,"cffi_lime_gl_get_uniformi");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_uniformiv,"cffi_lime_gl_get_uniformiv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_uniform_location,"cffi_lime_gl_get_uniform_location");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_vertex_attribi,"cffi_lime_gl_get_vertex_attribi");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_vertex_attribiv,"cffi_lime_gl_get_vertex_attribiv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_get_vertex_attrib_pointerv,"cffi_lime_gl_get_vertex_attrib_pointerv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_hint,"cffi_lime_gl_hint");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_is_buffer,"cffi_lime_gl_is_buffer");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_is_enabled,"cffi_lime_gl_is_enabled");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_is_framebuffer,"cffi_lime_gl_is_framebuffer");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_is_program,"cffi_lime_gl_is_program");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_is_renderbuffer,"cffi_lime_gl_is_renderbuffer");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_is_shader,"cffi_lime_gl_is_shader");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_is_texture,"cffi_lime_gl_is_texture");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_line_width,"cffi_lime_gl_line_width");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_link_program,"cffi_lime_gl_link_program");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_object_deregister,"cffi_lime_gl_object_deregister");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_object_from_id,"cffi_lime_gl_object_from_id");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_object_register,"cffi_lime_gl_object_register");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_pixel_storei,"cffi_lime_gl_pixel_storei");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_polygon_offset,"cffi_lime_gl_polygon_offset");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_read_pixels,"cffi_lime_gl_read_pixels");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_renderbuffer_storage,"cffi_lime_gl_renderbuffer_storage");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_sample_coverage,"cffi_lime_gl_sample_coverage");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_scissor,"cffi_lime_gl_scissor");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_shader_source,"cffi_lime_gl_shader_source");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_stencil_func,"cffi_lime_gl_stencil_func");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_stencil_func_separate,"cffi_lime_gl_stencil_func_separate");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_stencil_mask,"cffi_lime_gl_stencil_mask");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_stencil_mask_separate,"cffi_lime_gl_stencil_mask_separate");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_stencil_op,"cffi_lime_gl_stencil_op");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_stencil_op_separate,"cffi_lime_gl_stencil_op_separate");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_tex_image_2d,"cffi_lime_gl_tex_image_2d");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_tex_parameterf,"cffi_lime_gl_tex_parameterf");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_tex_parameteri,"cffi_lime_gl_tex_parameteri");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_tex_sub_image_2d,"cffi_lime_gl_tex_sub_image_2d");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform1f,"cffi_lime_gl_uniform1f");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform1fv,"cffi_lime_gl_uniform1fv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform1i,"cffi_lime_gl_uniform1i");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform1iv,"cffi_lime_gl_uniform1iv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform2f,"cffi_lime_gl_uniform2f");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform2fv,"cffi_lime_gl_uniform2fv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform2i,"cffi_lime_gl_uniform2i");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform2iv,"cffi_lime_gl_uniform2iv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform3f,"cffi_lime_gl_uniform3f");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform3fv,"cffi_lime_gl_uniform3fv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform3i,"cffi_lime_gl_uniform3i");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform3iv,"cffi_lime_gl_uniform3iv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform4f,"cffi_lime_gl_uniform4f");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform4fv,"cffi_lime_gl_uniform4fv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform4i,"cffi_lime_gl_uniform4i");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform4iv,"cffi_lime_gl_uniform4iv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform_matrix2fv,"cffi_lime_gl_uniform_matrix2fv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform_matrix3fv,"cffi_lime_gl_uniform_matrix3fv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_uniform_matrix4fv,"cffi_lime_gl_uniform_matrix4fv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_use_program,"cffi_lime_gl_use_program");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_validate_program,"cffi_lime_gl_validate_program");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_vertex_attrib1f,"cffi_lime_gl_vertex_attrib1f");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_vertex_attrib1fv,"cffi_lime_gl_vertex_attrib1fv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_vertex_attrib2f,"cffi_lime_gl_vertex_attrib2f");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_vertex_attrib2fv,"cffi_lime_gl_vertex_attrib2fv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_vertex_attrib3f,"cffi_lime_gl_vertex_attrib3f");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_vertex_attrib3fv,"cffi_lime_gl_vertex_attrib3fv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_vertex_attrib4f,"cffi_lime_gl_vertex_attrib4f");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_vertex_attrib4fv,"cffi_lime_gl_vertex_attrib4fv");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_vertex_attrib_pointer,"cffi_lime_gl_vertex_attrib_pointer");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_gl_viewport,"cffi_lime_gl_viewport");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_bitrate,"cffi_lime_vorbis_file_bitrate");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_bitrate_instant,"cffi_lime_vorbis_file_bitrate_instant");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_clear,"cffi_lime_vorbis_file_clear");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_comment,"cffi_lime_vorbis_file_comment");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_crosslap,"cffi_lime_vorbis_file_crosslap");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_from_bytes,"cffi_lime_vorbis_file_from_bytes");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_from_file,"cffi_lime_vorbis_file_from_file");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_info,"cffi_lime_vorbis_file_info");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_pcm_seek,"cffi_lime_vorbis_file_pcm_seek");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_pcm_seek_lap,"cffi_lime_vorbis_file_pcm_seek_lap");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_pcm_seek_page,"cffi_lime_vorbis_file_pcm_seek_page");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_pcm_seek_page_lap,"cffi_lime_vorbis_file_pcm_seek_page_lap");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_raw_seek,"cffi_lime_vorbis_file_raw_seek");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_raw_seek_lap,"cffi_lime_vorbis_file_raw_seek_lap");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_pcm_tell,"cffi_lime_vorbis_file_pcm_tell");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_pcm_total,"cffi_lime_vorbis_file_pcm_total");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_raw_tell,"cffi_lime_vorbis_file_raw_tell");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_raw_total,"cffi_lime_vorbis_file_raw_total");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_read,"cffi_lime_vorbis_file_read");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_read_float,"cffi_lime_vorbis_file_read_float");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_seekable,"cffi_lime_vorbis_file_seekable");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_serial_number,"cffi_lime_vorbis_file_serial_number");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_streams,"cffi_lime_vorbis_file_streams");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_time_seek,"cffi_lime_vorbis_file_time_seek");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_time_seek_lap,"cffi_lime_vorbis_file_time_seek_lap");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_time_seek_page,"cffi_lime_vorbis_file_time_seek_page");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_time_seek_page_lap,"cffi_lime_vorbis_file_time_seek_page_lap");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_time_tell,"cffi_lime_vorbis_file_time_tell");
	HX_VISIT_MEMBER_NAME(NativeCFFI_obj::cffi_lime_vorbis_file_time_total,"cffi_lime_vorbis_file_time_total");
};

#endif

hx::Class NativeCFFI_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lime_application_create","\x75","\x25","\x1a","\xbb"),
	HX_HCSTRING("lime_application_event_manager_register","\x33","\x3f","\x87","\x01"),
	HX_HCSTRING("lime_application_exec","\xca","\xf1","\x81","\xe2"),
	HX_HCSTRING("lime_application_init","\x49","\x39","\x1f","\xe5"),
	HX_HCSTRING("lime_application_quit","\x08","\x3e","\x6e","\xea"),
	HX_HCSTRING("lime_application_set_frame_rate","\xa8","\x03","\xd7","\x1d"),
	HX_HCSTRING("lime_application_update","\x82","\x44","\x10","\xc6"),
	HX_HCSTRING("lime_audio_load","\x99","\x89","\x38","\x30"),
	HX_HCSTRING("lime_bytes_from_data_pointer","\x1f","\x3b","\x02","\x90"),
	HX_HCSTRING("lime_bytes_get_data_pointer","\xaf","\xff","\x82","\x7b"),
	HX_HCSTRING("lime_bytes_get_data_pointer_offset","\x63","\x8d","\x9d","\x00"),
	HX_HCSTRING("lime_bytes_read_file","\xc7","\xb2","\x82","\xba"),
	HX_HCSTRING("lime_cffi_get_native_pointer","\x6d","\xf2","\xd7","\x07"),
	HX_HCSTRING("lime_clipboard_get_text","\x29","\xfd","\x31","\x04"),
	HX_HCSTRING("lime_clipboard_set_text","\x9d","\x56","\x8f","\xb2"),
	HX_HCSTRING("lime_data_pointer_offset","\x60","\xb2","\x70","\x59"),
	HX_HCSTRING("lime_deflate_compress","\xe0","\x7d","\x72","\x7f"),
	HX_HCSTRING("lime_deflate_decompress","\xe1","\x49","\xb0","\x91"),
	HX_HCSTRING("lime_drop_event_manager_register","\xa0","\x48","\x49","\x3f"),
	HX_HCSTRING("lime_file_dialog_open_directory","\x36","\x64","\x09","\xe2"),
	HX_HCSTRING("lime_file_dialog_open_file","\x53","\xb1","\xfe","\xc0"),
	HX_HCSTRING("lime_file_dialog_open_files","\xc0","\x77","\xdc","\x1d"),
	HX_HCSTRING("lime_file_dialog_save_file","\x00","\x49","\x86","\xdc"),
	HX_HCSTRING("lime_font_get_ascender","\x06","\xf1","\xb5","\x57"),
	HX_HCSTRING("lime_font_get_descender","\x68","\xc1","\x2f","\x64"),
	HX_HCSTRING("lime_font_get_family_name","\x97","\xce","\xb2","\xb4"),
	HX_HCSTRING("lime_font_get_glyph_index","\x90","\x3b","\xdd","\xa2"),
	HX_HCSTRING("lime_font_get_glyph_indices","\x25","\x83","\xe4","\x03"),
	HX_HCSTRING("lime_font_get_glyph_metrics","\x41","\xde","\x64","\x4d"),
	HX_HCSTRING("lime_font_get_height","\xf6","\x3e","\xaa","\xfc"),
	HX_HCSTRING("lime_font_get_num_glyphs","\xef","\x8b","\xe7","\xad"),
	HX_HCSTRING("lime_font_get_underline_position","\x0b","\x93","\x8e","\x28"),
	HX_HCSTRING("lime_font_get_underline_thickness","\xd2","\x14","\x47","\xde"),
	HX_HCSTRING("lime_font_get_units_per_em","\x29","\x72","\x55","\xdc"),
	HX_HCSTRING("lime_font_load","\xec","\x08","\x6e","\x02"),
	HX_HCSTRING("lime_font_outline_decompose","\xee","\xda","\x88","\x55"),
	HX_HCSTRING("lime_font_render_glyph","\x89","\x79","\x39","\x0f"),
	HX_HCSTRING("lime_font_render_glyphs","\xca","\xde","\x10","\x43"),
	HX_HCSTRING("lime_font_set_size","\x84","\xff","\x47","\xdd"),
	HX_HCSTRING("lime_gamepad_add_mappings","\x0b","\x39","\xa9","\xd8"),
	HX_HCSTRING("lime_gamepad_get_device_guid","\x61","\x03","\x1f","\x2d"),
	HX_HCSTRING("lime_gamepad_get_device_name","\x23","\x58","\xb0","\x31"),
	HX_HCSTRING("lime_gamepad_event_manager_register","\x02","\xb7","\x1e","\x51"),
	HX_HCSTRING("lime_gzip_compress","\xfd","\xcc","\x13","\x7a"),
	HX_HCSTRING("lime_gzip_decompress","\x3e","\x5a","\x99","\x72"),
	HX_HCSTRING("lime_haptic_vibrate","\x31","\x58","\x7a","\x85"),
	HX_HCSTRING("lime_image_encode","\x64","\x48","\x63","\x9c"),
	HX_HCSTRING("lime_image_load","\xf4","\x20","\xad","\x9c"),
	HX_HCSTRING("lime_image_data_util_color_transform","\xba","\xcc","\x96","\x40"),
	HX_HCSTRING("lime_image_data_util_copy_channel","\x4f","\x54","\x36","\xa5"),
	HX_HCSTRING("lime_image_data_util_copy_pixels","\x21","\x51","\x7b","\xab"),
	HX_HCSTRING("lime_image_data_util_fill_rect","\x8a","\x8c","\xa4","\x8e"),
	HX_HCSTRING("lime_image_data_util_flood_fill","\xba","\xe7","\x5b","\xf2"),
	HX_HCSTRING("lime_image_data_util_get_pixels","\xcc","\x3e","\xde","\x0c"),
	HX_HCSTRING("lime_image_data_util_merge","\xa2","\xd2","\xb1","\xf7"),
	HX_HCSTRING("lime_image_data_util_multiply_alpha","\x99","\x86","\xad","\x5d"),
	HX_HCSTRING("lime_image_data_util_resize","\xca","\x16","\x5a","\xc4"),
	HX_HCSTRING("lime_image_data_util_set_format","\x4a","\x7d","\x40","\x81"),
	HX_HCSTRING("lime_image_data_util_set_pixels","\x40","\xdd","\x5b","\x10"),
	HX_HCSTRING("lime_image_data_util_threshold","\x95","\x30","\x16","\x89"),
	HX_HCSTRING("lime_image_data_util_unmultiply_alpha","\x32","\xd8","\x15","\x90"),
	HX_HCSTRING("lime_joystick_get_device_guid","\x90","\x59","\x1a","\x42"),
	HX_HCSTRING("lime_joystick_get_device_name","\x52","\xae","\xab","\x46"),
	HX_HCSTRING("lime_joystick_get_num_axes","\xc0","\xe1","\xd4","\xa9"),
	HX_HCSTRING("lime_joystick_get_num_buttons","\x86","\x9c","\x1a","\x05"),
	HX_HCSTRING("lime_joystick_get_num_hats","\x53","\xf9","\x63","\xae"),
	HX_HCSTRING("lime_joystick_get_num_trackballs","\x04","\x66","\xee","\x99"),
	HX_HCSTRING("lime_joystick_event_manager_register","\xb3","\x14","\x1d","\x14"),
	HX_HCSTRING("lime_jpeg_decode_bytes","\xa7","\xff","\x10","\xc9"),
	HX_HCSTRING("lime_jpeg_decode_file","\xc0","\x92","\xae","\x0c"),
	HX_HCSTRING("lime_key_code_from_scan_code","\xe2","\x69","\x76","\xbc"),
	HX_HCSTRING("lime_key_code_to_scan_code","\x33","\xc7","\x96","\x30"),
	HX_HCSTRING("lime_key_event_manager_register","\xc4","\x10","\x76","\x37"),
	HX_HCSTRING("lime_lzma_compress","\x75","\xe7","\xf2","\x95"),
	HX_HCSTRING("lime_lzma_decompress","\xb6","\x02","\x4e","\x98"),
	HX_HCSTRING("lime_mouse_hide","\x86","\xe8","\x02","\xac"),
	HX_HCSTRING("lime_mouse_set_cursor","\xd7","\x7b","\x59","\xa1"),
	HX_HCSTRING("lime_mouse_set_lock","\xac","\x96","\x23","\xfb"),
	HX_HCSTRING("lime_mouse_show","\xc1","\x88","\x47","\xb3"),
	HX_HCSTRING("lime_mouse_warp","\x0c","\x16","\xe7","\xb5"),
	HX_HCSTRING("lime_mouse_event_manager_register","\x7e","\x33","\x83","\xea"),
	HX_HCSTRING("lime_neko_execute","\xfb","\x62","\x24","\x05"),
	HX_HCSTRING("lime_png_decode_bytes","\x9a","\x13","\x98","\x26"),
	HX_HCSTRING("lime_png_decode_file","\x2d","\x7e","\x35","\x25"),
	HX_HCSTRING("lime_renderer_create","\x4e","\xc5","\x81","\x91"),
	HX_HCSTRING("lime_renderer_flip","\x7f","\xd8","\x55","\x6f"),
	HX_HCSTRING("lime_renderer_get_context","\x74","\x6e","\xee","\xe1"),
	HX_HCSTRING("lime_renderer_get_scale","\xcf","\x0b","\x88","\x72"),
	HX_HCSTRING("lime_renderer_get_type","\x15","\xc5","\x47","\xea"),
	HX_HCSTRING("lime_renderer_lock","\xbd","\x61","\x4f","\x73"),
	HX_HCSTRING("lime_renderer_make_current","\x7a","\xb5","\x2f","\x5b"),
	HX_HCSTRING("lime_renderer_read_pixels","\xa4","\xe4","\x37","\xc3"),
	HX_HCSTRING("lime_renderer_unlock","\x16","\x01","\xff","\x7a"),
	HX_HCSTRING("lime_render_event_manager_register","\xd9","\x6b","\xed","\xee"),
	HX_HCSTRING("lime_sensor_event_manager_register","\x75","\x01","\xd7","\x10"),
	HX_HCSTRING("lime_system_get_allow_screen_timeout","\x73","\x89","\x73","\x7a"),
	HX_HCSTRING("lime_system_set_allow_screen_timeout","\xe7","\x0a","\x4e","\x8d"),
	HX_HCSTRING("lime_system_get_directory","\x5e","\x9e","\x04","\x7c"),
	HX_HCSTRING("lime_system_get_display","\xf3","\x47","\x82","\xd2"),
	HX_HCSTRING("lime_system_get_ios_tablet","\x07","\x23","\xac","\xcd"),
	HX_HCSTRING("lime_system_get_num_displays","\xf9","\x90","\x37","\x4f"),
	HX_HCSTRING("lime_system_get_timer","\x36","\x5f","\x72","\x67"),
	HX_HCSTRING("lime_system_open_file","\x6b","\x2d","\x58","\xea"),
	HX_HCSTRING("lime_system_open_url","\x60","\x3f","\x2e","\xb4"),
	HX_HCSTRING("lime_text_event_manager_register","\xe2","\x83","\x68","\x5d"),
	HX_HCSTRING("lime_text_layout_create","\x09","\x53","\x56","\x81"),
	HX_HCSTRING("lime_text_layout_position","\xf6","\x69","\xde","\xe0"),
	HX_HCSTRING("lime_text_layout_set_direction","\xb5","\x77","\xe8","\x4e"),
	HX_HCSTRING("lime_text_layout_set_language","\xa2","\x4b","\xfb","\x67"),
	HX_HCSTRING("lime_text_layout_set_script","\xd5","\xd2","\xc7","\x68"),
	HX_HCSTRING("lime_touch_event_manager_register","\x24","\x25","\xf4","\xf5"),
	HX_HCSTRING("lime_window_alert","\x37","\xb9","\xe2","\xc1"),
	HX_HCSTRING("lime_window_close","\x93","\x79","\xb7","\xe8"),
	HX_HCSTRING("lime_window_create","\xc1","\xa4","\x90","\x25"),
	HX_HCSTRING("lime_window_focus","\xb3","\xc1","\xdd","\xa4"),
	HX_HCSTRING("lime_window_get_display","\x74","\x42","\x74","\x0d"),
	HX_HCSTRING("lime_window_get_display_mode","\x4e","\x48","\xb4","\x98"),
	HX_HCSTRING("lime_window_get_enable_text_events","\xbd","\x19","\xaf","\xda"),
	HX_HCSTRING("lime_window_get_height","\xf5","\x7b","\x27","\xd0"),
	HX_HCSTRING("lime_window_get_id","\xe9","\x30","\xb1","\x4c"),
	HX_HCSTRING("lime_window_get_width","\xb8","\xfd","\x65","\x5f"),
	HX_HCSTRING("lime_window_get_x","\x2a","\x07","\xb5","\x31"),
	HX_HCSTRING("lime_window_get_y","\x2b","\x07","\xb5","\x31"),
	HX_HCSTRING("lime_window_move","\x96","\xb5","\x64","\x4b"),
	HX_HCSTRING("lime_window_resize","\xb9","\x97","\xfc","\xb1"),
	HX_HCSTRING("lime_window_set_borderless","\xc7","\xc1","\xd2","\x19"),
	HX_HCSTRING("lime_window_set_display_mode","\xc2","\x35","\xf6","\xee"),
	HX_HCSTRING("lime_window_set_enable_text_events","\x31","\x96","\x5a","\x0e"),
	HX_HCSTRING("lime_window_set_fullscreen","\xbd","\xb5","\x15","\xfc"),
	HX_HCSTRING("lime_window_set_icon","\x7b","\xf5","\x6a","\x6e"),
	HX_HCSTRING("lime_window_set_maximized","\xd6","\xf8","\xec","\x06"),
	HX_HCSTRING("lime_window_set_minimized","\x44","\xe6","\xa9","\x30"),
	HX_HCSTRING("lime_window_set_resizable","\x29","\x22","\x5c","\xb1"),
	HX_HCSTRING("lime_window_set_title","\x56","\x49","\x8f","\x88"),
	HX_HCSTRING("lime_window_event_manager_register","\x7f","\x16","\x8e","\x0d"),
	HX_HCSTRING("lime_zlib_compress","\xac","\x90","\xd2","\x8a"),
	HX_HCSTRING("lime_zlib_decompress","\xad","\xa7","\x53","\x43"),
	HX_HCSTRING("lime_al_buffer_data","\x9f","\x3d","\x30","\xe4"),
	HX_HCSTRING("lime_al_buffer3f","\x7d","\xe7","\x92","\xda"),
	HX_HCSTRING("lime_al_buffer3i","\x80","\xe7","\x92","\xda"),
	HX_HCSTRING("lime_al_bufferf","\xfc","\xc8","\x9c","\xee"),
	HX_HCSTRING("lime_al_bufferfv","\xfa","\x13","\x93","\xda"),
	HX_HCSTRING("lime_al_bufferi","\xff","\xc8","\x9c","\xee"),
	HX_HCSTRING("lime_al_bufferiv","\x97","\x16","\x93","\xda"),
	HX_HCSTRING("lime_al_delete_buffer","\xea","\xb3","\x0d","\x56"),
	HX_HCSTRING("lime_al_delete_buffers","\x49","\xb9","\xef","\xf5"),
	HX_HCSTRING("lime_al_delete_source","\xc5","\xa7","\xaa","\xb7"),
	HX_HCSTRING("lime_al_delete_sources","\x0e","\x25","\xa8","\xfd"),
	HX_HCSTRING("lime_al_disable","\x7e","\x8f","\x64","\xee"),
	HX_HCSTRING("lime_al_distance_model","\x09","\x2d","\x9c","\x2e"),
	HX_HCSTRING("lime_al_doppler_factor","\xea","\xb2","\x5f","\x1d"),
	HX_HCSTRING("lime_al_doppler_velocity","\xf8","\x18","\x9f","\xe4"),
	HX_HCSTRING("lime_al_enable","\xad","\xcd","\xb6","\x64"),
	HX_HCSTRING("lime_al_gen_source","\x14","\x70","\x09","\x16"),
	HX_HCSTRING("lime_al_gen_sources","\xdf","\xa1","\x38","\x32"),
	HX_HCSTRING("lime_al_get_boolean","\x55","\xf3","\x96","\xe8"),
	HX_HCSTRING("lime_al_get_booleanv","\x81","\xf7","\x7d","\x9b"),
	HX_HCSTRING("lime_al_gen_buffer","\x39","\x7c","\x6c","\xb4"),
	HX_HCSTRING("lime_al_gen_buffers","\x1a","\x36","\x80","\x2a"),
	HX_HCSTRING("lime_al_get_buffer3f","\x86","\xb8","\x6d","\x87"),
	HX_HCSTRING("lime_al_get_buffer3i","\x89","\xb8","\x6d","\x87"),
	HX_HCSTRING("lime_al_get_bufferf","\x13","\xac","\x28","\x1c"),
	HX_HCSTRING("lime_al_get_bufferfv","\x03","\xe5","\x6d","\x87"),
	HX_HCSTRING("lime_al_get_bufferi","\x16","\xac","\x28","\x1c"),
	HX_HCSTRING("lime_al_get_bufferiv","\xa0","\xe7","\x6d","\x87"),
	HX_HCSTRING("lime_al_get_double","\x04","\x97","\xd1","\x6d"),
	HX_HCSTRING("lime_al_get_doublev","\xf2","\x8c","\x92","\xa9"),
	HX_HCSTRING("lime_al_get_enum_value","\xe6","\xc9","\xe4","\x87"),
	HX_HCSTRING("lime_al_get_error","\x35","\x5f","\x64","\x6b"),
	HX_HCSTRING("lime_al_get_float","\x09","\x59","\xd1","\xfa"),
	HX_HCSTRING("lime_al_get_floatv","\x4d","\x8f","\x5c","\x7c"),
	HX_HCSTRING("lime_al_get_integer","\x6b","\xc6","\xb3","\x81"),
	HX_HCSTRING("lime_al_get_integerv","\xab","\xd7","\x99","\xfb"),
	HX_HCSTRING("lime_al_get_listener3f","\xba","\x13","\x81","\x29"),
	HX_HCSTRING("lime_al_get_listener3i","\xbd","\x13","\x81","\x29"),
	HX_HCSTRING("lime_al_get_listenerf","\x5f","\xb3","\xbb","\x3a"),
	HX_HCSTRING("lime_al_get_listenerfv","\x37","\x40","\x81","\x29"),
	HX_HCSTRING("lime_al_get_listeneri","\x62","\xb3","\xbb","\x3a"),
	HX_HCSTRING("lime_al_get_listeneriv","\xd4","\x42","\x81","\x29"),
	HX_HCSTRING("lime_al_get_proc_address","\xfe","\x7c","\x3d","\x26"),
	HX_HCSTRING("lime_al_get_source3f","\x21","\x99","\x13","\x41"),
	HX_HCSTRING("lime_al_get_source3i","\x24","\x99","\x13","\x41"),
	HX_HCSTRING("lime_al_get_sourcef","\xd8","\x17","\xe1","\x23"),
	HX_HCSTRING("lime_al_get_sourcefv","\x9e","\xc5","\x13","\x41"),
	HX_HCSTRING("lime_al_get_sourcei","\xdb","\x17","\xe1","\x23"),
	HX_HCSTRING("lime_al_get_sourceiv","\x3b","\xc8","\x13","\x41"),
	HX_HCSTRING("lime_al_get_string","\xc4","\x94","\x36","\x4c"),
	HX_HCSTRING("lime_al_is_buffer","\x0b","\x5b","\x4a","\x2a"),
	HX_HCSTRING("lime_al_is_enabled","\x16","\xb0","\x65","\xa3"),
	HX_HCSTRING("lime_al_is_extension_present","\xd0","\x16","\x00","\xef"),
	HX_HCSTRING("lime_al_is_source","\xe6","\x4e","\xe7","\x8b"),
	HX_HCSTRING("lime_al_listener3f","\x71","\x2e","\x89","\x73"),
	HX_HCSTRING("lime_al_listener3i","\x74","\x2e","\x89","\x73"),
	HX_HCSTRING("lime_al_listenerf","\x88","\x9c","\x1f","\xa8"),
	HX_HCSTRING("lime_al_listenerfv","\xee","\x5a","\x89","\x73"),
	HX_HCSTRING("lime_al_listeneri","\x8b","\x9c","\x1f","\xa8"),
	HX_HCSTRING("lime_al_listeneriv","\x8b","\x5d","\x89","\x73"),
	HX_HCSTRING("lime_al_source_pause","\xfc","\x3f","\x07","\xa0"),
	HX_HCSTRING("lime_al_source_pausev","\xfa","\xbc","\x50","\x66"),
	HX_HCSTRING("lime_al_source_play","\xae","\x47","\xe1","\x7d"),
	HX_HCSTRING("lime_al_source_playv","\x08","\x71","\x3d","\xa7"),
	HX_HCSTRING("lime_al_source_queue_buffers","\x8b","\xe2","\x2d","\x54"),
	HX_HCSTRING("lime_al_source_rewind","\x35","\xa6","\xec","\x81"),
	HX_HCSTRING("lime_al_source_rewindv","\xa1","\xc8","\x24","\x2d"),
	HX_HCSTRING("lime_al_source_stop","\xbc","\x09","\xe3","\x7f"),
	HX_HCSTRING("lime_al_source_stopv","\x3a","\x7b","\xc5","\x66"),
	HX_HCSTRING("lime_al_source_unqueue_buffers","\x12","\x06","\xe2","\x64"),
	HX_HCSTRING("lime_al_source3f","\x18","\xc8","\x38","\x94"),
	HX_HCSTRING("lime_al_source3i","\x1b","\xc8","\x38","\x94"),
	HX_HCSTRING("lime_al_sourcef","\xc1","\x34","\x55","\xf6"),
	HX_HCSTRING("lime_al_sourcefv","\x95","\xf4","\x38","\x94"),
	HX_HCSTRING("lime_al_sourcei","\xc4","\x34","\x55","\xf6"),
	HX_HCSTRING("lime_al_sourceiv","\x32","\xf7","\x38","\x94"),
	HX_HCSTRING("lime_al_speed_of_sound","\x89","\xb0","\xa8","\x8a"),
	HX_HCSTRING("lime_alc_close_device","\xee","\x17","\x5c","\xd1"),
	HX_HCSTRING("lime_alc_create_context","\x1d","\x4b","\x86","\xd8"),
	HX_HCSTRING("lime_alc_destroy_context","\x99","\xa8","\x9a","\x12"),
	HX_HCSTRING("lime_alc_get_contexts_device","\xd7","\xe3","\xae","\xe6"),
	HX_HCSTRING("lime_alc_get_current_context","\x6f","\x01","\xf1","\x48"),
	HX_HCSTRING("lime_alc_get_error","\x0e","\x4d","\x6e","\x60"),
	HX_HCSTRING("lime_alc_get_integerv","\x72","\x57","\x31","\x49"),
	HX_HCSTRING("lime_alc_get_string","\xcb","\xc4","\xdc","\xbf"),
	HX_HCSTRING("lime_alc_make_context_current","\x89","\xfe","\x9c","\xca"),
	HX_HCSTRING("lime_alc_open_device","\x5a","\xd6","\x40","\x50"),
	HX_HCSTRING("lime_alc_pause_device","\x70","\xdc","\x44","\x20"),
	HX_HCSTRING("lime_alc_process_context","\x0e","\x1b","\xb1","\x00"),
	HX_HCSTRING("lime_alc_resume_device","\x97","\x8c","\x92","\x24"),
	HX_HCSTRING("lime_alc_suspend_context","\x1b","\xfd","\xcc","\x57"),
	HX_HCSTRING("lime_cairo_arc","\xf1","\x76","\xfc","\xf9"),
	HX_HCSTRING("lime_cairo_arc_negative","\xc3","\xc0","\xb7","\xd8"),
	HX_HCSTRING("lime_cairo_clip","\x51","\x81","\x39","\xc4"),
	HX_HCSTRING("lime_cairo_clip_preserve","\xba","\xaf","\x0e","\x79"),
	HX_HCSTRING("lime_cairo_clip_extents","\x1b","\xef","\x99","\x33"),
	HX_HCSTRING("lime_cairo_close_path","\x0d","\x58","\x78","\xe1"),
	HX_HCSTRING("lime_cairo_copy_page","\x38","\xe4","\xe1","\x1e"),
	HX_HCSTRING("lime_cairo_create","\xbd","\xdb","\x50","\xd8"),
	HX_HCSTRING("lime_cairo_curve_to","\x4c","\xed","\xec","\xef"),
	HX_HCSTRING("lime_cairo_fill","\x04","\xe1","\x32","\xc6"),
	HX_HCSTRING("lime_cairo_fill_extents","\xce","\xb9","\x56","\x6b"),
	HX_HCSTRING("lime_cairo_fill_preserve","\xa7","\x41","\x83","\x06"),
	HX_HCSTRING("lime_cairo_get_antialias","\xe4","\xbf","\xea","\x4f"),
	HX_HCSTRING("lime_cairo_get_current_point","\xc0","\xc4","\x0b","\xc0"),
	HX_HCSTRING("lime_cairo_get_dash","\xdc","\xf7","\x36","\xc9"),
	HX_HCSTRING("lime_cairo_get_dash_count","\xec","\xd0","\x06","\xce"),
	HX_HCSTRING("lime_cairo_get_fill_rule","\xae","\x34","\x3f","\x14"),
	HX_HCSTRING("lime_cairo_get_font_face","\x83","\xed","\x75","\xe9"),
	HX_HCSTRING("lime_cairo_get_font_options","\x38","\x0e","\x38","\xee"),
	HX_HCSTRING("lime_cairo_get_group_target","\x1b","\x04","\x8e","\x27"),
	HX_HCSTRING("lime_cairo_get_line_cap","\x91","\x8a","\xff","\xdc"),
	HX_HCSTRING("lime_cairo_get_line_join","\x8b","\xcc","\x44","\x87"),
	HX_HCSTRING("lime_cairo_get_line_width","\x45","\xaa","\x28","\x4d"),
	HX_HCSTRING("lime_cairo_get_matrix","\x4b","\x0f","\xb1","\x58"),
	HX_HCSTRING("lime_cairo_get_miter_limit","\xf7","\xda","\xf6","\xe3"),
	HX_HCSTRING("lime_cairo_get_operator","\x2e","\xcb","\x0b","\x90"),
	HX_HCSTRING("lime_cairo_get_source","\xe5","\x89","\x1a","\xcf"),
	HX_HCSTRING("lime_cairo_get_target","\x5b","\xcc","\xd5","\x23"),
	HX_HCSTRING("lime_cairo_get_tolerance","\x43","\x26","\x7d","\x0d"),
	HX_HCSTRING("lime_cairo_has_current_point","\x84","\x52","\x43","\x91"),
	HX_HCSTRING("lime_cairo_identity_matrix","\x81","\xb1","\xfe","\x41"),
	HX_HCSTRING("lime_cairo_in_clip","\xc9","\xa4","\x67","\x5b"),
	HX_HCSTRING("lime_cairo_in_fill","\x7c","\x04","\x61","\x5d"),
	HX_HCSTRING("lime_cairo_in_stroke","\xf1","\x19","\x0e","\xc7"),
	HX_HCSTRING("lime_cairo_line_to","\x45","\x88","\xaa","\x7c"),
	HX_HCSTRING("lime_cairo_mask","\x6d","\x53","\xcd","\xca"),
	HX_HCSTRING("lime_cairo_mask_surface","\x1b","\xc8","\xa3","\x8c"),
	HX_HCSTRING("lime_cairo_move_to","\x48","\xcd","\x98","\xa7"),
	HX_HCSTRING("lime_cairo_new_path","\x25","\xbc","\x98","\x94"),
	HX_HCSTRING("lime_cairo_paint","\xfd","\xd5","\x07","\x63"),
	HX_HCSTRING("lime_cairo_paint_with_alpha","\x67","\x1b","\xfb","\x63"),
	HX_HCSTRING("lime_cairo_pop_group","\xb0","\x94","\x6e","\x0c"),
	HX_HCSTRING("lime_cairo_pop_group_to_source","\xd0","\x9e","\x67","\xaf"),
	HX_HCSTRING("lime_cairo_push_group","\x1b","\x55","\x88","\x61"),
	HX_HCSTRING("lime_cairo_push_group_with_content","\xa4","\xbb","\x13","\xd3"),
	HX_HCSTRING("lime_cairo_rectangle","\x0e","\x0e","\x2e","\x48"),
	HX_HCSTRING("lime_cairo_rel_curve_to","\xb2","\xac","\x52","\x05"),
	HX_HCSTRING("lime_cairo_rel_line_to","\x9f","\x37","\x7e","\xc0"),
	HX_HCSTRING("lime_cairo_rel_move_to","\xa2","\x7c","\x6c","\xeb"),
	HX_HCSTRING("lime_cairo_reset_clip","\xc1","\xbb","\xa3","\xf6"),
	HX_HCSTRING("lime_cairo_restore","\x6d","\x1b","\xb5","\xc7"),
	HX_HCSTRING("lime_cairo_rotate","\x1c","\xbb","\x61","\x27"),
	HX_HCSTRING("lime_cairo_save","\xbe","\x9d","\xc4","\xce"),
	HX_HCSTRING("lime_cairo_scale","\xe9","\xec","\x87","\x1e"),
	HX_HCSTRING("lime_cairo_set_antialias","\xf0","\xa1","\xf0","\x94"),
	HX_HCSTRING("lime_cairo_set_dash","\x50","\x51","\x94","\x77"),
	HX_HCSTRING("lime_cairo_set_fill_rule","\xba","\x16","\x45","\x59"),
	HX_HCSTRING("lime_cairo_set_font_face","\x8f","\xcf","\x7b","\x2e"),
	HX_HCSTRING("lime_cairo_set_font_options","\xac","\xfb","\x79","\x44"),
	HX_HCSTRING("lime_cairo_set_font_size","\xb3","\xbb","\x19","\x37"),
	HX_HCSTRING("lime_cairo_set_line_cap","\x05","\xae","\xf8","\xf1"),
	HX_HCSTRING("lime_cairo_set_line_join","\x97","\xae","\x4a","\xcc"),
	HX_HCSTRING("lime_cairo_set_line_width","\xb9","\x92","\x48","\x6d"),
	HX_HCSTRING("lime_cairo_set_matrix","\xbf","\xad","\x2e","\x5c"),
	HX_HCSTRING("lime_cairo_set_miter_limit","\x03","\x58","\xc2","\xdf"),
	HX_HCSTRING("lime_cairo_set_operator","\xa2","\xee","\x04","\xa5"),
	HX_HCSTRING("lime_cairo_set_source","\x59","\x28","\x98","\xd2"),
	HX_HCSTRING("lime_cairo_set_source_rgb","\xe7","\xe8","\x97","\x83"),
	HX_HCSTRING("lime_cairo_set_source_rgba","\x9a","\xe1","\x53","\xa1"),
	HX_HCSTRING("lime_cairo_set_source_surface","\x07","\x69","\xef","\xcf"),
	HX_HCSTRING("lime_cairo_set_tolerance","\x4f","\x08","\x83","\x52"),
	HX_HCSTRING("lime_cairo_show_glyphs","\x28","\x2f","\xf5","\x54"),
	HX_HCSTRING("lime_cairo_show_page","\xf0","\x25","\x4b","\xc7"),
	HX_HCSTRING("lime_cairo_show_text","\x4e","\x18","\xf3","\xc9"),
	HX_HCSTRING("lime_cairo_status","\xf3","\x5b","\x3d","\x62"),
	HX_HCSTRING("lime_cairo_stroke","\x79","\x28","\x76","\x6d"),
	HX_HCSTRING("lime_cairo_stroke_extents","\x43","\xfe","\x0d","\xea"),
	HX_HCSTRING("lime_cairo_stroke_preserve","\x92","\xe3","\x27","\x68"),
	HX_HCSTRING("lime_cairo_text_path","\x96","\x5b","\xd4","\x31"),
	HX_HCSTRING("lime_cairo_transform","\x4b","\x67","\x44","\x74"),
	HX_HCSTRING("lime_cairo_translate","\x2d","\x11","\x31","\x78"),
	HX_HCSTRING("lime_cairo_version","\x37","\x9b","\xf6","\xd9"),
	HX_HCSTRING("lime_cairo_version_string","\x19","\x84","\x60","\x45"),
	HX_HCSTRING("lime_cairo_font_face_status","\x25","\x18","\x5c","\xf3"),
	HX_HCSTRING("lime_cairo_font_options_create","\x4c","\x3f","\x9e","\x9d"),
	HX_HCSTRING("lime_cairo_font_options_get_antialias","\x35","\x7c","\x8d","\xf3"),
	HX_HCSTRING("lime_cairo_font_options_get_hint_metrics","\x24","\xe1","\x9b","\x00"),
	HX_HCSTRING("lime_cairo_font_options_get_hint_style","\xd2","\xb9","\x3d","\x00"),
	HX_HCSTRING("lime_cairo_font_options_get_subpixel_order","\x6e","\x5e","\x52","\xfe"),
	HX_HCSTRING("lime_cairo_font_options_set_antialias","\x41","\x5e","\x93","\x38"),
	HX_HCSTRING("lime_cairo_font_options_set_hint_metrics","\x98","\xce","\xdd","\x56"),
	HX_HCSTRING("lime_cairo_font_options_set_hint_style","\x46","\xa2","\x5d","\x20"),
	HX_HCSTRING("lime_cairo_font_options_set_subpixel_order","\xe2","\x90","\x01","\xdb"),
	HX_HCSTRING("lime_cairo_ft_font_face_create","\xde","\x6b","\x31","\x70"),
	HX_HCSTRING("lime_cairo_image_surface_create","\x33","\x6e","\xfc","\xce"),
	HX_HCSTRING("lime_cairo_image_surface_create_for_data","\x2c","\x35","\x7d","\x63"),
	HX_HCSTRING("lime_cairo_image_surface_get_data","\xaa","\x94","\xc4","\x6f"),
	HX_HCSTRING("lime_cairo_image_surface_get_format","\xb7","\x6d","\x9c","\x34"),
	HX_HCSTRING("lime_cairo_image_surface_get_height","\x67","\xe6","\x59","\x39"),
	HX_HCSTRING("lime_cairo_image_surface_get_stride","\x99","\xfe","\x3d","\x48"),
	HX_HCSTRING("lime_cairo_image_surface_get_width","\x86","\x27","\x18","\x52"),
	HX_HCSTRING("lime_cairo_pattern_add_color_stop_rgb","\x5a","\x49","\x3d","\xbb"),
	HX_HCSTRING("lime_cairo_pattern_add_color_stop_rgba","\xc7","\xe5","\x62","\x1a"),
	HX_HCSTRING("lime_cairo_pattern_create_for_surface","\xc4","\x41","\xff","\xa6"),
	HX_HCSTRING("lime_cairo_pattern_create_linear","\xf8","\x82","\x42","\xcf"),
	HX_HCSTRING("lime_cairo_pattern_create_radial","\xf2","\xef","\x98","\x93"),
	HX_HCSTRING("lime_cairo_pattern_create_rgb","\x1a","\x90","\x6b","\xce"),
	HX_HCSTRING("lime_cairo_pattern_create_rgba","\x07","\x87","\xb2","\xcf"),
	HX_HCSTRING("lime_cairo_pattern_get_color_stop_count","\x47","\x7e","\x23","\xf0"),
	HX_HCSTRING("lime_cairo_pattern_get_extend","\xb3","\x1c","\x37","\x1f"),
	HX_HCSTRING("lime_cairo_pattern_get_filter","\x91","\x6a","\x51","\xdd"),
	HX_HCSTRING("lime_cairo_pattern_get_matrix","\x1a","\x81","\xe4","\x13"),
	HX_HCSTRING("lime_cairo_pattern_set_extend","\x27","\xbb","\xb4","\x22"),
	HX_HCSTRING("lime_cairo_pattern_set_filter","\x05","\x09","\xcf","\xe0"),
	HX_HCSTRING("lime_cairo_pattern_set_matrix","\x8e","\x1f","\x62","\x17"),
	HX_HCSTRING("lime_cairo_surface_flush","\x51","\x85","\xbf","\xed"),
	HX_HCSTRING("lime_curl_getdate","\xdb","\x3c","\x06","\x67"),
	HX_HCSTRING("lime_curl_global_cleanup","\xd1","\x6f","\xf2","\x40"),
	HX_HCSTRING("lime_curl_global_init","\x43","\x79","\xfb","\xd4"),
	HX_HCSTRING("lime_curl_version","\x2f","\x4a","\xeb","\xb9"),
	HX_HCSTRING("lime_curl_version_info","\xbe","\xbf","\x7a","\x9e"),
	HX_HCSTRING("lime_curl_easy_cleanup","\x30","\xcd","\xaa","\x62"),
	HX_HCSTRING("lime_curl_easy_duphandle","\xb3","\xc0","\xa0","\x67"),
	HX_HCSTRING("lime_curl_easy_escape","\xf5","\x67","\xb1","\x5f"),
	HX_HCSTRING("lime_curl_easy_getinfo","\x10","\x7d","\xcd","\xe4"),
	HX_HCSTRING("lime_curl_easy_init","\x84","\x9a","\xe4","\x65"),
	HX_HCSTRING("lime_curl_easy_pause","\x02","\xfd","\x61","\xc1"),
	HX_HCSTRING("lime_curl_easy_perform","\xad","\xa9","\x46","\x32"),
	HX_HCSTRING("lime_curl_easy_recv","\x9a","\xac","\xd0","\x6b"),
	HX_HCSTRING("lime_curl_easy_reset","\xdb","\x6f","\xd2","\xea"),
	HX_HCSTRING("lime_curl_easy_send","\xbc","\xec","\x79","\x6c"),
	HX_HCSTRING("lime_curl_easy_setopt","\x45","\x96","\x5b","\xf4"),
	HX_HCSTRING("lime_curl_easy_strerror","\xeb","\x2a","\x7c","\x55"),
	HX_HCSTRING("lime_curl_easy_unescape","\x0e","\x9c","\x61","\xa1"),
	HX_HCSTRING("lime_gl_active_texture","\x52","\xdf","\x77","\xb3"),
	HX_HCSTRING("lime_gl_attach_shader","\x6f","\x78","\x09","\x06"),
	HX_HCSTRING("lime_gl_bind_attrib_location","\x78","\xd0","\x23","\x1a"),
	HX_HCSTRING("lime_gl_bind_buffer","\x52","\x57","\xd9","\xe2"),
	HX_HCSTRING("lime_gl_bind_framebuffer","\x5b","\xd1","\x58","\x70"),
	HX_HCSTRING("lime_gl_bind_renderbuffer","\xa8","\x70","\xea","\x63"),
	HX_HCSTRING("lime_gl_bind_texture","\x49","\x36","\xa3","\x88"),
	HX_HCSTRING("lime_gl_blend_color","\x85","\xd0","\xce","\x3a"),
	HX_HCSTRING("lime_gl_blend_equation","\xaa","\xfd","\x08","\x1f"),
	HX_HCSTRING("lime_gl_blend_equation_separate","\xd8","\x13","\x95","\x58"),
	HX_HCSTRING("lime_gl_blend_func","\x62","\x46","\x02","\xe9"),
	HX_HCSTRING("lime_gl_blend_func_separate","\x20","\xf4","\xb8","\x2e"),
	HX_HCSTRING("lime_gl_buffer_data","\xd9","\x31","\x40","\x74"),
	HX_HCSTRING("lime_gl_buffer_sub_data","\xb8","\x37","\x6c","\xab"),
	HX_HCSTRING("lime_gl_check_framebuffer_status","\x0b","\x35","\xe1","\xea"),
	HX_HCSTRING("lime_gl_clear","\x5d","\x92","\x00","\x3b"),
	HX_HCSTRING("lime_gl_clear_color","\xc1","\xee","\x49","\x1a"),
	HX_HCSTRING("lime_gl_clear_depthf","\xe5","\x26","\x69","\x8d"),
	HX_HCSTRING("lime_gl_clear_stencil","\xda","\xce","\x51","\x44"),
	HX_HCSTRING("lime_gl_color_mask","\xb8","\xf1","\xa7","\x79"),
	HX_HCSTRING("lime_gl_compile_shader","\xe1","\xd4","\x68","\x7c"),
	HX_HCSTRING("lime_gl_compressed_tex_image_2d","\xbc","\x70","\xb8","\x76"),
	HX_HCSTRING("lime_gl_compressed_tex_sub_image_2d","\x9b","\x19","\x2d","\x07"),
	HX_HCSTRING("lime_gl_copy_tex_image_2d","\x08","\x15","\x17","\x3a"),
	HX_HCSTRING("lime_gl_copy_tex_sub_image_2d","\xe7","\xd3","\x21","\x4b"),
	HX_HCSTRING("lime_gl_create_buffer","\xf3","\xef","\xe7","\x8a"),
	HX_HCSTRING("lime_gl_create_framebuffer","\x1a","\x51","\xd8","\x73"),
	HX_HCSTRING("lime_gl_create_program","\x31","\xac","\x72","\x42"),
	HX_HCSTRING("lime_gl_create_renderbuffer","\x09","\xb8","\xfa","\x6f"),
	HX_HCSTRING("lime_gl_create_shader","\x18","\xf2","\x73","\xd7"),
	HX_HCSTRING("lime_gl_create_texture","\x88","\x2a","\x5a","\xed"),
	HX_HCSTRING("lime_gl_cull_face","\x5a","\x6e","\xd7","\xa6"),
	HX_HCSTRING("lime_gl_delete_buffer","\xa4","\xaa","\x2e","\x01"),
	HX_HCSTRING("lime_gl_delete_framebuffer","\xc9","\x34","\x1a","\xa6"),
	HX_HCSTRING("lime_gl_delete_program","\x60","\x4c","\x0f","\x4a"),
	HX_HCSTRING("lime_gl_delete_renderbuffer","\x7a","\x0d","\x60","\x37"),
	HX_HCSTRING("lime_gl_delete_shader","\xc9","\xac","\xba","\x4d"),
	HX_HCSTRING("lime_gl_delete_texture","\xb7","\xca","\xf6","\xf4"),
	HX_HCSTRING("lime_gl_depth_func","\x70","\x78","\x16","\xad"),
	HX_HCSTRING("lime_gl_depth_mask","\x18","\xce","\xa7","\xb1"),
	HX_HCSTRING("lime_gl_depth_rangef","\x35","\x90","\x41","\x42"),
	HX_HCSTRING("lime_gl_detach_shader","\xa1","\x84","\x13","\xfd"),
	HX_HCSTRING("lime_gl_disable","\xb8","\x5e","\x23","\x70"),
	HX_HCSTRING("lime_gl_disable_vertex_attrib_array","\x58","\xba","\x8e","\x0a"),
	HX_HCSTRING("lime_gl_draw_arrays","\xa5","\x43","\x0c","\x17"),
	HX_HCSTRING("lime_gl_draw_elements","\xe2","\xd1","\x98","\xb9"),
	HX_HCSTRING("lime_gl_enable","\xb3","\x43","\x5f","\x56"),
	HX_HCSTRING("lime_gl_enable_vertex_attrib_array","\xd3","\x1e","\xa2","\xea"),
	HX_HCSTRING("lime_gl_finish","\x83","\xd5","\x56","\xe4"),
	HX_HCSTRING("lime_gl_flush","\x94","\x83","\x40","\xf5"),
	HX_HCSTRING("lime_gl_framebuffer_renderbuffer","\xd8","\x1b","\x4b","\x9a"),
	HX_HCSTRING("lime_gl_framebuffer_texture2D","\x2b","\xbd","\x7d","\x0a"),
	HX_HCSTRING("lime_gl_front_face","\x63","\xa0","\x73","\x7d"),
	HX_HCSTRING("lime_gl_generate_mipmap","\x62","\xa5","\x38","\xe6"),
	HX_HCSTRING("lime_gl_get_active_attrib","\x0a","\x40","\xb7","\xd1"),
	HX_HCSTRING("lime_gl_get_active_uniform","\x74","\x90","\xd7","\x2a"),
	HX_HCSTRING("lime_gl_get_attached_shaders","\xcc","\x1c","\xb8","\x0d"),
	HX_HCSTRING("lime_gl_get_attrib_location","\xf1","\x00","\xcb","\xa5"),
	HX_HCSTRING("lime_gl_get_boolean","\x8f","\xe7","\xa6","\x78"),
	HX_HCSTRING("lime_gl_get_booleanv","\x07","\xb6","\x63","\x19"),
	HX_HCSTRING("lime_gl_get_buffer_parameteri","\x66","\xb2","\x90","\xb3"),
	HX_HCSTRING("lime_gl_get_buffer_parameteriv","\x50","\x67","\x0b","\x6b"),
	HX_HCSTRING("lime_gl_get_context_attributes","\xe0","\xc6","\xc6","\x3e"),
	HX_HCSTRING("lime_gl_get_error","\xef","\xf0","\xe0","\xf5"),
	HX_HCSTRING("lime_gl_get_extension","\x26","\xd8","\x5e","\xd7"),
	HX_HCSTRING("lime_gl_get_float","\xc3","\xea","\x4d","\x85"),
	HX_HCSTRING("lime_gl_get_floatv","\x53","\x80","\xdf","\x1e"),
	HX_HCSTRING("lime_gl_get_framebuffer_attachment_parameteri","\x51","\x62","\xed","\x59"),
	HX_HCSTRING("lime_gl_get_framebuffer_attachment_parameteriv","\x05","\xa5","\xc8","\x55"),
	HX_HCSTRING("lime_gl_get_integer","\xa5","\xba","\xc3","\x11"),
	HX_HCSTRING("lime_gl_get_integerv","\x31","\x96","\x7f","\x79"),
	HX_HCSTRING("lime_gl_get_program_info_log","\x87","\x8b","\x1c","\x48"),
	HX_HCSTRING("lime_gl_get_programi","\x9e","\x36","\x7d","\xde"),
	HX_HCSTRING("lime_gl_get_programiv","\x18","\x94","\x12","\xcf"),
	HX_HCSTRING("lime_gl_get_renderbuffer_parameteri","\x90","\xdd","\x65","\xbc"),
	HX_HCSTRING("lime_gl_get_renderbuffer_parameteriv","\xe6","\x00","\xbc","\x1c"),
	HX_HCSTRING("lime_gl_get_shader_info_log","\x74","\x08","\x6b","\x9a"),
	HX_HCSTRING("lime_gl_get_shaderi","\x8b","\x7e","\x2e","\x5a"),
	HX_HCSTRING("lime_gl_get_shaderiv","\x8b","\x3b","\x80","\x8e"),
	HX_HCSTRING("lime_gl_get_shader_precision_format","\xd9","\x5f","\xb1","\x89"),
	HX_HCSTRING("lime_gl_get_shader_source","\x1c","\x86","\xa3","\xe7"),
	HX_HCSTRING("lime_gl_get_string","\xca","\x85","\xb9","\xee"),
	HX_HCSTRING("lime_gl_get_tex_parameterf","\x2e","\xb7","\x53","\xae"),
	HX_HCSTRING("lime_gl_get_tex_parameterfv","\x88","\x91","\xec","\xda"),
	HX_HCSTRING("lime_gl_get_tex_parameteri","\x31","\xb7","\x53","\xae"),
	HX_HCSTRING("lime_gl_get_tex_parameteriv","\x25","\x94","\xec","\xda"),
	HX_HCSTRING("lime_gl_get_uniformf","\xeb","\x19","\xaa","\x5a"),
	HX_HCSTRING("lime_gl_get_uniformfv","\x2b","\x94","\x2c","\xfa"),
	HX_HCSTRING("lime_gl_get_uniformi","\xee","\x19","\xaa","\x5a"),
	HX_HCSTRING("lime_gl_get_uniformiv","\xc8","\x96","\x2c","\xfa"),
	HX_HCSTRING("lime_gl_get_uniform_location","\x19","\x0c","\x33","\x6c"),
	HX_HCSTRING("lime_gl_get_vertex_attribi","\xbd","\x30","\x62","\x1b"),
	HX_HCSTRING("lime_gl_get_vertex_attribiv","\x19","\x75","\x88","\xda"),
	HX_HCSTRING("lime_gl_get_vertex_attrib_pointerv","\xcc","\x80","\x45","\xbc"),
	HX_HCSTRING("lime_gl_hint","\xb7","\x26","\x75","\xcc"),
	HX_HCSTRING("lime_gl_is_buffer","\xc5","\xec","\xc6","\xb4"),
	HX_HCSTRING("lime_gl_is_enabled","\x1c","\xa1","\xe8","\x45"),
	HX_HCSTRING("lime_gl_is_framebuffer","\x08","\x9b","\x19","\xab"),
	HX_HCSTRING("lime_gl_is_program","\x1f","\xe7","\xb0","\xbb"),
	HX_HCSTRING("lime_gl_is_renderbuffer","\x5b","\x1e","\xda","\x91"),
	HX_HCSTRING("lime_gl_is_shader","\xea","\xee","\x52","\x01"),
	HX_HCSTRING("lime_gl_is_texture","\x76","\x65","\x98","\x66"),
	HX_HCSTRING("lime_gl_line_width","\x6b","\x71","\x5f","\x53"),
	HX_HCSTRING("lime_gl_link_program","\x2f","\xdf","\xcf","\x33"),
	HX_HCSTRING("lime_gl_object_deregister","\x74","\xd8","\xa1","\xd6"),
	HX_HCSTRING("lime_gl_object_from_id","\x40","\xff","\x06","\x4e"),
	HX_HCSTRING("lime_gl_object_register","\xf3","\x13","\xaa","\x16"),
	HX_HCSTRING("lime_gl_pixel_storei","\x71","\xb2","\x56","\x3d"),
	HX_HCSTRING("lime_gl_polygon_offset","\x28","\x8f","\x6c","\xe3"),
	HX_HCSTRING("lime_gl_read_pixels","\x06","\x09","\x69","\xf5"),
	HX_HCSTRING("lime_gl_renderbuffer_storage","\xc2","\x94","\xf1","\x7b"),
	HX_HCSTRING("lime_gl_sample_coverage","\xad","\x98","\xc5","\x86"),
	HX_HCSTRING("lime_gl_scissor","\xec","\x1c","\xb2","\xc3"),
	HX_HCSTRING("lime_gl_shader_source","\xc5","\xd2","\xe2","\x7f"),
	HX_HCSTRING("lime_gl_stencil_func","\xd7","\xb0","\x4f","\x64"),
	HX_HCSTRING("lime_gl_stencil_func_separate","\x0b","\x13","\x77","\x19"),
	HX_HCSTRING("lime_gl_stencil_mask","\x7f","\x06","\xe1","\x68"),
	HX_HCSTRING("lime_gl_stencil_mask_separate","\x63","\xc8","\x71","\x65"),
	HX_HCSTRING("lime_gl_stencil_op","\xf4","\x8b","\x0c","\xa5"),
	HX_HCSTRING("lime_gl_stencil_op_separate","\x4e","\x6c","\x36","\x5e"),
	HX_HCSTRING("lime_gl_tex_image_2d","\x5e","\xab","\x7a","\x34"),
	HX_HCSTRING("lime_gl_tex_parameterf","\x65","\x7e","\x77","\x4d"),
	HX_HCSTRING("lime_gl_tex_parameteri","\x68","\x7e","\x77","\x4d"),
	HX_HCSTRING("lime_gl_tex_sub_image_2d","\x3d","\x4d","\x7e","\x52"),
	HX_HCSTRING("lime_gl_uniform1f","\x19","\xea","\xeb","\x46"),
	HX_HCSTRING("lime_gl_uniform1fv","\x3d","\xec","\x80","\xc7"),
	HX_HCSTRING("lime_gl_uniform1i","\x1c","\xea","\xeb","\x46"),
	HX_HCSTRING("lime_gl_uniform1iv","\xda","\xee","\x80","\xc7"),
	HX_HCSTRING("lime_gl_uniform2f","\xf8","\xea","\xeb","\x46"),
	HX_HCSTRING("lime_gl_uniform2fv","\x7e","\xae","\x81","\xc7"),
	HX_HCSTRING("lime_gl_uniform2i","\xfb","\xea","\xeb","\x46"),
	HX_HCSTRING("lime_gl_uniform2iv","\x1b","\xb1","\x81","\xc7"),
	HX_HCSTRING("lime_gl_uniform3f","\xd7","\xeb","\xeb","\x46"),
	HX_HCSTRING("lime_gl_uniform3fv","\xbf","\x70","\x82","\xc7"),
	HX_HCSTRING("lime_gl_uniform3i","\xda","\xeb","\xeb","\x46"),
	HX_HCSTRING("lime_gl_uniform3iv","\x5c","\x73","\x82","\xc7"),
	HX_HCSTRING("lime_gl_uniform4f","\xb6","\xec","\xeb","\x46"),
	HX_HCSTRING("lime_gl_uniform4fv","\x00","\x33","\x83","\xc7"),
	HX_HCSTRING("lime_gl_uniform4i","\xb9","\xec","\xeb","\x46"),
	HX_HCSTRING("lime_gl_uniform4iv","\x9d","\x35","\x83","\xc7"),
	HX_HCSTRING("lime_gl_uniform_matrix2fv","\x26","\x91","\x85","\x1c"),
	HX_HCSTRING("lime_gl_uniform_matrix3fv","\x67","\x53","\x86","\x1c"),
	HX_HCSTRING("lime_gl_uniform_matrix4fv","\xa8","\x15","\x87","\x1c"),
	HX_HCSTRING("lime_gl_use_program","\x1c","\x8c","\xb8","\x22"),
	HX_HCSTRING("lime_gl_validate_program","\xcb","\xeb","\x10","\x5b"),
	HX_HCSTRING("lime_gl_vertex_attrib1f","\x2a","\xcd","\xb2","\x7a"),
	HX_HCSTRING("lime_gl_vertex_attrib1fv","\x0c","\xb8","\xc0","\xe1"),
	HX_HCSTRING("lime_gl_vertex_attrib2f","\x09","\xce","\xb2","\x7a"),
	HX_HCSTRING("lime_gl_vertex_attrib2fv","\x4d","\x7a","\xc1","\xe1"),
	HX_HCSTRING("lime_gl_vertex_attrib3f","\xe8","\xce","\xb2","\x7a"),
	HX_HCSTRING("lime_gl_vertex_attrib3fv","\x8e","\x3c","\xc2","\xe1"),
	HX_HCSTRING("lime_gl_vertex_attrib4f","\xc7","\xcf","\xb2","\x7a"),
	HX_HCSTRING("lime_gl_vertex_attrib4fv","\xcf","\xfe","\xc2","\xe1"),
	HX_HCSTRING("lime_gl_vertex_attrib_pointer","\x13","\xfa","\x74","\x15"),
	HX_HCSTRING("lime_gl_viewport","\x96","\x8d","\x70","\xcf"),
	HX_HCSTRING("lime_vorbis_file_bitrate","\x6c","\xc8","\x60","\xd8"),
	HX_HCSTRING("lime_vorbis_file_bitrate_instant","\xce","\x44","\x94","\x97"),
	HX_HCSTRING("lime_vorbis_file_clear","\x0c","\xe6","\xc6","\x1a"),
	HX_HCSTRING("lime_vorbis_file_comment","\x9e","\x4c","\x01","\x5d"),
	HX_HCSTRING("lime_vorbis_file_crosslap","\xbc","\xbd","\x3f","\xcb"),
	HX_HCSTRING("lime_vorbis_file_from_bytes","\xb7","\xbf","\x11","\x7f"),
	HX_HCSTRING("lime_vorbis_file_from_file","\xb0","\x84","\x41","\x97"),
	HX_HCSTRING("lime_vorbis_file_info","\xcf","\x18","\x14","\x61"),
	HX_HCSTRING("lime_vorbis_file_pcm_seek","\xde","\xf4","\x4d","\xf2"),
	HX_HCSTRING("lime_vorbis_file_pcm_seek_lap","\x3a","\x49","\x6a","\x74"),
	HX_HCSTRING("lime_vorbis_file_pcm_seek_page","\x90","\x9c","\x3a","\x6b"),
	HX_HCSTRING("lime_vorbis_file_pcm_seek_page_lap","\xec","\xb1","\x89","\x3b"),
	HX_HCSTRING("lime_vorbis_file_raw_seek","\x50","\x87","\x19","\x11"),
	HX_HCSTRING("lime_vorbis_file_raw_seek_lap","\xac","\xfc","\x14","\x79"),
	HX_HCSTRING("lime_vorbis_file_pcm_tell","\x97","\x31","\xf7","\xf2"),
	HX_HCSTRING("lime_vorbis_file_pcm_total","\x9e","\x5d","\xf6","\xab"),
	HX_HCSTRING("lime_vorbis_file_raw_tell","\x09","\xc4","\xc2","\x11"),
	HX_HCSTRING("lime_vorbis_file_raw_total","\xec","\xee","\x4a","\x7f"),
	HX_HCSTRING("lime_vorbis_file_read","\xb7","\x2b","\x00","\x67"),
	HX_HCSTRING("lime_vorbis_file_read_float","\xd4","\x5b","\x48","\x7a"),
	HX_HCSTRING("lime_vorbis_file_seekable","\xf3","\x33","\x1c","\x9b"),
	HX_HCSTRING("lime_vorbis_file_serial_number","\x73","\xa0","\x0a","\x65"),
	HX_HCSTRING("lime_vorbis_file_streams","\x32","\xae","\xd5","\xd1"),
	HX_HCSTRING("lime_vorbis_file_time_seek","\x29","\x26","\x3e","\xa0"),
	HX_HCSTRING("lime_vorbis_file_time_seek_lap","\x05","\x7c","\xd4","\xab"),
	HX_HCSTRING("lime_vorbis_file_time_seek_page","\x65","\xdb","\xbc","\xb0"),
	HX_HCSTRING("lime_vorbis_file_time_seek_page_lap","\x41","\x7f","\x5c","\xe6"),
	HX_HCSTRING("lime_vorbis_file_time_tell","\xe2","\x62","\xe7","\xa0"),
	HX_HCSTRING("lime_vorbis_file_time_total","\xf3","\x4d","\x31","\x30"),
	HX_HCSTRING("cffi_lime_application_create","\x9c","\x71","\x49","\x96"),
	HX_HCSTRING("cffi_lime_application_event_manager_register","\x5a","\x89","\x33","\xc0"),
	HX_HCSTRING("cffi_lime_application_exec","\x31","\x16","\x12","\x9e"),
	HX_HCSTRING("cffi_lime_application_init","\xb0","\x5d","\xaf","\xa0"),
	HX_HCSTRING("cffi_lime_application_quit","\x6f","\x62","\xfe","\xa5"),
	HX_HCSTRING("cffi_lime_application_set_frame_rate","\xcf","\x4e","\xf9","\x0d"),
	HX_HCSTRING("cffi_lime_application_update","\xa9","\x90","\x3f","\xa1"),
	HX_HCSTRING("cffi_lime_audio_load","\xc0","\xd6","\x0b","\xc1"),
	HX_HCSTRING("cffi_lime_bytes_from_data_pointer","\x98","\x81","\xca","\x81"),
	HX_HCSTRING("cffi_lime_bytes_get_data_pointer","\x56","\xeb","\xe8","\x02"),
	HX_HCSTRING("cffi_lime_bytes_get_data_pointer_offset","\x9c","\x74","\x83","\xfe"),
	HX_HCSTRING("cffi_lime_bytes_read_file","\x40","\x58","\x83","\x5f"),
	HX_HCSTRING("cffi_lime_cffi_get_native_pointer","\xe6","\x38","\xa0","\xf9"),
	HX_HCSTRING("cffi_lime_clipboard_get_text","\x50","\x49","\x61","\xdf"),
	HX_HCSTRING("cffi_lime_clipboard_set_text","\xc4","\xa2","\xbe","\x8d"),
	HX_HCSTRING("cffi_lime_data_pointer_offset","\x59","\x08","\xa4","\x47"),
	HX_HCSTRING("cffi_lime_deflate_compress","\x47","\xa2","\x02","\x3b"),
	HX_HCSTRING("cffi_lime_deflate_decompress","\x08","\x96","\xdf","\x6c"),
	HX_HCSTRING("cffi_lime_drop_event_manager_register","\x99","\xbf","\x28","\x6d"),
	HX_HCSTRING("cffi_lime_file_dialog_open_directory","\x5d","\xaf","\x2b","\xd2"),
	HX_HCSTRING("cffi_lime_file_dialog_open_file","\x8c","\x37","\x2e","\x23"),
	HX_HCSTRING("cffi_lime_file_dialog_open_files","\x67","\x63","\x42","\xa5"),
	HX_HCSTRING("cffi_lime_file_dialog_save_file","\x39","\xcf","\xb5","\x3e"),
	HX_HCSTRING("cffi_lime_font_get_ascender","\xbf","\xa6","\x45","\xba"),
	HX_HCSTRING("cffi_lime_font_get_descender","\x8f","\x0d","\x5f","\x3f"),
	HX_HCSTRING("cffi_lime_font_get_family_name","\x7e","\xb2","\x6a","\x33"),
	HX_HCSTRING("cffi_lime_font_get_glyph_index","\x77","\x1f","\x95","\x21"),
	HX_HCSTRING("cffi_lime_font_get_glyph_indices","\xcc","\x6e","\x4a","\x8b"),
	HX_HCSTRING("cffi_lime_font_get_glyph_metrics","\xe8","\xc9","\xca","\xd4"),
	HX_HCSTRING("cffi_lime_font_get_height","\x6f","\xe4","\xaa","\xa1"),
	HX_HCSTRING("cffi_lime_font_get_num_glyphs","\xe8","\xe1","\x1a","\x9c"),
	HX_HCSTRING("cffi_lime_font_get_underline_position","\x04","\x0a","\x6e","\x56"),
	HX_HCSTRING("cffi_lime_font_get_underline_thickness","\xb9","\xb7","\xef","\xd3"),
	HX_HCSTRING("cffi_lime_font_get_units_per_em","\x62","\xf8","\x84","\x3e"),
	HX_HCSTRING("cffi_lime_font_load","\xa5","\xdd","\x94","\x73"),
	HX_HCSTRING("cffi_lime_font_outline_decompose","\x95","\xc6","\xee","\xdc"),
	HX_HCSTRING("cffi_lime_font_render_glyph","\x42","\x2f","\xc9","\x71"),
	HX_HCSTRING("cffi_lime_font_render_glyphs","\xf1","\x2a","\x40","\x1e"),
	HX_HCSTRING("cffi_lime_font_set_size","\xbd","\x24","\x8a","\x51"),
	HX_HCSTRING("cffi_lime_gamepad_add_mappings","\xf2","\x1c","\x61","\x57"),
	HX_HCSTRING("cffi_lime_gamepad_get_device_guid","\xda","\x49","\xe7","\x1e"),
	HX_HCSTRING("cffi_lime_gamepad_get_device_name","\x9c","\x9e","\x78","\x23"),
	HX_HCSTRING("cffi_lime_gamepad_event_manager_register","\xa9","\x21","\x63","\x7c"),
	HX_HCSTRING("cffi_lime_gzip_compress","\x36","\xf2","\x55","\xee"),
	HX_HCSTRING("cffi_lime_gzip_decompress","\xb7","\xff","\x99","\x17"),
	HX_HCSTRING("cffi_lime_haptic_vibrate","\xd8","\xc4","\x18","\xcb"),
	HX_HCSTRING("cffi_lime_image_encode","\x4b","\x6d","\x81","\x82"),
	HX_HCSTRING("cffi_lime_image_load","\x1b","\x6e","\x80","\x2d"),
	HX_HCSTRING("cffi_lime_image_data_util_color_transform","\x33","\xb4","\x2f","\xf1"),
	HX_HCSTRING("cffi_lime_image_data_util_copy_channel","\x36","\xf7","\xde","\x9a"),
	HX_HCSTRING("cffi_lime_image_data_util_copy_pixels","\x1a","\xc8","\x5a","\xd9"),
	HX_HCSTRING("cffi_lime_image_data_util_fill_rect","\x43","\x23","\xe6","\xb7"),
	HX_HCSTRING("cffi_lime_image_data_util_flood_fill","\xe1","\x32","\x7e","\xe2"),
	HX_HCSTRING("cffi_lime_image_data_util_get_pixels","\xf3","\x89","\x00","\xfd"),
	HX_HCSTRING("cffi_lime_image_data_util_merge","\xdb","\x58","\xe1","\x59"),
	HX_HCSTRING("cffi_lime_image_data_util_multiply_alpha","\x40","\xf1","\xf1","\x88"),
	HX_HCSTRING("cffi_lime_image_data_util_resize","\x71","\x02","\xc0","\x4b"),
	HX_HCSTRING("cffi_lime_image_data_util_set_format","\x71","\xc8","\x62","\x71"),
	HX_HCSTRING("cffi_lime_image_data_util_set_pixels","\x67","\x28","\x7e","\x00"),
	HX_HCSTRING("cffi_lime_image_data_util_threshold","\x4e","\xc7","\x57","\xb2"),
	HX_HCSTRING("cffi_lime_image_data_util_unmultiply_alpha","\x99","\x7a","\x47","\x65"),
	HX_HCSTRING("cffi_lime_joystick_get_device_guid","\xf7","\xbc","\x8f","\xdf"),
	HX_HCSTRING("cffi_lime_joystick_get_device_name","\xb9","\x11","\x21","\xe4"),
	HX_HCSTRING("cffi_lime_joystick_get_num_axes","\xf9","\x67","\x04","\x0c"),
	HX_HCSTRING("cffi_lime_joystick_get_num_buttons","\xed","\xff","\x8f","\xa2"),
	HX_HCSTRING("cffi_lime_joystick_get_num_hats","\x8c","\x7f","\x93","\x10"),
	HX_HCSTRING("cffi_lime_joystick_get_num_trackballs","\xfd","\xdc","\xcd","\xc7"),
	HX_HCSTRING("cffi_lime_joystick_event_manager_register","\x2c","\xfc","\xb5","\xc4"),
	HX_HCSTRING("cffi_lime_jpeg_decode_bytes","\x60","\xb5","\xa0","\x2b"),
	HX_HCSTRING("cffi_lime_jpeg_decode_file","\x27","\xb7","\x3e","\xc8"),
	HX_HCSTRING("cffi_lime_key_code_from_scan_code","\x5b","\xb0","\x3e","\xae"),
	HX_HCSTRING("cffi_lime_key_code_to_scan_code","\x6c","\x4d","\xc6","\x92"),
	HX_HCSTRING("cffi_lime_key_event_manager_register","\xeb","\x5b","\x98","\x27"),
	HX_HCSTRING("cffi_lime_lzma_compress","\xae","\x0c","\x35","\x0a"),
	HX_HCSTRING("cffi_lime_lzma_decompress","\x2f","\xa8","\x4e","\x3d"),
	HX_HCSTRING("cffi_lime_mouse_hide","\xad","\x35","\xd6","\x3c"),
	HX_HCSTRING("cffi_lime_mouse_set_cursor","\x3e","\xa0","\xe9","\x5c"),
	HX_HCSTRING("cffi_lime_mouse_set_lock","\x53","\x03","\xc2","\x40"),
	HX_HCSTRING("cffi_lime_mouse_show","\xe8","\xd5","\x1a","\x44"),
	HX_HCSTRING("cffi_lime_mouse_warp","\x33","\x63","\xba","\x46"),
	HX_HCSTRING("cffi_lime_mouse_event_manager_register","\x65","\xd6","\x2b","\xe0"),
	HX_HCSTRING("cffi_lime_neko_execute","\xe2","\x87","\x42","\xeb"),
	HX_HCSTRING("cffi_lime_png_decode_bytes","\x01","\x38","\x28","\xe2"),
	HX_HCSTRING("cffi_lime_png_decode_file","\xa6","\x23","\x36","\xca"),
	HX_HCSTRING("cffi_lime_renderer_create","\xc7","\x6a","\x82","\x36"),
	HX_HCSTRING("cffi_lime_renderer_flip","\xb8","\xfd","\x97","\xe3"),
	HX_HCSTRING("cffi_lime_renderer_get_context","\x5b","\x52","\xa6","\x60"),
	HX_HCSTRING("cffi_lime_renderer_get_scale","\xf6","\x57","\xb7","\x4d"),
	HX_HCSTRING("cffi_lime_renderer_get_type","\xce","\x7a","\xd7","\x4c"),
	HX_HCSTRING("cffi_lime_renderer_lock","\xf6","\x86","\x91","\xe7"),
	HX_HCSTRING("cffi_lime_renderer_make_current","\xb3","\x3b","\x5f","\xbd"),
	HX_HCSTRING("cffi_lime_renderer_read_pixels","\x8b","\xc8","\xef","\x41"),
	HX_HCSTRING("cffi_lime_renderer_unlock","\x8f","\xa6","\xff","\x1f"),
	HX_HCSTRING("cffi_lime_render_event_manager_register","\x12","\x53","\xd3","\xec"),
	HX_HCSTRING("cffi_lime_sensor_event_manager_register","\xae","\xe8","\xbc","\x0e"),
	HX_HCSTRING("cffi_lime_system_get_allow_screen_timeout","\xec","\x70","\x0c","\x2b"),
	HX_HCSTRING("cffi_lime_system_set_allow_screen_timeout","\x60","\xf2","\xe6","\x3d"),
	HX_HCSTRING("cffi_lime_system_get_directory","\x45","\x82","\xbc","\xfa"),
	HX_HCSTRING("cffi_lime_system_get_display","\x1a","\x94","\xb1","\xad"),
	HX_HCSTRING("cffi_lime_system_get_ios_tablet","\x40","\xa9","\xdb","\x2f"),
	HX_HCSTRING("cffi_lime_system_get_num_displays","\x72","\xd7","\xff","\x40"),
	HX_HCSTRING("cffi_lime_system_get_timer","\x9d","\x83","\x02","\x23"),
	HX_HCSTRING("cffi_lime_system_open_file","\xd2","\x51","\xe8","\xa5"),
	HX_HCSTRING("cffi_lime_system_open_url","\xd9","\xe4","\x2e","\x59"),
	HX_HCSTRING("cffi_lime_text_event_manager_register","\xdb","\xfa","\x47","\x8b"),
	HX_HCSTRING("cffi_lime_text_layout_create","\x30","\x9f","\x85","\x5c"),
	HX_HCSTRING("cffi_lime_text_layout_position","\xdd","\x4d","\x96","\x5f"),
	HX_HCSTRING("cffi_lime_text_layout_set_direction","\x6e","\x0e","\x2a","\x78"),
	HX_HCSTRING("cffi_lime_text_layout_set_language","\x09","\xaf","\x70","\x05"),
	HX_HCSTRING("cffi_lime_text_layout_set_script","\x7c","\xbe","\x2d","\xf0"),
	HX_HCSTRING("cffi_lime_touch_event_manager_register","\x0b","\xc8","\x9c","\xeb"),
	HX_HCSTRING("cffi_lime_window_alert","\x1e","\xde","\x00","\xa8"),
	HX_HCSTRING("cffi_lime_window_close","\x7a","\x9e","\xd5","\xce"),
	HX_HCSTRING("cffi_lime_window_create","\xfa","\xc9","\xd2","\x99"),
	HX_HCSTRING("cffi_lime_window_focus","\x9a","\xe6","\xfb","\x8a"),
	HX_HCSTRING("cffi_lime_window_get_display","\x9b","\x8e","\xa3","\xe8"),
	HX_HCSTRING("cffi_lime_window_get_display_mode","\xc7","\x8e","\x7c","\x8a"),
	HX_HCSTRING("cffi_lime_window_get_enable_text_events","\xf6","\x00","\x95","\xd8"),
	HX_HCSTRING("cffi_lime_window_get_height","\xae","\x31","\xb7","\x32"),
	HX_HCSTRING("cffi_lime_window_get_id","\x22","\x56","\xf3","\xc0"),
	HX_HCSTRING("cffi_lime_window_get_width","\x1f","\x22","\xf6","\x1a"),
	HX_HCSTRING("cffi_lime_window_get_x","\x11","\x2c","\xd3","\x17"),
	HX_HCSTRING("cffi_lime_window_get_y","\x12","\x2c","\xd3","\x17"),
	HX_HCSTRING("cffi_lime_window_move","\x8f","\xea","\x74","\x73"),
	HX_HCSTRING("cffi_lime_window_resize","\xf2","\xbc","\x3e","\x26"),
	HX_HCSTRING("cffi_lime_window_set_borderless","\x00","\x48","\x02","\x7c"),
	HX_HCSTRING("cffi_lime_window_set_display_mode","\x3b","\x7c","\xbe","\xe0"),
	HX_HCSTRING("cffi_lime_window_set_enable_text_events","\x6a","\x7d","\x40","\x0c"),
	HX_HCSTRING("cffi_lime_window_set_fullscreen","\xf6","\x3b","\x45","\x5e"),
	HX_HCSTRING("cffi_lime_window_set_icon","\xf4","\x9a","\x6b","\x13"),
	HX_HCSTRING("cffi_lime_window_set_maximized","\xbd","\xdc","\xa4","\x85"),
	HX_HCSTRING("cffi_lime_window_set_minimized","\x2b","\xca","\x61","\xaf"),
	HX_HCSTRING("cffi_lime_window_set_resizable","\x10","\x06","\x14","\x30"),
	HX_HCSTRING("cffi_lime_window_set_title","\xbd","\x6d","\x1f","\x44"),
	HX_HCSTRING("cffi_lime_window_event_manager_register","\xb8","\xfd","\x73","\x0b"),
	HX_HCSTRING("cffi_lime_zlib_compress","\xe5","\xb5","\x14","\xff"),
	HX_HCSTRING("cffi_lime_zlib_decompress","\x26","\x4d","\x54","\xe8"),
	HX_HCSTRING("cffi_lime_al_buffer_data","\x46","\xaa","\xce","\x29"),
	HX_HCSTRING("cffi_lime_al_buffer3f","\x76","\x1c","\xa3","\x02"),
	HX_HCSTRING("cffi_lime_al_buffer3i","\x79","\x1c","\xa3","\x02"),
	HX_HCSTRING("cffi_lime_al_bufferf","\x23","\x16","\x70","\x7f"),
	HX_HCSTRING("cffi_lime_al_bufferfv","\xf3","\x48","\xa3","\x02"),
	HX_HCSTRING("cffi_lime_al_bufferi","\x26","\x16","\x70","\x7f"),
	HX_HCSTRING("cffi_lime_al_bufferiv","\x90","\x4b","\xa3","\x02"),
	HX_HCSTRING("cffi_lime_al_delete_buffer","\x51","\xd8","\x9d","\x11"),
	HX_HCSTRING("cffi_lime_al_delete_buffers","\x02","\x6f","\x7f","\x58"),
	HX_HCSTRING("cffi_lime_al_delete_source","\x2c","\xcc","\x3a","\x73"),
	HX_HCSTRING("cffi_lime_al_delete_sources","\xc7","\xda","\x37","\x60"),
	HX_HCSTRING("cffi_lime_al_disable","\xa5","\xdc","\x37","\x7f"),
	HX_HCSTRING("cffi_lime_al_distance_model","\xc2","\xe2","\x2b","\x91"),
	HX_HCSTRING("cffi_lime_al_doppler_factor","\xa3","\x68","\xef","\x7f"),
	HX_HCSTRING("cffi_lime_al_doppler_velocity","\xf1","\x6e","\xd2","\xd2"),
	HX_HCSTRING("cffi_lime_al_enable","\x66","\xa2","\xdd","\xd5"),
	HX_HCSTRING("cffi_lime_al_gen_source","\x4d","\x95","\x4b","\x8a"),
	HX_HCSTRING("cffi_lime_al_gen_sources","\x86","\x0e","\xd7","\x77"),
	HX_HCSTRING("cffi_lime_al_get_boolean","\xfc","\x5f","\x35","\x2e"),
	HX_HCSTRING("cffi_lime_al_get_booleanv","\xfa","\x9c","\x7e","\x40"),
	HX_HCSTRING("cffi_lime_al_gen_buffer","\x72","\xa1","\xae","\x28"),
	HX_HCSTRING("cffi_lime_al_gen_buffers","\xc1","\xa2","\x1e","\x70"),
	HX_HCSTRING("cffi_lime_al_get_buffer3f","\xff","\x5d","\x6e","\x2c"),
	HX_HCSTRING("cffi_lime_al_get_buffer3i","\x02","\x5e","\x6e","\x2c"),
	HX_HCSTRING("cffi_lime_al_get_bufferf","\xba","\x18","\xc7","\x61"),
	HX_HCSTRING("cffi_lime_al_get_bufferfv","\x7c","\x8a","\x6e","\x2c"),
	HX_HCSTRING("cffi_lime_al_get_bufferi","\xbd","\x18","\xc7","\x61"),
	HX_HCSTRING("cffi_lime_al_get_bufferiv","\x19","\x8d","\x6e","\x2c"),
	HX_HCSTRING("cffi_lime_al_get_double","\x3d","\xbc","\x13","\xe2"),
	HX_HCSTRING("cffi_lime_al_get_doublev","\x99","\xf9","\x30","\xef"),
	HX_HCSTRING("cffi_lime_al_get_enum_value","\x9f","\x7f","\x74","\xea"),
	HX_HCSTRING("cffi_lime_al_get_error","\x1c","\x84","\x82","\x51"),
	HX_HCSTRING("cffi_lime_al_get_float","\xf0","\x7d","\xef","\xe0"),
	HX_HCSTRING("cffi_lime_al_get_floatv","\x86","\xb4","\x9e","\xf0"),
	HX_HCSTRING("cffi_lime_al_get_integer","\x12","\x33","\x52","\xc7"),
	HX_HCSTRING("cffi_lime_al_get_integerv","\x24","\x7d","\x9a","\xa0"),
	HX_HCSTRING("cffi_lime_al_get_listener3f","\x73","\xc9","\x10","\x8c"),
	HX_HCSTRING("cffi_lime_al_get_listener3i","\x76","\xc9","\x10","\x8c"),
	HX_HCSTRING("cffi_lime_al_get_listenerf","\xc6","\xd7","\x4b","\xf6"),
	HX_HCSTRING("cffi_lime_al_get_listenerfv","\xf0","\xf5","\x10","\x8c"),
	HX_HCSTRING("cffi_lime_al_get_listeneri","\xc9","\xd7","\x4b","\xf6"),
	HX_HCSTRING("cffi_lime_al_get_listeneriv","\x8d","\xf8","\x10","\x8c"),
	HX_HCSTRING("cffi_lime_al_get_proc_address","\xf7","\xd2","\x70","\x14"),
	HX_HCSTRING("cffi_lime_al_get_source3f","\x9a","\x3e","\x14","\xe6"),
	HX_HCSTRING("cffi_lime_al_get_source3i","\x9d","\x3e","\x14","\xe6"),
	HX_HCSTRING("cffi_lime_al_get_sourcef","\x7f","\x84","\x7f","\x69"),
	HX_HCSTRING("cffi_lime_al_get_sourcefv","\x17","\x6b","\x14","\xe6"),
	HX_HCSTRING("cffi_lime_al_get_sourcei","\x82","\x84","\x7f","\x69"),
	HX_HCSTRING("cffi_lime_al_get_sourceiv","\xb4","\x6d","\x14","\xe6"),
	HX_HCSTRING("cffi_lime_al_get_string","\xfd","\xb9","\x78","\xc0"),
	HX_HCSTRING("cffi_lime_al_is_buffer","\xf2","\x7f","\x68","\x10"),
	HX_HCSTRING("cffi_lime_al_is_enabled","\x4f","\xd5","\xa7","\x17"),
	HX_HCSTRING("cffi_lime_al_is_extension_present","\x49","\x5d","\xc8","\xe0"),
	HX_HCSTRING("cffi_lime_al_is_source","\xcd","\x73","\x05","\x72"),
	HX_HCSTRING("cffi_lime_al_listener3f","\xaa","\x53","\xcb","\xe7"),
	HX_HCSTRING("cffi_lime_al_listener3i","\xad","\x53","\xcb","\xe7"),
	HX_HCSTRING("cffi_lime_al_listenerf","\x6f","\xc1","\x3d","\x8e"),
	HX_HCSTRING("cffi_lime_al_listenerfv","\x27","\x80","\xcb","\xe7"),
	HX_HCSTRING("cffi_lime_al_listeneri","\x72","\xc1","\x3d","\x8e"),
	HX_HCSTRING("cffi_lime_al_listeneriv","\xc4","\x82","\xcb","\xe7"),
	HX_HCSTRING("cffi_lime_al_source_pause","\x75","\xe5","\x07","\x45"),
	HX_HCSTRING("cffi_lime_al_source_pausev","\x61","\xe1","\xe0","\x21"),
	HX_HCSTRING("cffi_lime_al_source_play","\x55","\xb4","\x7f","\xc3"),
	HX_HCSTRING("cffi_lime_al_source_playv","\x81","\x16","\x3e","\x4c"),
	HX_HCSTRING("cffi_lime_al_source_queue_buffers","\x04","\x29","\xf6","\x45"),
	HX_HCSTRING("cffi_lime_al_source_rewind","\x9c","\xca","\x7c","\x3d"),
	HX_HCSTRING("cffi_lime_al_source_rewindv","\x5a","\x7e","\xb4","\x8f"),
	HX_HCSTRING("cffi_lime_al_source_stop","\x63","\x76","\x81","\xc5"),
	HX_HCSTRING("cffi_lime_al_source_stopv","\xb3","\x20","\xc6","\x0b"),
	HX_HCSTRING("cffi_lime_al_source_unqueue_buffers","\xcb","\x9c","\x23","\x8e"),
	HX_HCSTRING("cffi_lime_al_source3f","\x11","\xfd","\x48","\xbc"),
	HX_HCSTRING("cffi_lime_al_source3i","\x14","\xfd","\x48","\xbc"),
	HX_HCSTRING("cffi_lime_al_sourcef","\xe8","\x81","\x28","\x87"),
	HX_HCSTRING("cffi_lime_al_sourcefv","\x8e","\x29","\x49","\xbc"),
	HX_HCSTRING("cffi_lime_al_sourcei","\xeb","\x81","\x28","\x87"),
	HX_HCSTRING("cffi_lime_al_sourceiv","\x2b","\x2c","\x49","\xbc"),
	HX_HCSTRING("cffi_lime_al_speed_of_sound","\x42","\x66","\x38","\xed"),
	HX_HCSTRING("cffi_lime_alc_close_device","\x55","\x3c","\xec","\x8c"),
	HX_HCSTRING("cffi_lime_alc_create_context","\x44","\x97","\xb5","\xb3"),
	HX_HCSTRING("cffi_lime_alc_destroy_context","\x92","\xfe","\xcd","\x00"),
	HX_HCSTRING("cffi_lime_alc_get_contexts_device","\x50","\x2a","\x77","\xd8"),
	HX_HCSTRING("cffi_lime_alc_get_current_context","\xe8","\x47","\xb9","\x3a"),
	HX_HCSTRING("cffi_lime_alc_get_error","\x47","\x72","\xb0","\xd4"),
	HX_HCSTRING("cffi_lime_alc_get_integerv","\xd9","\x7b","\xc1","\x04"),
	HX_HCSTRING("cffi_lime_alc_get_string","\x72","\x31","\x7b","\x05"),
	HX_HCSTRING("cffi_lime_alc_make_context_current","\xf0","\x61","\x12","\x68"),
	HX_HCSTRING("cffi_lime_alc_open_device","\xd3","\x7b","\x41","\xf5"),
	HX_HCSTRING("cffi_lime_alc_pause_device","\xd7","\x00","\xd5","\xdb"),
	HX_HCSTRING("cffi_lime_alc_process_context","\x07","\x71","\xe4","\xee"),
	HX_HCSTRING("cffi_lime_alc_resume_device","\x50","\x42","\x22","\x87"),
	HX_HCSTRING("cffi_lime_alc_suspend_context","\x14","\x53","\x00","\x46"),
	HX_HCSTRING("cffi_lime_cairo_arc","\xaa","\x4b","\x23","\x6b"),
	HX_HCSTRING("cffi_lime_cairo_arc_negative","\xea","\x0c","\xe7","\xb3"),
	HX_HCSTRING("cffi_lime_cairo_clip","\x78","\xce","\x0c","\x55"),
	HX_HCSTRING("cffi_lime_cairo_clip_preserve","\xb3","\x05","\x42","\x67"),
	HX_HCSTRING("cffi_lime_cairo_clip_extents","\x42","\x3b","\xc9","\x0e"),
	HX_HCSTRING("cffi_lime_cairo_close_path","\x74","\x7c","\x08","\x9d"),
	HX_HCSTRING("cffi_lime_cairo_copy_page","\xb1","\x89","\xe2","\xc3"),
	HX_HCSTRING("cffi_lime_cairo_create","\xa4","\x00","\x6f","\xbe"),
	HX_HCSTRING("cffi_lime_cairo_curve_to","\xf3","\x59","\x8b","\x35"),
	HX_HCSTRING("cffi_lime_cairo_fill","\x2b","\x2e","\x06","\x57"),
	HX_HCSTRING("cffi_lime_cairo_fill_extents","\xf5","\x05","\x86","\x46"),
	HX_HCSTRING("cffi_lime_cairo_fill_preserve","\xa0","\x97","\xb6","\xf4"),
	HX_HCSTRING("cffi_lime_cairo_get_antialias","\xdd","\x15","\x1e","\x3e"),
	HX_HCSTRING("cffi_lime_cairo_get_current_point","\x39","\x0b","\xd4","\xb1"),
	HX_HCSTRING("cffi_lime_cairo_get_dash","\x83","\x64","\xd5","\x0e"),
	HX_HCSTRING("cffi_lime_cairo_get_dash_count","\xd3","\xb4","\xbe","\x4c"),
	HX_HCSTRING("cffi_lime_cairo_get_fill_rule","\xa7","\x8a","\x72","\x02"),
	HX_HCSTRING("cffi_lime_cairo_get_font_face","\x7c","\x43","\xa9","\xd7"),
	HX_HCSTRING("cffi_lime_cairo_get_font_options","\xdf","\xf9","\x9d","\x75"),
	HX_HCSTRING("cffi_lime_cairo_get_group_target","\xc2","\xef","\xf3","\xae"),
	HX_HCSTRING("cffi_lime_cairo_get_line_cap","\xb8","\xd6","\x2e","\xb8"),
	HX_HCSTRING("cffi_lime_cairo_get_line_join","\x84","\x22","\x78","\x75"),
	HX_HCSTRING("cffi_lime_cairo_get_line_width","\x2c","\x8e","\xe0","\xcb"),
	HX_HCSTRING("cffi_lime_cairo_get_matrix","\xb2","\x33","\x41","\x14"),
	HX_HCSTRING("cffi_lime_cairo_get_miter_limit","\x30","\x61","\x26","\x46"),
	HX_HCSTRING("cffi_lime_cairo_get_operator","\x55","\x17","\x3b","\x6b"),
	HX_HCSTRING("cffi_lime_cairo_get_source","\x4c","\xae","\xaa","\x8a"),
	HX_HCSTRING("cffi_lime_cairo_get_target","\xc2","\xf0","\x65","\xdf"),
	HX_HCSTRING("cffi_lime_cairo_get_tolerance","\x3c","\x7c","\xb0","\xfb"),
	HX_HCSTRING("cffi_lime_cairo_has_current_point","\xfd","\x98","\x0b","\x83"),
	HX_HCSTRING("cffi_lime_cairo_identity_matrix","\xba","\x37","\x2e","\xa4"),
	HX_HCSTRING("cffi_lime_cairo_in_clip","\x02","\xca","\xa9","\xcf"),
	HX_HCSTRING("cffi_lime_cairo_in_fill","\xb5","\x29","\xa3","\xd1"),
	HX_HCSTRING("cffi_lime_cairo_in_stroke","\x6a","\xbf","\x0e","\x6c"),
	HX_HCSTRING("cffi_lime_cairo_line_to","\x7e","\xad","\xec","\xf0"),
	HX_HCSTRING("cffi_lime_cairo_mask","\x94","\xa0","\xa0","\x5b"),
	HX_HCSTRING("cffi_lime_cairo_mask_surface","\x42","\x14","\xd3","\x67"),
	HX_HCSTRING("cffi_lime_cairo_move_to","\x81","\xf2","\xda","\x1b"),
	HX_HCSTRING("cffi_lime_cairo_new_path","\xcc","\x28","\x37","\xda"),
	HX_HCSTRING("cffi_lime_cairo_paint","\xf6","\x0a","\x18","\x8b"),
	HX_HCSTRING("cffi_lime_cairo_paint_with_alpha","\x0e","\x07","\x61","\xeb"),
	HX_HCSTRING("cffi_lime_cairo_pop_group","\x29","\x3a","\x6f","\xb1"),
	HX_HCSTRING("cffi_lime_cairo_pop_group_to_source","\x89","\x35","\xa9","\xd8"),
	HX_HCSTRING("cffi_lime_cairo_push_group","\x82","\x79","\x18","\x1d"),
	HX_HCSTRING("cffi_lime_cairo_push_group_with_content","\xdd","\xa2","\xf9","\xd0"),
	HX_HCSTRING("cffi_lime_cairo_rectangle","\x87","\xb3","\x2e","\xed"),
	HX_HCSTRING("cffi_lime_cairo_rel_curve_to","\xd9","\xf8","\x81","\xe0"),
	HX_HCSTRING("cffi_lime_cairo_rel_line_to","\x58","\xed","\x0d","\x23"),
	HX_HCSTRING("cffi_lime_cairo_rel_move_to","\x5b","\x32","\xfc","\x4d"),
	HX_HCSTRING("cffi_lime_cairo_reset_clip","\x28","\xe0","\x33","\xb2"),
	HX_HCSTRING("cffi_lime_cairo_restore","\xa6","\x40","\xf7","\x3b"),
	HX_HCSTRING("cffi_lime_cairo_rotate","\x03","\xe0","\x7f","\x0d"),
	HX_HCSTRING("cffi_lime_cairo_save","\xe5","\xea","\x97","\x5f"),
	HX_HCSTRING("cffi_lime_cairo_scale","\xe2","\x21","\x98","\x46"),
	HX_HCSTRING("cffi_lime_cairo_set_antialias","\xe9","\xf7","\x23","\x83"),
	HX_HCSTRING("cffi_lime_cairo_set_dash","\xf7","\xbd","\x32","\xbd"),
	HX_HCSTRING("cffi_lime_cairo_set_fill_rule","\xb3","\x6c","\x78","\x47"),
	HX_HCSTRING("cffi_lime_cairo_set_font_face","\x88","\x25","\xaf","\x1c"),
	HX_HCSTRING("cffi_lime_cairo_set_font_options","\x53","\xe7","\xdf","\xcb"),
	HX_HCSTRING("cffi_lime_cairo_set_font_size","\xac","\x11","\x4d","\x25"),
	HX_HCSTRING("cffi_lime_cairo_set_line_cap","\x2c","\xfa","\x27","\xcd"),
	HX_HCSTRING("cffi_lime_cairo_set_line_join","\x90","\x04","\x7e","\xba"),
	HX_HCSTRING("cffi_lime_cairo_set_line_width","\xa0","\x76","\x00","\xec"),
	HX_HCSTRING("cffi_lime_cairo_set_matrix","\x26","\xd2","\xbe","\x17"),
	HX_HCSTRING("cffi_lime_cairo_set_miter_limit","\x3c","\xde","\xf1","\x41"),
	HX_HCSTRING("cffi_lime_cairo_set_operator","\xc9","\x3a","\x34","\x80"),
	HX_HCSTRING("cffi_lime_cairo_set_source","\xc0","\x4c","\x28","\x8e"),
	HX_HCSTRING("cffi_lime_cairo_set_source_rgb","\xce","\xcc","\x4f","\x02"),
	HX_HCSTRING("cffi_lime_cairo_set_source_rgba","\xd3","\x67","\x83","\x03"),
	HX_HCSTRING("cffi_lime_cairo_set_source_surface","\x6e","\xcc","\x64","\x6d"),
	HX_HCSTRING("cffi_lime_cairo_set_tolerance","\x48","\x5e","\xb6","\x40"),
	HX_HCSTRING("cffi_lime_cairo_show_glyphs","\xe1","\xe4","\x84","\xb7"),
	HX_HCSTRING("cffi_lime_cairo_show_page","\x69","\xcb","\x4b","\x6c"),
	HX_HCSTRING("cffi_lime_cairo_show_text","\xc7","\xbd","\xf3","\x6e"),
	HX_HCSTRING("cffi_lime_cairo_status","\xda","\x80","\x5b","\x48"),
	HX_HCSTRING("cffi_lime_cairo_stroke","\x60","\x4d","\x94","\x53"),
	HX_HCSTRING("cffi_lime_cairo_stroke_extents","\x2a","\xe2","\xc5","\x68"),
	HX_HCSTRING("cffi_lime_cairo_stroke_preserve","\xcb","\x69","\x57","\xca"),
	HX_HCSTRING("cffi_lime_cairo_text_path","\x0f","\x01","\xd5","\xd6"),
	HX_HCSTRING("cffi_lime_cairo_transform","\xc4","\x0c","\x45","\x19"),
	HX_HCSTRING("cffi_lime_cairo_translate","\xa6","\xb6","\x31","\x1d"),
	HX_HCSTRING("cffi_lime_cairo_version","\x70","\xc0","\x38","\x4e"),
	HX_HCSTRING("cffi_lime_cairo_version_string","\x00","\x68","\x18","\xc4"),
	HX_HCSTRING("cffi_lime_cairo_font_face_status","\xcc","\x03","\xc2","\x7a"),
	HX_HCSTRING("cffi_lime_cairo_font_options_create","\x05","\xd6","\xdf","\xc6"),
	HX_HCSTRING("cffi_lime_cairo_font_options_get_antialias","\x9c","\x1e","\xbf","\xc8"),
	HX_HCSTRING("cffi_lime_cairo_font_options_get_hint_metrics","\x1d","\x79","\xb0","\x18"),
	HX_HCSTRING("cffi_lime_cairo_font_options_get_hint_style","\x8b","\x31","\x7a","\xb6"),
	HX_HCSTRING("cffi_lime_cairo_font_options_get_subpixel_order","\xa7","\xa6","\xb7","\xb6"),
	HX_HCSTRING("cffi_lime_cairo_font_options_set_antialias","\xa8","\x00","\xc5","\x0d"),
	HX_HCSTRING("cffi_lime_cairo_font_options_set_hint_metrics","\x91","\x66","\xf2","\x6e"),
	HX_HCSTRING("cffi_lime_cairo_font_options_set_hint_style","\xff","\x19","\x9a","\xd6"),
	HX_HCSTRING("cffi_lime_cairo_font_options_set_subpixel_order","\x1b","\xd9","\x66","\x93"),
	HX_HCSTRING("cffi_lime_cairo_ft_font_face_create","\x97","\x02","\x73","\x99"),
	HX_HCSTRING("cffi_lime_cairo_image_surface_create","\x5a","\xb9","\x1e","\xbf"),
	HX_HCSTRING("cffi_lime_cairo_image_surface_create_for_data","\x25","\xcd","\x91","\x7b"),
	HX_HCSTRING("cffi_lime_cairo_image_surface_get_data","\x91","\x37","\x6d","\x65"),
	HX_HCSTRING("cffi_lime_cairo_image_surface_get_format","\x5e","\xd8","\xe0","\x5f"),
	HX_HCSTRING("cffi_lime_cairo_image_surface_get_height","\x0e","\x51","\x9e","\x64"),
	HX_HCSTRING("cffi_lime_cairo_image_surface_get_stride","\x40","\x69","\x82","\x73"),
	HX_HCSTRING("cffi_lime_cairo_image_surface_get_width","\xbf","\x0e","\xfe","\x4f"),
	HX_HCSTRING("cffi_lime_cairo_pattern_add_color_stop_rgb","\xc1","\xeb","\x6e","\x90"),
	HX_HCSTRING("cffi_lime_cairo_pattern_add_color_stop_rgba","\x80","\x5d","\x9f","\xd0"),
	HX_HCSTRING("cffi_lime_cairo_pattern_create_for_surface","\x2b","\xe4","\x30","\x7c"),
	HX_HCSTRING("cffi_lime_cairo_pattern_create_linear","\xf1","\xf9","\x21","\xfd"),
	HX_HCSTRING("cffi_lime_cairo_pattern_create_radial","\xeb","\x66","\x78","\xc1"),
	HX_HCSTRING("cffi_lime_cairo_pattern_create_rgb","\x81","\xf3","\xe0","\x6b"),
	HX_HCSTRING("cffi_lime_cairo_pattern_create_rgba","\xc0","\x1d","\xf4","\xf8"),
	HX_HCSTRING("cffi_lime_cairo_pattern_get_color_stop_count","\x6e","\xc8","\xcf","\xae"),
	HX_HCSTRING("cffi_lime_cairo_pattern_get_extend","\x1a","\x80","\xac","\xbc"),
	HX_HCSTRING("cffi_lime_cairo_pattern_get_filter","\xf8","\xcd","\xc6","\x7a"),
	HX_HCSTRING("cffi_lime_cairo_pattern_get_matrix","\x81","\xe4","\x59","\xb1"),
	HX_HCSTRING("cffi_lime_cairo_pattern_set_extend","\x8e","\x1e","\x2a","\xc0"),
	HX_HCSTRING("cffi_lime_cairo_pattern_set_filter","\x6c","\x6c","\x44","\x7e"),
	HX_HCSTRING("cffi_lime_cairo_pattern_set_matrix","\xf5","\x82","\xd7","\xb4"),
	HX_HCSTRING("cffi_lime_cairo_surface_flush","\x4a","\xdb","\xf2","\xdb"),
	HX_HCSTRING("cffi_lime_curl_getdate","\xc2","\x61","\x24","\x4d"),
	HX_HCSTRING("cffi_lime_curl_global_cleanup","\xca","\xc5","\x25","\x2f"),
	HX_HCSTRING("cffi_lime_curl_global_init","\xaa","\x9d","\x8b","\x90"),
	HX_HCSTRING("cffi_lime_curl_version","\x16","\x6f","\x09","\xa0"),
	HX_HCSTRING("cffi_lime_curl_version_info","\x77","\x75","\x0a","\x01"),
	HX_HCSTRING("cffi_lime_curl_easy_cleanup","\xe9","\x82","\x3a","\xc5"),
	HX_HCSTRING("cffi_lime_curl_easy_duphandle","\xac","\x16","\xd4","\x55"),
	HX_HCSTRING("cffi_lime_curl_easy_escape","\x5c","\x8c","\x41","\x1b"),
	HX_HCSTRING("cffi_lime_curl_easy_getinfo","\xc9","\x32","\x5d","\x47"),
	HX_HCSTRING("cffi_lime_curl_easy_init","\x2b","\x07","\x83","\xab"),
	HX_HCSTRING("cffi_lime_curl_easy_pause","\x7b","\xa2","\x62","\x66"),
	HX_HCSTRING("cffi_lime_curl_easy_perform","\x66","\x5f","\xd6","\x94"),
	HX_HCSTRING("cffi_lime_curl_easy_recv","\x41","\x19","\x6f","\xb1"),
	HX_HCSTRING("cffi_lime_curl_easy_reset","\x54","\x15","\xd3","\x8f"),
	HX_HCSTRING("cffi_lime_curl_easy_send","\x63","\x59","\x18","\xb2"),
	HX_HCSTRING("cffi_lime_curl_easy_setopt","\xac","\xba","\xeb","\xaf"),
	HX_HCSTRING("cffi_lime_curl_easy_strerror","\x12","\x77","\xab","\x30"),
	HX_HCSTRING("cffi_lime_curl_easy_unescape","\x35","\xe8","\x90","\x7c"),
	HX_HCSTRING("cffi_lime_gl_active_texture","\x0b","\x95","\x07","\x16"),
	HX_HCSTRING("cffi_lime_gl_attach_shader","\xd6","\x9c","\x99","\xc1"),
	HX_HCSTRING("cffi_lime_gl_bind_attrib_location","\xf1","\x16","\xec","\x0b"),
	HX_HCSTRING("cffi_lime_gl_bind_buffer","\xf9","\xc3","\x77","\x28"),
	HX_HCSTRING("cffi_lime_gl_bind_framebuffer","\x54","\x27","\x8c","\x5e"),
	HX_HCSTRING("cffi_lime_gl_bind_renderbuffer","\x8f","\x54","\xa2","\xe2"),
	HX_HCSTRING("cffi_lime_gl_bind_texture","\xc2","\xdb","\xa3","\x2d"),
	HX_HCSTRING("cffi_lime_gl_blend_color","\x2c","\x3d","\x6d","\x80"),
	HX_HCSTRING("cffi_lime_gl_blend_equation","\x63","\xb3","\x98","\x81"),
	HX_HCSTRING("cffi_lime_gl_blend_equation_separate","\xff","\x5e","\xb7","\x48"),
	HX_HCSTRING("cffi_lime_gl_blend_func","\x9b","\x6b","\x44","\x5d"),
	HX_HCSTRING("cffi_lime_gl_blend_func_separate","\xc7","\xdf","\x1e","\xb6"),
	HX_HCSTRING("cffi_lime_gl_buffer_data","\x80","\x9e","\xde","\xb9"),
	HX_HCSTRING("cffi_lime_gl_buffer_sub_data","\xdf","\x83","\x9b","\x86"),
	HX_HCSTRING("cffi_lime_gl_check_framebuffer_status","\x04","\xac","\xc0","\x18"),
	HX_HCSTRING("cffi_lime_gl_clear","\xc4","\x77","\x82","\x3b"),
	HX_HCSTRING("cffi_lime_gl_clear_color","\x68","\x5b","\xe8","\x5f"),
	HX_HCSTRING("cffi_lime_gl_clear_depthf","\x5e","\xcc","\x69","\x32"),
	HX_HCSTRING("cffi_lime_gl_clear_stencil","\x41","\xf3","\xe1","\xff"),
	HX_HCSTRING("cffi_lime_gl_color_mask","\xf1","\x16","\xea","\xed"),
	HX_HCSTRING("cffi_lime_gl_compile_shader","\x9a","\x8a","\xf8","\xde"),
	HX_HCSTRING("cffi_lime_gl_compressed_tex_image_2d","\xe3","\xbb","\xda","\x66"),
	HX_HCSTRING("cffi_lime_gl_compressed_tex_sub_image_2d","\x42","\x84","\x71","\x32"),
	HX_HCSTRING("cffi_lime_gl_copy_tex_image_2d","\xef","\xf8","\xce","\xb8"),
	HX_HCSTRING("cffi_lime_gl_copy_tex_sub_image_2d","\x4e","\x37","\x97","\xe8"),
	HX_HCSTRING("cffi_lime_gl_create_buffer","\x5a","\x14","\x78","\x46"),
	HX_HCSTRING("cffi_lime_gl_create_framebuffer","\x53","\xd7","\x07","\xd6"),
	HX_HCSTRING("cffi_lime_gl_create_program","\xea","\x61","\x02","\xa5"),
	HX_HCSTRING("cffi_lime_gl_create_renderbuffer","\xb0","\xa3","\x60","\xf7"),
	HX_HCSTRING("cffi_lime_gl_create_shader","\x7f","\x16","\x04","\x93"),
	HX_HCSTRING("cffi_lime_gl_create_texture","\x41","\xe0","\xe9","\x4f"),
	HX_HCSTRING("cffi_lime_gl_cull_face","\x41","\x93","\xf5","\x8c"),
	HX_HCSTRING("cffi_lime_gl_delete_buffer","\x0b","\xcf","\xbe","\xbc"),
	HX_HCSTRING("cffi_lime_gl_delete_framebuffer","\x02","\xbb","\x49","\x08"),
	HX_HCSTRING("cffi_lime_gl_delete_program","\x19","\x02","\x9f","\xac"),
	HX_HCSTRING("cffi_lime_gl_delete_renderbuffer","\x21","\xf9","\xc5","\xbe"),
	HX_HCSTRING("cffi_lime_gl_delete_shader","\x30","\xd1","\x4a","\x09"),
	HX_HCSTRING("cffi_lime_gl_delete_texture","\x70","\x80","\x86","\x57"),
	HX_HCSTRING("cffi_lime_gl_depth_func","\xa9","\x9d","\x58","\x21"),
	HX_HCSTRING("cffi_lime_gl_depth_mask","\x51","\xf3","\xe9","\x25"),
	HX_HCSTRING("cffi_lime_gl_depth_rangef","\xae","\x35","\x42","\xe7"),
	HX_HCSTRING("cffi_lime_gl_detach_shader","\x08","\xa9","\xa3","\xb8"),
	HX_HCSTRING("cffi_lime_gl_disable","\xdf","\xab","\xf6","\x00"),
	HX_HCSTRING("cffi_lime_gl_disable_vertex_attrib_array","\xff","\x24","\xd3","\x35"),
	HX_HCSTRING("cffi_lime_gl_draw_arrays","\x4c","\xb0","\xaa","\x5c"),
	HX_HCSTRING("cffi_lime_gl_draw_elements","\x49","\xf6","\x28","\x75"),
	HX_HCSTRING("cffi_lime_gl_enable","\x6c","\x18","\x86","\xc7"),
	HX_HCSTRING("cffi_lime_gl_enable_vertex_attrib_array","\x0c","\x06","\x88","\xe8"),
	HX_HCSTRING("cffi_lime_gl_finish","\x3c","\xaa","\x7d","\x55"),
	HX_HCSTRING("cffi_lime_gl_flush","\xfb","\x68","\xc2","\xf5"),
	HX_HCSTRING("cffi_lime_gl_framebuffer_renderbuffer","\xd1","\x92","\x2a","\xc8"),
	HX_HCSTRING("cffi_lime_gl_framebuffer_texture2D","\x92","\x20","\xf3","\xa7"),
	HX_HCSTRING("cffi_lime_gl_front_face","\x9c","\xc5","\xb5","\xf1"),
	HX_HCSTRING("cffi_lime_gl_generate_mipmap","\x89","\xf1","\x67","\xc1"),
	HX_HCSTRING("cffi_lime_gl_get_active_attrib","\xf1","\x23","\x6f","\x50"),
	HX_HCSTRING("cffi_lime_gl_get_active_uniform","\xad","\x16","\x07","\x8d"),
	HX_HCSTRING("cffi_lime_gl_get_attached_shaders","\x45","\x63","\x80","\xff"),
	HX_HCSTRING("cffi_lime_gl_get_attrib_location","\x98","\xec","\x30","\x2d"),
	HX_HCSTRING("cffi_lime_gl_get_boolean","\x36","\x54","\x45","\xbe"),
	HX_HCSTRING("cffi_lime_gl_get_booleanv","\x80","\x5b","\x64","\xbe"),
	HX_HCSTRING("cffi_lime_gl_get_buffer_parameteri","\xcd","\x15","\x06","\x51"),
	HX_HCSTRING("cffi_lime_gl_get_buffer_parameteriv","\x09","\xfe","\x4c","\x94"),
	HX_HCSTRING("cffi_lime_gl_get_context_attributes","\x99","\x5d","\x08","\x68"),
	HX_HCSTRING("cffi_lime_gl_get_error","\xd6","\x15","\xff","\xdb"),
	HX_HCSTRING("cffi_lime_gl_get_extension","\x8d","\xfc","\xee","\x92"),
	HX_HCSTRING("cffi_lime_gl_get_float","\xaa","\x0f","\x6c","\x6b"),
	HX_HCSTRING("cffi_lime_gl_get_floatv","\x8c","\xa5","\x21","\x93"),
	HX_HCSTRING("cffi_lime_gl_get_framebuffer_attachment_parameteri","\xb8","\x43","\xb2","\xeb"),
	HX_HCSTRING("cffi_lime_gl_get_framebuffer_attachment_parameteriv","\xbe","\xfd","\x48","\x50"),
	HX_HCSTRING("cffi_lime_gl_get_integer","\x4c","\x27","\x62","\x57"),
	HX_HCSTRING("cffi_lime_gl_get_integerv","\xaa","\x3b","\x80","\x1e"),
	HX_HCSTRING("cffi_lime_gl_get_program_info_log","\x00","\xd2","\xe4","\x39"),
	HX_HCSTRING("cffi_lime_gl_get_programi","\x17","\xdc","\x7d","\x83"),
	HX_HCSTRING("cffi_lime_gl_get_programiv","\x7f","\xb8","\xa2","\x8a"),
	HX_HCSTRING("cffi_lime_gl_get_renderbuffer_parameteri","\x37","\x48","\xaa","\xe7"),
	HX_HCSTRING("cffi_lime_gl_get_renderbuffer_parameteriv","\x5f","\xe8","\x54","\xcd"),
	HX_HCSTRING("cffi_lime_gl_get_shader_info_log","\x1b","\xf4","\xd0","\x21"),
	HX_HCSTRING("cffi_lime_gl_get_shaderi","\x32","\xeb","\xcc","\x9f"),
	HX_HCSTRING("cffi_lime_gl_get_shaderiv","\x04","\xe1","\x80","\x33"),
	HX_HCSTRING("cffi_lime_gl_get_shader_precision_format","\x80","\xca","\xf5","\xb4"),
	HX_HCSTRING("cffi_lime_gl_get_shader_source","\x03","\x6a","\x5b","\x66"),
	HX_HCSTRING("cffi_lime_gl_get_string","\x03","\xab","\xfb","\x62"),
	HX_HCSTRING("cffi_lime_gl_get_tex_parameterf","\x67","\x3d","\x83","\x10"),
	HX_HCSTRING("cffi_lime_gl_get_tex_parameterfv","\x2f","\x7d","\x52","\x62"),
	HX_HCSTRING("cffi_lime_gl_get_tex_parameteri","\x6a","\x3d","\x83","\x10"),
	HX_HCSTRING("cffi_lime_gl_get_tex_parameteriv","\xcc","\x7f","\x52","\x62"),
	HX_HCSTRING("cffi_lime_gl_get_uniformf","\x64","\xbf","\xaa","\xff"),
	HX_HCSTRING("cffi_lime_gl_get_uniformfv","\x92","\xb8","\xbc","\xb5"),
	HX_HCSTRING("cffi_lime_gl_get_uniformi","\x67","\xbf","\xaa","\xff"),
	HX_HCSTRING("cffi_lime_gl_get_uniformiv","\x2f","\xbb","\xbc","\xb5"),
	HX_HCSTRING("cffi_lime_gl_get_uniform_location","\x92","\x52","\xfb","\x5d"),
	HX_HCSTRING("cffi_lime_gl_get_vertex_attribi","\xf6","\xb6","\x91","\x7d"),
	HX_HCSTRING("cffi_lime_gl_get_vertex_attribiv","\xc0","\x60","\xee","\x61"),
	HX_HCSTRING("cffi_lime_gl_get_vertex_attrib_pointerv","\x05","\x68","\x2b","\xba"),
	HX_HCSTRING("cffi_lime_gl_hint","\x30","\x2b","\xb7","\xe5"),
	HX_HCSTRING("cffi_lime_gl_is_buffer","\xac","\x11","\xe5","\x9a"),
	HX_HCSTRING("cffi_lime_gl_is_enabled","\x55","\xc6","\x2a","\xba"),
	HX_HCSTRING("cffi_lime_gl_is_framebuffer","\xc1","\x50","\xa9","\x0d"),
	HX_HCSTRING("cffi_lime_gl_is_program","\x58","\x0c","\xf3","\x2f"),
	HX_HCSTRING("cffi_lime_gl_is_renderbuffer","\x82","\x6a","\x09","\x6d"),
	HX_HCSTRING("cffi_lime_gl_is_shader","\xd1","\x13","\x71","\xe7"),
	HX_HCSTRING("cffi_lime_gl_is_texture","\xaf","\x8a","\xda","\xda"),
	HX_HCSTRING("cffi_lime_gl_line_width","\xa4","\x96","\xa1","\xc7"),
	HX_HCSTRING("cffi_lime_gl_link_program","\xa8","\x84","\xd0","\xd8"),
	HX_HCSTRING("cffi_lime_gl_object_deregister","\x5b","\xbc","\x59","\x55"),
	HX_HCSTRING("cffi_lime_gl_object_from_id","\xf9","\xb4","\x96","\xb0"),
	HX_HCSTRING("cffi_lime_gl_object_register","\x1a","\x60","\xd9","\xf1"),
	HX_HCSTRING("cffi_lime_gl_pixel_storei","\xea","\x57","\x57","\xe2"),
	HX_HCSTRING("cffi_lime_gl_polygon_offset","\xe1","\x44","\xfc","\x45"),
	HX_HCSTRING("cffi_lime_gl_read_pixels","\xad","\x75","\x07","\x3b"),
	HX_HCSTRING("cffi_lime_gl_renderbuffer_storage","\x3b","\xdb","\xb9","\x6d"),
	HX_HCSTRING("cffi_lime_gl_sample_coverage","\xd4","\xe4","\xf4","\x61"),
	HX_HCSTRING("cffi_lime_gl_scissor","\x13","\x6a","\x85","\x54"),
	HX_HCSTRING("cffi_lime_gl_shader_source","\x2c","\xf7","\x72","\x3b"),
	HX_HCSTRING("cffi_lime_gl_stencil_func","\x50","\x56","\x50","\x09"),
	HX_HCSTRING("cffi_lime_gl_stencil_func_separate","\x72","\x76","\xec","\xb6"),
	HX_HCSTRING("cffi_lime_gl_stencil_mask","\xf8","\xab","\xe1","\x0d"),
	HX_HCSTRING("cffi_lime_gl_stencil_mask_separate","\xca","\x2b","\xe7","\x02"),
	HX_HCSTRING("cffi_lime_gl_stencil_op","\x2d","\xb1","\x4e","\x19"),
	HX_HCSTRING("cffi_lime_gl_stencil_op_separate","\xf5","\x57","\x9c","\xe5"),
	HX_HCSTRING("cffi_lime_gl_tex_image_2d","\xd7","\x50","\x7b","\xd9"),
	HX_HCSTRING("cffi_lime_gl_tex_parameterf","\x1e","\x34","\x07","\xb0"),
	HX_HCSTRING("cffi_lime_gl_tex_parameteri","\x21","\x34","\x07","\xb0"),
	HX_HCSTRING("cffi_lime_gl_tex_sub_image_2d","\x36","\xa3","\xb1","\x40"),
	HX_HCSTRING("cffi_lime_gl_uniform1f","\x00","\x0f","\x0a","\x2d"),
	HX_HCSTRING("cffi_lime_gl_uniform1fv","\x76","\x11","\xc3","\x3b"),
	HX_HCSTRING("cffi_lime_gl_uniform1i","\x03","\x0f","\x0a","\x2d"),
	HX_HCSTRING("cffi_lime_gl_uniform1iv","\x13","\x14","\xc3","\x3b"),
	HX_HCSTRING("cffi_lime_gl_uniform2f","\xdf","\x0f","\x0a","\x2d"),
	HX_HCSTRING("cffi_lime_gl_uniform2fv","\xb7","\xd3","\xc3","\x3b"),
	HX_HCSTRING("cffi_lime_gl_uniform2i","\xe2","\x0f","\x0a","\x2d"),
	HX_HCSTRING("cffi_lime_gl_uniform2iv","\x54","\xd6","\xc3","\x3b"),
	HX_HCSTRING("cffi_lime_gl_uniform3f","\xbe","\x10","\x0a","\x2d"),
	HX_HCSTRING("cffi_lime_gl_uniform3fv","\xf8","\x95","\xc4","\x3b"),
	HX_HCSTRING("cffi_lime_gl_uniform3i","\xc1","\x10","\x0a","\x2d"),
	HX_HCSTRING("cffi_lime_gl_uniform3iv","\x95","\x98","\xc4","\x3b"),
	HX_HCSTRING("cffi_lime_gl_uniform4f","\x9d","\x11","\x0a","\x2d"),
	HX_HCSTRING("cffi_lime_gl_uniform4fv","\x39","\x58","\xc5","\x3b"),
	HX_HCSTRING("cffi_lime_gl_uniform4i","\xa0","\x11","\x0a","\x2d"),
	HX_HCSTRING("cffi_lime_gl_uniform4iv","\xd6","\x5a","\xc5","\x3b"),
	HX_HCSTRING("cffi_lime_gl_uniform_matrix2fv","\x0d","\x75","\x3d","\x9b"),
	HX_HCSTRING("cffi_lime_gl_uniform_matrix3fv","\x4e","\x37","\x3e","\x9b"),
	HX_HCSTRING("cffi_lime_gl_uniform_matrix4fv","\x8f","\xf9","\x3e","\x9b"),
	HX_HCSTRING("cffi_lime_gl_use_program","\xc3","\xf8","\x56","\x68"),
	HX_HCSTRING("cffi_lime_gl_validate_program","\xc4","\x41","\x44","\x49"),
	HX_HCSTRING("cffi_lime_gl_vertex_attrib1f","\x51","\x19","\xe2","\x55"),
	HX_HCSTRING("cffi_lime_gl_vertex_attrib1fv","\x05","\x0e","\xf4","\xcf"),
	HX_HCSTRING("cffi_lime_gl_vertex_attrib2f","\x30","\x1a","\xe2","\x55"),
	HX_HCSTRING("cffi_lime_gl_vertex_attrib2fv","\x46","\xd0","\xf4","\xcf"),
	HX_HCSTRING("cffi_lime_gl_vertex_attrib3f","\x0f","\x1b","\xe2","\x55"),
	HX_HCSTRING("cffi_lime_gl_vertex_attrib3fv","\x87","\x92","\xf5","\xcf"),
	HX_HCSTRING("cffi_lime_gl_vertex_attrib4f","\xee","\x1b","\xe2","\x55"),
	HX_HCSTRING("cffi_lime_gl_vertex_attrib4fv","\xc8","\x54","\xf6","\xcf"),
	HX_HCSTRING("cffi_lime_gl_vertex_attrib_pointer","\x7a","\x5d","\xea","\xb2"),
	HX_HCSTRING("cffi_lime_gl_viewport","\x8f","\xc2","\x80","\xf7"),
	HX_HCSTRING("cffi_lime_vorbis_file_bitrate","\x65","\x1e","\x94","\xc6"),
	HX_HCSTRING("cffi_lime_vorbis_file_bitrate_instant","\xc7","\xbb","\x73","\xc5"),
	HX_HCSTRING("cffi_lime_vorbis_file_clear","\xc5","\x9b","\x56","\x7d"),
	HX_HCSTRING("cffi_lime_vorbis_file_comment","\x97","\xa2","\x34","\x4b"),
	HX_HCSTRING("cffi_lime_vorbis_file_crosslap","\xa3","\xa1","\xf7","\x49"),
	HX_HCSTRING("cffi_lime_vorbis_file_from_bytes","\x5e","\xab","\x77","\x06"),
	HX_HCSTRING("cffi_lime_vorbis_file_from_file","\xe9","\x0a","\x71","\xf9"),
	HX_HCSTRING("cffi_lime_vorbis_file_info","\x36","\x3d","\xa4","\x1c"),
	HX_HCSTRING("cffi_lime_vorbis_file_pcm_seek","\xc5","\xd8","\x05","\x71"),
	HX_HCSTRING("cffi_lime_vorbis_file_pcm_seek_lap","\xa1","\xac","\xdf","\x11"),
	HX_HCSTRING("cffi_lime_vorbis_file_pcm_seek_page","\x49","\x33","\x7c","\x94"),
	HX_HCSTRING("cffi_lime_vorbis_file_pcm_seek_page_lap","\x25","\x99","\x6f","\x39"),
	HX_HCSTRING("cffi_lime_vorbis_file_raw_seek","\x37","\x6b","\xd1","\x8f"),
	HX_HCSTRING("cffi_lime_vorbis_file_raw_seek_lap","\x13","\x60","\x8a","\x16"),
	HX_HCSTRING("cffi_lime_vorbis_file_pcm_tell","\x7e","\x15","\xaf","\x71"),
	HX_HCSTRING("cffi_lime_vorbis_file_pcm_total","\xd7","\xe3","\x25","\x0e"),
	HX_HCSTRING("cffi_lime_vorbis_file_raw_tell","\xf0","\xa7","\x7a","\x90"),
	HX_HCSTRING("cffi_lime_vorbis_file_raw_total","\x25","\x75","\x7a","\xe1"),
	HX_HCSTRING("cffi_lime_vorbis_file_read","\x1e","\x50","\x90","\x22"),
	HX_HCSTRING("cffi_lime_vorbis_file_read_float","\x7b","\x47","\xae","\x01"),
	HX_HCSTRING("cffi_lime_vorbis_file_seekable","\xda","\x17","\xd4","\x19"),
	HX_HCSTRING("cffi_lime_vorbis_file_serial_number","\x2c","\x37","\x4c","\x8e"),
	HX_HCSTRING("cffi_lime_vorbis_file_streams","\x2b","\x04","\x09","\xc0"),
	HX_HCSTRING("cffi_lime_vorbis_file_time_seek","\x62","\xac","\x6d","\x02"),
	HX_HCSTRING("cffi_lime_vorbis_file_time_seek_lap","\xbe","\x12","\x16","\xd5"),
	HX_HCSTRING("cffi_lime_vorbis_file_time_seek_page","\x8c","\x26","\xdf","\xa0"),
	HX_HCSTRING("cffi_lime_vorbis_file_time_seek_page_lap","\xe8","\xe9","\xa0","\x11"),
	HX_HCSTRING("cffi_lime_vorbis_file_time_tell","\x1b","\xe9","\x16","\x03"),
	HX_HCSTRING("cffi_lime_vorbis_file_time_total","\x9a","\x39","\x97","\xb7"),
	::String(null()) };

void NativeCFFI_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native.NativeCFFI","\xf4","\xaa","\xf4","\xd7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeCFFI_obj::__GetStatic;
	__mClass->mSetStaticField = &NativeCFFI_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< NativeCFFI_obj >;
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

void NativeCFFI_obj::__boot()
{
	cffi_lime_application_create= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_create","\x75","\x25","\x1a","\xbb"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_application_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_event_manager_register","\x33","\x3f","\x87","\x01"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_application_exec= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_exec","\xca","\xf1","\x81","\xe2"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_application_init= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_init","\x49","\x39","\x1f","\xe5"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_application_quit= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_quit","\x08","\x3e","\x6e","\xea"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_application_set_frame_rate= ::cpp::Function< void ( ::hx::Object * ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_set_frame_rate","\xa8","\x03","\xd7","\x1d"),HX_HCSTRING("odv","\xc1","\x91","\x54","\x00"),false));
	cffi_lime_application_update= ::cpp::Function< bool ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_update","\x82","\x44","\x10","\xc6"),HX_HCSTRING("ob","\x13","\x61","\x00","\x00"),false));
	cffi_lime_audio_load= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_audio_load","\x99","\x89","\x38","\x30"),HX_HCSTRING("ooo","\x4f","\x9b","\x54","\x00"),false));
	cffi_lime_bytes_from_data_pointer= ::cpp::Function< ::hx::Object * ( Float ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_bytes_from_data_pointer","\x1f","\x3b","\x02","\x90"),HX_HCSTRING("dio","\x4a","\x3d","\x4c","\x00"),false));
	cffi_lime_bytes_get_data_pointer= ::cpp::Function< Float ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_bytes_get_data_pointer","\xaf","\xff","\x82","\x7b"),HX_HCSTRING("od","\x15","\x61","\x00","\x00"),false));
	cffi_lime_bytes_get_data_pointer_offset= ::cpp::Function< Float ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_bytes_get_data_pointer_offset","\x63","\x8d","\x9d","\x00"),HX_HCSTRING("oid","\x0a","\x96","\x54","\x00"),false));
	cffi_lime_bytes_read_file= ::cpp::Function< ::hx::Object * ( ::String ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_bytes_read_file","\xc7","\xb2","\x82","\xba"),HX_HCSTRING("soo","\x53","\xa4","\x57","\x00"),false));
	cffi_lime_cffi_get_native_pointer= ::cpp::Function< Float ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cffi_get_native_pointer","\x6d","\xf2","\xd7","\x07"),HX_HCSTRING("od","\x15","\x61","\x00","\x00"),false));
	cffi_lime_clipboard_get_text= ::cpp::Function< ::hx::Object * ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_clipboard_get_text","\x29","\xfd","\x31","\x04"),HX_HCSTRING("o","\x6f","\x00","\x00","\x00"),false));
	cffi_lime_clipboard_set_text= ::cpp::Function< void ( ::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_clipboard_set_text","\x9d","\x56","\x8f","\xb2"),HX_HCSTRING("sv","\xa3","\x64","\x00","\x00"),false));
	cffi_lime_data_pointer_offset= ::cpp::Function< Float ( Float ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_data_pointer_offset","\x60","\xb2","\x70","\x59"),HX_HCSTRING("did","\x3f","\x3d","\x4c","\x00"),false));
	cffi_lime_deflate_compress= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_deflate_compress","\xe0","\x7d","\x72","\x7f"),HX_HCSTRING("ooo","\x4f","\x9b","\x54","\x00"),false));
	cffi_lime_deflate_decompress= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_deflate_decompress","\xe1","\x49","\xb0","\x91"),HX_HCSTRING("ooo","\x4f","\x9b","\x54","\x00"),false));
	cffi_lime_drop_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_drop_event_manager_register","\xa0","\x48","\x49","\x3f"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_file_dialog_open_directory= ::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_file_dialog_open_directory","\x36","\x64","\x09","\xe2"),HX_HCSTRING("ssso","\x3c","\x31","\x5b","\x4c"),false));
	cffi_lime_file_dialog_open_file= ::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_file_dialog_open_file","\x53","\xb1","\xfe","\xc0"),HX_HCSTRING("ssso","\x3c","\x31","\x5b","\x4c"),false));
	cffi_lime_file_dialog_open_files= ::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_file_dialog_open_files","\xc0","\x77","\xdc","\x1d"),HX_HCSTRING("ssso","\x3c","\x31","\x5b","\x4c"),false));
	cffi_lime_file_dialog_save_file= ::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_file_dialog_save_file","\x00","\x49","\x86","\xdc"),HX_HCSTRING("ssso","\x3c","\x31","\x5b","\x4c"),false));
	cffi_lime_font_get_ascender= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_ascender","\x06","\xf1","\xb5","\x57"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_font_get_descender= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_descender","\x68","\xc1","\x2f","\x64"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_font_get_family_name= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_family_name","\x97","\xce","\xb2","\xb4"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_font_get_glyph_index= ::cpp::Function< int ( ::hx::Object * ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_glyph_index","\x90","\x3b","\xdd","\xa2"),HX_HCSTRING("osi","\xc5","\x9e","\x54","\x00"),false));
	cffi_lime_font_get_glyph_indices= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_glyph_indices","\x25","\x83","\xe4","\x03"),HX_HCSTRING("oso","\xcb","\x9e","\x54","\x00"),false));
	cffi_lime_font_get_glyph_metrics= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_glyph_metrics","\x41","\xde","\x64","\x4d"),HX_HCSTRING("oio","\x15","\x96","\x54","\x00"),false));
	cffi_lime_font_get_height= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_height","\xf6","\x3e","\xaa","\xfc"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_font_get_num_glyphs= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_num_glyphs","\xef","\x8b","\xe7","\xad"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_font_get_underline_position= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_underline_position","\x0b","\x93","\x8e","\x28"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_font_get_underline_thickness= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_underline_thickness","\xd2","\x14","\x47","\xde"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_font_get_units_per_em= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_units_per_em","\x29","\x72","\x55","\xdc"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_font_load= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_load","\xec","\x08","\x6e","\x02"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_font_outline_decompose= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_outline_decompose","\xee","\xda","\x88","\x55"),HX_HCSTRING("oio","\x15","\x96","\x54","\x00"),false));
	cffi_lime_font_render_glyph= ::cpp::Function< bool ( ::hx::Object * ,int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_render_glyph","\x89","\x79","\x39","\x0f"),HX_HCSTRING("oiob","\xad","\xbc","\xae","\x49"),false));
	cffi_lime_font_render_glyphs= ::cpp::Function< bool ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_render_glyphs","\xca","\xde","\x10","\x43"),HX_HCSTRING("ooob","\x33","\x4a","\xb3","\x49"),false));
	cffi_lime_font_set_size= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_set_size","\x84","\xff","\x47","\xdd"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_gamepad_add_mappings= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gamepad_add_mappings","\x0b","\x39","\xa9","\xd8"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_gamepad_get_device_guid= ::cpp::Function< ::hx::Object * ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gamepad_get_device_guid","\x61","\x03","\x1f","\x2d"),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),false));
	cffi_lime_gamepad_get_device_name= ::cpp::Function< ::hx::Object * ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gamepad_get_device_name","\x23","\x58","\xb0","\x31"),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),false));
	cffi_lime_gamepad_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gamepad_event_manager_register","\x02","\xb7","\x1e","\x51"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_gzip_compress= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gzip_compress","\xfd","\xcc","\x13","\x7a"),HX_HCSTRING("ooo","\x4f","\x9b","\x54","\x00"),false));
	cffi_lime_gzip_decompress= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gzip_decompress","\x3e","\x5a","\x99","\x72"),HX_HCSTRING("ooo","\x4f","\x9b","\x54","\x00"),false));
	cffi_lime_haptic_vibrate= ::cpp::Function< void ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_haptic_vibrate","\x31","\x58","\x7a","\x85"),HX_HCSTRING("iiv","\x96","\x08","\x50","\x00"),false));
	cffi_lime_image_encode= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_encode","\x64","\x48","\x63","\x9c"),HX_HCSTRING("oiioo","\xef","\xd8","\x31","\x2f"),false));
	cffi_lime_image_load= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_load","\xf4","\x20","\xad","\x9c"),HX_HCSTRING("ooo","\x4f","\x9b","\x54","\x00"),false));
	cffi_lime_image_data_util_color_transform= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_color_transform","\xba","\xcc","\x96","\x40"),HX_HCSTRING("ooov","\x47","\x4a","\xb3","\x49"),false));
	cffi_lime_image_data_util_copy_channel= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_copy_channel","\x4f","\x54","\x36","\xa5"),HX_HCSTRING("ooooiiv","\x56","\xa6","\x94","\x9c"),false));
	cffi_lime_image_data_util_copy_pixels= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_copy_pixels","\x21","\x51","\x7b","\xab"),HX_HCSTRING("oooooobv","\x34","\xa9","\x78","\x69"),false));
	cffi_lime_image_data_util_fill_rect= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_fill_rect","\x8a","\x8c","\xa4","\x8e"),HX_HCSTRING("ooiiv","\x76","\x1b","\x29","\x33"),false));
	cffi_lime_image_data_util_flood_fill= ::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_flood_fill","\xba","\xe7","\x5b","\xf2"),HX_HCSTRING("oiiiiv","\xe7","\x65","\x67","\x1c"),false));
	cffi_lime_image_data_util_get_pixels= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_get_pixels","\xcc","\x3e","\xde","\x0c"),HX_HCSTRING("ooiov","\xb0","\x20","\x29","\x33"),false));
	cffi_lime_image_data_util_merge= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_merge","\xa2","\xd2","\xb1","\xf7"),HX_HCSTRING("ooooiiiiv","\x76","\xe6","\xc1","\x67"),false));
	cffi_lime_image_data_util_multiply_alpha= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_multiply_alpha","\x99","\x86","\xad","\x5d"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_image_data_util_resize= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_resize","\xca","\x16","\x5a","\xc4"),HX_HCSTRING("ooiiv","\x76","\x1b","\x29","\x33"),false));
	cffi_lime_image_data_util_set_format= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_set_format","\x4a","\x7d","\x40","\x81"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_image_data_util_set_pixels= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_set_pixels","\x40","\xdd","\x5b","\x10"),HX_HCSTRING("oooiv","\xfc","\xa8","\x2d","\x33"),false));
	cffi_lime_image_data_util_threshold= ::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ,int ,int ,int ,bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_threshold","\x95","\x30","\x16","\x89"),HX_HCSTRING("ooooiiiiiiibi","\x90","\x38","\x77","\xc0"),false));
	cffi_lime_image_data_util_unmultiply_alpha= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_unmultiply_alpha","\x32","\xd8","\x15","\x90"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_joystick_get_device_guid= ::cpp::Function< ::hx::Object * ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_joystick_get_device_guid","\x90","\x59","\x1a","\x42"),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),false));
	cffi_lime_joystick_get_device_name= ::cpp::Function< ::hx::Object * ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_joystick_get_device_name","\x52","\xae","\xab","\x46"),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),false));
	cffi_lime_joystick_get_num_axes= ::cpp::Function< int ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_joystick_get_num_axes","\xc0","\xe1","\xd4","\xa9"),HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00"),false));
	cffi_lime_joystick_get_num_buttons= ::cpp::Function< int ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_joystick_get_num_buttons","\x86","\x9c","\x1a","\x05"),HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00"),false));
	cffi_lime_joystick_get_num_hats= ::cpp::Function< int ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_joystick_get_num_hats","\x53","\xf9","\x63","\xae"),HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00"),false));
	cffi_lime_joystick_get_num_trackballs= ::cpp::Function< int ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_joystick_get_num_trackballs","\x04","\x66","\xee","\x99"),HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00"),false));
	cffi_lime_joystick_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_joystick_event_manager_register","\xb3","\x14","\x1d","\x14"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_jpeg_decode_bytes= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,bool ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_jpeg_decode_bytes","\xa7","\xff","\x10","\xc9"),HX_HCSTRING("oboo","\xf3","\x6c","\xa9","\x49"),false));
	cffi_lime_jpeg_decode_file= ::cpp::Function< ::hx::Object * ( ::String ,bool ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_jpeg_decode_file","\xc0","\x92","\xae","\x0c"),HX_HCSTRING("sboo","\x6f","\x47","\x4e","\x4c"),false));
	cffi_lime_key_code_from_scan_code= ::cpp::Function< ::cpp::Float32 ( ::cpp::Float32 ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_key_code_from_scan_code","\xe2","\x69","\x76","\xbc"),HX_HCSTRING("ff","\x40","\x59","\x00","\x00"),false));
	cffi_lime_key_code_to_scan_code= ::cpp::Function< ::cpp::Float32 ( ::cpp::Float32 ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_key_code_to_scan_code","\x33","\xc7","\x96","\x30"),HX_HCSTRING("ff","\x40","\x59","\x00","\x00"),false));
	cffi_lime_key_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_key_event_manager_register","\xc4","\x10","\x76","\x37"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_lzma_compress= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_lzma_compress","\x75","\xe7","\xf2","\x95"),HX_HCSTRING("ooo","\x4f","\x9b","\x54","\x00"),false));
	cffi_lime_lzma_decompress= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_lzma_decompress","\xb6","\x02","\x4e","\x98"),HX_HCSTRING("ooo","\x4f","\x9b","\x54","\x00"),false));
	cffi_lime_mouse_hide= ::cpp::Function< void ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_mouse_hide","\x86","\xe8","\x02","\xac"),HX_HCSTRING("v","\x76","\x00","\x00","\x00"),false));
	cffi_lime_mouse_set_cursor= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_mouse_set_cursor","\xd7","\x7b","\x59","\xa1"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_mouse_set_lock= ::cpp::Function< void ( bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_mouse_set_lock","\xac","\x96","\x23","\xfb"),HX_HCSTRING("bv","\xd4","\x55","\x00","\x00"),false));
	cffi_lime_mouse_show= ::cpp::Function< void ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_mouse_show","\xc1","\x88","\x47","\xb3"),HX_HCSTRING("v","\x76","\x00","\x00","\x00"),false));
	cffi_lime_mouse_warp= ::cpp::Function< void ( int ,int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_mouse_warp","\x0c","\x16","\xe7","\xb5"),HX_HCSTRING("iiov","\x07","\x75","\xb7","\x45"),false));
	cffi_lime_mouse_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_mouse_event_manager_register","\x7e","\x33","\x83","\xea"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_neko_execute= ::cpp::Function< void ( ::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_neko_execute","\xfb","\x62","\x24","\x05"),HX_HCSTRING("sv","\xa3","\x64","\x00","\x00"),false));
	cffi_lime_png_decode_bytes= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,bool ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_png_decode_bytes","\x9a","\x13","\x98","\x26"),HX_HCSTRING("oboo","\xf3","\x6c","\xa9","\x49"),false));
	cffi_lime_png_decode_file= ::cpp::Function< ::hx::Object * ( ::String ,bool ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_png_decode_file","\x2d","\x7e","\x35","\x25"),HX_HCSTRING("sboo","\x6f","\x47","\x4e","\x4c"),false));
	cffi_lime_renderer_create= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_create","\x4e","\xc5","\x81","\x91"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_renderer_flip= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_flip","\x7f","\xd8","\x55","\x6f"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_renderer_get_context= ::cpp::Function< Float ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_get_context","\x74","\x6e","\xee","\xe1"),HX_HCSTRING("od","\x15","\x61","\x00","\x00"),false));
	cffi_lime_renderer_get_scale= ::cpp::Function< Float ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_get_scale","\xcf","\x0b","\x88","\x72"),HX_HCSTRING("od","\x15","\x61","\x00","\x00"),false));
	cffi_lime_renderer_get_type= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_get_type","\x15","\xc5","\x47","\xea"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_renderer_lock= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_lock","\xbd","\x61","\x4f","\x73"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_renderer_make_current= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_make_current","\x7a","\xb5","\x2f","\x5b"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_renderer_read_pixels= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_read_pixels","\xa4","\xe4","\x37","\xc3"),HX_HCSTRING("oooo","\x40","\x4a","\xb3","\x49"),false));
	cffi_lime_renderer_unlock= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_unlock","\x16","\x01","\xff","\x7a"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_render_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_render_event_manager_register","\xd9","\x6b","\xed","\xee"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_sensor_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_sensor_event_manager_register","\x75","\x01","\xd7","\x10"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_system_get_allow_screen_timeout= ::cpp::Function< bool ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_system_get_allow_screen_timeout","\x73","\x89","\x73","\x7a"),HX_HCSTRING("b","\x62","\x00","\x00","\x00"),false));
	cffi_lime_system_set_allow_screen_timeout= ::cpp::Function< bool ( bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_system_set_allow_screen_timeout","\xe7","\x0a","\x4e","\x8d"),HX_HCSTRING("bb","\xc0","\x55","\x00","\x00"),false));
	cffi_lime_system_get_directory= ::cpp::Function< ::hx::Object * ( int ,::String ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_system_get_directory","\x5e","\x9e","\x04","\x7c"),HX_HCSTRING("isso","\x06","\x0f","\xbf","\x45"),false));
	cffi_lime_system_get_display= ::cpp::Function< ::hx::Object * ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_system_get_display","\xf3","\x47","\x82","\xd2"),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),false));
	cffi_lime_system_get_ios_tablet= ::cpp::Function< bool ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_system_get_ios_tablet","\x07","\x23","\xac","\xcd"),HX_HCSTRING("b","\x62","\x00","\x00","\x00"),false));
	cffi_lime_system_get_num_displays= ::cpp::Function< int ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_system_get_num_displays","\xf9","\x90","\x37","\x4f"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"),false));
	cffi_lime_system_get_timer= ::cpp::Function< Float ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_system_get_timer","\x36","\x5f","\x72","\x67"),HX_HCSTRING("d","\x64","\x00","\x00","\x00"),false));
	cffi_lime_system_open_file= ::cpp::Function< void ( ::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_system_open_file","\x6b","\x2d","\x58","\xea"),HX_HCSTRING("sv","\xa3","\x64","\x00","\x00"),false));
	cffi_lime_system_open_url= ::cpp::Function< void ( ::String ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_system_open_url","\x60","\x3f","\x2e","\xb4"),HX_HCSTRING("ssv","\xd6","\xa7","\x57","\x00"),false));
	cffi_lime_text_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_text_event_manager_register","\xe2","\x83","\x68","\x5d"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_text_layout_create= ::cpp::Function< ::hx::Object * ( int ,::String ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_text_layout_create","\x09","\x53","\x56","\x81"),HX_HCSTRING("isso","\x06","\x0f","\xbf","\x45"),false));
	cffi_lime_text_layout_position= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,int ,::String ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_text_layout_position","\xf6","\x69","\xde","\xe0"),HX_HCSTRING("ooisoo","\xaa","\x7c","\xd6","\x90"),false));
	cffi_lime_text_layout_set_direction= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_text_layout_set_direction","\xb5","\x77","\xe8","\x4e"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_text_layout_set_language= ::cpp::Function< void ( ::hx::Object * ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_text_layout_set_language","\xa2","\x4b","\xfb","\x67"),HX_HCSTRING("osv","\xd2","\x9e","\x54","\x00"),false));
	cffi_lime_text_layout_set_script= ::cpp::Function< void ( ::hx::Object * ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_text_layout_set_script","\xd5","\xd2","\xc7","\x68"),HX_HCSTRING("osv","\xd2","\x9e","\x54","\x00"),false));
	cffi_lime_touch_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_touch_event_manager_register","\x24","\x25","\xf4","\xf5"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_window_alert= ::cpp::Function< void ( ::hx::Object * ,::String ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_alert","\x37","\xb9","\xe2","\xc1"),HX_HCSTRING("ossv","\xc7","\x56","\xb6","\x49"),false));
	cffi_lime_window_close= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_close","\x93","\x79","\xb7","\xe8"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_window_create= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ,int ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_create","\xc1","\xa4","\x90","\x25"),HX_HCSTRING("oiiiso","\x96","\x6e","\x67","\x1c"),false));
	cffi_lime_window_focus= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_focus","\xb3","\xc1","\xdd","\xa4"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_window_get_display= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_get_display","\x74","\x42","\x74","\x0d"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_window_get_display_mode= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_get_display_mode","\x4e","\x48","\xb4","\x98"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_window_get_enable_text_events= ::cpp::Function< bool ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_get_enable_text_events","\xbd","\x19","\xaf","\xda"),HX_HCSTRING("ob","\x13","\x61","\x00","\x00"),false));
	cffi_lime_window_get_height= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_get_height","\xf5","\x7b","\x27","\xd0"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_window_get_id= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_get_id","\xe9","\x30","\xb1","\x4c"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_window_get_width= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_get_width","\xb8","\xfd","\x65","\x5f"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_window_get_x= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_get_x","\x2a","\x07","\xb5","\x31"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_window_get_y= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_get_y","\x2b","\x07","\xb5","\x31"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_window_move= ::cpp::Function< void ( ::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_move","\x96","\xb5","\x64","\x4b"),HX_HCSTRING("oiiv","\x87","\xb7","\xae","\x49"),false));
	cffi_lime_window_resize= ::cpp::Function< void ( ::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_resize","\xb9","\x97","\xfc","\xb1"),HX_HCSTRING("oiiv","\x87","\xb7","\xae","\x49"),false));
	cffi_lime_window_set_borderless= ::cpp::Function< bool ( ::hx::Object * ,bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_set_borderless","\xc7","\xc1","\xd2","\x19"),HX_HCSTRING("obb","\xef","\x8f","\x54","\x00"),false));
	cffi_lime_window_set_display_mode= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_set_display_mode","\xc2","\x35","\xf6","\xee"),HX_HCSTRING("ooo","\x4f","\x9b","\x54","\x00"),false));
	cffi_lime_window_set_enable_text_events= ::cpp::Function< void ( ::hx::Object * ,bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_set_enable_text_events","\x31","\x96","\x5a","\x0e"),HX_HCSTRING("obv","\x03","\x90","\x54","\x00"),false));
	cffi_lime_window_set_fullscreen= ::cpp::Function< bool ( ::hx::Object * ,bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_set_fullscreen","\xbd","\xb5","\x15","\xfc"),HX_HCSTRING("obb","\xef","\x8f","\x54","\x00"),false));
	cffi_lime_window_set_icon= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_set_icon","\x7b","\xf5","\x6a","\x6e"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_window_set_maximized= ::cpp::Function< bool ( ::hx::Object * ,bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_set_maximized","\xd6","\xf8","\xec","\x06"),HX_HCSTRING("obb","\xef","\x8f","\x54","\x00"),false));
	cffi_lime_window_set_minimized= ::cpp::Function< bool ( ::hx::Object * ,bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_set_minimized","\x44","\xe6","\xa9","\x30"),HX_HCSTRING("obb","\xef","\x8f","\x54","\x00"),false));
	cffi_lime_window_set_resizable= ::cpp::Function< bool ( ::hx::Object * ,bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_set_resizable","\x29","\x22","\x5c","\xb1"),HX_HCSTRING("obb","\xef","\x8f","\x54","\x00"),false));
	cffi_lime_window_set_title= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_set_title","\x56","\x49","\x8f","\x88"),HX_HCSTRING("oso","\xcb","\x9e","\x54","\x00"),false));
	cffi_lime_window_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_event_manager_register","\x7f","\x16","\x8e","\x0d"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_zlib_compress= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_zlib_compress","\xac","\x90","\xd2","\x8a"),HX_HCSTRING("ooo","\x4f","\x9b","\x54","\x00"),false));
	cffi_lime_zlib_decompress= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_zlib_decompress","\xad","\xa7","\x53","\x43"),HX_HCSTRING("ooo","\x4f","\x9b","\x54","\x00"),false));
	cffi_lime_al_buffer_data= ::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_buffer_data","\x9f","\x3d","\x30","\xe4"),HX_HCSTRING("oioiiv","\xa1","\xad","\x5e","\x20"),false));
	cffi_lime_al_buffer3f= ::cpp::Function< void ( ::hx::Object * ,int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_buffer3f","\x7d","\xe7","\x92","\xda"),HX_HCSTRING("oifffv","\xaa","\x78","\x69","\x1a"),false));
	cffi_lime_al_buffer3i= ::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_buffer3i","\x80","\xe7","\x92","\xda"),HX_HCSTRING("oiiiiv","\xe7","\x65","\x67","\x1c"),false));
	cffi_lime_al_bufferf= ::cpp::Function< void ( ::hx::Object * ,int ,::cpp::Float32 ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_bufferf","\xfc","\xc8","\x9c","\xee"),HX_HCSTRING("oifv","\xea","\xb4","\xae","\x49"),false));
	cffi_lime_al_bufferfv= ::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_bufferfv","\xfa","\x13","\x93","\xda"),HX_HCSTRING("oiov","\xc1","\xbc","\xae","\x49"),false));
	cffi_lime_al_bufferi= ::cpp::Function< void ( ::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_bufferi","\xff","\xc8","\x9c","\xee"),HX_HCSTRING("oiiv","\x87","\xb7","\xae","\x49"),false));
	cffi_lime_al_bufferiv= ::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_bufferiv","\x97","\x16","\x93","\xda"),HX_HCSTRING("oiov","\xc1","\xbc","\xae","\x49"),false));
	cffi_lime_al_delete_buffer= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_delete_buffer","\xea","\xb3","\x0d","\x56"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_al_delete_buffers= ::cpp::Function< void ( int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_delete_buffers","\x49","\xb9","\xef","\xf5"),HX_HCSTRING("iov","\xd0","\x0d","\x50","\x00"),false));
	cffi_lime_al_delete_source= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_delete_source","\xc5","\xa7","\xaa","\xb7"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_al_delete_sources= ::cpp::Function< void ( int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_delete_sources","\x0e","\x25","\xa8","\xfd"),HX_HCSTRING("iov","\xd0","\x0d","\x50","\x00"),false));
	cffi_lime_al_disable= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_disable","\x7e","\x8f","\x64","\xee"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_al_distance_model= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_distance_model","\x09","\x2d","\x9c","\x2e"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_al_doppler_factor= ::cpp::Function< void ( ::cpp::Float32 ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_doppler_factor","\xea","\xb2","\x5f","\x1d"),HX_HCSTRING("fv","\x50","\x59","\x00","\x00"),false));
	cffi_lime_al_doppler_velocity= ::cpp::Function< void ( ::cpp::Float32 ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_doppler_velocity","\xf8","\x18","\x9f","\xe4"),HX_HCSTRING("fv","\x50","\x59","\x00","\x00"),false));
	cffi_lime_al_enable= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_enable","\xad","\xcd","\xb6","\x64"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_al_gen_source= ::cpp::Function< ::hx::Object * ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_gen_source","\x14","\x70","\x09","\x16"),HX_HCSTRING("o","\x6f","\x00","\x00","\x00"),false));
	cffi_lime_al_gen_sources= ::cpp::Function< ::hx::Object * ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_gen_sources","\xdf","\xa1","\x38","\x32"),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),false));
	cffi_lime_al_get_boolean= ::cpp::Function< bool ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_boolean","\x55","\xf3","\x96","\xe8"),HX_HCSTRING("ib","\xd9","\x5b","\x00","\x00"),false));
	cffi_lime_al_get_booleanv= ::cpp::Function< ::hx::Object * ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_booleanv","\x81","\xf7","\x7d","\x9b"),HX_HCSTRING("iio","\x8f","\x08","\x50","\x00"),false));
	cffi_lime_al_gen_buffer= ::cpp::Function< ::hx::Object * ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_gen_buffer","\x39","\x7c","\x6c","\xb4"),HX_HCSTRING("o","\x6f","\x00","\x00","\x00"),false));
	cffi_lime_al_gen_buffers= ::cpp::Function< ::hx::Object * ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_gen_buffers","\x1a","\x36","\x80","\x2a"),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),false));
	cffi_lime_al_get_buffer3f= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_buffer3f","\x86","\xb8","\x6d","\x87"),HX_HCSTRING("oio","\x15","\x96","\x54","\x00"),false));
	cffi_lime_al_get_buffer3i= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_buffer3i","\x89","\xb8","\x6d","\x87"),HX_HCSTRING("oio","\x15","\x96","\x54","\x00"),false));
	cffi_lime_al_get_bufferf= ::cpp::Function< ::cpp::Float32 ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_bufferf","\x13","\xac","\x28","\x1c"),HX_HCSTRING("oif","\x0c","\x96","\x54","\x00"),false));
	cffi_lime_al_get_bufferfv= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_bufferfv","\x03","\xe5","\x6d","\x87"),HX_HCSTRING("oiio","\x80","\xb7","\xae","\x49"),false));
	cffi_lime_al_get_bufferi= ::cpp::Function< int ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_bufferi","\x16","\xac","\x28","\x1c"),HX_HCSTRING("oii","\x0f","\x96","\x54","\x00"),false));
	cffi_lime_al_get_bufferiv= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_bufferiv","\xa0","\xe7","\x6d","\x87"),HX_HCSTRING("oiio","\x80","\xb7","\xae","\x49"),false));
	cffi_lime_al_get_double= ::cpp::Function< Float ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_double","\x04","\x97","\xd1","\x6d"),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),false));
	cffi_lime_al_get_doublev= ::cpp::Function< ::hx::Object * ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_doublev","\xf2","\x8c","\x92","\xa9"),HX_HCSTRING("iio","\x8f","\x08","\x50","\x00"),false));
	cffi_lime_al_get_enum_value= ::cpp::Function< int ( ::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_enum_value","\xe6","\xc9","\xe4","\x87"),HX_HCSTRING("si","\x96","\x64","\x00","\x00"),false));
	cffi_lime_al_get_error= ::cpp::Function< int ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_error","\x35","\x5f","\x64","\x6b"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"),false));
	cffi_lime_al_get_float= ::cpp::Function< ::cpp::Float32 ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_float","\x09","\x59","\xd1","\xfa"),HX_HCSTRING("if","\xdd","\x5b","\x00","\x00"),false));
	cffi_lime_al_get_floatv= ::cpp::Function< ::hx::Object * ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_floatv","\x4d","\x8f","\x5c","\x7c"),HX_HCSTRING("iio","\x8f","\x08","\x50","\x00"),false));
	cffi_lime_al_get_integer= ::cpp::Function< int ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_integer","\x6b","\xc6","\xb3","\x81"),HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00"),false));
	cffi_lime_al_get_integerv= ::cpp::Function< ::hx::Object * ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_integerv","\xab","\xd7","\x99","\xfb"),HX_HCSTRING("iio","\x8f","\x08","\x50","\x00"),false));
	cffi_lime_al_get_listener3f= ::cpp::Function< ::hx::Object * ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_listener3f","\xba","\x13","\x81","\x29"),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),false));
	cffi_lime_al_get_listener3i= ::cpp::Function< ::hx::Object * ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_listener3i","\xbd","\x13","\x81","\x29"),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),false));
	cffi_lime_al_get_listenerf= ::cpp::Function< ::cpp::Float32 ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_listenerf","\x5f","\xb3","\xbb","\x3a"),HX_HCSTRING("if","\xdd","\x5b","\x00","\x00"),false));
	cffi_lime_al_get_listenerfv= ::cpp::Function< ::hx::Object * ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_listenerfv","\x37","\x40","\x81","\x29"),HX_HCSTRING("iio","\x8f","\x08","\x50","\x00"),false));
	cffi_lime_al_get_listeneri= ::cpp::Function< int ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_listeneri","\x62","\xb3","\xbb","\x3a"),HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00"),false));
	cffi_lime_al_get_listeneriv= ::cpp::Function< ::hx::Object * ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_listeneriv","\xd4","\x42","\x81","\x29"),HX_HCSTRING("iio","\x8f","\x08","\x50","\x00"),false));
	cffi_lime_al_get_proc_address= ::cpp::Function< Float ( ::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_proc_address","\xfe","\x7c","\x3d","\x26"),HX_HCSTRING("sd","\x91","\x64","\x00","\x00"),false));
	cffi_lime_al_get_source3f= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_source3f","\x21","\x99","\x13","\x41"),HX_HCSTRING("oio","\x15","\x96","\x54","\x00"),false));
	cffi_lime_al_get_source3i= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_source3i","\x24","\x99","\x13","\x41"),HX_HCSTRING("oio","\x15","\x96","\x54","\x00"),false));
	cffi_lime_al_get_sourcef= ::cpp::Function< ::cpp::Float32 ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_sourcef","\xd8","\x17","\xe1","\x23"),HX_HCSTRING("oif","\x0c","\x96","\x54","\x00"),false));
	cffi_lime_al_get_sourcefv= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_sourcefv","\x9e","\xc5","\x13","\x41"),HX_HCSTRING("oiio","\x80","\xb7","\xae","\x49"),false));
	cffi_lime_al_get_sourcei= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_sourcei","\xdb","\x17","\xe1","\x23"),HX_HCSTRING("oio","\x15","\x96","\x54","\x00"),false));
	cffi_lime_al_get_sourceiv= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_sourceiv","\x3b","\xc8","\x13","\x41"),HX_HCSTRING("oiio","\x80","\xb7","\xae","\x49"),false));
	cffi_lime_al_get_string= ::cpp::Function< ::hx::Object * ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_string","\xc4","\x94","\x36","\x4c"),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),false));
	cffi_lime_al_is_buffer= ::cpp::Function< bool ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_is_buffer","\x0b","\x5b","\x4a","\x2a"),HX_HCSTRING("ob","\x13","\x61","\x00","\x00"),false));
	cffi_lime_al_is_enabled= ::cpp::Function< bool ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_is_enabled","\x16","\xb0","\x65","\xa3"),HX_HCSTRING("ib","\xd9","\x5b","\x00","\x00"),false));
	cffi_lime_al_is_extension_present= ::cpp::Function< bool ( ::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_is_extension_present","\xd0","\x16","\x00","\xef"),HX_HCSTRING("sb","\x8f","\x64","\x00","\x00"),false));
	cffi_lime_al_is_source= ::cpp::Function< bool ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_is_source","\xe6","\x4e","\xe7","\x8b"),HX_HCSTRING("ob","\x13","\x61","\x00","\x00"),false));
	cffi_lime_al_listener3f= ::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_listener3f","\x71","\x2e","\x89","\x73"),HX_HCSTRING("ifffv","\x79","\x6b","\xcc","\xb8"),false));
	cffi_lime_al_listener3i= ::cpp::Function< void ( int ,int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_listener3i","\x74","\x2e","\x89","\x73"),HX_HCSTRING("iiiiv","\xb6","\x58","\xca","\xba"),false));
	cffi_lime_al_listenerf= ::cpp::Function< void ( int ,::cpp::Float32 ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_listenerf","\x88","\x9c","\x1f","\xa8"),HX_HCSTRING("ifv","\xf9","\x05","\x50","\x00"),false));
	cffi_lime_al_listenerfv= ::cpp::Function< void ( int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_listenerfv","\xee","\x5a","\x89","\x73"),HX_HCSTRING("iov","\xd0","\x0d","\x50","\x00"),false));
	cffi_lime_al_listeneri= ::cpp::Function< void ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_listeneri","\x8b","\x9c","\x1f","\xa8"),HX_HCSTRING("iiv","\x96","\x08","\x50","\x00"),false));
	cffi_lime_al_listeneriv= ::cpp::Function< void ( int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_listeneriv","\x8b","\x5d","\x89","\x73"),HX_HCSTRING("iov","\xd0","\x0d","\x50","\x00"),false));
	cffi_lime_al_source_pause= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_source_pause","\xfc","\x3f","\x07","\xa0"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_al_source_pausev= ::cpp::Function< void ( int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_source_pausev","\xfa","\xbc","\x50","\x66"),HX_HCSTRING("iov","\xd0","\x0d","\x50","\x00"),false));
	cffi_lime_al_source_play= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_source_play","\xae","\x47","\xe1","\x7d"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_al_source_playv= ::cpp::Function< void ( int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_source_playv","\x08","\x71","\x3d","\xa7"),HX_HCSTRING("iov","\xd0","\x0d","\x50","\x00"),false));
	cffi_lime_al_source_queue_buffers= ::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_source_queue_buffers","\x8b","\xe2","\x2d","\x54"),HX_HCSTRING("oiov","\xc1","\xbc","\xae","\x49"),false));
	cffi_lime_al_source_rewind= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_source_rewind","\x35","\xa6","\xec","\x81"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_al_source_rewindv= ::cpp::Function< void ( int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_source_rewindv","\xa1","\xc8","\x24","\x2d"),HX_HCSTRING("iov","\xd0","\x0d","\x50","\x00"),false));
	cffi_lime_al_source_stop= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_source_stop","\xbc","\x09","\xe3","\x7f"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_al_source_stopv= ::cpp::Function< void ( int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_source_stopv","\x3a","\x7b","\xc5","\x66"),HX_HCSTRING("iov","\xd0","\x0d","\x50","\x00"),false));
	cffi_lime_al_source_unqueue_buffers= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_source_unqueue_buffers","\x12","\x06","\xe2","\x64"),HX_HCSTRING("oio","\x15","\x96","\x54","\x00"),false));
	cffi_lime_al_source3f= ::cpp::Function< void ( ::hx::Object * ,int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_source3f","\x18","\xc8","\x38","\x94"),HX_HCSTRING("oifffv","\xaa","\x78","\x69","\x1a"),false));
	cffi_lime_al_source3i= ::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_source3i","\x1b","\xc8","\x38","\x94"),HX_HCSTRING("oiiiiv","\xe7","\x65","\x67","\x1c"),false));
	cffi_lime_al_sourcef= ::cpp::Function< void ( ::hx::Object * ,int ,::cpp::Float32 ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_sourcef","\xc1","\x34","\x55","\xf6"),HX_HCSTRING("oifv","\xea","\xb4","\xae","\x49"),false));
	cffi_lime_al_sourcefv= ::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_sourcefv","\x95","\xf4","\x38","\x94"),HX_HCSTRING("oiov","\xc1","\xbc","\xae","\x49"),false));
	cffi_lime_al_sourcei= ::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_sourcei","\xc4","\x34","\x55","\xf6"),HX_HCSTRING("oiov","\xc1","\xbc","\xae","\x49"),false));
	cffi_lime_al_sourceiv= ::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_sourceiv","\x32","\xf7","\x38","\x94"),HX_HCSTRING("oiov","\xc1","\xbc","\xae","\x49"),false));
	cffi_lime_al_speed_of_sound= ::cpp::Function< void ( ::cpp::Float32 ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_speed_of_sound","\x89","\xb0","\xa8","\x8a"),HX_HCSTRING("fv","\x50","\x59","\x00","\x00"),false));
	cffi_lime_alc_close_device= ::cpp::Function< bool ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_close_device","\xee","\x17","\x5c","\xd1"),HX_HCSTRING("ob","\x13","\x61","\x00","\x00"),false));
	cffi_lime_alc_create_context= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_create_context","\x1d","\x4b","\x86","\xd8"),HX_HCSTRING("ooo","\x4f","\x9b","\x54","\x00"),false));
	cffi_lime_alc_destroy_context= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_destroy_context","\x99","\xa8","\x9a","\x12"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_alc_get_contexts_device= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_get_contexts_device","\xd7","\xe3","\xae","\xe6"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_alc_get_current_context= ::cpp::Function< ::hx::Object * ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_get_current_context","\x6f","\x01","\xf1","\x48"),HX_HCSTRING("o","\x6f","\x00","\x00","\x00"),false));
	cffi_lime_alc_get_error= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_get_error","\x0e","\x4d","\x6e","\x60"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_alc_get_integerv= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_get_integerv","\x72","\x57","\x31","\x49"),HX_HCSTRING("oiio","\x80","\xb7","\xae","\x49"),false));
	cffi_lime_alc_get_string= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_get_string","\xcb","\xc4","\xdc","\xbf"),HX_HCSTRING("oio","\x15","\x96","\x54","\x00"),false));
	cffi_lime_alc_make_context_current= ::cpp::Function< bool ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_make_context_current","\x89","\xfe","\x9c","\xca"),HX_HCSTRING("ob","\x13","\x61","\x00","\x00"),false));
	cffi_lime_alc_open_device= ::cpp::Function< ::hx::Object * ( ::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_open_device","\x5a","\xd6","\x40","\x50"),HX_HCSTRING("so","\x9c","\x64","\x00","\x00"),false));
	cffi_lime_alc_pause_device= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_pause_device","\x70","\xdc","\x44","\x20"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_alc_process_context= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_process_context","\x0e","\x1b","\xb1","\x00"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_alc_resume_device= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_resume_device","\x97","\x8c","\x92","\x24"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_alc_suspend_context= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_suspend_context","\x1b","\xfd","\xcc","\x57"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_arc= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_arc","\xf1","\x76","\xfc","\xf9"),HX_HCSTRING("odddddv","\x41","\x24","\xf6","\xd9"),false));
	cffi_lime_cairo_arc_negative= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_arc_negative","\xc3","\xc0","\xb7","\xd8"),HX_HCSTRING("odddddv","\x41","\x24","\xf6","\xd9"),false));
	cffi_lime_cairo_clip= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_clip","\x51","\x81","\x39","\xc4"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_clip_preserve= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_clip_preserve","\xba","\xaf","\x0e","\x79"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_clip_extents= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_clip_extents","\x1b","\xef","\x99","\x33"),HX_HCSTRING("oddddv","\xa7","\x9e","\x14","\x38"),false));
	cffi_lime_cairo_close_path= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_close_path","\x0d","\x58","\x78","\xe1"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_copy_page= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_copy_page","\x38","\xe4","\xe1","\x1e"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_create= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_create","\xbd","\xdb","\x50","\xd8"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_cairo_curve_to= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_curve_to","\x4c","\xed","\xec","\xef"),HX_HCSTRING("oddddddv","\x67","\x85","\x69","\xdd"),false));
	cffi_lime_cairo_fill= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_fill","\x04","\xe1","\x32","\xc6"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_fill_extents= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_fill_extents","\xce","\xb9","\x56","\x6b"),HX_HCSTRING("oddddv","\xa7","\x9e","\x14","\x38"),false));
	cffi_lime_cairo_fill_preserve= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_fill_preserve","\xa7","\x41","\x83","\x06"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_antialias= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_antialias","\xe4","\xbf","\xea","\x4f"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_current_point= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_current_point","\xc0","\xc4","\x0b","\xc0"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_dash= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_dash","\xdc","\xf7","\x36","\xc9"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_dash_count= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_dash_count","\xec","\xd0","\x06","\xce"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_fill_rule= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_fill_rule","\xae","\x34","\x3f","\x14"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_font_face= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_font_face","\x83","\xed","\x75","\xe9"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_font_options= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_font_options","\x38","\x0e","\x38","\xee"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_group_target= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_group_target","\x1b","\x04","\x8e","\x27"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_line_cap= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_line_cap","\x91","\x8a","\xff","\xdc"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_line_join= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_line_join","\x8b","\xcc","\x44","\x87"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_line_width= ::cpp::Function< Float ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_line_width","\x45","\xaa","\x28","\x4d"),HX_HCSTRING("od","\x15","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_matrix= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_matrix","\x4b","\x0f","\xb1","\x58"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_miter_limit= ::cpp::Function< Float ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_miter_limit","\xf7","\xda","\xf6","\xe3"),HX_HCSTRING("od","\x15","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_operator= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_operator","\x2e","\xcb","\x0b","\x90"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_source= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_source","\xe5","\x89","\x1a","\xcf"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_target= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_target","\x5b","\xcc","\xd5","\x23"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_tolerance= ::cpp::Function< Float ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_tolerance","\x43","\x26","\x7d","\x0d"),HX_HCSTRING("od","\x15","\x61","\x00","\x00"),false));
	cffi_lime_cairo_has_current_point= ::cpp::Function< bool ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_has_current_point","\x84","\x52","\x43","\x91"),HX_HCSTRING("ob","\x13","\x61","\x00","\x00"),false));
	cffi_lime_cairo_identity_matrix= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_identity_matrix","\x81","\xb1","\xfe","\x41"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_in_clip= ::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_in_clip","\xc9","\xa4","\x67","\x5b"),HX_HCSTRING("oddb","\xd3","\xe7","\xaa","\x49"),false));
	cffi_lime_cairo_in_fill= ::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_in_fill","\x7c","\x04","\x61","\x5d"),HX_HCSTRING("oddb","\xd3","\xe7","\xaa","\x49"),false));
	cffi_lime_cairo_in_stroke= ::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_in_stroke","\xf1","\x19","\x0e","\xc7"),HX_HCSTRING("oddb","\xd3","\xe7","\xaa","\x49"),false));
	cffi_lime_cairo_line_to= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_line_to","\x45","\x88","\xaa","\x7c"),HX_HCSTRING("oddv","\xe7","\xe7","\xaa","\x49"),false));
	cffi_lime_cairo_mask= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_mask","\x6d","\x53","\xcd","\xca"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_cairo_mask_surface= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_mask_surface","\x1b","\xc8","\xa3","\x8c"),HX_HCSTRING("ooddv","\xd6","\x4b","\x25","\x33"),false));
	cffi_lime_cairo_move_to= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_move_to","\x48","\xcd","\x98","\xa7"),HX_HCSTRING("oddv","\xe7","\xe7","\xaa","\x49"),false));
	cffi_lime_cairo_new_path= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_new_path","\x25","\xbc","\x98","\x94"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_paint= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_paint","\xfd","\xd5","\x07","\x63"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_paint_with_alpha= ::cpp::Function< void ( ::hx::Object * ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_paint_with_alpha","\x67","\x1b","\xfb","\x63"),HX_HCSTRING("odv","\xc1","\x91","\x54","\x00"),false));
	cffi_lime_cairo_pop_group= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pop_group","\xb0","\x94","\x6e","\x0c"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_cairo_pop_group_to_source= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pop_group_to_source","\xd0","\x9e","\x67","\xaf"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_push_group= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_push_group","\x1b","\x55","\x88","\x61"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_push_group_with_content= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_push_group_with_content","\xa4","\xbb","\x13","\xd3"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_cairo_rectangle= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_rectangle","\x0e","\x0e","\x2e","\x48"),HX_HCSTRING("oddddv","\xa7","\x9e","\x14","\x38"),false));
	cffi_lime_cairo_rel_curve_to= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_rel_curve_to","\xb2","\xac","\x52","\x05"),HX_HCSTRING("oddddddv","\x67","\x85","\x69","\xdd"),false));
	cffi_lime_cairo_rel_line_to= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_rel_line_to","\x9f","\x37","\x7e","\xc0"),HX_HCSTRING("oddv","\xe7","\xe7","\xaa","\x49"),false));
	cffi_lime_cairo_rel_move_to= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_rel_move_to","\xa2","\x7c","\x6c","\xeb"),HX_HCSTRING("oddv","\xe7","\xe7","\xaa","\x49"),false));
	cffi_lime_cairo_reset_clip= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_reset_clip","\xc1","\xbb","\xa3","\xf6"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_restore= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_restore","\x6d","\x1b","\xb5","\xc7"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_rotate= ::cpp::Function< void ( ::hx::Object * ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_rotate","\x1c","\xbb","\x61","\x27"),HX_HCSTRING("odv","\xc1","\x91","\x54","\x00"),false));
	cffi_lime_cairo_save= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_save","\xbe","\x9d","\xc4","\xce"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_scale= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_scale","\xe9","\xec","\x87","\x1e"),HX_HCSTRING("oddv","\xe7","\xe7","\xaa","\x49"),false));
	cffi_lime_cairo_set_antialias= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_antialias","\xf0","\xa1","\xf0","\x94"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_cairo_set_dash= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_dash","\x50","\x51","\x94","\x77"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_cairo_set_fill_rule= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_fill_rule","\xba","\x16","\x45","\x59"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_cairo_set_font_face= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_font_face","\x8f","\xcf","\x7b","\x2e"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_cairo_set_font_options= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_font_options","\xac","\xfb","\x79","\x44"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_cairo_set_font_size= ::cpp::Function< void ( ::hx::Object * ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_font_size","\xb3","\xbb","\x19","\x37"),HX_HCSTRING("odv","\xc1","\x91","\x54","\x00"),false));
	cffi_lime_cairo_set_line_cap= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_line_cap","\x05","\xae","\xf8","\xf1"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_cairo_set_line_join= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_line_join","\x97","\xae","\x4a","\xcc"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_cairo_set_line_width= ::cpp::Function< void ( ::hx::Object * ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_line_width","\xb9","\x92","\x48","\x6d"),HX_HCSTRING("odv","\xc1","\x91","\x54","\x00"),false));
	cffi_lime_cairo_set_matrix= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_matrix","\xbf","\xad","\x2e","\x5c"),HX_HCSTRING("oddddddv","\x67","\x85","\x69","\xdd"),false));
	cffi_lime_cairo_set_miter_limit= ::cpp::Function< void ( ::hx::Object * ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_miter_limit","\x03","\x58","\xc2","\xdf"),HX_HCSTRING("odv","\xc1","\x91","\x54","\x00"),false));
	cffi_lime_cairo_set_operator= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_operator","\xa2","\xee","\x04","\xa5"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_cairo_set_source= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_source","\x59","\x28","\x98","\xd2"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_cairo_set_source_rgb= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_source_rgb","\xe7","\xe8","\x97","\x83"),HX_HCSTRING("odddv","\x01","\xf3","\xdf","\x2b"),false));
	cffi_lime_cairo_set_source_rgba= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_source_rgba","\x9a","\xe1","\x53","\xa1"),HX_HCSTRING("oddddv","\xa7","\x9e","\x14","\x38"),false));
	cffi_lime_cairo_set_source_surface= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_source_surface","\x07","\x69","\xef","\xcf"),HX_HCSTRING("ooddv","\xd6","\x4b","\x25","\x33"),false));
	cffi_lime_cairo_set_tolerance= ::cpp::Function< void ( ::hx::Object * ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_tolerance","\x4f","\x08","\x83","\x52"),HX_HCSTRING("odv","\xc1","\x91","\x54","\x00"),false));
	cffi_lime_cairo_show_glyphs= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_show_glyphs","\x28","\x2f","\xf5","\x54"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_cairo_show_page= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_show_page","\xf0","\x25","\x4b","\xc7"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_show_text= ::cpp::Function< void ( ::hx::Object * ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_show_text","\x4e","\x18","\xf3","\xc9"),HX_HCSTRING("osv","\xd2","\x9e","\x54","\x00"),false));
	cffi_lime_cairo_status= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_status","\xf3","\x5b","\x3d","\x62"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_stroke= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_stroke","\x79","\x28","\x76","\x6d"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_stroke_extents= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_stroke_extents","\x43","\xfe","\x0d","\xea"),HX_HCSTRING("oddddv","\xa7","\x9e","\x14","\x38"),false));
	cffi_lime_cairo_stroke_preserve= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_stroke_preserve","\x92","\xe3","\x27","\x68"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_text_path= ::cpp::Function< void ( ::hx::Object * ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_text_path","\x96","\x5b","\xd4","\x31"),HX_HCSTRING("osv","\xd2","\x9e","\x54","\x00"),false));
	cffi_lime_cairo_transform= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_transform","\x4b","\x67","\x44","\x74"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_cairo_translate= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_translate","\x2d","\x11","\x31","\x78"),HX_HCSTRING("oddv","\xe7","\xe7","\xaa","\x49"),false));
	cffi_lime_cairo_version= ::cpp::Function< int ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_version","\x37","\x9b","\xf6","\xd9"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"),false));
	cffi_lime_cairo_version_string= ::cpp::Function< ::String ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_version_string","\x19","\x84","\x60","\x45"),HX_HCSTRING("s","\x73","\x00","\x00","\x00"),false));
	cffi_lime_cairo_font_face_status= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_face_status","\x25","\x18","\x5c","\xf3"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_font_options_create= ::cpp::Function< ::hx::Object * ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_options_create","\x4c","\x3f","\x9e","\x9d"),HX_HCSTRING("o","\x6f","\x00","\x00","\x00"),false));
	cffi_lime_cairo_font_options_get_antialias= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_options_get_antialias","\x35","\x7c","\x8d","\xf3"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_font_options_get_hint_metrics= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_options_get_hint_metrics","\x24","\xe1","\x9b","\x00"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_font_options_get_hint_style= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_options_get_hint_style","\xd2","\xb9","\x3d","\x00"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_font_options_get_subpixel_order= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_options_get_subpixel_order","\x6e","\x5e","\x52","\xfe"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_font_options_set_antialias= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_options_set_antialias","\x41","\x5e","\x93","\x38"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_cairo_font_options_set_hint_metrics= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_options_set_hint_metrics","\x98","\xce","\xdd","\x56"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_cairo_font_options_set_hint_style= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_options_set_hint_style","\x46","\xa2","\x5d","\x20"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_cairo_font_options_set_subpixel_order= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_options_set_subpixel_order","\xe2","\x90","\x01","\xdb"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_cairo_ft_font_face_create= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_ft_font_face_create","\xde","\x6b","\x31","\x70"),HX_HCSTRING("oio","\x15","\x96","\x54","\x00"),false));
	cffi_lime_cairo_image_surface_create= ::cpp::Function< ::hx::Object * ( int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_image_surface_create","\x33","\x6e","\xfc","\xce"),HX_HCSTRING("iiio","\xc6","\x6f","\xb7","\x45"),false));
	cffi_lime_cairo_image_surface_create_for_data= ::cpp::Function< ::hx::Object * ( Float ,int ,int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_image_surface_create_for_data","\x2c","\x35","\x7d","\x63"),HX_HCSTRING("diiiio","\xcb","\x6d","\x7a","\xb6"),false));
	cffi_lime_cairo_image_surface_get_data= ::cpp::Function< Float ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_image_surface_get_data","\xaa","\x94","\xc4","\x6f"),HX_HCSTRING("od","\x15","\x61","\x00","\x00"),false));
	cffi_lime_cairo_image_surface_get_format= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_image_surface_get_format","\xb7","\x6d","\x9c","\x34"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_image_surface_get_height= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_image_surface_get_height","\x67","\xe6","\x59","\x39"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_image_surface_get_stride= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_image_surface_get_stride","\x99","\xfe","\x3d","\x48"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_image_surface_get_width= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_image_surface_get_width","\x86","\x27","\x18","\x52"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_pattern_add_color_stop_rgb= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_add_color_stop_rgb","\x5a","\x49","\x3d","\xbb"),HX_HCSTRING("oddddv","\xa7","\x9e","\x14","\x38"),false));
	cffi_lime_cairo_pattern_add_color_stop_rgba= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_add_color_stop_rgba","\xc7","\xe5","\x62","\x1a"),HX_HCSTRING("odddddv","\x41","\x24","\xf6","\xd9"),false));
	cffi_lime_cairo_pattern_create_for_surface= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_create_for_surface","\xc4","\x41","\xff","\xa6"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_cairo_pattern_create_linear= ::cpp::Function< ::hx::Object * ( Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_create_linear","\xf8","\x82","\x42","\xcf"),HX_HCSTRING("ddddo","\x6f","\x91","\x77","\xd6"),false));
	cffi_lime_cairo_pattern_create_radial= ::cpp::Function< ::hx::Object * ( Float ,Float ,Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_create_radial","\xf2","\xef","\x98","\x93"),HX_HCSTRING("ddddddo","\xef","\x09","\x8a","\x10"),false));
	cffi_lime_cairo_pattern_create_rgb= ::cpp::Function< ::hx::Object * ( Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_create_rgb","\x1a","\x90","\x6b","\xce"),HX_HCSTRING("dddo","\x0b","\x8f","\x65","\x42"),false));
	cffi_lime_cairo_pattern_create_rgba= ::cpp::Function< ::hx::Object * ( Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_create_rgba","\x07","\x87","\xb2","\xcf"),HX_HCSTRING("ddddo","\x6f","\x91","\x77","\xd6"),false));
	cffi_lime_cairo_pattern_get_color_stop_count= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_get_color_stop_count","\x47","\x7e","\x23","\xf0"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_pattern_get_extend= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_get_extend","\xb3","\x1c","\x37","\x1f"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_pattern_get_filter= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_get_filter","\x91","\x6a","\x51","\xdd"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_pattern_get_matrix= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_get_matrix","\x1a","\x81","\xe4","\x13"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_cairo_pattern_set_extend= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_set_extend","\x27","\xbb","\xb4","\x22"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_cairo_pattern_set_filter= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_set_filter","\x05","\x09","\xcf","\xe0"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_cairo_pattern_set_matrix= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_set_matrix","\x8e","\x1f","\x62","\x17"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_cairo_surface_flush= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_surface_flush","\x51","\x85","\xbf","\xed"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_curl_getdate= ::cpp::Function< Float ( ::String ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_getdate","\xdb","\x3c","\x06","\x67"),HX_HCSTRING("sdd","\xb3","\x9a","\x57","\x00"),false));
	cffi_lime_curl_global_cleanup= ::cpp::Function< void ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_global_cleanup","\xd1","\x6f","\xf2","\x40"),HX_HCSTRING("v","\x76","\x00","\x00","\x00"),false));
	cffi_lime_curl_global_init= ::cpp::Function< int ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_global_init","\x43","\x79","\xfb","\xd4"),HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00"),false));
	cffi_lime_curl_version= ::cpp::Function< ::hx::Object * ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_version","\x2f","\x4a","\xeb","\xb9"),HX_HCSTRING("o","\x6f","\x00","\x00","\x00"),false));
	cffi_lime_curl_version_info= ::cpp::Function< ::hx::Object * ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_version_info","\xbe","\xbf","\x7a","\x9e"),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),false));
	cffi_lime_curl_easy_cleanup= ::cpp::Function< void ( Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_cleanup","\x30","\xcd","\xaa","\x62"),HX_HCSTRING("dv","\x92","\x57","\x00","\x00"),false));
	cffi_lime_curl_easy_duphandle= ::cpp::Function< Float ( Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_duphandle","\xb3","\xc0","\xa0","\x67"),HX_HCSTRING("dd","\x80","\x57","\x00","\x00"),false));
	cffi_lime_curl_easy_escape= ::cpp::Function< ::hx::Object * ( Float ,::String ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_escape","\xf5","\x67","\xb1","\x5f"),HX_HCSTRING("dsio","\x35","\xf5","\x70","\x42"),false));
	cffi_lime_curl_easy_getinfo= ::cpp::Function< ::hx::Object * ( Float ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_getinfo","\x10","\x7d","\xcd","\xe4"),HX_HCSTRING("dio","\x4a","\x3d","\x4c","\x00"),false));
	cffi_lime_curl_easy_init= ::cpp::Function< Float ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_init","\x84","\x9a","\xe4","\x65"),HX_HCSTRING("d","\x64","\x00","\x00","\x00"),false));
	cffi_lime_curl_easy_pause= ::cpp::Function< int ( Float ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_pause","\x02","\xfd","\x61","\xc1"),HX_HCSTRING("dii","\x44","\x3d","\x4c","\x00"),false));
	cffi_lime_curl_easy_perform= ::cpp::Function< int ( Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_perform","\xad","\xa9","\x46","\x32"),HX_HCSTRING("di","\x85","\x57","\x00","\x00"),false));
	cffi_lime_curl_easy_recv= ::cpp::Function< int ( Float ,::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_recv","\x9a","\xac","\xd0","\x6b"),HX_HCSTRING("doiii","\xde","\xb9","\xc0","\xdd"),false));
	cffi_lime_curl_easy_reset= ::cpp::Function< void ( Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_reset","\xdb","\x6f","\xd2","\xea"),HX_HCSTRING("dv","\x92","\x57","\x00","\x00"),false));
	cffi_lime_curl_easy_send= ::cpp::Function< int ( Float ,::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_send","\xbc","\xec","\x79","\x6c"),HX_HCSTRING("doiii","\xde","\xb9","\xc0","\xdd"),false));
	cffi_lime_curl_easy_setopt= ::cpp::Function< int ( Float ,int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_setopt","\x45","\x96","\x5b","\xf4"),HX_HCSTRING("dioi","\xdf","\x63","\x69","\x42"),false));
	cffi_lime_curl_easy_strerror= ::cpp::Function< ::hx::Object * ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_strerror","\xeb","\x2a","\x7c","\x55"),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),false));
	cffi_lime_curl_easy_unescape= ::cpp::Function< ::hx::Object * ( Float ,::String ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_unescape","\x0e","\x9c","\x61","\xa1"),HX_HCSTRING("dsiio","\x60","\x94","\x65","\xe0"),false));
	cffi_lime_gl_active_texture= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_active_texture","\x52","\xdf","\x77","\xb3"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_gl_attach_shader= ::cpp::Function< void ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_attach_shader","\x6f","\x78","\x09","\x06"),HX_HCSTRING("iiv","\x96","\x08","\x50","\x00"),false));
	cffi_lime_gl_bind_attrib_location= ::cpp::Function< void ( int ,int ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_bind_attrib_location","\x78","\xd0","\x23","\x1a"),HX_HCSTRING("iisv","\x83","\x78","\xb7","\x45"),false));
	cffi_lime_gl_bind_buffer= ::cpp::Function< void ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_bind_buffer","\x52","\x57","\xd9","\xe2"),HX_HCSTRING("iiv","\x96","\x08","\x50","\x00"),false));
	cffi_lime_gl_bind_framebuffer= ::cpp::Function< void ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_bind_framebuffer","\x5b","\xd1","\x58","\x70"),HX_HCSTRING("iiv","\x96","\x08","\x50","\x00"),false));
	cffi_lime_gl_bind_renderbuffer= ::cpp::Function< void ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_bind_renderbuffer","\xa8","\x70","\xea","\x63"),HX_HCSTRING("iiv","\x96","\x08","\x50","\x00"),false));
	cffi_lime_gl_bind_texture= ::cpp::Function< void ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_bind_texture","\x49","\x36","\xa3","\x88"),HX_HCSTRING("iiv","\x96","\x08","\x50","\x00"),false));
	cffi_lime_gl_blend_color= ::cpp::Function< void ( ::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_blend_color","\x85","\xd0","\xce","\x3a"),HX_HCSTRING("ffffv","\xf6","\xad","\x98","\xfe"),false));
	cffi_lime_gl_blend_equation= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_blend_equation","\xaa","\xfd","\x08","\x1f"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_gl_blend_equation_separate= ::cpp::Function< void ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_blend_equation_separate","\xd8","\x13","\x95","\x58"),HX_HCSTRING("iiv","\x96","\x08","\x50","\x00"),false));
	cffi_lime_gl_blend_func= ::cpp::Function< void ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_blend_func","\x62","\x46","\x02","\xe9"),HX_HCSTRING("iiv","\x96","\x08","\x50","\x00"),false));
	cffi_lime_gl_blend_func_separate= ::cpp::Function< void ( int ,int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_blend_func_separate","\x20","\xf4","\xb8","\x2e"),HX_HCSTRING("iiiiv","\xb6","\x58","\xca","\xba"),false));
	cffi_lime_gl_buffer_data= ::cpp::Function< void ( int ,int ,Float ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_buffer_data","\xd9","\x31","\x40","\x74"),HX_HCSTRING("iidiv","\x71","\x8d","\xc6","\xba"),false));
	cffi_lime_gl_buffer_sub_data= ::cpp::Function< void ( int ,int ,int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_buffer_sub_data","\xb8","\x37","\x6c","\xab"),HX_HCSTRING("iiidv","\x5b","\x54","\xca","\xba"),false));
	cffi_lime_gl_check_framebuffer_status= ::cpp::Function< int ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_check_framebuffer_status","\x0b","\x35","\xe1","\xea"),HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00"),false));
	cffi_lime_gl_clear= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_clear","\x5d","\x92","\x00","\x3b"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_gl_clear_color= ::cpp::Function< void ( ::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_clear_color","\xc1","\xee","\x49","\x1a"),HX_HCSTRING("ffffv","\xf6","\xad","\x98","\xfe"),false));
	cffi_lime_gl_clear_depthf= ::cpp::Function< void ( ::cpp::Float32 ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_clear_depthf","\xe5","\x26","\x69","\x8d"),HX_HCSTRING("fv","\x50","\x59","\x00","\x00"),false));
	cffi_lime_gl_clear_stencil= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_clear_stencil","\xda","\xce","\x51","\x44"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_gl_color_mask= ::cpp::Function< void ( bool ,bool ,bool ,bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_color_mask","\xb8","\xf1","\xa7","\x79"),HX_HCSTRING("bbbbv","\xf6","\x74","\x56","\xae"),false));
	cffi_lime_gl_compile_shader= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_compile_shader","\xe1","\xd4","\x68","\x7c"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_gl_compressed_tex_image_2d= ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_compressed_tex_image_2d","\xbc","\x70","\xb8","\x76"),HX_HCSTRING("iiiiiiidv","\x9b","\xcc","\x45","\xbf"),false));
	cffi_lime_gl_compressed_tex_sub_image_2d= ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_compressed_tex_sub_image_2d","\x9b","\x19","\x2d","\x07"),HX_HCSTRING("iiiiiiiidv","\x12","\xf7","\xd0","\x9d"),false));
	cffi_lime_gl_copy_tex_image_2d= ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_copy_tex_image_2d","\x08","\x15","\x17","\x3a"),HX_HCSTRING("iiiiiiiiv","\xf6","\xd0","\x45","\xbf"),false));
	cffi_lime_gl_copy_tex_sub_image_2d= ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_copy_tex_sub_image_2d","\xe7","\xd3","\x21","\x4b"),HX_HCSTRING("iiiiiiiiv","\xf6","\xd0","\x45","\xbf"),false));
	cffi_lime_gl_create_buffer= ::cpp::Function< int ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_create_buffer","\xf3","\xef","\xe7","\x8a"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"),false));
	cffi_lime_gl_create_framebuffer= ::cpp::Function< int ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_create_framebuffer","\x1a","\x51","\xd8","\x73"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"),false));
	cffi_lime_gl_create_program= ::cpp::Function< int ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_create_program","\x31","\xac","\x72","\x42"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"),false));
	cffi_lime_gl_create_renderbuffer= ::cpp::Function< int ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_create_renderbuffer","\x09","\xb8","\xfa","\x6f"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"),false));
	cffi_lime_gl_create_shader= ::cpp::Function< int ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_create_shader","\x18","\xf2","\x73","\xd7"),HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00"),false));
	cffi_lime_gl_create_texture= ::cpp::Function< int ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_create_texture","\x88","\x2a","\x5a","\xed"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"),false));
	cffi_lime_gl_cull_face= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_cull_face","\x5a","\x6e","\xd7","\xa6"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_gl_delete_buffer= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_delete_buffer","\xa4","\xaa","\x2e","\x01"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_gl_delete_framebuffer= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_delete_framebuffer","\xc9","\x34","\x1a","\xa6"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_gl_delete_program= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_delete_program","\x60","\x4c","\x0f","\x4a"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_gl_delete_renderbuffer= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_delete_renderbuffer","\x7a","\x0d","\x60","\x37"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_gl_delete_shader= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_delete_shader","\xc9","\xac","\xba","\x4d"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_gl_delete_texture= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_delete_texture","\xb7","\xca","\xf6","\xf4"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_gl_depth_func= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_depth_func","\x70","\x78","\x16","\xad"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_gl_depth_mask= ::cpp::Function< void ( bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_depth_mask","\x18","\xce","\xa7","\xb1"),HX_HCSTRING("bv","\xd4","\x55","\x00","\x00"),false));
	cffi_lime_gl_depth_rangef= ::cpp::Function< void ( ::cpp::Float32 ,::cpp::Float32 ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_depth_rangef","\x35","\x90","\x41","\x42"),HX_HCSTRING("ffv","\x36","\xbf","\x4d","\x00"),false));
	cffi_lime_gl_detach_shader= ::cpp::Function< void ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_detach_shader","\xa1","\x84","\x13","\xfd"),HX_HCSTRING("iiv","\x96","\x08","\x50","\x00"),false));
	cffi_lime_gl_disable= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_disable","\xb8","\x5e","\x23","\x70"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_gl_disable_vertex_attrib_array= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_disable_vertex_attrib_array","\x58","\xba","\x8e","\x0a"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_gl_draw_arrays= ::cpp::Function< void ( int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_draw_arrays","\xa5","\x43","\x0c","\x17"),HX_HCSTRING("iiiv","\xcd","\x6f","\xb7","\x45"),false));
	cffi_lime_gl_draw_elements= ::cpp::Function< void ( int ,int ,int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_draw_elements","\xe2","\xd1","\x98","\xb9"),HX_HCSTRING("iiidv","\x5b","\x54","\xca","\xba"),false));
	cffi_lime_gl_enable= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_enable","\xb3","\x43","\x5f","\x56"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_gl_enable_vertex_attrib_array= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_enable_vertex_attrib_array","\xd3","\x1e","\xa2","\xea"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_gl_finish= ::cpp::Function< void ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_finish","\x83","\xd5","\x56","\xe4"),HX_HCSTRING("v","\x76","\x00","\x00","\x00"),false));
	cffi_lime_gl_flush= ::cpp::Function< void ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_flush","\x94","\x83","\x40","\xf5"),HX_HCSTRING("v","\x76","\x00","\x00","\x00"),false));
	cffi_lime_gl_framebuffer_renderbuffer= ::cpp::Function< void ( int ,int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_framebuffer_renderbuffer","\xd8","\x1b","\x4b","\x9a"),HX_HCSTRING("iiiiv","\xb6","\x58","\xca","\xba"),false));
	cffi_lime_gl_framebuffer_texture2D= ::cpp::Function< void ( int ,int ,int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_framebuffer_texture2D","\x2b","\xbd","\x7d","\x0a"),HX_HCSTRING("iiiiiv","\xad","\x3b","\x43","\xb6"),false));
	cffi_lime_gl_front_face= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_front_face","\x63","\xa0","\x73","\x7d"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_gl_generate_mipmap= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_generate_mipmap","\x62","\xa5","\x38","\xe6"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_gl_get_active_attrib= ::cpp::Function< ::hx::Object * ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_active_attrib","\x0a","\x40","\xb7","\xd1"),HX_HCSTRING("iio","\x8f","\x08","\x50","\x00"),false));
	cffi_lime_gl_get_active_uniform= ::cpp::Function< ::hx::Object * ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_active_uniform","\x74","\x90","\xd7","\x2a"),HX_HCSTRING("iio","\x8f","\x08","\x50","\x00"),false));
	cffi_lime_gl_get_attached_shaders= ::cpp::Function< ::hx::Object * ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_attached_shaders","\xcc","\x1c","\xb8","\x0d"),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),false));
	cffi_lime_gl_get_attrib_location= ::cpp::Function< int ( int ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_attrib_location","\xf1","\x00","\xcb","\xa5"),HX_HCSTRING("isi","\x3f","\x11","\x50","\x00"),false));
	cffi_lime_gl_get_boolean= ::cpp::Function< bool ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_boolean","\x8f","\xe7","\xa6","\x78"),HX_HCSTRING("ib","\xd9","\x5b","\x00","\x00"),false));
	cffi_lime_gl_get_booleanv= ::cpp::Function< void ( int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_booleanv","\x07","\xb6","\x63","\x19"),HX_HCSTRING("idv","\x3b","\x04","\x50","\x00"),false));
	cffi_lime_gl_get_buffer_parameteri= ::cpp::Function< int ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_buffer_parameteri","\x66","\xb2","\x90","\xb3"),HX_HCSTRING("iii","\x89","\x08","\x50","\x00"),false));
	cffi_lime_gl_get_buffer_parameteriv= ::cpp::Function< void ( int ,int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_buffer_parameteriv","\x50","\x67","\x0b","\x6b"),HX_HCSTRING("iidv","\x72","\x6b","\xb7","\x45"),false));
	cffi_lime_gl_get_context_attributes= ::cpp::Function< ::hx::Object * ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_context_attributes","\xe0","\xc6","\xc6","\x3e"),HX_HCSTRING("o","\x6f","\x00","\x00","\x00"),false));
	cffi_lime_gl_get_error= ::cpp::Function< int ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_error","\xef","\xf0","\xe0","\xf5"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"),false));
	cffi_lime_gl_get_extension= ::cpp::Function< ::hx::Object * ( ::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_extension","\x26","\xd8","\x5e","\xd7"),HX_HCSTRING("so","\x9c","\x64","\x00","\x00"),false));
	cffi_lime_gl_get_float= ::cpp::Function< ::cpp::Float32 ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_float","\xc3","\xea","\x4d","\x85"),HX_HCSTRING("if","\xdd","\x5b","\x00","\x00"),false));
	cffi_lime_gl_get_floatv= ::cpp::Function< void ( int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_floatv","\x53","\x80","\xdf","\x1e"),HX_HCSTRING("idv","\x3b","\x04","\x50","\x00"),false));
	cffi_lime_gl_get_framebuffer_attachment_parameteri= ::cpp::Function< int ( int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_framebuffer_attachment_parameteri","\x51","\x62","\xed","\x59"),HX_HCSTRING("iiii","\xc0","\x6f","\xb7","\x45"),false));
	cffi_lime_gl_get_framebuffer_attachment_parameteriv= ::cpp::Function< void ( int ,int ,int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_framebuffer_attachment_parameteriv","\x05","\xa5","\xc8","\x55"),HX_HCSTRING("iiidv","\x5b","\x54","\xca","\xba"),false));
	cffi_lime_gl_get_integer= ::cpp::Function< int ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_integer","\xa5","\xba","\xc3","\x11"),HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00"),false));
	cffi_lime_gl_get_integerv= ::cpp::Function< void ( int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_integerv","\x31","\x96","\x7f","\x79"),HX_HCSTRING("idv","\x3b","\x04","\x50","\x00"),false));
	cffi_lime_gl_get_program_info_log= ::cpp::Function< ::hx::Object * ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_program_info_log","\x87","\x8b","\x1c","\x48"),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),false));
	cffi_lime_gl_get_programi= ::cpp::Function< int ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_programi","\x9e","\x36","\x7d","\xde"),HX_HCSTRING("iii","\x89","\x08","\x50","\x00"),false));
	cffi_lime_gl_get_programiv= ::cpp::Function< void ( int ,int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_programiv","\x18","\x94","\x12","\xcf"),HX_HCSTRING("iidv","\x72","\x6b","\xb7","\x45"),false));
	cffi_lime_gl_get_renderbuffer_parameteri= ::cpp::Function< int ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_renderbuffer_parameteri","\x90","\xdd","\x65","\xbc"),HX_HCSTRING("iii","\x89","\x08","\x50","\x00"),false));
	cffi_lime_gl_get_renderbuffer_parameteriv= ::cpp::Function< void ( int ,int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_renderbuffer_parameteriv","\xe6","\x00","\xbc","\x1c"),HX_HCSTRING("iidv","\x72","\x6b","\xb7","\x45"),false));
	cffi_lime_gl_get_shader_info_log= ::cpp::Function< ::hx::Object * ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_shader_info_log","\x74","\x08","\x6b","\x9a"),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),false));
	cffi_lime_gl_get_shaderi= ::cpp::Function< int ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_shaderi","\x8b","\x7e","\x2e","\x5a"),HX_HCSTRING("iii","\x89","\x08","\x50","\x00"),false));
	cffi_lime_gl_get_shaderiv= ::cpp::Function< void ( int ,int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_shaderiv","\x8b","\x3b","\x80","\x8e"),HX_HCSTRING("iidv","\x72","\x6b","\xb7","\x45"),false));
	cffi_lime_gl_get_shader_precision_format= ::cpp::Function< ::hx::Object * ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_shader_precision_format","\xd9","\x5f","\xb1","\x89"),HX_HCSTRING("iio","\x8f","\x08","\x50","\x00"),false));
	cffi_lime_gl_get_shader_source= ::cpp::Function< ::hx::Object * ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_shader_source","\x1c","\x86","\xa3","\xe7"),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),false));
	cffi_lime_gl_get_string= ::cpp::Function< ::hx::Object * ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_string","\xca","\x85","\xb9","\xee"),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),false));
	cffi_lime_gl_get_tex_parameterf= ::cpp::Function< ::cpp::Float32 ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_tex_parameterf","\x2e","\xb7","\x53","\xae"),HX_HCSTRING("iif","\x86","\x08","\x50","\x00"),false));
	cffi_lime_gl_get_tex_parameterfv= ::cpp::Function< void ( int ,int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_tex_parameterfv","\x88","\x91","\xec","\xda"),HX_HCSTRING("iidv","\x72","\x6b","\xb7","\x45"),false));
	cffi_lime_gl_get_tex_parameteri= ::cpp::Function< int ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_tex_parameteri","\x31","\xb7","\x53","\xae"),HX_HCSTRING("iii","\x89","\x08","\x50","\x00"),false));
	cffi_lime_gl_get_tex_parameteriv= ::cpp::Function< void ( int ,int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_tex_parameteriv","\x25","\x94","\xec","\xda"),HX_HCSTRING("iidv","\x72","\x6b","\xb7","\x45"),false));
	cffi_lime_gl_get_uniformf= ::cpp::Function< ::cpp::Float32 ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_uniformf","\xeb","\x19","\xaa","\x5a"),HX_HCSTRING("iif","\x86","\x08","\x50","\x00"),false));
	cffi_lime_gl_get_uniformfv= ::cpp::Function< void ( int ,int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_uniformfv","\x2b","\x94","\x2c","\xfa"),HX_HCSTRING("iidv","\x72","\x6b","\xb7","\x45"),false));
	cffi_lime_gl_get_uniformi= ::cpp::Function< int ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_uniformi","\xee","\x19","\xaa","\x5a"),HX_HCSTRING("iii","\x89","\x08","\x50","\x00"),false));
	cffi_lime_gl_get_uniformiv= ::cpp::Function< void ( int ,int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_uniformiv","\xc8","\x96","\x2c","\xfa"),HX_HCSTRING("iidv","\x72","\x6b","\xb7","\x45"),false));
	cffi_lime_gl_get_uniform_location= ::cpp::Function< int ( int ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_uniform_location","\x19","\x0c","\x33","\x6c"),HX_HCSTRING("isi","\x3f","\x11","\x50","\x00"),false));
	cffi_lime_gl_get_vertex_attribi= ::cpp::Function< int ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_vertex_attribi","\xbd","\x30","\x62","\x1b"),HX_HCSTRING("iii","\x89","\x08","\x50","\x00"),false));
	cffi_lime_gl_get_vertex_attribiv= ::cpp::Function< void ( int ,int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_vertex_attribiv","\x19","\x75","\x88","\xda"),HX_HCSTRING("iidv","\x72","\x6b","\xb7","\x45"),false));
	cffi_lime_gl_get_vertex_attrib_pointerv= ::cpp::Function< Float ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_get_vertex_attrib_pointerv","\xcc","\x80","\x45","\xbc"),HX_HCSTRING("iid","\x84","\x08","\x50","\x00"),false));
	cffi_lime_gl_hint= ::cpp::Function< void ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_hint","\xb7","\x26","\x75","\xcc"),HX_HCSTRING("iiv","\x96","\x08","\x50","\x00"),false));
	cffi_lime_gl_is_buffer= ::cpp::Function< bool ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_is_buffer","\xc5","\xec","\xc6","\xb4"),HX_HCSTRING("ib","\xd9","\x5b","\x00","\x00"),false));
	cffi_lime_gl_is_enabled= ::cpp::Function< bool ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_is_enabled","\x1c","\xa1","\xe8","\x45"),HX_HCSTRING("ib","\xd9","\x5b","\x00","\x00"),false));
	cffi_lime_gl_is_framebuffer= ::cpp::Function< bool ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_is_framebuffer","\x08","\x9b","\x19","\xab"),HX_HCSTRING("ib","\xd9","\x5b","\x00","\x00"),false));
	cffi_lime_gl_is_program= ::cpp::Function< bool ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_is_program","\x1f","\xe7","\xb0","\xbb"),HX_HCSTRING("ib","\xd9","\x5b","\x00","\x00"),false));
	cffi_lime_gl_is_renderbuffer= ::cpp::Function< bool ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_is_renderbuffer","\x5b","\x1e","\xda","\x91"),HX_HCSTRING("ib","\xd9","\x5b","\x00","\x00"),false));
	cffi_lime_gl_is_shader= ::cpp::Function< bool ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_is_shader","\xea","\xee","\x52","\x01"),HX_HCSTRING("ib","\xd9","\x5b","\x00","\x00"),false));
	cffi_lime_gl_is_texture= ::cpp::Function< bool ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_is_texture","\x76","\x65","\x98","\x66"),HX_HCSTRING("ib","\xd9","\x5b","\x00","\x00"),false));
	cffi_lime_gl_line_width= ::cpp::Function< void ( ::cpp::Float32 ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_line_width","\x6b","\x71","\x5f","\x53"),HX_HCSTRING("fv","\x50","\x59","\x00","\x00"),false));
	cffi_lime_gl_link_program= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_link_program","\x2f","\xdf","\xcf","\x33"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_gl_object_deregister= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_object_deregister","\x74","\xd8","\xa1","\xd6"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_gl_object_from_id= ::cpp::Function< ::hx::Object * ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_object_from_id","\x40","\xff","\x06","\x4e"),HX_HCSTRING("iio","\x8f","\x08","\x50","\x00"),false));
	cffi_lime_gl_object_register= ::cpp::Function< void ( int ,int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_object_register","\xf3","\x13","\xaa","\x16"),HX_HCSTRING("iiov","\x07","\x75","\xb7","\x45"),false));
	cffi_lime_gl_pixel_storei= ::cpp::Function< void ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_pixel_storei","\x71","\xb2","\x56","\x3d"),HX_HCSTRING("iiv","\x96","\x08","\x50","\x00"),false));
	cffi_lime_gl_polygon_offset= ::cpp::Function< void ( ::cpp::Float32 ,::cpp::Float32 ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_polygon_offset","\x28","\x8f","\x6c","\xe3"),HX_HCSTRING("ffv","\x36","\xbf","\x4d","\x00"),false));
	cffi_lime_gl_read_pixels= ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_read_pixels","\x06","\x09","\x69","\xf5"),HX_HCSTRING("iiiiiidv","\x32","\xbb","\x41","\x3a"),false));
	cffi_lime_gl_renderbuffer_storage= ::cpp::Function< void ( int ,int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_renderbuffer_storage","\xc2","\x94","\xf1","\x7b"),HX_HCSTRING("iiiiv","\xb6","\x58","\xca","\xba"),false));
	cffi_lime_gl_sample_coverage= ::cpp::Function< void ( ::cpp::Float32 ,bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_sample_coverage","\xad","\x98","\xc5","\x86"),HX_HCSTRING("fbv","\xba","\xbb","\x4d","\x00"),false));
	cffi_lime_gl_scissor= ::cpp::Function< void ( int ,int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_scissor","\xec","\x1c","\xb2","\xc3"),HX_HCSTRING("iiiiv","\xb6","\x58","\xca","\xba"),false));
	cffi_lime_gl_shader_source= ::cpp::Function< void ( int ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_shader_source","\xc5","\xd2","\xe2","\x7f"),HX_HCSTRING("isv","\x4c","\x11","\x50","\x00"),false));
	cffi_lime_gl_stencil_func= ::cpp::Function< void ( int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_stencil_func","\xd7","\xb0","\x4f","\x64"),HX_HCSTRING("iiiv","\xcd","\x6f","\xb7","\x45"),false));
	cffi_lime_gl_stencil_func_separate= ::cpp::Function< void ( int ,int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_stencil_func_separate","\x0b","\x13","\x77","\x19"),HX_HCSTRING("iiiiv","\xb6","\x58","\xca","\xba"),false));
	cffi_lime_gl_stencil_mask= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_stencil_mask","\x7f","\x06","\xe1","\x68"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_gl_stencil_mask_separate= ::cpp::Function< void ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_stencil_mask_separate","\x63","\xc8","\x71","\x65"),HX_HCSTRING("iiv","\x96","\x08","\x50","\x00"),false));
	cffi_lime_gl_stencil_op= ::cpp::Function< void ( int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_stencil_op","\xf4","\x8b","\x0c","\xa5"),HX_HCSTRING("iiiv","\xcd","\x6f","\xb7","\x45"),false));
	cffi_lime_gl_stencil_op_separate= ::cpp::Function< void ( int ,int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_stencil_op_separate","\x4e","\x6c","\x36","\x5e"),HX_HCSTRING("iiiiv","\xb6","\x58","\xca","\xba"),false));
	cffi_lime_gl_tex_image_2d= ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_tex_image_2d","\x5e","\xab","\x7a","\x34"),HX_HCSTRING("iiiiiiiidv","\x12","\xf7","\xd0","\x9d"),false));
	cffi_lime_gl_tex_parameterf= ::cpp::Function< void ( int ,int ,::cpp::Float32 ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_tex_parameterf","\x65","\x7e","\x77","\x4d"),HX_HCSTRING("iifv","\x30","\x6d","\xb7","\x45"),false));
	cffi_lime_gl_tex_parameteri= ::cpp::Function< void ( int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_tex_parameteri","\x68","\x7e","\x77","\x4d"),HX_HCSTRING("iiiv","\xcd","\x6f","\xb7","\x45"),false));
	cffi_lime_gl_tex_sub_image_2d= ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_tex_sub_image_2d","\x3d","\x4d","\x7e","\x52"),HX_HCSTRING("iiiiiiiidv","\x12","\xf7","\xd0","\x9d"),false));
	cffi_lime_gl_uniform1f= ::cpp::Function< void ( int ,::cpp::Float32 ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_uniform1f","\x19","\xea","\xeb","\x46"),HX_HCSTRING("ifv","\xf9","\x05","\x50","\x00"),false));
	cffi_lime_gl_uniform1fv= ::cpp::Function< void ( int ,int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_uniform1fv","\x3d","\xec","\x80","\xc7"),HX_HCSTRING("iidv","\x72","\x6b","\xb7","\x45"),false));
	cffi_lime_gl_uniform1i= ::cpp::Function< void ( int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_uniform1i","\x1c","\xea","\xeb","\x46"),HX_HCSTRING("iiv","\x96","\x08","\x50","\x00"),false));
	cffi_lime_gl_uniform1iv= ::cpp::Function< void ( int ,int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_uniform1iv","\xda","\xee","\x80","\xc7"),HX_HCSTRING("iidv","\x72","\x6b","\xb7","\x45"),false));
	cffi_lime_gl_uniform2f= ::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_uniform2f","\xf8","\xea","\xeb","\x46"),HX_HCSTRING("iffv","\x6d","\x26","\xb5","\x45"),false));
	cffi_lime_gl_uniform2fv= ::cpp::Function< void ( int ,int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_uniform2fv","\x7e","\xae","\x81","\xc7"),HX_HCSTRING("iidv","\x72","\x6b","\xb7","\x45"),false));
	cffi_lime_gl_uniform2i= ::cpp::Function< void ( int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_uniform2i","\xfb","\xea","\xeb","\x46"),HX_HCSTRING("iiiv","\xcd","\x6f","\xb7","\x45"),false));
	cffi_lime_gl_uniform2iv= ::cpp::Function< void ( int ,int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_uniform2iv","\x1b","\xb1","\x81","\xc7"),HX_HCSTRING("iidv","\x72","\x6b","\xb7","\x45"),false));
	cffi_lime_gl_uniform3f= ::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_uniform3f","\xd7","\xeb","\xeb","\x46"),HX_HCSTRING("ifffv","\x79","\x6b","\xcc","\xb8"),false));
	cffi_lime_gl_uniform3fv= ::cpp::Function< void ( int ,int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_uniform3fv","\xbf","\x70","\x82","\xc7"),HX_HCSTRING("iidv","\x72","\x6b","\xb7","\x45"),false));
	cffi_lime_gl_uniform3i= ::cpp::Function< void ( int ,int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_uniform3i","\xda","\xeb","\xeb","\x46"),HX_HCSTRING("iiiiv","\xb6","\x58","\xca","\xba"),false));
	cffi_lime_gl_uniform3iv= ::cpp::Function< void ( int ,int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_uniform3iv","\x5c","\x73","\x82","\xc7"),HX_HCSTRING("iidv","\x72","\x6b","\xb7","\x45"),false));
	cffi_lime_gl_uniform4f= ::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_uniform4f","\xb6","\xec","\xeb","\x46"),HX_HCSTRING("iffffv","\xed","\x90","\x11","\xfa"),false));
	cffi_lime_gl_uniform4fv= ::cpp::Function< void ( int ,int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_uniform4fv","\x00","\x33","\x83","\xc7"),HX_HCSTRING("iidv","\x72","\x6b","\xb7","\x45"),false));
	cffi_lime_gl_uniform4i= ::cpp::Function< void ( int ,int ,int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_uniform4i","\xb9","\xec","\xeb","\x46"),HX_HCSTRING("iiiiiv","\xad","\x3b","\x43","\xb6"),false));
	cffi_lime_gl_uniform4iv= ::cpp::Function< void ( int ,int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_uniform4iv","\x9d","\x35","\x83","\xc7"),HX_HCSTRING("iidv","\x72","\x6b","\xb7","\x45"),false));
	cffi_lime_gl_uniform_matrix2fv= ::cpp::Function< void ( int ,int ,bool ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_uniform_matrix2fv","\x26","\x91","\x85","\x1c"),HX_HCSTRING("iibdv","\x94","\x04","\xc5","\xba"),false));
	cffi_lime_gl_uniform_matrix3fv= ::cpp::Function< void ( int ,int ,bool ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_uniform_matrix3fv","\x67","\x53","\x86","\x1c"),HX_HCSTRING("iibdv","\x94","\x04","\xc5","\xba"),false));
	cffi_lime_gl_uniform_matrix4fv= ::cpp::Function< void ( int ,int ,bool ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_uniform_matrix4fv","\xa8","\x15","\x87","\x1c"),HX_HCSTRING("iibdv","\x94","\x04","\xc5","\xba"),false));
	cffi_lime_gl_use_program= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_use_program","\x1c","\x8c","\xb8","\x22"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_gl_validate_program= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_validate_program","\xcb","\xeb","\x10","\x5b"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_gl_vertex_attrib1f= ::cpp::Function< void ( int ,::cpp::Float32 ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_vertex_attrib1f","\x2a","\xcd","\xb2","\x7a"),HX_HCSTRING("ifv","\xf9","\x05","\x50","\x00"),false));
	cffi_lime_gl_vertex_attrib1fv= ::cpp::Function< void ( int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_vertex_attrib1fv","\x0c","\xb8","\xc0","\xe1"),HX_HCSTRING("idv","\x3b","\x04","\x50","\x00"),false));
	cffi_lime_gl_vertex_attrib2f= ::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_vertex_attrib2f","\x09","\xce","\xb2","\x7a"),HX_HCSTRING("iffv","\x6d","\x26","\xb5","\x45"),false));
	cffi_lime_gl_vertex_attrib2fv= ::cpp::Function< void ( int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_vertex_attrib2fv","\x4d","\x7a","\xc1","\xe1"),HX_HCSTRING("idv","\x3b","\x04","\x50","\x00"),false));
	cffi_lime_gl_vertex_attrib3f= ::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_vertex_attrib3f","\xe8","\xce","\xb2","\x7a"),HX_HCSTRING("ifffv","\x79","\x6b","\xcc","\xb8"),false));
	cffi_lime_gl_vertex_attrib3fv= ::cpp::Function< void ( int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_vertex_attrib3fv","\x8e","\x3c","\xc2","\xe1"),HX_HCSTRING("idv","\x3b","\x04","\x50","\x00"),false));
	cffi_lime_gl_vertex_attrib4f= ::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_vertex_attrib4f","\xc7","\xcf","\xb2","\x7a"),HX_HCSTRING("iffffv","\xed","\x90","\x11","\xfa"),false));
	cffi_lime_gl_vertex_attrib4fv= ::cpp::Function< void ( int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_vertex_attrib4fv","\xcf","\xfe","\xc2","\xe1"),HX_HCSTRING("idv","\x3b","\x04","\x50","\x00"),false));
	cffi_lime_gl_vertex_attrib_pointer= ::cpp::Function< void ( int ,int ,int ,bool ,int ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_vertex_attrib_pointer","\x13","\xfa","\x74","\x15"),HX_HCSTRING("iiibidv","\x22","\x6e","\xf0","\xbf"),false));
	cffi_lime_gl_viewport= ::cpp::Function< void ( int ,int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gl_viewport","\x96","\x8d","\x70","\xcf"),HX_HCSTRING("iiiiv","\xb6","\x58","\xca","\xba"),false));
	cffi_lime_vorbis_file_bitrate= ::cpp::Function< int ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_bitrate","\x6c","\xc8","\x60","\xd8"),HX_HCSTRING("oii","\x0f","\x96","\x54","\x00"),false));
	cffi_lime_vorbis_file_bitrate_instant= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_bitrate_instant","\xce","\x44","\x94","\x97"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_vorbis_file_clear= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_clear","\x0c","\xe6","\xc6","\x1a"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_vorbis_file_comment= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_comment","\x9e","\x4c","\x01","\x5d"),HX_HCSTRING("oio","\x15","\x96","\x54","\x00"),false));
	cffi_lime_vorbis_file_crosslap= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_crosslap","\xbc","\xbd","\x3f","\xcb"),HX_HCSTRING("ooo","\x4f","\x9b","\x54","\x00"),false));
	cffi_lime_vorbis_file_from_bytes= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_from_bytes","\xb7","\xbf","\x11","\x7f"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_vorbis_file_from_file= ::cpp::Function< ::hx::Object * ( ::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_from_file","\xb0","\x84","\x41","\x97"),HX_HCSTRING("so","\x9c","\x64","\x00","\x00"),false));
	cffi_lime_vorbis_file_info= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_info","\xcf","\x18","\x14","\x61"),HX_HCSTRING("oio","\x15","\x96","\x54","\x00"),false));
	cffi_lime_vorbis_file_pcm_seek= ::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_pcm_seek","\xde","\xf4","\x4d","\xf2"),HX_HCSTRING("oooi","\x3a","\x4a","\xb3","\x49"),false));
	cffi_lime_vorbis_file_pcm_seek_lap= ::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_pcm_seek_lap","\x3a","\x49","\x6a","\x74"),HX_HCSTRING("oooi","\x3a","\x4a","\xb3","\x49"),false));
	cffi_lime_vorbis_file_pcm_seek_page= ::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_pcm_seek_page","\x90","\x9c","\x3a","\x6b"),HX_HCSTRING("oooi","\x3a","\x4a","\xb3","\x49"),false));
	cffi_lime_vorbis_file_pcm_seek_page_lap= ::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_pcm_seek_page_lap","\xec","\xb1","\x89","\x3b"),HX_HCSTRING("oooi","\x3a","\x4a","\xb3","\x49"),false));
	cffi_lime_vorbis_file_raw_seek= ::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_raw_seek","\x50","\x87","\x19","\x11"),HX_HCSTRING("oooi","\x3a","\x4a","\xb3","\x49"),false));
	cffi_lime_vorbis_file_raw_seek_lap= ::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_raw_seek_lap","\xac","\xfc","\x14","\x79"),HX_HCSTRING("oooi","\x3a","\x4a","\xb3","\x49"),false));
	cffi_lime_vorbis_file_pcm_tell= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_pcm_tell","\x97","\x31","\xf7","\xf2"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_vorbis_file_pcm_total= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_pcm_total","\x9e","\x5d","\xf6","\xab"),HX_HCSTRING("oio","\x15","\x96","\x54","\x00"),false));
	cffi_lime_vorbis_file_raw_tell= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_raw_tell","\x09","\xc4","\xc2","\x11"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_vorbis_file_raw_total= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_raw_total","\xec","\xee","\x4a","\x7f"),HX_HCSTRING("oio","\x15","\x96","\x54","\x00"),false));
	cffi_lime_vorbis_file_read= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,int ,int ,bool ,int ,bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_read","\xb7","\x2b","\x00","\x67"),HX_HCSTRING("ooiibibo","\x54","\xb0","\x50","\x86"),false));
	cffi_lime_vorbis_file_read_float= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_read_float","\xd4","\x5b","\x48","\x7a"),HX_HCSTRING("ooio","\x06","\x45","\xb3","\x49"),false));
	cffi_lime_vorbis_file_seekable= ::cpp::Function< bool ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_seekable","\xf3","\x33","\x1c","\x9b"),HX_HCSTRING("ob","\x13","\x61","\x00","\x00"),false));
	cffi_lime_vorbis_file_serial_number= ::cpp::Function< int ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_serial_number","\x73","\xa0","\x0a","\x65"),HX_HCSTRING("oii","\x0f","\x96","\x54","\x00"),false));
	cffi_lime_vorbis_file_streams= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_streams","\x32","\xae","\xd5","\xd1"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_vorbis_file_time_seek= ::cpp::Function< int ( ::hx::Object * ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_time_seek","\x29","\x26","\x3e","\xa0"),HX_HCSTRING("odi","\xb4","\x91","\x54","\x00"),false));
	cffi_lime_vorbis_file_time_seek_lap= ::cpp::Function< int ( ::hx::Object * ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_time_seek_lap","\x05","\x7c","\xd4","\xab"),HX_HCSTRING("odi","\xb4","\x91","\x54","\x00"),false));
	cffi_lime_vorbis_file_time_seek_page= ::cpp::Function< int ( ::hx::Object * ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_time_seek_page","\x65","\xdb","\xbc","\xb0"),HX_HCSTRING("odi","\xb4","\x91","\x54","\x00"),false));
	cffi_lime_vorbis_file_time_seek_page_lap= ::cpp::Function< int ( ::hx::Object * ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_time_seek_page_lap","\x41","\x7f","\x5c","\xe6"),HX_HCSTRING("odi","\xb4","\x91","\x54","\x00"),false));
	cffi_lime_vorbis_file_time_tell= ::cpp::Function< Float ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_time_tell","\xe2","\x62","\xe7","\xa0"),HX_HCSTRING("od","\x15","\x61","\x00","\x00"),false));
	cffi_lime_vorbis_file_time_total= ::cpp::Function< Float ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_vorbis_file_time_total","\xf3","\x4d","\x31","\x30"),HX_HCSTRING("oid","\x0a","\x96","\x54","\x00"),false));
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
