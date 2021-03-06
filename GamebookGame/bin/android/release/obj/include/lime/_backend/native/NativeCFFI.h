#ifndef INCLUDED_lime__backend_native_NativeCFFI
#define INCLUDED_lime__backend_native_NativeCFFI

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_backend,native,NativeCFFI)
namespace lime{
namespace _backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES  NativeCFFI_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NativeCFFI_obj OBJ_;
		NativeCFFI_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime._backend.native.NativeCFFI")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NativeCFFI_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NativeCFFI_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("NativeCFFI","\xdd","\x8b","\x66","\xff"); }

		static void __boot();
		static Dynamic lime_application_create( Dynamic config);
		static Dynamic lime_application_create_dyn();

		static Void lime_application_event_manager_register( Dynamic callback,Dynamic eventObject);
		static Dynamic lime_application_event_manager_register_dyn();

		static int lime_application_exec( Dynamic handle);
		static Dynamic lime_application_exec_dyn();

		static Void lime_application_init( Dynamic handle);
		static Dynamic lime_application_init_dyn();

		static int lime_application_quit( Dynamic handle);
		static Dynamic lime_application_quit_dyn();

		static Void lime_application_set_frame_rate( Dynamic handle,Float value);
		static Dynamic lime_application_set_frame_rate_dyn();

		static bool lime_application_update( Dynamic handle);
		static Dynamic lime_application_update_dyn();

		static Dynamic lime_audio_load( Dynamic data,Dynamic buffer);
		static Dynamic lime_audio_load_dyn();

		static Dynamic lime_bytes_from_data_pointer( Float data,int length);
		static Dynamic lime_bytes_from_data_pointer_dyn();

		static Float lime_bytes_get_data_pointer( Dynamic data);
		static Dynamic lime_bytes_get_data_pointer_dyn();

		static Float lime_bytes_get_data_pointer_offset( Dynamic data,int offset);
		static Dynamic lime_bytes_get_data_pointer_offset_dyn();

		static Dynamic lime_bytes_read_file( ::String path,Dynamic bytes);
		static Dynamic lime_bytes_read_file_dyn();

		static Float lime_cffi_get_native_pointer( Dynamic ptr);
		static Dynamic lime_cffi_get_native_pointer_dyn();

		static Dynamic lime_clipboard_get_text( );
		static Dynamic lime_clipboard_get_text_dyn();

		static Void lime_clipboard_set_text( ::String text);
		static Dynamic lime_clipboard_set_text_dyn();

		static Float lime_data_pointer_offset( Float dataPointer,int offset);
		static Dynamic lime_data_pointer_offset_dyn();

		static Dynamic lime_deflate_compress( Dynamic data,Dynamic bytes);
		static Dynamic lime_deflate_compress_dyn();

		static Dynamic lime_deflate_decompress( Dynamic data,Dynamic bytes);
		static Dynamic lime_deflate_decompress_dyn();

		static Void lime_drop_event_manager_register( Dynamic callback,Dynamic eventObject);
		static Dynamic lime_drop_event_manager_register_dyn();

		static Dynamic lime_file_dialog_open_directory( ::String title,::String filter,::String defaultPath);
		static Dynamic lime_file_dialog_open_directory_dyn();

		static Dynamic lime_file_dialog_open_file( ::String title,::String filter,::String defaultPath);
		static Dynamic lime_file_dialog_open_file_dyn();

		static Dynamic lime_file_dialog_open_files( ::String title,::String filter,::String defaultPath);
		static Dynamic lime_file_dialog_open_files_dyn();

		static Dynamic lime_file_dialog_save_file( ::String title,::String filter,::String defaultPath);
		static Dynamic lime_file_dialog_save_file_dyn();

		static int lime_font_get_ascender( Dynamic handle);
		static Dynamic lime_font_get_ascender_dyn();

		static int lime_font_get_descender( Dynamic handle);
		static Dynamic lime_font_get_descender_dyn();

		static Dynamic lime_font_get_family_name( Dynamic handle);
		static Dynamic lime_font_get_family_name_dyn();

		static int lime_font_get_glyph_index( Dynamic handle,::String character);
		static Dynamic lime_font_get_glyph_index_dyn();

		static Dynamic lime_font_get_glyph_indices( Dynamic handle,::String characters);
		static Dynamic lime_font_get_glyph_indices_dyn();

		static Dynamic lime_font_get_glyph_metrics( Dynamic handle,int index);
		static Dynamic lime_font_get_glyph_metrics_dyn();

		static int lime_font_get_height( Dynamic handle);
		static Dynamic lime_font_get_height_dyn();

		static int lime_font_get_num_glyphs( Dynamic handle);
		static Dynamic lime_font_get_num_glyphs_dyn();

		static int lime_font_get_underline_position( Dynamic handle);
		static Dynamic lime_font_get_underline_position_dyn();

		static int lime_font_get_underline_thickness( Dynamic handle);
		static Dynamic lime_font_get_underline_thickness_dyn();

		static int lime_font_get_units_per_em( Dynamic handle);
		static Dynamic lime_font_get_units_per_em_dyn();

		static Dynamic lime_font_load( Dynamic data);
		static Dynamic lime_font_load_dyn();

		static Dynamic lime_font_outline_decompose( Dynamic handle,int size);
		static Dynamic lime_font_outline_decompose_dyn();

		static bool lime_font_render_glyph( Dynamic handle,int index,Dynamic data);
		static Dynamic lime_font_render_glyph_dyn();

		static bool lime_font_render_glyphs( Dynamic handle,Dynamic indices,Dynamic data);
		static Dynamic lime_font_render_glyphs_dyn();

		static Void lime_font_set_size( Dynamic handle,int size);
		static Dynamic lime_font_set_size_dyn();

		static Void lime_gamepad_add_mappings( Dynamic mappings);
		static Dynamic lime_gamepad_add_mappings_dyn();

		static Dynamic lime_gamepad_get_device_guid( int id);
		static Dynamic lime_gamepad_get_device_guid_dyn();

		static Dynamic lime_gamepad_get_device_name( int id);
		static Dynamic lime_gamepad_get_device_name_dyn();

		static Void lime_gamepad_event_manager_register( Dynamic callback,Dynamic eventObject);
		static Dynamic lime_gamepad_event_manager_register_dyn();

		static Dynamic lime_gzip_compress( Dynamic data,Dynamic bytes);
		static Dynamic lime_gzip_compress_dyn();

		static Dynamic lime_gzip_decompress( Dynamic data,Dynamic bytes);
		static Dynamic lime_gzip_decompress_dyn();

		static Void lime_haptic_vibrate( int period,int duration);
		static Dynamic lime_haptic_vibrate_dyn();

		static Dynamic lime_image_encode( Dynamic data,int type,int quality,Dynamic bytes);
		static Dynamic lime_image_encode_dyn();

		static Dynamic lime_image_load( Dynamic data,Dynamic buffer);
		static Dynamic lime_image_load_dyn();

		static Void lime_image_data_util_color_transform( Dynamic image,Dynamic rect,Dynamic colorMatrix);
		static Dynamic lime_image_data_util_color_transform_dyn();

		static Void lime_image_data_util_copy_channel( Dynamic image,Dynamic sourceImage,Dynamic sourceRect,Dynamic destPoint,int srcChannel,int destChannel);
		static Dynamic lime_image_data_util_copy_channel_dyn();

		static Void lime_image_data_util_copy_pixels( Dynamic image,Dynamic sourceImage,Dynamic sourceRect,Dynamic destPoint,Dynamic alphaImage,Dynamic alphaPoint,bool mergeAlpha);
		static Dynamic lime_image_data_util_copy_pixels_dyn();

		static Void lime_image_data_util_fill_rect( Dynamic image,Dynamic rect,int rg,int ba);
		static Dynamic lime_image_data_util_fill_rect_dyn();

		static Void lime_image_data_util_flood_fill( Dynamic image,int x,int y,int rg,int ba);
		static Dynamic lime_image_data_util_flood_fill_dyn();

		static Void lime_image_data_util_get_pixels( Dynamic image,Dynamic rect,int format,Dynamic bytes);
		static Dynamic lime_image_data_util_get_pixels_dyn();

		static Void lime_image_data_util_merge( Dynamic image,Dynamic sourceImage,Dynamic sourceRect,Dynamic destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier);
		static Dynamic lime_image_data_util_merge_dyn();

		static Void lime_image_data_util_multiply_alpha( Dynamic image);
		static Dynamic lime_image_data_util_multiply_alpha_dyn();

		static Void lime_image_data_util_resize( Dynamic image,Dynamic buffer,int width,int height);
		static Dynamic lime_image_data_util_resize_dyn();

		static Void lime_image_data_util_set_format( Dynamic image,int format);
		static Dynamic lime_image_data_util_set_format_dyn();

		static Void lime_image_data_util_set_pixels( Dynamic image,Dynamic rect,Dynamic bytes,int format);
		static Dynamic lime_image_data_util_set_pixels_dyn();

		static int lime_image_data_util_threshold( Dynamic image,Dynamic sourceImage,Dynamic sourceRect,Dynamic destPoint,int operation,int thresholdRG,int thresholdBA,int colorRG,int colorBA,int maskRG,int maskBA,bool copySource);
		static Dynamic lime_image_data_util_threshold_dyn();

		static Void lime_image_data_util_unmultiply_alpha( Dynamic image);
		static Dynamic lime_image_data_util_unmultiply_alpha_dyn();

		static Dynamic lime_joystick_get_device_guid( int id);
		static Dynamic lime_joystick_get_device_guid_dyn();

		static Dynamic lime_joystick_get_device_name( int id);
		static Dynamic lime_joystick_get_device_name_dyn();

		static int lime_joystick_get_num_axes( int id);
		static Dynamic lime_joystick_get_num_axes_dyn();

		static int lime_joystick_get_num_buttons( int id);
		static Dynamic lime_joystick_get_num_buttons_dyn();

		static int lime_joystick_get_num_hats( int id);
		static Dynamic lime_joystick_get_num_hats_dyn();

		static int lime_joystick_get_num_trackballs( int id);
		static Dynamic lime_joystick_get_num_trackballs_dyn();

		static Void lime_joystick_event_manager_register( Dynamic callback,Dynamic eventObject);
		static Dynamic lime_joystick_event_manager_register_dyn();

		static Dynamic lime_jpeg_decode_bytes( Dynamic data,bool decodeData,Dynamic buffer);
		static Dynamic lime_jpeg_decode_bytes_dyn();

		static Dynamic lime_jpeg_decode_file( ::String path,bool decodeData,Dynamic buffer);
		static Dynamic lime_jpeg_decode_file_dyn();

		static ::cpp::Float32 lime_key_code_from_scan_code( ::cpp::Float32 scanCode);
		static Dynamic lime_key_code_from_scan_code_dyn();

		static ::cpp::Float32 lime_key_code_to_scan_code( ::cpp::Float32 keyCode);
		static Dynamic lime_key_code_to_scan_code_dyn();

		static Void lime_key_event_manager_register( Dynamic callback,Dynamic eventObject);
		static Dynamic lime_key_event_manager_register_dyn();

		static Dynamic lime_lzma_compress( Dynamic data,Dynamic bytes);
		static Dynamic lime_lzma_compress_dyn();

		static Dynamic lime_lzma_decompress( Dynamic data,Dynamic bytes);
		static Dynamic lime_lzma_decompress_dyn();

		static Void lime_mouse_hide( );
		static Dynamic lime_mouse_hide_dyn();

		static Void lime_mouse_set_cursor( int cursor);
		static Dynamic lime_mouse_set_cursor_dyn();

		static Void lime_mouse_set_lock( bool lock);
		static Dynamic lime_mouse_set_lock_dyn();

		static Void lime_mouse_show( );
		static Dynamic lime_mouse_show_dyn();

		static Void lime_mouse_warp( int x,int y,Dynamic window);
		static Dynamic lime_mouse_warp_dyn();

		static Void lime_mouse_event_manager_register( Dynamic callback,Dynamic eventObject);
		static Dynamic lime_mouse_event_manager_register_dyn();

		static Void lime_neko_execute( ::String module);
		static Dynamic lime_neko_execute_dyn();

		static Dynamic lime_png_decode_bytes( Dynamic data,bool decodeData,Dynamic buffer);
		static Dynamic lime_png_decode_bytes_dyn();

		static Dynamic lime_png_decode_file( ::String path,bool decodeData,Dynamic buffer);
		static Dynamic lime_png_decode_file_dyn();

		static Dynamic lime_renderer_create( Dynamic window);
		static Dynamic lime_renderer_create_dyn();

		static Void lime_renderer_flip( Dynamic handle);
		static Dynamic lime_renderer_flip_dyn();

		static Float lime_renderer_get_context( Dynamic handle);
		static Dynamic lime_renderer_get_context_dyn();

		static Float lime_renderer_get_scale( Dynamic handle);
		static Dynamic lime_renderer_get_scale_dyn();

		static Dynamic lime_renderer_get_type( Dynamic handle);
		static Dynamic lime_renderer_get_type_dyn();

		static Dynamic lime_renderer_lock( Dynamic handle);
		static Dynamic lime_renderer_lock_dyn();

		static Void lime_renderer_make_current( Dynamic handle);
		static Dynamic lime_renderer_make_current_dyn();

		static Dynamic lime_renderer_read_pixels( Dynamic handle,Dynamic rect,Dynamic imageBuffer);
		static Dynamic lime_renderer_read_pixels_dyn();

		static Void lime_renderer_unlock( Dynamic handle);
		static Dynamic lime_renderer_unlock_dyn();

		static Void lime_render_event_manager_register( Dynamic callback,Dynamic eventObject);
		static Dynamic lime_render_event_manager_register_dyn();

		static Void lime_sensor_event_manager_register( Dynamic callback,Dynamic eventObject);
		static Dynamic lime_sensor_event_manager_register_dyn();

		static bool lime_system_get_allow_screen_timeout( );
		static Dynamic lime_system_get_allow_screen_timeout_dyn();

		static bool lime_system_set_allow_screen_timeout( bool value);
		static Dynamic lime_system_set_allow_screen_timeout_dyn();

		static Dynamic lime_system_get_directory( int type,::String company,::String title);
		static Dynamic lime_system_get_directory_dyn();

		static Dynamic lime_system_get_display( int index);
		static Dynamic lime_system_get_display_dyn();

		static bool lime_system_get_ios_tablet( );
		static Dynamic lime_system_get_ios_tablet_dyn();

		static int lime_system_get_num_displays( );
		static Dynamic lime_system_get_num_displays_dyn();

		static Float lime_system_get_timer( );
		static Dynamic lime_system_get_timer_dyn();

		static Void lime_system_open_file( ::String path);
		static Dynamic lime_system_open_file_dyn();

		static Void lime_system_open_url( ::String url,::String target);
		static Dynamic lime_system_open_url_dyn();

		static Void lime_text_event_manager_register( Dynamic callback,Dynamic eventObject);
		static Dynamic lime_text_event_manager_register_dyn();

		static Dynamic lime_text_layout_create( int direction,::String script,::String language);
		static Dynamic lime_text_layout_create_dyn();

		static Dynamic lime_text_layout_position( Dynamic textHandle,Dynamic fontHandle,int size,::String textString,Dynamic data);
		static Dynamic lime_text_layout_position_dyn();

		static Void lime_text_layout_set_direction( Dynamic textHandle,int direction);
		static Dynamic lime_text_layout_set_direction_dyn();

		static Void lime_text_layout_set_language( Dynamic textHandle,::String language);
		static Dynamic lime_text_layout_set_language_dyn();

		static Void lime_text_layout_set_script( Dynamic textHandle,::String script);
		static Dynamic lime_text_layout_set_script_dyn();

		static Void lime_touch_event_manager_register( Dynamic callback,Dynamic eventObject);
		static Dynamic lime_touch_event_manager_register_dyn();

		static Void lime_window_alert( Dynamic handle,::String message,::String title);
		static Dynamic lime_window_alert_dyn();

		static Void lime_window_close( Dynamic handle);
		static Dynamic lime_window_close_dyn();

		static Dynamic lime_window_create( Dynamic application,int width,int height,int flags,::String title);
		static Dynamic lime_window_create_dyn();

		static Void lime_window_focus( Dynamic handle);
		static Dynamic lime_window_focus_dyn();

		static int lime_window_get_display( Dynamic handle);
		static Dynamic lime_window_get_display_dyn();

		static Dynamic lime_window_get_display_mode( Dynamic handle);
		static Dynamic lime_window_get_display_mode_dyn();

		static bool lime_window_get_enable_text_events( Dynamic handle);
		static Dynamic lime_window_get_enable_text_events_dyn();

		static int lime_window_get_height( Dynamic handle);
		static Dynamic lime_window_get_height_dyn();

		static int lime_window_get_id( Dynamic handle);
		static Dynamic lime_window_get_id_dyn();

		static int lime_window_get_width( Dynamic handle);
		static Dynamic lime_window_get_width_dyn();

		static int lime_window_get_x( Dynamic handle);
		static Dynamic lime_window_get_x_dyn();

		static int lime_window_get_y( Dynamic handle);
		static Dynamic lime_window_get_y_dyn();

		static Void lime_window_move( Dynamic handle,int x,int y);
		static Dynamic lime_window_move_dyn();

		static Void lime_window_resize( Dynamic handle,int width,int height);
		static Dynamic lime_window_resize_dyn();

		static bool lime_window_set_borderless( Dynamic handle,bool borderless);
		static Dynamic lime_window_set_borderless_dyn();

		static Dynamic lime_window_set_display_mode( Dynamic handle,Dynamic displayMode);
		static Dynamic lime_window_set_display_mode_dyn();

		static Void lime_window_set_enable_text_events( Dynamic handle,bool enabled);
		static Dynamic lime_window_set_enable_text_events_dyn();

		static bool lime_window_set_fullscreen( Dynamic handle,bool fullscreen);
		static Dynamic lime_window_set_fullscreen_dyn();

		static Void lime_window_set_icon( Dynamic handle,Dynamic buffer);
		static Dynamic lime_window_set_icon_dyn();

		static bool lime_window_set_maximized( Dynamic handle,bool maximized);
		static Dynamic lime_window_set_maximized_dyn();

		static bool lime_window_set_minimized( Dynamic handle,bool minimized);
		static Dynamic lime_window_set_minimized_dyn();

		static bool lime_window_set_resizable( Dynamic handle,bool resizable);
		static Dynamic lime_window_set_resizable_dyn();

		static Dynamic lime_window_set_title( Dynamic handle,::String title);
		static Dynamic lime_window_set_title_dyn();

		static Void lime_window_event_manager_register( Dynamic callback,Dynamic eventObject);
		static Dynamic lime_window_event_manager_register_dyn();

		static Dynamic lime_zlib_compress( Dynamic data,Dynamic bytes);
		static Dynamic lime_zlib_compress_dyn();

		static Dynamic lime_zlib_decompress( Dynamic data,Dynamic bytes);
		static Dynamic lime_zlib_decompress_dyn();

		static Dynamic lime_jni_call_member( Dynamic jniMethod,Dynamic jniObject,Dynamic args);
		static Dynamic lime_jni_call_member_dyn();

		static Dynamic lime_jni_call_static( Dynamic jniMethod,Dynamic args);
		static Dynamic lime_jni_call_static_dyn();

		static Dynamic lime_jni_create_field( ::String className,::String field,::String signature,bool isStatic);
		static Dynamic lime_jni_create_field_dyn();

		static Dynamic lime_jni_create_method( ::String className,::String method,::String signature,bool isStatic,bool quiet);
		static Dynamic lime_jni_create_method_dyn();

		static Float lime_jni_get_env( );
		static Dynamic lime_jni_get_env_dyn();

		static Dynamic lime_jni_get_member( Dynamic jniField,Dynamic jniObject);
		static Dynamic lime_jni_get_member_dyn();

		static Dynamic lime_jni_get_static( Dynamic jniField);
		static Dynamic lime_jni_get_static_dyn();

		static Void lime_jni_post_ui_callback( Dynamic callback);
		static Dynamic lime_jni_post_ui_callback_dyn();

		static Void lime_jni_set_member( Dynamic jniField,Dynamic jniObject,Dynamic value);
		static Dynamic lime_jni_set_member_dyn();

		static Void lime_jni_set_static( Dynamic jniField,Dynamic value);
		static Dynamic lime_jni_set_static_dyn();

		static Void lime_al_buffer_data( Dynamic buffer,int format,Dynamic data,int size,int freq);
		static Dynamic lime_al_buffer_data_dyn();

		static Void lime_al_buffer3f( Dynamic buffer,int param,::cpp::Float32 value1,::cpp::Float32 value2,::cpp::Float32 value3);
		static Dynamic lime_al_buffer3f_dyn();

		static Void lime_al_buffer3i( Dynamic buffer,int param,int value1,int value2,int value3);
		static Dynamic lime_al_buffer3i_dyn();

		static Void lime_al_bufferf( Dynamic buffer,int param,::cpp::Float32 value);
		static Dynamic lime_al_bufferf_dyn();

		static Void lime_al_bufferfv( Dynamic buffer,int param,Dynamic values);
		static Dynamic lime_al_bufferfv_dyn();

		static Void lime_al_bufferi( Dynamic buffer,int param,int value);
		static Dynamic lime_al_bufferi_dyn();

		static Void lime_al_bufferiv( Dynamic buffer,int param,Dynamic values);
		static Dynamic lime_al_bufferiv_dyn();

		static Void lime_al_delete_buffer( Dynamic buffer);
		static Dynamic lime_al_delete_buffer_dyn();

		static Void lime_al_delete_buffers( int n,Dynamic buffers);
		static Dynamic lime_al_delete_buffers_dyn();

		static Void lime_al_delete_source( Dynamic source);
		static Dynamic lime_al_delete_source_dyn();

		static Void lime_al_delete_sources( int n,Dynamic sources);
		static Dynamic lime_al_delete_sources_dyn();

		static Void lime_al_disable( int capability);
		static Dynamic lime_al_disable_dyn();

		static Void lime_al_distance_model( int distanceModel);
		static Dynamic lime_al_distance_model_dyn();

		static Void lime_al_doppler_factor( ::cpp::Float32 value);
		static Dynamic lime_al_doppler_factor_dyn();

		static Void lime_al_doppler_velocity( ::cpp::Float32 value);
		static Dynamic lime_al_doppler_velocity_dyn();

		static Void lime_al_enable( int capability);
		static Dynamic lime_al_enable_dyn();

		static Dynamic lime_al_gen_source( );
		static Dynamic lime_al_gen_source_dyn();

		static cpp::ArrayBase lime_al_gen_sources( int n);
		static Dynamic lime_al_gen_sources_dyn();

		static bool lime_al_get_boolean( int param);
		static Dynamic lime_al_get_boolean_dyn();

		static Array< bool > lime_al_get_booleanv( int param,int count);
		static Dynamic lime_al_get_booleanv_dyn();

		static Dynamic lime_al_gen_buffer( );
		static Dynamic lime_al_gen_buffer_dyn();

		static cpp::ArrayBase lime_al_gen_buffers( int n);
		static Dynamic lime_al_gen_buffers_dyn();

		static Array< Float > lime_al_get_buffer3f( Dynamic buffer,int param);
		static Dynamic lime_al_get_buffer3f_dyn();

		static Array< int > lime_al_get_buffer3i( Dynamic buffer,int param);
		static Dynamic lime_al_get_buffer3i_dyn();

		static ::cpp::Float32 lime_al_get_bufferf( Dynamic buffer,int param);
		static Dynamic lime_al_get_bufferf_dyn();

		static Array< Float > lime_al_get_bufferfv( Dynamic buffer,int param,int count);
		static Dynamic lime_al_get_bufferfv_dyn();

		static int lime_al_get_bufferi( Dynamic buffer,int param);
		static Dynamic lime_al_get_bufferi_dyn();

		static Array< int > lime_al_get_bufferiv( Dynamic buffer,int param,int count);
		static Dynamic lime_al_get_bufferiv_dyn();

		static Float lime_al_get_double( int param);
		static Dynamic lime_al_get_double_dyn();

		static Array< Float > lime_al_get_doublev( int param,int count);
		static Dynamic lime_al_get_doublev_dyn();

		static int lime_al_get_enum_value( ::String ename);
		static Dynamic lime_al_get_enum_value_dyn();

		static int lime_al_get_error( );
		static Dynamic lime_al_get_error_dyn();

		static ::cpp::Float32 lime_al_get_float( int param);
		static Dynamic lime_al_get_float_dyn();

		static Array< Float > lime_al_get_floatv( int param,int count);
		static Dynamic lime_al_get_floatv_dyn();

		static int lime_al_get_integer( int param);
		static Dynamic lime_al_get_integer_dyn();

		static Array< int > lime_al_get_integerv( int param,int count);
		static Dynamic lime_al_get_integerv_dyn();

		static Array< Float > lime_al_get_listener3f( int param);
		static Dynamic lime_al_get_listener3f_dyn();

		static Array< int > lime_al_get_listener3i( int param);
		static Dynamic lime_al_get_listener3i_dyn();

		static ::cpp::Float32 lime_al_get_listenerf( int param);
		static Dynamic lime_al_get_listenerf_dyn();

		static Array< Float > lime_al_get_listenerfv( int param,int count);
		static Dynamic lime_al_get_listenerfv_dyn();

		static int lime_al_get_listeneri( int param);
		static Dynamic lime_al_get_listeneri_dyn();

		static Array< int > lime_al_get_listeneriv( int param,int count);
		static Dynamic lime_al_get_listeneriv_dyn();

		static Float lime_al_get_proc_address( ::String fname);
		static Dynamic lime_al_get_proc_address_dyn();

		static Array< Float > lime_al_get_source3f( Dynamic source,int param);
		static Dynamic lime_al_get_source3f_dyn();

		static Array< int > lime_al_get_source3i( Dynamic source,int param);
		static Dynamic lime_al_get_source3i_dyn();

		static ::cpp::Float32 lime_al_get_sourcef( Dynamic source,int param);
		static Dynamic lime_al_get_sourcef_dyn();

		static Array< Float > lime_al_get_sourcefv( Dynamic source,int param,int count);
		static Dynamic lime_al_get_sourcefv_dyn();

		static Dynamic lime_al_get_sourcei( Dynamic source,int param);
		static Dynamic lime_al_get_sourcei_dyn();

		static Array< int > lime_al_get_sourceiv( Dynamic source,int param,int count);
		static Dynamic lime_al_get_sourceiv_dyn();

		static Dynamic lime_al_get_string( int param);
		static Dynamic lime_al_get_string_dyn();

		static bool lime_al_is_buffer( Dynamic buffer);
		static Dynamic lime_al_is_buffer_dyn();

		static bool lime_al_is_enabled( int capability);
		static Dynamic lime_al_is_enabled_dyn();

		static bool lime_al_is_extension_present( ::String extname);
		static Dynamic lime_al_is_extension_present_dyn();

		static bool lime_al_is_source( Dynamic source);
		static Dynamic lime_al_is_source_dyn();

		static Void lime_al_listener3f( int param,::cpp::Float32 value1,::cpp::Float32 value2,::cpp::Float32 value3);
		static Dynamic lime_al_listener3f_dyn();

		static Void lime_al_listener3i( int param,int value1,int value2,int value3);
		static Dynamic lime_al_listener3i_dyn();

		static Void lime_al_listenerf( int param,::cpp::Float32 value1);
		static Dynamic lime_al_listenerf_dyn();

		static Void lime_al_listenerfv( int param,Dynamic values);
		static Dynamic lime_al_listenerfv_dyn();

		static Void lime_al_listeneri( int param,int value1);
		static Dynamic lime_al_listeneri_dyn();

		static Void lime_al_listeneriv( int param,Dynamic values);
		static Dynamic lime_al_listeneriv_dyn();

		static Void lime_al_source_pause( Dynamic source);
		static Dynamic lime_al_source_pause_dyn();

		static Void lime_al_source_pausev( int n,Dynamic sources);
		static Dynamic lime_al_source_pausev_dyn();

		static Void lime_al_source_play( Dynamic source);
		static Dynamic lime_al_source_play_dyn();

		static Void lime_al_source_playv( int n,Dynamic sources);
		static Dynamic lime_al_source_playv_dyn();

		static Void lime_al_source_queue_buffers( Dynamic source,int nb,Dynamic buffers);
		static Dynamic lime_al_source_queue_buffers_dyn();

		static Void lime_al_source_rewind( Dynamic source);
		static Dynamic lime_al_source_rewind_dyn();

		static Void lime_al_source_rewindv( int n,Dynamic sources);
		static Dynamic lime_al_source_rewindv_dyn();

		static Void lime_al_source_stop( Dynamic source);
		static Dynamic lime_al_source_stop_dyn();

		static Void lime_al_source_stopv( int n,Dynamic sources);
		static Dynamic lime_al_source_stopv_dyn();

		static Dynamic lime_al_source_unqueue_buffers( Dynamic source,int nb);
		static Dynamic lime_al_source_unqueue_buffers_dyn();

		static Void lime_al_source3f( Dynamic source,int param,::cpp::Float32 value1,::cpp::Float32 value2,::cpp::Float32 value3);
		static Dynamic lime_al_source3f_dyn();

		static Void lime_al_source3i( Dynamic source,int param,int value1,int value2,int value3);
		static Dynamic lime_al_source3i_dyn();

		static Void lime_al_sourcef( Dynamic source,int param,::cpp::Float32 value);
		static Dynamic lime_al_sourcef_dyn();

		static Void lime_al_sourcefv( Dynamic source,int param,Dynamic values);
		static Dynamic lime_al_sourcefv_dyn();

		static Void lime_al_sourcei( Dynamic source,int param,Dynamic value);
		static Dynamic lime_al_sourcei_dyn();

		static Void lime_al_sourceiv( Dynamic source,int param,Dynamic values);
		static Dynamic lime_al_sourceiv_dyn();

		static Void lime_al_speed_of_sound( ::cpp::Float32 speed);
		static Dynamic lime_al_speed_of_sound_dyn();

		static bool lime_alc_close_device( Dynamic device);
		static Dynamic lime_alc_close_device_dyn();

		static Dynamic lime_alc_create_context( Dynamic device,Dynamic attrlist);
		static Dynamic lime_alc_create_context_dyn();

		static Void lime_alc_destroy_context( Dynamic context);
		static Dynamic lime_alc_destroy_context_dyn();

		static Dynamic lime_alc_get_contexts_device( Dynamic context);
		static Dynamic lime_alc_get_contexts_device_dyn();

		static Dynamic lime_alc_get_current_context( );
		static Dynamic lime_alc_get_current_context_dyn();

		static int lime_alc_get_error( Dynamic device);
		static Dynamic lime_alc_get_error_dyn();

		static Dynamic lime_alc_get_integerv( Dynamic device,int param,int size);
		static Dynamic lime_alc_get_integerv_dyn();

		static Dynamic lime_alc_get_string( Dynamic device,int param);
		static Dynamic lime_alc_get_string_dyn();

		static bool lime_alc_make_context_current( Dynamic context);
		static Dynamic lime_alc_make_context_current_dyn();

		static Dynamic lime_alc_open_device( ::String devicename);
		static Dynamic lime_alc_open_device_dyn();

		static Void lime_alc_pause_device( Dynamic device);
		static Dynamic lime_alc_pause_device_dyn();

		static Void lime_alc_process_context( Dynamic context);
		static Dynamic lime_alc_process_context_dyn();

		static Void lime_alc_resume_device( Dynamic device);
		static Dynamic lime_alc_resume_device_dyn();

		static Void lime_alc_suspend_context( Dynamic context);
		static Dynamic lime_alc_suspend_context_dyn();

		static Void lime_cairo_arc( Dynamic handle,Float xc,Float yc,Float radius,Float angle1,Float angle2);
		static Dynamic lime_cairo_arc_dyn();

		static Void lime_cairo_arc_negative( Dynamic handle,Float xc,Float yc,Float radius,Float angle1,Float angle2);
		static Dynamic lime_cairo_arc_negative_dyn();

		static Void lime_cairo_clip( Dynamic handle);
		static Dynamic lime_cairo_clip_dyn();

		static Void lime_cairo_clip_preserve( Dynamic handle);
		static Dynamic lime_cairo_clip_preserve_dyn();

		static Void lime_cairo_clip_extents( Dynamic handle,Float x1,Float y1,Float x2,Float y2);
		static Dynamic lime_cairo_clip_extents_dyn();

		static Void lime_cairo_close_path( Dynamic handle);
		static Dynamic lime_cairo_close_path_dyn();

		static Void lime_cairo_copy_page( Dynamic handle);
		static Dynamic lime_cairo_copy_page_dyn();

		static Dynamic lime_cairo_create( Dynamic handle);
		static Dynamic lime_cairo_create_dyn();

		static Void lime_cairo_curve_to( Dynamic handle,Float x1,Float y1,Float x2,Float y2,Float x3,Float y3);
		static Dynamic lime_cairo_curve_to_dyn();

		static Void lime_cairo_fill( Dynamic handle);
		static Dynamic lime_cairo_fill_dyn();

		static Void lime_cairo_fill_extents( Dynamic handle,Float x1,Float y1,Float x2,Float y2);
		static Dynamic lime_cairo_fill_extents_dyn();

		static Void lime_cairo_fill_preserve( Dynamic handle);
		static Dynamic lime_cairo_fill_preserve_dyn();

		static int lime_cairo_get_antialias( Dynamic handle);
		static Dynamic lime_cairo_get_antialias_dyn();

		static Dynamic lime_cairo_get_current_point( Dynamic handle);
		static Dynamic lime_cairo_get_current_point_dyn();

		static Dynamic lime_cairo_get_dash( Dynamic handle);
		static Dynamic lime_cairo_get_dash_dyn();

		static int lime_cairo_get_dash_count( Dynamic handle);
		static Dynamic lime_cairo_get_dash_count_dyn();

		static int lime_cairo_get_fill_rule( Dynamic handle);
		static Dynamic lime_cairo_get_fill_rule_dyn();

		static Dynamic lime_cairo_get_font_face( Dynamic handle);
		static Dynamic lime_cairo_get_font_face_dyn();

		static Dynamic lime_cairo_get_font_options( Dynamic handle);
		static Dynamic lime_cairo_get_font_options_dyn();

		static Dynamic lime_cairo_get_group_target( Dynamic handle);
		static Dynamic lime_cairo_get_group_target_dyn();

		static int lime_cairo_get_line_cap( Dynamic handle);
		static Dynamic lime_cairo_get_line_cap_dyn();

		static int lime_cairo_get_line_join( Dynamic handle);
		static Dynamic lime_cairo_get_line_join_dyn();

		static Float lime_cairo_get_line_width( Dynamic handle);
		static Dynamic lime_cairo_get_line_width_dyn();

		static Dynamic lime_cairo_get_matrix( Dynamic handle);
		static Dynamic lime_cairo_get_matrix_dyn();

		static Float lime_cairo_get_miter_limit( Dynamic handle);
		static Dynamic lime_cairo_get_miter_limit_dyn();

		static int lime_cairo_get_operator( Dynamic handle);
		static Dynamic lime_cairo_get_operator_dyn();

		static Dynamic lime_cairo_get_source( Dynamic handle);
		static Dynamic lime_cairo_get_source_dyn();

		static Dynamic lime_cairo_get_target( Dynamic handle);
		static Dynamic lime_cairo_get_target_dyn();

		static Float lime_cairo_get_tolerance( Dynamic handle);
		static Dynamic lime_cairo_get_tolerance_dyn();

		static bool lime_cairo_has_current_point( Dynamic handle);
		static Dynamic lime_cairo_has_current_point_dyn();

		static Void lime_cairo_identity_matrix( Dynamic handle);
		static Dynamic lime_cairo_identity_matrix_dyn();

		static bool lime_cairo_in_clip( Dynamic handle,Float x,Float y);
		static Dynamic lime_cairo_in_clip_dyn();

		static bool lime_cairo_in_fill( Dynamic handle,Float x,Float y);
		static Dynamic lime_cairo_in_fill_dyn();

		static bool lime_cairo_in_stroke( Dynamic handle,Float x,Float y);
		static Dynamic lime_cairo_in_stroke_dyn();

		static Void lime_cairo_line_to( Dynamic handle,Float x,Float y);
		static Dynamic lime_cairo_line_to_dyn();

		static Void lime_cairo_mask( Dynamic handle,Dynamic pattern);
		static Dynamic lime_cairo_mask_dyn();

		static Void lime_cairo_mask_surface( Dynamic handle,Dynamic surface,Float x,Float y);
		static Dynamic lime_cairo_mask_surface_dyn();

		static Void lime_cairo_move_to( Dynamic handle,Float x,Float y);
		static Dynamic lime_cairo_move_to_dyn();

		static Void lime_cairo_new_path( Dynamic handle);
		static Dynamic lime_cairo_new_path_dyn();

		static Void lime_cairo_paint( Dynamic handle);
		static Dynamic lime_cairo_paint_dyn();

		static Void lime_cairo_paint_with_alpha( Dynamic handle,Float alpha);
		static Dynamic lime_cairo_paint_with_alpha_dyn();

		static Dynamic lime_cairo_pop_group( Dynamic handle);
		static Dynamic lime_cairo_pop_group_dyn();

		static Void lime_cairo_pop_group_to_source( Dynamic handle);
		static Dynamic lime_cairo_pop_group_to_source_dyn();

		static Void lime_cairo_push_group( Dynamic handle);
		static Dynamic lime_cairo_push_group_dyn();

		static Void lime_cairo_push_group_with_content( Dynamic handle,int content);
		static Dynamic lime_cairo_push_group_with_content_dyn();

		static Void lime_cairo_rectangle( Dynamic handle,Float x,Float y,Float width,Float height);
		static Dynamic lime_cairo_rectangle_dyn();

		static Void lime_cairo_rel_curve_to( Dynamic handle,Float dx1,Float dy1,Float dx2,Float dy2,Float dx3,Float dy3);
		static Dynamic lime_cairo_rel_curve_to_dyn();

		static Void lime_cairo_rel_line_to( Dynamic handle,Float dx,Float dy);
		static Dynamic lime_cairo_rel_line_to_dyn();

		static Void lime_cairo_rel_move_to( Dynamic handle,Float dx,Float dy);
		static Dynamic lime_cairo_rel_move_to_dyn();

		static Void lime_cairo_reset_clip( Dynamic handle);
		static Dynamic lime_cairo_reset_clip_dyn();

		static Void lime_cairo_restore( Dynamic handle);
		static Dynamic lime_cairo_restore_dyn();

		static Void lime_cairo_rotate( Dynamic handle,Float amount);
		static Dynamic lime_cairo_rotate_dyn();

		static Void lime_cairo_save( Dynamic handle);
		static Dynamic lime_cairo_save_dyn();

		static Void lime_cairo_scale( Dynamic handle,Float x,Float y);
		static Dynamic lime_cairo_scale_dyn();

		static Void lime_cairo_set_antialias( Dynamic handle,int cap);
		static Dynamic lime_cairo_set_antialias_dyn();

		static Void lime_cairo_set_dash( Dynamic handle,Dynamic dash);
		static Dynamic lime_cairo_set_dash_dyn();

		static Void lime_cairo_set_fill_rule( Dynamic handle,int cap);
		static Dynamic lime_cairo_set_fill_rule_dyn();

		static Void lime_cairo_set_font_face( Dynamic handle,Dynamic face);
		static Dynamic lime_cairo_set_font_face_dyn();

		static Void lime_cairo_set_font_options( Dynamic handle,Dynamic options);
		static Dynamic lime_cairo_set_font_options_dyn();

		static Void lime_cairo_set_font_size( Dynamic handle,Float size);
		static Dynamic lime_cairo_set_font_size_dyn();

		static Void lime_cairo_set_line_cap( Dynamic handle,int cap);
		static Dynamic lime_cairo_set_line_cap_dyn();

		static Void lime_cairo_set_line_join( Dynamic handle,int join);
		static Dynamic lime_cairo_set_line_join_dyn();

		static Void lime_cairo_set_line_width( Dynamic handle,Float width);
		static Dynamic lime_cairo_set_line_width_dyn();

		static Void lime_cairo_set_matrix( Dynamic handle,Float a,Float b,Float c,Float d,Float tx,Float ty);
		static Dynamic lime_cairo_set_matrix_dyn();

		static Void lime_cairo_set_miter_limit( Dynamic handle,Float miterLimit);
		static Dynamic lime_cairo_set_miter_limit_dyn();

		static Void lime_cairo_set_operator( Dynamic handle,int op);
		static Dynamic lime_cairo_set_operator_dyn();

		static Void lime_cairo_set_source( Dynamic handle,Dynamic pattern);
		static Dynamic lime_cairo_set_source_dyn();

		static Void lime_cairo_set_source_rgb( Dynamic handle,Float r,Float g,Float b);
		static Dynamic lime_cairo_set_source_rgb_dyn();

		static Void lime_cairo_set_source_rgba( Dynamic handle,Float r,Float g,Float b,Float a);
		static Dynamic lime_cairo_set_source_rgba_dyn();

		static Void lime_cairo_set_source_surface( Dynamic handle,Dynamic surface,Float x,Float y);
		static Dynamic lime_cairo_set_source_surface_dyn();

		static Void lime_cairo_set_tolerance( Dynamic handle,Float tolerance);
		static Dynamic lime_cairo_set_tolerance_dyn();

		static Void lime_cairo_show_glyphs( Dynamic handle,Dynamic glyphs);
		static Dynamic lime_cairo_show_glyphs_dyn();

		static Void lime_cairo_show_page( Dynamic handle);
		static Dynamic lime_cairo_show_page_dyn();

		static Void lime_cairo_show_text( Dynamic handle,::String text);
		static Dynamic lime_cairo_show_text_dyn();

		static int lime_cairo_status( Dynamic handle);
		static Dynamic lime_cairo_status_dyn();

		static Void lime_cairo_stroke( Dynamic handle);
		static Dynamic lime_cairo_stroke_dyn();

		static Void lime_cairo_stroke_extents( Dynamic handle,Float x1,Float y1,Float x2,Float y2);
		static Dynamic lime_cairo_stroke_extents_dyn();

		static Void lime_cairo_stroke_preserve( Dynamic handle);
		static Dynamic lime_cairo_stroke_preserve_dyn();

		static Void lime_cairo_text_path( Dynamic handle,::String text);
		static Dynamic lime_cairo_text_path_dyn();

		static Void lime_cairo_transform( Dynamic handle,Dynamic matrix);
		static Dynamic lime_cairo_transform_dyn();

		static Void lime_cairo_translate( Dynamic handle,Float x,Float y);
		static Dynamic lime_cairo_translate_dyn();

		static int lime_cairo_version( );
		static Dynamic lime_cairo_version_dyn();

		static ::String lime_cairo_version_string( );
		static Dynamic lime_cairo_version_string_dyn();

		static int lime_cairo_font_face_status( Dynamic handle);
		static Dynamic lime_cairo_font_face_status_dyn();

		static Dynamic lime_cairo_font_options_create( );
		static Dynamic lime_cairo_font_options_create_dyn();

		static int lime_cairo_font_options_get_antialias( Dynamic handle);
		static Dynamic lime_cairo_font_options_get_antialias_dyn();

		static int lime_cairo_font_options_get_hint_metrics( Dynamic handle);
		static Dynamic lime_cairo_font_options_get_hint_metrics_dyn();

		static int lime_cairo_font_options_get_hint_style( Dynamic handle);
		static Dynamic lime_cairo_font_options_get_hint_style_dyn();

		static int lime_cairo_font_options_get_subpixel_order( Dynamic handle);
		static Dynamic lime_cairo_font_options_get_subpixel_order_dyn();

		static Void lime_cairo_font_options_set_antialias( Dynamic handle,int v);
		static Dynamic lime_cairo_font_options_set_antialias_dyn();

		static Void lime_cairo_font_options_set_hint_metrics( Dynamic handle,int v);
		static Dynamic lime_cairo_font_options_set_hint_metrics_dyn();

		static Void lime_cairo_font_options_set_hint_style( Dynamic handle,int v);
		static Dynamic lime_cairo_font_options_set_hint_style_dyn();

		static Void lime_cairo_font_options_set_subpixel_order( Dynamic handle,int v);
		static Dynamic lime_cairo_font_options_set_subpixel_order_dyn();

		static Dynamic lime_cairo_ft_font_face_create( Dynamic face,int flags);
		static Dynamic lime_cairo_ft_font_face_create_dyn();

		static Dynamic lime_cairo_image_surface_create( int format,int width,int height);
		static Dynamic lime_cairo_image_surface_create_dyn();

		static Dynamic lime_cairo_image_surface_create_for_data( Float data,int format,int width,int height,int stride);
		static Dynamic lime_cairo_image_surface_create_for_data_dyn();

		static Float lime_cairo_image_surface_get_data( Dynamic handle);
		static Dynamic lime_cairo_image_surface_get_data_dyn();

		static int lime_cairo_image_surface_get_format( Dynamic handle);
		static Dynamic lime_cairo_image_surface_get_format_dyn();

		static int lime_cairo_image_surface_get_height( Dynamic handle);
		static Dynamic lime_cairo_image_surface_get_height_dyn();

		static int lime_cairo_image_surface_get_stride( Dynamic handle);
		static Dynamic lime_cairo_image_surface_get_stride_dyn();

		static int lime_cairo_image_surface_get_width( Dynamic handle);
		static Dynamic lime_cairo_image_surface_get_width_dyn();

		static Void lime_cairo_pattern_add_color_stop_rgb( Dynamic handle,Float offset,Float red,Float green,Float blue);
		static Dynamic lime_cairo_pattern_add_color_stop_rgb_dyn();

		static Void lime_cairo_pattern_add_color_stop_rgba( Dynamic handle,Float offset,Float red,Float green,Float blue,Float alpha);
		static Dynamic lime_cairo_pattern_add_color_stop_rgba_dyn();

		static Dynamic lime_cairo_pattern_create_for_surface( Dynamic surface);
		static Dynamic lime_cairo_pattern_create_for_surface_dyn();

		static Dynamic lime_cairo_pattern_create_linear( Float x0,Float y0,Float x1,Float y1);
		static Dynamic lime_cairo_pattern_create_linear_dyn();

		static Dynamic lime_cairo_pattern_create_radial( Float cx0,Float cy0,Float radius0,Float cx1,Float cy1,Float radius1);
		static Dynamic lime_cairo_pattern_create_radial_dyn();

		static Dynamic lime_cairo_pattern_create_rgb( Float r,Float g,Float b);
		static Dynamic lime_cairo_pattern_create_rgb_dyn();

		static Dynamic lime_cairo_pattern_create_rgba( Float r,Float g,Float b,Float a);
		static Dynamic lime_cairo_pattern_create_rgba_dyn();

		static int lime_cairo_pattern_get_color_stop_count( Dynamic handle);
		static Dynamic lime_cairo_pattern_get_color_stop_count_dyn();

		static int lime_cairo_pattern_get_extend( Dynamic handle);
		static Dynamic lime_cairo_pattern_get_extend_dyn();

		static int lime_cairo_pattern_get_filter( Dynamic handle);
		static Dynamic lime_cairo_pattern_get_filter_dyn();

		static Dynamic lime_cairo_pattern_get_matrix( Dynamic handle);
		static Dynamic lime_cairo_pattern_get_matrix_dyn();

		static Void lime_cairo_pattern_set_extend( Dynamic handle,int extend);
		static Dynamic lime_cairo_pattern_set_extend_dyn();

		static Void lime_cairo_pattern_set_filter( Dynamic handle,int filter);
		static Dynamic lime_cairo_pattern_set_filter_dyn();

		static Void lime_cairo_pattern_set_matrix( Dynamic handle,Dynamic matrix);
		static Dynamic lime_cairo_pattern_set_matrix_dyn();

		static Void lime_cairo_surface_flush( Dynamic surface);
		static Dynamic lime_cairo_surface_flush_dyn();

		static Float lime_curl_getdate( ::String date,Float now);
		static Dynamic lime_curl_getdate_dyn();

		static Void lime_curl_global_cleanup( );
		static Dynamic lime_curl_global_cleanup_dyn();

		static int lime_curl_global_init( int flags);
		static Dynamic lime_curl_global_init_dyn();

		static Dynamic lime_curl_version( );
		static Dynamic lime_curl_version_dyn();

		static Dynamic lime_curl_version_info( int type);
		static Dynamic lime_curl_version_info_dyn();

		static Void lime_curl_easy_cleanup( Float handle);
		static Dynamic lime_curl_easy_cleanup_dyn();

		static Float lime_curl_easy_duphandle( Float handle);
		static Dynamic lime_curl_easy_duphandle_dyn();

		static Dynamic lime_curl_easy_escape( Float curl,::String url,int length);
		static Dynamic lime_curl_easy_escape_dyn();

		static Dynamic lime_curl_easy_getinfo( Float curl,int info);
		static Dynamic lime_curl_easy_getinfo_dyn();

		static Float lime_curl_easy_init( );
		static Dynamic lime_curl_easy_init_dyn();

		static int lime_curl_easy_pause( Float handle,int bitmask);
		static Dynamic lime_curl_easy_pause_dyn();

		static int lime_curl_easy_perform( Float easy_handle);
		static Dynamic lime_curl_easy_perform_dyn();

		static int lime_curl_easy_recv( Float curl,Dynamic buffer,int buflen,int n);
		static Dynamic lime_curl_easy_recv_dyn();

		static Void lime_curl_easy_reset( Float curl);
		static Dynamic lime_curl_easy_reset_dyn();

		static int lime_curl_easy_send( Float curl,Dynamic buffer,int buflen,int n);
		static Dynamic lime_curl_easy_send_dyn();

		static int lime_curl_easy_setopt( Float handle,int option,Dynamic parameter);
		static Dynamic lime_curl_easy_setopt_dyn();

		static Dynamic lime_curl_easy_strerror( int errornum);
		static Dynamic lime_curl_easy_strerror_dyn();

		static Dynamic lime_curl_easy_unescape( Float curl,::String url,int inlength,int outlength);
		static Dynamic lime_curl_easy_unescape_dyn();

		static Void lime_gl_active_texture( int texture);
		static Dynamic lime_gl_active_texture_dyn();

		static Void lime_gl_attach_shader( int program,int shader);
		static Dynamic lime_gl_attach_shader_dyn();

		static Void lime_gl_bind_attrib_location( int program,int index,::String name);
		static Dynamic lime_gl_bind_attrib_location_dyn();

		static Void lime_gl_bind_buffer( int target,int buffer);
		static Dynamic lime_gl_bind_buffer_dyn();

		static Void lime_gl_bind_framebuffer( int target,int framebuffer);
		static Dynamic lime_gl_bind_framebuffer_dyn();

		static Void lime_gl_bind_renderbuffer( int target,int renderbuffer);
		static Dynamic lime_gl_bind_renderbuffer_dyn();

		static Void lime_gl_bind_texture( int target,int texture);
		static Dynamic lime_gl_bind_texture_dyn();

		static Void lime_gl_blend_color( ::cpp::Float32 red,::cpp::Float32 green,::cpp::Float32 blue,::cpp::Float32 alpha);
		static Dynamic lime_gl_blend_color_dyn();

		static Void lime_gl_blend_equation( int mode);
		static Dynamic lime_gl_blend_equation_dyn();

		static Void lime_gl_blend_equation_separate( int modeRGB,int modeAlpha);
		static Dynamic lime_gl_blend_equation_separate_dyn();

		static Void lime_gl_blend_func( int sfactor,int dfactor);
		static Dynamic lime_gl_blend_func_dyn();

		static Void lime_gl_blend_func_separate( int srcRGB,int dstRGB,int srcAlpha,int dstAlpha);
		static Dynamic lime_gl_blend_func_separate_dyn();

		static Void lime_gl_buffer_data( int target,int size,Float srcData,int usage);
		static Dynamic lime_gl_buffer_data_dyn();

		static Void lime_gl_buffer_sub_data( int target,int offset,int size,Float srcData);
		static Dynamic lime_gl_buffer_sub_data_dyn();

		static int lime_gl_check_framebuffer_status( int target);
		static Dynamic lime_gl_check_framebuffer_status_dyn();

		static Void lime_gl_clear( int mask);
		static Dynamic lime_gl_clear_dyn();

		static Void lime_gl_clear_color( ::cpp::Float32 red,::cpp::Float32 green,::cpp::Float32 blue,::cpp::Float32 alpha);
		static Dynamic lime_gl_clear_color_dyn();

		static Void lime_gl_clear_depthf( ::cpp::Float32 depth);
		static Dynamic lime_gl_clear_depthf_dyn();

		static Void lime_gl_clear_stencil( int s);
		static Dynamic lime_gl_clear_stencil_dyn();

		static Void lime_gl_color_mask( bool red,bool green,bool blue,bool alpha);
		static Dynamic lime_gl_color_mask_dyn();

		static Void lime_gl_compile_shader( int shader);
		static Dynamic lime_gl_compile_shader_dyn();

		static Void lime_gl_compressed_tex_image_2d( int target,int level,int internalformat,int width,int height,int border,int imageSize,Float data);
		static Dynamic lime_gl_compressed_tex_image_2d_dyn();

		static Void lime_gl_compressed_tex_sub_image_2d( int target,int level,int xoffset,int yoffset,int width,int height,int format,int imageSize,Float data);
		static Dynamic lime_gl_compressed_tex_sub_image_2d_dyn();

		static Void lime_gl_copy_tex_image_2d( int target,int level,int internalformat,int x,int y,int width,int height,int border);
		static Dynamic lime_gl_copy_tex_image_2d_dyn();

		static Void lime_gl_copy_tex_sub_image_2d( int target,int level,int xoffset,int yoffset,int x,int y,int width,int height);
		static Dynamic lime_gl_copy_tex_sub_image_2d_dyn();

		static int lime_gl_create_buffer( );
		static Dynamic lime_gl_create_buffer_dyn();

		static int lime_gl_create_framebuffer( );
		static Dynamic lime_gl_create_framebuffer_dyn();

		static int lime_gl_create_program( );
		static Dynamic lime_gl_create_program_dyn();

		static int lime_gl_create_renderbuffer( );
		static Dynamic lime_gl_create_renderbuffer_dyn();

		static int lime_gl_create_shader( int type);
		static Dynamic lime_gl_create_shader_dyn();

		static int lime_gl_create_texture( );
		static Dynamic lime_gl_create_texture_dyn();

		static Void lime_gl_cull_face( int mode);
		static Dynamic lime_gl_cull_face_dyn();

		static Void lime_gl_delete_buffer( int buffer);
		static Dynamic lime_gl_delete_buffer_dyn();

		static Void lime_gl_delete_framebuffer( int framebuffer);
		static Dynamic lime_gl_delete_framebuffer_dyn();

		static Void lime_gl_delete_program( int program);
		static Dynamic lime_gl_delete_program_dyn();

		static Void lime_gl_delete_renderbuffer( int renderbuffer);
		static Dynamic lime_gl_delete_renderbuffer_dyn();

		static Void lime_gl_delete_shader( int shader);
		static Dynamic lime_gl_delete_shader_dyn();

		static Void lime_gl_delete_texture( int texture);
		static Dynamic lime_gl_delete_texture_dyn();

		static Void lime_gl_depth_func( int func);
		static Dynamic lime_gl_depth_func_dyn();

		static Void lime_gl_depth_mask( bool flag);
		static Dynamic lime_gl_depth_mask_dyn();

		static Void lime_gl_depth_rangef( ::cpp::Float32 zNear,::cpp::Float32 zFar);
		static Dynamic lime_gl_depth_rangef_dyn();

		static Void lime_gl_detach_shader( int program,int shader);
		static Dynamic lime_gl_detach_shader_dyn();

		static Void lime_gl_disable( int cap);
		static Dynamic lime_gl_disable_dyn();

		static Void lime_gl_disable_vertex_attrib_array( int index);
		static Dynamic lime_gl_disable_vertex_attrib_array_dyn();

		static Void lime_gl_draw_arrays( int mode,int first,int count);
		static Dynamic lime_gl_draw_arrays_dyn();

		static Void lime_gl_draw_elements( int mode,int count,int type,Float offset);
		static Dynamic lime_gl_draw_elements_dyn();

		static Void lime_gl_enable( int cap);
		static Dynamic lime_gl_enable_dyn();

		static Void lime_gl_enable_vertex_attrib_array( int index);
		static Dynamic lime_gl_enable_vertex_attrib_array_dyn();

		static Void lime_gl_finish( );
		static Dynamic lime_gl_finish_dyn();

		static Void lime_gl_flush( );
		static Dynamic lime_gl_flush_dyn();

		static Void lime_gl_framebuffer_renderbuffer( int target,int attachment,int renderbuffertarget,int renderbuffer);
		static Dynamic lime_gl_framebuffer_renderbuffer_dyn();

		static Void lime_gl_framebuffer_texture2D( int target,int attachment,int textarget,int texture,int level);
		static Dynamic lime_gl_framebuffer_texture2D_dyn();

		static Void lime_gl_front_face( int mode);
		static Dynamic lime_gl_front_face_dyn();

		static Void lime_gl_generate_mipmap( int target);
		static Dynamic lime_gl_generate_mipmap_dyn();

		static Dynamic lime_gl_get_active_attrib( int program,int index);
		static Dynamic lime_gl_get_active_attrib_dyn();

		static Dynamic lime_gl_get_active_uniform( int program,int index);
		static Dynamic lime_gl_get_active_uniform_dyn();

		static Dynamic lime_gl_get_attached_shaders( int program);
		static Dynamic lime_gl_get_attached_shaders_dyn();

		static int lime_gl_get_attrib_location( int program,::String name);
		static Dynamic lime_gl_get_attrib_location_dyn();

		static bool lime_gl_get_boolean( int pname);
		static Dynamic lime_gl_get_boolean_dyn();

		static Void lime_gl_get_booleanv( int pname,Float params);
		static Dynamic lime_gl_get_booleanv_dyn();

		static int lime_gl_get_buffer_parameteri( int target,int pname);
		static Dynamic lime_gl_get_buffer_parameteri_dyn();

		static Void lime_gl_get_buffer_parameteriv( int target,int pname,Float params);
		static Dynamic lime_gl_get_buffer_parameteriv_dyn();

		static Dynamic lime_gl_get_context_attributes( );
		static Dynamic lime_gl_get_context_attributes_dyn();

		static int lime_gl_get_error( );
		static Dynamic lime_gl_get_error_dyn();

		static Dynamic lime_gl_get_extension( ::String name);
		static Dynamic lime_gl_get_extension_dyn();

		static ::cpp::Float32 lime_gl_get_float( int pname);
		static Dynamic lime_gl_get_float_dyn();

		static Void lime_gl_get_floatv( int pname,Float params);
		static Dynamic lime_gl_get_floatv_dyn();

		static int lime_gl_get_framebuffer_attachment_parameteri( int target,int attachment,int pname);
		static Dynamic lime_gl_get_framebuffer_attachment_parameteri_dyn();

		static Void lime_gl_get_framebuffer_attachment_parameteriv( int target,int attachment,int pname,Float params);
		static Dynamic lime_gl_get_framebuffer_attachment_parameteriv_dyn();

		static int lime_gl_get_integer( int pname);
		static Dynamic lime_gl_get_integer_dyn();

		static Void lime_gl_get_integerv( int pname,Float params);
		static Dynamic lime_gl_get_integerv_dyn();

		static Dynamic lime_gl_get_program_info_log( int program);
		static Dynamic lime_gl_get_program_info_log_dyn();

		static int lime_gl_get_programi( int program,int pname);
		static Dynamic lime_gl_get_programi_dyn();

		static Void lime_gl_get_programiv( int program,int pname,Float params);
		static Dynamic lime_gl_get_programiv_dyn();

		static int lime_gl_get_renderbuffer_parameteri( int target,int pname);
		static Dynamic lime_gl_get_renderbuffer_parameteri_dyn();

		static Void lime_gl_get_renderbuffer_parameteriv( int target,int pname,Float params);
		static Dynamic lime_gl_get_renderbuffer_parameteriv_dyn();

		static Dynamic lime_gl_get_shader_info_log( int shader);
		static Dynamic lime_gl_get_shader_info_log_dyn();

		static int lime_gl_get_shaderi( int shader,int pname);
		static Dynamic lime_gl_get_shaderi_dyn();

		static Void lime_gl_get_shaderiv( int shader,int pname,Float params);
		static Dynamic lime_gl_get_shaderiv_dyn();

		static Dynamic lime_gl_get_shader_precision_format( int shadertype,int precisiontype);
		static Dynamic lime_gl_get_shader_precision_format_dyn();

		static Dynamic lime_gl_get_shader_source( int shader);
		static Dynamic lime_gl_get_shader_source_dyn();

		static Dynamic lime_gl_get_string( int pname);
		static Dynamic lime_gl_get_string_dyn();

		static ::cpp::Float32 lime_gl_get_tex_parameterf( int target,int pname);
		static Dynamic lime_gl_get_tex_parameterf_dyn();

		static Void lime_gl_get_tex_parameterfv( int target,int pname,Float params);
		static Dynamic lime_gl_get_tex_parameterfv_dyn();

		static int lime_gl_get_tex_parameteri( int target,int pname);
		static Dynamic lime_gl_get_tex_parameteri_dyn();

		static Void lime_gl_get_tex_parameteriv( int target,int pname,Float params);
		static Dynamic lime_gl_get_tex_parameteriv_dyn();

		static ::cpp::Float32 lime_gl_get_uniformf( int program,int location);
		static Dynamic lime_gl_get_uniformf_dyn();

		static Void lime_gl_get_uniformfv( int program,int location,Float params);
		static Dynamic lime_gl_get_uniformfv_dyn();

		static int lime_gl_get_uniformi( int program,int location);
		static Dynamic lime_gl_get_uniformi_dyn();

		static Void lime_gl_get_uniformiv( int program,int location,Float params);
		static Dynamic lime_gl_get_uniformiv_dyn();

		static int lime_gl_get_uniform_location( int program,::String name);
		static Dynamic lime_gl_get_uniform_location_dyn();

		static int lime_gl_get_vertex_attribi( int index,int pname);
		static Dynamic lime_gl_get_vertex_attribi_dyn();

		static Void lime_gl_get_vertex_attribiv( int index,int pname,Float params);
		static Dynamic lime_gl_get_vertex_attribiv_dyn();

		static Float lime_gl_get_vertex_attrib_pointerv( int index,int pname);
		static Dynamic lime_gl_get_vertex_attrib_pointerv_dyn();

		static Void lime_gl_hint( int target,int mode);
		static Dynamic lime_gl_hint_dyn();

		static bool lime_gl_is_buffer( int buffer);
		static Dynamic lime_gl_is_buffer_dyn();

		static bool lime_gl_is_enabled( int cap);
		static Dynamic lime_gl_is_enabled_dyn();

		static bool lime_gl_is_framebuffer( int framebuffer);
		static Dynamic lime_gl_is_framebuffer_dyn();

		static bool lime_gl_is_program( int program);
		static Dynamic lime_gl_is_program_dyn();

		static bool lime_gl_is_renderbuffer( int renderbuffer);
		static Dynamic lime_gl_is_renderbuffer_dyn();

		static bool lime_gl_is_shader( int shader);
		static Dynamic lime_gl_is_shader_dyn();

		static bool lime_gl_is_texture( int texture);
		static Dynamic lime_gl_is_texture_dyn();

		static Void lime_gl_line_width( ::cpp::Float32 width);
		static Dynamic lime_gl_line_width_dyn();

		static Void lime_gl_link_program( int program);
		static Dynamic lime_gl_link_program_dyn();

		static Void lime_gl_object_deregister( Dynamic object);
		static Dynamic lime_gl_object_deregister_dyn();

		static Dynamic lime_gl_object_from_id( int id,int type);
		static Dynamic lime_gl_object_from_id_dyn();

		static Void lime_gl_object_register( int id,int type,Dynamic object);
		static Dynamic lime_gl_object_register_dyn();

		static Void lime_gl_pixel_storei( int pname,int param);
		static Dynamic lime_gl_pixel_storei_dyn();

		static Void lime_gl_polygon_offset( ::cpp::Float32 factor,::cpp::Float32 units);
		static Dynamic lime_gl_polygon_offset_dyn();

		static Void lime_gl_read_pixels( int x,int y,int width,int height,int format,int type,Float pixels);
		static Dynamic lime_gl_read_pixels_dyn();

		static Void lime_gl_renderbuffer_storage( int target,int internalformat,int width,int height);
		static Dynamic lime_gl_renderbuffer_storage_dyn();

		static Void lime_gl_sample_coverage( ::cpp::Float32 value,bool invert);
		static Dynamic lime_gl_sample_coverage_dyn();

		static Void lime_gl_scissor( int x,int y,int width,int height);
		static Dynamic lime_gl_scissor_dyn();

		static Void lime_gl_shader_source( int shader,::String source);
		static Dynamic lime_gl_shader_source_dyn();

		static Void lime_gl_stencil_func( int func,int ref,int mask);
		static Dynamic lime_gl_stencil_func_dyn();

		static Void lime_gl_stencil_func_separate( int face,int func,int ref,int mask);
		static Dynamic lime_gl_stencil_func_separate_dyn();

		static Void lime_gl_stencil_mask( int mask);
		static Dynamic lime_gl_stencil_mask_dyn();

		static Void lime_gl_stencil_mask_separate( int face,int mask);
		static Dynamic lime_gl_stencil_mask_separate_dyn();

		static Void lime_gl_stencil_op( int fail,int zfail,int zpass);
		static Dynamic lime_gl_stencil_op_dyn();

		static Void lime_gl_stencil_op_separate( int face,int fail,int zfail,int zpass);
		static Dynamic lime_gl_stencil_op_separate_dyn();

		static Void lime_gl_tex_image_2d( int target,int level,int internalformat,int width,int height,int border,int format,int type,Float data);
		static Dynamic lime_gl_tex_image_2d_dyn();

		static Void lime_gl_tex_parameterf( int target,int pname,::cpp::Float32 param);
		static Dynamic lime_gl_tex_parameterf_dyn();

		static Void lime_gl_tex_parameteri( int target,int pname,int param);
		static Dynamic lime_gl_tex_parameteri_dyn();

		static Void lime_gl_tex_sub_image_2d( int target,int level,int xoffset,int yoffset,int width,int height,int format,int type,Float data);
		static Dynamic lime_gl_tex_sub_image_2d_dyn();

		static Void lime_gl_uniform1f( int location,::cpp::Float32 v0);
		static Dynamic lime_gl_uniform1f_dyn();

		static Void lime_gl_uniform1fv( int location,int count,Float v);
		static Dynamic lime_gl_uniform1fv_dyn();

		static Void lime_gl_uniform1i( int location,int v0);
		static Dynamic lime_gl_uniform1i_dyn();

		static Void lime_gl_uniform1iv( int location,int count,Float v);
		static Dynamic lime_gl_uniform1iv_dyn();

		static Void lime_gl_uniform2f( int location,::cpp::Float32 v0,::cpp::Float32 v1);
		static Dynamic lime_gl_uniform2f_dyn();

		static Void lime_gl_uniform2fv( int location,int count,Float v);
		static Dynamic lime_gl_uniform2fv_dyn();

		static Void lime_gl_uniform2i( int location,int v0,int v1);
		static Dynamic lime_gl_uniform2i_dyn();

		static Void lime_gl_uniform2iv( int location,int count,Float v);
		static Dynamic lime_gl_uniform2iv_dyn();

		static Void lime_gl_uniform3f( int location,::cpp::Float32 v0,::cpp::Float32 v1,::cpp::Float32 v2);
		static Dynamic lime_gl_uniform3f_dyn();

		static Void lime_gl_uniform3fv( int location,int count,Float v);
		static Dynamic lime_gl_uniform3fv_dyn();

		static Void lime_gl_uniform3i( int location,int v0,int v1,int v2);
		static Dynamic lime_gl_uniform3i_dyn();

		static Void lime_gl_uniform3iv( int location,int count,Float v);
		static Dynamic lime_gl_uniform3iv_dyn();

		static Void lime_gl_uniform4f( int location,::cpp::Float32 v0,::cpp::Float32 v1,::cpp::Float32 v2,::cpp::Float32 v3);
		static Dynamic lime_gl_uniform4f_dyn();

		static Void lime_gl_uniform4fv( int location,int count,Float v);
		static Dynamic lime_gl_uniform4fv_dyn();

		static Void lime_gl_uniform4i( int location,int v0,int v1,int v2,int v3);
		static Dynamic lime_gl_uniform4i_dyn();

		static Void lime_gl_uniform4iv( int location,int count,Float v);
		static Dynamic lime_gl_uniform4iv_dyn();

		static Void lime_gl_uniform_matrix2fv( int location,int count,bool transpose,Float value);
		static Dynamic lime_gl_uniform_matrix2fv_dyn();

		static Void lime_gl_uniform_matrix3fv( int location,int count,bool transpose,Float value);
		static Dynamic lime_gl_uniform_matrix3fv_dyn();

		static Void lime_gl_uniform_matrix4fv( int location,int count,bool transpose,Float value);
		static Dynamic lime_gl_uniform_matrix4fv_dyn();

		static Void lime_gl_use_program( int program);
		static Dynamic lime_gl_use_program_dyn();

		static Void lime_gl_validate_program( int program);
		static Dynamic lime_gl_validate_program_dyn();

		static Void lime_gl_vertex_attrib1f( int indx,::cpp::Float32 v0);
		static Dynamic lime_gl_vertex_attrib1f_dyn();

		static Void lime_gl_vertex_attrib1fv( int indx,Float values);
		static Dynamic lime_gl_vertex_attrib1fv_dyn();

		static Void lime_gl_vertex_attrib2f( int indx,::cpp::Float32 v0,::cpp::Float32 v1);
		static Dynamic lime_gl_vertex_attrib2f_dyn();

		static Void lime_gl_vertex_attrib2fv( int indx,Float values);
		static Dynamic lime_gl_vertex_attrib2fv_dyn();

		static Void lime_gl_vertex_attrib3f( int indx,::cpp::Float32 v0,::cpp::Float32 v1,::cpp::Float32 v2);
		static Dynamic lime_gl_vertex_attrib3f_dyn();

		static Void lime_gl_vertex_attrib3fv( int indx,Float values);
		static Dynamic lime_gl_vertex_attrib3fv_dyn();

		static Void lime_gl_vertex_attrib4f( int indx,::cpp::Float32 v0,::cpp::Float32 v1,::cpp::Float32 v2,::cpp::Float32 v3);
		static Dynamic lime_gl_vertex_attrib4f_dyn();

		static Void lime_gl_vertex_attrib4fv( int indx,Float values);
		static Dynamic lime_gl_vertex_attrib4fv_dyn();

		static Void lime_gl_vertex_attrib_pointer( int indx,int size,int type,bool normalized,int stride,Float offset);
		static Dynamic lime_gl_vertex_attrib_pointer_dyn();

		static Void lime_gl_viewport( int x,int y,int width,int height);
		static Dynamic lime_gl_viewport_dyn();

		static int lime_vorbis_file_bitrate( Dynamic vorbisFile,int bitstream);
		static Dynamic lime_vorbis_file_bitrate_dyn();

		static int lime_vorbis_file_bitrate_instant( Dynamic vorbisFile);
		static Dynamic lime_vorbis_file_bitrate_instant_dyn();

		static Void lime_vorbis_file_clear( Dynamic vorbisFile);
		static Dynamic lime_vorbis_file_clear_dyn();

		static Dynamic lime_vorbis_file_comment( Dynamic vorbisFile,int bitstream);
		static Dynamic lime_vorbis_file_comment_dyn();

		static Dynamic lime_vorbis_file_crosslap( Dynamic vorbisFile,Dynamic otherVorbisFile);
		static Dynamic lime_vorbis_file_crosslap_dyn();

		static Dynamic lime_vorbis_file_from_bytes( Dynamic bytes);
		static Dynamic lime_vorbis_file_from_bytes_dyn();

		static Dynamic lime_vorbis_file_from_file( ::String path);
		static Dynamic lime_vorbis_file_from_file_dyn();

		static Dynamic lime_vorbis_file_info( Dynamic vorbisFile,int bitstream);
		static Dynamic lime_vorbis_file_info_dyn();

		static int lime_vorbis_file_pcm_seek( Dynamic vorbisFile,Dynamic posLow,Dynamic posHigh);
		static Dynamic lime_vorbis_file_pcm_seek_dyn();

		static int lime_vorbis_file_pcm_seek_lap( Dynamic vorbisFile,Dynamic posLow,Dynamic posHigh);
		static Dynamic lime_vorbis_file_pcm_seek_lap_dyn();

		static int lime_vorbis_file_pcm_seek_page( Dynamic vorbisFile,Dynamic posLow,Dynamic posHigh);
		static Dynamic lime_vorbis_file_pcm_seek_page_dyn();

		static int lime_vorbis_file_pcm_seek_page_lap( Dynamic vorbisFile,Dynamic posLow,Dynamic posHigh);
		static Dynamic lime_vorbis_file_pcm_seek_page_lap_dyn();

		static int lime_vorbis_file_raw_seek( Dynamic vorbisFile,Dynamic posLow,Dynamic posHigh);
		static Dynamic lime_vorbis_file_raw_seek_dyn();

		static int lime_vorbis_file_raw_seek_lap( Dynamic vorbisFile,Dynamic posLow,Dynamic posHigh);
		static Dynamic lime_vorbis_file_raw_seek_lap_dyn();

		static Dynamic lime_vorbis_file_pcm_tell( Dynamic vorbisFile);
		static Dynamic lime_vorbis_file_pcm_tell_dyn();

		static Dynamic lime_vorbis_file_pcm_total( Dynamic vorbisFile,int bitstream);
		static Dynamic lime_vorbis_file_pcm_total_dyn();

		static Dynamic lime_vorbis_file_raw_tell( Dynamic vorbisFile);
		static Dynamic lime_vorbis_file_raw_tell_dyn();

		static Dynamic lime_vorbis_file_raw_total( Dynamic vorbisFile,int bitstream);
		static Dynamic lime_vorbis_file_raw_total_dyn();

		static Dynamic lime_vorbis_file_read( Dynamic vorbisFile,Dynamic buffer,int position,int length,bool bigendianp,int word,bool _signed);
		static Dynamic lime_vorbis_file_read_dyn();

		static Dynamic lime_vorbis_file_read_float( Dynamic vorbisFile,Dynamic pcmChannels,int samples);
		static Dynamic lime_vorbis_file_read_float_dyn();

		static bool lime_vorbis_file_seekable( Dynamic vorbisFile);
		static Dynamic lime_vorbis_file_seekable_dyn();

		static int lime_vorbis_file_serial_number( Dynamic vorbisFile,int bitstream);
		static Dynamic lime_vorbis_file_serial_number_dyn();

		static int lime_vorbis_file_streams( Dynamic vorbisFile);
		static Dynamic lime_vorbis_file_streams_dyn();

		static int lime_vorbis_file_time_seek( Dynamic vorbisFile,Float s);
		static Dynamic lime_vorbis_file_time_seek_dyn();

		static int lime_vorbis_file_time_seek_lap( Dynamic vorbisFile,Float s);
		static Dynamic lime_vorbis_file_time_seek_lap_dyn();

		static int lime_vorbis_file_time_seek_page( Dynamic vorbisFile,Float s);
		static Dynamic lime_vorbis_file_time_seek_page_dyn();

		static int lime_vorbis_file_time_seek_page_lap( Dynamic vorbisFile,Float s);
		static Dynamic lime_vorbis_file_time_seek_page_lap_dyn();

		static Float lime_vorbis_file_time_tell( Dynamic vorbisFile);
		static Dynamic lime_vorbis_file_time_tell_dyn();

		static Float lime_vorbis_file_time_total( Dynamic vorbisFile,int bitstream);
		static Dynamic lime_vorbis_file_time_total_dyn();

		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_application_create;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_application_event_manager_register;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_application_exec;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_application_init;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_application_quit;
		static ::cpp::Function< void ( ::hx::Object * ,Float ) > cffi_lime_application_set_frame_rate;
		static ::cpp::Function< bool ( ::hx::Object * ) > cffi_lime_application_update;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > cffi_lime_audio_load;
		static ::cpp::Function< ::hx::Object * ( Float ,int ) > cffi_lime_bytes_from_data_pointer;
		static ::cpp::Function< Float ( ::hx::Object * ) > cffi_lime_bytes_get_data_pointer;
		static ::cpp::Function< Float ( ::hx::Object * ,int ) > cffi_lime_bytes_get_data_pointer_offset;
		static ::cpp::Function< ::hx::Object * ( ::String ,::hx::Object * ) > cffi_lime_bytes_read_file;
		static ::cpp::Function< Float ( ::hx::Object * ) > cffi_lime_cffi_get_native_pointer;
		static ::cpp::Function< ::hx::Object * ( ) > cffi_lime_clipboard_get_text;
		static ::cpp::Function< void ( ::String ) > cffi_lime_clipboard_set_text;
		static ::cpp::Function< Float ( Float ,int ) > cffi_lime_data_pointer_offset;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > cffi_lime_deflate_compress;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > cffi_lime_deflate_decompress;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_drop_event_manager_register;
		static ::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ) > cffi_lime_file_dialog_open_directory;
		static ::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ) > cffi_lime_file_dialog_open_file;
		static ::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ) > cffi_lime_file_dialog_open_files;
		static ::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ) > cffi_lime_file_dialog_save_file;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_font_get_ascender;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_font_get_descender;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_font_get_family_name;
		static ::cpp::Function< int ( ::hx::Object * ,::String ) > cffi_lime_font_get_glyph_index;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::String ) > cffi_lime_font_get_glyph_indices;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > cffi_lime_font_get_glyph_metrics;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_font_get_height;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_font_get_num_glyphs;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_font_get_underline_position;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_font_get_underline_thickness;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_font_get_units_per_em;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_font_load;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > cffi_lime_font_outline_decompose;
		static ::cpp::Function< bool ( ::hx::Object * ,int ,::hx::Object * ) > cffi_lime_font_render_glyph;
		static ::cpp::Function< bool ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > cffi_lime_font_render_glyphs;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_font_set_size;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_gamepad_add_mappings;
		static ::cpp::Function< ::hx::Object * ( int ) > cffi_lime_gamepad_get_device_guid;
		static ::cpp::Function< ::hx::Object * ( int ) > cffi_lime_gamepad_get_device_name;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_gamepad_event_manager_register;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > cffi_lime_gzip_compress;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > cffi_lime_gzip_decompress;
		static ::cpp::Function< void ( int ,int ) > cffi_lime_haptic_vibrate;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ,::hx::Object * ) > cffi_lime_image_encode;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > cffi_lime_image_load;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > cffi_lime_image_data_util_color_transform;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ) > cffi_lime_image_data_util_copy_channel;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,bool ) > cffi_lime_image_data_util_copy_pixels;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) > cffi_lime_image_data_util_fill_rect;
		static ::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) > cffi_lime_image_data_util_flood_fill;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,::hx::Object * ) > cffi_lime_image_data_util_get_pixels;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ) > cffi_lime_image_data_util_merge;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_image_data_util_multiply_alpha;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) > cffi_lime_image_data_util_resize;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_image_data_util_set_format;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,int ) > cffi_lime_image_data_util_set_pixels;
		static ::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ,int ,int ,int ,bool ) > cffi_lime_image_data_util_threshold;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_image_data_util_unmultiply_alpha;
		static ::cpp::Function< ::hx::Object * ( int ) > cffi_lime_joystick_get_device_guid;
		static ::cpp::Function< ::hx::Object * ( int ) > cffi_lime_joystick_get_device_name;
		static ::cpp::Function< int ( int ) > cffi_lime_joystick_get_num_axes;
		static ::cpp::Function< int ( int ) > cffi_lime_joystick_get_num_buttons;
		static ::cpp::Function< int ( int ) > cffi_lime_joystick_get_num_hats;
		static ::cpp::Function< int ( int ) > cffi_lime_joystick_get_num_trackballs;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_joystick_event_manager_register;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,bool ,::hx::Object * ) > cffi_lime_jpeg_decode_bytes;
		static ::cpp::Function< ::hx::Object * ( ::String ,bool ,::hx::Object * ) > cffi_lime_jpeg_decode_file;
		static ::cpp::Function< ::cpp::Float32 ( ::cpp::Float32 ) > cffi_lime_key_code_from_scan_code;
		static ::cpp::Function< ::cpp::Float32 ( ::cpp::Float32 ) > cffi_lime_key_code_to_scan_code;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_key_event_manager_register;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > cffi_lime_lzma_compress;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > cffi_lime_lzma_decompress;
		static ::cpp::Function< void ( ) > cffi_lime_mouse_hide;
		static ::cpp::Function< void ( int ) > cffi_lime_mouse_set_cursor;
		static ::cpp::Function< void ( bool ) > cffi_lime_mouse_set_lock;
		static ::cpp::Function< void ( ) > cffi_lime_mouse_show;
		static ::cpp::Function< void ( int ,int ,::hx::Object * ) > cffi_lime_mouse_warp;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_mouse_event_manager_register;
		static ::cpp::Function< void ( ::String ) > cffi_lime_neko_execute;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,bool ,::hx::Object * ) > cffi_lime_png_decode_bytes;
		static ::cpp::Function< ::hx::Object * ( ::String ,bool ,::hx::Object * ) > cffi_lime_png_decode_file;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_renderer_create;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_renderer_flip;
		static ::cpp::Function< Float ( ::hx::Object * ) > cffi_lime_renderer_get_context;
		static ::cpp::Function< Float ( ::hx::Object * ) > cffi_lime_renderer_get_scale;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_renderer_get_type;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_renderer_lock;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_renderer_make_current;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > cffi_lime_renderer_read_pixels;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_renderer_unlock;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_render_event_manager_register;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_sensor_event_manager_register;
		static ::cpp::Function< bool ( ) > cffi_lime_system_get_allow_screen_timeout;
		static ::cpp::Function< bool ( bool ) > cffi_lime_system_set_allow_screen_timeout;
		static ::cpp::Function< ::hx::Object * ( int ,::String ,::String ) > cffi_lime_system_get_directory;
		static ::cpp::Function< ::hx::Object * ( int ) > cffi_lime_system_get_display;
		static ::cpp::Function< bool ( ) > cffi_lime_system_get_ios_tablet;
		static ::cpp::Function< int ( ) > cffi_lime_system_get_num_displays;
		static ::cpp::Function< Float ( ) > cffi_lime_system_get_timer;
		static ::cpp::Function< void ( ::String ) > cffi_lime_system_open_file;
		static ::cpp::Function< void ( ::String ,::String ) > cffi_lime_system_open_url;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_text_event_manager_register;
		static ::cpp::Function< ::hx::Object * ( int ,::String ,::String ) > cffi_lime_text_layout_create;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,int ,::String ,::hx::Object * ) > cffi_lime_text_layout_position;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_text_layout_set_direction;
		static ::cpp::Function< void ( ::hx::Object * ,::String ) > cffi_lime_text_layout_set_language;
		static ::cpp::Function< void ( ::hx::Object * ,::String ) > cffi_lime_text_layout_set_script;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_touch_event_manager_register;
		static ::cpp::Function< void ( ::hx::Object * ,::String ,::String ) > cffi_lime_window_alert;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_window_close;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ,int ,::String ) > cffi_lime_window_create;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_window_focus;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_window_get_display;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_window_get_display_mode;
		static ::cpp::Function< bool ( ::hx::Object * ) > cffi_lime_window_get_enable_text_events;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_window_get_height;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_window_get_id;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_window_get_width;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_window_get_x;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_window_get_y;
		static ::cpp::Function< void ( ::hx::Object * ,int ,int ) > cffi_lime_window_move;
		static ::cpp::Function< void ( ::hx::Object * ,int ,int ) > cffi_lime_window_resize;
		static ::cpp::Function< bool ( ::hx::Object * ,bool ) > cffi_lime_window_set_borderless;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > cffi_lime_window_set_display_mode;
		static ::cpp::Function< void ( ::hx::Object * ,bool ) > cffi_lime_window_set_enable_text_events;
		static ::cpp::Function< bool ( ::hx::Object * ,bool ) > cffi_lime_window_set_fullscreen;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_window_set_icon;
		static ::cpp::Function< bool ( ::hx::Object * ,bool ) > cffi_lime_window_set_maximized;
		static ::cpp::Function< bool ( ::hx::Object * ,bool ) > cffi_lime_window_set_minimized;
		static ::cpp::Function< bool ( ::hx::Object * ,bool ) > cffi_lime_window_set_resizable;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::String ) > cffi_lime_window_set_title;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_window_event_manager_register;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > cffi_lime_zlib_compress;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > cffi_lime_zlib_decompress;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > cffi_lime_jni_call_member;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > cffi_lime_jni_call_static;
		static ::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ,bool ) > cffi_lime_jni_create_field;
		static ::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ,bool ,bool ) > cffi_lime_jni_create_method;
		static ::cpp::Function< Float ( ) > cffi_lime_jni_get_env;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > cffi_lime_jni_get_member;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_jni_get_static;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_jni_post_ui_callback;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > cffi_lime_jni_set_member;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_jni_set_static;
		static ::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ,int ,int ) > cffi_lime_al_buffer_data;
		static ::cpp::Function< void ( ::hx::Object * ,int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > cffi_lime_al_buffer3f;
		static ::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) > cffi_lime_al_buffer3i;
		static ::cpp::Function< void ( ::hx::Object * ,int ,::cpp::Float32 ) > cffi_lime_al_bufferf;
		static ::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) > cffi_lime_al_bufferfv;
		static ::cpp::Function< void ( ::hx::Object * ,int ,int ) > cffi_lime_al_bufferi;
		static ::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) > cffi_lime_al_bufferiv;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_al_delete_buffer;
		static ::cpp::Function< void ( int ,::hx::Object * ) > cffi_lime_al_delete_buffers;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_al_delete_source;
		static ::cpp::Function< void ( int ,::hx::Object * ) > cffi_lime_al_delete_sources;
		static ::cpp::Function< void ( int ) > cffi_lime_al_disable;
		static ::cpp::Function< void ( int ) > cffi_lime_al_distance_model;
		static ::cpp::Function< void ( ::cpp::Float32 ) > cffi_lime_al_doppler_factor;
		static ::cpp::Function< void ( ::cpp::Float32 ) > cffi_lime_al_doppler_velocity;
		static ::cpp::Function< void ( int ) > cffi_lime_al_enable;
		static ::cpp::Function< ::hx::Object * ( ) > cffi_lime_al_gen_source;
		static ::cpp::Function< ::hx::Object * ( int ) > cffi_lime_al_gen_sources;
		static ::cpp::Function< bool ( int ) > cffi_lime_al_get_boolean;
		static ::cpp::Function< ::hx::Object * ( int ,int ) > cffi_lime_al_get_booleanv;
		static ::cpp::Function< ::hx::Object * ( ) > cffi_lime_al_gen_buffer;
		static ::cpp::Function< ::hx::Object * ( int ) > cffi_lime_al_gen_buffers;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > cffi_lime_al_get_buffer3f;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > cffi_lime_al_get_buffer3i;
		static ::cpp::Function< ::cpp::Float32 ( ::hx::Object * ,int ) > cffi_lime_al_get_bufferf;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) > cffi_lime_al_get_bufferfv;
		static ::cpp::Function< int ( ::hx::Object * ,int ) > cffi_lime_al_get_bufferi;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) > cffi_lime_al_get_bufferiv;
		static ::cpp::Function< Float ( int ) > cffi_lime_al_get_double;
		static ::cpp::Function< ::hx::Object * ( int ,int ) > cffi_lime_al_get_doublev;
		static ::cpp::Function< int ( ::String ) > cffi_lime_al_get_enum_value;
		static ::cpp::Function< int ( ) > cffi_lime_al_get_error;
		static ::cpp::Function< ::cpp::Float32 ( int ) > cffi_lime_al_get_float;
		static ::cpp::Function< ::hx::Object * ( int ,int ) > cffi_lime_al_get_floatv;
		static ::cpp::Function< int ( int ) > cffi_lime_al_get_integer;
		static ::cpp::Function< ::hx::Object * ( int ,int ) > cffi_lime_al_get_integerv;
		static ::cpp::Function< ::hx::Object * ( int ) > cffi_lime_al_get_listener3f;
		static ::cpp::Function< ::hx::Object * ( int ) > cffi_lime_al_get_listener3i;
		static ::cpp::Function< ::cpp::Float32 ( int ) > cffi_lime_al_get_listenerf;
		static ::cpp::Function< ::hx::Object * ( int ,int ) > cffi_lime_al_get_listenerfv;
		static ::cpp::Function< int ( int ) > cffi_lime_al_get_listeneri;
		static ::cpp::Function< ::hx::Object * ( int ,int ) > cffi_lime_al_get_listeneriv;
		static ::cpp::Function< Float ( ::String ) > cffi_lime_al_get_proc_address;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > cffi_lime_al_get_source3f;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > cffi_lime_al_get_source3i;
		static ::cpp::Function< ::cpp::Float32 ( ::hx::Object * ,int ) > cffi_lime_al_get_sourcef;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) > cffi_lime_al_get_sourcefv;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > cffi_lime_al_get_sourcei;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) > cffi_lime_al_get_sourceiv;
		static ::cpp::Function< ::hx::Object * ( int ) > cffi_lime_al_get_string;
		static ::cpp::Function< bool ( ::hx::Object * ) > cffi_lime_al_is_buffer;
		static ::cpp::Function< bool ( int ) > cffi_lime_al_is_enabled;
		static ::cpp::Function< bool ( ::String ) > cffi_lime_al_is_extension_present;
		static ::cpp::Function< bool ( ::hx::Object * ) > cffi_lime_al_is_source;
		static ::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > cffi_lime_al_listener3f;
		static ::cpp::Function< void ( int ,int ,int ,int ) > cffi_lime_al_listener3i;
		static ::cpp::Function< void ( int ,::cpp::Float32 ) > cffi_lime_al_listenerf;
		static ::cpp::Function< void ( int ,::hx::Object * ) > cffi_lime_al_listenerfv;
		static ::cpp::Function< void ( int ,int ) > cffi_lime_al_listeneri;
		static ::cpp::Function< void ( int ,::hx::Object * ) > cffi_lime_al_listeneriv;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_al_source_pause;
		static ::cpp::Function< void ( int ,::hx::Object * ) > cffi_lime_al_source_pausev;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_al_source_play;
		static ::cpp::Function< void ( int ,::hx::Object * ) > cffi_lime_al_source_playv;
		static ::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) > cffi_lime_al_source_queue_buffers;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_al_source_rewind;
		static ::cpp::Function< void ( int ,::hx::Object * ) > cffi_lime_al_source_rewindv;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_al_source_stop;
		static ::cpp::Function< void ( int ,::hx::Object * ) > cffi_lime_al_source_stopv;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > cffi_lime_al_source_unqueue_buffers;
		static ::cpp::Function< void ( ::hx::Object * ,int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > cffi_lime_al_source3f;
		static ::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) > cffi_lime_al_source3i;
		static ::cpp::Function< void ( ::hx::Object * ,int ,::cpp::Float32 ) > cffi_lime_al_sourcef;
		static ::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) > cffi_lime_al_sourcefv;
		static ::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) > cffi_lime_al_sourcei;
		static ::cpp::Function< void ( ::hx::Object * ,int ,::hx::Object * ) > cffi_lime_al_sourceiv;
		static ::cpp::Function< void ( ::cpp::Float32 ) > cffi_lime_al_speed_of_sound;
		static ::cpp::Function< bool ( ::hx::Object * ) > cffi_lime_alc_close_device;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > cffi_lime_alc_create_context;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_alc_destroy_context;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_alc_get_contexts_device;
		static ::cpp::Function< ::hx::Object * ( ) > cffi_lime_alc_get_current_context;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_alc_get_error;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) > cffi_lime_alc_get_integerv;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > cffi_lime_alc_get_string;
		static ::cpp::Function< bool ( ::hx::Object * ) > cffi_lime_alc_make_context_current;
		static ::cpp::Function< ::hx::Object * ( ::String ) > cffi_lime_alc_open_device;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_alc_pause_device;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_alc_process_context;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_alc_resume_device;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_alc_suspend_context;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) > cffi_lime_cairo_arc;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) > cffi_lime_cairo_arc_negative;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_clip;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_clip_preserve;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > cffi_lime_cairo_clip_extents;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_close_path;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_copy_page;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_cairo_create;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ,Float ) > cffi_lime_cairo_curve_to;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_fill;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > cffi_lime_cairo_fill_extents;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_fill_preserve;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_get_antialias;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_cairo_get_current_point;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_cairo_get_dash;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_get_dash_count;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_get_fill_rule;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_cairo_get_font_face;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_cairo_get_font_options;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_cairo_get_group_target;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_get_line_cap;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_get_line_join;
		static ::cpp::Function< Float ( ::hx::Object * ) > cffi_lime_cairo_get_line_width;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_cairo_get_matrix;
		static ::cpp::Function< Float ( ::hx::Object * ) > cffi_lime_cairo_get_miter_limit;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_get_operator;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_cairo_get_source;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_cairo_get_target;
		static ::cpp::Function< Float ( ::hx::Object * ) > cffi_lime_cairo_get_tolerance;
		static ::cpp::Function< bool ( ::hx::Object * ) > cffi_lime_cairo_has_current_point;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_identity_matrix;
		static ::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) > cffi_lime_cairo_in_clip;
		static ::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) > cffi_lime_cairo_in_fill;
		static ::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) > cffi_lime_cairo_in_stroke;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > cffi_lime_cairo_line_to;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_cairo_mask;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,Float ,Float ) > cffi_lime_cairo_mask_surface;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > cffi_lime_cairo_move_to;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_new_path;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_paint;
		static ::cpp::Function< void ( ::hx::Object * ,Float ) > cffi_lime_cairo_paint_with_alpha;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_cairo_pop_group;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_pop_group_to_source;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_push_group;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_cairo_push_group_with_content;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > cffi_lime_cairo_rectangle;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ,Float ) > cffi_lime_cairo_rel_curve_to;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > cffi_lime_cairo_rel_line_to;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > cffi_lime_cairo_rel_move_to;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_reset_clip;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_restore;
		static ::cpp::Function< void ( ::hx::Object * ,Float ) > cffi_lime_cairo_rotate;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_save;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > cffi_lime_cairo_scale;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_cairo_set_antialias;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_cairo_set_dash;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_cairo_set_fill_rule;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_cairo_set_font_face;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_cairo_set_font_options;
		static ::cpp::Function< void ( ::hx::Object * ,Float ) > cffi_lime_cairo_set_font_size;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_cairo_set_line_cap;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_cairo_set_line_join;
		static ::cpp::Function< void ( ::hx::Object * ,Float ) > cffi_lime_cairo_set_line_width;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ,Float ) > cffi_lime_cairo_set_matrix;
		static ::cpp::Function< void ( ::hx::Object * ,Float ) > cffi_lime_cairo_set_miter_limit;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_cairo_set_operator;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_cairo_set_source;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ) > cffi_lime_cairo_set_source_rgb;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > cffi_lime_cairo_set_source_rgba;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,Float ,Float ) > cffi_lime_cairo_set_source_surface;
		static ::cpp::Function< void ( ::hx::Object * ,Float ) > cffi_lime_cairo_set_tolerance;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_cairo_show_glyphs;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_show_page;
		static ::cpp::Function< void ( ::hx::Object * ,::String ) > cffi_lime_cairo_show_text;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_status;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_stroke;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > cffi_lime_cairo_stroke_extents;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_stroke_preserve;
		static ::cpp::Function< void ( ::hx::Object * ,::String ) > cffi_lime_cairo_text_path;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_cairo_transform;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > cffi_lime_cairo_translate;
		static ::cpp::Function< int ( ) > cffi_lime_cairo_version;
		static ::cpp::Function< ::String ( ) > cffi_lime_cairo_version_string;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_font_face_status;
		static ::cpp::Function< ::hx::Object * ( ) > cffi_lime_cairo_font_options_create;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_font_options_get_antialias;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_font_options_get_hint_metrics;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_font_options_get_hint_style;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_font_options_get_subpixel_order;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_cairo_font_options_set_antialias;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_cairo_font_options_set_hint_metrics;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_cairo_font_options_set_hint_style;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_cairo_font_options_set_subpixel_order;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > cffi_lime_cairo_ft_font_face_create;
		static ::cpp::Function< ::hx::Object * ( int ,int ,int ) > cffi_lime_cairo_image_surface_create;
		static ::cpp::Function< ::hx::Object * ( Float ,int ,int ,int ,int ) > cffi_lime_cairo_image_surface_create_for_data;
		static ::cpp::Function< Float ( ::hx::Object * ) > cffi_lime_cairo_image_surface_get_data;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_image_surface_get_format;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_image_surface_get_height;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_image_surface_get_stride;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_image_surface_get_width;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > cffi_lime_cairo_pattern_add_color_stop_rgb;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) > cffi_lime_cairo_pattern_add_color_stop_rgba;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_cairo_pattern_create_for_surface;
		static ::cpp::Function< ::hx::Object * ( Float ,Float ,Float ,Float ) > cffi_lime_cairo_pattern_create_linear;
		static ::cpp::Function< ::hx::Object * ( Float ,Float ,Float ,Float ,Float ,Float ) > cffi_lime_cairo_pattern_create_radial;
		static ::cpp::Function< ::hx::Object * ( Float ,Float ,Float ) > cffi_lime_cairo_pattern_create_rgb;
		static ::cpp::Function< ::hx::Object * ( Float ,Float ,Float ,Float ) > cffi_lime_cairo_pattern_create_rgba;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_pattern_get_color_stop_count;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_pattern_get_extend;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_pattern_get_filter;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_cairo_pattern_get_matrix;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_cairo_pattern_set_extend;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_cairo_pattern_set_filter;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_cairo_pattern_set_matrix;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_surface_flush;
		static ::cpp::Function< Float ( ::String ,Float ) > cffi_lime_curl_getdate;
		static ::cpp::Function< void ( ) > cffi_lime_curl_global_cleanup;
		static ::cpp::Function< int ( int ) > cffi_lime_curl_global_init;
		static ::cpp::Function< ::hx::Object * ( ) > cffi_lime_curl_version;
		static ::cpp::Function< ::hx::Object * ( int ) > cffi_lime_curl_version_info;
		static ::cpp::Function< void ( Float ) > cffi_lime_curl_easy_cleanup;
		static ::cpp::Function< Float ( Float ) > cffi_lime_curl_easy_duphandle;
		static ::cpp::Function< ::hx::Object * ( Float ,::String ,int ) > cffi_lime_curl_easy_escape;
		static ::cpp::Function< ::hx::Object * ( Float ,int ) > cffi_lime_curl_easy_getinfo;
		static ::cpp::Function< Float ( ) > cffi_lime_curl_easy_init;
		static ::cpp::Function< int ( Float ,int ) > cffi_lime_curl_easy_pause;
		static ::cpp::Function< int ( Float ) > cffi_lime_curl_easy_perform;
		static ::cpp::Function< int ( Float ,::hx::Object * ,int ,int ) > cffi_lime_curl_easy_recv;
		static ::cpp::Function< void ( Float ) > cffi_lime_curl_easy_reset;
		static ::cpp::Function< int ( Float ,::hx::Object * ,int ,int ) > cffi_lime_curl_easy_send;
		static ::cpp::Function< int ( Float ,int ,::hx::Object * ) > cffi_lime_curl_easy_setopt;
		static ::cpp::Function< ::hx::Object * ( int ) > cffi_lime_curl_easy_strerror;
		static ::cpp::Function< ::hx::Object * ( Float ,::String ,int ,int ) > cffi_lime_curl_easy_unescape;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_active_texture;
		static ::cpp::Function< void ( int ,int ) > cffi_lime_gl_attach_shader;
		static ::cpp::Function< void ( int ,int ,::String ) > cffi_lime_gl_bind_attrib_location;
		static ::cpp::Function< void ( int ,int ) > cffi_lime_gl_bind_buffer;
		static ::cpp::Function< void ( int ,int ) > cffi_lime_gl_bind_framebuffer;
		static ::cpp::Function< void ( int ,int ) > cffi_lime_gl_bind_renderbuffer;
		static ::cpp::Function< void ( int ,int ) > cffi_lime_gl_bind_texture;
		static ::cpp::Function< void ( ::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > cffi_lime_gl_blend_color;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_blend_equation;
		static ::cpp::Function< void ( int ,int ) > cffi_lime_gl_blend_equation_separate;
		static ::cpp::Function< void ( int ,int ) > cffi_lime_gl_blend_func;
		static ::cpp::Function< void ( int ,int ,int ,int ) > cffi_lime_gl_blend_func_separate;
		static ::cpp::Function< void ( int ,int ,Float ,int ) > cffi_lime_gl_buffer_data;
		static ::cpp::Function< void ( int ,int ,int ,Float ) > cffi_lime_gl_buffer_sub_data;
		static ::cpp::Function< int ( int ) > cffi_lime_gl_check_framebuffer_status;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_clear;
		static ::cpp::Function< void ( ::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > cffi_lime_gl_clear_color;
		static ::cpp::Function< void ( ::cpp::Float32 ) > cffi_lime_gl_clear_depthf;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_clear_stencil;
		static ::cpp::Function< void ( bool ,bool ,bool ,bool ) > cffi_lime_gl_color_mask;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_compile_shader;
		static ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,Float ) > cffi_lime_gl_compressed_tex_image_2d;
		static ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ,Float ) > cffi_lime_gl_compressed_tex_sub_image_2d;
		static ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ) > cffi_lime_gl_copy_tex_image_2d;
		static ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ) > cffi_lime_gl_copy_tex_sub_image_2d;
		static ::cpp::Function< int ( ) > cffi_lime_gl_create_buffer;
		static ::cpp::Function< int ( ) > cffi_lime_gl_create_framebuffer;
		static ::cpp::Function< int ( ) > cffi_lime_gl_create_program;
		static ::cpp::Function< int ( ) > cffi_lime_gl_create_renderbuffer;
		static ::cpp::Function< int ( int ) > cffi_lime_gl_create_shader;
		static ::cpp::Function< int ( ) > cffi_lime_gl_create_texture;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_cull_face;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_delete_buffer;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_delete_framebuffer;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_delete_program;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_delete_renderbuffer;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_delete_shader;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_delete_texture;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_depth_func;
		static ::cpp::Function< void ( bool ) > cffi_lime_gl_depth_mask;
		static ::cpp::Function< void ( ::cpp::Float32 ,::cpp::Float32 ) > cffi_lime_gl_depth_rangef;
		static ::cpp::Function< void ( int ,int ) > cffi_lime_gl_detach_shader;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_disable;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_disable_vertex_attrib_array;
		static ::cpp::Function< void ( int ,int ,int ) > cffi_lime_gl_draw_arrays;
		static ::cpp::Function< void ( int ,int ,int ,Float ) > cffi_lime_gl_draw_elements;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_enable;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_enable_vertex_attrib_array;
		static ::cpp::Function< void ( ) > cffi_lime_gl_finish;
		static ::cpp::Function< void ( ) > cffi_lime_gl_flush;
		static ::cpp::Function< void ( int ,int ,int ,int ) > cffi_lime_gl_framebuffer_renderbuffer;
		static ::cpp::Function< void ( int ,int ,int ,int ,int ) > cffi_lime_gl_framebuffer_texture2D;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_front_face;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_generate_mipmap;
		static ::cpp::Function< ::hx::Object * ( int ,int ) > cffi_lime_gl_get_active_attrib;
		static ::cpp::Function< ::hx::Object * ( int ,int ) > cffi_lime_gl_get_active_uniform;
		static ::cpp::Function< ::hx::Object * ( int ) > cffi_lime_gl_get_attached_shaders;
		static ::cpp::Function< int ( int ,::String ) > cffi_lime_gl_get_attrib_location;
		static ::cpp::Function< bool ( int ) > cffi_lime_gl_get_boolean;
		static ::cpp::Function< void ( int ,Float ) > cffi_lime_gl_get_booleanv;
		static ::cpp::Function< int ( int ,int ) > cffi_lime_gl_get_buffer_parameteri;
		static ::cpp::Function< void ( int ,int ,Float ) > cffi_lime_gl_get_buffer_parameteriv;
		static ::cpp::Function< ::hx::Object * ( ) > cffi_lime_gl_get_context_attributes;
		static ::cpp::Function< int ( ) > cffi_lime_gl_get_error;
		static ::cpp::Function< ::hx::Object * ( ::String ) > cffi_lime_gl_get_extension;
		static ::cpp::Function< ::cpp::Float32 ( int ) > cffi_lime_gl_get_float;
		static ::cpp::Function< void ( int ,Float ) > cffi_lime_gl_get_floatv;
		static ::cpp::Function< int ( int ,int ,int ) > cffi_lime_gl_get_framebuffer_attachment_parameteri;
		static ::cpp::Function< void ( int ,int ,int ,Float ) > cffi_lime_gl_get_framebuffer_attachment_parameteriv;
		static ::cpp::Function< int ( int ) > cffi_lime_gl_get_integer;
		static ::cpp::Function< void ( int ,Float ) > cffi_lime_gl_get_integerv;
		static ::cpp::Function< ::hx::Object * ( int ) > cffi_lime_gl_get_program_info_log;
		static ::cpp::Function< int ( int ,int ) > cffi_lime_gl_get_programi;
		static ::cpp::Function< void ( int ,int ,Float ) > cffi_lime_gl_get_programiv;
		static ::cpp::Function< int ( int ,int ) > cffi_lime_gl_get_renderbuffer_parameteri;
		static ::cpp::Function< void ( int ,int ,Float ) > cffi_lime_gl_get_renderbuffer_parameteriv;
		static ::cpp::Function< ::hx::Object * ( int ) > cffi_lime_gl_get_shader_info_log;
		static ::cpp::Function< int ( int ,int ) > cffi_lime_gl_get_shaderi;
		static ::cpp::Function< void ( int ,int ,Float ) > cffi_lime_gl_get_shaderiv;
		static ::cpp::Function< ::hx::Object * ( int ,int ) > cffi_lime_gl_get_shader_precision_format;
		static ::cpp::Function< ::hx::Object * ( int ) > cffi_lime_gl_get_shader_source;
		static ::cpp::Function< ::hx::Object * ( int ) > cffi_lime_gl_get_string;
		static ::cpp::Function< ::cpp::Float32 ( int ,int ) > cffi_lime_gl_get_tex_parameterf;
		static ::cpp::Function< void ( int ,int ,Float ) > cffi_lime_gl_get_tex_parameterfv;
		static ::cpp::Function< int ( int ,int ) > cffi_lime_gl_get_tex_parameteri;
		static ::cpp::Function< void ( int ,int ,Float ) > cffi_lime_gl_get_tex_parameteriv;
		static ::cpp::Function< ::cpp::Float32 ( int ,int ) > cffi_lime_gl_get_uniformf;
		static ::cpp::Function< void ( int ,int ,Float ) > cffi_lime_gl_get_uniformfv;
		static ::cpp::Function< int ( int ,int ) > cffi_lime_gl_get_uniformi;
		static ::cpp::Function< void ( int ,int ,Float ) > cffi_lime_gl_get_uniformiv;
		static ::cpp::Function< int ( int ,::String ) > cffi_lime_gl_get_uniform_location;
		static ::cpp::Function< int ( int ,int ) > cffi_lime_gl_get_vertex_attribi;
		static ::cpp::Function< void ( int ,int ,Float ) > cffi_lime_gl_get_vertex_attribiv;
		static ::cpp::Function< Float ( int ,int ) > cffi_lime_gl_get_vertex_attrib_pointerv;
		static ::cpp::Function< void ( int ,int ) > cffi_lime_gl_hint;
		static ::cpp::Function< bool ( int ) > cffi_lime_gl_is_buffer;
		static ::cpp::Function< bool ( int ) > cffi_lime_gl_is_enabled;
		static ::cpp::Function< bool ( int ) > cffi_lime_gl_is_framebuffer;
		static ::cpp::Function< bool ( int ) > cffi_lime_gl_is_program;
		static ::cpp::Function< bool ( int ) > cffi_lime_gl_is_renderbuffer;
		static ::cpp::Function< bool ( int ) > cffi_lime_gl_is_shader;
		static ::cpp::Function< bool ( int ) > cffi_lime_gl_is_texture;
		static ::cpp::Function< void ( ::cpp::Float32 ) > cffi_lime_gl_line_width;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_link_program;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_gl_object_deregister;
		static ::cpp::Function< ::hx::Object * ( int ,int ) > cffi_lime_gl_object_from_id;
		static ::cpp::Function< void ( int ,int ,::hx::Object * ) > cffi_lime_gl_object_register;
		static ::cpp::Function< void ( int ,int ) > cffi_lime_gl_pixel_storei;
		static ::cpp::Function< void ( ::cpp::Float32 ,::cpp::Float32 ) > cffi_lime_gl_polygon_offset;
		static ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,Float ) > cffi_lime_gl_read_pixels;
		static ::cpp::Function< void ( int ,int ,int ,int ) > cffi_lime_gl_renderbuffer_storage;
		static ::cpp::Function< void ( ::cpp::Float32 ,bool ) > cffi_lime_gl_sample_coverage;
		static ::cpp::Function< void ( int ,int ,int ,int ) > cffi_lime_gl_scissor;
		static ::cpp::Function< void ( int ,::String ) > cffi_lime_gl_shader_source;
		static ::cpp::Function< void ( int ,int ,int ) > cffi_lime_gl_stencil_func;
		static ::cpp::Function< void ( int ,int ,int ,int ) > cffi_lime_gl_stencil_func_separate;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_stencil_mask;
		static ::cpp::Function< void ( int ,int ) > cffi_lime_gl_stencil_mask_separate;
		static ::cpp::Function< void ( int ,int ,int ) > cffi_lime_gl_stencil_op;
		static ::cpp::Function< void ( int ,int ,int ,int ) > cffi_lime_gl_stencil_op_separate;
		static ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ,Float ) > cffi_lime_gl_tex_image_2d;
		static ::cpp::Function< void ( int ,int ,::cpp::Float32 ) > cffi_lime_gl_tex_parameterf;
		static ::cpp::Function< void ( int ,int ,int ) > cffi_lime_gl_tex_parameteri;
		static ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ,Float ) > cffi_lime_gl_tex_sub_image_2d;
		static ::cpp::Function< void ( int ,::cpp::Float32 ) > cffi_lime_gl_uniform1f;
		static ::cpp::Function< void ( int ,int ,Float ) > cffi_lime_gl_uniform1fv;
		static ::cpp::Function< void ( int ,int ) > cffi_lime_gl_uniform1i;
		static ::cpp::Function< void ( int ,int ,Float ) > cffi_lime_gl_uniform1iv;
		static ::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ) > cffi_lime_gl_uniform2f;
		static ::cpp::Function< void ( int ,int ,Float ) > cffi_lime_gl_uniform2fv;
		static ::cpp::Function< void ( int ,int ,int ) > cffi_lime_gl_uniform2i;
		static ::cpp::Function< void ( int ,int ,Float ) > cffi_lime_gl_uniform2iv;
		static ::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > cffi_lime_gl_uniform3f;
		static ::cpp::Function< void ( int ,int ,Float ) > cffi_lime_gl_uniform3fv;
		static ::cpp::Function< void ( int ,int ,int ,int ) > cffi_lime_gl_uniform3i;
		static ::cpp::Function< void ( int ,int ,Float ) > cffi_lime_gl_uniform3iv;
		static ::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > cffi_lime_gl_uniform4f;
		static ::cpp::Function< void ( int ,int ,Float ) > cffi_lime_gl_uniform4fv;
		static ::cpp::Function< void ( int ,int ,int ,int ,int ) > cffi_lime_gl_uniform4i;
		static ::cpp::Function< void ( int ,int ,Float ) > cffi_lime_gl_uniform4iv;
		static ::cpp::Function< void ( int ,int ,bool ,Float ) > cffi_lime_gl_uniform_matrix2fv;
		static ::cpp::Function< void ( int ,int ,bool ,Float ) > cffi_lime_gl_uniform_matrix3fv;
		static ::cpp::Function< void ( int ,int ,bool ,Float ) > cffi_lime_gl_uniform_matrix4fv;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_use_program;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_validate_program;
		static ::cpp::Function< void ( int ,::cpp::Float32 ) > cffi_lime_gl_vertex_attrib1f;
		static ::cpp::Function< void ( int ,Float ) > cffi_lime_gl_vertex_attrib1fv;
		static ::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ) > cffi_lime_gl_vertex_attrib2f;
		static ::cpp::Function< void ( int ,Float ) > cffi_lime_gl_vertex_attrib2fv;
		static ::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > cffi_lime_gl_vertex_attrib3f;
		static ::cpp::Function< void ( int ,Float ) > cffi_lime_gl_vertex_attrib3fv;
		static ::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > cffi_lime_gl_vertex_attrib4f;
		static ::cpp::Function< void ( int ,Float ) > cffi_lime_gl_vertex_attrib4fv;
		static ::cpp::Function< void ( int ,int ,int ,bool ,int ,Float ) > cffi_lime_gl_vertex_attrib_pointer;
		static ::cpp::Function< void ( int ,int ,int ,int ) > cffi_lime_gl_viewport;
		static ::cpp::Function< int ( ::hx::Object * ,int ) > cffi_lime_vorbis_file_bitrate;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_vorbis_file_bitrate_instant;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_vorbis_file_clear;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > cffi_lime_vorbis_file_comment;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > cffi_lime_vorbis_file_crosslap;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_vorbis_file_from_bytes;
		static ::cpp::Function< ::hx::Object * ( ::String ) > cffi_lime_vorbis_file_from_file;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > cffi_lime_vorbis_file_info;
		static ::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > cffi_lime_vorbis_file_pcm_seek;
		static ::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > cffi_lime_vorbis_file_pcm_seek_lap;
		static ::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > cffi_lime_vorbis_file_pcm_seek_page;
		static ::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > cffi_lime_vorbis_file_pcm_seek_page_lap;
		static ::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > cffi_lime_vorbis_file_raw_seek;
		static ::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > cffi_lime_vorbis_file_raw_seek_lap;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_vorbis_file_pcm_tell;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > cffi_lime_vorbis_file_pcm_total;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_vorbis_file_raw_tell;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > cffi_lime_vorbis_file_raw_total;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,int ,int ,bool ,int ,bool ) > cffi_lime_vorbis_file_read;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,int ) > cffi_lime_vorbis_file_read_float;
		static ::cpp::Function< bool ( ::hx::Object * ) > cffi_lime_vorbis_file_seekable;
		static ::cpp::Function< int ( ::hx::Object * ,int ) > cffi_lime_vorbis_file_serial_number;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_vorbis_file_streams;
		static ::cpp::Function< int ( ::hx::Object * ,Float ) > cffi_lime_vorbis_file_time_seek;
		static ::cpp::Function< int ( ::hx::Object * ,Float ) > cffi_lime_vorbis_file_time_seek_lap;
		static ::cpp::Function< int ( ::hx::Object * ,Float ) > cffi_lime_vorbis_file_time_seek_page;
		static ::cpp::Function< int ( ::hx::Object * ,Float ) > cffi_lime_vorbis_file_time_seek_page_lap;
		static ::cpp::Function< Float ( ::hx::Object * ) > cffi_lime_vorbis_file_time_tell;
		static ::cpp::Function< Float ( ::hx::Object * ,int ) > cffi_lime_vorbis_file_time_total;
};

} // end namespace lime
} // end namespace _backend
} // end namespace native

#endif /* INCLUDED_lime__backend_native_NativeCFFI */ 
