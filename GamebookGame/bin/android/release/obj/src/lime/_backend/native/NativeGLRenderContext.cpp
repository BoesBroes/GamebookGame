#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe__Int64_Int64_Impl_
#include <haxe/_Int64/Int64_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLContextType
#include <lime/graphics/opengl/GLContextType.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl__GLBuffer_GLBuffer_Impl_
#include <lime/graphics/opengl/_GLBuffer/GLBuffer_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl__GLFramebuffer_GLFramebuffer_Impl_
#include <lime/graphics/opengl/_GLFramebuffer/GLFramebuffer_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl__GLProgram_GLProgram_Impl_
#include <lime/graphics/opengl/_GLProgram/GLProgram_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl__GLRenderbuffer_GLRenderbuffer_Impl_
#include <lime/graphics/opengl/_GLRenderbuffer/GLRenderbuffer_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl__GLShader_GLShader_Impl_
#include <lime/graphics/opengl/_GLShader/GLShader_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl__GLTexture_GLTexture_Impl_
#include <lime/graphics/opengl/_GLTexture/GLTexture_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_AMD_compressed_3DC_texture
#include <lime/graphics/opengl/ext/AMD_compressed_3DC_texture.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_AMD_compressed_ATC_texture
#include <lime/graphics/opengl/ext/AMD_compressed_ATC_texture.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_AMD_performance_monitor
#include <lime/graphics/opengl/ext/AMD_performance_monitor.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_AMD_program_binary_Z400
#include <lime/graphics/opengl/ext/AMD_program_binary_Z400.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_framebuffer_blit
#include <lime/graphics/opengl/ext/ANGLE_framebuffer_blit.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_framebuffer_multisample
#include <lime/graphics/opengl/ext/ANGLE_framebuffer_multisample.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_instanced_arrays
#include <lime/graphics/opengl/ext/ANGLE_instanced_arrays.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_pack_reverse_row_order
#include <lime/graphics/opengl/ext/ANGLE_pack_reverse_row_order.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_texture_compression_dxt3
#include <lime/graphics/opengl/ext/ANGLE_texture_compression_dxt3.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_texture_compression_dxt5
#include <lime/graphics/opengl/ext/ANGLE_texture_compression_dxt5.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_texture_usage
#include <lime/graphics/opengl/ext/ANGLE_texture_usage.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_translated_shader_source
#include <lime/graphics/opengl/ext/ANGLE_translated_shader_source.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_copy_texture_levels
#include <lime/graphics/opengl/ext/APPLE_copy_texture_levels.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_framebuffer_multisample
#include <lime/graphics/opengl/ext/APPLE_framebuffer_multisample.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_rgb_422
#include <lime/graphics/opengl/ext/APPLE_rgb_422.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_sync
#include <lime/graphics/opengl/ext/APPLE_sync.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_texture_format_BGRA8888
#include <lime/graphics/opengl/ext/APPLE_texture_format_BGRA8888.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_texture_max_level
#include <lime/graphics/opengl/ext/APPLE_texture_max_level.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_ARM_mali_program_binary
#include <lime/graphics/opengl/ext/ARM_mali_program_binary.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_ARM_mali_shader_binary
#include <lime/graphics/opengl/ext/ARM_mali_shader_binary.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_ARM_rgba8
#include <lime/graphics/opengl/ext/ARM_rgba8.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_DMP_shader_binary
#include <lime/graphics/opengl/ext/DMP_shader_binary.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_bgra
#include <lime/graphics/opengl/ext/EXT_bgra.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_blend_minmax
#include <lime/graphics/opengl/ext/EXT_blend_minmax.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_color_buffer_float
#include <lime/graphics/opengl/ext/EXT_color_buffer_float.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_color_buffer_half_float
#include <lime/graphics/opengl/ext/EXT_color_buffer_half_float.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_debug_label
#include <lime/graphics/opengl/ext/EXT_debug_label.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_debug_marker
#include <lime/graphics/opengl/ext/EXT_debug_marker.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_discard_framebuffer
#include <lime/graphics/opengl/ext/EXT_discard_framebuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_map_buffer_range
#include <lime/graphics/opengl/ext/EXT_map_buffer_range.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_multi_draw_arrays
#include <lime/graphics/opengl/ext/EXT_multi_draw_arrays.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_multisampled_render_to_texture
#include <lime/graphics/opengl/ext/EXT_multisampled_render_to_texture.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_multiview_draw_buffers
#include <lime/graphics/opengl/ext/EXT_multiview_draw_buffers.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_occlusion_query_boolean
#include <lime/graphics/opengl/ext/EXT_occlusion_query_boolean.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_packed_depth_stencil
#include <lime/graphics/opengl/ext/EXT_packed_depth_stencil.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_read_format_bgra
#include <lime/graphics/opengl/ext/EXT_read_format_bgra.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_robustness
#include <lime/graphics/opengl/ext/EXT_robustness.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_sRGB
#include <lime/graphics/opengl/ext/EXT_sRGB.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_separate_shader_objects
#include <lime/graphics/opengl/ext/EXT_separate_shader_objects.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_shader_framebuffer_fetch
#include <lime/graphics/opengl/ext/EXT_shader_framebuffer_fetch.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_shader_texture_lod
#include <lime/graphics/opengl/ext/EXT_shader_texture_lod.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_shadow_samplers
#include <lime/graphics/opengl/ext/EXT_shadow_samplers.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_texture_compression_dxt1
#include <lime/graphics/opengl/ext/EXT_texture_compression_dxt1.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_texture_compression_s3tc
#include <lime/graphics/opengl/ext/EXT_texture_compression_s3tc.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_texture_filter_anisotropic
#include <lime/graphics/opengl/ext/EXT_texture_filter_anisotropic.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_texture_format_BGRA8888
#include <lime/graphics/opengl/ext/EXT_texture_format_BGRA8888.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_texture_rg
#include <lime/graphics/opengl/ext/EXT_texture_rg.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_texture_storage
#include <lime/graphics/opengl/ext/EXT_texture_storage.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_texture_type_2_10_10_10_REV
#include <lime/graphics/opengl/ext/EXT_texture_type_2_10_10_10_REV.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_unpack_subimage
#include <lime/graphics/opengl/ext/EXT_unpack_subimage.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_FJ_shader_binary_GCCSO
#include <lime/graphics/opengl/ext/FJ_shader_binary_GCCSO.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_IMG_multisampled_render_to_texture
#include <lime/graphics/opengl/ext/IMG_multisampled_render_to_texture.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_IMG_program_binary
#include <lime/graphics/opengl/ext/IMG_program_binary.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_IMG_read_format
#include <lime/graphics/opengl/ext/IMG_read_format.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_IMG_shader_binary
#include <lime/graphics/opengl/ext/IMG_shader_binary.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_IMG_texture_compression_pvrtc
#include <lime/graphics/opengl/ext/IMG_texture_compression_pvrtc.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_KHR_debug
#include <lime/graphics/opengl/ext/KHR_debug.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_KHR_texture_compression_astc_ldr
#include <lime/graphics/opengl/ext/KHR_texture_compression_astc_ldr.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_NV_coverage_sample
#include <lime/graphics/opengl/ext/NV_coverage_sample.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_NV_depth_nonlinear
#include <lime/graphics/opengl/ext/NV_depth_nonlinear.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_NV_draw_buffers
#include <lime/graphics/opengl/ext/NV_draw_buffers.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_NV_fbo_color_attachments
#include <lime/graphics/opengl/ext/NV_fbo_color_attachments.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_NV_fence
#include <lime/graphics/opengl/ext/NV_fence.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_NV_read_buffer
#include <lime/graphics/opengl/ext/NV_read_buffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_NV_read_buffer_front
#include <lime/graphics/opengl/ext/NV_read_buffer_front.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_NV_read_depth
#include <lime/graphics/opengl/ext/NV_read_depth.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_NV_read_depth_stencil
#include <lime/graphics/opengl/ext/NV_read_depth_stencil.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_NV_read_stencil
#include <lime/graphics/opengl/ext/NV_read_stencil.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_NV_texture_compression_s3tc_update
#include <lime/graphics/opengl/ext/NV_texture_compression_s3tc_update.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_NV_texture_npot_2D_mipmap
#include <lime/graphics/opengl/ext/NV_texture_npot_2D_mipmap.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_EGL_image
#include <lime/graphics/opengl/ext/OES_EGL_image.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_EGL_image_external
#include <lime/graphics/opengl/ext/OES_EGL_image_external.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_compressed_ETC1_RGB8_texture
#include <lime/graphics/opengl/ext/OES_compressed_ETC1_RGB8_texture.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_compressed_paletted_texture
#include <lime/graphics/opengl/ext/OES_compressed_paletted_texture.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_depth24
#include <lime/graphics/opengl/ext/OES_depth24.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_depth32
#include <lime/graphics/opengl/ext/OES_depth32.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_depth_texture
#include <lime/graphics/opengl/ext/OES_depth_texture.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_element_index_uint
#include <lime/graphics/opengl/ext/OES_element_index_uint.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_get_program_binary
#include <lime/graphics/opengl/ext/OES_get_program_binary.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_mapbuffer
#include <lime/graphics/opengl/ext/OES_mapbuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_packed_depth_stencil
#include <lime/graphics/opengl/ext/OES_packed_depth_stencil.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_required_internalformat
#include <lime/graphics/opengl/ext/OES_required_internalformat.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_rgb8_rgba8
#include <lime/graphics/opengl/ext/OES_rgb8_rgba8.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_standard_derivatives
#include <lime/graphics/opengl/ext/OES_standard_derivatives.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_stencil1
#include <lime/graphics/opengl/ext/OES_stencil1.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_stencil4
#include <lime/graphics/opengl/ext/OES_stencil4.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_surfaceless_context
#include <lime/graphics/opengl/ext/OES_surfaceless_context.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_texture_3D
#include <lime/graphics/opengl/ext/OES_texture_3D.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_texture_float
#include <lime/graphics/opengl/ext/OES_texture_float.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_texture_float_linear
#include <lime/graphics/opengl/ext/OES_texture_float_linear.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_texture_half_float
#include <lime/graphics/opengl/ext/OES_texture_half_float.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_texture_half_float_linear
#include <lime/graphics/opengl/ext/OES_texture_half_float_linear.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_texture_npot
#include <lime/graphics/opengl/ext/OES_texture_npot.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_vertex_array_object
#include <lime/graphics/opengl/ext/OES_vertex_array_object.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_vertex_half_float
#include <lime/graphics/opengl/ext/OES_vertex_half_float.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_vertex_type_10_10_10_2
#include <lime/graphics/opengl/ext/OES_vertex_type_10_10_10_2.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_alpha_test
#include <lime/graphics/opengl/ext/QCOM_alpha_test.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_binning_control
#include <lime/graphics/opengl/ext/QCOM_binning_control.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_driver_control
#include <lime/graphics/opengl/ext/QCOM_driver_control.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_extended_get
#include <lime/graphics/opengl/ext/QCOM_extended_get.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_extended_get2
#include <lime/graphics/opengl/ext/QCOM_extended_get2.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_perfmon_global_mode
#include <lime/graphics/opengl/ext/QCOM_perfmon_global_mode.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_tiled_rendering
#include <lime/graphics/opengl/ext/QCOM_tiled_rendering.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_writeonly_rendering
#include <lime/graphics/opengl/ext/QCOM_writeonly_rendering.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ext_VIV_shader_binary
#include <lime/graphics/opengl/ext/VIV_shader_binary.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
namespace lime{
namespace _backend{
namespace native{

Void NativeGLRenderContext_obj::__construct()
{
{
	this->MAX_CLIENT_WAIT_TIMEOUT_WEBGL = (int)37447;
	this->TIMEOUT_IGNORED = (int)-1;
	this->INVALID_INDEX = (int)-1;
	this->DEPTH32F_STENCIL8 = (int)36013;
	this->DEPTH_COMPONENT32F = (int)36012;
	this->DYNAMIC_COPY = (int)35050;
	this->DYNAMIC_READ = (int)35049;
	this->STATIC_COPY = (int)35046;
	this->STATIC_READ = (int)35045;
	this->STREAM_COPY = (int)35042;
	this->STREAM_READ = (int)35041;
	this->DEPTH_COMPONENT24 = (int)33190;
	this->MAX = (int)32776;
	this->MIN = (int)32775;
	this->STENCIL = (int)6146;
	this->DEPTH = (int)6145;
	this->COLOR = (int)6144;
	this->SYNC_FLUSH_COMMANDS_BIT = (int)1;
	this->WAIT_FAILED = (int)37149;
	this->CONDITION_SATISFIED = (int)37148;
	this->TIMEOUT_EXPIRED = (int)37147;
	this->ALREADY_SIGNALED = (int)37146;
	this->SIGNALED = (int)37145;
	this->UNSIGNALED = (int)37144;
	this->SYNC_GPU_COMMANDS_COMPLETE = (int)37143;
	this->SYNC_FENCE = (int)37142;
	this->SYNC_FLAGS = (int)37141;
	this->SYNC_STATUS = (int)37140;
	this->SYNC_CONDITION = (int)37139;
	this->OBJECT_TYPE = (int)37138;
	this->UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER = (int)35398;
	this->UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER = (int)35396;
	this->UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES = (int)35395;
	this->UNIFORM_BLOCK_ACTIVE_UNIFORMS = (int)35394;
	this->UNIFORM_BLOCK_DATA_SIZE = (int)35392;
	this->UNIFORM_BLOCK_BINDING = (int)35391;
	this->UNIFORM_IS_ROW_MAJOR = (int)35390;
	this->UNIFORM_MATRIX_STRIDE = (int)35389;
	this->UNIFORM_ARRAY_STRIDE = (int)35388;
	this->UNIFORM_OFFSET = (int)35387;
	this->UNIFORM_BLOCK_INDEX = (int)35386;
	this->UNIFORM_SIZE = (int)35384;
	this->UNIFORM_TYPE = (int)35383;
	this->ACTIVE_UNIFORM_BLOCKS = (int)35382;
	this->UNIFORM_BUFFER_OFFSET_ALIGNMENT = (int)35380;
	this->MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS = (int)35379;
	this->MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS = (int)35377;
	this->MAX_UNIFORM_BLOCK_SIZE = (int)35376;
	this->MAX_UNIFORM_BUFFER_BINDINGS = (int)35375;
	this->MAX_COMBINED_UNIFORM_BLOCKS = (int)35374;
	this->MAX_FRAGMENT_UNIFORM_BLOCKS = (int)35373;
	this->MAX_VERTEX_UNIFORM_BLOCKS = (int)35371;
	this->UNIFORM_BUFFER_SIZE = (int)35370;
	this->UNIFORM_BUFFER_START = (int)35369;
	this->UNIFORM_BUFFER_BINDING = (int)35368;
	this->UNIFORM_BUFFER = (int)35345;
	this->FRAMEBUFFER_INCOMPLETE_MULTISAMPLE = (int)36182;
	this->FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER = (int)36052;
	this->RENDERBUFFER_SAMPLES = (int)36011;
	this->READ_FRAMEBUFFER_BINDING = (int)36010;
	this->DRAW_FRAMEBUFFER = (int)36009;
	this->READ_FRAMEBUFFER = (int)36008;
	this->DRAW_FRAMEBUFFER_BINDING = (int)36006;
	this->DEPTH24_STENCIL8 = (int)35056;
	this->FRAMEBUFFER_DEFAULT = (int)33304;
	this->FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE = (int)33303;
	this->FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE = (int)33302;
	this->FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE = (int)33301;
	this->FRAMEBUFFER_ATTACHMENT_BLUE_SIZE = (int)33300;
	this->FRAMEBUFFER_ATTACHMENT_GREEN_SIZE = (int)33299;
	this->FRAMEBUFFER_ATTACHMENT_RED_SIZE = (int)33298;
	this->FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE = (int)33297;
	this->FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING = (int)33296;
	this->TRANSFORM_FEEDBACK_BINDING = (int)36389;
	this->TRANSFORM_FEEDBACK_ACTIVE = (int)36388;
	this->TRANSFORM_FEEDBACK_PAUSED = (int)36387;
	this->TRANSFORM_FEEDBACK = (int)36386;
	this->TRANSFORM_FEEDBACK_BUFFER_BINDING = (int)35983;
	this->TRANSFORM_FEEDBACK_BUFFER = (int)35982;
	this->SEPARATE_ATTRIBS = (int)35981;
	this->INTERLEAVED_ATTRIBS = (int)35980;
	this->MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS = (int)35979;
	this->MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS = (int)35978;
	this->TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN = (int)35976;
	this->TRANSFORM_FEEDBACK_BUFFER_SIZE = (int)35973;
	this->TRANSFORM_FEEDBACK_BUFFER_START = (int)35972;
	this->TRANSFORM_FEEDBACK_VARYINGS = (int)35971;
	this->MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS = (int)35968;
	this->TRANSFORM_FEEDBACK_BUFFER_MODE = (int)35967;
	this->VERTEX_ATTRIB_ARRAY_DIVISOR = (int)35070;
	this->VERTEX_ATTRIB_ARRAY_INTEGER = (int)35069;
	this->SIGNED_NORMALIZED = (int)36764;
	this->UNSIGNED_NORMALIZED = (int)35863;
	this->UNSIGNED_INT_VEC4 = (int)36296;
	this->UNSIGNED_INT_VEC3 = (int)36295;
	this->UNSIGNED_INT_VEC2 = (int)36294;
	this->FLOAT_MAT4x3 = (int)35690;
	this->FLOAT_MAT4x2 = (int)35689;
	this->FLOAT_MAT3x4 = (int)35688;
	this->FLOAT_MAT3x2 = (int)35687;
	this->FLOAT_MAT2x4 = (int)35686;
	this->FLOAT_MAT2x3 = (int)35685;
	this->COPY_WRITE_BUFFER_BINDING = (int)36663;
	this->COPY_READ_BUFFER_BINDING = (int)36662;
	this->COPY_WRITE_BUFFER = (int)36663;
	this->COPY_READ_BUFFER = (int)36662;
	this->PIXEL_UNPACK_BUFFER_BINDING = (int)35055;
	this->PIXEL_PACK_BUFFER_BINDING = (int)35053;
	this->PIXEL_UNPACK_BUFFER = (int)35052;
	this->PIXEL_PACK_BUFFER = (int)35051;
	this->SAMPLER_BINDING = (int)35097;
	this->MAX_SAMPLES = (int)36183;
	this->UNSIGNED_INT_SAMPLER_2D_ARRAY = (int)36311;
	this->UNSIGNED_INT_SAMPLER_CUBE = (int)36308;
	this->UNSIGNED_INT_SAMPLER_3D = (int)36307;
	this->UNSIGNED_INT_SAMPLER_2D = (int)36306;
	this->INT_SAMPLER_2D_ARRAY = (int)36303;
	this->INT_SAMPLER_CUBE = (int)36300;
	this->INT_SAMPLER_3D = (int)36299;
	this->INT_SAMPLER_2D = (int)36298;
	this->SAMPLER_CUBE_SHADOW = (int)36293;
	this->SAMPLER_2D_ARRAY_SHADOW = (int)36292;
	this->SAMPLER_2D_ARRAY = (int)36289;
	this->SAMPLER_2D_SHADOW = (int)35682;
	this->SAMPLER_3D = (int)35679;
	this->COLOR_ATTACHMENT15 = (int)36079;
	this->COLOR_ATTACHMENT14 = (int)36078;
	this->COLOR_ATTACHMENT13 = (int)36077;
	this->COLOR_ATTACHMENT12 = (int)36076;
	this->COLOR_ATTACHMENT11 = (int)36075;
	this->COLOR_ATTACHMENT10 = (int)36074;
	this->COLOR_ATTACHMENT9 = (int)36073;
	this->COLOR_ATTACHMENT8 = (int)36072;
	this->COLOR_ATTACHMENT7 = (int)36071;
	this->COLOR_ATTACHMENT6 = (int)36070;
	this->COLOR_ATTACHMENT5 = (int)36069;
	this->COLOR_ATTACHMENT4 = (int)36068;
	this->COLOR_ATTACHMENT3 = (int)36067;
	this->COLOR_ATTACHMENT2 = (int)36066;
	this->COLOR_ATTACHMENT1 = (int)36065;
	this->MAX_COLOR_ATTACHMENTS = (int)36063;
	this->DRAW_BUFFER15 = (int)34868;
	this->DRAW_BUFFER14 = (int)34867;
	this->DRAW_BUFFER13 = (int)34866;
	this->DRAW_BUFFER12 = (int)34865;
	this->DRAW_BUFFER11 = (int)34864;
	this->DRAW_BUFFER10 = (int)34863;
	this->DRAW_BUFFER9 = (int)34862;
	this->DRAW_BUFFER8 = (int)34861;
	this->DRAW_BUFFER7 = (int)34860;
	this->DRAW_BUFFER6 = (int)34859;
	this->DRAW_BUFFER5 = (int)34858;
	this->DRAW_BUFFER4 = (int)34857;
	this->DRAW_BUFFER3 = (int)34856;
	this->DRAW_BUFFER2 = (int)34855;
	this->DRAW_BUFFER1 = (int)34854;
	this->DRAW_BUFFER0 = (int)34853;
	this->MAX_DRAW_BUFFERS = (int)34852;
	this->ANY_SAMPLES_PASSED_CONSERVATIVE = (int)36202;
	this->ANY_SAMPLES_PASSED = (int)35887;
	this->QUERY_RESULT_AVAILABLE = (int)34919;
	this->QUERY_RESULT = (int)34918;
	this->CURRENT_QUERY = (int)34917;
	this->INT_2_10_10_10_REV = (int)36255;
	this->RG_INTEGER = (int)33320;
	this->RG = (int)33319;
	this->HALF_FLOAT = (int)5131;
	this->UNSIGNED_INT_24_8 = (int)34042;
	this->FLOAT_32_UNSIGNED_INT_24_8_REV = (int)36269;
	this->UNSIGNED_INT_5_9_9_9_REV = (int)35902;
	this->UNSIGNED_INT_10F_11F_11F_REV = (int)35899;
	this->UNSIGNED_INT_2_10_10_10_REV = (int)33640;
	this->TEXTURE_IMMUTABLE_LEVELS = (int)33503;
	this->TEXTURE_IMMUTABLE_FORMAT = (int)37167;
	this->RGB10_A2UI = (int)36975;
	this->RGBA8_SNORM = (int)36759;
	this->RGB8_SNORM = (int)36758;
	this->RG8_SNORM = (int)36757;
	this->R8_SNORM = (int)36756;
	this->RG32UI = (int)33340;
	this->RG32I = (int)33339;
	this->RG16UI = (int)33338;
	this->RG16I = (int)33337;
	this->RG8UI = (int)33336;
	this->RG8I = (int)33335;
	this->R32UI = (int)33334;
	this->R32I = (int)33333;
	this->R16UI = (int)33332;
	this->R16I = (int)33331;
	this->R8UI = (int)33330;
	this->R8I = (int)33329;
	this->RG32F = (int)33328;
	this->RG16F = (int)33327;
	this->R32F = (int)33326;
	this->R16F = (int)33325;
	this->RG8 = (int)33323;
	this->R8 = (int)33321;
	this->RGBA_INTEGER = (int)36249;
	this->RGB_INTEGER = (int)36248;
	this->RED_INTEGER = (int)36244;
	this->RGB8I = (int)36239;
	this->RGBA8I = (int)36238;
	this->RGB16I = (int)36233;
	this->RGBA16I = (int)36232;
	this->RGB32I = (int)36227;
	this->RGBA32I = (int)36226;
	this->RGB8UI = (int)36221;
	this->RGBA8UI = (int)36220;
	this->RGB16UI = (int)36215;
	this->RGBA16UI = (int)36214;
	this->RGB32UI = (int)36209;
	this->RGBA32UI = (int)36208;
	this->RGB9_E5 = (int)35901;
	this->R11F_G11F_B10F = (int)35898;
	this->TEXTURE_BINDING_2D_ARRAY = (int)35869;
	this->TEXTURE_2D_ARRAY = (int)35866;
	this->RGB16F = (int)34843;
	this->RGBA16F = (int)34842;
	this->RGB32F = (int)34837;
	this->RGBA32F = (int)34836;
	this->COMPARE_REF_TO_TEXTURE = (int)34894;
	this->SRGB8_ALPHA8 = (int)35907;
	this->SRGB8 = (int)35905;
	this->SRGB = (int)35904;
	this->TEXTURE_COMPARE_FUNC = (int)34893;
	this->TEXTURE_COMPARE_MODE = (int)34892;
	this->TEXTURE_MAX_LEVEL = (int)33085;
	this->TEXTURE_BASE_LEVEL = (int)33084;
	this->TEXTURE_MAX_LOD = (int)33083;
	this->TEXTURE_MIN_LOD = (int)33082;
	this->TEXTURE_WRAP_R = (int)32882;
	this->TEXTURE_3D = (int)32879;
	this->RGB10_A2 = (int)32857;
	this->RGBA8 = (int)32856;
	this->RGB8 = (int)32849;
	this->RED = (int)6403;
	this->MAX_ELEMENT_INDEX = (int)36203;
	this->MAX_SERVER_WAIT_TIMEOUT = (int)37137;
	this->MAX_FRAGMENT_INPUT_COMPONENTS = (int)37157;
	this->MAX_VERTEX_OUTPUT_COMPONENTS = (int)37154;
	this->VERTEX_ARRAY_BINDING = (int)34229;
	this->RASTERIZER_DISCARD = (int)35977;
	this->FRAGMENT_SHADER_DERIVATIVE_HINT = (int)35723;
	this->MAX_VARYING_COMPONENTS = (int)35659;
	this->MAX_PROGRAM_TEXEL_OFFSET = (int)35077;
	this->MIN_PROGRAM_TEXEL_OFFSET = (int)35076;
	this->MAX_ARRAY_TEXTURE_LAYERS = (int)35071;
	this->MAX_VERTEX_UNIFORM_COMPONENTS = (int)35658;
	this->MAX_FRAGMENT_UNIFORM_COMPONENTS = (int)35657;
	this->MAX_TEXTURE_LOD_BIAS = (int)34045;
	this->MAX_ELEMENTS_INDICES = (int)33001;
	this->MAX_ELEMENTS_VERTICES = (int)33000;
	this->MAX_3D_TEXTURE_SIZE = (int)32883;
	this->UNPACK_IMAGE_HEIGHT = (int)32878;
	this->UNPACK_SKIP_IMAGES = (int)32877;
	this->TEXTURE_BINDING_3D = (int)32874;
	this->PACK_SKIP_PIXELS = (int)3332;
	this->PACK_SKIP_ROWS = (int)3331;
	this->PACK_ROW_LENGTH = (int)3330;
	this->UNPACK_SKIP_PIXELS = (int)3316;
	this->UNPACK_SKIP_ROWS = (int)3315;
	this->UNPACK_ROW_LENGTH = (int)3314;
	this->READ_BUFFER = (int)3074;
	this->BROWSER_DEFAULT_WEBGL = (int)37444;
	this->UNPACK_COLORSPACE_CONVERSION_WEBGL = (int)37443;
	this->CONTEXT_LOST_WEBGL = (int)37442;
	this->UNPACK_PREMULTIPLY_ALPHA_WEBGL = (int)37441;
	this->UNPACK_FLIP_Y_WEBGL = (int)37440;
	this->INVALID_FRAMEBUFFER_OPERATION = (int)1286;
	this->MAX_RENDERBUFFER_SIZE = (int)34024;
	this->RENDERBUFFER_BINDING = (int)36007;
	this->FRAMEBUFFER_BINDING = (int)36006;
	this->FRAMEBUFFER_UNSUPPORTED = (int)36061;
	this->FRAMEBUFFER_INCOMPLETE_DIMENSIONS = (int)36057;
	this->FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT = (int)36055;
	this->FRAMEBUFFER_INCOMPLETE_ATTACHMENT = (int)36054;
	this->FRAMEBUFFER_COMPLETE = (int)36053;
	this->NONE = (int)0;
	this->DEPTH_STENCIL_ATTACHMENT = (int)33306;
	this->STENCIL_ATTACHMENT = (int)36128;
	this->DEPTH_ATTACHMENT = (int)36096;
	this->COLOR_ATTACHMENT0 = (int)36064;
	this->FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE = (int)36051;
	this->FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL = (int)36050;
	this->FRAMEBUFFER_ATTACHMENT_OBJECT_NAME = (int)36049;
	this->FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE = (int)36048;
	this->RENDERBUFFER_STENCIL_SIZE = (int)36181;
	this->RENDERBUFFER_DEPTH_SIZE = (int)36180;
	this->RENDERBUFFER_ALPHA_SIZE = (int)36179;
	this->RENDERBUFFER_BLUE_SIZE = (int)36178;
	this->RENDERBUFFER_GREEN_SIZE = (int)36177;
	this->RENDERBUFFER_RED_SIZE = (int)36176;
	this->RENDERBUFFER_INTERNAL_FORMAT = (int)36164;
	this->RENDERBUFFER_HEIGHT = (int)36163;
	this->RENDERBUFFER_WIDTH = (int)36162;
	this->DEPTH_STENCIL = (int)34041;
	this->STENCIL_INDEX8 = (int)36168;
	this->STENCIL_INDEX = (int)6401;
	this->DEPTH_COMPONENT16 = (int)33189;
	this->RGB565 = (int)36194;
	this->RGB5_A1 = (int)32855;
	this->RGBA4 = (int)32854;
	this->RENDERBUFFER = (int)36161;
	this->FRAMEBUFFER = (int)36160;
	this->HIGH_INT = (int)36341;
	this->MEDIUM_INT = (int)36340;
	this->LOW_INT = (int)36339;
	this->HIGH_FLOAT = (int)36338;
	this->MEDIUM_FLOAT = (int)36337;
	this->LOW_FLOAT = (int)36336;
	this->NUM_SHADER_BINARY_FORMATS = (int)36345;
	this->SHADER_BINARY_FORMATS = (int)36344;
	this->SHADER_COMPILER = (int)36346;
	this->SHADER_SOURCE_LENGTH = (int)35720;
	this->INFO_LOG_LENGTH = (int)35716;
	this->COMPILE_STATUS = (int)35713;
	this->POINT_SPRITE = (int)34913;
	this->VERTEX_PROGRAM_POINT_SIZE = (int)34370;
	this->IMPLEMENTATION_COLOR_READ_FORMAT = (int)35739;
	this->IMPLEMENTATION_COLOR_READ_TYPE = (int)35738;
	this->VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = (int)34975;
	this->VERTEX_ATTRIB_ARRAY_POINTER = (int)34373;
	this->VERTEX_ATTRIB_ARRAY_NORMALIZED = (int)34922;
	this->VERTEX_ATTRIB_ARRAY_TYPE = (int)34341;
	this->VERTEX_ATTRIB_ARRAY_STRIDE = (int)34340;
	this->VERTEX_ATTRIB_ARRAY_SIZE = (int)34339;
	this->VERTEX_ATTRIB_ARRAY_ENABLED = (int)34338;
	this->SAMPLER_CUBE = (int)35680;
	this->SAMPLER_2D = (int)35678;
	this->FLOAT_MAT4 = (int)35676;
	this->FLOAT_MAT3 = (int)35675;
	this->FLOAT_MAT2 = (int)35674;
	this->BOOL_VEC4 = (int)35673;
	this->BOOL_VEC3 = (int)35672;
	this->BOOL_VEC2 = (int)35671;
	this->BOOL = (int)35670;
	this->INT_VEC4 = (int)35669;
	this->INT_VEC3 = (int)35668;
	this->INT_VEC2 = (int)35667;
	this->FLOAT_VEC4 = (int)35666;
	this->FLOAT_VEC3 = (int)35665;
	this->FLOAT_VEC2 = (int)35664;
	this->MIRRORED_REPEAT = (int)33648;
	this->CLAMP_TO_EDGE = (int)33071;
	this->REPEAT = (int)10497;
	this->ACTIVE_TEXTURE = (int)34016;
	this->TEXTURE31 = (int)34015;
	this->TEXTURE30 = (int)34014;
	this->TEXTURE29 = (int)34013;
	this->TEXTURE28 = (int)34012;
	this->TEXTURE27 = (int)34011;
	this->TEXTURE26 = (int)34010;
	this->TEXTURE25 = (int)34009;
	this->TEXTURE24 = (int)34008;
	this->TEXTURE23 = (int)34007;
	this->TEXTURE22 = (int)34006;
	this->TEXTURE21 = (int)34005;
	this->TEXTURE20 = (int)34004;
	this->TEXTURE19 = (int)34003;
	this->TEXTURE18 = (int)34002;
	this->TEXTURE17 = (int)34001;
	this->TEXTURE16 = (int)34000;
	this->TEXTURE15 = (int)33999;
	this->TEXTURE14 = (int)33998;
	this->TEXTURE13 = (int)33997;
	this->TEXTURE12 = (int)33996;
	this->TEXTURE11 = (int)33995;
	this->TEXTURE10 = (int)33994;
	this->TEXTURE9 = (int)33993;
	this->TEXTURE8 = (int)33992;
	this->TEXTURE7 = (int)33991;
	this->TEXTURE6 = (int)33990;
	this->TEXTURE5 = (int)33989;
	this->TEXTURE4 = (int)33988;
	this->TEXTURE3 = (int)33987;
	this->TEXTURE2 = (int)33986;
	this->TEXTURE1 = (int)33985;
	this->TEXTURE0 = (int)33984;
	this->MAX_CUBE_MAP_TEXTURE_SIZE = (int)34076;
	this->TEXTURE_CUBE_MAP_NEGATIVE_Z = (int)34074;
	this->TEXTURE_CUBE_MAP_POSITIVE_Z = (int)34073;
	this->TEXTURE_CUBE_MAP_NEGATIVE_Y = (int)34072;
	this->TEXTURE_CUBE_MAP_POSITIVE_Y = (int)34071;
	this->TEXTURE_CUBE_MAP_NEGATIVE_X = (int)34070;
	this->TEXTURE_CUBE_MAP_POSITIVE_X = (int)34069;
	this->TEXTURE_BINDING_CUBE_MAP = (int)34068;
	this->TEXTURE_CUBE_MAP = (int)34067;
	this->TEXTURE = (int)5890;
	this->TEXTURE_WRAP_T = (int)10243;
	this->TEXTURE_WRAP_S = (int)10242;
	this->TEXTURE_MIN_FILTER = (int)10241;
	this->TEXTURE_MAG_FILTER = (int)10240;
	this->LINEAR_MIPMAP_LINEAR = (int)9987;
	this->NEAREST_MIPMAP_LINEAR = (int)9986;
	this->LINEAR_MIPMAP_NEAREST = (int)9985;
	this->NEAREST_MIPMAP_NEAREST = (int)9984;
	this->LINEAR = (int)9729;
	this->NEAREST = (int)9728;
	this->EXTENSIONS = (int)7939;
	this->VERSION = (int)7938;
	this->RENDERER = (int)7937;
	this->VENDOR = (int)7936;
	this->DECR_WRAP = (int)34056;
	this->INCR_WRAP = (int)34055;
	this->INVERT = (int)5386;
	this->DECR = (int)7683;
	this->INCR = (int)7682;
	this->REPLACE = (int)7681;
	this->KEEP = (int)7680;
	this->ALWAYS = (int)519;
	this->GEQUAL = (int)518;
	this->NOTEQUAL = (int)517;
	this->GREATER = (int)516;
	this->LEQUAL = (int)515;
	this->EQUAL = (int)514;
	this->LESS = (int)513;
	this->NEVER = (int)512;
	this->CURRENT_PROGRAM = (int)35725;
	this->SHADING_LANGUAGE_VERSION = (int)35724;
	this->ACTIVE_ATTRIBUTES_MAX_LENGTH = (int)35722;
	this->ACTIVE_ATTRIBUTES = (int)35721;
	this->ACTIVE_UNIFORMS_MAX_LENGTH = (int)35719;
	this->ACTIVE_UNIFORMS = (int)35718;
	this->ATTACHED_SHADERS = (int)35717;
	this->VALIDATE_STATUS = (int)35715;
	this->LINK_STATUS = (int)35714;
	this->DELETE_STATUS = (int)35712;
	this->SHADER_TYPE = (int)35663;
	this->MAX_FRAGMENT_UNIFORM_VECTORS = (int)36349;
	this->MAX_TEXTURE_IMAGE_UNITS = (int)34930;
	this->MAX_VERTEX_TEXTURE_IMAGE_UNITS = (int)35660;
	this->MAX_COMBINED_TEXTURE_IMAGE_UNITS = (int)35661;
	this->MAX_VARYING_VECTORS = (int)36348;
	this->MAX_VERTEX_UNIFORM_VECTORS = (int)36347;
	this->MAX_VERTEX_ATTRIBS = (int)34921;
	this->VERTEX_SHADER = (int)35633;
	this->FRAGMENT_SHADER = (int)35632;
	this->UNSIGNED_SHORT_5_6_5 = (int)33635;
	this->UNSIGNED_SHORT_5_5_5_1 = (int)32820;
	this->UNSIGNED_SHORT_4_4_4_4 = (int)32819;
	this->LUMINANCE_ALPHA = (int)6410;
	this->LUMINANCE = (int)6409;
	this->RGBA = (int)6408;
	this->RGB = (int)6407;
	this->ALPHA = (int)6406;
	this->DEPTH_COMPONENT = (int)6402;
	this->FIXED = (int)5132;
	this->FLOAT = (int)5126;
	this->UNSIGNED_INT = (int)5125;
	this->INT = (int)5124;
	this->UNSIGNED_SHORT = (int)5123;
	this->SHORT = (int)5122;
	this->UNSIGNED_BYTE = (int)5121;
	this->BYTE = (int)5120;
	this->GENERATE_MIPMAP_HINT = (int)33170;
	this->NICEST = (int)4354;
	this->FASTEST = (int)4353;
	this->DONT_CARE = (int)4352;
	this->COMPRESSED_TEXTURE_FORMATS = (int)34467;
	this->NUM_COMPRESSED_TEXTURE_FORMATS = (int)34466;
	this->SAMPLE_COVERAGE_INVERT = (int)32939;
	this->SAMPLE_COVERAGE_VALUE = (int)32938;
	this->SAMPLES = (int)32937;
	this->SAMPLE_BUFFERS = (int)32936;
	this->TEXTURE_BINDING_2D = (int)32873;
	this->POLYGON_OFFSET_FACTOR = (int)32824;
	this->POLYGON_OFFSET_UNITS = (int)10752;
	this->STENCIL_BITS = (int)3415;
	this->DEPTH_BITS = (int)3414;
	this->ALPHA_BITS = (int)3413;
	this->BLUE_BITS = (int)3412;
	this->GREEN_BITS = (int)3411;
	this->RED_BITS = (int)3410;
	this->SUBPIXEL_BITS = (int)3408;
	this->MAX_VIEWPORT_DIMS = (int)3386;
	this->MAX_TEXTURE_SIZE = (int)3379;
	this->PACK_ALIGNMENT = (int)3333;
	this->UNPACK_ALIGNMENT = (int)3317;
	this->COLOR_WRITEMASK = (int)3107;
	this->COLOR_CLEAR_VALUE = (int)3106;
	this->SCISSOR_BOX = (int)3088;
	this->VIEWPORT = (int)2978;
	this->STENCIL_BACK_WRITEMASK = (int)36005;
	this->STENCIL_BACK_VALUE_MASK = (int)36004;
	this->STENCIL_BACK_REF = (int)36003;
	this->STENCIL_BACK_PASS_DEPTH_PASS = (int)34819;
	this->STENCIL_BACK_PASS_DEPTH_FAIL = (int)34818;
	this->STENCIL_BACK_FAIL = (int)34817;
	this->STENCIL_BACK_FUNC = (int)34816;
	this->STENCIL_WRITEMASK = (int)2968;
	this->STENCIL_VALUE_MASK = (int)2963;
	this->STENCIL_REF = (int)2967;
	this->STENCIL_PASS_DEPTH_PASS = (int)2966;
	this->STENCIL_PASS_DEPTH_FAIL = (int)2965;
	this->STENCIL_FAIL = (int)2964;
	this->STENCIL_FUNC = (int)2962;
	this->STENCIL_CLEAR_VALUE = (int)2961;
	this->DEPTH_FUNC = (int)2932;
	this->DEPTH_CLEAR_VALUE = (int)2931;
	this->DEPTH_WRITEMASK = (int)2930;
	this->DEPTH_RANGE = (int)2928;
	this->FRONT_FACE = (int)2886;
	this->CULL_FACE_MODE = (int)2885;
	this->ALIASED_LINE_WIDTH_RANGE = (int)33902;
	this->ALIASED_POINT_SIZE_RANGE = (int)33901;
	this->LINE_WIDTH = (int)2849;
	this->CCW = (int)2305;
	this->CW = (int)2304;
	this->OUT_OF_MEMORY = (int)1285;
	this->INVALID_OPERATION = (int)1282;
	this->INVALID_VALUE = (int)1281;
	this->INVALID_ENUM = (int)1280;
	this->NO_ERROR = (int)0;
	this->SAMPLE_COVERAGE = (int)32928;
	this->SAMPLE_ALPHA_TO_COVERAGE = (int)32926;
	this->POLYGON_OFFSET_FILL = (int)32823;
	this->SCISSOR_TEST = (int)3089;
	this->DEPTH_TEST = (int)2929;
	this->STENCIL_TEST = (int)2960;
	this->DITHER = (int)3024;
	this->BLEND = (int)3042;
	this->CULL_FACE = (int)2884;
	this->TEXTURE_2D = (int)3553;
	this->FRONT_AND_BACK = (int)1032;
	this->BACK = (int)1029;
	this->FRONT = (int)1028;
	this->CURRENT_VERTEX_ATTRIB = (int)34342;
	this->BUFFER_USAGE = (int)34661;
	this->BUFFER_SIZE = (int)34660;
	this->DYNAMIC_DRAW = (int)35048;
	this->STATIC_DRAW = (int)35044;
	this->STREAM_DRAW = (int)35040;
	this->ELEMENT_ARRAY_BUFFER_BINDING = (int)34965;
	this->ARRAY_BUFFER_BINDING = (int)34964;
	this->ELEMENT_ARRAY_BUFFER = (int)34963;
	this->ARRAY_BUFFER = (int)34962;
	this->BLEND_COLOR = (int)32773;
	this->ONE_MINUS_CONSTANT_ALPHA = (int)32772;
	this->CONSTANT_ALPHA = (int)32771;
	this->ONE_MINUS_CONSTANT_COLOR = (int)32770;
	this->CONSTANT_COLOR = (int)32769;
	this->BLEND_SRC_ALPHA = (int)32971;
	this->BLEND_DST_ALPHA = (int)32970;
	this->BLEND_SRC_RGB = (int)32969;
	this->BLEND_DST_RGB = (int)32968;
	this->FUNC_REVERSE_SUBTRACT = (int)32779;
	this->FUNC_SUBTRACT = (int)32778;
	this->BLEND_EQUATION_ALPHA = (int)34877;
	this->BLEND_EQUATION_RGB = (int)32777;
	this->BLEND_EQUATION = (int)32777;
	this->FUNC_ADD = (int)32774;
	this->SRC_ALPHA_SATURATE = (int)776;
	this->ONE_MINUS_DST_COLOR = (int)775;
	this->DST_COLOR = (int)774;
	this->ONE_MINUS_DST_ALPHA = (int)773;
	this->DST_ALPHA = (int)772;
	this->ONE_MINUS_SRC_ALPHA = (int)771;
	this->SRC_ALPHA = (int)770;
	this->ONE_MINUS_SRC_COLOR = (int)769;
	this->SRC_COLOR = (int)768;
	this->ONE = (int)1;
	this->ZERO = (int)0;
	this->TRIANGLE_FAN = (int)6;
	this->TRIANGLE_STRIP = (int)5;
	this->TRIANGLES = (int)4;
	this->LINE_STRIP = (int)3;
	this->LINE_LOOP = (int)2;
	this->LINES = (int)1;
	this->POINTS = (int)0;
	this->COLOR_BUFFER_BIT = (int)16384;
	this->STENCIL_BUFFER_BIT = (int)1024;
	this->DEPTH_BUFFER_BIT = (int)256;
	int tmp = (::lime::_backend::native::NativeGLRenderContext_obj::__lastContextID)++;
	this->__contextID = tmp;
	this->__initialize();
	int tmp1 = this->VERSION;
	Dynamic tmp2 = this->getParameter(tmp1);
	::String versionString = tmp2;
	int tmp3 = versionString.indexOf(HX_HCSTRING("OpenGL ES","\x5f","\xcb","\x92","\x95"),null());
	bool tmp4 = (tmp3 > (int)-1);
	if ((tmp4)){
		this->type = ::lime::graphics::opengl::GLContextType_obj::GLES;
	}
	else{
		this->type = ::lime::graphics::opengl::GLContextType_obj::OPENGL;
	}
	::EReg tmp5 = ::EReg_obj::__new(HX_HCSTRING("[0-9]+[.]?[0-9]?","\x27","\x05","\x1c","\x6e"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	::EReg ereg = tmp5;
	::String tmp6 = versionString;
	bool tmp7 = ereg->match(tmp6);
	if ((tmp7)){
		::String tmp8 = ereg->matched((int)0);
		Float tmp9 = ::Std_obj::parseFloat(tmp8);
		this->version = tmp9;
	}
	else{
		this->version = (int)2;
	}
}
;
	return null();
}

//NativeGLRenderContext_obj::~NativeGLRenderContext_obj() { }

Dynamic NativeGLRenderContext_obj::__CreateEmpty() { return  new NativeGLRenderContext_obj; }
hx::ObjectPtr< NativeGLRenderContext_obj > NativeGLRenderContext_obj::__new()
{  hx::ObjectPtr< NativeGLRenderContext_obj > _result_ = new NativeGLRenderContext_obj();
	_result_->__construct();
	return _result_;}

Dynamic NativeGLRenderContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeGLRenderContext_obj > _result_ = new NativeGLRenderContext_obj();
	_result_->__construct();
	return _result_;}

Void NativeGLRenderContext_obj::activeTexture( int texture){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_active_texture.call(texture);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,activeTexture,(void))

Void NativeGLRenderContext_obj::attachShader( ::lime::graphics::opengl::GLObject program,::lime::graphics::opengl::GLObject shader){
{
		bool tmp = (program != null());
		bool tmp1;
		if ((tmp)){
			tmp1 = (shader != null());
		}
		else{
			tmp1 = false;
		}
		if ((tmp1)){
			bool tmp2 = (program->refs == null());
			if ((tmp2)){
				program->refs = Array_obj< ::Dynamic >::__new().Add(shader);
			}
			else{
				::lime::graphics::opengl::GLObject tmp3 = shader;
				int tmp4 = program->refs->indexOf(tmp3,null());
				bool tmp5 = (tmp4 == (int)-1);
				if ((tmp5)){
					::lime::graphics::opengl::GLObject tmp6 = shader;
					program->refs->push(tmp6);
				}
			}
		}
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_attach_shader.call((  (((program == null()))) ? int((int)0) : int(program->id) ),(  (((shader == null()))) ? int((int)0) : int(shader->id) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,attachShader,(void))

Void NativeGLRenderContext_obj::beginQuery( int target,::lime::graphics::opengl::GLObject query){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,beginQuery,(void))

Void NativeGLRenderContext_obj::beginTransformFeedback( int primitiveNode){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,beginTransformFeedback,(void))

Void NativeGLRenderContext_obj::bindAttribLocation( ::lime::graphics::opengl::GLObject program,int index,::String name){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_bind_attrib_location.call((  (((program == null()))) ? int((int)0) : int(program->id) ),index,name);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,bindAttribLocation,(void))

Void NativeGLRenderContext_obj::bindBuffer( int target,::lime::graphics::opengl::GLObject buffer){
{
		int tmp = target;
		int tmp1 = this->ARRAY_BUFFER;
		bool tmp2 = (tmp == tmp1);
		if ((tmp2)){
			this->__arrayBufferBinding = buffer;
		}
		int tmp3 = target;
		int tmp4 = this->ELEMENT_ARRAY_BUFFER;
		bool tmp5 = (tmp3 == tmp4);
		if ((tmp5)){
			this->__elementBufferBinding = buffer;
		}
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_bind_buffer.call(target,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,bindBuffer,(void))

Void NativeGLRenderContext_obj::bindBufferBase( int target,int index,::lime::graphics::opengl::GLObject buffer){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,bindBufferBase,(void))

Void NativeGLRenderContext_obj::bindBufferRange( int target,int index,::lime::graphics::opengl::GLObject buffer,Float offset,int size){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(NativeGLRenderContext_obj,bindBufferRange,(void))

Void NativeGLRenderContext_obj::bindFramebuffer( int target,::lime::graphics::opengl::GLObject framebuffer){
{
		this->__framebufferBinding = framebuffer;
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_bind_framebuffer.call(target,(  (((framebuffer == null()))) ? int((int)0) : int(framebuffer->id) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,bindFramebuffer,(void))

Void NativeGLRenderContext_obj::bindRenderbuffer( int target,::lime::graphics::opengl::GLObject renderbuffer){
{
		this->__renderbufferBinding = renderbuffer;
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_bind_renderbuffer.call(target,(  (((renderbuffer == null()))) ? int((int)0) : int(renderbuffer->id) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,bindRenderbuffer,(void))

Void NativeGLRenderContext_obj::bindSampler( int unit,::lime::graphics::opengl::GLObject sampler){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,bindSampler,(void))

Void NativeGLRenderContext_obj::bindTexture( int target,::lime::graphics::opengl::GLObject texture){
{
		int tmp = target;
		int tmp1 = this->TEXTURE_2D;
		bool tmp2 = (tmp == tmp1);
		if ((tmp2)){
			this->__texture2DBinding = texture;
		}
		int tmp3 = target;
		int tmp4 = this->TEXTURE_CUBE_MAP;
		bool tmp5 = (tmp3 == tmp4);
		if ((tmp5)){
			this->__textureCubeMapBinding = texture;
		}
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_bind_texture.call(target,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,bindTexture,(void))

Void NativeGLRenderContext_obj::bindTransformFeedback( int target,::lime::graphics::opengl::GLObject transformFeedback){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,bindTransformFeedback,(void))

Void NativeGLRenderContext_obj::bindVertexArray( ::lime::graphics::opengl::GLObject vertexArray){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,bindVertexArray,(void))

Void NativeGLRenderContext_obj::blendColor( Float red,Float green,Float blue,Float alpha){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_blend_color.call(red,green,blue,alpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,blendColor,(void))

Void NativeGLRenderContext_obj::blendEquation( int mode){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_blend_equation.call(mode);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,blendEquation,(void))

Void NativeGLRenderContext_obj::blendEquationSeparate( int modeRGB,int modeAlpha){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_blend_equation_separate.call(modeRGB,modeAlpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,blendEquationSeparate,(void))

Void NativeGLRenderContext_obj::blendFunc( int sfactor,int dfactor){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_blend_func.call(sfactor,dfactor);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,blendFunc,(void))

Void NativeGLRenderContext_obj::blendFuncSeparate( int srcRGB,int dstRGB,int srcAlpha,int dstAlpha){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_blend_func_separate.call(srcRGB,dstRGB,srcAlpha,dstAlpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,blendFuncSeparate,(void))

Void NativeGLRenderContext_obj::blitFramebuffer( int srcX0,int srcY0,int srcX1,int srcY1,int dstX0,int dstY0,int dstX1,int dstY1,int mask,int filter){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC10(NativeGLRenderContext_obj,blitFramebuffer,(void))

Void NativeGLRenderContext_obj::bufferData( int target,int size,Float srcData,int usage){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_buffer_data.call(target,size,srcData,usage);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,bufferData,(void))

Void NativeGLRenderContext_obj::bufferSubData( int target,int dstByteOffset,int size,Float srcData){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_buffer_sub_data.call(target,dstByteOffset,size,srcData);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,bufferSubData,(void))

int NativeGLRenderContext_obj::checkFramebufferStatus( int target){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_check_framebuffer_status.call(target);
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,checkFramebufferStatus,return )

Void NativeGLRenderContext_obj::clear( int mask){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_clear.call(mask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,clear,(void))

Void NativeGLRenderContext_obj::clearBufferfi( int buffer,int drawbuffer,Float depth,int stencil){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,clearBufferfi,(void))

Void NativeGLRenderContext_obj::clearBufferfv( int buffer,int drawbuffer,Float value){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,clearBufferfv,(void))

Void NativeGLRenderContext_obj::clearBufferiv( int buffer,int drawbuffer,Float value){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,clearBufferiv,(void))

Void NativeGLRenderContext_obj::clearBufferuiv( int buffer,int drawbuffer,Float value){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,clearBufferuiv,(void))

Void NativeGLRenderContext_obj::clearColor( Float red,Float green,Float blue,Float alpha){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_clear_color.call(red,green,blue,alpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,clearColor,(void))

Void NativeGLRenderContext_obj::clearDepthf( Float depth){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_clear_depthf.call(depth);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,clearDepthf,(void))

Void NativeGLRenderContext_obj::clearStencil( int s){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_clear_stencil.call(s);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,clearStencil,(void))

int NativeGLRenderContext_obj::clientWaitSync( ::lime::graphics::opengl::GLObject sync,int flags,cpp::Int64Struct timeout){
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,clientWaitSync,return )

Void NativeGLRenderContext_obj::colorMask( bool red,bool green,bool blue,bool alpha){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_color_mask.call(red,green,blue,alpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,colorMask,(void))

Void NativeGLRenderContext_obj::compileShader( ::lime::graphics::opengl::GLObject shader){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_compile_shader.call((  (((shader == null()))) ? int((int)0) : int(shader->id) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,compileShader,(void))

Void NativeGLRenderContext_obj::compressedTexImage2D( int target,int level,int internalformat,int width,int height,int border,int imageSize,Float data){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_compressed_tex_image_2d.call(target,level,internalformat,width,height,border,imageSize,data);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(NativeGLRenderContext_obj,compressedTexImage2D,(void))

Void NativeGLRenderContext_obj::compressedTexImage3D( int target,int level,int internalformat,int width,int height,int depth,int border,int imageSize,Float data){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(NativeGLRenderContext_obj,compressedTexImage3D,(void))

Void NativeGLRenderContext_obj::compressedTexSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,int imageSize,Float data){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_compressed_tex_sub_image_2d.call(target,level,xoffset,yoffset,width,height,format,imageSize,data);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(NativeGLRenderContext_obj,compressedTexSubImage2D,(void))

Void NativeGLRenderContext_obj::compressedTexSubImage3D( int target,int level,int xoffset,int yoffset,int zoffset,int width,int height,int depth,int format,int imageSize,Float data){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC11(NativeGLRenderContext_obj,compressedTexSubImage3D,(void))

Void NativeGLRenderContext_obj::copyBufferSubData( int readTarget,int writeTarget,Float readOffset,Float writeOffset,int size){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(NativeGLRenderContext_obj,copyBufferSubData,(void))

Void NativeGLRenderContext_obj::copyTexImage2D( int target,int level,int internalformat,int x,int y,int width,int height,int border){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_copy_tex_image_2d.call(target,level,internalformat,x,y,width,height,border);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(NativeGLRenderContext_obj,copyTexImage2D,(void))

Void NativeGLRenderContext_obj::copyTexSubImage2D( int target,int level,int xoffset,int yoffset,int x,int y,int width,int height){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_copy_tex_sub_image_2d.call(target,level,xoffset,yoffset,x,y,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(NativeGLRenderContext_obj,copyTexSubImage2D,(void))

Void NativeGLRenderContext_obj::copyTexSubImage3D( int target,int level,int xoffset,int yoffset,int zoffset,int x,int y,int width,int height){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(NativeGLRenderContext_obj,copyTexSubImage3D,(void))

::lime::graphics::opengl::GLObject NativeGLRenderContext_obj::createBuffer( ){
	int id = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_create_buffer.call();
	bool tmp = (id == (int)0);
	if ((tmp)){
		return null();
	}
	::lime::graphics::opengl::GLObject tmp1 = ::lime::graphics::opengl::GLObject_obj::__new(id);
	::lime::graphics::opengl::GLObject object = tmp1;
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_object_register.call(id,(int)3,hx::DynamicPtr(object));
	::lime::graphics::opengl::GLObject tmp2 = object;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeGLRenderContext_obj,createBuffer,return )

::lime::graphics::opengl::GLObject NativeGLRenderContext_obj::createFramebuffer( ){
	int id = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_create_framebuffer.call();
	bool tmp = (id == (int)0);
	if ((tmp)){
		return null();
	}
	::lime::graphics::opengl::GLObject tmp1 = ::lime::graphics::opengl::GLObject_obj::__new(id);
	::lime::graphics::opengl::GLObject object = tmp1;
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_object_register.call(id,(int)5,hx::DynamicPtr(object));
	::lime::graphics::opengl::GLObject tmp2 = object;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeGLRenderContext_obj,createFramebuffer,return )

::lime::graphics::opengl::GLObject NativeGLRenderContext_obj::createProgram( ){
	int id = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_create_program.call();
	bool tmp = (id == (int)0);
	if ((tmp)){
		return null();
	}
	::lime::graphics::opengl::GLObject tmp1 = ::lime::graphics::opengl::GLObject_obj::__new(id);
	::lime::graphics::opengl::GLObject object = tmp1;
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_object_register.call(id,(int)1,hx::DynamicPtr(object));
	::lime::graphics::opengl::GLObject tmp2 = object;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeGLRenderContext_obj,createProgram,return )

::lime::graphics::opengl::GLObject NativeGLRenderContext_obj::createQuery( ){
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeGLRenderContext_obj,createQuery,return )

::lime::graphics::opengl::GLObject NativeGLRenderContext_obj::createRenderbuffer( ){
	int id = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_create_renderbuffer.call();
	bool tmp = (id == (int)0);
	if ((tmp)){
		return null();
	}
	::lime::graphics::opengl::GLObject tmp1 = ::lime::graphics::opengl::GLObject_obj::__new(id);
	::lime::graphics::opengl::GLObject object = tmp1;
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_object_register.call(id,(int)6,hx::DynamicPtr(object));
	::lime::graphics::opengl::GLObject tmp2 = object;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeGLRenderContext_obj,createRenderbuffer,return )

::lime::graphics::opengl::GLObject NativeGLRenderContext_obj::createSampler( ){
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeGLRenderContext_obj,createSampler,return )

::lime::graphics::opengl::GLObject NativeGLRenderContext_obj::createShader( int type){
	int id = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_create_shader.call(type);
	bool tmp = (id == (int)0);
	if ((tmp)){
		return null();
	}
	::lime::graphics::opengl::GLObject tmp1 = ::lime::graphics::opengl::GLObject_obj::__new(id);
	::lime::graphics::opengl::GLObject object = tmp1;
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_object_register.call(id,(int)2,hx::DynamicPtr(object));
	::lime::graphics::opengl::GLObject tmp2 = object;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,createShader,return )

::lime::graphics::opengl::GLObject NativeGLRenderContext_obj::createTexture( ){
	int id = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_create_texture.call();
	bool tmp = (id == (int)0);
	if ((tmp)){
		return null();
	}
	::lime::graphics::opengl::GLObject tmp1 = ::lime::graphics::opengl::GLObject_obj::__new(id);
	::lime::graphics::opengl::GLObject object = tmp1;
	::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_object_register.call(id,(int)4,hx::DynamicPtr(object));
	::lime::graphics::opengl::GLObject tmp2 = object;
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeGLRenderContext_obj,createTexture,return )

::lime::graphics::opengl::GLObject NativeGLRenderContext_obj::createTransformFeedback( ){
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeGLRenderContext_obj,createTransformFeedback,return )

::lime::graphics::opengl::GLObject NativeGLRenderContext_obj::createVertexArray( ){
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeGLRenderContext_obj,createVertexArray,return )

Void NativeGLRenderContext_obj::cullFace( int mode){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_cull_face.call(mode);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,cullFace,(void))

Void NativeGLRenderContext_obj::deleteBuffer( ::lime::graphics::opengl::GLObject buffer){
{
		bool tmp = (buffer != null());
		if ((tmp)){
			::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_object_deregister.call(hx::DynamicPtr(buffer));
		}
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_delete_buffer.call((  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,deleteBuffer,(void))

Void NativeGLRenderContext_obj::deleteFramebuffer( ::lime::graphics::opengl::GLObject framebuffer){
{
		bool tmp = (framebuffer != null());
		if ((tmp)){
			::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_object_deregister.call(hx::DynamicPtr(framebuffer));
		}
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_delete_framebuffer.call((  (((framebuffer == null()))) ? int((int)0) : int(framebuffer->id) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,deleteFramebuffer,(void))

Void NativeGLRenderContext_obj::deleteProgram( ::lime::graphics::opengl::GLObject program){
{
		bool tmp = (program != null());
		if ((tmp)){
			::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_object_deregister.call(hx::DynamicPtr(program));
		}
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_delete_program.call((  (((program == null()))) ? int((int)0) : int(program->id) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,deleteProgram,(void))

Void NativeGLRenderContext_obj::deleteQuery( ::lime::graphics::opengl::GLObject query){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,deleteQuery,(void))

Void NativeGLRenderContext_obj::deleteRenderbuffer( ::lime::graphics::opengl::GLObject renderbuffer){
{
		bool tmp = (renderbuffer != null());
		if ((tmp)){
			::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_object_deregister.call(hx::DynamicPtr(renderbuffer));
		}
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_delete_renderbuffer.call((  (((renderbuffer == null()))) ? int((int)0) : int(renderbuffer->id) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,deleteRenderbuffer,(void))

Void NativeGLRenderContext_obj::deleteSampler( ::lime::graphics::opengl::GLObject sampler){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,deleteSampler,(void))

Void NativeGLRenderContext_obj::deleteShader( ::lime::graphics::opengl::GLObject shader){
{
		bool tmp = (shader != null());
		if ((tmp)){
			::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_object_deregister.call(hx::DynamicPtr(shader));
		}
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_delete_shader.call((  (((shader == null()))) ? int((int)0) : int(shader->id) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,deleteShader,(void))

Void NativeGLRenderContext_obj::deleteSync( ::lime::graphics::opengl::GLObject sync){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,deleteSync,(void))

Void NativeGLRenderContext_obj::deleteTexture( ::lime::graphics::opengl::GLObject texture){
{
		bool tmp = (texture != null());
		if ((tmp)){
			::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_object_deregister.call(hx::DynamicPtr(texture));
		}
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_delete_texture.call((  (((texture == null()))) ? int((int)0) : int(texture->id) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,deleteTexture,(void))

Void NativeGLRenderContext_obj::deleteTransformFeedback( ::lime::graphics::opengl::GLObject transformFeedback){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,deleteTransformFeedback,(void))

Void NativeGLRenderContext_obj::deleteVertexArray( ::lime::graphics::opengl::GLObject vertexArray){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,deleteVertexArray,(void))

Void NativeGLRenderContext_obj::depthFunc( int func){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_depth_func.call(func);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,depthFunc,(void))

Void NativeGLRenderContext_obj::depthMask( bool flag){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_depth_mask.call(flag);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,depthMask,(void))

Void NativeGLRenderContext_obj::depthRangef( Float zNear,Float zFar){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_depth_rangef.call(zNear,zFar);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,depthRangef,(void))

Void NativeGLRenderContext_obj::detachShader( ::lime::graphics::opengl::GLObject program,::lime::graphics::opengl::GLObject shader){
{
		bool tmp = (program != null());
		bool tmp1;
		if ((tmp)){
			tmp1 = (program->refs != null());
		}
		else{
			tmp1 = false;
		}
		if ((tmp1)){
			::lime::graphics::opengl::GLObject tmp2 = shader;
			program->refs->remove(tmp2);
		}
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_detach_shader.call((  (((program == null()))) ? int((int)0) : int(program->id) ),(  (((shader == null()))) ? int((int)0) : int(shader->id) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,detachShader,(void))

Void NativeGLRenderContext_obj::disable( int cap){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_disable.call(cap);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,disable,(void))

Void NativeGLRenderContext_obj::disableVertexAttribArray( int index){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_disable_vertex_attrib_array.call(index);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,disableVertexAttribArray,(void))

Void NativeGLRenderContext_obj::drawArrays( int mode,int first,int count){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_draw_arrays.call(mode,first,count);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,drawArrays,(void))

Void NativeGLRenderContext_obj::drawArraysInstanced( int mode,int first,int count,int instanceCount){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,drawArraysInstanced,(void))

Void NativeGLRenderContext_obj::drawBuffers( Array< int > buffers){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,drawBuffers,(void))

Void NativeGLRenderContext_obj::drawElements( int mode,int count,int type,Float offset){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_draw_elements.call(mode,count,type,offset);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,drawElements,(void))

Void NativeGLRenderContext_obj::drawElementsInstanced( int mode,int count,int type,Float offset,int instanceCount){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(NativeGLRenderContext_obj,drawElementsInstanced,(void))

Void NativeGLRenderContext_obj::drawRangeElements( int mode,int start,int end,int count,int type,Float offset){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(NativeGLRenderContext_obj,drawRangeElements,(void))

Void NativeGLRenderContext_obj::enable( int cap){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_enable.call(cap);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,enable,(void))

Void NativeGLRenderContext_obj::enableVertexAttribArray( int index){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_enable_vertex_attrib_array.call(index);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,enableVertexAttribArray,(void))

Void NativeGLRenderContext_obj::endQuery( int target){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,endQuery,(void))

Void NativeGLRenderContext_obj::endTransformFeedback( ){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeGLRenderContext_obj,endTransformFeedback,(void))

::lime::graphics::opengl::GLObject NativeGLRenderContext_obj::fenceSync( int condition,int flags){
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,fenceSync,return )

Void NativeGLRenderContext_obj::finish( ){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_finish.call();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeGLRenderContext_obj,finish,(void))

Void NativeGLRenderContext_obj::flush( ){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_flush.call();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeGLRenderContext_obj,flush,(void))

Void NativeGLRenderContext_obj::framebufferRenderbuffer( int target,int attachment,int renderbuffertarget,::lime::graphics::opengl::GLObject renderbuffer){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_framebuffer_renderbuffer.call(target,attachment,renderbuffertarget,(  (((renderbuffer == null()))) ? int((int)0) : int(renderbuffer->id) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,framebufferRenderbuffer,(void))

Void NativeGLRenderContext_obj::framebufferTexture2D( int target,int attachment,int textarget,::lime::graphics::opengl::GLObject texture,int level){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_framebuffer_texture2D.call(target,attachment,textarget,(  (((texture == null()))) ? int((int)0) : int(texture->id) ),level);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(NativeGLRenderContext_obj,framebufferTexture2D,(void))

Void NativeGLRenderContext_obj::framebufferTextureLayer( int target,int attachment,::lime::graphics::opengl::GLObject texture,int level,int layer){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(NativeGLRenderContext_obj,framebufferTextureLayer,(void))

Void NativeGLRenderContext_obj::frontFace( int mode){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_front_face.call(mode);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,frontFace,(void))

Void NativeGLRenderContext_obj::generateMipmap( int target){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_generate_mipmap.call(target);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,generateMipmap,(void))

Dynamic NativeGLRenderContext_obj::getActiveAttrib( ::lime::graphics::opengl::GLObject program,int index){
	Dynamic result = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_active_attrib.call((  (((program == null()))) ? int((int)0) : int(program->id) ),index)));
	Dynamic tmp = result;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getActiveAttrib,return )

Dynamic NativeGLRenderContext_obj::getActiveUniform( ::lime::graphics::opengl::GLObject program,int index){
	Dynamic result = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_active_uniform.call((  (((program == null()))) ? int((int)0) : int(program->id) ),index)));
	Dynamic tmp = result;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getActiveUniform,return )

int NativeGLRenderContext_obj::getActiveUniformBlocki( ::lime::graphics::opengl::GLObject program,int uniformBlockIndex,int pname){
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,getActiveUniformBlocki,return )

Void NativeGLRenderContext_obj::getActiveUniformBlockiv( ::lime::graphics::opengl::GLObject program,int uniformBlockIndex,int pname,Float params){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,getActiveUniformBlockiv,(void))

::String NativeGLRenderContext_obj::getActiveUniformBlockName( ::lime::graphics::opengl::GLObject program,int uniformBlockIndex){
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getActiveUniformBlockName,return )

Dynamic NativeGLRenderContext_obj::getActiveUniformBlockParameter( ::lime::graphics::opengl::GLObject program,int uniformBlockIndex,int pname){
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,getActiveUniformBlockParameter,return )

Dynamic NativeGLRenderContext_obj::getActiveUniforms( ::lime::graphics::opengl::GLObject program,Array< int > uniformIndices,int pname){
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,getActiveUniforms,return )

Void NativeGLRenderContext_obj::getActiveUniformsiv( ::lime::graphics::opengl::GLObject program,Array< int > uniformIndices,int pname,Float params){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,getActiveUniformsiv,(void))

Array< ::Dynamic > NativeGLRenderContext_obj::getAttachedShaders( ::lime::graphics::opengl::GLObject program){
	return ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_attached_shaders.call((  (((program == null()))) ? int((int)0) : int(program->id) ))));
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,getAttachedShaders,return )

int NativeGLRenderContext_obj::getAttribLocation( ::lime::graphics::opengl::GLObject program,::String name){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_attrib_location.call((  (((program == null()))) ? int((int)0) : int(program->id) ),name);
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getAttribLocation,return )

bool NativeGLRenderContext_obj::getBoolean( int pname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_boolean.call(pname);
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,getBoolean,return )

Void NativeGLRenderContext_obj::getBooleanv( int pname,Float params){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_booleanv.call(pname,params);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getBooleanv,(void))

Dynamic NativeGLRenderContext_obj::getBufferParameter( int target,int pname){
	int tmp = target;
	int tmp1 = pname;
	int tmp2 = this->getBufferParameteri(tmp,tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getBufferParameter,return )

int NativeGLRenderContext_obj::getBufferParameteri( int target,int pname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_buffer_parameteri.call(target,pname);
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getBufferParameteri,return )

Void NativeGLRenderContext_obj::getBufferParameteri64v( int target,int pname,Float params){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,getBufferParameteri64v,(void))

Void NativeGLRenderContext_obj::getBufferParameteriv( int target,int pname,Float data){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_buffer_parameteriv.call(target,pname,data);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,getBufferParameteriv,(void))

Float NativeGLRenderContext_obj::getBufferPointerv( int target,int pname){
	Float tmp = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)0);
	return tmp;
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getBufferPointerv,return )

Void NativeGLRenderContext_obj::getBufferSubData( int target,Float offset,int size,Float data){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,getBufferSubData,(void))

Dynamic NativeGLRenderContext_obj::getContextAttributes( ){
	Dynamic base = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_context_attributes.call()));
	base->__FieldRef(HX_HCSTRING("premultipliedAlpha","\x28","\x8e","\x5c","\x1a")) = false;
	base->__FieldRef(HX_HCSTRING("preserveDrawingBuffer","\x92","\xbb","\x1e","\x4b")) = false;
	Dynamic tmp = base;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeGLRenderContext_obj,getContextAttributes,return )

int NativeGLRenderContext_obj::getError( ){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_error.call();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeGLRenderContext_obj,getError,return )

Dynamic NativeGLRenderContext_obj::getExtension( ::String name){
	::haxe::ds::StringMap tmp = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjects;
	bool tmp1 = (tmp == null());
	if ((tmp1)){
		::haxe::ds::StringMap tmp2;
		{
			::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();
			::haxe::ds::StringMap tmp4 = tmp3;
			tmp2 = tmp4;
		}
		::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjects = tmp2;
		Array< ::String > supportedExtensions = this->getSupportedExtensions();
		{
			int _g = (int)0;
			while((true)){
				bool tmp3 = (_g < supportedExtensions->length);
				bool tmp4 = !(tmp3);
				if ((tmp4)){
					break;
				}
				::String tmp5 = supportedExtensions->__get(_g);
				::String extension = tmp5;
				++(_g);
				::haxe::ds::StringMap tmp6 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;
				::String tmp7 = extension;
				bool tmp8 = tmp6->exists(tmp7);
				if ((tmp8)){
					::haxe::ds::StringMap tmp9 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjects;
					::String tmp10 = extension;
					tmp9->set(tmp10,null());
				}
			}
		}
	}
	::haxe::ds::StringMap tmp2 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjects;
	::String tmp3 = name;
	bool tmp4 = tmp2->exists(tmp3);
	if ((tmp4)){
		::haxe::ds::StringMap tmp5 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjects;
		::String tmp6 = name;
		Dynamic tmp7 = tmp5->get(tmp6);
		Dynamic object = tmp7;
		bool tmp8 = (object == null());
		if ((tmp8)){
			::haxe::ds::StringMap tmp9 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;
			::String tmp10 = name;
			Dynamic tmp11 = tmp9->get(tmp10);
			Dynamic tmp12 = tmp11;
			Dynamic tmp13 = tmp12();
			object = tmp13;
			{
				Dynamic value = object;
				::haxe::ds::StringMap tmp14 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjects;
				::String tmp15 = name;
				Dynamic tmp16 = value;
				tmp14->set(tmp15,tmp16);
			}
		}
		Dynamic tmp9 = object;
		return tmp9;
	}
	else{
		return null();
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,getExtension,return )

Float NativeGLRenderContext_obj::getFloat( int pname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_float.call(pname);
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,getFloat,return )

Void NativeGLRenderContext_obj::getFloatv( int pname,Float params){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_floatv.call(pname,params);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getFloatv,(void))

int NativeGLRenderContext_obj::getFragDataLocation( ::lime::graphics::opengl::GLObject program,::String name){
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getFragDataLocation,return )

Dynamic NativeGLRenderContext_obj::getFramebufferAttachmentParameter( int target,int attachment,int pname){
	int tmp = target;
	int tmp1 = attachment;
	int tmp2 = pname;
	int tmp3 = this->getFramebufferAttachmentParameteri(tmp,tmp1,tmp2);
	int value = tmp3;
	int tmp4 = pname;
	int tmp5 = this->FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;
	bool tmp6 = (tmp4 == tmp5);
	if ((tmp6)){
		int tmp7 = value;
		::lime::graphics::opengl::GLObject tmp8 = ::lime::graphics::opengl::_GLTexture::GLTexture_Impl__obj::fromInt(tmp7);
		::lime::graphics::opengl::GLObject texture = tmp8;
		bool tmp9 = (texture != null());
		if ((tmp9)){
			::lime::graphics::opengl::GLObject tmp10 = texture;
			return tmp10;
		}
		int tmp10 = value;
		::lime::graphics::opengl::GLObject tmp11 = ::lime::graphics::opengl::_GLRenderbuffer::GLRenderbuffer_Impl__obj::fromInt(tmp10);
		::lime::graphics::opengl::GLObject renderbuffer = tmp11;
		bool tmp12 = (renderbuffer != null());
		if ((tmp12)){
			::lime::graphics::opengl::GLObject tmp13 = renderbuffer;
			return tmp13;
		}
	}
	int tmp7 = value;
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,getFramebufferAttachmentParameter,return )

int NativeGLRenderContext_obj::getFramebufferAttachmentParameteri( int target,int attachment,int pname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_framebuffer_attachment_parameteri.call(target,attachment,pname);
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,getFramebufferAttachmentParameteri,return )

Void NativeGLRenderContext_obj::getFramebufferAttachmentParameteriv( int target,int attachment,int pname,Float params){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_framebuffer_attachment_parameteriv.call(target,attachment,pname,params);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,getFramebufferAttachmentParameteriv,(void))

Dynamic NativeGLRenderContext_obj::getIndexedParameter( int target,int index){
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getIndexedParameter,return )

int NativeGLRenderContext_obj::getInteger( int pname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_integer.call(pname);
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,getInteger,return )

cpp::Int64Struct NativeGLRenderContext_obj::getInteger64( int pname){
	cpp::Int64Struct tmp = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)0);
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,getInteger64,return )

cpp::Int64Struct NativeGLRenderContext_obj::getInteger64i( int pname){
	cpp::Int64Struct tmp = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)0);
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,getInteger64i,return )

Void NativeGLRenderContext_obj::getInteger64i_v( int pname,Float params){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getInteger64i_v,(void))

Void NativeGLRenderContext_obj::getInteger64v( int pname,Float params){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getInteger64v,(void))

int NativeGLRenderContext_obj::getIntegeri( int pname){
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,getIntegeri,return )

Void NativeGLRenderContext_obj::getIntegeri_v( int pname,Float params){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getIntegeri_v,(void))

Void NativeGLRenderContext_obj::getIntegerv( int pname,Float params){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_integerv.call(pname,params);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getIntegerv,(void))

int NativeGLRenderContext_obj::getInternalformati( int target,int internalformat,int pname){
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,getInternalformati,return )

Void NativeGLRenderContext_obj::getInternalformativ( int target,int internalformat,int pname,Float params){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,getInternalformativ,(void))

Dynamic NativeGLRenderContext_obj::getInternalformatParameter( int target,int internalformat,int pname){
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,getInternalformatParameter,return )

Dynamic NativeGLRenderContext_obj::getParameter( int pname){
	int tmp = pname;
	switch( (int)(tmp)){
		case (int)3042: case (int)2884: case (int)2929: case (int)2930: case (int)3024: case (int)32823: case (int)32939: case (int)3089: case (int)2960: case (int)37440: case (int)37441: {
			int tmp1 = pname;
			bool tmp2 = this->getBoolean(tmp1);
			return tmp2;
		}
		;break;
		case (int)3107: {
			::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::alloc((int)4);
			::haxe::io::Bytes params = tmp1;
			int tmp2 = pname;
			::haxe::io::Bytes tmp3 = params;
			Float tmp4 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBuffer(tmp3);
			this->getBooleanv(tmp2,tmp4);
			Array< bool > data = Array_obj< bool >::__new();
			{
				int _g = (int)0;
				while((true)){
					bool tmp5 = (_g < (int)4);
					bool tmp6 = !(tmp5);
					if ((tmp6)){
						break;
					}
					int tmp7 = (_g)++;
					int i = tmp7;
					int tmp8 = params->b->__get(i);
					bool tmp9 = (tmp8 != (int)0);
					data[i] = tmp9;
				}
			}
			return data;
		}
		;break;
		case (int)2931: case (int)2849: case (int)32824: case (int)10752: case (int)32938: {
			int tmp1 = pname;
			Float tmp2 = this->getFloat(tmp1);
			return tmp2;
		}
		;break;
		case (int)33902: case (int)33901: case (int)2928: {
			::lime::utils::ArrayBufferView tmp1;
			{
				::lime::utils::ArrayBufferView this1;
				bool tmp2 = true;
				if ((tmp2)){
					::lime::utils::ArrayBufferView tmp3 = ::lime::utils::ArrayBufferView_obj::__new((int)2,(int)8);
					this1 = tmp3;
				}
				else{
					bool tmp3 = false;
					if ((tmp3)){
						::lime::utils::ArrayBufferView tmp4;
						{
							::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
							::lime::utils::ArrayBufferView _this = tmp5;
							_this->byteOffset = (int)0;
							int tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp6;
							int tmp7 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp7;
							::haxe::io::Bytes tmp8;
							{
								::haxe::io::Bytes this2;
								int tmp9 = _this->byteLength;
								::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);
								this2 = tmp10;
								tmp8 = this2;
							}
							_this->buffer = tmp8;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp4 = _this;
						}
						this1 = tmp4;
					}
					else{
						bool tmp4 = false;
						if ((tmp4)){
							::lime::utils::ArrayBufferView tmp5;
							{
								::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
								::lime::utils::ArrayBufferView _this = tmp6;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp7 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp7;
								::haxe::io::Bytes tmp8;
								{
									::haxe::io::Bytes this2;
									int tmp9 = _this->byteLength;
									::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);
									this2 = tmp10;
									tmp8 = this2;
								}
								_this->buffer = tmp8;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp5 = _this;
							}
							this1 = tmp5;
						}
						else{
							bool tmp5 = false;
							if ((tmp5)){
								::lime::utils::ArrayBufferView tmp6;
								{
									::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
									::lime::utils::ArrayBufferView _this = tmp7;
									::haxe::io::Bytes tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp8;
									int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp9;
									int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp10;
									int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp11;
									int elementSize = _this->bytesPerElement;
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp13 = _this->type;
									bool tmp14 = (tmp12 == tmp13);
									if ((tmp14)){
										int srcLength1 = srcData->length;
										int tmp15 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp15;
										::haxe::io::Bytes tmp16;
										{
											::haxe::io::Bytes this2;
											int tmp17 = cloneLength;
											::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);
											this2 = tmp18;
											tmp16 = this2;
										}
										_this->buffer = tmp16;
										::haxe::io::Bytes tmp17 = srcData;
										int tmp18 = srcByteOffset;
										int tmp19 = cloneLength;
										_this->buffer->blit((int)0,tmp17,tmp18,tmp19);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp15 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp15;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp6 = _this;
								}
								this1 = tmp6;
							}
							else{
								bool tmp6 = false;
								if ((tmp6)){
									::lime::utils::ArrayBufferView tmp7;
									{
										::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
										::lime::utils::ArrayBufferView _this = tmp8;
										int in_byteOffset = (int)0;
										bool tmp9 = (in_byteOffset < (int)0);
										if ((tmp9)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp10 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp11 = (tmp10 != (int)0);
										if ((tmp11)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
										int bufferByteLength = tmp12;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp13 = true;
										if ((tmp13)){
											int tmp14 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp14;
											int tmp15 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp16 = (tmp15 != (int)0);
											if ((tmp16)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp17 = (newByteLength < (int)0);
											if ((tmp17)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp14 = (null() * _this->bytesPerElement);
											newByteLength = tmp14;
											int tmp15 = (in_byteOffset + newByteLength);
											int newRange = tmp15;
											bool tmp16 = (newRange > bufferByteLength);
											if ((tmp16)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = null();
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp14 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp15 = ::Std_obj::_int(tmp14);
										_this->length = tmp15;
										tmp7 = _this;
									}
									this1 = tmp7;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
				}
				tmp1 = this1;
			}
			::lime::utils::ArrayBufferView params = tmp1;
			int tmp2 = pname;
			::lime::utils::ArrayBufferView tmp3 = params;
			Float tmp4 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBufferView(tmp3);
			this->getFloatv(tmp2,tmp4);
			::lime::utils::ArrayBufferView tmp5 = params;
			return tmp5;
		}
		;break;
		case (int)32773: case (int)3106: {
			::lime::utils::ArrayBufferView tmp1;
			{
				::lime::utils::ArrayBufferView this1;
				bool tmp2 = true;
				if ((tmp2)){
					::lime::utils::ArrayBufferView tmp3 = ::lime::utils::ArrayBufferView_obj::__new((int)4,(int)8);
					this1 = tmp3;
				}
				else{
					bool tmp3 = false;
					if ((tmp3)){
						::lime::utils::ArrayBufferView tmp4;
						{
							::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
							::lime::utils::ArrayBufferView _this = tmp5;
							_this->byteOffset = (int)0;
							int tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp6;
							int tmp7 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp7;
							::haxe::io::Bytes tmp8;
							{
								::haxe::io::Bytes this2;
								int tmp9 = _this->byteLength;
								::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);
								this2 = tmp10;
								tmp8 = this2;
							}
							_this->buffer = tmp8;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp4 = _this;
						}
						this1 = tmp4;
					}
					else{
						bool tmp4 = false;
						if ((tmp4)){
							::lime::utils::ArrayBufferView tmp5;
							{
								::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
								::lime::utils::ArrayBufferView _this = tmp6;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp7 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp7;
								::haxe::io::Bytes tmp8;
								{
									::haxe::io::Bytes this2;
									int tmp9 = _this->byteLength;
									::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);
									this2 = tmp10;
									tmp8 = this2;
								}
								_this->buffer = tmp8;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp5 = _this;
							}
							this1 = tmp5;
						}
						else{
							bool tmp5 = false;
							if ((tmp5)){
								::lime::utils::ArrayBufferView tmp6;
								{
									::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
									::lime::utils::ArrayBufferView _this = tmp7;
									::haxe::io::Bytes tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp8;
									int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp9;
									int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp10;
									int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp11;
									int elementSize = _this->bytesPerElement;
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp13 = _this->type;
									bool tmp14 = (tmp12 == tmp13);
									if ((tmp14)){
										int srcLength1 = srcData->length;
										int tmp15 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp15;
										::haxe::io::Bytes tmp16;
										{
											::haxe::io::Bytes this2;
											int tmp17 = cloneLength;
											::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);
											this2 = tmp18;
											tmp16 = this2;
										}
										_this->buffer = tmp16;
										::haxe::io::Bytes tmp17 = srcData;
										int tmp18 = srcByteOffset;
										int tmp19 = cloneLength;
										_this->buffer->blit((int)0,tmp17,tmp18,tmp19);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp15 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp15;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp6 = _this;
								}
								this1 = tmp6;
							}
							else{
								bool tmp6 = false;
								if ((tmp6)){
									::lime::utils::ArrayBufferView tmp7;
									{
										::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
										::lime::utils::ArrayBufferView _this = tmp8;
										int in_byteOffset = (int)0;
										bool tmp9 = (in_byteOffset < (int)0);
										if ((tmp9)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp10 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp11 = (tmp10 != (int)0);
										if ((tmp11)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
										int bufferByteLength = tmp12;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp13 = true;
										if ((tmp13)){
											int tmp14 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp14;
											int tmp15 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp16 = (tmp15 != (int)0);
											if ((tmp16)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp17 = (newByteLength < (int)0);
											if ((tmp17)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp14 = (null() * _this->bytesPerElement);
											newByteLength = tmp14;
											int tmp15 = (in_byteOffset + newByteLength);
											int newRange = tmp15;
											bool tmp16 = (newRange > bufferByteLength);
											if ((tmp16)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = null();
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp14 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp15 = ::Std_obj::_int(tmp14);
										_this->length = tmp15;
										tmp7 = _this;
									}
									this1 = tmp7;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
				}
				tmp1 = this1;
			}
			::lime::utils::ArrayBufferView params = tmp1;
			int tmp2 = pname;
			::lime::utils::ArrayBufferView tmp3 = params;
			Float tmp4 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBufferView(tmp3);
			this->getFloatv(tmp2,tmp4);
			::lime::utils::ArrayBufferView tmp5 = params;
			return tmp5;
		}
		;break;
		case (int)34016: case (int)3413: case (int)32970: case (int)32968: case (int)32777: case (int)34877: case (int)32971: case (int)32969: case (int)3412: case (int)2885: case (int)3414: case (int)2932: case (int)2886: case (int)33170: case (int)3411: case (int)35739: case (int)35738: case (int)35661: case (int)34076: case (int)36349: case (int)34024: case (int)34930: case (int)3379: case (int)36348: case (int)34921: case (int)35660: case (int)36347: case (int)3333: case (int)3410: case (int)32936: case (int)32937: case (int)34817: case (int)34816: case (int)34818: case (int)34819: case (int)36003: case (int)36004: case (int)36005: case (int)3415: case (int)2961: case (int)2964: case (int)2962: case (int)2965: case (int)2966: case (int)2967: case (int)2963: case (int)2968: case (int)3408: case (int)3317: case (int)37443: {
			int tmp1 = pname;
			int tmp2 = this->getInteger(tmp1);
			return tmp2;
		}
		;break;
		case (int)34467: {
			::lime::utils::ArrayBufferView tmp1;
			{
				int tmp2 = this->getInteger((int)34466);
				Dynamic elements = tmp2;
				::lime::utils::ArrayBufferView this1;
				bool tmp3 = (elements != null());
				if ((tmp3)){
					::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)7);
					this1 = tmp4;
				}
				else{
					bool tmp4 = false;
					if ((tmp4)){
						::lime::utils::ArrayBufferView tmp5;
						{
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
							::lime::utils::ArrayBufferView _this = tmp6;
							_this->byteOffset = (int)0;
							int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp7;
							int tmp8 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp8;
							::haxe::io::Bytes tmp9;
							{
								::haxe::io::Bytes this2;
								int tmp10 = _this->byteLength;
								::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);
								this2 = tmp11;
								tmp9 = this2;
							}
							_this->buffer = tmp9;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp5 = _this;
						}
						this1 = tmp5;
					}
					else{
						bool tmp5 = false;
						if ((tmp5)){
							::lime::utils::ArrayBufferView tmp6;
							{
								::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
								::lime::utils::ArrayBufferView _this = tmp7;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp8 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp8;
								::haxe::io::Bytes tmp9;
								{
									::haxe::io::Bytes this2;
									int tmp10 = _this->byteLength;
									::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);
									this2 = tmp11;
									tmp9 = this2;
								}
								_this->buffer = tmp9;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp6 = _this;
							}
							this1 = tmp6;
						}
						else{
							bool tmp6 = false;
							if ((tmp6)){
								::lime::utils::ArrayBufferView tmp7;
								{
									::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
									::lime::utils::ArrayBufferView _this = tmp8;
									::haxe::io::Bytes tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp9;
									int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp10;
									int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp11;
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp12;
									int elementSize = _this->bytesPerElement;
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp14 = _this->type;
									bool tmp15 = (tmp13 == tmp14);
									if ((tmp15)){
										int srcLength1 = srcData->length;
										int tmp16 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp16;
										::haxe::io::Bytes tmp17;
										{
											::haxe::io::Bytes this2;
											int tmp18 = cloneLength;
											::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);
											this2 = tmp19;
											tmp17 = this2;
										}
										_this->buffer = tmp17;
										::haxe::io::Bytes tmp18 = srcData;
										int tmp19 = srcByteOffset;
										int tmp20 = cloneLength;
										_this->buffer->blit((int)0,tmp18,tmp19,tmp20);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp16 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp16;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp7 = _this;
								}
								this1 = tmp7;
							}
							else{
								bool tmp7 = false;
								if ((tmp7)){
									::lime::utils::ArrayBufferView tmp8;
									{
										::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
										::lime::utils::ArrayBufferView _this = tmp9;
										int in_byteOffset = (int)0;
										bool tmp10 = (in_byteOffset < (int)0);
										if ((tmp10)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp11 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp12 = (tmp11 != (int)0);
										if ((tmp12)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
										int bufferByteLength = tmp13;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp14 = true;
										if ((tmp14)){
											int tmp15 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp15;
											int tmp16 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp17 = (tmp16 != (int)0);
											if ((tmp17)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp18 = (newByteLength < (int)0);
											if ((tmp18)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp15 = (null() * _this->bytesPerElement);
											newByteLength = tmp15;
											int tmp16 = (in_byteOffset + newByteLength);
											int newRange = tmp16;
											bool tmp17 = (newRange > bufferByteLength);
											if ((tmp17)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = null();
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp15 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp16 = ::Std_obj::_int(tmp15);
										_this->length = tmp16;
										tmp8 = _this;
									}
									this1 = tmp8;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt32Array","\x10","\x43","\xeb","\x8e"));
								}
							}
						}
					}
				}
				tmp1 = this1;
			}
			::lime::utils::ArrayBufferView params = tmp1;
			int tmp2 = pname;
			::lime::utils::ArrayBufferView tmp3 = params;
			Float tmp4 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBufferView(tmp3);
			this->getIntegerv(tmp2,tmp4);
			::lime::utils::ArrayBufferView tmp5 = params;
			return tmp5;
		}
		;break;
		case (int)3386: {
			::lime::utils::ArrayBufferView tmp1;
			{
				::lime::utils::ArrayBufferView this1;
				bool tmp2 = true;
				if ((tmp2)){
					::lime::utils::ArrayBufferView tmp3 = ::lime::utils::ArrayBufferView_obj::__new((int)2,(int)3);
					this1 = tmp3;
				}
				else{
					bool tmp3 = false;
					if ((tmp3)){
						::lime::utils::ArrayBufferView tmp4;
						{
							::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
							::lime::utils::ArrayBufferView _this = tmp5;
							_this->byteOffset = (int)0;
							int tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp6;
							int tmp7 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp7;
							::haxe::io::Bytes tmp8;
							{
								::haxe::io::Bytes this2;
								int tmp9 = _this->byteLength;
								::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);
								this2 = tmp10;
								tmp8 = this2;
							}
							_this->buffer = tmp8;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp4 = _this;
						}
						this1 = tmp4;
					}
					else{
						bool tmp4 = false;
						if ((tmp4)){
							::lime::utils::ArrayBufferView tmp5;
							{
								::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
								::lime::utils::ArrayBufferView _this = tmp6;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp7 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp7;
								::haxe::io::Bytes tmp8;
								{
									::haxe::io::Bytes this2;
									int tmp9 = _this->byteLength;
									::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);
									this2 = tmp10;
									tmp8 = this2;
								}
								_this->buffer = tmp8;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp5 = _this;
							}
							this1 = tmp5;
						}
						else{
							bool tmp5 = false;
							if ((tmp5)){
								::lime::utils::ArrayBufferView tmp6;
								{
									::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
									::lime::utils::ArrayBufferView _this = tmp7;
									::haxe::io::Bytes tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp8;
									int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp9;
									int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp10;
									int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp11;
									int elementSize = _this->bytesPerElement;
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp13 = _this->type;
									bool tmp14 = (tmp12 == tmp13);
									if ((tmp14)){
										int srcLength1 = srcData->length;
										int tmp15 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp15;
										::haxe::io::Bytes tmp16;
										{
											::haxe::io::Bytes this2;
											int tmp17 = cloneLength;
											::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);
											this2 = tmp18;
											tmp16 = this2;
										}
										_this->buffer = tmp16;
										::haxe::io::Bytes tmp17 = srcData;
										int tmp18 = srcByteOffset;
										int tmp19 = cloneLength;
										_this->buffer->blit((int)0,tmp17,tmp18,tmp19);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp15 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp15;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp6 = _this;
								}
								this1 = tmp6;
							}
							else{
								bool tmp6 = false;
								if ((tmp6)){
									::lime::utils::ArrayBufferView tmp7;
									{
										::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
										::lime::utils::ArrayBufferView _this = tmp8;
										int in_byteOffset = (int)0;
										bool tmp9 = (in_byteOffset < (int)0);
										if ((tmp9)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp10 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp11 = (tmp10 != (int)0);
										if ((tmp11)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
										int bufferByteLength = tmp12;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp13 = true;
										if ((tmp13)){
											int tmp14 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp14;
											int tmp15 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp16 = (tmp15 != (int)0);
											if ((tmp16)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp17 = (newByteLength < (int)0);
											if ((tmp17)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp14 = (null() * _this->bytesPerElement);
											newByteLength = tmp14;
											int tmp15 = (in_byteOffset + newByteLength);
											int newRange = tmp15;
											bool tmp16 = (newRange > bufferByteLength);
											if ((tmp16)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = null();
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp14 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp15 = ::Std_obj::_int(tmp14);
										_this->length = tmp15;
										tmp7 = _this;
									}
									this1 = tmp7;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
								}
							}
						}
					}
				}
				tmp1 = this1;
			}
			::lime::utils::ArrayBufferView params = tmp1;
			int tmp2 = pname;
			::lime::utils::ArrayBufferView tmp3 = params;
			Float tmp4 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBufferView(tmp3);
			this->getIntegerv(tmp2,tmp4);
			::lime::utils::ArrayBufferView tmp5 = params;
			return tmp5;
		}
		;break;
		case (int)3088: case (int)2978: {
			::lime::utils::ArrayBufferView tmp1;
			{
				::lime::utils::ArrayBufferView this1;
				bool tmp2 = true;
				if ((tmp2)){
					::lime::utils::ArrayBufferView tmp3 = ::lime::utils::ArrayBufferView_obj::__new((int)4,(int)3);
					this1 = tmp3;
				}
				else{
					bool tmp3 = false;
					if ((tmp3)){
						::lime::utils::ArrayBufferView tmp4;
						{
							::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
							::lime::utils::ArrayBufferView _this = tmp5;
							_this->byteOffset = (int)0;
							int tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
							_this->length = tmp6;
							int tmp7 = (_this->length * _this->bytesPerElement);
							_this->byteLength = tmp7;
							::haxe::io::Bytes tmp8;
							{
								::haxe::io::Bytes this2;
								int tmp9 = _this->byteLength;
								::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);
								this2 = tmp10;
								tmp8 = this2;
							}
							_this->buffer = tmp8;
							_this->copyFromArray(((Array< Float >)(null())),null());
							tmp4 = _this;
						}
						this1 = tmp4;
					}
					else{
						bool tmp4 = false;
						if ((tmp4)){
							::lime::utils::ArrayBufferView tmp5;
							{
								::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
								::lime::utils::ArrayBufferView _this = tmp6;
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
								_this->byteOffset = (int)0;
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								int tmp7 = (_this->length * _this->bytesPerElement);
								_this->byteLength = tmp7;
								::haxe::io::Bytes tmp8;
								{
									::haxe::io::Bytes this2;
									int tmp9 = _this->byteLength;
									::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);
									this2 = tmp10;
									tmp8 = this2;
								}
								_this->buffer = tmp8;
								_this->copyFromArray(((Array< Float >)(array)),null());
								tmp5 = _this;
							}
							this1 = tmp5;
						}
						else{
							bool tmp5 = false;
							if ((tmp5)){
								::lime::utils::ArrayBufferView tmp6;
								{
									::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
									::lime::utils::ArrayBufferView _this = tmp7;
									::haxe::io::Bytes tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									::haxe::io::Bytes srcData = tmp8;
									int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcLength = tmp9;
									int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcByteOffset = tmp10;
									int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int srcElementSize = tmp11;
									int elementSize = _this->bytesPerElement;
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
									int tmp13 = _this->type;
									bool tmp14 = (tmp12 == tmp13);
									if ((tmp14)){
										int srcLength1 = srcData->length;
										int tmp15 = (srcLength1 - srcByteOffset);
										int cloneLength = tmp15;
										::haxe::io::Bytes tmp16;
										{
											::haxe::io::Bytes this2;
											int tmp17 = cloneLength;
											::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);
											this2 = tmp18;
											tmp16 = this2;
										}
										_this->buffer = tmp16;
										::haxe::io::Bytes tmp17 = srcData;
										int tmp18 = srcByteOffset;
										int tmp19 = cloneLength;
										_this->buffer->blit((int)0,tmp17,tmp18,tmp19);
									}
									else{
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									int tmp15 = (_this->bytesPerElement * srcLength);
									_this->byteLength = tmp15;
									_this->byteOffset = (int)0;
									_this->length = srcLength;
									tmp6 = _this;
								}
								this1 = tmp6;
							}
							else{
								bool tmp6 = false;
								if ((tmp6)){
									::lime::utils::ArrayBufferView tmp7;
									{
										::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
										::lime::utils::ArrayBufferView _this = tmp8;
										int in_byteOffset = (int)0;
										bool tmp9 = (in_byteOffset < (int)0);
										if ((tmp9)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp10 = hx::Mod(in_byteOffset,_this->bytesPerElement);
										bool tmp11 = (tmp10 != (int)0);
										if ((tmp11)){
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
										int bufferByteLength = tmp12;
										int elementSize = _this->bytesPerElement;
										int newByteLength = bufferByteLength;
										bool tmp13 = true;
										if ((tmp13)){
											int tmp14 = (bufferByteLength - in_byteOffset);
											newByteLength = tmp14;
											int tmp15 = hx::Mod(bufferByteLength,_this->bytesPerElement);
											bool tmp16 = (tmp15 != (int)0);
											if ((tmp16)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											bool tmp17 = (newByteLength < (int)0);
											if ((tmp17)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											int tmp14 = (null() * _this->bytesPerElement);
											newByteLength = tmp14;
											int tmp15 = (in_byteOffset + newByteLength);
											int newRange = tmp15;
											bool tmp16 = (newRange > bufferByteLength);
											if ((tmp16)){
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										_this->buffer = null();
										_this->byteOffset = in_byteOffset;
										_this->byteLength = newByteLength;
										Float tmp14 = (Float(newByteLength) / Float(_this->bytesPerElement));
										int tmp15 = ::Std_obj::_int(tmp14);
										_this->length = tmp15;
										tmp7 = _this;
									}
									this1 = tmp7;
								}
								else{
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
								}
							}
						}
					}
				}
				tmp1 = this1;
			}
			::lime::utils::ArrayBufferView params = tmp1;
			int tmp2 = pname;
			::lime::utils::ArrayBufferView tmp3 = params;
			Float tmp4 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBufferView(tmp3);
			this->getIntegerv(tmp2,tmp4);
			::lime::utils::ArrayBufferView tmp5 = params;
			return tmp5;
		}
		;break;
		case (int)7937: case (int)35724: case (int)7936: case (int)7938: {
			int tmp1 = pname;
			::String tmp2 = this->getString(tmp1);
			return tmp2;
		}
		;break;
		case (int)34964: case (int)34965: {
			int tmp1 = pname;
			int tmp2 = this->getInteger(tmp1);
			::lime::graphics::opengl::GLObject tmp3 = ::lime::graphics::opengl::_GLBuffer::GLBuffer_Impl__obj::fromInt(tmp2);
			::lime::graphics::opengl::GLObject data = tmp3;
			::lime::graphics::opengl::GLObject tmp4 = data;
			return tmp4;
		}
		;break;
		case (int)35725: {
			int tmp1 = pname;
			int tmp2 = this->getInteger(tmp1);
			::lime::graphics::opengl::GLObject tmp3 = ::lime::graphics::opengl::_GLProgram::GLProgram_Impl__obj::fromInt(tmp2);
			::lime::graphics::opengl::GLObject data = tmp3;
			::lime::graphics::opengl::GLObject tmp4 = data;
			return tmp4;
		}
		;break;
		case (int)36006: {
			int tmp1 = pname;
			int tmp2 = this->getInteger(tmp1);
			::lime::graphics::opengl::GLObject tmp3 = ::lime::graphics::opengl::_GLFramebuffer::GLFramebuffer_Impl__obj::fromInt(tmp2);
			::lime::graphics::opengl::GLObject data = tmp3;
			::lime::graphics::opengl::GLObject tmp4 = data;
			return tmp4;
		}
		;break;
		case (int)32873: case (int)34068: {
			int tmp1 = pname;
			int tmp2 = this->getInteger(tmp1);
			::lime::graphics::opengl::GLObject tmp3 = ::lime::graphics::opengl::_GLTexture::GLTexture_Impl__obj::fromInt(tmp2);
			::lime::graphics::opengl::GLObject data = tmp3;
			::lime::graphics::opengl::GLObject tmp4 = data;
			return tmp4;
		}
		;break;
		default: {
			return null();
		}
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,getParameter,return )

int NativeGLRenderContext_obj::getProgrami( ::lime::graphics::opengl::GLObject program,int pname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_programi.call((  (((program == null()))) ? int((int)0) : int(program->id) ),pname);
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getProgrami,return )

Void NativeGLRenderContext_obj::getProgramiv( ::lime::graphics::opengl::GLObject program,int pname,Float params){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_programiv.call((  (((program == null()))) ? int((int)0) : int(program->id) ),pname,params);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,getProgramiv,(void))

::haxe::io::Bytes NativeGLRenderContext_obj::getProgramBinary( ::lime::graphics::opengl::GLObject program,int binaryFormat){
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getProgramBinary,return )

::String NativeGLRenderContext_obj::getProgramInfoLog( ::lime::graphics::opengl::GLObject program){
	return ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_program_info_log.call((  (((program == null()))) ? int((int)0) : int(program->id) ))));
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,getProgramInfoLog,return )

Dynamic NativeGLRenderContext_obj::getProgramParameter( ::lime::graphics::opengl::GLObject program,int pname){
	bool tmp = (program == null());
	int tmp1;
	if ((tmp)){
		tmp1 = (int)0;
	}
	else{
		tmp1 = program->id;
	}
	::lime::graphics::opengl::GLObject tmp2 = ::lime::graphics::opengl::_GLProgram::GLProgram_Impl__obj::fromInt(tmp1);
	int tmp3 = pname;
	int tmp4 = this->getProgrami(tmp2,tmp3);
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getProgramParameter,return )

::lime::graphics::opengl::GLObject NativeGLRenderContext_obj::getQuery( int target,int pname){
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getQuery,return )

int NativeGLRenderContext_obj::getQueryi( int target,int pname){
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getQueryi,return )

Void NativeGLRenderContext_obj::getQueryiv( int target,int pname,Float params){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,getQueryiv,(void))

int NativeGLRenderContext_obj::getQueryObjectui( ::lime::graphics::opengl::GLObject query,int pname){
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getQueryObjectui,return )

Void NativeGLRenderContext_obj::getQueryObjectuiv( ::lime::graphics::opengl::GLObject query,int pname,Float params){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,getQueryObjectuiv,(void))

Dynamic NativeGLRenderContext_obj::getQueryParameter( ::lime::graphics::opengl::GLObject query,int pname){
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getQueryParameter,return )

Dynamic NativeGLRenderContext_obj::getRenderbufferParameter( int target,int pname){
	int tmp = target;
	int tmp1 = pname;
	int tmp2 = this->getRenderbufferParameteri(tmp,tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getRenderbufferParameter,return )

int NativeGLRenderContext_obj::getRenderbufferParameteri( int target,int pname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_renderbuffer_parameteri.call(target,pname);
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getRenderbufferParameteri,return )

Void NativeGLRenderContext_obj::getRenderbufferParameteriv( int target,int pname,Float params){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_renderbuffer_parameteriv.call(target,pname,params);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,getRenderbufferParameteriv,(void))

Dynamic NativeGLRenderContext_obj::getSamplerParameter( ::lime::graphics::opengl::GLObject sampler,int pname){
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getSamplerParameter,return )

Float NativeGLRenderContext_obj::getSamplerParameterf( ::lime::graphics::opengl::GLObject sampler,int pname){
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getSamplerParameterf,return )

Void NativeGLRenderContext_obj::getSamplerParameterfv( ::lime::graphics::opengl::GLObject sampler,int pname,Float params){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,getSamplerParameterfv,(void))

int NativeGLRenderContext_obj::getSamplerParameteri( ::lime::graphics::opengl::GLObject sampler,int pname){
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getSamplerParameteri,return )

Void NativeGLRenderContext_obj::getSamplerParameteriv( ::lime::graphics::opengl::GLObject sampler,int pname,Float params){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,getSamplerParameteriv,(void))

int NativeGLRenderContext_obj::getShaderi( ::lime::graphics::opengl::GLObject shader,int pname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_shaderi.call((  (((shader == null()))) ? int((int)0) : int(shader->id) ),pname);
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getShaderi,return )

Void NativeGLRenderContext_obj::getShaderiv( ::lime::graphics::opengl::GLObject shader,int pname,Float params){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_shaderiv.call((  (((shader == null()))) ? int((int)0) : int(shader->id) ),pname,params);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,getShaderiv,(void))

::String NativeGLRenderContext_obj::getShaderInfoLog( ::lime::graphics::opengl::GLObject shader){
	return ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_shader_info_log.call((  (((shader == null()))) ? int((int)0) : int(shader->id) ))));
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,getShaderInfoLog,return )

Dynamic NativeGLRenderContext_obj::getShaderParameter( ::lime::graphics::opengl::GLObject shader,int pname){
	bool tmp = (shader == null());
	int tmp1;
	if ((tmp)){
		tmp1 = (int)0;
	}
	else{
		tmp1 = shader->id;
	}
	::lime::graphics::opengl::GLObject tmp2 = ::lime::graphics::opengl::_GLShader::GLShader_Impl__obj::fromInt(tmp1);
	int tmp3 = pname;
	int tmp4 = this->getShaderi(tmp2,tmp3);
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getShaderParameter,return )

Dynamic NativeGLRenderContext_obj::getShaderPrecisionFormat( int shadertype,int precisiontype){
	Dynamic result = ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_shader_precision_format.call(shadertype,precisiontype)));
	Dynamic tmp = result;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getShaderPrecisionFormat,return )

::String NativeGLRenderContext_obj::getShaderSource( ::lime::graphics::opengl::GLObject shader){
	return ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_shader_source.call((  (((shader == null()))) ? int((int)0) : int(shader->id) ))));
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,getShaderSource,return )

::String NativeGLRenderContext_obj::getString( int pname){
	return ((Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_string.call(pname)));
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,getString,return )

::String NativeGLRenderContext_obj::getStringi( int name,int index){
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getStringi,return )

Array< ::String > NativeGLRenderContext_obj::getSupportedExtensions( ){
	bool tmp = (::lime::_backend::native::NativeGLRenderContext_obj::__supportedExtensions == null());
	if ((tmp)){
		::lime::_backend::native::NativeGLRenderContext_obj::__supportedExtensions = Array_obj< ::String >::__new();
		::String tmp1 = this->getString((int)7939);
		::String extensions = tmp1;
		bool tmp2 = (extensions != null());
		if ((tmp2)){
			Array< ::String > extensionList = extensions.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			{
				int _g = (int)0;
				while((true)){
					bool tmp3 = (_g < extensionList->length);
					bool tmp4 = !(tmp3);
					if ((tmp4)){
						break;
					}
					::String tmp5 = extensionList->__get(_g);
					::String extension = tmp5;
					++(_g);
					::String tmp6 = extension;
					bool tmp7 = ::StringTools_obj::startsWith(tmp6,HX_HCSTRING("GL_","\x9a","\x22","\x36","\x00"));
					if ((tmp7)){
						::String tmp8 = extension.substr((int)3,null());
						::lime::_backend::native::NativeGLRenderContext_obj::__supportedExtensions->push(tmp8);
					}
					else{
						::String tmp8 = extension;
						::lime::_backend::native::NativeGLRenderContext_obj::__supportedExtensions->push(tmp8);
					}
				}
			}
		}
	}
	return ::lime::_backend::native::NativeGLRenderContext_obj::__supportedExtensions;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeGLRenderContext_obj,getSupportedExtensions,return )

Dynamic NativeGLRenderContext_obj::getSyncParameter( ::lime::graphics::opengl::GLObject sync,int pname){
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getSyncParameter,return )

int NativeGLRenderContext_obj::getSyncParameteri( ::lime::graphics::opengl::GLObject sync,int pname){
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getSyncParameteri,return )

Void NativeGLRenderContext_obj::getSyncParameteriv( ::lime::graphics::opengl::GLObject sync,int pname,Float params){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,getSyncParameteriv,(void))

Dynamic NativeGLRenderContext_obj::getTexParameter( int target,int pname){
	int tmp = pname;
	switch( (int)(tmp)){
		case (int)33083: case (int)33082: {
			int tmp1 = target;
			int tmp2 = pname;
			Float tmp3 = this->getTexParameterf(tmp1,tmp2);
			return tmp3;
		}
		;break;
		case (int)37167: {
			int tmp1 = target;
			int tmp2 = pname;
			Float tmp3 = this->getTexParameterf(tmp1,tmp2);
			bool tmp4 = (tmp3 != (int)0);
			return tmp4;
		}
		;break;
		default: {
			int tmp1 = target;
			int tmp2 = pname;
			int tmp3 = this->getTexParameteri(tmp1,tmp2);
			return tmp3;
		}
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getTexParameter,return )

Float NativeGLRenderContext_obj::getTexParameterf( int target,int pname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_tex_parameterf.call(target,pname);
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getTexParameterf,return )

Void NativeGLRenderContext_obj::getTexParameterfv( int target,int pname,Float params){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_tex_parameterfv.call(target,pname,params);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,getTexParameterfv,(void))

int NativeGLRenderContext_obj::getTexParameteri( int target,int pname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_tex_parameteri.call(target,pname);
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getTexParameteri,return )

Void NativeGLRenderContext_obj::getTexParameteriv( int target,int pname,Float params){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_tex_parameteriv.call(target,pname,params);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,getTexParameteriv,(void))

Dynamic NativeGLRenderContext_obj::getTransformFeedbackVarying( ::lime::graphics::opengl::GLObject program,int index){
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getTransformFeedbackVarying,return )

Dynamic NativeGLRenderContext_obj::getUniform( ::lime::graphics::opengl::GLObject program,int location){
	::lime::graphics::opengl::GLObject tmp = program;
	int tmp1 = location;
	Dynamic tmp2 = this->getActiveUniform(tmp,tmp1);
	Dynamic info = tmp2;
	int bools = (int)0;
	int ints = (int)0;
	int floats = (int)0;
	{
		int _g = info->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );
		int tmp3 = _g;
		switch( (int)(tmp3)){
			case (int)35670: {
				bools = (int)1;
			}
			;break;
			case (int)5124: {
				ints = (int)1;
			}
			;break;
			case (int)5126: {
				floats = (int)1;
			}
			;break;
			case (int)35664: {
				floats = (int)2;
			}
			;break;
			case (int)35667: {
				ints = (int)2;
			}
			;break;
			case (int)35671: {
				bools = (int)2;
			}
			;break;
			case (int)35665: {
				floats = (int)3;
			}
			;break;
			case (int)35668: {
				ints = (int)3;
			}
			;break;
			case (int)35672: {
				bools = (int)3;
			}
			;break;
			case (int)35666: {
				floats = (int)4;
			}
			;break;
			case (int)35669: {
				ints = (int)4;
			}
			;break;
			case (int)35673: {
				bools = (int)4;
			}
			;break;
			case (int)35674: {
				floats = (int)4;
			}
			;break;
			case (int)35685: {
				floats = (int)12;
			}
			;break;
			case (int)35686: {
				floats = (int)16;
			}
			;break;
			case (int)35675: {
				floats = (int)9;
			}
			;break;
			case (int)35687: {
				floats = (int)18;
			}
			;break;
			case (int)35688: {
				floats = (int)36;
			}
			;break;
			case (int)35676: {
				floats = (int)16;
			}
			;break;
			case (int)35689: {
				floats = (int)32;
			}
			;break;
			case (int)35690: {
				floats = (int)48;
			}
			;break;
			case (int)35678: case (int)35679: case (int)35680: case (int)35682: {
				ints = (int)1;
			}
			;break;
			default: {
				return null();
			}
		}
	}
	bool tmp3 = (bools == (int)1);
	if ((tmp3)){
		::lime::graphics::opengl::GLObject tmp4 = program;
		int tmp5 = location;
		int tmp6 = this->getUniformi(tmp4,tmp5);
		bool tmp7 = (tmp6 != (int)0);
		return tmp7;
	}
	else{
		bool tmp4 = (ints == (int)1);
		if ((tmp4)){
			::lime::graphics::opengl::GLObject tmp5 = program;
			int tmp6 = location;
			int tmp7 = this->getUniformi(tmp5,tmp6);
			return tmp7;
		}
		else{
			bool tmp5 = (floats == (int)1);
			if ((tmp5)){
				::lime::graphics::opengl::GLObject tmp6 = program;
				int tmp7 = location;
				Float tmp8 = this->getUniformf(tmp6,tmp7);
				return tmp8;
			}
			else{
				bool tmp6 = (bools > (int)0);
				if ((tmp6)){
					int tmp7 = bools;
					::haxe::io::Bytes tmp8 = ::haxe::io::Bytes_obj::alloc(tmp7);
					::haxe::io::Bytes params = tmp8;
					::lime::graphics::opengl::GLObject tmp9 = program;
					int tmp10 = location;
					::haxe::io::Bytes tmp11 = params;
					Float tmp12 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBuffer(tmp11);
					this->getUniformiv(tmp9,tmp10,tmp12);
					Array< bool > data = Array_obj< bool >::__new();
					{
						int _g = (int)0;
						while((true)){
							bool tmp13 = (_g < bools);
							bool tmp14 = !(tmp13);
							if ((tmp14)){
								break;
							}
							int tmp15 = (_g)++;
							int i = tmp15;
							int tmp16 = params->b->__get(i);
							bool tmp17 = (tmp16 != (int)0);
							data[i] = tmp17;
						}
					}
					return data;
				}
				else{
					bool tmp7 = (ints > (int)0);
					if ((tmp7)){
						::lime::utils::ArrayBufferView tmp8;
						{
							::lime::utils::ArrayBufferView this1;
							bool tmp9 = (ints != null());
							if ((tmp9)){
								::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(ints,(int)3);
								this1 = tmp10;
							}
							else{
								bool tmp10 = false;
								if ((tmp10)){
									::lime::utils::ArrayBufferView tmp11;
									{
										::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
										::lime::utils::ArrayBufferView _this = tmp12;
										_this->byteOffset = (int)0;
										int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
										_this->length = tmp13;
										int tmp14 = (_this->length * _this->bytesPerElement);
										_this->byteLength = tmp14;
										::haxe::io::Bytes tmp15;
										{
											::haxe::io::Bytes this2;
											int tmp16 = _this->byteLength;
											::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);
											this2 = tmp17;
											tmp15 = this2;
										}
										_this->buffer = tmp15;
										_this->copyFromArray(((Array< Float >)(null())),null());
										tmp11 = _this;
									}
									this1 = tmp11;
								}
								else{
									bool tmp11 = false;
									if ((tmp11)){
										::lime::utils::ArrayBufferView tmp12;
										{
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
											::lime::utils::ArrayBufferView _this = tmp13;
											cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
											_this->byteOffset = (int)0;
											_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
											int tmp14 = (_this->length * _this->bytesPerElement);
											_this->byteLength = tmp14;
											::haxe::io::Bytes tmp15;
											{
												::haxe::io::Bytes this2;
												int tmp16 = _this->byteLength;
												::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);
												this2 = tmp17;
												tmp15 = this2;
											}
											_this->buffer = tmp15;
											_this->copyFromArray(((Array< Float >)(array)),null());
											tmp12 = _this;
										}
										this1 = tmp12;
									}
									else{
										bool tmp12 = false;
										if ((tmp12)){
											::lime::utils::ArrayBufferView tmp13;
											{
												::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
												::lime::utils::ArrayBufferView _this = tmp14;
												::haxe::io::Bytes tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
												::haxe::io::Bytes srcData = tmp15;
												int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
												int srcLength = tmp16;
												int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
												int srcByteOffset = tmp17;
												int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
												int srcElementSize = tmp18;
												int elementSize = _this->bytesPerElement;
												int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
												int tmp20 = _this->type;
												bool tmp21 = (tmp19 == tmp20);
												if ((tmp21)){
													int srcLength1 = srcData->length;
													int tmp22 = (srcLength1 - srcByteOffset);
													int cloneLength = tmp22;
													::haxe::io::Bytes tmp23;
													{
														::haxe::io::Bytes this2;
														int tmp24 = cloneLength;
														::haxe::io::Bytes tmp25 = ::haxe::io::Bytes_obj::alloc(tmp24);
														this2 = tmp25;
														tmp23 = this2;
													}
													_this->buffer = tmp23;
													::haxe::io::Bytes tmp24 = srcData;
													int tmp25 = srcByteOffset;
													int tmp26 = cloneLength;
													_this->buffer->blit((int)0,tmp24,tmp25,tmp26);
												}
												else{
													HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
												}
												int tmp22 = (_this->bytesPerElement * srcLength);
												_this->byteLength = tmp22;
												_this->byteOffset = (int)0;
												_this->length = srcLength;
												tmp13 = _this;
											}
											this1 = tmp13;
										}
										else{
											bool tmp13 = false;
											if ((tmp13)){
												::lime::utils::ArrayBufferView tmp14;
												{
													::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
													::lime::utils::ArrayBufferView _this = tmp15;
													int in_byteOffset = (int)0;
													bool tmp16 = (in_byteOffset < (int)0);
													if ((tmp16)){
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
													int tmp17 = hx::Mod(in_byteOffset,_this->bytesPerElement);
													bool tmp18 = (tmp17 != (int)0);
													if ((tmp18)){
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
													int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
													int bufferByteLength = tmp19;
													int elementSize = _this->bytesPerElement;
													int newByteLength = bufferByteLength;
													bool tmp20 = true;
													if ((tmp20)){
														int tmp21 = (bufferByteLength - in_byteOffset);
														newByteLength = tmp21;
														int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);
														bool tmp23 = (tmp22 != (int)0);
														if ((tmp23)){
															HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
														}
														bool tmp24 = (newByteLength < (int)0);
														if ((tmp24)){
															HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
														}
													}
													else{
														int tmp21 = (null() * _this->bytesPerElement);
														newByteLength = tmp21;
														int tmp22 = (in_byteOffset + newByteLength);
														int newRange = tmp22;
														bool tmp23 = (newRange > bufferByteLength);
														if ((tmp23)){
															HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
														}
													}
													_this->buffer = null();
													_this->byteOffset = in_byteOffset;
													_this->byteLength = newByteLength;
													Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));
													int tmp22 = ::Std_obj::_int(tmp21);
													_this->length = tmp22;
													tmp14 = _this;
												}
												this1 = tmp14;
											}
											else{
												HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
											}
										}
									}
								}
							}
							tmp8 = this1;
						}
						::lime::utils::ArrayBufferView params = tmp8;
						::lime::graphics::opengl::GLObject tmp9 = program;
						int tmp10 = location;
						::lime::utils::ArrayBufferView tmp11 = params;
						Float tmp12 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBufferView(tmp11);
						this->getUniformiv(tmp9,tmp10,tmp12);
						::lime::utils::ArrayBufferView tmp13 = params;
						return tmp13;
					}
					else{
						bool tmp8 = (floats > (int)0);
						if ((tmp8)){
							::lime::utils::ArrayBufferView tmp9;
							{
								::lime::utils::ArrayBufferView this1;
								bool tmp10 = (floats != null());
								if ((tmp10)){
									::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new(floats,(int)8);
									this1 = tmp11;
								}
								else{
									bool tmp11 = false;
									if ((tmp11)){
										::lime::utils::ArrayBufferView tmp12;
										{
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
											::lime::utils::ArrayBufferView _this = tmp13;
											_this->byteOffset = (int)0;
											int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
											_this->length = tmp14;
											int tmp15 = (_this->length * _this->bytesPerElement);
											_this->byteLength = tmp15;
											::haxe::io::Bytes tmp16;
											{
												::haxe::io::Bytes this2;
												int tmp17 = _this->byteLength;
												::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);
												this2 = tmp18;
												tmp16 = this2;
											}
											_this->buffer = tmp16;
											_this->copyFromArray(((Array< Float >)(null())),null());
											tmp12 = _this;
										}
										this1 = tmp12;
									}
									else{
										bool tmp12 = false;
										if ((tmp12)){
											::lime::utils::ArrayBufferView tmp13;
											{
												::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
												::lime::utils::ArrayBufferView _this = tmp14;
												cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));
												_this->byteOffset = (int)0;
												_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
												int tmp15 = (_this->length * _this->bytesPerElement);
												_this->byteLength = tmp15;
												::haxe::io::Bytes tmp16;
												{
													::haxe::io::Bytes this2;
													int tmp17 = _this->byteLength;
													::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);
													this2 = tmp18;
													tmp16 = this2;
												}
												_this->buffer = tmp16;
												_this->copyFromArray(((Array< Float >)(array)),null());
												tmp13 = _this;
											}
											this1 = tmp13;
										}
										else{
											bool tmp13 = false;
											if ((tmp13)){
												::lime::utils::ArrayBufferView tmp14;
												{
													::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
													::lime::utils::ArrayBufferView _this = tmp15;
													::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
													::haxe::io::Bytes srcData = tmp16;
													int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
													int srcLength = tmp17;
													int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
													int srcByteOffset = tmp18;
													int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
													int srcElementSize = tmp19;
													int elementSize = _this->bytesPerElement;
													int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
													int tmp21 = _this->type;
													bool tmp22 = (tmp20 == tmp21);
													if ((tmp22)){
														int srcLength1 = srcData->length;
														int tmp23 = (srcLength1 - srcByteOffset);
														int cloneLength = tmp23;
														::haxe::io::Bytes tmp24;
														{
															::haxe::io::Bytes this2;
															int tmp25 = cloneLength;
															::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);
															this2 = tmp26;
															tmp24 = this2;
														}
														_this->buffer = tmp24;
														::haxe::io::Bytes tmp25 = srcData;
														int tmp26 = srcByteOffset;
														int tmp27 = cloneLength;
														_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
													}
													else{
														HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
													}
													int tmp23 = (_this->bytesPerElement * srcLength);
													_this->byteLength = tmp23;
													_this->byteOffset = (int)0;
													_this->length = srcLength;
													tmp14 = _this;
												}
												this1 = tmp14;
											}
											else{
												bool tmp14 = false;
												if ((tmp14)){
													::lime::utils::ArrayBufferView tmp15;
													{
														::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
														::lime::utils::ArrayBufferView _this = tmp16;
														int in_byteOffset = (int)0;
														bool tmp17 = (in_byteOffset < (int)0);
														if ((tmp17)){
															HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
														}
														int tmp18 = hx::Mod(in_byteOffset,_this->bytesPerElement);
														bool tmp19 = (tmp18 != (int)0);
														if ((tmp19)){
															HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
														}
														int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
														int bufferByteLength = tmp20;
														int elementSize = _this->bytesPerElement;
														int newByteLength = bufferByteLength;
														bool tmp21 = true;
														if ((tmp21)){
															int tmp22 = (bufferByteLength - in_byteOffset);
															newByteLength = tmp22;
															int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);
															bool tmp24 = (tmp23 != (int)0);
															if ((tmp24)){
																HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
															}
															bool tmp25 = (newByteLength < (int)0);
															if ((tmp25)){
																HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
															}
														}
														else{
															int tmp22 = (null() * _this->bytesPerElement);
															newByteLength = tmp22;
															int tmp23 = (in_byteOffset + newByteLength);
															int newRange = tmp23;
															bool tmp24 = (newRange > bufferByteLength);
															if ((tmp24)){
																HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
															}
														}
														_this->buffer = null();
														_this->byteOffset = in_byteOffset;
														_this->byteLength = newByteLength;
														Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));
														int tmp23 = ::Std_obj::_int(tmp22);
														_this->length = tmp23;
														tmp15 = _this;
													}
													this1 = tmp15;
												}
												else{
													HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
												}
											}
										}
									}
								}
								tmp9 = this1;
							}
							::lime::utils::ArrayBufferView params = tmp9;
							::lime::graphics::opengl::GLObject tmp10 = program;
							int tmp11 = location;
							::lime::utils::ArrayBufferView tmp12 = params;
							Float tmp13 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBufferView(tmp12);
							this->getUniformfv(tmp10,tmp11,tmp13);
							::lime::utils::ArrayBufferView tmp14 = params;
							return tmp14;
						}
						else{
							return null();
						}
					}
				}
			}
		}
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getUniform,return )

Float NativeGLRenderContext_obj::getUniformf( ::lime::graphics::opengl::GLObject program,int location){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_uniformf.call((  (((program == null()))) ? int((int)0) : int(program->id) ),location);
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getUniformf,return )

Void NativeGLRenderContext_obj::getUniformfv( ::lime::graphics::opengl::GLObject program,int location,Float params){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_uniformfv.call((  (((program == null()))) ? int((int)0) : int(program->id) ),location,params);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,getUniformfv,(void))

int NativeGLRenderContext_obj::getUniformi( ::lime::graphics::opengl::GLObject program,int location){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_uniformi.call((  (((program == null()))) ? int((int)0) : int(program->id) ),location);
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getUniformi,return )

Void NativeGLRenderContext_obj::getUniformiv( ::lime::graphics::opengl::GLObject program,int location,Float params){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_uniformiv.call((  (((program == null()))) ? int((int)0) : int(program->id) ),location,params);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,getUniformiv,(void))

int NativeGLRenderContext_obj::getUniformui( ::lime::graphics::opengl::GLObject program,int location){
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getUniformui,return )

Void NativeGLRenderContext_obj::getUniformuiv( ::lime::graphics::opengl::GLObject program,int location,Float params){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,getUniformuiv,(void))

int NativeGLRenderContext_obj::getUniformBlockIndex( ::lime::graphics::opengl::GLObject program,::String uniformBlockName){
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getUniformBlockIndex,return )

Array< int > NativeGLRenderContext_obj::getUniformIndices( ::lime::graphics::opengl::GLObject program,Array< ::String > uniformNames){
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getUniformIndices,return )

int NativeGLRenderContext_obj::getUniformLocation( ::lime::graphics::opengl::GLObject program,::String name){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_uniform_location.call((  (((program == null()))) ? int((int)0) : int(program->id) ),name);
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getUniformLocation,return )

Dynamic NativeGLRenderContext_obj::getVertexAttrib( int index,int pname){
	int tmp = index;
	int tmp1 = pname;
	int tmp2 = this->getVertexAttribi(tmp,tmp1);
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getVertexAttrib,return )

Float NativeGLRenderContext_obj::getVertexAttribf( int index,int pname){
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getVertexAttribf,return )

Void NativeGLRenderContext_obj::getVertexAttribfv( int index,int pname,Float params){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,getVertexAttribfv,(void))

int NativeGLRenderContext_obj::getVertexAttribi( int index,int pname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_vertex_attribi.call(index,pname);
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getVertexAttribi,return )

int NativeGLRenderContext_obj::getVertexAttribIi( int index,int pname){
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getVertexAttribIi,return )

Void NativeGLRenderContext_obj::getVertexAttribIiv( int index,int pname,Float params){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,getVertexAttribIiv,(void))

int NativeGLRenderContext_obj::getVertexAttribIui( int index,int pname){
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getVertexAttribIui,return )

Void NativeGLRenderContext_obj::getVertexAttribIuiv( int index,int pname,Float params){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,getVertexAttribIuiv,(void))

Void NativeGLRenderContext_obj::getVertexAttribiv( int index,int pname,Float params){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_vertex_attribiv.call(index,pname,params);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,getVertexAttribiv,(void))

Float NativeGLRenderContext_obj::getVertexAttribPointerv( int index,int pname){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_get_vertex_attrib_pointerv.call(index,pname);
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,getVertexAttribPointerv,return )

Void NativeGLRenderContext_obj::hint( int target,int mode){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_hint.call(target,mode);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,hint,(void))

Void NativeGLRenderContext_obj::invalidateFramebuffer( int target,Array< int > attachments){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,invalidateFramebuffer,(void))

Void NativeGLRenderContext_obj::invalidateSubFramebuffer( int target,Array< int > attachments,int x,int y,int width,int height){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(NativeGLRenderContext_obj,invalidateSubFramebuffer,(void))

bool NativeGLRenderContext_obj::isBuffer( ::lime::graphics::opengl::GLObject buffer){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_is_buffer.call((  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,isBuffer,return )

bool NativeGLRenderContext_obj::isContextLost( ){
	bool tmp = this->__isContextLost;
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeGLRenderContext_obj,isContextLost,return )

bool NativeGLRenderContext_obj::isEnabled( int cap){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_is_enabled.call(cap);
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,isEnabled,return )

bool NativeGLRenderContext_obj::isFramebuffer( ::lime::graphics::opengl::GLObject framebuffer){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_is_framebuffer.call((  (((framebuffer == null()))) ? int((int)0) : int(framebuffer->id) ));
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,isFramebuffer,return )

bool NativeGLRenderContext_obj::isProgram( ::lime::graphics::opengl::GLObject program){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_is_program.call((  (((program == null()))) ? int((int)0) : int(program->id) ));
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,isProgram,return )

bool NativeGLRenderContext_obj::isQuery( ::lime::graphics::opengl::GLObject query){
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,isQuery,return )

bool NativeGLRenderContext_obj::isRenderbuffer( ::lime::graphics::opengl::GLObject renderbuffer){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_is_renderbuffer.call((  (((renderbuffer == null()))) ? int((int)0) : int(renderbuffer->id) ));
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,isRenderbuffer,return )

bool NativeGLRenderContext_obj::isSampler( ::lime::graphics::opengl::GLObject sampler){
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,isSampler,return )

bool NativeGLRenderContext_obj::isShader( ::lime::graphics::opengl::GLObject shader){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_is_shader.call((  (((shader == null()))) ? int((int)0) : int(shader->id) ));
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,isShader,return )

bool NativeGLRenderContext_obj::isSync( ::lime::graphics::opengl::GLObject sync){
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,isSync,return )

bool NativeGLRenderContext_obj::isTexture( ::lime::graphics::opengl::GLObject texture){
	return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_is_texture.call((  (((texture == null()))) ? int((int)0) : int(texture->id) ));
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,isTexture,return )

bool NativeGLRenderContext_obj::isTransformFeedback( ::lime::graphics::opengl::GLObject transformFeedback){
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,isTransformFeedback,return )

bool NativeGLRenderContext_obj::isVertexArray( ::lime::graphics::opengl::GLObject vertexArray){
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,isVertexArray,return )

Void NativeGLRenderContext_obj::lineWidth( Float width){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_line_width.call(width);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,lineWidth,(void))

Void NativeGLRenderContext_obj::linkProgram( ::lime::graphics::opengl::GLObject program){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_link_program.call((  (((program == null()))) ? int((int)0) : int(program->id) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,linkProgram,(void))

Void NativeGLRenderContext_obj::mapBufferRange( int target,Float offset,int length,int access){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,mapBufferRange,(void))

Void NativeGLRenderContext_obj::pauseTransformFeedback( ){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeGLRenderContext_obj,pauseTransformFeedback,(void))

Void NativeGLRenderContext_obj::pixelStorei( int pname,int param){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_pixel_storei.call(pname,param);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,pixelStorei,(void))

Void NativeGLRenderContext_obj::polygonOffset( Float factor,Float units){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_polygon_offset.call(factor,units);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,polygonOffset,(void))

Void NativeGLRenderContext_obj::programBinary( ::lime::graphics::opengl::GLObject program,int binaryFormat,Float binary,int length){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,programBinary,(void))

Void NativeGLRenderContext_obj::programParameteri( ::lime::graphics::opengl::GLObject program,int pname,int value){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,programParameteri,(void))

Void NativeGLRenderContext_obj::readBuffer( int src){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,readBuffer,(void))

Void NativeGLRenderContext_obj::readPixels( int x,int y,int width,int height,int format,int type,Float pixels){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_read_pixels.call(x,y,width,height,format,type,pixels);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(NativeGLRenderContext_obj,readPixels,(void))

Void NativeGLRenderContext_obj::releaseShaderCompiler( ){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeGLRenderContext_obj,releaseShaderCompiler,(void))

Void NativeGLRenderContext_obj::renderbufferStorage( int target,int internalformat,int width,int height){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_renderbuffer_storage.call(target,internalformat,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,renderbufferStorage,(void))

Void NativeGLRenderContext_obj::renderbufferStorageMultisample( int target,int samples,int internalFormat,int width,int height){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(NativeGLRenderContext_obj,renderbufferStorageMultisample,(void))

Void NativeGLRenderContext_obj::resumeTransformFeedback( ){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeGLRenderContext_obj,resumeTransformFeedback,(void))

Void NativeGLRenderContext_obj::sampleCoverage( Float value,bool invert){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_sample_coverage.call(value,invert);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,sampleCoverage,(void))

Void NativeGLRenderContext_obj::samplerParameterf( ::lime::graphics::opengl::GLObject sampler,int pname,Float param){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,samplerParameterf,(void))

Void NativeGLRenderContext_obj::samplerParameteri( ::lime::graphics::opengl::GLObject sampler,int pname,int param){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,samplerParameteri,(void))

Void NativeGLRenderContext_obj::scissor( int x,int y,int width,int height){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_scissor.call(x,y,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,scissor,(void))

Void NativeGLRenderContext_obj::shaderBinary( Array< ::Dynamic > shaders,int binaryformat,Float binary,int length){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,shaderBinary,(void))

Void NativeGLRenderContext_obj::shaderSource( ::lime::graphics::opengl::GLObject shader,::String source){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_shader_source.call((  (((shader == null()))) ? int((int)0) : int(shader->id) ),source);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,shaderSource,(void))

Void NativeGLRenderContext_obj::stencilFunc( int func,int ref,int mask){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_stencil_func.call(func,ref,mask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,stencilFunc,(void))

Void NativeGLRenderContext_obj::stencilFuncSeparate( int face,int func,int ref,int mask){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_stencil_func_separate.call(face,func,ref,mask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,stencilFuncSeparate,(void))

Void NativeGLRenderContext_obj::stencilMask( int mask){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_stencil_mask.call(mask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,stencilMask,(void))

Void NativeGLRenderContext_obj::stencilMaskSeparate( int face,int mask){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_stencil_mask_separate.call(face,mask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,stencilMaskSeparate,(void))

Void NativeGLRenderContext_obj::stencilOp( int fail,int zfail,int zpass){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_stencil_op.call(fail,zfail,zpass);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,stencilOp,(void))

Void NativeGLRenderContext_obj::stencilOpSeparate( int face,int fail,int zfail,int zpass){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_stencil_op_separate.call(face,fail,zfail,zpass);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,stencilOpSeparate,(void))

Void NativeGLRenderContext_obj::texImage2D( int target,int level,int internalformat,int width,int height,int border,int format,int type,Float data){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_tex_image_2d.call(target,level,internalformat,width,height,border,format,type,data);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(NativeGLRenderContext_obj,texImage2D,(void))

Void NativeGLRenderContext_obj::texImage3D( int target,int level,int internalformat,int width,int height,int depth,int border,int format,int type,Float data){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC10(NativeGLRenderContext_obj,texImage3D,(void))

Void NativeGLRenderContext_obj::texStorage2D( int target,int level,int internalformat,int width,int height){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(NativeGLRenderContext_obj,texStorage2D,(void))

Void NativeGLRenderContext_obj::texStorage3D( int target,int level,int internalformat,int width,int height,int depth){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(NativeGLRenderContext_obj,texStorage3D,(void))

Void NativeGLRenderContext_obj::texParameterf( int target,int pname,Float param){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_tex_parameterf.call(target,pname,param);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,texParameterf,(void))

Void NativeGLRenderContext_obj::texParameteri( int target,int pname,int param){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_tex_parameteri.call(target,pname,param);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,texParameteri,(void))

Void NativeGLRenderContext_obj::texSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,int type,Float pixels){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_tex_sub_image_2d.call(target,level,xoffset,yoffset,width,height,format,type,pixels);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(NativeGLRenderContext_obj,texSubImage2D,(void))

Void NativeGLRenderContext_obj::texSubImage3D( int target,int level,int xoffset,int yoffset,int zoffset,int width,int height,int depth,int format,int type,Float data){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC11(NativeGLRenderContext_obj,texSubImage3D,(void))

Void NativeGLRenderContext_obj::transformFeedbackVaryings( ::lime::graphics::opengl::GLObject program,Array< ::String > varyings,int bufferMode){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,transformFeedbackVaryings,(void))

Void NativeGLRenderContext_obj::uniform1f( int location,Float v0){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform1f.call(location,v0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,uniform1f,(void))

Void NativeGLRenderContext_obj::uniform1fv( int location,int count,Float v){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform1fv.call(location,count,v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,uniform1fv,(void))

Void NativeGLRenderContext_obj::uniform1i( int location,int v0){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform1i.call(location,v0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,uniform1i,(void))

Void NativeGLRenderContext_obj::uniform1iv( int location,int count,Float v){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform1iv.call(location,count,v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,uniform1iv,(void))

Void NativeGLRenderContext_obj::uniform1ui( int location,int v0){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,uniform1ui,(void))

Void NativeGLRenderContext_obj::uniform1uiv( int location,int count,Float v){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,uniform1uiv,(void))

Void NativeGLRenderContext_obj::uniform2f( int location,Float v0,Float v1){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform2f.call(location,v0,v1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,uniform2f,(void))

Void NativeGLRenderContext_obj::uniform2fv( int location,int count,Float v){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform2fv.call(location,count,v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,uniform2fv,(void))

Void NativeGLRenderContext_obj::uniform2i( int location,int v0,int v1){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform2i.call(location,v0,v1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,uniform2i,(void))

Void NativeGLRenderContext_obj::uniform2iv( int location,int count,Float v){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform2iv.call(location,count,v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,uniform2iv,(void))

Void NativeGLRenderContext_obj::uniform2ui( int location,int v0,int v1){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,uniform2ui,(void))

Void NativeGLRenderContext_obj::uniform2uiv( int location,int count,Float v){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,uniform2uiv,(void))

Void NativeGLRenderContext_obj::uniform3f( int location,Float v0,Float v1,Float v2){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform3f.call(location,v0,v1,v2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,uniform3f,(void))

Void NativeGLRenderContext_obj::uniform3fv( int location,int count,Float v){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform3fv.call(location,count,v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,uniform3fv,(void))

Void NativeGLRenderContext_obj::uniform3i( int location,int v0,int v1,int v2){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform3i.call(location,v0,v1,v2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,uniform3i,(void))

Void NativeGLRenderContext_obj::uniform3iv( int location,int count,Float v){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform3iv.call(location,count,v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,uniform3iv,(void))

Void NativeGLRenderContext_obj::uniform3ui( int location,int v0,int v1,int v2){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,uniform3ui,(void))

Void NativeGLRenderContext_obj::uniform3uiv( int location,int count,Float v){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,uniform3uiv,(void))

Void NativeGLRenderContext_obj::uniform4f( int location,Float v0,Float v1,Float v2,Float v3){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform4f.call(location,v0,v1,v2,v3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(NativeGLRenderContext_obj,uniform4f,(void))

Void NativeGLRenderContext_obj::uniform4fv( int location,int count,Float v){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform4fv.call(location,count,v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,uniform4fv,(void))

Void NativeGLRenderContext_obj::uniform4i( int location,int v0,int v1,int v2,int v3){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform4i.call(location,v0,v1,v2,v3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(NativeGLRenderContext_obj,uniform4i,(void))

Void NativeGLRenderContext_obj::uniform4iv( int location,int count,Float v){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform4iv.call(location,count,v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,uniform4iv,(void))

Void NativeGLRenderContext_obj::uniform4ui( int location,int v0,int v1,int v2,int v3){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(NativeGLRenderContext_obj,uniform4ui,(void))

Void NativeGLRenderContext_obj::uniform4uiv( int location,int count,Float v){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,uniform4uiv,(void))

Void NativeGLRenderContext_obj::uniformBlockBinding( ::lime::graphics::opengl::GLObject program,int uniformBlockIndex,int uniformBlockBinding){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,uniformBlockBinding,(void))

Void NativeGLRenderContext_obj::uniformMatrix2fv( int location,int count,bool transpose,Float v){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform_matrix2fv.call(location,count,transpose,v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,uniformMatrix2fv,(void))

Void NativeGLRenderContext_obj::uniformMatrix2x3fv( int location,int count,bool transpose,Float v){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,uniformMatrix2x3fv,(void))

Void NativeGLRenderContext_obj::uniformMatrix2x4fv( int location,int count,bool transpose,Float v){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,uniformMatrix2x4fv,(void))

Void NativeGLRenderContext_obj::uniformMatrix3fv( int location,int count,bool transpose,Float v){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform_matrix3fv.call(location,count,transpose,v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,uniformMatrix3fv,(void))

Void NativeGLRenderContext_obj::uniformMatrix3x2fv( int location,int count,bool transpose,Float v){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,uniformMatrix3x2fv,(void))

Void NativeGLRenderContext_obj::uniformMatrix3x4fv( int location,int count,bool transpose,Float v){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,uniformMatrix3x4fv,(void))

Void NativeGLRenderContext_obj::uniformMatrix4fv( int location,int count,bool transpose,Float v){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_uniform_matrix4fv.call(location,count,transpose,v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,uniformMatrix4fv,(void))

Void NativeGLRenderContext_obj::uniformMatrix4x2fv( int location,int count,bool transpose,Float v){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,uniformMatrix4x2fv,(void))

Void NativeGLRenderContext_obj::uniformMatrix4x3fv( int location,int count,bool transpose,Float v){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,uniformMatrix4x3fv,(void))

bool NativeGLRenderContext_obj::unmapBuffer( int target){
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,unmapBuffer,return )

Void NativeGLRenderContext_obj::useProgram( ::lime::graphics::opengl::GLObject program){
{
		this->__currentProgram = program;
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_use_program.call((  (((program == null()))) ? int((int)0) : int(program->id) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,useProgram,(void))

Void NativeGLRenderContext_obj::validateProgram( ::lime::graphics::opengl::GLObject program){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_validate_program.call((  (((program == null()))) ? int((int)0) : int(program->id) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,validateProgram,(void))

Void NativeGLRenderContext_obj::vertexAttrib1f( int index,Float v0){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_vertex_attrib1f.call(index,v0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,vertexAttrib1f,(void))

Void NativeGLRenderContext_obj::vertexAttrib1fv( int index,Float v){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_vertex_attrib1fv.call(index,v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,vertexAttrib1fv,(void))

Void NativeGLRenderContext_obj::vertexAttrib2f( int index,Float v0,Float y){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_vertex_attrib2f.call(index,v0,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,vertexAttrib2f,(void))

Void NativeGLRenderContext_obj::vertexAttrib2fv( int index,Float v){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_vertex_attrib2fv.call(index,v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,vertexAttrib2fv,(void))

Void NativeGLRenderContext_obj::vertexAttrib3f( int index,Float v0,Float v1,Float v2){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_vertex_attrib3f.call(index,v0,v1,v2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,vertexAttrib3f,(void))

Void NativeGLRenderContext_obj::vertexAttrib3fv( int index,Float v){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_vertex_attrib3fv.call(index,v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,vertexAttrib3fv,(void))

Void NativeGLRenderContext_obj::vertexAttrib4f( int index,Float v0,Float v1,Float v2,Float v3){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_vertex_attrib4f.call(index,v0,v1,v2,v3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(NativeGLRenderContext_obj,vertexAttrib4f,(void))

Void NativeGLRenderContext_obj::vertexAttrib4fv( int index,Float v){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_vertex_attrib4fv.call(index,v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,vertexAttrib4fv,(void))

Void NativeGLRenderContext_obj::vertexAttribDivisor( int index,int divisor){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,vertexAttribDivisor,(void))

Void NativeGLRenderContext_obj::vertexAttribI4i( int index,int v0,int v1,int v2,int v3){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(NativeGLRenderContext_obj,vertexAttribI4i,(void))

Void NativeGLRenderContext_obj::vertexAttribI4iv( int index,Float value){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,vertexAttribI4iv,(void))

Void NativeGLRenderContext_obj::vertexAttribI4ui( int index,int v0,int v1,int v2,int v3){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(NativeGLRenderContext_obj,vertexAttribI4ui,(void))

Void NativeGLRenderContext_obj::vertexAttribI4uiv( int index,Float value){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeGLRenderContext_obj,vertexAttribI4uiv,(void))

Void NativeGLRenderContext_obj::vertexAttribIPointer( int index,int size,int type,int stride,Float offset){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(NativeGLRenderContext_obj,vertexAttribIPointer,(void))

Void NativeGLRenderContext_obj::vertexAttribPointer( int index,int size,int type,bool normalized,int stride,Float offset){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_vertex_attrib_pointer.call(index,size,type,normalized,stride,offset);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(NativeGLRenderContext_obj,vertexAttribPointer,(void))

Void NativeGLRenderContext_obj::viewport( int x,int y,int width,int height){
{
		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gl_viewport.call(x,y,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NativeGLRenderContext_obj,viewport,(void))

Void NativeGLRenderContext_obj::waitSync( ::lime::graphics::opengl::GLObject sync,int flags,Dynamic timeout){
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NativeGLRenderContext_obj,waitSync,(void))

Void NativeGLRenderContext_obj::__contextLost( ){
{
		this->__isContextLost = true;
		this->__arrayBufferBinding = null();
		this->__elementBufferBinding = null();
		this->__currentProgram = null();
		this->__framebufferBinding = null();
		this->__renderbufferBinding = null();
		this->__texture2DBinding = null();
		this->__textureCubeMapBinding = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeGLRenderContext_obj,__contextLost,(void))

::lime::graphics::opengl::GLObject NativeGLRenderContext_obj::__createObject( int id){
	::lime::graphics::opengl::GLObject tmp = ::lime::graphics::opengl::GLObject_obj::__new(id);
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,__createObject,return )

int NativeGLRenderContext_obj::__getObjectID( ::lime::graphics::opengl::GLObject object){
	bool tmp = (object == null());
	int tmp1;
	if ((tmp)){
		tmp1 = (int)0;
	}
	else{
		tmp1 = object->id;
	}
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeGLRenderContext_obj,__getObjectID,return )

Void NativeGLRenderContext_obj::__initialize( ){
{
		bool tmp = this->__initialized;
		bool tmp1 = !(tmp);
		if ((tmp1)){
			Dynamic tmp2;
			{
				::haxe::ds::StringMap tmp3 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::AMD_compressed_3DC_texture run(){
					{
						::lime::graphics::opengl::ext::AMD_compressed_3DC_texture tmp4 = ::lime::graphics::opengl::ext::AMD_compressed_3DC_texture_obj::__new();
						return tmp4;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp3->set(HX_HCSTRING("AMD_compressed_3DC_texture","\x97","\xaf","\x9a","\x80"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::AMD_compressed_3DC_texture run(){
					{
						::lime::graphics::opengl::ext::AMD_compressed_3DC_texture tmp4 = ::lime::graphics::opengl::ext::AMD_compressed_3DC_texture_obj::__new();
						return tmp4;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp2 =  Dynamic(new _Function_3_2());
			}
			tmp2;
			Dynamic tmp3;
			{
				::haxe::ds::StringMap tmp4 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::AMD_compressed_ATC_texture run(){
					{
						::lime::graphics::opengl::ext::AMD_compressed_ATC_texture tmp5 = ::lime::graphics::opengl::ext::AMD_compressed_ATC_texture_obj::__new();
						return tmp5;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp4->set(HX_HCSTRING("AMD_compressed_ATC_texture","\x15","\x0b","\x6c","\x91"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::AMD_compressed_ATC_texture run(){
					{
						::lime::graphics::opengl::ext::AMD_compressed_ATC_texture tmp5 = ::lime::graphics::opengl::ext::AMD_compressed_ATC_texture_obj::__new();
						return tmp5;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp3 =  Dynamic(new _Function_3_2());
			}
			tmp3;
			Dynamic tmp4;
			{
				::haxe::ds::StringMap tmp5 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::AMD_performance_monitor run(){
					{
						::lime::graphics::opengl::ext::AMD_performance_monitor tmp6 = ::lime::graphics::opengl::ext::AMD_performance_monitor_obj::__new();
						return tmp6;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp5->set(HX_HCSTRING("AMD_performance_monitor","\xe4","\x7a","\x6c","\x36"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::AMD_performance_monitor run(){
					{
						::lime::graphics::opengl::ext::AMD_performance_monitor tmp6 = ::lime::graphics::opengl::ext::AMD_performance_monitor_obj::__new();
						return tmp6;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp4 =  Dynamic(new _Function_3_2());
			}
			tmp4;
			Dynamic tmp5;
			{
				::haxe::ds::StringMap tmp6 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::AMD_program_binary_Z400 run(){
					{
						::lime::graphics::opengl::ext::AMD_program_binary_Z400 tmp7 = ::lime::graphics::opengl::ext::AMD_program_binary_Z400_obj::__new();
						return tmp7;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp6->set(HX_HCSTRING("AMD_program_binary_Z400","\xb6","\x66","\x58","\x28"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::AMD_program_binary_Z400 run(){
					{
						::lime::graphics::opengl::ext::AMD_program_binary_Z400 tmp7 = ::lime::graphics::opengl::ext::AMD_program_binary_Z400_obj::__new();
						return tmp7;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp5 =  Dynamic(new _Function_3_2());
			}
			tmp5;
			Dynamic tmp6;
			{
				::haxe::ds::StringMap tmp7 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::ANGLE_framebuffer_blit run(){
					{
						::lime::graphics::opengl::ext::ANGLE_framebuffer_blit tmp8 = ::lime::graphics::opengl::ext::ANGLE_framebuffer_blit_obj::__new();
						return tmp8;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp7->set(HX_HCSTRING("ANGLE_framebuffer_blit","\x53","\x5d","\xfe","\x07"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::ANGLE_framebuffer_blit run(){
					{
						::lime::graphics::opengl::ext::ANGLE_framebuffer_blit tmp8 = ::lime::graphics::opengl::ext::ANGLE_framebuffer_blit_obj::__new();
						return tmp8;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp6 =  Dynamic(new _Function_3_2());
			}
			tmp6;
			Dynamic tmp7;
			{
				::haxe::ds::StringMap tmp8 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::ANGLE_framebuffer_multisample run(){
					{
						::lime::graphics::opengl::ext::ANGLE_framebuffer_multisample tmp9 = ::lime::graphics::opengl::ext::ANGLE_framebuffer_multisample_obj::__new();
						return tmp9;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp8->set(HX_HCSTRING("ANGLE_framebuffer_multisample","\x05","\x66","\x2b","\xe3"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::ANGLE_framebuffer_multisample run(){
					{
						::lime::graphics::opengl::ext::ANGLE_framebuffer_multisample tmp9 = ::lime::graphics::opengl::ext::ANGLE_framebuffer_multisample_obj::__new();
						return tmp9;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp7 =  Dynamic(new _Function_3_2());
			}
			tmp7;
			Dynamic tmp8;
			{
				::haxe::ds::StringMap tmp9 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::ANGLE_instanced_arrays run(){
					{
						::lime::graphics::opengl::ext::ANGLE_instanced_arrays tmp10 = ::lime::graphics::opengl::ext::ANGLE_instanced_arrays_obj::__new();
						return tmp10;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp9->set(HX_HCSTRING("ANGLE_instanced_arrays","\x56","\x74","\x86","\x10"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::ANGLE_instanced_arrays run(){
					{
						::lime::graphics::opengl::ext::ANGLE_instanced_arrays tmp10 = ::lime::graphics::opengl::ext::ANGLE_instanced_arrays_obj::__new();
						return tmp10;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp8 =  Dynamic(new _Function_3_2());
			}
			tmp8;
			Dynamic tmp9;
			{
				::haxe::ds::StringMap tmp10 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::ANGLE_pack_reverse_row_order run(){
					{
						::lime::graphics::opengl::ext::ANGLE_pack_reverse_row_order tmp11 = ::lime::graphics::opengl::ext::ANGLE_pack_reverse_row_order_obj::__new();
						return tmp11;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp10->set(HX_HCSTRING("ANGLE_pack_reverse_row_order","\xf2","\x1c","\xe0","\x65"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::ANGLE_pack_reverse_row_order run(){
					{
						::lime::graphics::opengl::ext::ANGLE_pack_reverse_row_order tmp11 = ::lime::graphics::opengl::ext::ANGLE_pack_reverse_row_order_obj::__new();
						return tmp11;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp9 =  Dynamic(new _Function_3_2());
			}
			tmp9;
			Dynamic tmp10;
			{
				::haxe::ds::StringMap tmp11 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::ANGLE_texture_compression_dxt3 run(){
					{
						::lime::graphics::opengl::ext::ANGLE_texture_compression_dxt3 tmp12 = ::lime::graphics::opengl::ext::ANGLE_texture_compression_dxt3_obj::__new();
						return tmp12;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp11->set(HX_HCSTRING("ANGLE_texture_compression_dxt3","\xfc","\x60","\xdc","\xb5"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::ANGLE_texture_compression_dxt3 run(){
					{
						::lime::graphics::opengl::ext::ANGLE_texture_compression_dxt3 tmp12 = ::lime::graphics::opengl::ext::ANGLE_texture_compression_dxt3_obj::__new();
						return tmp12;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp10 =  Dynamic(new _Function_3_2());
			}
			tmp10;
			Dynamic tmp11;
			{
				::haxe::ds::StringMap tmp12 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::ANGLE_texture_compression_dxt5 run(){
					{
						::lime::graphics::opengl::ext::ANGLE_texture_compression_dxt5 tmp13 = ::lime::graphics::opengl::ext::ANGLE_texture_compression_dxt5_obj::__new();
						return tmp13;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp12->set(HX_HCSTRING("ANGLE_texture_compression_dxt5","\xfe","\x60","\xdc","\xb5"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::ANGLE_texture_compression_dxt5 run(){
					{
						::lime::graphics::opengl::ext::ANGLE_texture_compression_dxt5 tmp13 = ::lime::graphics::opengl::ext::ANGLE_texture_compression_dxt5_obj::__new();
						return tmp13;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp11 =  Dynamic(new _Function_3_2());
			}
			tmp11;
			Dynamic tmp12;
			{
				::haxe::ds::StringMap tmp13 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::ANGLE_texture_usage run(){
					{
						::lime::graphics::opengl::ext::ANGLE_texture_usage tmp14 = ::lime::graphics::opengl::ext::ANGLE_texture_usage_obj::__new();
						return tmp14;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp13->set(HX_HCSTRING("ANGLE_texture_usage","\xb1","\x62","\x6e","\xc1"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::ANGLE_texture_usage run(){
					{
						::lime::graphics::opengl::ext::ANGLE_texture_usage tmp14 = ::lime::graphics::opengl::ext::ANGLE_texture_usage_obj::__new();
						return tmp14;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp12 =  Dynamic(new _Function_3_2());
			}
			tmp12;
			Dynamic tmp13;
			{
				::haxe::ds::StringMap tmp14 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::ANGLE_translated_shader_source run(){
					{
						::lime::graphics::opengl::ext::ANGLE_translated_shader_source tmp15 = ::lime::graphics::opengl::ext::ANGLE_translated_shader_source_obj::__new();
						return tmp15;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp14->set(HX_HCSTRING("ANGLE_translated_shader_source","\x58","\x8f","\x67","\x10"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::ANGLE_translated_shader_source run(){
					{
						::lime::graphics::opengl::ext::ANGLE_translated_shader_source tmp15 = ::lime::graphics::opengl::ext::ANGLE_translated_shader_source_obj::__new();
						return tmp15;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp13 =  Dynamic(new _Function_3_2());
			}
			tmp13;
			Dynamic tmp14;
			{
				::haxe::ds::StringMap tmp15 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::APPLE_copy_texture_levels run(){
					{
						::lime::graphics::opengl::ext::APPLE_copy_texture_levels tmp16 = ::lime::graphics::opengl::ext::APPLE_copy_texture_levels_obj::__new();
						return tmp16;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp15->set(HX_HCSTRING("APPLE_copy_texture_levels","\x58","\x36","\xee","\xe5"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::APPLE_copy_texture_levels run(){
					{
						::lime::graphics::opengl::ext::APPLE_copy_texture_levels tmp16 = ::lime::graphics::opengl::ext::APPLE_copy_texture_levels_obj::__new();
						return tmp16;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp14 =  Dynamic(new _Function_3_2());
			}
			tmp14;
			Dynamic tmp15;
			{
				::haxe::ds::StringMap tmp16 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::APPLE_framebuffer_multisample run(){
					{
						::lime::graphics::opengl::ext::APPLE_framebuffer_multisample tmp17 = ::lime::graphics::opengl::ext::APPLE_framebuffer_multisample_obj::__new();
						return tmp17;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp16->set(HX_HCSTRING("APPLE_framebuffer_multisample","\x8c","\xc4","\x4f","\x00"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::APPLE_framebuffer_multisample run(){
					{
						::lime::graphics::opengl::ext::APPLE_framebuffer_multisample tmp17 = ::lime::graphics::opengl::ext::APPLE_framebuffer_multisample_obj::__new();
						return tmp17;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp15 =  Dynamic(new _Function_3_2());
			}
			tmp15;
			Dynamic tmp16;
			{
				::haxe::ds::StringMap tmp17 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::APPLE_rgb_422 run(){
					{
						::lime::graphics::opengl::ext::APPLE_rgb_422 tmp18 = ::lime::graphics::opengl::ext::APPLE_rgb_422_obj::__new();
						return tmp18;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp17->set(HX_HCSTRING("APPLE_rgb_422","\x3d","\xac","\xa1","\x11"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::APPLE_rgb_422 run(){
					{
						::lime::graphics::opengl::ext::APPLE_rgb_422 tmp18 = ::lime::graphics::opengl::ext::APPLE_rgb_422_obj::__new();
						return tmp18;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp16 =  Dynamic(new _Function_3_2());
			}
			tmp16;
			Dynamic tmp17;
			{
				::haxe::ds::StringMap tmp18 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::APPLE_sync run(){
					{
						::lime::graphics::opengl::ext::APPLE_sync tmp19 = ::lime::graphics::opengl::ext::APPLE_sync_obj::__new();
						return tmp19;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp18->set(HX_HCSTRING("APPLE_sync","\xc0","\xe6","\x8c","\x8c"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::APPLE_sync run(){
					{
						::lime::graphics::opengl::ext::APPLE_sync tmp19 = ::lime::graphics::opengl::ext::APPLE_sync_obj::__new();
						return tmp19;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp17 =  Dynamic(new _Function_3_2());
			}
			tmp17;
			Dynamic tmp18;
			{
				::haxe::ds::StringMap tmp19 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::APPLE_texture_format_BGRA8888 run(){
					{
						::lime::graphics::opengl::ext::APPLE_texture_format_BGRA8888 tmp20 = ::lime::graphics::opengl::ext::APPLE_texture_format_BGRA8888_obj::__new();
						return tmp20;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp19->set(HX_HCSTRING("APPLE_texture_format_BGRA8888","\x13","\x8a","\x88","\xe2"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::APPLE_texture_format_BGRA8888 run(){
					{
						::lime::graphics::opengl::ext::APPLE_texture_format_BGRA8888 tmp20 = ::lime::graphics::opengl::ext::APPLE_texture_format_BGRA8888_obj::__new();
						return tmp20;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp18 =  Dynamic(new _Function_3_2());
			}
			tmp18;
			Dynamic tmp19;
			{
				::haxe::ds::StringMap tmp20 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::APPLE_texture_max_level run(){
					{
						::lime::graphics::opengl::ext::APPLE_texture_max_level tmp21 = ::lime::graphics::opengl::ext::APPLE_texture_max_level_obj::__new();
						return tmp21;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp20->set(HX_HCSTRING("APPLE_texture_max_level","\x40","\x37","\x3d","\xbe"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::APPLE_texture_max_level run(){
					{
						::lime::graphics::opengl::ext::APPLE_texture_max_level tmp21 = ::lime::graphics::opengl::ext::APPLE_texture_max_level_obj::__new();
						return tmp21;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp19 =  Dynamic(new _Function_3_2());
			}
			tmp19;
			Dynamic tmp20;
			{
				::haxe::ds::StringMap tmp21 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::ARM_mali_program_binary run(){
					{
						::lime::graphics::opengl::ext::ARM_mali_program_binary tmp22 = ::lime::graphics::opengl::ext::ARM_mali_program_binary_obj::__new();
						return tmp22;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp21->set(HX_HCSTRING("ARM_mali_program_binary","\xc7","\x33","\xf6","\x92"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::ARM_mali_program_binary run(){
					{
						::lime::graphics::opengl::ext::ARM_mali_program_binary tmp22 = ::lime::graphics::opengl::ext::ARM_mali_program_binary_obj::__new();
						return tmp22;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp20 =  Dynamic(new _Function_3_2());
			}
			tmp20;
			Dynamic tmp21;
			{
				::haxe::ds::StringMap tmp22 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::ARM_mali_shader_binary run(){
					{
						::lime::graphics::opengl::ext::ARM_mali_shader_binary tmp23 = ::lime::graphics::opengl::ext::ARM_mali_shader_binary_obj::__new();
						return tmp23;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp22->set(HX_HCSTRING("ARM_mali_shader_binary","\x50","\x43","\x81","\xcb"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::ARM_mali_shader_binary run(){
					{
						::lime::graphics::opengl::ext::ARM_mali_shader_binary tmp23 = ::lime::graphics::opengl::ext::ARM_mali_shader_binary_obj::__new();
						return tmp23;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp21 =  Dynamic(new _Function_3_2());
			}
			tmp21;
			Dynamic tmp22;
			{
				::haxe::ds::StringMap tmp23 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::ARM_rgba8 run(){
					{
						::lime::graphics::opengl::ext::ARM_rgba8 tmp24 = ::lime::graphics::opengl::ext::ARM_rgba8_obj::__new();
						return tmp24;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp23->set(HX_HCSTRING("ARM_rgba8","\x81","\x03","\x5e","\x47"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::ARM_rgba8 run(){
					{
						::lime::graphics::opengl::ext::ARM_rgba8 tmp24 = ::lime::graphics::opengl::ext::ARM_rgba8_obj::__new();
						return tmp24;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp22 =  Dynamic(new _Function_3_2());
			}
			tmp22;
			Dynamic tmp23;
			{
				::haxe::ds::StringMap tmp24 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::DMP_shader_binary run(){
					{
						::lime::graphics::opengl::ext::DMP_shader_binary tmp25 = ::lime::graphics::opengl::ext::DMP_shader_binary_obj::__new();
						return tmp25;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp24->set(HX_HCSTRING("DMP_shader_binary","\x43","\x70","\x06","\x89"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::DMP_shader_binary run(){
					{
						::lime::graphics::opengl::ext::DMP_shader_binary tmp25 = ::lime::graphics::opengl::ext::DMP_shader_binary_obj::__new();
						return tmp25;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp23 =  Dynamic(new _Function_3_2());
			}
			tmp23;
			Dynamic tmp24;
			{
				::haxe::ds::StringMap tmp25 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_bgra run(){
					{
						::lime::graphics::opengl::ext::EXT_bgra tmp26 = ::lime::graphics::opengl::ext::EXT_bgra_obj::__new();
						return tmp26;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp25->set(HX_HCSTRING("EXT_bgra","\x72","\x74","\x1a","\x40"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_bgra run(){
					{
						::lime::graphics::opengl::ext::EXT_bgra tmp26 = ::lime::graphics::opengl::ext::EXT_bgra_obj::__new();
						return tmp26;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp24 =  Dynamic(new _Function_3_2());
			}
			tmp24;
			Dynamic tmp25;
			{
				::haxe::ds::StringMap tmp26 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_blend_minmax run(){
					{
						::lime::graphics::opengl::ext::EXT_blend_minmax tmp27 = ::lime::graphics::opengl::ext::EXT_blend_minmax_obj::__new();
						return tmp27;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp26->set(HX_HCSTRING("EXT_blend_minmax","\x7e","\xf3","\x2e","\xcd"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_blend_minmax run(){
					{
						::lime::graphics::opengl::ext::EXT_blend_minmax tmp27 = ::lime::graphics::opengl::ext::EXT_blend_minmax_obj::__new();
						return tmp27;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp25 =  Dynamic(new _Function_3_2());
			}
			tmp25;
			Dynamic tmp26;
			{
				::haxe::ds::StringMap tmp27 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_color_buffer_float run(){
					{
						::lime::graphics::opengl::ext::EXT_color_buffer_float tmp28 = ::lime::graphics::opengl::ext::EXT_color_buffer_float_obj::__new();
						return tmp28;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp27->set(HX_HCSTRING("EXT_color_buffer_float","\xb7","\x19","\x0b","\xdd"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_color_buffer_float run(){
					{
						::lime::graphics::opengl::ext::EXT_color_buffer_float tmp28 = ::lime::graphics::opengl::ext::EXT_color_buffer_float_obj::__new();
						return tmp28;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp26 =  Dynamic(new _Function_3_2());
			}
			tmp26;
			Dynamic tmp27;
			{
				::haxe::ds::StringMap tmp28 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_color_buffer_half_float run(){
					{
						::lime::graphics::opengl::ext::EXT_color_buffer_half_float tmp29 = ::lime::graphics::opengl::ext::EXT_color_buffer_half_float_obj::__new();
						return tmp29;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp28->set(HX_HCSTRING("EXT_color_buffer_half_float","\xd5","\xe8","\x0a","\x44"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_color_buffer_half_float run(){
					{
						::lime::graphics::opengl::ext::EXT_color_buffer_half_float tmp29 = ::lime::graphics::opengl::ext::EXT_color_buffer_half_float_obj::__new();
						return tmp29;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp27 =  Dynamic(new _Function_3_2());
			}
			tmp27;
			Dynamic tmp28;
			{
				::haxe::ds::StringMap tmp29 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_debug_label run(){
					{
						::lime::graphics::opengl::ext::EXT_debug_label tmp30 = ::lime::graphics::opengl::ext::EXT_debug_label_obj::__new();
						return tmp30;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp29->set(HX_HCSTRING("EXT_debug_label","\xca","\x3b","\x0e","\x9c"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_debug_label run(){
					{
						::lime::graphics::opengl::ext::EXT_debug_label tmp30 = ::lime::graphics::opengl::ext::EXT_debug_label_obj::__new();
						return tmp30;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp28 =  Dynamic(new _Function_3_2());
			}
			tmp28;
			Dynamic tmp29;
			{
				::haxe::ds::StringMap tmp30 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_debug_marker run(){
					{
						::lime::graphics::opengl::ext::EXT_debug_marker tmp31 = ::lime::graphics::opengl::ext::EXT_debug_marker_obj::__new();
						return tmp31;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp30->set(HX_HCSTRING("EXT_debug_marker","\x24","\x63","\x59","\x61"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_debug_marker run(){
					{
						::lime::graphics::opengl::ext::EXT_debug_marker tmp31 = ::lime::graphics::opengl::ext::EXT_debug_marker_obj::__new();
						return tmp31;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp29 =  Dynamic(new _Function_3_2());
			}
			tmp29;
			Dynamic tmp30;
			{
				::haxe::ds::StringMap tmp31 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_discard_framebuffer run(){
					{
						::lime::graphics::opengl::ext::EXT_discard_framebuffer tmp32 = ::lime::graphics::opengl::ext::EXT_discard_framebuffer_obj::__new();
						return tmp32;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp31->set(HX_HCSTRING("EXT_discard_framebuffer","\x0e","\xf8","\x79","\xf7"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_discard_framebuffer run(){
					{
						::lime::graphics::opengl::ext::EXT_discard_framebuffer tmp32 = ::lime::graphics::opengl::ext::EXT_discard_framebuffer_obj::__new();
						return tmp32;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp30 =  Dynamic(new _Function_3_2());
			}
			tmp30;
			Dynamic tmp31;
			{
				::haxe::ds::StringMap tmp32 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_map_buffer_range run(){
					{
						::lime::graphics::opengl::ext::EXT_map_buffer_range tmp33 = ::lime::graphics::opengl::ext::EXT_map_buffer_range_obj::__new();
						return tmp33;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp32->set(HX_HCSTRING("EXT_map_buffer_range","\x7f","\x25","\x48","\xf8"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_map_buffer_range run(){
					{
						::lime::graphics::opengl::ext::EXT_map_buffer_range tmp33 = ::lime::graphics::opengl::ext::EXT_map_buffer_range_obj::__new();
						return tmp33;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp31 =  Dynamic(new _Function_3_2());
			}
			tmp31;
			Dynamic tmp32;
			{
				::haxe::ds::StringMap tmp33 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_multi_draw_arrays run(){
					{
						::lime::graphics::opengl::ext::EXT_multi_draw_arrays tmp34 = ::lime::graphics::opengl::ext::EXT_multi_draw_arrays_obj::__new();
						return tmp34;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp33->set(HX_HCSTRING("EXT_multi_draw_arrays","\x51","\xb2","\x0b","\x91"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_multi_draw_arrays run(){
					{
						::lime::graphics::opengl::ext::EXT_multi_draw_arrays tmp34 = ::lime::graphics::opengl::ext::EXT_multi_draw_arrays_obj::__new();
						return tmp34;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp32 =  Dynamic(new _Function_3_2());
			}
			tmp32;
			Dynamic tmp33;
			{
				::haxe::ds::StringMap tmp34 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_multisampled_render_to_texture run(){
					{
						::lime::graphics::opengl::ext::EXT_multisampled_render_to_texture tmp35 = ::lime::graphics::opengl::ext::EXT_multisampled_render_to_texture_obj::__new();
						return tmp35;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp34->set(HX_HCSTRING("EXT_multisampled_render_to_texture","\x40","\xd2","\x98","\x03"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_multisampled_render_to_texture run(){
					{
						::lime::graphics::opengl::ext::EXT_multisampled_render_to_texture tmp35 = ::lime::graphics::opengl::ext::EXT_multisampled_render_to_texture_obj::__new();
						return tmp35;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp33 =  Dynamic(new _Function_3_2());
			}
			tmp33;
			Dynamic tmp34;
			{
				::haxe::ds::StringMap tmp35 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_multiview_draw_buffers run(){
					{
						::lime::graphics::opengl::ext::EXT_multiview_draw_buffers tmp36 = ::lime::graphics::opengl::ext::EXT_multiview_draw_buffers_obj::__new();
						return tmp36;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp35->set(HX_HCSTRING("EXT_multiview_draw_buffers","\xf7","\xb6","\xe5","\xc5"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_multiview_draw_buffers run(){
					{
						::lime::graphics::opengl::ext::EXT_multiview_draw_buffers tmp36 = ::lime::graphics::opengl::ext::EXT_multiview_draw_buffers_obj::__new();
						return tmp36;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp34 =  Dynamic(new _Function_3_2());
			}
			tmp34;
			Dynamic tmp35;
			{
				::haxe::ds::StringMap tmp36 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_occlusion_query_boolean run(){
					{
						::lime::graphics::opengl::ext::EXT_occlusion_query_boolean tmp37 = ::lime::graphics::opengl::ext::EXT_occlusion_query_boolean_obj::__new();
						return tmp37;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp36->set(HX_HCSTRING("EXT_occlusion_query_boolean","\x81","\xa7","\x94","\x3d"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_occlusion_query_boolean run(){
					{
						::lime::graphics::opengl::ext::EXT_occlusion_query_boolean tmp37 = ::lime::graphics::opengl::ext::EXT_occlusion_query_boolean_obj::__new();
						return tmp37;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp35 =  Dynamic(new _Function_3_2());
			}
			tmp35;
			Dynamic tmp36;
			{
				::haxe::ds::StringMap tmp37 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_packed_depth_stencil run(){
					{
						::lime::graphics::opengl::ext::EXT_packed_depth_stencil tmp38 = ::lime::graphics::opengl::ext::EXT_packed_depth_stencil_obj::__new();
						return tmp38;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp37->set(HX_HCSTRING("EXT_packed_depth_stencil","\xf7","\x88","\xe3","\x09"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_packed_depth_stencil run(){
					{
						::lime::graphics::opengl::ext::EXT_packed_depth_stencil tmp38 = ::lime::graphics::opengl::ext::EXT_packed_depth_stencil_obj::__new();
						return tmp38;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp36 =  Dynamic(new _Function_3_2());
			}
			tmp36;
			Dynamic tmp37;
			{
				::haxe::ds::StringMap tmp38 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_read_format_bgra run(){
					{
						::lime::graphics::opengl::ext::EXT_read_format_bgra tmp39 = ::lime::graphics::opengl::ext::EXT_read_format_bgra_obj::__new();
						return tmp39;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp38->set(HX_HCSTRING("EXT_read_format_bgra","\x11","\xc1","\x96","\xf4"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_read_format_bgra run(){
					{
						::lime::graphics::opengl::ext::EXT_read_format_bgra tmp39 = ::lime::graphics::opengl::ext::EXT_read_format_bgra_obj::__new();
						return tmp39;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp37 =  Dynamic(new _Function_3_2());
			}
			tmp37;
			Dynamic tmp38;
			{
				::haxe::ds::StringMap tmp39 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_robustness run(){
					{
						::lime::graphics::opengl::ext::EXT_robustness tmp40 = ::lime::graphics::opengl::ext::EXT_robustness_obj::__new();
						return tmp40;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp39->set(HX_HCSTRING("EXT_robustness","\xc6","\x8a","\x39","\xe5"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_robustness run(){
					{
						::lime::graphics::opengl::ext::EXT_robustness tmp40 = ::lime::graphics::opengl::ext::EXT_robustness_obj::__new();
						return tmp40;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp38 =  Dynamic(new _Function_3_2());
			}
			tmp38;
			Dynamic tmp39;
			{
				::haxe::ds::StringMap tmp40 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_sRGB run(){
					{
						::lime::graphics::opengl::ext::EXT_sRGB tmp41 = ::lime::graphics::opengl::ext::EXT_sRGB_obj::__new();
						return tmp41;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp40->set(HX_HCSTRING("EXT_sRGB","\x18","\x00","\x47","\x4b"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_sRGB run(){
					{
						::lime::graphics::opengl::ext::EXT_sRGB tmp41 = ::lime::graphics::opengl::ext::EXT_sRGB_obj::__new();
						return tmp41;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp39 =  Dynamic(new _Function_3_2());
			}
			tmp39;
			Dynamic tmp40;
			{
				::haxe::ds::StringMap tmp41 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_separate_shader_objects run(){
					{
						::lime::graphics::opengl::ext::EXT_separate_shader_objects tmp42 = ::lime::graphics::opengl::ext::EXT_separate_shader_objects_obj::__new();
						return tmp42;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp41->set(HX_HCSTRING("EXT_separate_shader_objects","\x18","\x2e","\xeb","\x43"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_separate_shader_objects run(){
					{
						::lime::graphics::opengl::ext::EXT_separate_shader_objects tmp42 = ::lime::graphics::opengl::ext::EXT_separate_shader_objects_obj::__new();
						return tmp42;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp40 =  Dynamic(new _Function_3_2());
			}
			tmp40;
			Dynamic tmp41;
			{
				::haxe::ds::StringMap tmp42 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_shader_framebuffer_fetch run(){
					{
						::lime::graphics::opengl::ext::EXT_shader_framebuffer_fetch tmp43 = ::lime::graphics::opengl::ext::EXT_shader_framebuffer_fetch_obj::__new();
						return tmp43;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp42->set(HX_HCSTRING("EXT_shader_framebuffer_fetch","\x0c","\x04","\x5a","\x6d"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_shader_framebuffer_fetch run(){
					{
						::lime::graphics::opengl::ext::EXT_shader_framebuffer_fetch tmp43 = ::lime::graphics::opengl::ext::EXT_shader_framebuffer_fetch_obj::__new();
						return tmp43;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp41 =  Dynamic(new _Function_3_2());
			}
			tmp41;
			Dynamic tmp42;
			{
				::haxe::ds::StringMap tmp43 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_shader_texture_lod run(){
					{
						::lime::graphics::opengl::ext::EXT_shader_texture_lod tmp44 = ::lime::graphics::opengl::ext::EXT_shader_texture_lod_obj::__new();
						return tmp44;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp43->set(HX_HCSTRING("EXT_shader_texture_lod","\xc1","\x4c","\x48","\x65"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_shader_texture_lod run(){
					{
						::lime::graphics::opengl::ext::EXT_shader_texture_lod tmp44 = ::lime::graphics::opengl::ext::EXT_shader_texture_lod_obj::__new();
						return tmp44;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp42 =  Dynamic(new _Function_3_2());
			}
			tmp42;
			Dynamic tmp43;
			{
				::haxe::ds::StringMap tmp44 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_shadow_samplers run(){
					{
						::lime::graphics::opengl::ext::EXT_shadow_samplers tmp45 = ::lime::graphics::opengl::ext::EXT_shadow_samplers_obj::__new();
						return tmp45;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp44->set(HX_HCSTRING("EXT_shadow_samplers","\xec","\x92","\x50","\x09"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_shadow_samplers run(){
					{
						::lime::graphics::opengl::ext::EXT_shadow_samplers tmp45 = ::lime::graphics::opengl::ext::EXT_shadow_samplers_obj::__new();
						return tmp45;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp43 =  Dynamic(new _Function_3_2());
			}
			tmp43;
			Dynamic tmp44;
			{
				::haxe::ds::StringMap tmp45 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_texture_compression_dxt1 run(){
					{
						::lime::graphics::opengl::ext::EXT_texture_compression_dxt1 tmp46 = ::lime::graphics::opengl::ext::EXT_texture_compression_dxt1_obj::__new();
						return tmp46;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp45->set(HX_HCSTRING("EXT_texture_compression_dxt1","\x6c","\xae","\xf4","\x76"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_texture_compression_dxt1 run(){
					{
						::lime::graphics::opengl::ext::EXT_texture_compression_dxt1 tmp46 = ::lime::graphics::opengl::ext::EXT_texture_compression_dxt1_obj::__new();
						return tmp46;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp44 =  Dynamic(new _Function_3_2());
			}
			tmp44;
			Dynamic tmp45;
			{
				::haxe::ds::StringMap tmp46 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_texture_compression_s3tc run(){
					{
						::lime::graphics::opengl::ext::EXT_texture_compression_s3tc tmp47 = ::lime::graphics::opengl::ext::EXT_texture_compression_s3tc_obj::__new();
						return tmp47;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp46->set(HX_HCSTRING("EXT_texture_compression_s3tc","\x6a","\x86","\xaa","\x80"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_texture_compression_s3tc run(){
					{
						::lime::graphics::opengl::ext::EXT_texture_compression_s3tc tmp47 = ::lime::graphics::opengl::ext::EXT_texture_compression_s3tc_obj::__new();
						return tmp47;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp45 =  Dynamic(new _Function_3_2());
			}
			tmp45;
			Dynamic tmp46;
			{
				::haxe::ds::StringMap tmp47 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_texture_filter_anisotropic run(){
					{
						::lime::graphics::opengl::ext::EXT_texture_filter_anisotropic tmp48 = ::lime::graphics::opengl::ext::EXT_texture_filter_anisotropic_obj::__new();
						return tmp48;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp47->set(HX_HCSTRING("EXT_texture_filter_anisotropic","\x4c","\x4c","\x32","\x3d"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_texture_filter_anisotropic run(){
					{
						::lime::graphics::opengl::ext::EXT_texture_filter_anisotropic tmp48 = ::lime::graphics::opengl::ext::EXT_texture_filter_anisotropic_obj::__new();
						return tmp48;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp46 =  Dynamic(new _Function_3_2());
			}
			tmp46;
			Dynamic tmp47;
			{
				::haxe::ds::StringMap tmp48 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_texture_format_BGRA8888 run(){
					{
						::lime::graphics::opengl::ext::EXT_texture_format_BGRA8888 tmp49 = ::lime::graphics::opengl::ext::EXT_texture_format_BGRA8888_obj::__new();
						return tmp49;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp48->set(HX_HCSTRING("EXT_texture_format_BGRA8888","\x5a","\xd2","\xbd","\xb2"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_texture_format_BGRA8888 run(){
					{
						::lime::graphics::opengl::ext::EXT_texture_format_BGRA8888 tmp49 = ::lime::graphics::opengl::ext::EXT_texture_format_BGRA8888_obj::__new();
						return tmp49;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp47 =  Dynamic(new _Function_3_2());
			}
			tmp47;
			Dynamic tmp48;
			{
				::haxe::ds::StringMap tmp49 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_texture_rg run(){
					{
						::lime::graphics::opengl::ext::EXT_texture_rg tmp50 = ::lime::graphics::opengl::ext::EXT_texture_rg_obj::__new();
						return tmp50;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp49->set(HX_HCSTRING("EXT_texture_rg","\x17","\xce","\x12","\x89"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_texture_rg run(){
					{
						::lime::graphics::opengl::ext::EXT_texture_rg tmp50 = ::lime::graphics::opengl::ext::EXT_texture_rg_obj::__new();
						return tmp50;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp48 =  Dynamic(new _Function_3_2());
			}
			tmp48;
			Dynamic tmp49;
			{
				::haxe::ds::StringMap tmp50 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_texture_storage run(){
					{
						::lime::graphics::opengl::ext::EXT_texture_storage tmp51 = ::lime::graphics::opengl::ext::EXT_texture_storage_obj::__new();
						return tmp51;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp50->set(HX_HCSTRING("EXT_texture_storage","\x99","\x91","\x8f","\x9d"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_texture_storage run(){
					{
						::lime::graphics::opengl::ext::EXT_texture_storage tmp51 = ::lime::graphics::opengl::ext::EXT_texture_storage_obj::__new();
						return tmp51;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp49 =  Dynamic(new _Function_3_2());
			}
			tmp49;
			Dynamic tmp50;
			{
				::haxe::ds::StringMap tmp51 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_texture_type_2_10_10_10_REV run(){
					{
						::lime::graphics::opengl::ext::EXT_texture_type_2_10_10_10_REV tmp52 = ::lime::graphics::opengl::ext::EXT_texture_type_2_10_10_10_REV_obj::__new();
						return tmp52;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp51->set(HX_HCSTRING("EXT_texture_type_2_10_10_10_REV","\x93","\x7e","\x34","\xb8"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_texture_type_2_10_10_10_REV run(){
					{
						::lime::graphics::opengl::ext::EXT_texture_type_2_10_10_10_REV tmp52 = ::lime::graphics::opengl::ext::EXT_texture_type_2_10_10_10_REV_obj::__new();
						return tmp52;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp50 =  Dynamic(new _Function_3_2());
			}
			tmp50;
			Dynamic tmp51;
			{
				::haxe::ds::StringMap tmp52 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_unpack_subimage run(){
					{
						::lime::graphics::opengl::ext::EXT_unpack_subimage tmp53 = ::lime::graphics::opengl::ext::EXT_unpack_subimage_obj::__new();
						return tmp53;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp52->set(HX_HCSTRING("EXT_unpack_subimage","\x4a","\x96","\x0e","\xd9"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::EXT_unpack_subimage run(){
					{
						::lime::graphics::opengl::ext::EXT_unpack_subimage tmp53 = ::lime::graphics::opengl::ext::EXT_unpack_subimage_obj::__new();
						return tmp53;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp51 =  Dynamic(new _Function_3_2());
			}
			tmp51;
			Dynamic tmp52;
			{
				::haxe::ds::StringMap tmp53 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::FJ_shader_binary_GCCSO run(){
					{
						::lime::graphics::opengl::ext::FJ_shader_binary_GCCSO tmp54 = ::lime::graphics::opengl::ext::FJ_shader_binary_GCCSO_obj::__new();
						return tmp54;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp53->set(HX_HCSTRING("FJ_shader_binary_GCCSO","\xe4","\xa3","\xc9","\x4b"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::FJ_shader_binary_GCCSO run(){
					{
						::lime::graphics::opengl::ext::FJ_shader_binary_GCCSO tmp54 = ::lime::graphics::opengl::ext::FJ_shader_binary_GCCSO_obj::__new();
						return tmp54;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp52 =  Dynamic(new _Function_3_2());
			}
			tmp52;
			Dynamic tmp53;
			{
				::haxe::ds::StringMap tmp54 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::IMG_multisampled_render_to_texture run(){
					{
						::lime::graphics::opengl::ext::IMG_multisampled_render_to_texture tmp55 = ::lime::graphics::opengl::ext::IMG_multisampled_render_to_texture_obj::__new();
						return tmp55;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp54->set(HX_HCSTRING("IMG_multisampled_render_to_texture","\x1e","\x8d","\x48","\x50"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::IMG_multisampled_render_to_texture run(){
					{
						::lime::graphics::opengl::ext::IMG_multisampled_render_to_texture tmp55 = ::lime::graphics::opengl::ext::IMG_multisampled_render_to_texture_obj::__new();
						return tmp55;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp53 =  Dynamic(new _Function_3_2());
			}
			tmp53;
			Dynamic tmp54;
			{
				::haxe::ds::StringMap tmp55 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::IMG_program_binary run(){
					{
						::lime::graphics::opengl::ext::IMG_program_binary tmp56 = ::lime::graphics::opengl::ext::IMG_program_binary_obj::__new();
						return tmp56;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp55->set(HX_HCSTRING("IMG_program_binary","\xb8","\x93","\x3a","\x05"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::IMG_program_binary run(){
					{
						::lime::graphics::opengl::ext::IMG_program_binary tmp56 = ::lime::graphics::opengl::ext::IMG_program_binary_obj::__new();
						return tmp56;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp54 =  Dynamic(new _Function_3_2());
			}
			tmp54;
			Dynamic tmp55;
			{
				::haxe::ds::StringMap tmp56 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::IMG_read_format run(){
					{
						::lime::graphics::opengl::ext::IMG_read_format tmp57 = ::lime::graphics::opengl::ext::IMG_read_format_obj::__new();
						return tmp57;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp56->set(HX_HCSTRING("IMG_read_format","\xa4","\x2a","\xef","\xb9"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::IMG_read_format run(){
					{
						::lime::graphics::opengl::ext::IMG_read_format tmp57 = ::lime::graphics::opengl::ext::IMG_read_format_obj::__new();
						return tmp57;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp55 =  Dynamic(new _Function_3_2());
			}
			tmp55;
			Dynamic tmp56;
			{
				::haxe::ds::StringMap tmp57 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::IMG_shader_binary run(){
					{
						::lime::graphics::opengl::ext::IMG_shader_binary tmp58 = ::lime::graphics::opengl::ext::IMG_shader_binary_obj::__new();
						return tmp58;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp57->set(HX_HCSTRING("IMG_shader_binary","\x7f","\xec","\xf0","\xda"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::IMG_shader_binary run(){
					{
						::lime::graphics::opengl::ext::IMG_shader_binary tmp58 = ::lime::graphics::opengl::ext::IMG_shader_binary_obj::__new();
						return tmp58;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp56 =  Dynamic(new _Function_3_2());
			}
			tmp56;
			Dynamic tmp57;
			{
				::haxe::ds::StringMap tmp58 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::IMG_texture_compression_pvrtc run(){
					{
						::lime::graphics::opengl::ext::IMG_texture_compression_pvrtc tmp59 = ::lime::graphics::opengl::ext::IMG_texture_compression_pvrtc_obj::__new();
						return tmp59;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp58->set(HX_HCSTRING("IMG_texture_compression_pvrtc","\x02","\x61","\x85","\xd1"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::IMG_texture_compression_pvrtc run(){
					{
						::lime::graphics::opengl::ext::IMG_texture_compression_pvrtc tmp59 = ::lime::graphics::opengl::ext::IMG_texture_compression_pvrtc_obj::__new();
						return tmp59;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp57 =  Dynamic(new _Function_3_2());
			}
			tmp57;
			Dynamic tmp58;
			{
				::haxe::ds::StringMap tmp59 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::KHR_debug run(){
					{
						::lime::graphics::opengl::ext::KHR_debug tmp60 = ::lime::graphics::opengl::ext::KHR_debug_obj::__new();
						return tmp60;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp59->set(HX_HCSTRING("KHR_debug","\x69","\x7f","\xd0","\x07"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::KHR_debug run(){
					{
						::lime::graphics::opengl::ext::KHR_debug tmp60 = ::lime::graphics::opengl::ext::KHR_debug_obj::__new();
						return tmp60;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp58 =  Dynamic(new _Function_3_2());
			}
			tmp58;
			Dynamic tmp59;
			{
				::haxe::ds::StringMap tmp60 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr run(){
					{
						::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr tmp61 = ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr_obj::__new();
						return tmp61;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp60->set(HX_HCSTRING("KHR_texture_compression_astc_ldr","\x63","\x29","\xb6","\xea"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr run(){
					{
						::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr tmp61 = ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr_obj::__new();
						return tmp61;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp59 =  Dynamic(new _Function_3_2());
			}
			tmp59;
			Dynamic tmp60;
			{
				::haxe::ds::StringMap tmp61 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::NV_coverage_sample run(){
					{
						::lime::graphics::opengl::ext::NV_coverage_sample tmp62 = ::lime::graphics::opengl::ext::NV_coverage_sample_obj::__new();
						return tmp62;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp61->set(HX_HCSTRING("NV_coverage_sample","\xaa","\x83","\xfd","\xdb"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::NV_coverage_sample run(){
					{
						::lime::graphics::opengl::ext::NV_coverage_sample tmp62 = ::lime::graphics::opengl::ext::NV_coverage_sample_obj::__new();
						return tmp62;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp60 =  Dynamic(new _Function_3_2());
			}
			tmp60;
			Dynamic tmp61;
			{
				::haxe::ds::StringMap tmp62 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::NV_depth_nonlinear run(){
					{
						::lime::graphics::opengl::ext::NV_depth_nonlinear tmp63 = ::lime::graphics::opengl::ext::NV_depth_nonlinear_obj::__new();
						return tmp63;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp62->set(HX_HCSTRING("NV_depth_nonlinear","\xff","\x77","\x4d","\xc4"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::NV_depth_nonlinear run(){
					{
						::lime::graphics::opengl::ext::NV_depth_nonlinear tmp63 = ::lime::graphics::opengl::ext::NV_depth_nonlinear_obj::__new();
						return tmp63;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp61 =  Dynamic(new _Function_3_2());
			}
			tmp61;
			Dynamic tmp62;
			{
				::haxe::ds::StringMap tmp63 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::NV_draw_buffers run(){
					{
						::lime::graphics::opengl::ext::NV_draw_buffers tmp64 = ::lime::graphics::opengl::ext::NV_draw_buffers_obj::__new();
						return tmp64;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp63->set(HX_HCSTRING("NV_draw_buffers","\x8f","\x0e","\xde","\x94"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::NV_draw_buffers run(){
					{
						::lime::graphics::opengl::ext::NV_draw_buffers tmp64 = ::lime::graphics::opengl::ext::NV_draw_buffers_obj::__new();
						return tmp64;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp62 =  Dynamic(new _Function_3_2());
			}
			tmp62;
			Dynamic tmp63;
			{
				::haxe::ds::StringMap tmp64 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::NV_fbo_color_attachments run(){
					{
						::lime::graphics::opengl::ext::NV_fbo_color_attachments tmp65 = ::lime::graphics::opengl::ext::NV_fbo_color_attachments_obj::__new();
						return tmp65;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp64->set(HX_HCSTRING("NV_fbo_color_attachments","\xd1","\xa3","\xac","\x87"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::NV_fbo_color_attachments run(){
					{
						::lime::graphics::opengl::ext::NV_fbo_color_attachments tmp65 = ::lime::graphics::opengl::ext::NV_fbo_color_attachments_obj::__new();
						return tmp65;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp63 =  Dynamic(new _Function_3_2());
			}
			tmp63;
			Dynamic tmp64;
			{
				::haxe::ds::StringMap tmp65 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::NV_fence run(){
					{
						::lime::graphics::opengl::ext::NV_fence tmp66 = ::lime::graphics::opengl::ext::NV_fence_obj::__new();
						return tmp66;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp65->set(HX_HCSTRING("NV_fence","\x3a","\x78","\x71","\x5f"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::NV_fence run(){
					{
						::lime::graphics::opengl::ext::NV_fence tmp66 = ::lime::graphics::opengl::ext::NV_fence_obj::__new();
						return tmp66;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp64 =  Dynamic(new _Function_3_2());
			}
			tmp64;
			Dynamic tmp65;
			{
				::haxe::ds::StringMap tmp66 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::NV_read_buffer run(){
					{
						::lime::graphics::opengl::ext::NV_read_buffer tmp67 = ::lime::graphics::opengl::ext::NV_read_buffer_obj::__new();
						return tmp67;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp66->set(HX_HCSTRING("NV_read_buffer","\x52","\x78","\x29","\xea"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::NV_read_buffer run(){
					{
						::lime::graphics::opengl::ext::NV_read_buffer tmp67 = ::lime::graphics::opengl::ext::NV_read_buffer_obj::__new();
						return tmp67;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp65 =  Dynamic(new _Function_3_2());
			}
			tmp65;
			Dynamic tmp66;
			{
				::haxe::ds::StringMap tmp67 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::NV_read_buffer_front run(){
					{
						::lime::graphics::opengl::ext::NV_read_buffer_front tmp68 = ::lime::graphics::opengl::ext::NV_read_buffer_front_obj::__new();
						return tmp68;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp67->set(HX_HCSTRING("NV_read_buffer_front","\xbc","\xe1","\xe8","\xd2"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::NV_read_buffer_front run(){
					{
						::lime::graphics::opengl::ext::NV_read_buffer_front tmp68 = ::lime::graphics::opengl::ext::NV_read_buffer_front_obj::__new();
						return tmp68;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp66 =  Dynamic(new _Function_3_2());
			}
			tmp66;
			Dynamic tmp67;
			{
				::haxe::ds::StringMap tmp68 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::NV_read_depth run(){
					{
						::lime::graphics::opengl::ext::NV_read_depth tmp69 = ::lime::graphics::opengl::ext::NV_read_depth_obj::__new();
						return tmp69;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp68->set(HX_HCSTRING("NV_read_depth","\xf1","\x85","\x77","\xc1"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::NV_read_depth run(){
					{
						::lime::graphics::opengl::ext::NV_read_depth tmp69 = ::lime::graphics::opengl::ext::NV_read_depth_obj::__new();
						return tmp69;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp67 =  Dynamic(new _Function_3_2());
			}
			tmp67;
			Dynamic tmp68;
			{
				::haxe::ds::StringMap tmp69 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::NV_read_depth_stencil run(){
					{
						::lime::graphics::opengl::ext::NV_read_depth_stencil tmp70 = ::lime::graphics::opengl::ext::NV_read_depth_stencil_obj::__new();
						return tmp70;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp69->set(HX_HCSTRING("NV_read_depth_stencil","\x6e","\x76","\x04","\x4b"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::NV_read_depth_stencil run(){
					{
						::lime::graphics::opengl::ext::NV_read_depth_stencil tmp70 = ::lime::graphics::opengl::ext::NV_read_depth_stencil_obj::__new();
						return tmp70;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp68 =  Dynamic(new _Function_3_2());
			}
			tmp68;
			Dynamic tmp69;
			{
				::haxe::ds::StringMap tmp70 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::NV_read_stencil run(){
					{
						::lime::graphics::opengl::ext::NV_read_stencil tmp71 = ::lime::graphics::opengl::ext::NV_read_stencil_obj::__new();
						return tmp71;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp70->set(HX_HCSTRING("NV_read_stencil","\x6a","\xea","\x92","\xc8"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::NV_read_stencil run(){
					{
						::lime::graphics::opengl::ext::NV_read_stencil tmp71 = ::lime::graphics::opengl::ext::NV_read_stencil_obj::__new();
						return tmp71;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp69 =  Dynamic(new _Function_3_2());
			}
			tmp69;
			Dynamic tmp70;
			{
				::haxe::ds::StringMap tmp71 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::NV_texture_compression_s3tc_update run(){
					{
						::lime::graphics::opengl::ext::NV_texture_compression_s3tc_update tmp72 = ::lime::graphics::opengl::ext::NV_texture_compression_s3tc_update_obj::__new();
						return tmp72;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp71->set(HX_HCSTRING("NV_texture_compression_s3tc_update","\x45","\x2a","\xb6","\x00"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::NV_texture_compression_s3tc_update run(){
					{
						::lime::graphics::opengl::ext::NV_texture_compression_s3tc_update tmp72 = ::lime::graphics::opengl::ext::NV_texture_compression_s3tc_update_obj::__new();
						return tmp72;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp70 =  Dynamic(new _Function_3_2());
			}
			tmp70;
			Dynamic tmp71;
			{
				::haxe::ds::StringMap tmp72 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::NV_texture_npot_2D_mipmap run(){
					{
						::lime::graphics::opengl::ext::NV_texture_npot_2D_mipmap tmp73 = ::lime::graphics::opengl::ext::NV_texture_npot_2D_mipmap_obj::__new();
						return tmp73;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp72->set(HX_HCSTRING("NV_texture_npot_2D_mipmap","\x78","\xdc","\xc7","\x30"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::NV_texture_npot_2D_mipmap run(){
					{
						::lime::graphics::opengl::ext::NV_texture_npot_2D_mipmap tmp73 = ::lime::graphics::opengl::ext::NV_texture_npot_2D_mipmap_obj::__new();
						return tmp73;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp71 =  Dynamic(new _Function_3_2());
			}
			tmp71;
			Dynamic tmp72;
			{
				::haxe::ds::StringMap tmp73 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_EGL_image run(){
					{
						::lime::graphics::opengl::ext::OES_EGL_image tmp74 = ::lime::graphics::opengl::ext::OES_EGL_image_obj::__new();
						return tmp74;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp73->set(HX_HCSTRING("OES_EGL_image","\x44","\x24","\x7d","\x2c"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_EGL_image run(){
					{
						::lime::graphics::opengl::ext::OES_EGL_image tmp74 = ::lime::graphics::opengl::ext::OES_EGL_image_obj::__new();
						return tmp74;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp72 =  Dynamic(new _Function_3_2());
			}
			tmp72;
			Dynamic tmp73;
			{
				::haxe::ds::StringMap tmp74 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_EGL_image_external run(){
					{
						::lime::graphics::opengl::ext::OES_EGL_image_external tmp75 = ::lime::graphics::opengl::ext::OES_EGL_image_external_obj::__new();
						return tmp75;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp74->set(HX_HCSTRING("OES_EGL_image_external","\xe6","\x6c","\x9f","\x93"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_EGL_image_external run(){
					{
						::lime::graphics::opengl::ext::OES_EGL_image_external tmp75 = ::lime::graphics::opengl::ext::OES_EGL_image_external_obj::__new();
						return tmp75;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp73 =  Dynamic(new _Function_3_2());
			}
			tmp73;
			Dynamic tmp74;
			{
				::haxe::ds::StringMap tmp75 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_compressed_ETC1_RGB8_texture run(){
					{
						::lime::graphics::opengl::ext::OES_compressed_ETC1_RGB8_texture tmp76 = ::lime::graphics::opengl::ext::OES_compressed_ETC1_RGB8_texture_obj::__new();
						return tmp76;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp75->set(HX_HCSTRING("OES_compressed_ETC1_RGB8_texture","\xcd","\xf1","\xa0","\xb8"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_compressed_ETC1_RGB8_texture run(){
					{
						::lime::graphics::opengl::ext::OES_compressed_ETC1_RGB8_texture tmp76 = ::lime::graphics::opengl::ext::OES_compressed_ETC1_RGB8_texture_obj::__new();
						return tmp76;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp74 =  Dynamic(new _Function_3_2());
			}
			tmp74;
			Dynamic tmp75;
			{
				::haxe::ds::StringMap tmp76 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_compressed_paletted_texture run(){
					{
						::lime::graphics::opengl::ext::OES_compressed_paletted_texture tmp77 = ::lime::graphics::opengl::ext::OES_compressed_paletted_texture_obj::__new();
						return tmp77;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp76->set(HX_HCSTRING("OES_compressed_paletted_texture","\xa1","\xed","\x5e","\x8e"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_compressed_paletted_texture run(){
					{
						::lime::graphics::opengl::ext::OES_compressed_paletted_texture tmp77 = ::lime::graphics::opengl::ext::OES_compressed_paletted_texture_obj::__new();
						return tmp77;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp75 =  Dynamic(new _Function_3_2());
			}
			tmp75;
			Dynamic tmp76;
			{
				::haxe::ds::StringMap tmp77 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_depth24 run(){
					{
						::lime::graphics::opengl::ext::OES_depth24 tmp78 = ::lime::graphics::opengl::ext::OES_depth24_obj::__new();
						return tmp78;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp77->set(HX_HCSTRING("OES_depth24","\x83","\x70","\xfd","\xa0"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_depth24 run(){
					{
						::lime::graphics::opengl::ext::OES_depth24 tmp78 = ::lime::graphics::opengl::ext::OES_depth24_obj::__new();
						return tmp78;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp76 =  Dynamic(new _Function_3_2());
			}
			tmp76;
			Dynamic tmp77;
			{
				::haxe::ds::StringMap tmp78 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_depth32 run(){
					{
						::lime::graphics::opengl::ext::OES_depth32 tmp79 = ::lime::graphics::opengl::ext::OES_depth32_obj::__new();
						return tmp79;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp78->set(HX_HCSTRING("OES_depth32","\x60","\x71","\xfd","\xa0"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_depth32 run(){
					{
						::lime::graphics::opengl::ext::OES_depth32 tmp79 = ::lime::graphics::opengl::ext::OES_depth32_obj::__new();
						return tmp79;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp77 =  Dynamic(new _Function_3_2());
			}
			tmp77;
			Dynamic tmp78;
			{
				::haxe::ds::StringMap tmp79 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_depth_texture run(){
					{
						::lime::graphics::opengl::ext::OES_depth_texture tmp80 = ::lime::graphics::opengl::ext::OES_depth_texture_obj::__new();
						return tmp80;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp79->set(HX_HCSTRING("OES_depth_texture","\xdd","\xed","\x8f","\xe2"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_depth_texture run(){
					{
						::lime::graphics::opengl::ext::OES_depth_texture tmp80 = ::lime::graphics::opengl::ext::OES_depth_texture_obj::__new();
						return tmp80;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp78 =  Dynamic(new _Function_3_2());
			}
			tmp78;
			Dynamic tmp79;
			{
				::haxe::ds::StringMap tmp80 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_element_index_uint run(){
					{
						::lime::graphics::opengl::ext::OES_element_index_uint tmp81 = ::lime::graphics::opengl::ext::OES_element_index_uint_obj::__new();
						return tmp81;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp80->set(HX_HCSTRING("OES_element_index_uint","\xcc","\xfa","\x20","\xb1"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_element_index_uint run(){
					{
						::lime::graphics::opengl::ext::OES_element_index_uint tmp81 = ::lime::graphics::opengl::ext::OES_element_index_uint_obj::__new();
						return tmp81;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp79 =  Dynamic(new _Function_3_2());
			}
			tmp79;
			Dynamic tmp80;
			{
				::haxe::ds::StringMap tmp81 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_get_program_binary run(){
					{
						::lime::graphics::opengl::ext::OES_get_program_binary tmp82 = ::lime::graphics::opengl::ext::OES_get_program_binary_obj::__new();
						return tmp82;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp81->set(HX_HCSTRING("OES_get_program_binary","\x27","\xf4","\x1a","\x01"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_get_program_binary run(){
					{
						::lime::graphics::opengl::ext::OES_get_program_binary tmp82 = ::lime::graphics::opengl::ext::OES_get_program_binary_obj::__new();
						return tmp82;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp80 =  Dynamic(new _Function_3_2());
			}
			tmp80;
			Dynamic tmp81;
			{
				::haxe::ds::StringMap tmp82 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_mapbuffer run(){
					{
						::lime::graphics::opengl::ext::OES_mapbuffer tmp83 = ::lime::graphics::opengl::ext::OES_mapbuffer_obj::__new();
						return tmp83;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp82->set(HX_HCSTRING("OES_mapbuffer","\x1a","\x2d","\x9e","\xe1"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_mapbuffer run(){
					{
						::lime::graphics::opengl::ext::OES_mapbuffer tmp83 = ::lime::graphics::opengl::ext::OES_mapbuffer_obj::__new();
						return tmp83;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp81 =  Dynamic(new _Function_3_2());
			}
			tmp81;
			Dynamic tmp82;
			{
				::haxe::ds::StringMap tmp83 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_packed_depth_stencil run(){
					{
						::lime::graphics::opengl::ext::OES_packed_depth_stencil tmp84 = ::lime::graphics::opengl::ext::OES_packed_depth_stencil_obj::__new();
						return tmp84;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp83->set(HX_HCSTRING("OES_packed_depth_stencil","\x7b","\x19","\x31","\xfc"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_packed_depth_stencil run(){
					{
						::lime::graphics::opengl::ext::OES_packed_depth_stencil tmp84 = ::lime::graphics::opengl::ext::OES_packed_depth_stencil_obj::__new();
						return tmp84;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp82 =  Dynamic(new _Function_3_2());
			}
			tmp82;
			Dynamic tmp83;
			{
				::haxe::ds::StringMap tmp84 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_required_internalformat run(){
					{
						::lime::graphics::opengl::ext::OES_required_internalformat tmp85 = ::lime::graphics::opengl::ext::OES_required_internalformat_obj::__new();
						return tmp85;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp84->set(HX_HCSTRING("OES_required_internalformat","\x52","\xc5","\x46","\x29"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_required_internalformat run(){
					{
						::lime::graphics::opengl::ext::OES_required_internalformat tmp85 = ::lime::graphics::opengl::ext::OES_required_internalformat_obj::__new();
						return tmp85;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp83 =  Dynamic(new _Function_3_2());
			}
			tmp83;
			Dynamic tmp84;
			{
				::haxe::ds::StringMap tmp85 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_rgb8_rgba8 run(){
					{
						::lime::graphics::opengl::ext::OES_rgb8_rgba8 tmp86 = ::lime::graphics::opengl::ext::OES_rgb8_rgba8_obj::__new();
						return tmp86;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp85->set(HX_HCSTRING("OES_rgb8_rgba8","\xd2","\x44","\x3a","\x66"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_rgb8_rgba8 run(){
					{
						::lime::graphics::opengl::ext::OES_rgb8_rgba8 tmp86 = ::lime::graphics::opengl::ext::OES_rgb8_rgba8_obj::__new();
						return tmp86;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp84 =  Dynamic(new _Function_3_2());
			}
			tmp84;
			Dynamic tmp85;
			{
				::haxe::ds::StringMap tmp86 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_standard_derivatives run(){
					{
						::lime::graphics::opengl::ext::OES_standard_derivatives tmp87 = ::lime::graphics::opengl::ext::OES_standard_derivatives_obj::__new();
						return tmp87;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp86->set(HX_HCSTRING("OES_standard_derivatives","\x8c","\xcb","\x00","\x04"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_standard_derivatives run(){
					{
						::lime::graphics::opengl::ext::OES_standard_derivatives tmp87 = ::lime::graphics::opengl::ext::OES_standard_derivatives_obj::__new();
						return tmp87;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp85 =  Dynamic(new _Function_3_2());
			}
			tmp85;
			Dynamic tmp86;
			{
				::haxe::ds::StringMap tmp87 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_stencil1 run(){
					{
						::lime::graphics::opengl::ext::OES_stencil1 tmp88 = ::lime::graphics::opengl::ext::OES_stencil1_obj::__new();
						return tmp88;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp87->set(HX_HCSTRING("OES_stencil1","\xf7","\x0f","\x03","\x29"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_stencil1 run(){
					{
						::lime::graphics::opengl::ext::OES_stencil1 tmp88 = ::lime::graphics::opengl::ext::OES_stencil1_obj::__new();
						return tmp88;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp86 =  Dynamic(new _Function_3_2());
			}
			tmp86;
			Dynamic tmp87;
			{
				::haxe::ds::StringMap tmp88 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_stencil4 run(){
					{
						::lime::graphics::opengl::ext::OES_stencil4 tmp89 = ::lime::graphics::opengl::ext::OES_stencil4_obj::__new();
						return tmp89;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp88->set(HX_HCSTRING("OES_stencil4","\xfa","\x0f","\x03","\x29"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_stencil4 run(){
					{
						::lime::graphics::opengl::ext::OES_stencil4 tmp89 = ::lime::graphics::opengl::ext::OES_stencil4_obj::__new();
						return tmp89;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp87 =  Dynamic(new _Function_3_2());
			}
			tmp87;
			Dynamic tmp88;
			{
				::haxe::ds::StringMap tmp89 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_surfaceless_context run(){
					{
						::lime::graphics::opengl::ext::OES_surfaceless_context tmp90 = ::lime::graphics::opengl::ext::OES_surfaceless_context_obj::__new();
						return tmp90;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp89->set(HX_HCSTRING("OES_surfaceless_context","\x74","\x4b","\xea","\xb9"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_surfaceless_context run(){
					{
						::lime::graphics::opengl::ext::OES_surfaceless_context tmp90 = ::lime::graphics::opengl::ext::OES_surfaceless_context_obj::__new();
						return tmp90;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp88 =  Dynamic(new _Function_3_2());
			}
			tmp88;
			Dynamic tmp89;
			{
				::haxe::ds::StringMap tmp90 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_texture_3D run(){
					{
						::lime::graphics::opengl::ext::OES_texture_3D tmp91 = ::lime::graphics::opengl::ext::OES_texture_3D_obj::__new();
						return tmp91;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp90->set(HX_HCSTRING("OES_texture_3D","\x97","\x1a","\xcf","\xb4"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_texture_3D run(){
					{
						::lime::graphics::opengl::ext::OES_texture_3D tmp91 = ::lime::graphics::opengl::ext::OES_texture_3D_obj::__new();
						return tmp91;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp89 =  Dynamic(new _Function_3_2());
			}
			tmp89;
			Dynamic tmp90;
			{
				::haxe::ds::StringMap tmp91 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_texture_float run(){
					{
						::lime::graphics::opengl::ext::OES_texture_float tmp92 = ::lime::graphics::opengl::ext::OES_texture_float_obj::__new();
						return tmp92;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp91->set(HX_HCSTRING("OES_texture_float","\x76","\x0b","\x21","\x02"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_texture_float run(){
					{
						::lime::graphics::opengl::ext::OES_texture_float tmp92 = ::lime::graphics::opengl::ext::OES_texture_float_obj::__new();
						return tmp92;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp90 =  Dynamic(new _Function_3_2());
			}
			tmp90;
			Dynamic tmp91;
			{
				::haxe::ds::StringMap tmp92 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_texture_float_linear run(){
					{
						::lime::graphics::opengl::ext::OES_texture_float_linear tmp93 = ::lime::graphics::opengl::ext::OES_texture_float_linear_obj::__new();
						return tmp93;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp92->set(HX_HCSTRING("OES_texture_float_linear","\xce","\x52","\x3e","\xd7"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_texture_float_linear run(){
					{
						::lime::graphics::opengl::ext::OES_texture_float_linear tmp93 = ::lime::graphics::opengl::ext::OES_texture_float_linear_obj::__new();
						return tmp93;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp91 =  Dynamic(new _Function_3_2());
			}
			tmp91;
			Dynamic tmp92;
			{
				::haxe::ds::StringMap tmp93 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_texture_half_float run(){
					{
						::lime::graphics::opengl::ext::OES_texture_half_float tmp94 = ::lime::graphics::opengl::ext::OES_texture_half_float_obj::__new();
						return tmp94;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp93->set(HX_HCSTRING("OES_texture_half_float","\xb6","\x42","\xf5","\xf2"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_texture_half_float run(){
					{
						::lime::graphics::opengl::ext::OES_texture_half_float tmp94 = ::lime::graphics::opengl::ext::OES_texture_half_float_obj::__new();
						return tmp94;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp92 =  Dynamic(new _Function_3_2());
			}
			tmp92;
			Dynamic tmp93;
			{
				::haxe::ds::StringMap tmp94 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_texture_half_float_linear run(){
					{
						::lime::graphics::opengl::ext::OES_texture_half_float_linear tmp95 = ::lime::graphics::opengl::ext::OES_texture_half_float_linear_obj::__new();
						return tmp95;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp94->set(HX_HCSTRING("OES_texture_half_float_linear","\x8e","\x83","\x0b","\x8c"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_texture_half_float_linear run(){
					{
						::lime::graphics::opengl::ext::OES_texture_half_float_linear tmp95 = ::lime::graphics::opengl::ext::OES_texture_half_float_linear_obj::__new();
						return tmp95;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp93 =  Dynamic(new _Function_3_2());
			}
			tmp93;
			Dynamic tmp94;
			{
				::haxe::ds::StringMap tmp95 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_texture_npot run(){
					{
						::lime::graphics::opengl::ext::OES_texture_npot tmp96 = ::lime::graphics::opengl::ext::OES_texture_npot_obj::__new();
						return tmp96;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp95->set(HX_HCSTRING("OES_texture_npot","\x4d","\x89","\xdd","\x01"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_texture_npot run(){
					{
						::lime::graphics::opengl::ext::OES_texture_npot tmp96 = ::lime::graphics::opengl::ext::OES_texture_npot_obj::__new();
						return tmp96;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp94 =  Dynamic(new _Function_3_2());
			}
			tmp94;
			Dynamic tmp95;
			{
				::haxe::ds::StringMap tmp96 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_vertex_array_object run(){
					{
						::lime::graphics::opengl::ext::OES_vertex_array_object tmp97 = ::lime::graphics::opengl::ext::OES_vertex_array_object_obj::__new();
						return tmp97;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp96->set(HX_HCSTRING("OES_vertex_array_object","\xde","\xb2","\x44","\x8d"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_vertex_array_object run(){
					{
						::lime::graphics::opengl::ext::OES_vertex_array_object tmp97 = ::lime::graphics::opengl::ext::OES_vertex_array_object_obj::__new();
						return tmp97;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp95 =  Dynamic(new _Function_3_2());
			}
			tmp95;
			Dynamic tmp96;
			{
				::haxe::ds::StringMap tmp97 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_vertex_half_float run(){
					{
						::lime::graphics::opengl::ext::OES_vertex_half_float tmp98 = ::lime::graphics::opengl::ext::OES_vertex_half_float_obj::__new();
						return tmp98;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp97->set(HX_HCSTRING("OES_vertex_half_float","\x89","\xd9","\x95","\xca"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_vertex_half_float run(){
					{
						::lime::graphics::opengl::ext::OES_vertex_half_float tmp98 = ::lime::graphics::opengl::ext::OES_vertex_half_float_obj::__new();
						return tmp98;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp96 =  Dynamic(new _Function_3_2());
			}
			tmp96;
			Dynamic tmp97;
			{
				::haxe::ds::StringMap tmp98 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_vertex_type_10_10_10_2 run(){
					{
						::lime::graphics::opengl::ext::OES_vertex_type_10_10_10_2 tmp99 = ::lime::graphics::opengl::ext::OES_vertex_type_10_10_10_2_obj::__new();
						return tmp99;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp98->set(HX_HCSTRING("OES_vertex_type_10_10_10_2","\xde","\xbe","\xf1","\x06"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::OES_vertex_type_10_10_10_2 run(){
					{
						::lime::graphics::opengl::ext::OES_vertex_type_10_10_10_2 tmp99 = ::lime::graphics::opengl::ext::OES_vertex_type_10_10_10_2_obj::__new();
						return tmp99;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp97 =  Dynamic(new _Function_3_2());
			}
			tmp97;
			Dynamic tmp98;
			{
				::haxe::ds::StringMap tmp99 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::QCOM_alpha_test run(){
					{
						::lime::graphics::opengl::ext::QCOM_alpha_test tmp100 = ::lime::graphics::opengl::ext::QCOM_alpha_test_obj::__new();
						return tmp100;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp99->set(HX_HCSTRING("QCOM_alpha_test","\xc2","\xa6","\x01","\xc4"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::QCOM_alpha_test run(){
					{
						::lime::graphics::opengl::ext::QCOM_alpha_test tmp100 = ::lime::graphics::opengl::ext::QCOM_alpha_test_obj::__new();
						return tmp100;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp98 =  Dynamic(new _Function_3_2());
			}
			tmp98;
			Dynamic tmp99;
			{
				::haxe::ds::StringMap tmp100 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::QCOM_binning_control run(){
					{
						::lime::graphics::opengl::ext::QCOM_binning_control tmp101 = ::lime::graphics::opengl::ext::QCOM_binning_control_obj::__new();
						return tmp101;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp100->set(HX_HCSTRING("QCOM_binning_control","\x4a","\x6c","\x46","\x7b"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::QCOM_binning_control run(){
					{
						::lime::graphics::opengl::ext::QCOM_binning_control tmp101 = ::lime::graphics::opengl::ext::QCOM_binning_control_obj::__new();
						return tmp101;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp99 =  Dynamic(new _Function_3_2());
			}
			tmp99;
			Dynamic tmp100;
			{
				::haxe::ds::StringMap tmp101 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::QCOM_driver_control run(){
					{
						::lime::graphics::opengl::ext::QCOM_driver_control tmp102 = ::lime::graphics::opengl::ext::QCOM_driver_control_obj::__new();
						return tmp102;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp101->set(HX_HCSTRING("QCOM_driver_control","\x35","\x0f","\xf7","\x9e"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::QCOM_driver_control run(){
					{
						::lime::graphics::opengl::ext::QCOM_driver_control tmp102 = ::lime::graphics::opengl::ext::QCOM_driver_control_obj::__new();
						return tmp102;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp100 =  Dynamic(new _Function_3_2());
			}
			tmp100;
			Dynamic tmp101;
			{
				::haxe::ds::StringMap tmp102 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::QCOM_extended_get run(){
					{
						::lime::graphics::opengl::ext::QCOM_extended_get tmp103 = ::lime::graphics::opengl::ext::QCOM_extended_get_obj::__new();
						return tmp103;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp102->set(HX_HCSTRING("QCOM_extended_get","\x3f","\x13","\x03","\xb6"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::QCOM_extended_get run(){
					{
						::lime::graphics::opengl::ext::QCOM_extended_get tmp103 = ::lime::graphics::opengl::ext::QCOM_extended_get_obj::__new();
						return tmp103;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp101 =  Dynamic(new _Function_3_2());
			}
			tmp101;
			Dynamic tmp102;
			{
				::haxe::ds::StringMap tmp103 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::QCOM_extended_get2 run(){
					{
						::lime::graphics::opengl::ext::QCOM_extended_get2 tmp104 = ::lime::graphics::opengl::ext::QCOM_extended_get2_obj::__new();
						return tmp104;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp103->set(HX_HCSTRING("QCOM_extended_get2","\x13","\xc4","\xad","\x8c"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::QCOM_extended_get2 run(){
					{
						::lime::graphics::opengl::ext::QCOM_extended_get2 tmp104 = ::lime::graphics::opengl::ext::QCOM_extended_get2_obj::__new();
						return tmp104;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp102 =  Dynamic(new _Function_3_2());
			}
			tmp102;
			Dynamic tmp103;
			{
				::haxe::ds::StringMap tmp104 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::QCOM_perfmon_global_mode run(){
					{
						::lime::graphics::opengl::ext::QCOM_perfmon_global_mode tmp105 = ::lime::graphics::opengl::ext::QCOM_perfmon_global_mode_obj::__new();
						return tmp105;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp104->set(HX_HCSTRING("QCOM_perfmon_global_mode","\x74","\xf2","\x13","\xad"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::QCOM_perfmon_global_mode run(){
					{
						::lime::graphics::opengl::ext::QCOM_perfmon_global_mode tmp105 = ::lime::graphics::opengl::ext::QCOM_perfmon_global_mode_obj::__new();
						return tmp105;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp103 =  Dynamic(new _Function_3_2());
			}
			tmp103;
			Dynamic tmp104;
			{
				::haxe::ds::StringMap tmp105 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::QCOM_tiled_rendering run(){
					{
						::lime::graphics::opengl::ext::QCOM_tiled_rendering tmp106 = ::lime::graphics::opengl::ext::QCOM_tiled_rendering_obj::__new();
						return tmp106;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp105->set(HX_HCSTRING("QCOM_tiled_rendering","\xf4","\x8a","\x1f","\xec"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::QCOM_tiled_rendering run(){
					{
						::lime::graphics::opengl::ext::QCOM_tiled_rendering tmp106 = ::lime::graphics::opengl::ext::QCOM_tiled_rendering_obj::__new();
						return tmp106;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp104 =  Dynamic(new _Function_3_2());
			}
			tmp104;
			Dynamic tmp105;
			{
				::haxe::ds::StringMap tmp106 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::QCOM_writeonly_rendering run(){
					{
						::lime::graphics::opengl::ext::QCOM_writeonly_rendering tmp107 = ::lime::graphics::opengl::ext::QCOM_writeonly_rendering_obj::__new();
						return tmp107;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp106->set(HX_HCSTRING("QCOM_writeonly_rendering","\x09","\x44","\x22","\x8a"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::QCOM_writeonly_rendering run(){
					{
						::lime::graphics::opengl::ext::QCOM_writeonly_rendering tmp107 = ::lime::graphics::opengl::ext::QCOM_writeonly_rendering_obj::__new();
						return tmp107;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp105 =  Dynamic(new _Function_3_2());
			}
			tmp105;
			Dynamic tmp106;
			{
				::haxe::ds::StringMap tmp107 = ::lime::_backend::native::NativeGLRenderContext_obj::__extensionObjectConstructors;

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::VIV_shader_binary run(){
					{
						::lime::graphics::opengl::ext::VIV_shader_binary tmp108 = ::lime::graphics::opengl::ext::VIV_shader_binary_obj::__new();
						return tmp108;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp107->set(HX_HCSTRING("VIV_shader_binary","\x5f","\x4e","\x50","\x1f"), Dynamic(new _Function_3_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				::lime::graphics::opengl::ext::VIV_shader_binary run(){
					{
						::lime::graphics::opengl::ext::VIV_shader_binary tmp108 = ::lime::graphics::opengl::ext::VIV_shader_binary_obj::__new();
						return tmp108;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				tmp106 =  Dynamic(new _Function_3_2());
			}
			tmp106;
		}
		this->__initialized = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeGLRenderContext_obj,__initialize,(void))

::haxe::ds::StringMap NativeGLRenderContext_obj::__extensionObjects;

::haxe::ds::StringMap NativeGLRenderContext_obj::__extensionObjectConstructors;

int NativeGLRenderContext_obj::__lastContextID;

Array< ::String > NativeGLRenderContext_obj::__supportedExtensions;


NativeGLRenderContext_obj::NativeGLRenderContext_obj()
{
}

void NativeGLRenderContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeGLRenderContext);
	HX_MARK_MEMBER_NAME(DEPTH_BUFFER_BIT,"DEPTH_BUFFER_BIT");
	HX_MARK_MEMBER_NAME(STENCIL_BUFFER_BIT,"STENCIL_BUFFER_BIT");
	HX_MARK_MEMBER_NAME(COLOR_BUFFER_BIT,"COLOR_BUFFER_BIT");
	HX_MARK_MEMBER_NAME(POINTS,"POINTS");
	HX_MARK_MEMBER_NAME(LINES,"LINES");
	HX_MARK_MEMBER_NAME(LINE_LOOP,"LINE_LOOP");
	HX_MARK_MEMBER_NAME(LINE_STRIP,"LINE_STRIP");
	HX_MARK_MEMBER_NAME(TRIANGLES,"TRIANGLES");
	HX_MARK_MEMBER_NAME(TRIANGLE_STRIP,"TRIANGLE_STRIP");
	HX_MARK_MEMBER_NAME(TRIANGLE_FAN,"TRIANGLE_FAN");
	HX_MARK_MEMBER_NAME(ZERO,"ZERO");
	HX_MARK_MEMBER_NAME(ONE,"ONE");
	HX_MARK_MEMBER_NAME(SRC_COLOR,"SRC_COLOR");
	HX_MARK_MEMBER_NAME(ONE_MINUS_SRC_COLOR,"ONE_MINUS_SRC_COLOR");
	HX_MARK_MEMBER_NAME(SRC_ALPHA,"SRC_ALPHA");
	HX_MARK_MEMBER_NAME(ONE_MINUS_SRC_ALPHA,"ONE_MINUS_SRC_ALPHA");
	HX_MARK_MEMBER_NAME(DST_ALPHA,"DST_ALPHA");
	HX_MARK_MEMBER_NAME(ONE_MINUS_DST_ALPHA,"ONE_MINUS_DST_ALPHA");
	HX_MARK_MEMBER_NAME(DST_COLOR,"DST_COLOR");
	HX_MARK_MEMBER_NAME(ONE_MINUS_DST_COLOR,"ONE_MINUS_DST_COLOR");
	HX_MARK_MEMBER_NAME(SRC_ALPHA_SATURATE,"SRC_ALPHA_SATURATE");
	HX_MARK_MEMBER_NAME(FUNC_ADD,"FUNC_ADD");
	HX_MARK_MEMBER_NAME(BLEND_EQUATION,"BLEND_EQUATION");
	HX_MARK_MEMBER_NAME(BLEND_EQUATION_RGB,"BLEND_EQUATION_RGB");
	HX_MARK_MEMBER_NAME(BLEND_EQUATION_ALPHA,"BLEND_EQUATION_ALPHA");
	HX_MARK_MEMBER_NAME(FUNC_SUBTRACT,"FUNC_SUBTRACT");
	HX_MARK_MEMBER_NAME(FUNC_REVERSE_SUBTRACT,"FUNC_REVERSE_SUBTRACT");
	HX_MARK_MEMBER_NAME(BLEND_DST_RGB,"BLEND_DST_RGB");
	HX_MARK_MEMBER_NAME(BLEND_SRC_RGB,"BLEND_SRC_RGB");
	HX_MARK_MEMBER_NAME(BLEND_DST_ALPHA,"BLEND_DST_ALPHA");
	HX_MARK_MEMBER_NAME(BLEND_SRC_ALPHA,"BLEND_SRC_ALPHA");
	HX_MARK_MEMBER_NAME(CONSTANT_COLOR,"CONSTANT_COLOR");
	HX_MARK_MEMBER_NAME(ONE_MINUS_CONSTANT_COLOR,"ONE_MINUS_CONSTANT_COLOR");
	HX_MARK_MEMBER_NAME(CONSTANT_ALPHA,"CONSTANT_ALPHA");
	HX_MARK_MEMBER_NAME(ONE_MINUS_CONSTANT_ALPHA,"ONE_MINUS_CONSTANT_ALPHA");
	HX_MARK_MEMBER_NAME(BLEND_COLOR,"BLEND_COLOR");
	HX_MARK_MEMBER_NAME(ARRAY_BUFFER,"ARRAY_BUFFER");
	HX_MARK_MEMBER_NAME(ELEMENT_ARRAY_BUFFER,"ELEMENT_ARRAY_BUFFER");
	HX_MARK_MEMBER_NAME(ARRAY_BUFFER_BINDING,"ARRAY_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(ELEMENT_ARRAY_BUFFER_BINDING,"ELEMENT_ARRAY_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(STREAM_DRAW,"STREAM_DRAW");
	HX_MARK_MEMBER_NAME(STATIC_DRAW,"STATIC_DRAW");
	HX_MARK_MEMBER_NAME(DYNAMIC_DRAW,"DYNAMIC_DRAW");
	HX_MARK_MEMBER_NAME(BUFFER_SIZE,"BUFFER_SIZE");
	HX_MARK_MEMBER_NAME(BUFFER_USAGE,"BUFFER_USAGE");
	HX_MARK_MEMBER_NAME(CURRENT_VERTEX_ATTRIB,"CURRENT_VERTEX_ATTRIB");
	HX_MARK_MEMBER_NAME(FRONT,"FRONT");
	HX_MARK_MEMBER_NAME(BACK,"BACK");
	HX_MARK_MEMBER_NAME(FRONT_AND_BACK,"FRONT_AND_BACK");
	HX_MARK_MEMBER_NAME(TEXTURE_2D,"TEXTURE_2D");
	HX_MARK_MEMBER_NAME(CULL_FACE,"CULL_FACE");
	HX_MARK_MEMBER_NAME(BLEND,"BLEND");
	HX_MARK_MEMBER_NAME(DITHER,"DITHER");
	HX_MARK_MEMBER_NAME(STENCIL_TEST,"STENCIL_TEST");
	HX_MARK_MEMBER_NAME(DEPTH_TEST,"DEPTH_TEST");
	HX_MARK_MEMBER_NAME(SCISSOR_TEST,"SCISSOR_TEST");
	HX_MARK_MEMBER_NAME(POLYGON_OFFSET_FILL,"POLYGON_OFFSET_FILL");
	HX_MARK_MEMBER_NAME(SAMPLE_ALPHA_TO_COVERAGE,"SAMPLE_ALPHA_TO_COVERAGE");
	HX_MARK_MEMBER_NAME(SAMPLE_COVERAGE,"SAMPLE_COVERAGE");
	HX_MARK_MEMBER_NAME(NO_ERROR,"NO_ERROR");
	HX_MARK_MEMBER_NAME(INVALID_ENUM,"INVALID_ENUM");
	HX_MARK_MEMBER_NAME(INVALID_VALUE,"INVALID_VALUE");
	HX_MARK_MEMBER_NAME(INVALID_OPERATION,"INVALID_OPERATION");
	HX_MARK_MEMBER_NAME(OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_MARK_MEMBER_NAME(CW,"CW");
	HX_MARK_MEMBER_NAME(CCW,"CCW");
	HX_MARK_MEMBER_NAME(LINE_WIDTH,"LINE_WIDTH");
	HX_MARK_MEMBER_NAME(ALIASED_POINT_SIZE_RANGE,"ALIASED_POINT_SIZE_RANGE");
	HX_MARK_MEMBER_NAME(ALIASED_LINE_WIDTH_RANGE,"ALIASED_LINE_WIDTH_RANGE");
	HX_MARK_MEMBER_NAME(CULL_FACE_MODE,"CULL_FACE_MODE");
	HX_MARK_MEMBER_NAME(FRONT_FACE,"FRONT_FACE");
	HX_MARK_MEMBER_NAME(DEPTH_RANGE,"DEPTH_RANGE");
	HX_MARK_MEMBER_NAME(DEPTH_WRITEMASK,"DEPTH_WRITEMASK");
	HX_MARK_MEMBER_NAME(DEPTH_CLEAR_VALUE,"DEPTH_CLEAR_VALUE");
	HX_MARK_MEMBER_NAME(DEPTH_FUNC,"DEPTH_FUNC");
	HX_MARK_MEMBER_NAME(STENCIL_CLEAR_VALUE,"STENCIL_CLEAR_VALUE");
	HX_MARK_MEMBER_NAME(STENCIL_FUNC,"STENCIL_FUNC");
	HX_MARK_MEMBER_NAME(STENCIL_FAIL,"STENCIL_FAIL");
	HX_MARK_MEMBER_NAME(STENCIL_PASS_DEPTH_FAIL,"STENCIL_PASS_DEPTH_FAIL");
	HX_MARK_MEMBER_NAME(STENCIL_PASS_DEPTH_PASS,"STENCIL_PASS_DEPTH_PASS");
	HX_MARK_MEMBER_NAME(STENCIL_REF,"STENCIL_REF");
	HX_MARK_MEMBER_NAME(STENCIL_VALUE_MASK,"STENCIL_VALUE_MASK");
	HX_MARK_MEMBER_NAME(STENCIL_WRITEMASK,"STENCIL_WRITEMASK");
	HX_MARK_MEMBER_NAME(STENCIL_BACK_FUNC,"STENCIL_BACK_FUNC");
	HX_MARK_MEMBER_NAME(STENCIL_BACK_FAIL,"STENCIL_BACK_FAIL");
	HX_MARK_MEMBER_NAME(STENCIL_BACK_PASS_DEPTH_FAIL,"STENCIL_BACK_PASS_DEPTH_FAIL");
	HX_MARK_MEMBER_NAME(STENCIL_BACK_PASS_DEPTH_PASS,"STENCIL_BACK_PASS_DEPTH_PASS");
	HX_MARK_MEMBER_NAME(STENCIL_BACK_REF,"STENCIL_BACK_REF");
	HX_MARK_MEMBER_NAME(STENCIL_BACK_VALUE_MASK,"STENCIL_BACK_VALUE_MASK");
	HX_MARK_MEMBER_NAME(STENCIL_BACK_WRITEMASK,"STENCIL_BACK_WRITEMASK");
	HX_MARK_MEMBER_NAME(VIEWPORT,"VIEWPORT");
	HX_MARK_MEMBER_NAME(SCISSOR_BOX,"SCISSOR_BOX");
	HX_MARK_MEMBER_NAME(COLOR_CLEAR_VALUE,"COLOR_CLEAR_VALUE");
	HX_MARK_MEMBER_NAME(COLOR_WRITEMASK,"COLOR_WRITEMASK");
	HX_MARK_MEMBER_NAME(UNPACK_ALIGNMENT,"UNPACK_ALIGNMENT");
	HX_MARK_MEMBER_NAME(PACK_ALIGNMENT,"PACK_ALIGNMENT");
	HX_MARK_MEMBER_NAME(MAX_TEXTURE_SIZE,"MAX_TEXTURE_SIZE");
	HX_MARK_MEMBER_NAME(MAX_VIEWPORT_DIMS,"MAX_VIEWPORT_DIMS");
	HX_MARK_MEMBER_NAME(SUBPIXEL_BITS,"SUBPIXEL_BITS");
	HX_MARK_MEMBER_NAME(RED_BITS,"RED_BITS");
	HX_MARK_MEMBER_NAME(GREEN_BITS,"GREEN_BITS");
	HX_MARK_MEMBER_NAME(BLUE_BITS,"BLUE_BITS");
	HX_MARK_MEMBER_NAME(ALPHA_BITS,"ALPHA_BITS");
	HX_MARK_MEMBER_NAME(DEPTH_BITS,"DEPTH_BITS");
	HX_MARK_MEMBER_NAME(STENCIL_BITS,"STENCIL_BITS");
	HX_MARK_MEMBER_NAME(POLYGON_OFFSET_UNITS,"POLYGON_OFFSET_UNITS");
	HX_MARK_MEMBER_NAME(POLYGON_OFFSET_FACTOR,"POLYGON_OFFSET_FACTOR");
	HX_MARK_MEMBER_NAME(TEXTURE_BINDING_2D,"TEXTURE_BINDING_2D");
	HX_MARK_MEMBER_NAME(SAMPLE_BUFFERS,"SAMPLE_BUFFERS");
	HX_MARK_MEMBER_NAME(SAMPLES,"SAMPLES");
	HX_MARK_MEMBER_NAME(SAMPLE_COVERAGE_VALUE,"SAMPLE_COVERAGE_VALUE");
	HX_MARK_MEMBER_NAME(SAMPLE_COVERAGE_INVERT,"SAMPLE_COVERAGE_INVERT");
	HX_MARK_MEMBER_NAME(NUM_COMPRESSED_TEXTURE_FORMATS,"NUM_COMPRESSED_TEXTURE_FORMATS");
	HX_MARK_MEMBER_NAME(COMPRESSED_TEXTURE_FORMATS,"COMPRESSED_TEXTURE_FORMATS");
	HX_MARK_MEMBER_NAME(DONT_CARE,"DONT_CARE");
	HX_MARK_MEMBER_NAME(FASTEST,"FASTEST");
	HX_MARK_MEMBER_NAME(NICEST,"NICEST");
	HX_MARK_MEMBER_NAME(GENERATE_MIPMAP_HINT,"GENERATE_MIPMAP_HINT");
	HX_MARK_MEMBER_NAME(BYTE,"BYTE");
	HX_MARK_MEMBER_NAME(UNSIGNED_BYTE,"UNSIGNED_BYTE");
	HX_MARK_MEMBER_NAME(SHORT,"SHORT");
	HX_MARK_MEMBER_NAME(UNSIGNED_SHORT,"UNSIGNED_SHORT");
	HX_MARK_MEMBER_NAME(INT,"INT");
	HX_MARK_MEMBER_NAME(UNSIGNED_INT,"UNSIGNED_INT");
	HX_MARK_MEMBER_NAME(FLOAT,"FLOAT");
	HX_MARK_MEMBER_NAME(FIXED,"FIXED");
	HX_MARK_MEMBER_NAME(DEPTH_COMPONENT,"DEPTH_COMPONENT");
	HX_MARK_MEMBER_NAME(ALPHA,"ALPHA");
	HX_MARK_MEMBER_NAME(RGB,"RGB");
	HX_MARK_MEMBER_NAME(RGBA,"RGBA");
	HX_MARK_MEMBER_NAME(LUMINANCE,"LUMINANCE");
	HX_MARK_MEMBER_NAME(LUMINANCE_ALPHA,"LUMINANCE_ALPHA");
	HX_MARK_MEMBER_NAME(UNSIGNED_SHORT_4_4_4_4,"UNSIGNED_SHORT_4_4_4_4");
	HX_MARK_MEMBER_NAME(UNSIGNED_SHORT_5_5_5_1,"UNSIGNED_SHORT_5_5_5_1");
	HX_MARK_MEMBER_NAME(UNSIGNED_SHORT_5_6_5,"UNSIGNED_SHORT_5_6_5");
	HX_MARK_MEMBER_NAME(FRAGMENT_SHADER,"FRAGMENT_SHADER");
	HX_MARK_MEMBER_NAME(VERTEX_SHADER,"VERTEX_SHADER");
	HX_MARK_MEMBER_NAME(MAX_VERTEX_ATTRIBS,"MAX_VERTEX_ATTRIBS");
	HX_MARK_MEMBER_NAME(MAX_VERTEX_UNIFORM_VECTORS,"MAX_VERTEX_UNIFORM_VECTORS");
	HX_MARK_MEMBER_NAME(MAX_VARYING_VECTORS,"MAX_VARYING_VECTORS");
	HX_MARK_MEMBER_NAME(MAX_COMBINED_TEXTURE_IMAGE_UNITS,"MAX_COMBINED_TEXTURE_IMAGE_UNITS");
	HX_MARK_MEMBER_NAME(MAX_VERTEX_TEXTURE_IMAGE_UNITS,"MAX_VERTEX_TEXTURE_IMAGE_UNITS");
	HX_MARK_MEMBER_NAME(MAX_TEXTURE_IMAGE_UNITS,"MAX_TEXTURE_IMAGE_UNITS");
	HX_MARK_MEMBER_NAME(MAX_FRAGMENT_UNIFORM_VECTORS,"MAX_FRAGMENT_UNIFORM_VECTORS");
	HX_MARK_MEMBER_NAME(SHADER_TYPE,"SHADER_TYPE");
	HX_MARK_MEMBER_NAME(DELETE_STATUS,"DELETE_STATUS");
	HX_MARK_MEMBER_NAME(LINK_STATUS,"LINK_STATUS");
	HX_MARK_MEMBER_NAME(VALIDATE_STATUS,"VALIDATE_STATUS");
	HX_MARK_MEMBER_NAME(ATTACHED_SHADERS,"ATTACHED_SHADERS");
	HX_MARK_MEMBER_NAME(ACTIVE_UNIFORMS,"ACTIVE_UNIFORMS");
	HX_MARK_MEMBER_NAME(ACTIVE_UNIFORMS_MAX_LENGTH,"ACTIVE_UNIFORMS_MAX_LENGTH");
	HX_MARK_MEMBER_NAME(ACTIVE_ATTRIBUTES,"ACTIVE_ATTRIBUTES");
	HX_MARK_MEMBER_NAME(ACTIVE_ATTRIBUTES_MAX_LENGTH,"ACTIVE_ATTRIBUTES_MAX_LENGTH");
	HX_MARK_MEMBER_NAME(SHADING_LANGUAGE_VERSION,"SHADING_LANGUAGE_VERSION");
	HX_MARK_MEMBER_NAME(CURRENT_PROGRAM,"CURRENT_PROGRAM");
	HX_MARK_MEMBER_NAME(NEVER,"NEVER");
	HX_MARK_MEMBER_NAME(LESS,"LESS");
	HX_MARK_MEMBER_NAME(EQUAL,"EQUAL");
	HX_MARK_MEMBER_NAME(LEQUAL,"LEQUAL");
	HX_MARK_MEMBER_NAME(GREATER,"GREATER");
	HX_MARK_MEMBER_NAME(NOTEQUAL,"NOTEQUAL");
	HX_MARK_MEMBER_NAME(GEQUAL,"GEQUAL");
	HX_MARK_MEMBER_NAME(ALWAYS,"ALWAYS");
	HX_MARK_MEMBER_NAME(KEEP,"KEEP");
	HX_MARK_MEMBER_NAME(REPLACE,"REPLACE");
	HX_MARK_MEMBER_NAME(INCR,"INCR");
	HX_MARK_MEMBER_NAME(DECR,"DECR");
	HX_MARK_MEMBER_NAME(INVERT,"INVERT");
	HX_MARK_MEMBER_NAME(INCR_WRAP,"INCR_WRAP");
	HX_MARK_MEMBER_NAME(DECR_WRAP,"DECR_WRAP");
	HX_MARK_MEMBER_NAME(VENDOR,"VENDOR");
	HX_MARK_MEMBER_NAME(RENDERER,"RENDERER");
	HX_MARK_MEMBER_NAME(VERSION,"VERSION");
	HX_MARK_MEMBER_NAME(EXTENSIONS,"EXTENSIONS");
	HX_MARK_MEMBER_NAME(NEAREST,"NEAREST");
	HX_MARK_MEMBER_NAME(LINEAR,"LINEAR");
	HX_MARK_MEMBER_NAME(NEAREST_MIPMAP_NEAREST,"NEAREST_MIPMAP_NEAREST");
	HX_MARK_MEMBER_NAME(LINEAR_MIPMAP_NEAREST,"LINEAR_MIPMAP_NEAREST");
	HX_MARK_MEMBER_NAME(NEAREST_MIPMAP_LINEAR,"NEAREST_MIPMAP_LINEAR");
	HX_MARK_MEMBER_NAME(LINEAR_MIPMAP_LINEAR,"LINEAR_MIPMAP_LINEAR");
	HX_MARK_MEMBER_NAME(TEXTURE_MAG_FILTER,"TEXTURE_MAG_FILTER");
	HX_MARK_MEMBER_NAME(TEXTURE_MIN_FILTER,"TEXTURE_MIN_FILTER");
	HX_MARK_MEMBER_NAME(TEXTURE_WRAP_S,"TEXTURE_WRAP_S");
	HX_MARK_MEMBER_NAME(TEXTURE_WRAP_T,"TEXTURE_WRAP_T");
	HX_MARK_MEMBER_NAME(TEXTURE,"TEXTURE");
	HX_MARK_MEMBER_NAME(TEXTURE_CUBE_MAP,"TEXTURE_CUBE_MAP");
	HX_MARK_MEMBER_NAME(TEXTURE_BINDING_CUBE_MAP,"TEXTURE_BINDING_CUBE_MAP");
	HX_MARK_MEMBER_NAME(TEXTURE_CUBE_MAP_POSITIVE_X,"TEXTURE_CUBE_MAP_POSITIVE_X");
	HX_MARK_MEMBER_NAME(TEXTURE_CUBE_MAP_NEGATIVE_X,"TEXTURE_CUBE_MAP_NEGATIVE_X");
	HX_MARK_MEMBER_NAME(TEXTURE_CUBE_MAP_POSITIVE_Y,"TEXTURE_CUBE_MAP_POSITIVE_Y");
	HX_MARK_MEMBER_NAME(TEXTURE_CUBE_MAP_NEGATIVE_Y,"TEXTURE_CUBE_MAP_NEGATIVE_Y");
	HX_MARK_MEMBER_NAME(TEXTURE_CUBE_MAP_POSITIVE_Z,"TEXTURE_CUBE_MAP_POSITIVE_Z");
	HX_MARK_MEMBER_NAME(TEXTURE_CUBE_MAP_NEGATIVE_Z,"TEXTURE_CUBE_MAP_NEGATIVE_Z");
	HX_MARK_MEMBER_NAME(MAX_CUBE_MAP_TEXTURE_SIZE,"MAX_CUBE_MAP_TEXTURE_SIZE");
	HX_MARK_MEMBER_NAME(TEXTURE0,"TEXTURE0");
	HX_MARK_MEMBER_NAME(TEXTURE1,"TEXTURE1");
	HX_MARK_MEMBER_NAME(TEXTURE2,"TEXTURE2");
	HX_MARK_MEMBER_NAME(TEXTURE3,"TEXTURE3");
	HX_MARK_MEMBER_NAME(TEXTURE4,"TEXTURE4");
	HX_MARK_MEMBER_NAME(TEXTURE5,"TEXTURE5");
	HX_MARK_MEMBER_NAME(TEXTURE6,"TEXTURE6");
	HX_MARK_MEMBER_NAME(TEXTURE7,"TEXTURE7");
	HX_MARK_MEMBER_NAME(TEXTURE8,"TEXTURE8");
	HX_MARK_MEMBER_NAME(TEXTURE9,"TEXTURE9");
	HX_MARK_MEMBER_NAME(TEXTURE10,"TEXTURE10");
	HX_MARK_MEMBER_NAME(TEXTURE11,"TEXTURE11");
	HX_MARK_MEMBER_NAME(TEXTURE12,"TEXTURE12");
	HX_MARK_MEMBER_NAME(TEXTURE13,"TEXTURE13");
	HX_MARK_MEMBER_NAME(TEXTURE14,"TEXTURE14");
	HX_MARK_MEMBER_NAME(TEXTURE15,"TEXTURE15");
	HX_MARK_MEMBER_NAME(TEXTURE16,"TEXTURE16");
	HX_MARK_MEMBER_NAME(TEXTURE17,"TEXTURE17");
	HX_MARK_MEMBER_NAME(TEXTURE18,"TEXTURE18");
	HX_MARK_MEMBER_NAME(TEXTURE19,"TEXTURE19");
	HX_MARK_MEMBER_NAME(TEXTURE20,"TEXTURE20");
	HX_MARK_MEMBER_NAME(TEXTURE21,"TEXTURE21");
	HX_MARK_MEMBER_NAME(TEXTURE22,"TEXTURE22");
	HX_MARK_MEMBER_NAME(TEXTURE23,"TEXTURE23");
	HX_MARK_MEMBER_NAME(TEXTURE24,"TEXTURE24");
	HX_MARK_MEMBER_NAME(TEXTURE25,"TEXTURE25");
	HX_MARK_MEMBER_NAME(TEXTURE26,"TEXTURE26");
	HX_MARK_MEMBER_NAME(TEXTURE27,"TEXTURE27");
	HX_MARK_MEMBER_NAME(TEXTURE28,"TEXTURE28");
	HX_MARK_MEMBER_NAME(TEXTURE29,"TEXTURE29");
	HX_MARK_MEMBER_NAME(TEXTURE30,"TEXTURE30");
	HX_MARK_MEMBER_NAME(TEXTURE31,"TEXTURE31");
	HX_MARK_MEMBER_NAME(ACTIVE_TEXTURE,"ACTIVE_TEXTURE");
	HX_MARK_MEMBER_NAME(REPEAT,"REPEAT");
	HX_MARK_MEMBER_NAME(CLAMP_TO_EDGE,"CLAMP_TO_EDGE");
	HX_MARK_MEMBER_NAME(MIRRORED_REPEAT,"MIRRORED_REPEAT");
	HX_MARK_MEMBER_NAME(FLOAT_VEC2,"FLOAT_VEC2");
	HX_MARK_MEMBER_NAME(FLOAT_VEC3,"FLOAT_VEC3");
	HX_MARK_MEMBER_NAME(FLOAT_VEC4,"FLOAT_VEC4");
	HX_MARK_MEMBER_NAME(INT_VEC2,"INT_VEC2");
	HX_MARK_MEMBER_NAME(INT_VEC3,"INT_VEC3");
	HX_MARK_MEMBER_NAME(INT_VEC4,"INT_VEC4");
	HX_MARK_MEMBER_NAME(BOOL,"BOOL");
	HX_MARK_MEMBER_NAME(BOOL_VEC2,"BOOL_VEC2");
	HX_MARK_MEMBER_NAME(BOOL_VEC3,"BOOL_VEC3");
	HX_MARK_MEMBER_NAME(BOOL_VEC4,"BOOL_VEC4");
	HX_MARK_MEMBER_NAME(FLOAT_MAT2,"FLOAT_MAT2");
	HX_MARK_MEMBER_NAME(FLOAT_MAT3,"FLOAT_MAT3");
	HX_MARK_MEMBER_NAME(FLOAT_MAT4,"FLOAT_MAT4");
	HX_MARK_MEMBER_NAME(SAMPLER_2D,"SAMPLER_2D");
	HX_MARK_MEMBER_NAME(SAMPLER_CUBE,"SAMPLER_CUBE");
	HX_MARK_MEMBER_NAME(VERTEX_ATTRIB_ARRAY_ENABLED,"VERTEX_ATTRIB_ARRAY_ENABLED");
	HX_MARK_MEMBER_NAME(VERTEX_ATTRIB_ARRAY_SIZE,"VERTEX_ATTRIB_ARRAY_SIZE");
	HX_MARK_MEMBER_NAME(VERTEX_ATTRIB_ARRAY_STRIDE,"VERTEX_ATTRIB_ARRAY_STRIDE");
	HX_MARK_MEMBER_NAME(VERTEX_ATTRIB_ARRAY_TYPE,"VERTEX_ATTRIB_ARRAY_TYPE");
	HX_MARK_MEMBER_NAME(VERTEX_ATTRIB_ARRAY_NORMALIZED,"VERTEX_ATTRIB_ARRAY_NORMALIZED");
	HX_MARK_MEMBER_NAME(VERTEX_ATTRIB_ARRAY_POINTER,"VERTEX_ATTRIB_ARRAY_POINTER");
	HX_MARK_MEMBER_NAME(VERTEX_ATTRIB_ARRAY_BUFFER_BINDING,"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(IMPLEMENTATION_COLOR_READ_TYPE,"IMPLEMENTATION_COLOR_READ_TYPE");
	HX_MARK_MEMBER_NAME(IMPLEMENTATION_COLOR_READ_FORMAT,"IMPLEMENTATION_COLOR_READ_FORMAT");
	HX_MARK_MEMBER_NAME(VERTEX_PROGRAM_POINT_SIZE,"VERTEX_PROGRAM_POINT_SIZE");
	HX_MARK_MEMBER_NAME(POINT_SPRITE,"POINT_SPRITE");
	HX_MARK_MEMBER_NAME(COMPILE_STATUS,"COMPILE_STATUS");
	HX_MARK_MEMBER_NAME(INFO_LOG_LENGTH,"INFO_LOG_LENGTH");
	HX_MARK_MEMBER_NAME(SHADER_SOURCE_LENGTH,"SHADER_SOURCE_LENGTH");
	HX_MARK_MEMBER_NAME(SHADER_COMPILER,"SHADER_COMPILER");
	HX_MARK_MEMBER_NAME(SHADER_BINARY_FORMATS,"SHADER_BINARY_FORMATS");
	HX_MARK_MEMBER_NAME(NUM_SHADER_BINARY_FORMATS,"NUM_SHADER_BINARY_FORMATS");
	HX_MARK_MEMBER_NAME(LOW_FLOAT,"LOW_FLOAT");
	HX_MARK_MEMBER_NAME(MEDIUM_FLOAT,"MEDIUM_FLOAT");
	HX_MARK_MEMBER_NAME(HIGH_FLOAT,"HIGH_FLOAT");
	HX_MARK_MEMBER_NAME(LOW_INT,"LOW_INT");
	HX_MARK_MEMBER_NAME(MEDIUM_INT,"MEDIUM_INT");
	HX_MARK_MEMBER_NAME(HIGH_INT,"HIGH_INT");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER,"FRAMEBUFFER");
	HX_MARK_MEMBER_NAME(RENDERBUFFER,"RENDERBUFFER");
	HX_MARK_MEMBER_NAME(RGBA4,"RGBA4");
	HX_MARK_MEMBER_NAME(RGB5_A1,"RGB5_A1");
	HX_MARK_MEMBER_NAME(RGB565,"RGB565");
	HX_MARK_MEMBER_NAME(DEPTH_COMPONENT16,"DEPTH_COMPONENT16");
	HX_MARK_MEMBER_NAME(STENCIL_INDEX,"STENCIL_INDEX");
	HX_MARK_MEMBER_NAME(STENCIL_INDEX8,"STENCIL_INDEX8");
	HX_MARK_MEMBER_NAME(DEPTH_STENCIL,"DEPTH_STENCIL");
	HX_MARK_MEMBER_NAME(RENDERBUFFER_WIDTH,"RENDERBUFFER_WIDTH");
	HX_MARK_MEMBER_NAME(RENDERBUFFER_HEIGHT,"RENDERBUFFER_HEIGHT");
	HX_MARK_MEMBER_NAME(RENDERBUFFER_INTERNAL_FORMAT,"RENDERBUFFER_INTERNAL_FORMAT");
	HX_MARK_MEMBER_NAME(RENDERBUFFER_RED_SIZE,"RENDERBUFFER_RED_SIZE");
	HX_MARK_MEMBER_NAME(RENDERBUFFER_GREEN_SIZE,"RENDERBUFFER_GREEN_SIZE");
	HX_MARK_MEMBER_NAME(RENDERBUFFER_BLUE_SIZE,"RENDERBUFFER_BLUE_SIZE");
	HX_MARK_MEMBER_NAME(RENDERBUFFER_ALPHA_SIZE,"RENDERBUFFER_ALPHA_SIZE");
	HX_MARK_MEMBER_NAME(RENDERBUFFER_DEPTH_SIZE,"RENDERBUFFER_DEPTH_SIZE");
	HX_MARK_MEMBER_NAME(RENDERBUFFER_STENCIL_SIZE,"RENDERBUFFER_STENCIL_SIZE");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE,"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_OBJECT_NAME,"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE,"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE");
	HX_MARK_MEMBER_NAME(COLOR_ATTACHMENT0,"COLOR_ATTACHMENT0");
	HX_MARK_MEMBER_NAME(DEPTH_ATTACHMENT,"DEPTH_ATTACHMENT");
	HX_MARK_MEMBER_NAME(STENCIL_ATTACHMENT,"STENCIL_ATTACHMENT");
	HX_MARK_MEMBER_NAME(DEPTH_STENCIL_ATTACHMENT,"DEPTH_STENCIL_ATTACHMENT");
	HX_MARK_MEMBER_NAME(NONE,"NONE");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_COMPLETE,"FRAMEBUFFER_COMPLETE");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_INCOMPLETE_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_ATTACHMENT");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_INCOMPLETE_DIMENSIONS,"FRAMEBUFFER_INCOMPLETE_DIMENSIONS");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_UNSUPPORTED,"FRAMEBUFFER_UNSUPPORTED");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_BINDING,"FRAMEBUFFER_BINDING");
	HX_MARK_MEMBER_NAME(RENDERBUFFER_BINDING,"RENDERBUFFER_BINDING");
	HX_MARK_MEMBER_NAME(MAX_RENDERBUFFER_SIZE,"MAX_RENDERBUFFER_SIZE");
	HX_MARK_MEMBER_NAME(INVALID_FRAMEBUFFER_OPERATION,"INVALID_FRAMEBUFFER_OPERATION");
	HX_MARK_MEMBER_NAME(UNPACK_FLIP_Y_WEBGL,"UNPACK_FLIP_Y_WEBGL");
	HX_MARK_MEMBER_NAME(UNPACK_PREMULTIPLY_ALPHA_WEBGL,"UNPACK_PREMULTIPLY_ALPHA_WEBGL");
	HX_MARK_MEMBER_NAME(CONTEXT_LOST_WEBGL,"CONTEXT_LOST_WEBGL");
	HX_MARK_MEMBER_NAME(UNPACK_COLORSPACE_CONVERSION_WEBGL,"UNPACK_COLORSPACE_CONVERSION_WEBGL");
	HX_MARK_MEMBER_NAME(BROWSER_DEFAULT_WEBGL,"BROWSER_DEFAULT_WEBGL");
	HX_MARK_MEMBER_NAME(READ_BUFFER,"READ_BUFFER");
	HX_MARK_MEMBER_NAME(UNPACK_ROW_LENGTH,"UNPACK_ROW_LENGTH");
	HX_MARK_MEMBER_NAME(UNPACK_SKIP_ROWS,"UNPACK_SKIP_ROWS");
	HX_MARK_MEMBER_NAME(UNPACK_SKIP_PIXELS,"UNPACK_SKIP_PIXELS");
	HX_MARK_MEMBER_NAME(PACK_ROW_LENGTH,"PACK_ROW_LENGTH");
	HX_MARK_MEMBER_NAME(PACK_SKIP_ROWS,"PACK_SKIP_ROWS");
	HX_MARK_MEMBER_NAME(PACK_SKIP_PIXELS,"PACK_SKIP_PIXELS");
	HX_MARK_MEMBER_NAME(TEXTURE_BINDING_3D,"TEXTURE_BINDING_3D");
	HX_MARK_MEMBER_NAME(UNPACK_SKIP_IMAGES,"UNPACK_SKIP_IMAGES");
	HX_MARK_MEMBER_NAME(UNPACK_IMAGE_HEIGHT,"UNPACK_IMAGE_HEIGHT");
	HX_MARK_MEMBER_NAME(MAX_3D_TEXTURE_SIZE,"MAX_3D_TEXTURE_SIZE");
	HX_MARK_MEMBER_NAME(MAX_ELEMENTS_VERTICES,"MAX_ELEMENTS_VERTICES");
	HX_MARK_MEMBER_NAME(MAX_ELEMENTS_INDICES,"MAX_ELEMENTS_INDICES");
	HX_MARK_MEMBER_NAME(MAX_TEXTURE_LOD_BIAS,"MAX_TEXTURE_LOD_BIAS");
	HX_MARK_MEMBER_NAME(MAX_FRAGMENT_UNIFORM_COMPONENTS,"MAX_FRAGMENT_UNIFORM_COMPONENTS");
	HX_MARK_MEMBER_NAME(MAX_VERTEX_UNIFORM_COMPONENTS,"MAX_VERTEX_UNIFORM_COMPONENTS");
	HX_MARK_MEMBER_NAME(MAX_ARRAY_TEXTURE_LAYERS,"MAX_ARRAY_TEXTURE_LAYERS");
	HX_MARK_MEMBER_NAME(MIN_PROGRAM_TEXEL_OFFSET,"MIN_PROGRAM_TEXEL_OFFSET");
	HX_MARK_MEMBER_NAME(MAX_PROGRAM_TEXEL_OFFSET,"MAX_PROGRAM_TEXEL_OFFSET");
	HX_MARK_MEMBER_NAME(MAX_VARYING_COMPONENTS,"MAX_VARYING_COMPONENTS");
	HX_MARK_MEMBER_NAME(FRAGMENT_SHADER_DERIVATIVE_HINT,"FRAGMENT_SHADER_DERIVATIVE_HINT");
	HX_MARK_MEMBER_NAME(RASTERIZER_DISCARD,"RASTERIZER_DISCARD");
	HX_MARK_MEMBER_NAME(VERTEX_ARRAY_BINDING,"VERTEX_ARRAY_BINDING");
	HX_MARK_MEMBER_NAME(MAX_VERTEX_OUTPUT_COMPONENTS,"MAX_VERTEX_OUTPUT_COMPONENTS");
	HX_MARK_MEMBER_NAME(MAX_FRAGMENT_INPUT_COMPONENTS,"MAX_FRAGMENT_INPUT_COMPONENTS");
	HX_MARK_MEMBER_NAME(MAX_SERVER_WAIT_TIMEOUT,"MAX_SERVER_WAIT_TIMEOUT");
	HX_MARK_MEMBER_NAME(MAX_ELEMENT_INDEX,"MAX_ELEMENT_INDEX");
	HX_MARK_MEMBER_NAME(RED,"RED");
	HX_MARK_MEMBER_NAME(RGB8,"RGB8");
	HX_MARK_MEMBER_NAME(RGBA8,"RGBA8");
	HX_MARK_MEMBER_NAME(RGB10_A2,"RGB10_A2");
	HX_MARK_MEMBER_NAME(TEXTURE_3D,"TEXTURE_3D");
	HX_MARK_MEMBER_NAME(TEXTURE_WRAP_R,"TEXTURE_WRAP_R");
	HX_MARK_MEMBER_NAME(TEXTURE_MIN_LOD,"TEXTURE_MIN_LOD");
	HX_MARK_MEMBER_NAME(TEXTURE_MAX_LOD,"TEXTURE_MAX_LOD");
	HX_MARK_MEMBER_NAME(TEXTURE_BASE_LEVEL,"TEXTURE_BASE_LEVEL");
	HX_MARK_MEMBER_NAME(TEXTURE_MAX_LEVEL,"TEXTURE_MAX_LEVEL");
	HX_MARK_MEMBER_NAME(TEXTURE_COMPARE_MODE,"TEXTURE_COMPARE_MODE");
	HX_MARK_MEMBER_NAME(TEXTURE_COMPARE_FUNC,"TEXTURE_COMPARE_FUNC");
	HX_MARK_MEMBER_NAME(SRGB,"SRGB");
	HX_MARK_MEMBER_NAME(SRGB8,"SRGB8");
	HX_MARK_MEMBER_NAME(SRGB8_ALPHA8,"SRGB8_ALPHA8");
	HX_MARK_MEMBER_NAME(COMPARE_REF_TO_TEXTURE,"COMPARE_REF_TO_TEXTURE");
	HX_MARK_MEMBER_NAME(RGBA32F,"RGBA32F");
	HX_MARK_MEMBER_NAME(RGB32F,"RGB32F");
	HX_MARK_MEMBER_NAME(RGBA16F,"RGBA16F");
	HX_MARK_MEMBER_NAME(RGB16F,"RGB16F");
	HX_MARK_MEMBER_NAME(TEXTURE_2D_ARRAY,"TEXTURE_2D_ARRAY");
	HX_MARK_MEMBER_NAME(TEXTURE_BINDING_2D_ARRAY,"TEXTURE_BINDING_2D_ARRAY");
	HX_MARK_MEMBER_NAME(R11F_G11F_B10F,"R11F_G11F_B10F");
	HX_MARK_MEMBER_NAME(RGB9_E5,"RGB9_E5");
	HX_MARK_MEMBER_NAME(RGBA32UI,"RGBA32UI");
	HX_MARK_MEMBER_NAME(RGB32UI,"RGB32UI");
	HX_MARK_MEMBER_NAME(RGBA16UI,"RGBA16UI");
	HX_MARK_MEMBER_NAME(RGB16UI,"RGB16UI");
	HX_MARK_MEMBER_NAME(RGBA8UI,"RGBA8UI");
	HX_MARK_MEMBER_NAME(RGB8UI,"RGB8UI");
	HX_MARK_MEMBER_NAME(RGBA32I,"RGBA32I");
	HX_MARK_MEMBER_NAME(RGB32I,"RGB32I");
	HX_MARK_MEMBER_NAME(RGBA16I,"RGBA16I");
	HX_MARK_MEMBER_NAME(RGB16I,"RGB16I");
	HX_MARK_MEMBER_NAME(RGBA8I,"RGBA8I");
	HX_MARK_MEMBER_NAME(RGB8I,"RGB8I");
	HX_MARK_MEMBER_NAME(RED_INTEGER,"RED_INTEGER");
	HX_MARK_MEMBER_NAME(RGB_INTEGER,"RGB_INTEGER");
	HX_MARK_MEMBER_NAME(RGBA_INTEGER,"RGBA_INTEGER");
	HX_MARK_MEMBER_NAME(R8,"R8");
	HX_MARK_MEMBER_NAME(RG8,"RG8");
	HX_MARK_MEMBER_NAME(R16F,"R16F");
	HX_MARK_MEMBER_NAME(R32F,"R32F");
	HX_MARK_MEMBER_NAME(RG16F,"RG16F");
	HX_MARK_MEMBER_NAME(RG32F,"RG32F");
	HX_MARK_MEMBER_NAME(R8I,"R8I");
	HX_MARK_MEMBER_NAME(R8UI,"R8UI");
	HX_MARK_MEMBER_NAME(R16I,"R16I");
	HX_MARK_MEMBER_NAME(R16UI,"R16UI");
	HX_MARK_MEMBER_NAME(R32I,"R32I");
	HX_MARK_MEMBER_NAME(R32UI,"R32UI");
	HX_MARK_MEMBER_NAME(RG8I,"RG8I");
	HX_MARK_MEMBER_NAME(RG8UI,"RG8UI");
	HX_MARK_MEMBER_NAME(RG16I,"RG16I");
	HX_MARK_MEMBER_NAME(RG16UI,"RG16UI");
	HX_MARK_MEMBER_NAME(RG32I,"RG32I");
	HX_MARK_MEMBER_NAME(RG32UI,"RG32UI");
	HX_MARK_MEMBER_NAME(R8_SNORM,"R8_SNORM");
	HX_MARK_MEMBER_NAME(RG8_SNORM,"RG8_SNORM");
	HX_MARK_MEMBER_NAME(RGB8_SNORM,"RGB8_SNORM");
	HX_MARK_MEMBER_NAME(RGBA8_SNORM,"RGBA8_SNORM");
	HX_MARK_MEMBER_NAME(RGB10_A2UI,"RGB10_A2UI");
	HX_MARK_MEMBER_NAME(TEXTURE_IMMUTABLE_FORMAT,"TEXTURE_IMMUTABLE_FORMAT");
	HX_MARK_MEMBER_NAME(TEXTURE_IMMUTABLE_LEVELS,"TEXTURE_IMMUTABLE_LEVELS");
	HX_MARK_MEMBER_NAME(UNSIGNED_INT_2_10_10_10_REV,"UNSIGNED_INT_2_10_10_10_REV");
	HX_MARK_MEMBER_NAME(UNSIGNED_INT_10F_11F_11F_REV,"UNSIGNED_INT_10F_11F_11F_REV");
	HX_MARK_MEMBER_NAME(UNSIGNED_INT_5_9_9_9_REV,"UNSIGNED_INT_5_9_9_9_REV");
	HX_MARK_MEMBER_NAME(FLOAT_32_UNSIGNED_INT_24_8_REV,"FLOAT_32_UNSIGNED_INT_24_8_REV");
	HX_MARK_MEMBER_NAME(UNSIGNED_INT_24_8,"UNSIGNED_INT_24_8");
	HX_MARK_MEMBER_NAME(HALF_FLOAT,"HALF_FLOAT");
	HX_MARK_MEMBER_NAME(RG,"RG");
	HX_MARK_MEMBER_NAME(RG_INTEGER,"RG_INTEGER");
	HX_MARK_MEMBER_NAME(INT_2_10_10_10_REV,"INT_2_10_10_10_REV");
	HX_MARK_MEMBER_NAME(CURRENT_QUERY,"CURRENT_QUERY");
	HX_MARK_MEMBER_NAME(QUERY_RESULT,"QUERY_RESULT");
	HX_MARK_MEMBER_NAME(QUERY_RESULT_AVAILABLE,"QUERY_RESULT_AVAILABLE");
	HX_MARK_MEMBER_NAME(ANY_SAMPLES_PASSED,"ANY_SAMPLES_PASSED");
	HX_MARK_MEMBER_NAME(ANY_SAMPLES_PASSED_CONSERVATIVE,"ANY_SAMPLES_PASSED_CONSERVATIVE");
	HX_MARK_MEMBER_NAME(MAX_DRAW_BUFFERS,"MAX_DRAW_BUFFERS");
	HX_MARK_MEMBER_NAME(DRAW_BUFFER0,"DRAW_BUFFER0");
	HX_MARK_MEMBER_NAME(DRAW_BUFFER1,"DRAW_BUFFER1");
	HX_MARK_MEMBER_NAME(DRAW_BUFFER2,"DRAW_BUFFER2");
	HX_MARK_MEMBER_NAME(DRAW_BUFFER3,"DRAW_BUFFER3");
	HX_MARK_MEMBER_NAME(DRAW_BUFFER4,"DRAW_BUFFER4");
	HX_MARK_MEMBER_NAME(DRAW_BUFFER5,"DRAW_BUFFER5");
	HX_MARK_MEMBER_NAME(DRAW_BUFFER6,"DRAW_BUFFER6");
	HX_MARK_MEMBER_NAME(DRAW_BUFFER7,"DRAW_BUFFER7");
	HX_MARK_MEMBER_NAME(DRAW_BUFFER8,"DRAW_BUFFER8");
	HX_MARK_MEMBER_NAME(DRAW_BUFFER9,"DRAW_BUFFER9");
	HX_MARK_MEMBER_NAME(DRAW_BUFFER10,"DRAW_BUFFER10");
	HX_MARK_MEMBER_NAME(DRAW_BUFFER11,"DRAW_BUFFER11");
	HX_MARK_MEMBER_NAME(DRAW_BUFFER12,"DRAW_BUFFER12");
	HX_MARK_MEMBER_NAME(DRAW_BUFFER13,"DRAW_BUFFER13");
	HX_MARK_MEMBER_NAME(DRAW_BUFFER14,"DRAW_BUFFER14");
	HX_MARK_MEMBER_NAME(DRAW_BUFFER15,"DRAW_BUFFER15");
	HX_MARK_MEMBER_NAME(MAX_COLOR_ATTACHMENTS,"MAX_COLOR_ATTACHMENTS");
	HX_MARK_MEMBER_NAME(COLOR_ATTACHMENT1,"COLOR_ATTACHMENT1");
	HX_MARK_MEMBER_NAME(COLOR_ATTACHMENT2,"COLOR_ATTACHMENT2");
	HX_MARK_MEMBER_NAME(COLOR_ATTACHMENT3,"COLOR_ATTACHMENT3");
	HX_MARK_MEMBER_NAME(COLOR_ATTACHMENT4,"COLOR_ATTACHMENT4");
	HX_MARK_MEMBER_NAME(COLOR_ATTACHMENT5,"COLOR_ATTACHMENT5");
	HX_MARK_MEMBER_NAME(COLOR_ATTACHMENT6,"COLOR_ATTACHMENT6");
	HX_MARK_MEMBER_NAME(COLOR_ATTACHMENT7,"COLOR_ATTACHMENT7");
	HX_MARK_MEMBER_NAME(COLOR_ATTACHMENT8,"COLOR_ATTACHMENT8");
	HX_MARK_MEMBER_NAME(COLOR_ATTACHMENT9,"COLOR_ATTACHMENT9");
	HX_MARK_MEMBER_NAME(COLOR_ATTACHMENT10,"COLOR_ATTACHMENT10");
	HX_MARK_MEMBER_NAME(COLOR_ATTACHMENT11,"COLOR_ATTACHMENT11");
	HX_MARK_MEMBER_NAME(COLOR_ATTACHMENT12,"COLOR_ATTACHMENT12");
	HX_MARK_MEMBER_NAME(COLOR_ATTACHMENT13,"COLOR_ATTACHMENT13");
	HX_MARK_MEMBER_NAME(COLOR_ATTACHMENT14,"COLOR_ATTACHMENT14");
	HX_MARK_MEMBER_NAME(COLOR_ATTACHMENT15,"COLOR_ATTACHMENT15");
	HX_MARK_MEMBER_NAME(SAMPLER_3D,"SAMPLER_3D");
	HX_MARK_MEMBER_NAME(SAMPLER_2D_SHADOW,"SAMPLER_2D_SHADOW");
	HX_MARK_MEMBER_NAME(SAMPLER_2D_ARRAY,"SAMPLER_2D_ARRAY");
	HX_MARK_MEMBER_NAME(SAMPLER_2D_ARRAY_SHADOW,"SAMPLER_2D_ARRAY_SHADOW");
	HX_MARK_MEMBER_NAME(SAMPLER_CUBE_SHADOW,"SAMPLER_CUBE_SHADOW");
	HX_MARK_MEMBER_NAME(INT_SAMPLER_2D,"INT_SAMPLER_2D");
	HX_MARK_MEMBER_NAME(INT_SAMPLER_3D,"INT_SAMPLER_3D");
	HX_MARK_MEMBER_NAME(INT_SAMPLER_CUBE,"INT_SAMPLER_CUBE");
	HX_MARK_MEMBER_NAME(INT_SAMPLER_2D_ARRAY,"INT_SAMPLER_2D_ARRAY");
	HX_MARK_MEMBER_NAME(UNSIGNED_INT_SAMPLER_2D,"UNSIGNED_INT_SAMPLER_2D");
	HX_MARK_MEMBER_NAME(UNSIGNED_INT_SAMPLER_3D,"UNSIGNED_INT_SAMPLER_3D");
	HX_MARK_MEMBER_NAME(UNSIGNED_INT_SAMPLER_CUBE,"UNSIGNED_INT_SAMPLER_CUBE");
	HX_MARK_MEMBER_NAME(UNSIGNED_INT_SAMPLER_2D_ARRAY,"UNSIGNED_INT_SAMPLER_2D_ARRAY");
	HX_MARK_MEMBER_NAME(MAX_SAMPLES,"MAX_SAMPLES");
	HX_MARK_MEMBER_NAME(SAMPLER_BINDING,"SAMPLER_BINDING");
	HX_MARK_MEMBER_NAME(PIXEL_PACK_BUFFER,"PIXEL_PACK_BUFFER");
	HX_MARK_MEMBER_NAME(PIXEL_UNPACK_BUFFER,"PIXEL_UNPACK_BUFFER");
	HX_MARK_MEMBER_NAME(PIXEL_PACK_BUFFER_BINDING,"PIXEL_PACK_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(PIXEL_UNPACK_BUFFER_BINDING,"PIXEL_UNPACK_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(COPY_READ_BUFFER,"COPY_READ_BUFFER");
	HX_MARK_MEMBER_NAME(COPY_WRITE_BUFFER,"COPY_WRITE_BUFFER");
	HX_MARK_MEMBER_NAME(COPY_READ_BUFFER_BINDING,"COPY_READ_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(COPY_WRITE_BUFFER_BINDING,"COPY_WRITE_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(FLOAT_MAT2x3,"FLOAT_MAT2x3");
	HX_MARK_MEMBER_NAME(FLOAT_MAT2x4,"FLOAT_MAT2x4");
	HX_MARK_MEMBER_NAME(FLOAT_MAT3x2,"FLOAT_MAT3x2");
	HX_MARK_MEMBER_NAME(FLOAT_MAT3x4,"FLOAT_MAT3x4");
	HX_MARK_MEMBER_NAME(FLOAT_MAT4x2,"FLOAT_MAT4x2");
	HX_MARK_MEMBER_NAME(FLOAT_MAT4x3,"FLOAT_MAT4x3");
	HX_MARK_MEMBER_NAME(UNSIGNED_INT_VEC2,"UNSIGNED_INT_VEC2");
	HX_MARK_MEMBER_NAME(UNSIGNED_INT_VEC3,"UNSIGNED_INT_VEC3");
	HX_MARK_MEMBER_NAME(UNSIGNED_INT_VEC4,"UNSIGNED_INT_VEC4");
	HX_MARK_MEMBER_NAME(UNSIGNED_NORMALIZED,"UNSIGNED_NORMALIZED");
	HX_MARK_MEMBER_NAME(SIGNED_NORMALIZED,"SIGNED_NORMALIZED");
	HX_MARK_MEMBER_NAME(VERTEX_ATTRIB_ARRAY_INTEGER,"VERTEX_ATTRIB_ARRAY_INTEGER");
	HX_MARK_MEMBER_NAME(VERTEX_ATTRIB_ARRAY_DIVISOR,"VERTEX_ATTRIB_ARRAY_DIVISOR");
	HX_MARK_MEMBER_NAME(TRANSFORM_FEEDBACK_BUFFER_MODE,"TRANSFORM_FEEDBACK_BUFFER_MODE");
	HX_MARK_MEMBER_NAME(MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS,"MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS");
	HX_MARK_MEMBER_NAME(TRANSFORM_FEEDBACK_VARYINGS,"TRANSFORM_FEEDBACK_VARYINGS");
	HX_MARK_MEMBER_NAME(TRANSFORM_FEEDBACK_BUFFER_START,"TRANSFORM_FEEDBACK_BUFFER_START");
	HX_MARK_MEMBER_NAME(TRANSFORM_FEEDBACK_BUFFER_SIZE,"TRANSFORM_FEEDBACK_BUFFER_SIZE");
	HX_MARK_MEMBER_NAME(TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN,"TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN");
	HX_MARK_MEMBER_NAME(MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS,"MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS");
	HX_MARK_MEMBER_NAME(MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS,"MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS");
	HX_MARK_MEMBER_NAME(INTERLEAVED_ATTRIBS,"INTERLEAVED_ATTRIBS");
	HX_MARK_MEMBER_NAME(SEPARATE_ATTRIBS,"SEPARATE_ATTRIBS");
	HX_MARK_MEMBER_NAME(TRANSFORM_FEEDBACK_BUFFER,"TRANSFORM_FEEDBACK_BUFFER");
	HX_MARK_MEMBER_NAME(TRANSFORM_FEEDBACK_BUFFER_BINDING,"TRANSFORM_FEEDBACK_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(TRANSFORM_FEEDBACK,"TRANSFORM_FEEDBACK");
	HX_MARK_MEMBER_NAME(TRANSFORM_FEEDBACK_PAUSED,"TRANSFORM_FEEDBACK_PAUSED");
	HX_MARK_MEMBER_NAME(TRANSFORM_FEEDBACK_ACTIVE,"TRANSFORM_FEEDBACK_ACTIVE");
	HX_MARK_MEMBER_NAME(TRANSFORM_FEEDBACK_BINDING,"TRANSFORM_FEEDBACK_BINDING");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING,"FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE,"FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_RED_SIZE,"FRAMEBUFFER_ATTACHMENT_RED_SIZE");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_GREEN_SIZE,"FRAMEBUFFER_ATTACHMENT_GREEN_SIZE");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_BLUE_SIZE,"FRAMEBUFFER_ATTACHMENT_BLUE_SIZE");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE,"FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE,"FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE,"FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_DEFAULT,"FRAMEBUFFER_DEFAULT");
	HX_MARK_MEMBER_NAME(DEPTH24_STENCIL8,"DEPTH24_STENCIL8");
	HX_MARK_MEMBER_NAME(DRAW_FRAMEBUFFER_BINDING,"DRAW_FRAMEBUFFER_BINDING");
	HX_MARK_MEMBER_NAME(READ_FRAMEBUFFER,"READ_FRAMEBUFFER");
	HX_MARK_MEMBER_NAME(DRAW_FRAMEBUFFER,"DRAW_FRAMEBUFFER");
	HX_MARK_MEMBER_NAME(READ_FRAMEBUFFER_BINDING,"READ_FRAMEBUFFER_BINDING");
	HX_MARK_MEMBER_NAME(RENDERBUFFER_SAMPLES,"RENDERBUFFER_SAMPLES");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER");
	HX_MARK_MEMBER_NAME(FRAMEBUFFER_INCOMPLETE_MULTISAMPLE,"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE");
	HX_MARK_MEMBER_NAME(UNIFORM_BUFFER,"UNIFORM_BUFFER");
	HX_MARK_MEMBER_NAME(UNIFORM_BUFFER_BINDING,"UNIFORM_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(UNIFORM_BUFFER_START,"UNIFORM_BUFFER_START");
	HX_MARK_MEMBER_NAME(UNIFORM_BUFFER_SIZE,"UNIFORM_BUFFER_SIZE");
	HX_MARK_MEMBER_NAME(MAX_VERTEX_UNIFORM_BLOCKS,"MAX_VERTEX_UNIFORM_BLOCKS");
	HX_MARK_MEMBER_NAME(MAX_FRAGMENT_UNIFORM_BLOCKS,"MAX_FRAGMENT_UNIFORM_BLOCKS");
	HX_MARK_MEMBER_NAME(MAX_COMBINED_UNIFORM_BLOCKS,"MAX_COMBINED_UNIFORM_BLOCKS");
	HX_MARK_MEMBER_NAME(MAX_UNIFORM_BUFFER_BINDINGS,"MAX_UNIFORM_BUFFER_BINDINGS");
	HX_MARK_MEMBER_NAME(MAX_UNIFORM_BLOCK_SIZE,"MAX_UNIFORM_BLOCK_SIZE");
	HX_MARK_MEMBER_NAME(MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS,"MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS");
	HX_MARK_MEMBER_NAME(MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS,"MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS");
	HX_MARK_MEMBER_NAME(UNIFORM_BUFFER_OFFSET_ALIGNMENT,"UNIFORM_BUFFER_OFFSET_ALIGNMENT");
	HX_MARK_MEMBER_NAME(ACTIVE_UNIFORM_BLOCKS,"ACTIVE_UNIFORM_BLOCKS");
	HX_MARK_MEMBER_NAME(UNIFORM_TYPE,"UNIFORM_TYPE");
	HX_MARK_MEMBER_NAME(UNIFORM_SIZE,"UNIFORM_SIZE");
	HX_MARK_MEMBER_NAME(UNIFORM_BLOCK_INDEX,"UNIFORM_BLOCK_INDEX");
	HX_MARK_MEMBER_NAME(UNIFORM_OFFSET,"UNIFORM_OFFSET");
	HX_MARK_MEMBER_NAME(UNIFORM_ARRAY_STRIDE,"UNIFORM_ARRAY_STRIDE");
	HX_MARK_MEMBER_NAME(UNIFORM_MATRIX_STRIDE,"UNIFORM_MATRIX_STRIDE");
	HX_MARK_MEMBER_NAME(UNIFORM_IS_ROW_MAJOR,"UNIFORM_IS_ROW_MAJOR");
	HX_MARK_MEMBER_NAME(UNIFORM_BLOCK_BINDING,"UNIFORM_BLOCK_BINDING");
	HX_MARK_MEMBER_NAME(UNIFORM_BLOCK_DATA_SIZE,"UNIFORM_BLOCK_DATA_SIZE");
	HX_MARK_MEMBER_NAME(UNIFORM_BLOCK_ACTIVE_UNIFORMS,"UNIFORM_BLOCK_ACTIVE_UNIFORMS");
	HX_MARK_MEMBER_NAME(UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES,"UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES");
	HX_MARK_MEMBER_NAME(UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER,"UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER");
	HX_MARK_MEMBER_NAME(UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER,"UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER");
	HX_MARK_MEMBER_NAME(OBJECT_TYPE,"OBJECT_TYPE");
	HX_MARK_MEMBER_NAME(SYNC_CONDITION,"SYNC_CONDITION");
	HX_MARK_MEMBER_NAME(SYNC_STATUS,"SYNC_STATUS");
	HX_MARK_MEMBER_NAME(SYNC_FLAGS,"SYNC_FLAGS");
	HX_MARK_MEMBER_NAME(SYNC_FENCE,"SYNC_FENCE");
	HX_MARK_MEMBER_NAME(SYNC_GPU_COMMANDS_COMPLETE,"SYNC_GPU_COMMANDS_COMPLETE");
	HX_MARK_MEMBER_NAME(UNSIGNALED,"UNSIGNALED");
	HX_MARK_MEMBER_NAME(SIGNALED,"SIGNALED");
	HX_MARK_MEMBER_NAME(ALREADY_SIGNALED,"ALREADY_SIGNALED");
	HX_MARK_MEMBER_NAME(TIMEOUT_EXPIRED,"TIMEOUT_EXPIRED");
	HX_MARK_MEMBER_NAME(CONDITION_SATISFIED,"CONDITION_SATISFIED");
	HX_MARK_MEMBER_NAME(WAIT_FAILED,"WAIT_FAILED");
	HX_MARK_MEMBER_NAME(SYNC_FLUSH_COMMANDS_BIT,"SYNC_FLUSH_COMMANDS_BIT");
	HX_MARK_MEMBER_NAME(COLOR,"COLOR");
	HX_MARK_MEMBER_NAME(DEPTH,"DEPTH");
	HX_MARK_MEMBER_NAME(STENCIL,"STENCIL");
	HX_MARK_MEMBER_NAME(MIN,"MIN");
	HX_MARK_MEMBER_NAME(MAX,"MAX");
	HX_MARK_MEMBER_NAME(DEPTH_COMPONENT24,"DEPTH_COMPONENT24");
	HX_MARK_MEMBER_NAME(STREAM_READ,"STREAM_READ");
	HX_MARK_MEMBER_NAME(STREAM_COPY,"STREAM_COPY");
	HX_MARK_MEMBER_NAME(STATIC_READ,"STATIC_READ");
	HX_MARK_MEMBER_NAME(STATIC_COPY,"STATIC_COPY");
	HX_MARK_MEMBER_NAME(DYNAMIC_READ,"DYNAMIC_READ");
	HX_MARK_MEMBER_NAME(DYNAMIC_COPY,"DYNAMIC_COPY");
	HX_MARK_MEMBER_NAME(DEPTH_COMPONENT32F,"DEPTH_COMPONENT32F");
	HX_MARK_MEMBER_NAME(DEPTH32F_STENCIL8,"DEPTH32F_STENCIL8");
	HX_MARK_MEMBER_NAME(INVALID_INDEX,"INVALID_INDEX");
	HX_MARK_MEMBER_NAME(TIMEOUT_IGNORED,"TIMEOUT_IGNORED");
	HX_MARK_MEMBER_NAME(MAX_CLIENT_WAIT_TIMEOUT_WEBGL,"MAX_CLIENT_WAIT_TIMEOUT_WEBGL");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(__arrayBufferBinding,"__arrayBufferBinding");
	HX_MARK_MEMBER_NAME(__elementBufferBinding,"__elementBufferBinding");
	HX_MARK_MEMBER_NAME(__contextID,"__contextID");
	HX_MARK_MEMBER_NAME(__currentProgram,"__currentProgram");
	HX_MARK_MEMBER_NAME(__framebufferBinding,"__framebufferBinding");
	HX_MARK_MEMBER_NAME(__initialized,"__initialized");
	HX_MARK_MEMBER_NAME(__isContextLost,"__isContextLost");
	HX_MARK_MEMBER_NAME(__renderbufferBinding,"__renderbufferBinding");
	HX_MARK_MEMBER_NAME(__texture2DBinding,"__texture2DBinding");
	HX_MARK_MEMBER_NAME(__textureCubeMapBinding,"__textureCubeMapBinding");
	HX_MARK_END_CLASS();
}

void NativeGLRenderContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(DEPTH_BUFFER_BIT,"DEPTH_BUFFER_BIT");
	HX_VISIT_MEMBER_NAME(STENCIL_BUFFER_BIT,"STENCIL_BUFFER_BIT");
	HX_VISIT_MEMBER_NAME(COLOR_BUFFER_BIT,"COLOR_BUFFER_BIT");
	HX_VISIT_MEMBER_NAME(POINTS,"POINTS");
	HX_VISIT_MEMBER_NAME(LINES,"LINES");
	HX_VISIT_MEMBER_NAME(LINE_LOOP,"LINE_LOOP");
	HX_VISIT_MEMBER_NAME(LINE_STRIP,"LINE_STRIP");
	HX_VISIT_MEMBER_NAME(TRIANGLES,"TRIANGLES");
	HX_VISIT_MEMBER_NAME(TRIANGLE_STRIP,"TRIANGLE_STRIP");
	HX_VISIT_MEMBER_NAME(TRIANGLE_FAN,"TRIANGLE_FAN");
	HX_VISIT_MEMBER_NAME(ZERO,"ZERO");
	HX_VISIT_MEMBER_NAME(ONE,"ONE");
	HX_VISIT_MEMBER_NAME(SRC_COLOR,"SRC_COLOR");
	HX_VISIT_MEMBER_NAME(ONE_MINUS_SRC_COLOR,"ONE_MINUS_SRC_COLOR");
	HX_VISIT_MEMBER_NAME(SRC_ALPHA,"SRC_ALPHA");
	HX_VISIT_MEMBER_NAME(ONE_MINUS_SRC_ALPHA,"ONE_MINUS_SRC_ALPHA");
	HX_VISIT_MEMBER_NAME(DST_ALPHA,"DST_ALPHA");
	HX_VISIT_MEMBER_NAME(ONE_MINUS_DST_ALPHA,"ONE_MINUS_DST_ALPHA");
	HX_VISIT_MEMBER_NAME(DST_COLOR,"DST_COLOR");
	HX_VISIT_MEMBER_NAME(ONE_MINUS_DST_COLOR,"ONE_MINUS_DST_COLOR");
	HX_VISIT_MEMBER_NAME(SRC_ALPHA_SATURATE,"SRC_ALPHA_SATURATE");
	HX_VISIT_MEMBER_NAME(FUNC_ADD,"FUNC_ADD");
	HX_VISIT_MEMBER_NAME(BLEND_EQUATION,"BLEND_EQUATION");
	HX_VISIT_MEMBER_NAME(BLEND_EQUATION_RGB,"BLEND_EQUATION_RGB");
	HX_VISIT_MEMBER_NAME(BLEND_EQUATION_ALPHA,"BLEND_EQUATION_ALPHA");
	HX_VISIT_MEMBER_NAME(FUNC_SUBTRACT,"FUNC_SUBTRACT");
	HX_VISIT_MEMBER_NAME(FUNC_REVERSE_SUBTRACT,"FUNC_REVERSE_SUBTRACT");
	HX_VISIT_MEMBER_NAME(BLEND_DST_RGB,"BLEND_DST_RGB");
	HX_VISIT_MEMBER_NAME(BLEND_SRC_RGB,"BLEND_SRC_RGB");
	HX_VISIT_MEMBER_NAME(BLEND_DST_ALPHA,"BLEND_DST_ALPHA");
	HX_VISIT_MEMBER_NAME(BLEND_SRC_ALPHA,"BLEND_SRC_ALPHA");
	HX_VISIT_MEMBER_NAME(CONSTANT_COLOR,"CONSTANT_COLOR");
	HX_VISIT_MEMBER_NAME(ONE_MINUS_CONSTANT_COLOR,"ONE_MINUS_CONSTANT_COLOR");
	HX_VISIT_MEMBER_NAME(CONSTANT_ALPHA,"CONSTANT_ALPHA");
	HX_VISIT_MEMBER_NAME(ONE_MINUS_CONSTANT_ALPHA,"ONE_MINUS_CONSTANT_ALPHA");
	HX_VISIT_MEMBER_NAME(BLEND_COLOR,"BLEND_COLOR");
	HX_VISIT_MEMBER_NAME(ARRAY_BUFFER,"ARRAY_BUFFER");
	HX_VISIT_MEMBER_NAME(ELEMENT_ARRAY_BUFFER,"ELEMENT_ARRAY_BUFFER");
	HX_VISIT_MEMBER_NAME(ARRAY_BUFFER_BINDING,"ARRAY_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(ELEMENT_ARRAY_BUFFER_BINDING,"ELEMENT_ARRAY_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(STREAM_DRAW,"STREAM_DRAW");
	HX_VISIT_MEMBER_NAME(STATIC_DRAW,"STATIC_DRAW");
	HX_VISIT_MEMBER_NAME(DYNAMIC_DRAW,"DYNAMIC_DRAW");
	HX_VISIT_MEMBER_NAME(BUFFER_SIZE,"BUFFER_SIZE");
	HX_VISIT_MEMBER_NAME(BUFFER_USAGE,"BUFFER_USAGE");
	HX_VISIT_MEMBER_NAME(CURRENT_VERTEX_ATTRIB,"CURRENT_VERTEX_ATTRIB");
	HX_VISIT_MEMBER_NAME(FRONT,"FRONT");
	HX_VISIT_MEMBER_NAME(BACK,"BACK");
	HX_VISIT_MEMBER_NAME(FRONT_AND_BACK,"FRONT_AND_BACK");
	HX_VISIT_MEMBER_NAME(TEXTURE_2D,"TEXTURE_2D");
	HX_VISIT_MEMBER_NAME(CULL_FACE,"CULL_FACE");
	HX_VISIT_MEMBER_NAME(BLEND,"BLEND");
	HX_VISIT_MEMBER_NAME(DITHER,"DITHER");
	HX_VISIT_MEMBER_NAME(STENCIL_TEST,"STENCIL_TEST");
	HX_VISIT_MEMBER_NAME(DEPTH_TEST,"DEPTH_TEST");
	HX_VISIT_MEMBER_NAME(SCISSOR_TEST,"SCISSOR_TEST");
	HX_VISIT_MEMBER_NAME(POLYGON_OFFSET_FILL,"POLYGON_OFFSET_FILL");
	HX_VISIT_MEMBER_NAME(SAMPLE_ALPHA_TO_COVERAGE,"SAMPLE_ALPHA_TO_COVERAGE");
	HX_VISIT_MEMBER_NAME(SAMPLE_COVERAGE,"SAMPLE_COVERAGE");
	HX_VISIT_MEMBER_NAME(NO_ERROR,"NO_ERROR");
	HX_VISIT_MEMBER_NAME(INVALID_ENUM,"INVALID_ENUM");
	HX_VISIT_MEMBER_NAME(INVALID_VALUE,"INVALID_VALUE");
	HX_VISIT_MEMBER_NAME(INVALID_OPERATION,"INVALID_OPERATION");
	HX_VISIT_MEMBER_NAME(OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_VISIT_MEMBER_NAME(CW,"CW");
	HX_VISIT_MEMBER_NAME(CCW,"CCW");
	HX_VISIT_MEMBER_NAME(LINE_WIDTH,"LINE_WIDTH");
	HX_VISIT_MEMBER_NAME(ALIASED_POINT_SIZE_RANGE,"ALIASED_POINT_SIZE_RANGE");
	HX_VISIT_MEMBER_NAME(ALIASED_LINE_WIDTH_RANGE,"ALIASED_LINE_WIDTH_RANGE");
	HX_VISIT_MEMBER_NAME(CULL_FACE_MODE,"CULL_FACE_MODE");
	HX_VISIT_MEMBER_NAME(FRONT_FACE,"FRONT_FACE");
	HX_VISIT_MEMBER_NAME(DEPTH_RANGE,"DEPTH_RANGE");
	HX_VISIT_MEMBER_NAME(DEPTH_WRITEMASK,"DEPTH_WRITEMASK");
	HX_VISIT_MEMBER_NAME(DEPTH_CLEAR_VALUE,"DEPTH_CLEAR_VALUE");
	HX_VISIT_MEMBER_NAME(DEPTH_FUNC,"DEPTH_FUNC");
	HX_VISIT_MEMBER_NAME(STENCIL_CLEAR_VALUE,"STENCIL_CLEAR_VALUE");
	HX_VISIT_MEMBER_NAME(STENCIL_FUNC,"STENCIL_FUNC");
	HX_VISIT_MEMBER_NAME(STENCIL_FAIL,"STENCIL_FAIL");
	HX_VISIT_MEMBER_NAME(STENCIL_PASS_DEPTH_FAIL,"STENCIL_PASS_DEPTH_FAIL");
	HX_VISIT_MEMBER_NAME(STENCIL_PASS_DEPTH_PASS,"STENCIL_PASS_DEPTH_PASS");
	HX_VISIT_MEMBER_NAME(STENCIL_REF,"STENCIL_REF");
	HX_VISIT_MEMBER_NAME(STENCIL_VALUE_MASK,"STENCIL_VALUE_MASK");
	HX_VISIT_MEMBER_NAME(STENCIL_WRITEMASK,"STENCIL_WRITEMASK");
	HX_VISIT_MEMBER_NAME(STENCIL_BACK_FUNC,"STENCIL_BACK_FUNC");
	HX_VISIT_MEMBER_NAME(STENCIL_BACK_FAIL,"STENCIL_BACK_FAIL");
	HX_VISIT_MEMBER_NAME(STENCIL_BACK_PASS_DEPTH_FAIL,"STENCIL_BACK_PASS_DEPTH_FAIL");
	HX_VISIT_MEMBER_NAME(STENCIL_BACK_PASS_DEPTH_PASS,"STENCIL_BACK_PASS_DEPTH_PASS");
	HX_VISIT_MEMBER_NAME(STENCIL_BACK_REF,"STENCIL_BACK_REF");
	HX_VISIT_MEMBER_NAME(STENCIL_BACK_VALUE_MASK,"STENCIL_BACK_VALUE_MASK");
	HX_VISIT_MEMBER_NAME(STENCIL_BACK_WRITEMASK,"STENCIL_BACK_WRITEMASK");
	HX_VISIT_MEMBER_NAME(VIEWPORT,"VIEWPORT");
	HX_VISIT_MEMBER_NAME(SCISSOR_BOX,"SCISSOR_BOX");
	HX_VISIT_MEMBER_NAME(COLOR_CLEAR_VALUE,"COLOR_CLEAR_VALUE");
	HX_VISIT_MEMBER_NAME(COLOR_WRITEMASK,"COLOR_WRITEMASK");
	HX_VISIT_MEMBER_NAME(UNPACK_ALIGNMENT,"UNPACK_ALIGNMENT");
	HX_VISIT_MEMBER_NAME(PACK_ALIGNMENT,"PACK_ALIGNMENT");
	HX_VISIT_MEMBER_NAME(MAX_TEXTURE_SIZE,"MAX_TEXTURE_SIZE");
	HX_VISIT_MEMBER_NAME(MAX_VIEWPORT_DIMS,"MAX_VIEWPORT_DIMS");
	HX_VISIT_MEMBER_NAME(SUBPIXEL_BITS,"SUBPIXEL_BITS");
	HX_VISIT_MEMBER_NAME(RED_BITS,"RED_BITS");
	HX_VISIT_MEMBER_NAME(GREEN_BITS,"GREEN_BITS");
	HX_VISIT_MEMBER_NAME(BLUE_BITS,"BLUE_BITS");
	HX_VISIT_MEMBER_NAME(ALPHA_BITS,"ALPHA_BITS");
	HX_VISIT_MEMBER_NAME(DEPTH_BITS,"DEPTH_BITS");
	HX_VISIT_MEMBER_NAME(STENCIL_BITS,"STENCIL_BITS");
	HX_VISIT_MEMBER_NAME(POLYGON_OFFSET_UNITS,"POLYGON_OFFSET_UNITS");
	HX_VISIT_MEMBER_NAME(POLYGON_OFFSET_FACTOR,"POLYGON_OFFSET_FACTOR");
	HX_VISIT_MEMBER_NAME(TEXTURE_BINDING_2D,"TEXTURE_BINDING_2D");
	HX_VISIT_MEMBER_NAME(SAMPLE_BUFFERS,"SAMPLE_BUFFERS");
	HX_VISIT_MEMBER_NAME(SAMPLES,"SAMPLES");
	HX_VISIT_MEMBER_NAME(SAMPLE_COVERAGE_VALUE,"SAMPLE_COVERAGE_VALUE");
	HX_VISIT_MEMBER_NAME(SAMPLE_COVERAGE_INVERT,"SAMPLE_COVERAGE_INVERT");
	HX_VISIT_MEMBER_NAME(NUM_COMPRESSED_TEXTURE_FORMATS,"NUM_COMPRESSED_TEXTURE_FORMATS");
	HX_VISIT_MEMBER_NAME(COMPRESSED_TEXTURE_FORMATS,"COMPRESSED_TEXTURE_FORMATS");
	HX_VISIT_MEMBER_NAME(DONT_CARE,"DONT_CARE");
	HX_VISIT_MEMBER_NAME(FASTEST,"FASTEST");
	HX_VISIT_MEMBER_NAME(NICEST,"NICEST");
	HX_VISIT_MEMBER_NAME(GENERATE_MIPMAP_HINT,"GENERATE_MIPMAP_HINT");
	HX_VISIT_MEMBER_NAME(BYTE,"BYTE");
	HX_VISIT_MEMBER_NAME(UNSIGNED_BYTE,"UNSIGNED_BYTE");
	HX_VISIT_MEMBER_NAME(SHORT,"SHORT");
	HX_VISIT_MEMBER_NAME(UNSIGNED_SHORT,"UNSIGNED_SHORT");
	HX_VISIT_MEMBER_NAME(INT,"INT");
	HX_VISIT_MEMBER_NAME(UNSIGNED_INT,"UNSIGNED_INT");
	HX_VISIT_MEMBER_NAME(FLOAT,"FLOAT");
	HX_VISIT_MEMBER_NAME(FIXED,"FIXED");
	HX_VISIT_MEMBER_NAME(DEPTH_COMPONENT,"DEPTH_COMPONENT");
	HX_VISIT_MEMBER_NAME(ALPHA,"ALPHA");
	HX_VISIT_MEMBER_NAME(RGB,"RGB");
	HX_VISIT_MEMBER_NAME(RGBA,"RGBA");
	HX_VISIT_MEMBER_NAME(LUMINANCE,"LUMINANCE");
	HX_VISIT_MEMBER_NAME(LUMINANCE_ALPHA,"LUMINANCE_ALPHA");
	HX_VISIT_MEMBER_NAME(UNSIGNED_SHORT_4_4_4_4,"UNSIGNED_SHORT_4_4_4_4");
	HX_VISIT_MEMBER_NAME(UNSIGNED_SHORT_5_5_5_1,"UNSIGNED_SHORT_5_5_5_1");
	HX_VISIT_MEMBER_NAME(UNSIGNED_SHORT_5_6_5,"UNSIGNED_SHORT_5_6_5");
	HX_VISIT_MEMBER_NAME(FRAGMENT_SHADER,"FRAGMENT_SHADER");
	HX_VISIT_MEMBER_NAME(VERTEX_SHADER,"VERTEX_SHADER");
	HX_VISIT_MEMBER_NAME(MAX_VERTEX_ATTRIBS,"MAX_VERTEX_ATTRIBS");
	HX_VISIT_MEMBER_NAME(MAX_VERTEX_UNIFORM_VECTORS,"MAX_VERTEX_UNIFORM_VECTORS");
	HX_VISIT_MEMBER_NAME(MAX_VARYING_VECTORS,"MAX_VARYING_VECTORS");
	HX_VISIT_MEMBER_NAME(MAX_COMBINED_TEXTURE_IMAGE_UNITS,"MAX_COMBINED_TEXTURE_IMAGE_UNITS");
	HX_VISIT_MEMBER_NAME(MAX_VERTEX_TEXTURE_IMAGE_UNITS,"MAX_VERTEX_TEXTURE_IMAGE_UNITS");
	HX_VISIT_MEMBER_NAME(MAX_TEXTURE_IMAGE_UNITS,"MAX_TEXTURE_IMAGE_UNITS");
	HX_VISIT_MEMBER_NAME(MAX_FRAGMENT_UNIFORM_VECTORS,"MAX_FRAGMENT_UNIFORM_VECTORS");
	HX_VISIT_MEMBER_NAME(SHADER_TYPE,"SHADER_TYPE");
	HX_VISIT_MEMBER_NAME(DELETE_STATUS,"DELETE_STATUS");
	HX_VISIT_MEMBER_NAME(LINK_STATUS,"LINK_STATUS");
	HX_VISIT_MEMBER_NAME(VALIDATE_STATUS,"VALIDATE_STATUS");
	HX_VISIT_MEMBER_NAME(ATTACHED_SHADERS,"ATTACHED_SHADERS");
	HX_VISIT_MEMBER_NAME(ACTIVE_UNIFORMS,"ACTIVE_UNIFORMS");
	HX_VISIT_MEMBER_NAME(ACTIVE_UNIFORMS_MAX_LENGTH,"ACTIVE_UNIFORMS_MAX_LENGTH");
	HX_VISIT_MEMBER_NAME(ACTIVE_ATTRIBUTES,"ACTIVE_ATTRIBUTES");
	HX_VISIT_MEMBER_NAME(ACTIVE_ATTRIBUTES_MAX_LENGTH,"ACTIVE_ATTRIBUTES_MAX_LENGTH");
	HX_VISIT_MEMBER_NAME(SHADING_LANGUAGE_VERSION,"SHADING_LANGUAGE_VERSION");
	HX_VISIT_MEMBER_NAME(CURRENT_PROGRAM,"CURRENT_PROGRAM");
	HX_VISIT_MEMBER_NAME(NEVER,"NEVER");
	HX_VISIT_MEMBER_NAME(LESS,"LESS");
	HX_VISIT_MEMBER_NAME(EQUAL,"EQUAL");
	HX_VISIT_MEMBER_NAME(LEQUAL,"LEQUAL");
	HX_VISIT_MEMBER_NAME(GREATER,"GREATER");
	HX_VISIT_MEMBER_NAME(NOTEQUAL,"NOTEQUAL");
	HX_VISIT_MEMBER_NAME(GEQUAL,"GEQUAL");
	HX_VISIT_MEMBER_NAME(ALWAYS,"ALWAYS");
	HX_VISIT_MEMBER_NAME(KEEP,"KEEP");
	HX_VISIT_MEMBER_NAME(REPLACE,"REPLACE");
	HX_VISIT_MEMBER_NAME(INCR,"INCR");
	HX_VISIT_MEMBER_NAME(DECR,"DECR");
	HX_VISIT_MEMBER_NAME(INVERT,"INVERT");
	HX_VISIT_MEMBER_NAME(INCR_WRAP,"INCR_WRAP");
	HX_VISIT_MEMBER_NAME(DECR_WRAP,"DECR_WRAP");
	HX_VISIT_MEMBER_NAME(VENDOR,"VENDOR");
	HX_VISIT_MEMBER_NAME(RENDERER,"RENDERER");
	HX_VISIT_MEMBER_NAME(VERSION,"VERSION");
	HX_VISIT_MEMBER_NAME(EXTENSIONS,"EXTENSIONS");
	HX_VISIT_MEMBER_NAME(NEAREST,"NEAREST");
	HX_VISIT_MEMBER_NAME(LINEAR,"LINEAR");
	HX_VISIT_MEMBER_NAME(NEAREST_MIPMAP_NEAREST,"NEAREST_MIPMAP_NEAREST");
	HX_VISIT_MEMBER_NAME(LINEAR_MIPMAP_NEAREST,"LINEAR_MIPMAP_NEAREST");
	HX_VISIT_MEMBER_NAME(NEAREST_MIPMAP_LINEAR,"NEAREST_MIPMAP_LINEAR");
	HX_VISIT_MEMBER_NAME(LINEAR_MIPMAP_LINEAR,"LINEAR_MIPMAP_LINEAR");
	HX_VISIT_MEMBER_NAME(TEXTURE_MAG_FILTER,"TEXTURE_MAG_FILTER");
	HX_VISIT_MEMBER_NAME(TEXTURE_MIN_FILTER,"TEXTURE_MIN_FILTER");
	HX_VISIT_MEMBER_NAME(TEXTURE_WRAP_S,"TEXTURE_WRAP_S");
	HX_VISIT_MEMBER_NAME(TEXTURE_WRAP_T,"TEXTURE_WRAP_T");
	HX_VISIT_MEMBER_NAME(TEXTURE,"TEXTURE");
	HX_VISIT_MEMBER_NAME(TEXTURE_CUBE_MAP,"TEXTURE_CUBE_MAP");
	HX_VISIT_MEMBER_NAME(TEXTURE_BINDING_CUBE_MAP,"TEXTURE_BINDING_CUBE_MAP");
	HX_VISIT_MEMBER_NAME(TEXTURE_CUBE_MAP_POSITIVE_X,"TEXTURE_CUBE_MAP_POSITIVE_X");
	HX_VISIT_MEMBER_NAME(TEXTURE_CUBE_MAP_NEGATIVE_X,"TEXTURE_CUBE_MAP_NEGATIVE_X");
	HX_VISIT_MEMBER_NAME(TEXTURE_CUBE_MAP_POSITIVE_Y,"TEXTURE_CUBE_MAP_POSITIVE_Y");
	HX_VISIT_MEMBER_NAME(TEXTURE_CUBE_MAP_NEGATIVE_Y,"TEXTURE_CUBE_MAP_NEGATIVE_Y");
	HX_VISIT_MEMBER_NAME(TEXTURE_CUBE_MAP_POSITIVE_Z,"TEXTURE_CUBE_MAP_POSITIVE_Z");
	HX_VISIT_MEMBER_NAME(TEXTURE_CUBE_MAP_NEGATIVE_Z,"TEXTURE_CUBE_MAP_NEGATIVE_Z");
	HX_VISIT_MEMBER_NAME(MAX_CUBE_MAP_TEXTURE_SIZE,"MAX_CUBE_MAP_TEXTURE_SIZE");
	HX_VISIT_MEMBER_NAME(TEXTURE0,"TEXTURE0");
	HX_VISIT_MEMBER_NAME(TEXTURE1,"TEXTURE1");
	HX_VISIT_MEMBER_NAME(TEXTURE2,"TEXTURE2");
	HX_VISIT_MEMBER_NAME(TEXTURE3,"TEXTURE3");
	HX_VISIT_MEMBER_NAME(TEXTURE4,"TEXTURE4");
	HX_VISIT_MEMBER_NAME(TEXTURE5,"TEXTURE5");
	HX_VISIT_MEMBER_NAME(TEXTURE6,"TEXTURE6");
	HX_VISIT_MEMBER_NAME(TEXTURE7,"TEXTURE7");
	HX_VISIT_MEMBER_NAME(TEXTURE8,"TEXTURE8");
	HX_VISIT_MEMBER_NAME(TEXTURE9,"TEXTURE9");
	HX_VISIT_MEMBER_NAME(TEXTURE10,"TEXTURE10");
	HX_VISIT_MEMBER_NAME(TEXTURE11,"TEXTURE11");
	HX_VISIT_MEMBER_NAME(TEXTURE12,"TEXTURE12");
	HX_VISIT_MEMBER_NAME(TEXTURE13,"TEXTURE13");
	HX_VISIT_MEMBER_NAME(TEXTURE14,"TEXTURE14");
	HX_VISIT_MEMBER_NAME(TEXTURE15,"TEXTURE15");
	HX_VISIT_MEMBER_NAME(TEXTURE16,"TEXTURE16");
	HX_VISIT_MEMBER_NAME(TEXTURE17,"TEXTURE17");
	HX_VISIT_MEMBER_NAME(TEXTURE18,"TEXTURE18");
	HX_VISIT_MEMBER_NAME(TEXTURE19,"TEXTURE19");
	HX_VISIT_MEMBER_NAME(TEXTURE20,"TEXTURE20");
	HX_VISIT_MEMBER_NAME(TEXTURE21,"TEXTURE21");
	HX_VISIT_MEMBER_NAME(TEXTURE22,"TEXTURE22");
	HX_VISIT_MEMBER_NAME(TEXTURE23,"TEXTURE23");
	HX_VISIT_MEMBER_NAME(TEXTURE24,"TEXTURE24");
	HX_VISIT_MEMBER_NAME(TEXTURE25,"TEXTURE25");
	HX_VISIT_MEMBER_NAME(TEXTURE26,"TEXTURE26");
	HX_VISIT_MEMBER_NAME(TEXTURE27,"TEXTURE27");
	HX_VISIT_MEMBER_NAME(TEXTURE28,"TEXTURE28");
	HX_VISIT_MEMBER_NAME(TEXTURE29,"TEXTURE29");
	HX_VISIT_MEMBER_NAME(TEXTURE30,"TEXTURE30");
	HX_VISIT_MEMBER_NAME(TEXTURE31,"TEXTURE31");
	HX_VISIT_MEMBER_NAME(ACTIVE_TEXTURE,"ACTIVE_TEXTURE");
	HX_VISIT_MEMBER_NAME(REPEAT,"REPEAT");
	HX_VISIT_MEMBER_NAME(CLAMP_TO_EDGE,"CLAMP_TO_EDGE");
	HX_VISIT_MEMBER_NAME(MIRRORED_REPEAT,"MIRRORED_REPEAT");
	HX_VISIT_MEMBER_NAME(FLOAT_VEC2,"FLOAT_VEC2");
	HX_VISIT_MEMBER_NAME(FLOAT_VEC3,"FLOAT_VEC3");
	HX_VISIT_MEMBER_NAME(FLOAT_VEC4,"FLOAT_VEC4");
	HX_VISIT_MEMBER_NAME(INT_VEC2,"INT_VEC2");
	HX_VISIT_MEMBER_NAME(INT_VEC3,"INT_VEC3");
	HX_VISIT_MEMBER_NAME(INT_VEC4,"INT_VEC4");
	HX_VISIT_MEMBER_NAME(BOOL,"BOOL");
	HX_VISIT_MEMBER_NAME(BOOL_VEC2,"BOOL_VEC2");
	HX_VISIT_MEMBER_NAME(BOOL_VEC3,"BOOL_VEC3");
	HX_VISIT_MEMBER_NAME(BOOL_VEC4,"BOOL_VEC4");
	HX_VISIT_MEMBER_NAME(FLOAT_MAT2,"FLOAT_MAT2");
	HX_VISIT_MEMBER_NAME(FLOAT_MAT3,"FLOAT_MAT3");
	HX_VISIT_MEMBER_NAME(FLOAT_MAT4,"FLOAT_MAT4");
	HX_VISIT_MEMBER_NAME(SAMPLER_2D,"SAMPLER_2D");
	HX_VISIT_MEMBER_NAME(SAMPLER_CUBE,"SAMPLER_CUBE");
	HX_VISIT_MEMBER_NAME(VERTEX_ATTRIB_ARRAY_ENABLED,"VERTEX_ATTRIB_ARRAY_ENABLED");
	HX_VISIT_MEMBER_NAME(VERTEX_ATTRIB_ARRAY_SIZE,"VERTEX_ATTRIB_ARRAY_SIZE");
	HX_VISIT_MEMBER_NAME(VERTEX_ATTRIB_ARRAY_STRIDE,"VERTEX_ATTRIB_ARRAY_STRIDE");
	HX_VISIT_MEMBER_NAME(VERTEX_ATTRIB_ARRAY_TYPE,"VERTEX_ATTRIB_ARRAY_TYPE");
	HX_VISIT_MEMBER_NAME(VERTEX_ATTRIB_ARRAY_NORMALIZED,"VERTEX_ATTRIB_ARRAY_NORMALIZED");
	HX_VISIT_MEMBER_NAME(VERTEX_ATTRIB_ARRAY_POINTER,"VERTEX_ATTRIB_ARRAY_POINTER");
	HX_VISIT_MEMBER_NAME(VERTEX_ATTRIB_ARRAY_BUFFER_BINDING,"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(IMPLEMENTATION_COLOR_READ_TYPE,"IMPLEMENTATION_COLOR_READ_TYPE");
	HX_VISIT_MEMBER_NAME(IMPLEMENTATION_COLOR_READ_FORMAT,"IMPLEMENTATION_COLOR_READ_FORMAT");
	HX_VISIT_MEMBER_NAME(VERTEX_PROGRAM_POINT_SIZE,"VERTEX_PROGRAM_POINT_SIZE");
	HX_VISIT_MEMBER_NAME(POINT_SPRITE,"POINT_SPRITE");
	HX_VISIT_MEMBER_NAME(COMPILE_STATUS,"COMPILE_STATUS");
	HX_VISIT_MEMBER_NAME(INFO_LOG_LENGTH,"INFO_LOG_LENGTH");
	HX_VISIT_MEMBER_NAME(SHADER_SOURCE_LENGTH,"SHADER_SOURCE_LENGTH");
	HX_VISIT_MEMBER_NAME(SHADER_COMPILER,"SHADER_COMPILER");
	HX_VISIT_MEMBER_NAME(SHADER_BINARY_FORMATS,"SHADER_BINARY_FORMATS");
	HX_VISIT_MEMBER_NAME(NUM_SHADER_BINARY_FORMATS,"NUM_SHADER_BINARY_FORMATS");
	HX_VISIT_MEMBER_NAME(LOW_FLOAT,"LOW_FLOAT");
	HX_VISIT_MEMBER_NAME(MEDIUM_FLOAT,"MEDIUM_FLOAT");
	HX_VISIT_MEMBER_NAME(HIGH_FLOAT,"HIGH_FLOAT");
	HX_VISIT_MEMBER_NAME(LOW_INT,"LOW_INT");
	HX_VISIT_MEMBER_NAME(MEDIUM_INT,"MEDIUM_INT");
	HX_VISIT_MEMBER_NAME(HIGH_INT,"HIGH_INT");
	HX_VISIT_MEMBER_NAME(FRAMEBUFFER,"FRAMEBUFFER");
	HX_VISIT_MEMBER_NAME(RENDERBUFFER,"RENDERBUFFER");
	HX_VISIT_MEMBER_NAME(RGBA4,"RGBA4");
	HX_VISIT_MEMBER_NAME(RGB5_A1,"RGB5_A1");
	HX_VISIT_MEMBER_NAME(RGB565,"RGB565");
	HX_VISIT_MEMBER_NAME(DEPTH_COMPONENT16,"DEPTH_COMPONENT16");
	HX_VISIT_MEMBER_NAME(STENCIL_INDEX,"STENCIL_INDEX");
	HX_VISIT_MEMBER_NAME(STENCIL_INDEX8,"STENCIL_INDEX8");
	HX_VISIT_MEMBER_NAME(DEPTH_STENCIL,"DEPTH_STENCIL");
	HX_VISIT_MEMBER_NAME(RENDERBUFFER_WIDTH,"RENDERBUFFER_WIDTH");
	HX_VISIT_MEMBER_NAME(RENDERBUFFER_HEIGHT,"RENDERBUFFER_HEIGHT");
	HX_VISIT_MEMBER_NAME(RENDERBUFFER_INTERNAL_FORMAT,"RENDERBUFFER_INTERNAL_FORMAT");
	HX_VISIT_MEMBER_NAME(RENDERBUFFER_RED_SIZE,"RENDERBUFFER_RED_SIZE");
	HX_VISIT_MEMBER_NAME(RENDERBUFFER_GREEN_SIZE,"RENDERBUFFER_GREEN_SIZE");
	HX_VISIT_MEMBER_NAME(RENDERBUFFER_BLUE_SIZE,"RENDERBUFFER_BLUE_SIZE");
	HX_VISIT_MEMBER_NAME(RENDERBUFFER_ALPHA_SIZE,"RENDERBUFFER_ALPHA_SIZE");
	HX_VISIT_MEMBER_NAME(RENDERBUFFER_DEPTH_SIZE,"RENDERBUFFER_DEPTH_SIZE");
	HX_VISIT_MEMBER_NAME(RENDERBUFFER_STENCIL_SIZE,"RENDERBUFFER_STENCIL_SIZE");
	HX_VISIT_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE,"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE");
	HX_VISIT_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_OBJECT_NAME,"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME");
	HX_VISIT_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL");
	HX_VISIT_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE,"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE");
	HX_VISIT_MEMBER_NAME(COLOR_ATTACHMENT0,"COLOR_ATTACHMENT0");
	HX_VISIT_MEMBER_NAME(DEPTH_ATTACHMENT,"DEPTH_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(STENCIL_ATTACHMENT,"STENCIL_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(DEPTH_STENCIL_ATTACHMENT,"DEPTH_STENCIL_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(NONE,"NONE");
	HX_VISIT_MEMBER_NAME(FRAMEBUFFER_COMPLETE,"FRAMEBUFFER_COMPLETE");
	HX_VISIT_MEMBER_NAME(FRAMEBUFFER_INCOMPLETE_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(FRAMEBUFFER_INCOMPLETE_DIMENSIONS,"FRAMEBUFFER_INCOMPLETE_DIMENSIONS");
	HX_VISIT_MEMBER_NAME(FRAMEBUFFER_UNSUPPORTED,"FRAMEBUFFER_UNSUPPORTED");
	HX_VISIT_MEMBER_NAME(FRAMEBUFFER_BINDING,"FRAMEBUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(RENDERBUFFER_BINDING,"RENDERBUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(MAX_RENDERBUFFER_SIZE,"MAX_RENDERBUFFER_SIZE");
	HX_VISIT_MEMBER_NAME(INVALID_FRAMEBUFFER_OPERATION,"INVALID_FRAMEBUFFER_OPERATION");
	HX_VISIT_MEMBER_NAME(UNPACK_FLIP_Y_WEBGL,"UNPACK_FLIP_Y_WEBGL");
	HX_VISIT_MEMBER_NAME(UNPACK_PREMULTIPLY_ALPHA_WEBGL,"UNPACK_PREMULTIPLY_ALPHA_WEBGL");
	HX_VISIT_MEMBER_NAME(CONTEXT_LOST_WEBGL,"CONTEXT_LOST_WEBGL");
	HX_VISIT_MEMBER_NAME(UNPACK_COLORSPACE_CONVERSION_WEBGL,"UNPACK_COLORSPACE_CONVERSION_WEBGL");
	HX_VISIT_MEMBER_NAME(BROWSER_DEFAULT_WEBGL,"BROWSER_DEFAULT_WEBGL");
	HX_VISIT_MEMBER_NAME(READ_BUFFER,"READ_BUFFER");
	HX_VISIT_MEMBER_NAME(UNPACK_ROW_LENGTH,"UNPACK_ROW_LENGTH");
	HX_VISIT_MEMBER_NAME(UNPACK_SKIP_ROWS,"UNPACK_SKIP_ROWS");
	HX_VISIT_MEMBER_NAME(UNPACK_SKIP_PIXELS,"UNPACK_SKIP_PIXELS");
	HX_VISIT_MEMBER_NAME(PACK_ROW_LENGTH,"PACK_ROW_LENGTH");
	HX_VISIT_MEMBER_NAME(PACK_SKIP_ROWS,"PACK_SKIP_ROWS");
	HX_VISIT_MEMBER_NAME(PACK_SKIP_PIXELS,"PACK_SKIP_PIXELS");
	HX_VISIT_MEMBER_NAME(TEXTURE_BINDING_3D,"TEXTURE_BINDING_3D");
	HX_VISIT_MEMBER_NAME(UNPACK_SKIP_IMAGES,"UNPACK_SKIP_IMAGES");
	HX_VISIT_MEMBER_NAME(UNPACK_IMAGE_HEIGHT,"UNPACK_IMAGE_HEIGHT");
	HX_VISIT_MEMBER_NAME(MAX_3D_TEXTURE_SIZE,"MAX_3D_TEXTURE_SIZE");
	HX_VISIT_MEMBER_NAME(MAX_ELEMENTS_VERTICES,"MAX_ELEMENTS_VERTICES");
	HX_VISIT_MEMBER_NAME(MAX_ELEMENTS_INDICES,"MAX_ELEMENTS_INDICES");
	HX_VISIT_MEMBER_NAME(MAX_TEXTURE_LOD_BIAS,"MAX_TEXTURE_LOD_BIAS");
	HX_VISIT_MEMBER_NAME(MAX_FRAGMENT_UNIFORM_COMPONENTS,"MAX_FRAGMENT_UNIFORM_COMPONENTS");
	HX_VISIT_MEMBER_NAME(MAX_VERTEX_UNIFORM_COMPONENTS,"MAX_VERTEX_UNIFORM_COMPONENTS");
	HX_VISIT_MEMBER_NAME(MAX_ARRAY_TEXTURE_LAYERS,"MAX_ARRAY_TEXTURE_LAYERS");
	HX_VISIT_MEMBER_NAME(MIN_PROGRAM_TEXEL_OFFSET,"MIN_PROGRAM_TEXEL_OFFSET");
	HX_VISIT_MEMBER_NAME(MAX_PROGRAM_TEXEL_OFFSET,"MAX_PROGRAM_TEXEL_OFFSET");
	HX_VISIT_MEMBER_NAME(MAX_VARYING_COMPONENTS,"MAX_VARYING_COMPONENTS");
	HX_VISIT_MEMBER_NAME(FRAGMENT_SHADER_DERIVATIVE_HINT,"FRAGMENT_SHADER_DERIVATIVE_HINT");
	HX_VISIT_MEMBER_NAME(RASTERIZER_DISCARD,"RASTERIZER_DISCARD");
	HX_VISIT_MEMBER_NAME(VERTEX_ARRAY_BINDING,"VERTEX_ARRAY_BINDING");
	HX_VISIT_MEMBER_NAME(MAX_VERTEX_OUTPUT_COMPONENTS,"MAX_VERTEX_OUTPUT_COMPONENTS");
	HX_VISIT_MEMBER_NAME(MAX_FRAGMENT_INPUT_COMPONENTS,"MAX_FRAGMENT_INPUT_COMPONENTS");
	HX_VISIT_MEMBER_NAME(MAX_SERVER_WAIT_TIMEOUT,"MAX_SERVER_WAIT_TIMEOUT");
	HX_VISIT_MEMBER_NAME(MAX_ELEMENT_INDEX,"MAX_ELEMENT_INDEX");
	HX_VISIT_MEMBER_NAME(RED,"RED");
	HX_VISIT_MEMBER_NAME(RGB8,"RGB8");
	HX_VISIT_MEMBER_NAME(RGBA8,"RGBA8");
	HX_VISIT_MEMBER_NAME(RGB10_A2,"RGB10_A2");
	HX_VISIT_MEMBER_NAME(TEXTURE_3D,"TEXTURE_3D");
	HX_VISIT_MEMBER_NAME(TEXTURE_WRAP_R,"TEXTURE_WRAP_R");
	HX_VISIT_MEMBER_NAME(TEXTURE_MIN_LOD,"TEXTURE_MIN_LOD");
	HX_VISIT_MEMBER_NAME(TEXTURE_MAX_LOD,"TEXTURE_MAX_LOD");
	HX_VISIT_MEMBER_NAME(TEXTURE_BASE_LEVEL,"TEXTURE_BASE_LEVEL");
	HX_VISIT_MEMBER_NAME(TEXTURE_MAX_LEVEL,"TEXTURE_MAX_LEVEL");
	HX_VISIT_MEMBER_NAME(TEXTURE_COMPARE_MODE,"TEXTURE_COMPARE_MODE");
	HX_VISIT_MEMBER_NAME(TEXTURE_COMPARE_FUNC,"TEXTURE_COMPARE_FUNC");
	HX_VISIT_MEMBER_NAME(SRGB,"SRGB");
	HX_VISIT_MEMBER_NAME(SRGB8,"SRGB8");
	HX_VISIT_MEMBER_NAME(SRGB8_ALPHA8,"SRGB8_ALPHA8");
	HX_VISIT_MEMBER_NAME(COMPARE_REF_TO_TEXTURE,"COMPARE_REF_TO_TEXTURE");
	HX_VISIT_MEMBER_NAME(RGBA32F,"RGBA32F");
	HX_VISIT_MEMBER_NAME(RGB32F,"RGB32F");
	HX_VISIT_MEMBER_NAME(RGBA16F,"RGBA16F");
	HX_VISIT_MEMBER_NAME(RGB16F,"RGB16F");
	HX_VISIT_MEMBER_NAME(TEXTURE_2D_ARRAY,"TEXTURE_2D_ARRAY");
	HX_VISIT_MEMBER_NAME(TEXTURE_BINDING_2D_ARRAY,"TEXTURE_BINDING_2D_ARRAY");
	HX_VISIT_MEMBER_NAME(R11F_G11F_B10F,"R11F_G11F_B10F");
	HX_VISIT_MEMBER_NAME(RGB9_E5,"RGB9_E5");
	HX_VISIT_MEMBER_NAME(RGBA32UI,"RGBA32UI");
	HX_VISIT_MEMBER_NAME(RGB32UI,"RGB32UI");
	HX_VISIT_MEMBER_NAME(RGBA16UI,"RGBA16UI");
	HX_VISIT_MEMBER_NAME(RGB16UI,"RGB16UI");
	HX_VISIT_MEMBER_NAME(RGBA8UI,"RGBA8UI");
	HX_VISIT_MEMBER_NAME(RGB8UI,"RGB8UI");
	HX_VISIT_MEMBER_NAME(RGBA32I,"RGBA32I");
	HX_VISIT_MEMBER_NAME(RGB32I,"RGB32I");
	HX_VISIT_MEMBER_NAME(RGBA16I,"RGBA16I");
	HX_VISIT_MEMBER_NAME(RGB16I,"RGB16I");
	HX_VISIT_MEMBER_NAME(RGBA8I,"RGBA8I");
	HX_VISIT_MEMBER_NAME(RGB8I,"RGB8I");
	HX_VISIT_MEMBER_NAME(RED_INTEGER,"RED_INTEGER");
	HX_VISIT_MEMBER_NAME(RGB_INTEGER,"RGB_INTEGER");
	HX_VISIT_MEMBER_NAME(RGBA_INTEGER,"RGBA_INTEGER");
	HX_VISIT_MEMBER_NAME(R8,"R8");
	HX_VISIT_MEMBER_NAME(RG8,"RG8");
	HX_VISIT_MEMBER_NAME(R16F,"R16F");
	HX_VISIT_MEMBER_NAME(R32F,"R32F");
	HX_VISIT_MEMBER_NAME(RG16F,"RG16F");
	HX_VISIT_MEMBER_NAME(RG32F,"RG32F");
	HX_VISIT_MEMBER_NAME(R8I,"R8I");
	HX_VISIT_MEMBER_NAME(R8UI,"R8UI");
	HX_VISIT_MEMBER_NAME(R16I,"R16I");
	HX_VISIT_MEMBER_NAME(R16UI,"R16UI");
	HX_VISIT_MEMBER_NAME(R32I,"R32I");
	HX_VISIT_MEMBER_NAME(R32UI,"R32UI");
	HX_VISIT_MEMBER_NAME(RG8I,"RG8I");
	HX_VISIT_MEMBER_NAME(RG8UI,"RG8UI");
	HX_VISIT_MEMBER_NAME(RG16I,"RG16I");
	HX_VISIT_MEMBER_NAME(RG16UI,"RG16UI");
	HX_VISIT_MEMBER_NAME(RG32I,"RG32I");
	HX_VISIT_MEMBER_NAME(RG32UI,"RG32UI");
	HX_VISIT_MEMBER_NAME(R8_SNORM,"R8_SNORM");
	HX_VISIT_MEMBER_NAME(RG8_SNORM,"RG8_SNORM");
	HX_VISIT_MEMBER_NAME(RGB8_SNORM,"RGB8_SNORM");
	HX_VISIT_MEMBER_NAME(RGBA8_SNORM,"RGBA8_SNORM");
	HX_VISIT_MEMBER_NAME(RGB10_A2UI,"RGB10_A2UI");
	HX_VISIT_MEMBER_NAME(TEXTURE_IMMUTABLE_FORMAT,"TEXTURE_IMMUTABLE_FORMAT");
	HX_VISIT_MEMBER_NAME(TEXTURE_IMMUTABLE_LEVELS,"TEXTURE_IMMUTABLE_LEVELS");
	HX_VISIT_MEMBER_NAME(UNSIGNED_INT_2_10_10_10_REV,"UNSIGNED_INT_2_10_10_10_REV");
	HX_VISIT_MEMBER_NAME(UNSIGNED_INT_10F_11F_11F_REV,"UNSIGNED_INT_10F_11F_11F_REV");
	HX_VISIT_MEMBER_NAME(UNSIGNED_INT_5_9_9_9_REV,"UNSIGNED_INT_5_9_9_9_REV");
	HX_VISIT_MEMBER_NAME(FLOAT_32_UNSIGNED_INT_24_8_REV,"FLOAT_32_UNSIGNED_INT_24_8_REV");
	HX_VISIT_MEMBER_NAME(UNSIGNED_INT_24_8,"UNSIGNED_INT_24_8");
	HX_VISIT_MEMBER_NAME(HALF_FLOAT,"HALF_FLOAT");
	HX_VISIT_MEMBER_NAME(RG,"RG");
	HX_VISIT_MEMBER_NAME(RG_INTEGER,"RG_INTEGER");
	HX_VISIT_MEMBER_NAME(INT_2_10_10_10_REV,"INT_2_10_10_10_REV");
	HX_VISIT_MEMBER_NAME(CURRENT_QUERY,"CURRENT_QUERY");
	HX_VISIT_MEMBER_NAME(QUERY_RESULT,"QUERY_RESULT");
	HX_VISIT_MEMBER_NAME(QUERY_RESULT_AVAILABLE,"QUERY_RESULT_AVAILABLE");
	HX_VISIT_MEMBER_NAME(ANY_SAMPLES_PASSED,"ANY_SAMPLES_PASSED");
	HX_VISIT_MEMBER_NAME(ANY_SAMPLES_PASSED_CONSERVATIVE,"ANY_SAMPLES_PASSED_CONSERVATIVE");
	HX_VISIT_MEMBER_NAME(MAX_DRAW_BUFFERS,"MAX_DRAW_BUFFERS");
	HX_VISIT_MEMBER_NAME(DRAW_BUFFER0,"DRAW_BUFFER0");
	HX_VISIT_MEMBER_NAME(DRAW_BUFFER1,"DRAW_BUFFER1");
	HX_VISIT_MEMBER_NAME(DRAW_BUFFER2,"DRAW_BUFFER2");
	HX_VISIT_MEMBER_NAME(DRAW_BUFFER3,"DRAW_BUFFER3");
	HX_VISIT_MEMBER_NAME(DRAW_BUFFER4,"DRAW_BUFFER4");
	HX_VISIT_MEMBER_NAME(DRAW_BUFFER5,"DRAW_BUFFER5");
	HX_VISIT_MEMBER_NAME(DRAW_BUFFER6,"DRAW_BUFFER6");
	HX_VISIT_MEMBER_NAME(DRAW_BUFFER7,"DRAW_BUFFER7");
	HX_VISIT_MEMBER_NAME(DRAW_BUFFER8,"DRAW_BUFFER8");
	HX_VISIT_MEMBER_NAME(DRAW_BUFFER9,"DRAW_BUFFER9");
	HX_VISIT_MEMBER_NAME(DRAW_BUFFER10,"DRAW_BUFFER10");
	HX_VISIT_MEMBER_NAME(DRAW_BUFFER11,"DRAW_BUFFER11");
	HX_VISIT_MEMBER_NAME(DRAW_BUFFER12,"DRAW_BUFFER12");
	HX_VISIT_MEMBER_NAME(DRAW_BUFFER13,"DRAW_BUFFER13");
	HX_VISIT_MEMBER_NAME(DRAW_BUFFER14,"DRAW_BUFFER14");
	HX_VISIT_MEMBER_NAME(DRAW_BUFFER15,"DRAW_BUFFER15");
	HX_VISIT_MEMBER_NAME(MAX_COLOR_ATTACHMENTS,"MAX_COLOR_ATTACHMENTS");
	HX_VISIT_MEMBER_NAME(COLOR_ATTACHMENT1,"COLOR_ATTACHMENT1");
	HX_VISIT_MEMBER_NAME(COLOR_ATTACHMENT2,"COLOR_ATTACHMENT2");
	HX_VISIT_MEMBER_NAME(COLOR_ATTACHMENT3,"COLOR_ATTACHMENT3");
	HX_VISIT_MEMBER_NAME(COLOR_ATTACHMENT4,"COLOR_ATTACHMENT4");
	HX_VISIT_MEMBER_NAME(COLOR_ATTACHMENT5,"COLOR_ATTACHMENT5");
	HX_VISIT_MEMBER_NAME(COLOR_ATTACHMENT6,"COLOR_ATTACHMENT6");
	HX_VISIT_MEMBER_NAME(COLOR_ATTACHMENT7,"COLOR_ATTACHMENT7");
	HX_VISIT_MEMBER_NAME(COLOR_ATTACHMENT8,"COLOR_ATTACHMENT8");
	HX_VISIT_MEMBER_NAME(COLOR_ATTACHMENT9,"COLOR_ATTACHMENT9");
	HX_VISIT_MEMBER_NAME(COLOR_ATTACHMENT10,"COLOR_ATTACHMENT10");
	HX_VISIT_MEMBER_NAME(COLOR_ATTACHMENT11,"COLOR_ATTACHMENT11");
	HX_VISIT_MEMBER_NAME(COLOR_ATTACHMENT12,"COLOR_ATTACHMENT12");
	HX_VISIT_MEMBER_NAME(COLOR_ATTACHMENT13,"COLOR_ATTACHMENT13");
	HX_VISIT_MEMBER_NAME(COLOR_ATTACHMENT14,"COLOR_ATTACHMENT14");
	HX_VISIT_MEMBER_NAME(COLOR_ATTACHMENT15,"COLOR_ATTACHMENT15");
	HX_VISIT_MEMBER_NAME(SAMPLER_3D,"SAMPLER_3D");
	HX_VISIT_MEMBER_NAME(SAMPLER_2D_SHADOW,"SAMPLER_2D_SHADOW");
	HX_VISIT_MEMBER_NAME(SAMPLER_2D_ARRAY,"SAMPLER_2D_ARRAY");
	HX_VISIT_MEMBER_NAME(SAMPLER_2D_ARRAY_SHADOW,"SAMPLER_2D_ARRAY_SHADOW");
	HX_VISIT_MEMBER_NAME(SAMPLER_CUBE_SHADOW,"SAMPLER_CUBE_SHADOW");
	HX_VISIT_MEMBER_NAME(INT_SAMPLER_2D,"INT_SAMPLER_2D");
	HX_VISIT_MEMBER_NAME(INT_SAMPLER_3D,"INT_SAMPLER_3D");
	HX_VISIT_MEMBER_NAME(INT_SAMPLER_CUBE,"INT_SAMPLER_CUBE");
	HX_VISIT_MEMBER_NAME(INT_SAMPLER_2D_ARRAY,"INT_SAMPLER_2D_ARRAY");
	HX_VISIT_MEMBER_NAME(UNSIGNED_INT_SAMPLER_2D,"UNSIGNED_INT_SAMPLER_2D");
	HX_VISIT_MEMBER_NAME(UNSIGNED_INT_SAMPLER_3D,"UNSIGNED_INT_SAMPLER_3D");
	HX_VISIT_MEMBER_NAME(UNSIGNED_INT_SAMPLER_CUBE,"UNSIGNED_INT_SAMPLER_CUBE");
	HX_VISIT_MEMBER_NAME(UNSIGNED_INT_SAMPLER_2D_ARRAY,"UNSIGNED_INT_SAMPLER_2D_ARRAY");
	HX_VISIT_MEMBER_NAME(MAX_SAMPLES,"MAX_SAMPLES");
	HX_VISIT_MEMBER_NAME(SAMPLER_BINDING,"SAMPLER_BINDING");
	HX_VISIT_MEMBER_NAME(PIXEL_PACK_BUFFER,"PIXEL_PACK_BUFFER");
	HX_VISIT_MEMBER_NAME(PIXEL_UNPACK_BUFFER,"PIXEL_UNPACK_BUFFER");
	HX_VISIT_MEMBER_NAME(PIXEL_PACK_BUFFER_BINDING,"PIXEL_PACK_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(PIXEL_UNPACK_BUFFER_BINDING,"PIXEL_UNPACK_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(COPY_READ_BUFFER,"COPY_READ_BUFFER");
	HX_VISIT_MEMBER_NAME(COPY_WRITE_BUFFER,"COPY_WRITE_BUFFER");
	HX_VISIT_MEMBER_NAME(COPY_READ_BUFFER_BINDING,"COPY_READ_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(COPY_WRITE_BUFFER_BINDING,"COPY_WRITE_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(FLOAT_MAT2x3,"FLOAT_MAT2x3");
	HX_VISIT_MEMBER_NAME(FLOAT_MAT2x4,"FLOAT_MAT2x4");
	HX_VISIT_MEMBER_NAME(FLOAT_MAT3x2,"FLOAT_MAT3x2");
	HX_VISIT_MEMBER_NAME(FLOAT_MAT3x4,"FLOAT_MAT3x4");
	HX_VISIT_MEMBER_NAME(FLOAT_MAT4x2,"FLOAT_MAT4x2");
	HX_VISIT_MEMBER_NAME(FLOAT_MAT4x3,"FLOAT_MAT4x3");
	HX_VISIT_MEMBER_NAME(UNSIGNED_INT_VEC2,"UNSIGNED_INT_VEC2");
	HX_VISIT_MEMBER_NAME(UNSIGNED_INT_VEC3,"UNSIGNED_INT_VEC3");
	HX_VISIT_MEMBER_NAME(UNSIGNED_INT_VEC4,"UNSIGNED_INT_VEC4");
	HX_VISIT_MEMBER_NAME(UNSIGNED_NORMALIZED,"UNSIGNED_NORMALIZED");
	HX_VISIT_MEMBER_NAME(SIGNED_NORMALIZED,"SIGNED_NORMALIZED");
	HX_VISIT_MEMBER_NAME(VERTEX_ATTRIB_ARRAY_INTEGER,"VERTEX_ATTRIB_ARRAY_INTEGER");
	HX_VISIT_MEMBER_NAME(VERTEX_ATTRIB_ARRAY_DIVISOR,"VERTEX_ATTRIB_ARRAY_DIVISOR");
	HX_VISIT_MEMBER_NAME(TRANSFORM_FEEDBACK_BUFFER_MODE,"TRANSFORM_FEEDBACK_BUFFER_MODE");
	HX_VISIT_MEMBER_NAME(MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS,"MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS");
	HX_VISIT_MEMBER_NAME(TRANSFORM_FEEDBACK_VARYINGS,"TRANSFORM_FEEDBACK_VARYINGS");
	HX_VISIT_MEMBER_NAME(TRANSFORM_FEEDBACK_BUFFER_START,"TRANSFORM_FEEDBACK_BUFFER_START");
	HX_VISIT_MEMBER_NAME(TRANSFORM_FEEDBACK_BUFFER_SIZE,"TRANSFORM_FEEDBACK_BUFFER_SIZE");
	HX_VISIT_MEMBER_NAME(TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN,"TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN");
	HX_VISIT_MEMBER_NAME(MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS,"MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS");
	HX_VISIT_MEMBER_NAME(MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS,"MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS");
	HX_VISIT_MEMBER_NAME(INTERLEAVED_ATTRIBS,"INTERLEAVED_ATTRIBS");
	HX_VISIT_MEMBER_NAME(SEPARATE_ATTRIBS,"SEPARATE_ATTRIBS");
	HX_VISIT_MEMBER_NAME(TRANSFORM_FEEDBACK_BUFFER,"TRANSFORM_FEEDBACK_BUFFER");
	HX_VISIT_MEMBER_NAME(TRANSFORM_FEEDBACK_BUFFER_BINDING,"TRANSFORM_FEEDBACK_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(TRANSFORM_FEEDBACK,"TRANSFORM_FEEDBACK");
	HX_VISIT_MEMBER_NAME(TRANSFORM_FEEDBACK_PAUSED,"TRANSFORM_FEEDBACK_PAUSED");
	HX_VISIT_MEMBER_NAME(TRANSFORM_FEEDBACK_ACTIVE,"TRANSFORM_FEEDBACK_ACTIVE");
	HX_VISIT_MEMBER_NAME(TRANSFORM_FEEDBACK_BINDING,"TRANSFORM_FEEDBACK_BINDING");
	HX_VISIT_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING,"FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING");
	HX_VISIT_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE,"FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE");
	HX_VISIT_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_RED_SIZE,"FRAMEBUFFER_ATTACHMENT_RED_SIZE");
	HX_VISIT_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_GREEN_SIZE,"FRAMEBUFFER_ATTACHMENT_GREEN_SIZE");
	HX_VISIT_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_BLUE_SIZE,"FRAMEBUFFER_ATTACHMENT_BLUE_SIZE");
	HX_VISIT_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE,"FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE");
	HX_VISIT_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE,"FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE");
	HX_VISIT_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE,"FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE");
	HX_VISIT_MEMBER_NAME(FRAMEBUFFER_DEFAULT,"FRAMEBUFFER_DEFAULT");
	HX_VISIT_MEMBER_NAME(DEPTH24_STENCIL8,"DEPTH24_STENCIL8");
	HX_VISIT_MEMBER_NAME(DRAW_FRAMEBUFFER_BINDING,"DRAW_FRAMEBUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(READ_FRAMEBUFFER,"READ_FRAMEBUFFER");
	HX_VISIT_MEMBER_NAME(DRAW_FRAMEBUFFER,"DRAW_FRAMEBUFFER");
	HX_VISIT_MEMBER_NAME(READ_FRAMEBUFFER_BINDING,"READ_FRAMEBUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(RENDERBUFFER_SAMPLES,"RENDERBUFFER_SAMPLES");
	HX_VISIT_MEMBER_NAME(FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER");
	HX_VISIT_MEMBER_NAME(FRAMEBUFFER_INCOMPLETE_MULTISAMPLE,"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE");
	HX_VISIT_MEMBER_NAME(UNIFORM_BUFFER,"UNIFORM_BUFFER");
	HX_VISIT_MEMBER_NAME(UNIFORM_BUFFER_BINDING,"UNIFORM_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(UNIFORM_BUFFER_START,"UNIFORM_BUFFER_START");
	HX_VISIT_MEMBER_NAME(UNIFORM_BUFFER_SIZE,"UNIFORM_BUFFER_SIZE");
	HX_VISIT_MEMBER_NAME(MAX_VERTEX_UNIFORM_BLOCKS,"MAX_VERTEX_UNIFORM_BLOCKS");
	HX_VISIT_MEMBER_NAME(MAX_FRAGMENT_UNIFORM_BLOCKS,"MAX_FRAGMENT_UNIFORM_BLOCKS");
	HX_VISIT_MEMBER_NAME(MAX_COMBINED_UNIFORM_BLOCKS,"MAX_COMBINED_UNIFORM_BLOCKS");
	HX_VISIT_MEMBER_NAME(MAX_UNIFORM_BUFFER_BINDINGS,"MAX_UNIFORM_BUFFER_BINDINGS");
	HX_VISIT_MEMBER_NAME(MAX_UNIFORM_BLOCK_SIZE,"MAX_UNIFORM_BLOCK_SIZE");
	HX_VISIT_MEMBER_NAME(MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS,"MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS");
	HX_VISIT_MEMBER_NAME(MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS,"MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS");
	HX_VISIT_MEMBER_NAME(UNIFORM_BUFFER_OFFSET_ALIGNMENT,"UNIFORM_BUFFER_OFFSET_ALIGNMENT");
	HX_VISIT_MEMBER_NAME(ACTIVE_UNIFORM_BLOCKS,"ACTIVE_UNIFORM_BLOCKS");
	HX_VISIT_MEMBER_NAME(UNIFORM_TYPE,"UNIFORM_TYPE");
	HX_VISIT_MEMBER_NAME(UNIFORM_SIZE,"UNIFORM_SIZE");
	HX_VISIT_MEMBER_NAME(UNIFORM_BLOCK_INDEX,"UNIFORM_BLOCK_INDEX");
	HX_VISIT_MEMBER_NAME(UNIFORM_OFFSET,"UNIFORM_OFFSET");
	HX_VISIT_MEMBER_NAME(UNIFORM_ARRAY_STRIDE,"UNIFORM_ARRAY_STRIDE");
	HX_VISIT_MEMBER_NAME(UNIFORM_MATRIX_STRIDE,"UNIFORM_MATRIX_STRIDE");
	HX_VISIT_MEMBER_NAME(UNIFORM_IS_ROW_MAJOR,"UNIFORM_IS_ROW_MAJOR");
	HX_VISIT_MEMBER_NAME(UNIFORM_BLOCK_BINDING,"UNIFORM_BLOCK_BINDING");
	HX_VISIT_MEMBER_NAME(UNIFORM_BLOCK_DATA_SIZE,"UNIFORM_BLOCK_DATA_SIZE");
	HX_VISIT_MEMBER_NAME(UNIFORM_BLOCK_ACTIVE_UNIFORMS,"UNIFORM_BLOCK_ACTIVE_UNIFORMS");
	HX_VISIT_MEMBER_NAME(UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES,"UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES");
	HX_VISIT_MEMBER_NAME(UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER,"UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER");
	HX_VISIT_MEMBER_NAME(UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER,"UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER");
	HX_VISIT_MEMBER_NAME(OBJECT_TYPE,"OBJECT_TYPE");
	HX_VISIT_MEMBER_NAME(SYNC_CONDITION,"SYNC_CONDITION");
	HX_VISIT_MEMBER_NAME(SYNC_STATUS,"SYNC_STATUS");
	HX_VISIT_MEMBER_NAME(SYNC_FLAGS,"SYNC_FLAGS");
	HX_VISIT_MEMBER_NAME(SYNC_FENCE,"SYNC_FENCE");
	HX_VISIT_MEMBER_NAME(SYNC_GPU_COMMANDS_COMPLETE,"SYNC_GPU_COMMANDS_COMPLETE");
	HX_VISIT_MEMBER_NAME(UNSIGNALED,"UNSIGNALED");
	HX_VISIT_MEMBER_NAME(SIGNALED,"SIGNALED");
	HX_VISIT_MEMBER_NAME(ALREADY_SIGNALED,"ALREADY_SIGNALED");
	HX_VISIT_MEMBER_NAME(TIMEOUT_EXPIRED,"TIMEOUT_EXPIRED");
	HX_VISIT_MEMBER_NAME(CONDITION_SATISFIED,"CONDITION_SATISFIED");
	HX_VISIT_MEMBER_NAME(WAIT_FAILED,"WAIT_FAILED");
	HX_VISIT_MEMBER_NAME(SYNC_FLUSH_COMMANDS_BIT,"SYNC_FLUSH_COMMANDS_BIT");
	HX_VISIT_MEMBER_NAME(COLOR,"COLOR");
	HX_VISIT_MEMBER_NAME(DEPTH,"DEPTH");
	HX_VISIT_MEMBER_NAME(STENCIL,"STENCIL");
	HX_VISIT_MEMBER_NAME(MIN,"MIN");
	HX_VISIT_MEMBER_NAME(MAX,"MAX");
	HX_VISIT_MEMBER_NAME(DEPTH_COMPONENT24,"DEPTH_COMPONENT24");
	HX_VISIT_MEMBER_NAME(STREAM_READ,"STREAM_READ");
	HX_VISIT_MEMBER_NAME(STREAM_COPY,"STREAM_COPY");
	HX_VISIT_MEMBER_NAME(STATIC_READ,"STATIC_READ");
	HX_VISIT_MEMBER_NAME(STATIC_COPY,"STATIC_COPY");
	HX_VISIT_MEMBER_NAME(DYNAMIC_READ,"DYNAMIC_READ");
	HX_VISIT_MEMBER_NAME(DYNAMIC_COPY,"DYNAMIC_COPY");
	HX_VISIT_MEMBER_NAME(DEPTH_COMPONENT32F,"DEPTH_COMPONENT32F");
	HX_VISIT_MEMBER_NAME(DEPTH32F_STENCIL8,"DEPTH32F_STENCIL8");
	HX_VISIT_MEMBER_NAME(INVALID_INDEX,"INVALID_INDEX");
	HX_VISIT_MEMBER_NAME(TIMEOUT_IGNORED,"TIMEOUT_IGNORED");
	HX_VISIT_MEMBER_NAME(MAX_CLIENT_WAIT_TIMEOUT_WEBGL,"MAX_CLIENT_WAIT_TIMEOUT_WEBGL");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(__arrayBufferBinding,"__arrayBufferBinding");
	HX_VISIT_MEMBER_NAME(__elementBufferBinding,"__elementBufferBinding");
	HX_VISIT_MEMBER_NAME(__contextID,"__contextID");
	HX_VISIT_MEMBER_NAME(__currentProgram,"__currentProgram");
	HX_VISIT_MEMBER_NAME(__framebufferBinding,"__framebufferBinding");
	HX_VISIT_MEMBER_NAME(__initialized,"__initialized");
	HX_VISIT_MEMBER_NAME(__isContextLost,"__isContextLost");
	HX_VISIT_MEMBER_NAME(__renderbufferBinding,"__renderbufferBinding");
	HX_VISIT_MEMBER_NAME(__texture2DBinding,"__texture2DBinding");
	HX_VISIT_MEMBER_NAME(__textureCubeMapBinding,"__textureCubeMapBinding");
}

Dynamic NativeGLRenderContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"CW") ) { return CW; }
		if (HX_FIELD_EQ(inName,"R8") ) { return R8; }
		if (HX_FIELD_EQ(inName,"RG") ) { return RG; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ONE") ) { return ONE; }
		if (HX_FIELD_EQ(inName,"CCW") ) { return CCW; }
		if (HX_FIELD_EQ(inName,"INT") ) { return INT; }
		if (HX_FIELD_EQ(inName,"RGB") ) { return RGB; }
		if (HX_FIELD_EQ(inName,"RED") ) { return RED; }
		if (HX_FIELD_EQ(inName,"RG8") ) { return RG8; }
		if (HX_FIELD_EQ(inName,"R8I") ) { return R8I; }
		if (HX_FIELD_EQ(inName,"MIN") ) { return MIN; }
		if (HX_FIELD_EQ(inName,"MAX") ) { return MAX; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ZERO") ) { return ZERO; }
		if (HX_FIELD_EQ(inName,"BACK") ) { return BACK; }
		if (HX_FIELD_EQ(inName,"BYTE") ) { return BYTE; }
		if (HX_FIELD_EQ(inName,"RGBA") ) { return RGBA; }
		if (HX_FIELD_EQ(inName,"LESS") ) { return LESS; }
		if (HX_FIELD_EQ(inName,"KEEP") ) { return KEEP; }
		if (HX_FIELD_EQ(inName,"INCR") ) { return INCR; }
		if (HX_FIELD_EQ(inName,"DECR") ) { return DECR; }
		if (HX_FIELD_EQ(inName,"BOOL") ) { return BOOL; }
		if (HX_FIELD_EQ(inName,"NONE") ) { return NONE; }
		if (HX_FIELD_EQ(inName,"RGB8") ) { return RGB8; }
		if (HX_FIELD_EQ(inName,"SRGB") ) { return SRGB; }
		if (HX_FIELD_EQ(inName,"R16F") ) { return R16F; }
		if (HX_FIELD_EQ(inName,"R32F") ) { return R32F; }
		if (HX_FIELD_EQ(inName,"R8UI") ) { return R8UI; }
		if (HX_FIELD_EQ(inName,"R16I") ) { return R16I; }
		if (HX_FIELD_EQ(inName,"R32I") ) { return R32I; }
		if (HX_FIELD_EQ(inName,"RG8I") ) { return RG8I; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"hint") ) { return hint_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"LINES") ) { return LINES; }
		if (HX_FIELD_EQ(inName,"FRONT") ) { return FRONT; }
		if (HX_FIELD_EQ(inName,"BLEND") ) { return BLEND; }
		if (HX_FIELD_EQ(inName,"SHORT") ) { return SHORT; }
		if (HX_FIELD_EQ(inName,"FLOAT") ) { return FLOAT; }
		if (HX_FIELD_EQ(inName,"FIXED") ) { return FIXED; }
		if (HX_FIELD_EQ(inName,"ALPHA") ) { return ALPHA; }
		if (HX_FIELD_EQ(inName,"NEVER") ) { return NEVER; }
		if (HX_FIELD_EQ(inName,"EQUAL") ) { return EQUAL; }
		if (HX_FIELD_EQ(inName,"RGBA4") ) { return RGBA4; }
		if (HX_FIELD_EQ(inName,"RGBA8") ) { return RGBA8; }
		if (HX_FIELD_EQ(inName,"SRGB8") ) { return SRGB8; }
		if (HX_FIELD_EQ(inName,"RGB8I") ) { return RGB8I; }
		if (HX_FIELD_EQ(inName,"RG16F") ) { return RG16F; }
		if (HX_FIELD_EQ(inName,"RG32F") ) { return RG32F; }
		if (HX_FIELD_EQ(inName,"R16UI") ) { return R16UI; }
		if (HX_FIELD_EQ(inName,"R32UI") ) { return R32UI; }
		if (HX_FIELD_EQ(inName,"RG8UI") ) { return RG8UI; }
		if (HX_FIELD_EQ(inName,"RG16I") ) { return RG16I; }
		if (HX_FIELD_EQ(inName,"RG32I") ) { return RG32I; }
		if (HX_FIELD_EQ(inName,"COLOR") ) { return COLOR; }
		if (HX_FIELD_EQ(inName,"DEPTH") ) { return DEPTH; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"POINTS") ) { return POINTS; }
		if (HX_FIELD_EQ(inName,"DITHER") ) { return DITHER; }
		if (HX_FIELD_EQ(inName,"NICEST") ) { return NICEST; }
		if (HX_FIELD_EQ(inName,"LEQUAL") ) { return LEQUAL; }
		if (HX_FIELD_EQ(inName,"GEQUAL") ) { return GEQUAL; }
		if (HX_FIELD_EQ(inName,"ALWAYS") ) { return ALWAYS; }
		if (HX_FIELD_EQ(inName,"INVERT") ) { return INVERT; }
		if (HX_FIELD_EQ(inName,"VENDOR") ) { return VENDOR; }
		if (HX_FIELD_EQ(inName,"LINEAR") ) { return LINEAR; }
		if (HX_FIELD_EQ(inName,"REPEAT") ) { return REPEAT; }
		if (HX_FIELD_EQ(inName,"RGB565") ) { return RGB565; }
		if (HX_FIELD_EQ(inName,"RGB32F") ) { return RGB32F; }
		if (HX_FIELD_EQ(inName,"RGB16F") ) { return RGB16F; }
		if (HX_FIELD_EQ(inName,"RGB8UI") ) { return RGB8UI; }
		if (HX_FIELD_EQ(inName,"RGB32I") ) { return RGB32I; }
		if (HX_FIELD_EQ(inName,"RGB16I") ) { return RGB16I; }
		if (HX_FIELD_EQ(inName,"RGBA8I") ) { return RGBA8I; }
		if (HX_FIELD_EQ(inName,"RG16UI") ) { return RG16UI; }
		if (HX_FIELD_EQ(inName,"RG32UI") ) { return RG32UI; }
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		if (HX_FIELD_EQ(inName,"isSync") ) { return isSync_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"SAMPLES") ) { return SAMPLES; }
		if (HX_FIELD_EQ(inName,"FASTEST") ) { return FASTEST; }
		if (HX_FIELD_EQ(inName,"GREATER") ) { return GREATER; }
		if (HX_FIELD_EQ(inName,"REPLACE") ) { return REPLACE; }
		if (HX_FIELD_EQ(inName,"VERSION") ) { return VERSION; }
		if (HX_FIELD_EQ(inName,"NEAREST") ) { return NEAREST; }
		if (HX_FIELD_EQ(inName,"TEXTURE") ) { return TEXTURE; }
		if (HX_FIELD_EQ(inName,"LOW_INT") ) { return LOW_INT; }
		if (HX_FIELD_EQ(inName,"RGB5_A1") ) { return RGB5_A1; }
		if (HX_FIELD_EQ(inName,"RGBA32F") ) { return RGBA32F; }
		if (HX_FIELD_EQ(inName,"RGBA16F") ) { return RGBA16F; }
		if (HX_FIELD_EQ(inName,"RGB9_E5") ) { return RGB9_E5; }
		if (HX_FIELD_EQ(inName,"RGB32UI") ) { return RGB32UI; }
		if (HX_FIELD_EQ(inName,"RGB16UI") ) { return RGB16UI; }
		if (HX_FIELD_EQ(inName,"RGBA8UI") ) { return RGBA8UI; }
		if (HX_FIELD_EQ(inName,"RGBA32I") ) { return RGBA32I; }
		if (HX_FIELD_EQ(inName,"RGBA16I") ) { return RGBA16I; }
		if (HX_FIELD_EQ(inName,"STENCIL") ) { return STENCIL; }
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
		if (HX_FIELD_EQ(inName,"disable") ) { return disable_dyn(); }
		if (HX_FIELD_EQ(inName,"isQuery") ) { return isQuery_dyn(); }
		if (HX_FIELD_EQ(inName,"scissor") ) { return scissor_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"FUNC_ADD") ) { return FUNC_ADD; }
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { return NO_ERROR; }
		if (HX_FIELD_EQ(inName,"VIEWPORT") ) { return VIEWPORT; }
		if (HX_FIELD_EQ(inName,"RED_BITS") ) { return RED_BITS; }
		if (HX_FIELD_EQ(inName,"NOTEQUAL") ) { return NOTEQUAL; }
		if (HX_FIELD_EQ(inName,"RENDERER") ) { return RENDERER; }
		if (HX_FIELD_EQ(inName,"TEXTURE0") ) { return TEXTURE0; }
		if (HX_FIELD_EQ(inName,"TEXTURE1") ) { return TEXTURE1; }
		if (HX_FIELD_EQ(inName,"TEXTURE2") ) { return TEXTURE2; }
		if (HX_FIELD_EQ(inName,"TEXTURE3") ) { return TEXTURE3; }
		if (HX_FIELD_EQ(inName,"TEXTURE4") ) { return TEXTURE4; }
		if (HX_FIELD_EQ(inName,"TEXTURE5") ) { return TEXTURE5; }
		if (HX_FIELD_EQ(inName,"TEXTURE6") ) { return TEXTURE6; }
		if (HX_FIELD_EQ(inName,"TEXTURE7") ) { return TEXTURE7; }
		if (HX_FIELD_EQ(inName,"TEXTURE8") ) { return TEXTURE8; }
		if (HX_FIELD_EQ(inName,"TEXTURE9") ) { return TEXTURE9; }
		if (HX_FIELD_EQ(inName,"INT_VEC2") ) { return INT_VEC2; }
		if (HX_FIELD_EQ(inName,"INT_VEC3") ) { return INT_VEC3; }
		if (HX_FIELD_EQ(inName,"INT_VEC4") ) { return INT_VEC4; }
		if (HX_FIELD_EQ(inName,"HIGH_INT") ) { return HIGH_INT; }
		if (HX_FIELD_EQ(inName,"RGB10_A2") ) { return RGB10_A2; }
		if (HX_FIELD_EQ(inName,"RGBA32UI") ) { return RGBA32UI; }
		if (HX_FIELD_EQ(inName,"RGBA16UI") ) { return RGBA16UI; }
		if (HX_FIELD_EQ(inName,"R8_SNORM") ) { return R8_SNORM; }
		if (HX_FIELD_EQ(inName,"SIGNALED") ) { return SIGNALED; }
		if (HX_FIELD_EQ(inName,"cullFace") ) { return cullFace_dyn(); }
		if (HX_FIELD_EQ(inName,"endQuery") ) { return endQuery_dyn(); }
		if (HX_FIELD_EQ(inName,"getError") ) { return getError_dyn(); }
		if (HX_FIELD_EQ(inName,"getFloat") ) { return getFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"getQuery") ) { return getQuery_dyn(); }
		if (HX_FIELD_EQ(inName,"isBuffer") ) { return isBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"isShader") ) { return isShader_dyn(); }
		if (HX_FIELD_EQ(inName,"viewport") ) { return viewport_dyn(); }
		if (HX_FIELD_EQ(inName,"waitSync") ) { return waitSync_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"LINE_LOOP") ) { return LINE_LOOP; }
		if (HX_FIELD_EQ(inName,"TRIANGLES") ) { return TRIANGLES; }
		if (HX_FIELD_EQ(inName,"SRC_COLOR") ) { return SRC_COLOR; }
		if (HX_FIELD_EQ(inName,"SRC_ALPHA") ) { return SRC_ALPHA; }
		if (HX_FIELD_EQ(inName,"DST_ALPHA") ) { return DST_ALPHA; }
		if (HX_FIELD_EQ(inName,"DST_COLOR") ) { return DST_COLOR; }
		if (HX_FIELD_EQ(inName,"CULL_FACE") ) { return CULL_FACE; }
		if (HX_FIELD_EQ(inName,"BLUE_BITS") ) { return BLUE_BITS; }
		if (HX_FIELD_EQ(inName,"DONT_CARE") ) { return DONT_CARE; }
		if (HX_FIELD_EQ(inName,"LUMINANCE") ) { return LUMINANCE; }
		if (HX_FIELD_EQ(inName,"INCR_WRAP") ) { return INCR_WRAP; }
		if (HX_FIELD_EQ(inName,"DECR_WRAP") ) { return DECR_WRAP; }
		if (HX_FIELD_EQ(inName,"TEXTURE10") ) { return TEXTURE10; }
		if (HX_FIELD_EQ(inName,"TEXTURE11") ) { return TEXTURE11; }
		if (HX_FIELD_EQ(inName,"TEXTURE12") ) { return TEXTURE12; }
		if (HX_FIELD_EQ(inName,"TEXTURE13") ) { return TEXTURE13; }
		if (HX_FIELD_EQ(inName,"TEXTURE14") ) { return TEXTURE14; }
		if (HX_FIELD_EQ(inName,"TEXTURE15") ) { return TEXTURE15; }
		if (HX_FIELD_EQ(inName,"TEXTURE16") ) { return TEXTURE16; }
		if (HX_FIELD_EQ(inName,"TEXTURE17") ) { return TEXTURE17; }
		if (HX_FIELD_EQ(inName,"TEXTURE18") ) { return TEXTURE18; }
		if (HX_FIELD_EQ(inName,"TEXTURE19") ) { return TEXTURE19; }
		if (HX_FIELD_EQ(inName,"TEXTURE20") ) { return TEXTURE20; }
		if (HX_FIELD_EQ(inName,"TEXTURE21") ) { return TEXTURE21; }
		if (HX_FIELD_EQ(inName,"TEXTURE22") ) { return TEXTURE22; }
		if (HX_FIELD_EQ(inName,"TEXTURE23") ) { return TEXTURE23; }
		if (HX_FIELD_EQ(inName,"TEXTURE24") ) { return TEXTURE24; }
		if (HX_FIELD_EQ(inName,"TEXTURE25") ) { return TEXTURE25; }
		if (HX_FIELD_EQ(inName,"TEXTURE26") ) { return TEXTURE26; }
		if (HX_FIELD_EQ(inName,"TEXTURE27") ) { return TEXTURE27; }
		if (HX_FIELD_EQ(inName,"TEXTURE28") ) { return TEXTURE28; }
		if (HX_FIELD_EQ(inName,"TEXTURE29") ) { return TEXTURE29; }
		if (HX_FIELD_EQ(inName,"TEXTURE30") ) { return TEXTURE30; }
		if (HX_FIELD_EQ(inName,"TEXTURE31") ) { return TEXTURE31; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC2") ) { return BOOL_VEC2; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC3") ) { return BOOL_VEC3; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC4") ) { return BOOL_VEC4; }
		if (HX_FIELD_EQ(inName,"LOW_FLOAT") ) { return LOW_FLOAT; }
		if (HX_FIELD_EQ(inName,"RG8_SNORM") ) { return RG8_SNORM; }
		if (HX_FIELD_EQ(inName,"blendFunc") ) { return blendFunc_dyn(); }
		if (HX_FIELD_EQ(inName,"colorMask") ) { return colorMask_dyn(); }
		if (HX_FIELD_EQ(inName,"depthFunc") ) { return depthFunc_dyn(); }
		if (HX_FIELD_EQ(inName,"depthMask") ) { return depthMask_dyn(); }
		if (HX_FIELD_EQ(inName,"fenceSync") ) { return fenceSync_dyn(); }
		if (HX_FIELD_EQ(inName,"frontFace") ) { return frontFace_dyn(); }
		if (HX_FIELD_EQ(inName,"getFloatv") ) { return getFloatv_dyn(); }
		if (HX_FIELD_EQ(inName,"getQueryi") ) { return getQueryi_dyn(); }
		if (HX_FIELD_EQ(inName,"getString") ) { return getString_dyn(); }
		if (HX_FIELD_EQ(inName,"isEnabled") ) { return isEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"isProgram") ) { return isProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"isSampler") ) { return isSampler_dyn(); }
		if (HX_FIELD_EQ(inName,"isTexture") ) { return isTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"lineWidth") ) { return lineWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilOp") ) { return stencilOp_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1f") ) { return uniform1f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1i") ) { return uniform1i_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2f") ) { return uniform2f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2i") ) { return uniform2i_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3f") ) { return uniform3f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3i") ) { return uniform3i_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4f") ) { return uniform4f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4i") ) { return uniform4i_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"LINE_STRIP") ) { return LINE_STRIP; }
		if (HX_FIELD_EQ(inName,"TEXTURE_2D") ) { return TEXTURE_2D; }
		if (HX_FIELD_EQ(inName,"DEPTH_TEST") ) { return DEPTH_TEST; }
		if (HX_FIELD_EQ(inName,"LINE_WIDTH") ) { return LINE_WIDTH; }
		if (HX_FIELD_EQ(inName,"FRONT_FACE") ) { return FRONT_FACE; }
		if (HX_FIELD_EQ(inName,"DEPTH_FUNC") ) { return DEPTH_FUNC; }
		if (HX_FIELD_EQ(inName,"GREEN_BITS") ) { return GREEN_BITS; }
		if (HX_FIELD_EQ(inName,"ALPHA_BITS") ) { return ALPHA_BITS; }
		if (HX_FIELD_EQ(inName,"DEPTH_BITS") ) { return DEPTH_BITS; }
		if (HX_FIELD_EQ(inName,"EXTENSIONS") ) { return EXTENSIONS; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC2") ) { return FLOAT_VEC2; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC3") ) { return FLOAT_VEC3; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC4") ) { return FLOAT_VEC4; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT2") ) { return FLOAT_MAT2; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT3") ) { return FLOAT_MAT3; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT4") ) { return FLOAT_MAT4; }
		if (HX_FIELD_EQ(inName,"SAMPLER_2D") ) { return SAMPLER_2D; }
		if (HX_FIELD_EQ(inName,"HIGH_FLOAT") ) { return HIGH_FLOAT; }
		if (HX_FIELD_EQ(inName,"MEDIUM_INT") ) { return MEDIUM_INT; }
		if (HX_FIELD_EQ(inName,"TEXTURE_3D") ) { return TEXTURE_3D; }
		if (HX_FIELD_EQ(inName,"RGB8_SNORM") ) { return RGB8_SNORM; }
		if (HX_FIELD_EQ(inName,"RGB10_A2UI") ) { return RGB10_A2UI; }
		if (HX_FIELD_EQ(inName,"HALF_FLOAT") ) { return HALF_FLOAT; }
		if (HX_FIELD_EQ(inName,"RG_INTEGER") ) { return RG_INTEGER; }
		if (HX_FIELD_EQ(inName,"SAMPLER_3D") ) { return SAMPLER_3D; }
		if (HX_FIELD_EQ(inName,"SYNC_FLAGS") ) { return SYNC_FLAGS; }
		if (HX_FIELD_EQ(inName,"SYNC_FENCE") ) { return SYNC_FENCE; }
		if (HX_FIELD_EQ(inName,"UNSIGNALED") ) { return UNSIGNALED; }
		if (HX_FIELD_EQ(inName,"beginQuery") ) { return beginQuery_dyn(); }
		if (HX_FIELD_EQ(inName,"bindBuffer") ) { return bindBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"blendColor") ) { return blendColor_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferData") ) { return bufferData_dyn(); }
		if (HX_FIELD_EQ(inName,"clearColor") ) { return clearColor_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteSync") ) { return deleteSync_dyn(); }
		if (HX_FIELD_EQ(inName,"drawArrays") ) { return drawArrays_dyn(); }
		if (HX_FIELD_EQ(inName,"getBoolean") ) { return getBoolean_dyn(); }
		if (HX_FIELD_EQ(inName,"getInteger") ) { return getInteger_dyn(); }
		if (HX_FIELD_EQ(inName,"getQueryiv") ) { return getQueryiv_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderi") ) { return getShaderi_dyn(); }
		if (HX_FIELD_EQ(inName,"getStringi") ) { return getStringi_dyn(); }
		if (HX_FIELD_EQ(inName,"getUniform") ) { return getUniform_dyn(); }
		if (HX_FIELD_EQ(inName,"readBuffer") ) { return readBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"readPixels") ) { return readPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"texImage2D") ) { return texImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"texImage3D") ) { return texImage3D_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1fv") ) { return uniform1fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1iv") ) { return uniform1iv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1ui") ) { return uniform1ui_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2fv") ) { return uniform2fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2iv") ) { return uniform2iv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2ui") ) { return uniform2ui_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3fv") ) { return uniform3fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3iv") ) { return uniform3iv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3ui") ) { return uniform3ui_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4fv") ) { return uniform4fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4iv") ) { return uniform4iv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4ui") ) { return uniform4ui_dyn(); }
		if (HX_FIELD_EQ(inName,"useProgram") ) { return useProgram_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"BLEND_COLOR") ) { return BLEND_COLOR; }
		if (HX_FIELD_EQ(inName,"STREAM_DRAW") ) { return STREAM_DRAW; }
		if (HX_FIELD_EQ(inName,"STATIC_DRAW") ) { return STATIC_DRAW; }
		if (HX_FIELD_EQ(inName,"BUFFER_SIZE") ) { return BUFFER_SIZE; }
		if (HX_FIELD_EQ(inName,"DEPTH_RANGE") ) { return DEPTH_RANGE; }
		if (HX_FIELD_EQ(inName,"STENCIL_REF") ) { return STENCIL_REF; }
		if (HX_FIELD_EQ(inName,"SCISSOR_BOX") ) { return SCISSOR_BOX; }
		if (HX_FIELD_EQ(inName,"SHADER_TYPE") ) { return SHADER_TYPE; }
		if (HX_FIELD_EQ(inName,"LINK_STATUS") ) { return LINK_STATUS; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER") ) { return FRAMEBUFFER; }
		if (HX_FIELD_EQ(inName,"READ_BUFFER") ) { return READ_BUFFER; }
		if (HX_FIELD_EQ(inName,"RED_INTEGER") ) { return RED_INTEGER; }
		if (HX_FIELD_EQ(inName,"RGB_INTEGER") ) { return RGB_INTEGER; }
		if (HX_FIELD_EQ(inName,"RGBA8_SNORM") ) { return RGBA8_SNORM; }
		if (HX_FIELD_EQ(inName,"MAX_SAMPLES") ) { return MAX_SAMPLES; }
		if (HX_FIELD_EQ(inName,"OBJECT_TYPE") ) { return OBJECT_TYPE; }
		if (HX_FIELD_EQ(inName,"SYNC_STATUS") ) { return SYNC_STATUS; }
		if (HX_FIELD_EQ(inName,"WAIT_FAILED") ) { return WAIT_FAILED; }
		if (HX_FIELD_EQ(inName,"STREAM_READ") ) { return STREAM_READ; }
		if (HX_FIELD_EQ(inName,"STREAM_COPY") ) { return STREAM_COPY; }
		if (HX_FIELD_EQ(inName,"STATIC_READ") ) { return STATIC_READ; }
		if (HX_FIELD_EQ(inName,"STATIC_COPY") ) { return STATIC_COPY; }
		if (HX_FIELD_EQ(inName,"__contextID") ) { return __contextID; }
		if (HX_FIELD_EQ(inName,"bindSampler") ) { return bindSampler_dyn(); }
		if (HX_FIELD_EQ(inName,"bindTexture") ) { return bindTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"clearDepthf") ) { return clearDepthf_dyn(); }
		if (HX_FIELD_EQ(inName,"createQuery") ) { return createQuery_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteQuery") ) { return deleteQuery_dyn(); }
		if (HX_FIELD_EQ(inName,"depthRangef") ) { return depthRangef_dyn(); }
		if (HX_FIELD_EQ(inName,"drawBuffers") ) { return drawBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"getBooleanv") ) { return getBooleanv_dyn(); }
		if (HX_FIELD_EQ(inName,"getIntegeri") ) { return getIntegeri_dyn(); }
		if (HX_FIELD_EQ(inName,"getIntegerv") ) { return getIntegerv_dyn(); }
		if (HX_FIELD_EQ(inName,"getProgrami") ) { return getProgrami_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderiv") ) { return getShaderiv_dyn(); }
		if (HX_FIELD_EQ(inName,"getUniformf") ) { return getUniformf_dyn(); }
		if (HX_FIELD_EQ(inName,"getUniformi") ) { return getUniformi_dyn(); }
		if (HX_FIELD_EQ(inName,"linkProgram") ) { return linkProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"pixelStorei") ) { return pixelStorei_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilFunc") ) { return stencilFunc_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilMask") ) { return stencilMask_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1uiv") ) { return uniform1uiv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2uiv") ) { return uniform2uiv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3uiv") ) { return uniform3uiv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4uiv") ) { return uniform4uiv_dyn(); }
		if (HX_FIELD_EQ(inName,"unmapBuffer") ) { return unmapBuffer_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"TRIANGLE_FAN") ) { return TRIANGLE_FAN; }
		if (HX_FIELD_EQ(inName,"ARRAY_BUFFER") ) { return ARRAY_BUFFER; }
		if (HX_FIELD_EQ(inName,"DYNAMIC_DRAW") ) { return DYNAMIC_DRAW; }
		if (HX_FIELD_EQ(inName,"BUFFER_USAGE") ) { return BUFFER_USAGE; }
		if (HX_FIELD_EQ(inName,"STENCIL_TEST") ) { return STENCIL_TEST; }
		if (HX_FIELD_EQ(inName,"SCISSOR_TEST") ) { return SCISSOR_TEST; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { return INVALID_ENUM; }
		if (HX_FIELD_EQ(inName,"STENCIL_FUNC") ) { return STENCIL_FUNC; }
		if (HX_FIELD_EQ(inName,"STENCIL_FAIL") ) { return STENCIL_FAIL; }
		if (HX_FIELD_EQ(inName,"STENCIL_BITS") ) { return STENCIL_BITS; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT") ) { return UNSIGNED_INT; }
		if (HX_FIELD_EQ(inName,"SAMPLER_CUBE") ) { return SAMPLER_CUBE; }
		if (HX_FIELD_EQ(inName,"POINT_SPRITE") ) { return POINT_SPRITE; }
		if (HX_FIELD_EQ(inName,"MEDIUM_FLOAT") ) { return MEDIUM_FLOAT; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER") ) { return RENDERBUFFER; }
		if (HX_FIELD_EQ(inName,"SRGB8_ALPHA8") ) { return SRGB8_ALPHA8; }
		if (HX_FIELD_EQ(inName,"RGBA_INTEGER") ) { return RGBA_INTEGER; }
		if (HX_FIELD_EQ(inName,"QUERY_RESULT") ) { return QUERY_RESULT; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER0") ) { return DRAW_BUFFER0; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER1") ) { return DRAW_BUFFER1; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER2") ) { return DRAW_BUFFER2; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER3") ) { return DRAW_BUFFER3; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER4") ) { return DRAW_BUFFER4; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER5") ) { return DRAW_BUFFER5; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER6") ) { return DRAW_BUFFER6; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER7") ) { return DRAW_BUFFER7; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER8") ) { return DRAW_BUFFER8; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER9") ) { return DRAW_BUFFER9; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT2x3") ) { return FLOAT_MAT2x3; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT2x4") ) { return FLOAT_MAT2x4; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT3x2") ) { return FLOAT_MAT3x2; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT3x4") ) { return FLOAT_MAT3x4; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT4x2") ) { return FLOAT_MAT4x2; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT4x3") ) { return FLOAT_MAT4x3; }
		if (HX_FIELD_EQ(inName,"UNIFORM_TYPE") ) { return UNIFORM_TYPE; }
		if (HX_FIELD_EQ(inName,"UNIFORM_SIZE") ) { return UNIFORM_SIZE; }
		if (HX_FIELD_EQ(inName,"DYNAMIC_READ") ) { return DYNAMIC_READ; }
		if (HX_FIELD_EQ(inName,"DYNAMIC_COPY") ) { return DYNAMIC_COPY; }
		if (HX_FIELD_EQ(inName,"attachShader") ) { return attachShader_dyn(); }
		if (HX_FIELD_EQ(inName,"clearStencil") ) { return clearStencil_dyn(); }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return createBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"createShader") ) { return createShader_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteBuffer") ) { return deleteBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteShader") ) { return deleteShader_dyn(); }
		if (HX_FIELD_EQ(inName,"detachShader") ) { return detachShader_dyn(); }
		if (HX_FIELD_EQ(inName,"drawElements") ) { return drawElements_dyn(); }
		if (HX_FIELD_EQ(inName,"getExtension") ) { return getExtension_dyn(); }
		if (HX_FIELD_EQ(inName,"getInteger64") ) { return getInteger64_dyn(); }
		if (HX_FIELD_EQ(inName,"getParameter") ) { return getParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getProgramiv") ) { return getProgramiv_dyn(); }
		if (HX_FIELD_EQ(inName,"getUniformfv") ) { return getUniformfv_dyn(); }
		if (HX_FIELD_EQ(inName,"getUniformiv") ) { return getUniformiv_dyn(); }
		if (HX_FIELD_EQ(inName,"getUniformui") ) { return getUniformui_dyn(); }
		if (HX_FIELD_EQ(inName,"shaderBinary") ) { return shaderBinary_dyn(); }
		if (HX_FIELD_EQ(inName,"shaderSource") ) { return shaderSource_dyn(); }
		if (HX_FIELD_EQ(inName,"texStorage2D") ) { return texStorage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"texStorage3D") ) { return texStorage3D_dyn(); }
		if (HX_FIELD_EQ(inName,"__initialize") ) { return __initialize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FUNC_SUBTRACT") ) { return FUNC_SUBTRACT; }
		if (HX_FIELD_EQ(inName,"BLEND_DST_RGB") ) { return BLEND_DST_RGB; }
		if (HX_FIELD_EQ(inName,"BLEND_SRC_RGB") ) { return BLEND_SRC_RGB; }
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { return INVALID_VALUE; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { return OUT_OF_MEMORY; }
		if (HX_FIELD_EQ(inName,"SUBPIXEL_BITS") ) { return SUBPIXEL_BITS; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_BYTE") ) { return UNSIGNED_BYTE; }
		if (HX_FIELD_EQ(inName,"VERTEX_SHADER") ) { return VERTEX_SHADER; }
		if (HX_FIELD_EQ(inName,"DELETE_STATUS") ) { return DELETE_STATUS; }
		if (HX_FIELD_EQ(inName,"CLAMP_TO_EDGE") ) { return CLAMP_TO_EDGE; }
		if (HX_FIELD_EQ(inName,"STENCIL_INDEX") ) { return STENCIL_INDEX; }
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL") ) { return DEPTH_STENCIL; }
		if (HX_FIELD_EQ(inName,"CURRENT_QUERY") ) { return CURRENT_QUERY; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER10") ) { return DRAW_BUFFER10; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER11") ) { return DRAW_BUFFER11; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER12") ) { return DRAW_BUFFER12; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER13") ) { return DRAW_BUFFER13; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER14") ) { return DRAW_BUFFER14; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER15") ) { return DRAW_BUFFER15; }
		if (HX_FIELD_EQ(inName,"INVALID_INDEX") ) { return INVALID_INDEX; }
		if (HX_FIELD_EQ(inName,"__initialized") ) { return __initialized; }
		if (HX_FIELD_EQ(inName,"activeTexture") ) { return activeTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"blendEquation") ) { return blendEquation_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferSubData") ) { return bufferSubData_dyn(); }
		if (HX_FIELD_EQ(inName,"clearBufferfi") ) { return clearBufferfi_dyn(); }
		if (HX_FIELD_EQ(inName,"clearBufferfv") ) { return clearBufferfv_dyn(); }
		if (HX_FIELD_EQ(inName,"clearBufferiv") ) { return clearBufferiv_dyn(); }
		if (HX_FIELD_EQ(inName,"compileShader") ) { return compileShader_dyn(); }
		if (HX_FIELD_EQ(inName,"createProgram") ) { return createProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"createSampler") ) { return createSampler_dyn(); }
		if (HX_FIELD_EQ(inName,"createTexture") ) { return createTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteProgram") ) { return deleteProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteSampler") ) { return deleteSampler_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteTexture") ) { return deleteTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"getInteger64i") ) { return getInteger64i_dyn(); }
		if (HX_FIELD_EQ(inName,"getInteger64v") ) { return getInteger64v_dyn(); }
		if (HX_FIELD_EQ(inName,"getIntegeri_v") ) { return getIntegeri_v_dyn(); }
		if (HX_FIELD_EQ(inName,"getUniformuiv") ) { return getUniformuiv_dyn(); }
		if (HX_FIELD_EQ(inName,"isContextLost") ) { return isContextLost_dyn(); }
		if (HX_FIELD_EQ(inName,"isFramebuffer") ) { return isFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"isVertexArray") ) { return isVertexArray_dyn(); }
		if (HX_FIELD_EQ(inName,"polygonOffset") ) { return polygonOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"programBinary") ) { return programBinary_dyn(); }
		if (HX_FIELD_EQ(inName,"texParameterf") ) { return texParameterf_dyn(); }
		if (HX_FIELD_EQ(inName,"texParameteri") ) { return texParameteri_dyn(); }
		if (HX_FIELD_EQ(inName,"texSubImage2D") ) { return texSubImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"texSubImage3D") ) { return texSubImage3D_dyn(); }
		if (HX_FIELD_EQ(inName,"__contextLost") ) { return __contextLost_dyn(); }
		if (HX_FIELD_EQ(inName,"__getObjectID") ) { return __getObjectID_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TRIANGLE_STRIP") ) { return TRIANGLE_STRIP; }
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION") ) { return BLEND_EQUATION; }
		if (HX_FIELD_EQ(inName,"CONSTANT_COLOR") ) { return CONSTANT_COLOR; }
		if (HX_FIELD_EQ(inName,"CONSTANT_ALPHA") ) { return CONSTANT_ALPHA; }
		if (HX_FIELD_EQ(inName,"FRONT_AND_BACK") ) { return FRONT_AND_BACK; }
		if (HX_FIELD_EQ(inName,"CULL_FACE_MODE") ) { return CULL_FACE_MODE; }
		if (HX_FIELD_EQ(inName,"PACK_ALIGNMENT") ) { return PACK_ALIGNMENT; }
		if (HX_FIELD_EQ(inName,"SAMPLE_BUFFERS") ) { return SAMPLE_BUFFERS; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT") ) { return UNSIGNED_SHORT; }
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_S") ) { return TEXTURE_WRAP_S; }
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_T") ) { return TEXTURE_WRAP_T; }
		if (HX_FIELD_EQ(inName,"ACTIVE_TEXTURE") ) { return ACTIVE_TEXTURE; }
		if (HX_FIELD_EQ(inName,"COMPILE_STATUS") ) { return COMPILE_STATUS; }
		if (HX_FIELD_EQ(inName,"STENCIL_INDEX8") ) { return STENCIL_INDEX8; }
		if (HX_FIELD_EQ(inName,"PACK_SKIP_ROWS") ) { return PACK_SKIP_ROWS; }
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_R") ) { return TEXTURE_WRAP_R; }
		if (HX_FIELD_EQ(inName,"R11F_G11F_B10F") ) { return R11F_G11F_B10F; }
		if (HX_FIELD_EQ(inName,"INT_SAMPLER_2D") ) { return INT_SAMPLER_2D; }
		if (HX_FIELD_EQ(inName,"INT_SAMPLER_3D") ) { return INT_SAMPLER_3D; }
		if (HX_FIELD_EQ(inName,"UNIFORM_BUFFER") ) { return UNIFORM_BUFFER; }
		if (HX_FIELD_EQ(inName,"UNIFORM_OFFSET") ) { return UNIFORM_OFFSET; }
		if (HX_FIELD_EQ(inName,"SYNC_CONDITION") ) { return SYNC_CONDITION; }
		if (HX_FIELD_EQ(inName,"bindBufferBase") ) { return bindBufferBase_dyn(); }
		if (HX_FIELD_EQ(inName,"clearBufferuiv") ) { return clearBufferuiv_dyn(); }
		if (HX_FIELD_EQ(inName,"clientWaitSync") ) { return clientWaitSync_dyn(); }
		if (HX_FIELD_EQ(inName,"copyTexImage2D") ) { return copyTexImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"generateMipmap") ) { return generateMipmap_dyn(); }
		if (HX_FIELD_EQ(inName,"isRenderbuffer") ) { return isRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"mapBufferRange") ) { return mapBufferRange_dyn(); }
		if (HX_FIELD_EQ(inName,"sampleCoverage") ) { return sampleCoverage_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib1f") ) { return vertexAttrib1f_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib2f") ) { return vertexAttrib2f_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib3f") ) { return vertexAttrib3f_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib4f") ) { return vertexAttrib4f_dyn(); }
		if (HX_FIELD_EQ(inName,"__createObject") ) { return __createObject_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"BLEND_DST_ALPHA") ) { return BLEND_DST_ALPHA; }
		if (HX_FIELD_EQ(inName,"BLEND_SRC_ALPHA") ) { return BLEND_SRC_ALPHA; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE") ) { return SAMPLE_COVERAGE; }
		if (HX_FIELD_EQ(inName,"DEPTH_WRITEMASK") ) { return DEPTH_WRITEMASK; }
		if (HX_FIELD_EQ(inName,"COLOR_WRITEMASK") ) { return COLOR_WRITEMASK; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT") ) { return DEPTH_COMPONENT; }
		if (HX_FIELD_EQ(inName,"LUMINANCE_ALPHA") ) { return LUMINANCE_ALPHA; }
		if (HX_FIELD_EQ(inName,"FRAGMENT_SHADER") ) { return FRAGMENT_SHADER; }
		if (HX_FIELD_EQ(inName,"VALIDATE_STATUS") ) { return VALIDATE_STATUS; }
		if (HX_FIELD_EQ(inName,"ACTIVE_UNIFORMS") ) { return ACTIVE_UNIFORMS; }
		if (HX_FIELD_EQ(inName,"CURRENT_PROGRAM") ) { return CURRENT_PROGRAM; }
		if (HX_FIELD_EQ(inName,"MIRRORED_REPEAT") ) { return MIRRORED_REPEAT; }
		if (HX_FIELD_EQ(inName,"INFO_LOG_LENGTH") ) { return INFO_LOG_LENGTH; }
		if (HX_FIELD_EQ(inName,"SHADER_COMPILER") ) { return SHADER_COMPILER; }
		if (HX_FIELD_EQ(inName,"PACK_ROW_LENGTH") ) { return PACK_ROW_LENGTH; }
		if (HX_FIELD_EQ(inName,"TEXTURE_MIN_LOD") ) { return TEXTURE_MIN_LOD; }
		if (HX_FIELD_EQ(inName,"TEXTURE_MAX_LOD") ) { return TEXTURE_MAX_LOD; }
		if (HX_FIELD_EQ(inName,"SAMPLER_BINDING") ) { return SAMPLER_BINDING; }
		if (HX_FIELD_EQ(inName,"TIMEOUT_EXPIRED") ) { return TIMEOUT_EXPIRED; }
		if (HX_FIELD_EQ(inName,"TIMEOUT_IGNORED") ) { return TIMEOUT_IGNORED; }
		if (HX_FIELD_EQ(inName,"__isContextLost") ) { return __isContextLost; }
		if (HX_FIELD_EQ(inName,"bindBufferRange") ) { return bindBufferRange_dyn(); }
		if (HX_FIELD_EQ(inName,"bindFramebuffer") ) { return bindFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"bindVertexArray") ) { return bindVertexArray_dyn(); }
		if (HX_FIELD_EQ(inName,"blitFramebuffer") ) { return blitFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getActiveAttrib") ) { return getActiveAttrib_dyn(); }
		if (HX_FIELD_EQ(inName,"getInteger64i_v") ) { return getInteger64i_v_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderSource") ) { return getShaderSource_dyn(); }
		if (HX_FIELD_EQ(inName,"getTexParameter") ) { return getTexParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexAttrib") ) { return getVertexAttrib_dyn(); }
		if (HX_FIELD_EQ(inName,"validateProgram") ) { return validateProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib1fv") ) { return vertexAttrib1fv_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib2fv") ) { return vertexAttrib2fv_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib3fv") ) { return vertexAttrib3fv_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib4fv") ) { return vertexAttrib4fv_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttribI4i") ) { return vertexAttribI4i_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT") ) { return DEPTH_BUFFER_BIT; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT") ) { return COLOR_BUFFER_BIT; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_REF") ) { return STENCIL_BACK_REF; }
		if (HX_FIELD_EQ(inName,"UNPACK_ALIGNMENT") ) { return UNPACK_ALIGNMENT; }
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_SIZE") ) { return MAX_TEXTURE_SIZE; }
		if (HX_FIELD_EQ(inName,"ATTACHED_SHADERS") ) { return ATTACHED_SHADERS; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP") ) { return TEXTURE_CUBE_MAP; }
		if (HX_FIELD_EQ(inName,"DEPTH_ATTACHMENT") ) { return DEPTH_ATTACHMENT; }
		if (HX_FIELD_EQ(inName,"UNPACK_SKIP_ROWS") ) { return UNPACK_SKIP_ROWS; }
		if (HX_FIELD_EQ(inName,"PACK_SKIP_PIXELS") ) { return PACK_SKIP_PIXELS; }
		if (HX_FIELD_EQ(inName,"TEXTURE_2D_ARRAY") ) { return TEXTURE_2D_ARRAY; }
		if (HX_FIELD_EQ(inName,"MAX_DRAW_BUFFERS") ) { return MAX_DRAW_BUFFERS; }
		if (HX_FIELD_EQ(inName,"SAMPLER_2D_ARRAY") ) { return SAMPLER_2D_ARRAY; }
		if (HX_FIELD_EQ(inName,"INT_SAMPLER_CUBE") ) { return INT_SAMPLER_CUBE; }
		if (HX_FIELD_EQ(inName,"COPY_READ_BUFFER") ) { return COPY_READ_BUFFER; }
		if (HX_FIELD_EQ(inName,"SEPARATE_ATTRIBS") ) { return SEPARATE_ATTRIBS; }
		if (HX_FIELD_EQ(inName,"DEPTH24_STENCIL8") ) { return DEPTH24_STENCIL8; }
		if (HX_FIELD_EQ(inName,"READ_FRAMEBUFFER") ) { return READ_FRAMEBUFFER; }
		if (HX_FIELD_EQ(inName,"DRAW_FRAMEBUFFER") ) { return DRAW_FRAMEBUFFER; }
		if (HX_FIELD_EQ(inName,"ALREADY_SIGNALED") ) { return ALREADY_SIGNALED; }
		if (HX_FIELD_EQ(inName,"__currentProgram") ) { return __currentProgram; }
		if (HX_FIELD_EQ(inName,"bindRenderbuffer") ) { return bindRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getActiveUniform") ) { return getActiveUniform_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferSubData") ) { return getBufferSubData_dyn(); }
		if (HX_FIELD_EQ(inName,"getProgramBinary") ) { return getProgramBinary_dyn(); }
		if (HX_FIELD_EQ(inName,"getQueryObjectui") ) { return getQueryObjectui_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderInfoLog") ) { return getShaderInfoLog_dyn(); }
		if (HX_FIELD_EQ(inName,"getSyncParameter") ) { return getSyncParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getTexParameterf") ) { return getTexParameterf_dyn(); }
		if (HX_FIELD_EQ(inName,"getTexParameteri") ) { return getTexParameteri_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexAttribf") ) { return getVertexAttribf_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexAttribi") ) { return getVertexAttribi_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix2fv") ) { return uniformMatrix2fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix3fv") ) { return uniformMatrix3fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix4fv") ) { return uniformMatrix4fv_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttribI4iv") ) { return vertexAttribI4iv_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttribI4ui") ) { return vertexAttribI4ui_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"INVALID_OPERATION") ) { return INVALID_OPERATION; }
		if (HX_FIELD_EQ(inName,"DEPTH_CLEAR_VALUE") ) { return DEPTH_CLEAR_VALUE; }
		if (HX_FIELD_EQ(inName,"STENCIL_WRITEMASK") ) { return STENCIL_WRITEMASK; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_FUNC") ) { return STENCIL_BACK_FUNC; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_FAIL") ) { return STENCIL_BACK_FAIL; }
		if (HX_FIELD_EQ(inName,"COLOR_CLEAR_VALUE") ) { return COLOR_CLEAR_VALUE; }
		if (HX_FIELD_EQ(inName,"MAX_VIEWPORT_DIMS") ) { return MAX_VIEWPORT_DIMS; }
		if (HX_FIELD_EQ(inName,"ACTIVE_ATTRIBUTES") ) { return ACTIVE_ATTRIBUTES; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT16") ) { return DEPTH_COMPONENT16; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT0") ) { return COLOR_ATTACHMENT0; }
		if (HX_FIELD_EQ(inName,"UNPACK_ROW_LENGTH") ) { return UNPACK_ROW_LENGTH; }
		if (HX_FIELD_EQ(inName,"MAX_ELEMENT_INDEX") ) { return MAX_ELEMENT_INDEX; }
		if (HX_FIELD_EQ(inName,"TEXTURE_MAX_LEVEL") ) { return TEXTURE_MAX_LEVEL; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_24_8") ) { return UNSIGNED_INT_24_8; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT1") ) { return COLOR_ATTACHMENT1; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT2") ) { return COLOR_ATTACHMENT2; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT3") ) { return COLOR_ATTACHMENT3; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT4") ) { return COLOR_ATTACHMENT4; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT5") ) { return COLOR_ATTACHMENT5; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT6") ) { return COLOR_ATTACHMENT6; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT7") ) { return COLOR_ATTACHMENT7; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT8") ) { return COLOR_ATTACHMENT8; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT9") ) { return COLOR_ATTACHMENT9; }
		if (HX_FIELD_EQ(inName,"SAMPLER_2D_SHADOW") ) { return SAMPLER_2D_SHADOW; }
		if (HX_FIELD_EQ(inName,"PIXEL_PACK_BUFFER") ) { return PIXEL_PACK_BUFFER; }
		if (HX_FIELD_EQ(inName,"COPY_WRITE_BUFFER") ) { return COPY_WRITE_BUFFER; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_VEC2") ) { return UNSIGNED_INT_VEC2; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_VEC3") ) { return UNSIGNED_INT_VEC3; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_VEC4") ) { return UNSIGNED_INT_VEC4; }
		if (HX_FIELD_EQ(inName,"SIGNED_NORMALIZED") ) { return SIGNED_NORMALIZED; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT24") ) { return DEPTH_COMPONENT24; }
		if (HX_FIELD_EQ(inName,"DEPTH32F_STENCIL8") ) { return DEPTH32F_STENCIL8; }
		if (HX_FIELD_EQ(inName,"blendFuncSeparate") ) { return blendFuncSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"copyBufferSubData") ) { return copyBufferSubData_dyn(); }
		if (HX_FIELD_EQ(inName,"copyTexSubImage2D") ) { return copyTexSubImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"copyTexSubImage3D") ) { return copyTexSubImage3D_dyn(); }
		if (HX_FIELD_EQ(inName,"createFramebuffer") ) { return createFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"createVertexArray") ) { return createVertexArray_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteFramebuffer") ) { return deleteFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteVertexArray") ) { return deleteVertexArray_dyn(); }
		if (HX_FIELD_EQ(inName,"drawRangeElements") ) { return drawRangeElements_dyn(); }
		if (HX_FIELD_EQ(inName,"getActiveUniforms") ) { return getActiveUniforms_dyn(); }
		if (HX_FIELD_EQ(inName,"getAttribLocation") ) { return getAttribLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferPointerv") ) { return getBufferPointerv_dyn(); }
		if (HX_FIELD_EQ(inName,"getProgramInfoLog") ) { return getProgramInfoLog_dyn(); }
		if (HX_FIELD_EQ(inName,"getQueryObjectuiv") ) { return getQueryObjectuiv_dyn(); }
		if (HX_FIELD_EQ(inName,"getQueryParameter") ) { return getQueryParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getSyncParameteri") ) { return getSyncParameteri_dyn(); }
		if (HX_FIELD_EQ(inName,"getTexParameterfv") ) { return getTexParameterfv_dyn(); }
		if (HX_FIELD_EQ(inName,"getTexParameteriv") ) { return getTexParameteriv_dyn(); }
		if (HX_FIELD_EQ(inName,"getUniformIndices") ) { return getUniformIndices_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexAttribfv") ) { return getVertexAttribfv_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexAttribIi") ) { return getVertexAttribIi_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexAttribiv") ) { return getVertexAttribiv_dyn(); }
		if (HX_FIELD_EQ(inName,"programParameteri") ) { return programParameteri_dyn(); }
		if (HX_FIELD_EQ(inName,"samplerParameterf") ) { return samplerParameterf_dyn(); }
		if (HX_FIELD_EQ(inName,"samplerParameteri") ) { return samplerParameteri_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilOpSeparate") ) { return stencilOpSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttribI4uiv") ) { return vertexAttribI4uiv_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT") ) { return STENCIL_BUFFER_BIT; }
		if (HX_FIELD_EQ(inName,"SRC_ALPHA_SATURATE") ) { return SRC_ALPHA_SATURATE; }
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION_RGB") ) { return BLEND_EQUATION_RGB; }
		if (HX_FIELD_EQ(inName,"STENCIL_VALUE_MASK") ) { return STENCIL_VALUE_MASK; }
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_2D") ) { return TEXTURE_BINDING_2D; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_ATTRIBS") ) { return MAX_VERTEX_ATTRIBS; }
		if (HX_FIELD_EQ(inName,"TEXTURE_MAG_FILTER") ) { return TEXTURE_MAG_FILTER; }
		if (HX_FIELD_EQ(inName,"TEXTURE_MIN_FILTER") ) { return TEXTURE_MIN_FILTER; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_WIDTH") ) { return RENDERBUFFER_WIDTH; }
		if (HX_FIELD_EQ(inName,"STENCIL_ATTACHMENT") ) { return STENCIL_ATTACHMENT; }
		if (HX_FIELD_EQ(inName,"CONTEXT_LOST_WEBGL") ) { return CONTEXT_LOST_WEBGL; }
		if (HX_FIELD_EQ(inName,"UNPACK_SKIP_PIXELS") ) { return UNPACK_SKIP_PIXELS; }
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_3D") ) { return TEXTURE_BINDING_3D; }
		if (HX_FIELD_EQ(inName,"UNPACK_SKIP_IMAGES") ) { return UNPACK_SKIP_IMAGES; }
		if (HX_FIELD_EQ(inName,"RASTERIZER_DISCARD") ) { return RASTERIZER_DISCARD; }
		if (HX_FIELD_EQ(inName,"TEXTURE_BASE_LEVEL") ) { return TEXTURE_BASE_LEVEL; }
		if (HX_FIELD_EQ(inName,"INT_2_10_10_10_REV") ) { return INT_2_10_10_10_REV; }
		if (HX_FIELD_EQ(inName,"ANY_SAMPLES_PASSED") ) { return ANY_SAMPLES_PASSED; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT10") ) { return COLOR_ATTACHMENT10; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT11") ) { return COLOR_ATTACHMENT11; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT12") ) { return COLOR_ATTACHMENT12; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT13") ) { return COLOR_ATTACHMENT13; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT14") ) { return COLOR_ATTACHMENT14; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT15") ) { return COLOR_ATTACHMENT15; }
		if (HX_FIELD_EQ(inName,"TRANSFORM_FEEDBACK") ) { return TRANSFORM_FEEDBACK; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT32F") ) { return DEPTH_COMPONENT32F; }
		if (HX_FIELD_EQ(inName,"__texture2DBinding") ) { return __texture2DBinding; }
		if (HX_FIELD_EQ(inName,"bindAttribLocation") ) { return bindAttribLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"createRenderbuffer") ) { return createRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteRenderbuffer") ) { return deleteRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getAttachedShaders") ) { return getAttachedShaders_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferParameter") ) { return getBufferParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getInternalformati") ) { return getInternalformati_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderParameter") ) { return getShaderParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getSyncParameteriv") ) { return getSyncParameteriv_dyn(); }
		if (HX_FIELD_EQ(inName,"getUniformLocation") ) { return getUniformLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexAttribIiv") ) { return getVertexAttribIiv_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexAttribIui") ) { return getVertexAttribIui_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix2x3fv") ) { return uniformMatrix2x3fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix2x4fv") ) { return uniformMatrix2x4fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix3x2fv") ) { return uniformMatrix3x2fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix3x4fv") ) { return uniformMatrix3x4fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix4x2fv") ) { return uniformMatrix4x2fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix4x3fv") ) { return uniformMatrix4x3fv_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ONE_MINUS_SRC_COLOR") ) { return ONE_MINUS_SRC_COLOR; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_SRC_ALPHA") ) { return ONE_MINUS_SRC_ALPHA; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_DST_ALPHA") ) { return ONE_MINUS_DST_ALPHA; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_DST_COLOR") ) { return ONE_MINUS_DST_COLOR; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_FILL") ) { return POLYGON_OFFSET_FILL; }
		if (HX_FIELD_EQ(inName,"STENCIL_CLEAR_VALUE") ) { return STENCIL_CLEAR_VALUE; }
		if (HX_FIELD_EQ(inName,"MAX_VARYING_VECTORS") ) { return MAX_VARYING_VECTORS; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_HEIGHT") ) { return RENDERBUFFER_HEIGHT; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_BINDING") ) { return FRAMEBUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"UNPACK_FLIP_Y_WEBGL") ) { return UNPACK_FLIP_Y_WEBGL; }
		if (HX_FIELD_EQ(inName,"UNPACK_IMAGE_HEIGHT") ) { return UNPACK_IMAGE_HEIGHT; }
		if (HX_FIELD_EQ(inName,"MAX_3D_TEXTURE_SIZE") ) { return MAX_3D_TEXTURE_SIZE; }
		if (HX_FIELD_EQ(inName,"SAMPLER_CUBE_SHADOW") ) { return SAMPLER_CUBE_SHADOW; }
		if (HX_FIELD_EQ(inName,"PIXEL_UNPACK_BUFFER") ) { return PIXEL_UNPACK_BUFFER; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_NORMALIZED") ) { return UNSIGNED_NORMALIZED; }
		if (HX_FIELD_EQ(inName,"INTERLEAVED_ATTRIBS") ) { return INTERLEAVED_ATTRIBS; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_DEFAULT") ) { return FRAMEBUFFER_DEFAULT; }
		if (HX_FIELD_EQ(inName,"UNIFORM_BUFFER_SIZE") ) { return UNIFORM_BUFFER_SIZE; }
		if (HX_FIELD_EQ(inName,"UNIFORM_BLOCK_INDEX") ) { return UNIFORM_BLOCK_INDEX; }
		if (HX_FIELD_EQ(inName,"CONDITION_SATISFIED") ) { return CONDITION_SATISFIED; }
		if (HX_FIELD_EQ(inName,"drawArraysInstanced") ) { return drawArraysInstanced_dyn(); }
		if (HX_FIELD_EQ(inName,"getActiveUniformsiv") ) { return getActiveUniformsiv_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferParameteri") ) { return getBufferParameteri_dyn(); }
		if (HX_FIELD_EQ(inName,"getFragDataLocation") ) { return getFragDataLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"getIndexedParameter") ) { return getIndexedParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getInternalformativ") ) { return getInternalformativ_dyn(); }
		if (HX_FIELD_EQ(inName,"getProgramParameter") ) { return getProgramParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getSamplerParameter") ) { return getSamplerParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexAttribIuiv") ) { return getVertexAttribIuiv_dyn(); }
		if (HX_FIELD_EQ(inName,"isTransformFeedback") ) { return isTransformFeedback_dyn(); }
		if (HX_FIELD_EQ(inName,"renderbufferStorage") ) { return renderbufferStorage_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilFuncSeparate") ) { return stencilFuncSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilMaskSeparate") ) { return stencilMaskSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformBlockBinding") ) { return uniformBlockBinding_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttribDivisor") ) { return vertexAttribDivisor_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttribPointer") ) { return vertexAttribPointer_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION_ALPHA") ) { return BLEND_EQUATION_ALPHA; }
		if (HX_FIELD_EQ(inName,"ELEMENT_ARRAY_BUFFER") ) { return ELEMENT_ARRAY_BUFFER; }
		if (HX_FIELD_EQ(inName,"ARRAY_BUFFER_BINDING") ) { return ARRAY_BUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_UNITS") ) { return POLYGON_OFFSET_UNITS; }
		if (HX_FIELD_EQ(inName,"GENERATE_MIPMAP_HINT") ) { return GENERATE_MIPMAP_HINT; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_5_6_5") ) { return UNSIGNED_SHORT_5_6_5; }
		if (HX_FIELD_EQ(inName,"LINEAR_MIPMAP_LINEAR") ) { return LINEAR_MIPMAP_LINEAR; }
		if (HX_FIELD_EQ(inName,"SHADER_SOURCE_LENGTH") ) { return SHADER_SOURCE_LENGTH; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_COMPLETE") ) { return FRAMEBUFFER_COMPLETE; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_BINDING") ) { return RENDERBUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"MAX_ELEMENTS_INDICES") ) { return MAX_ELEMENTS_INDICES; }
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_LOD_BIAS") ) { return MAX_TEXTURE_LOD_BIAS; }
		if (HX_FIELD_EQ(inName,"VERTEX_ARRAY_BINDING") ) { return VERTEX_ARRAY_BINDING; }
		if (HX_FIELD_EQ(inName,"TEXTURE_COMPARE_MODE") ) { return TEXTURE_COMPARE_MODE; }
		if (HX_FIELD_EQ(inName,"TEXTURE_COMPARE_FUNC") ) { return TEXTURE_COMPARE_FUNC; }
		if (HX_FIELD_EQ(inName,"INT_SAMPLER_2D_ARRAY") ) { return INT_SAMPLER_2D_ARRAY; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_SAMPLES") ) { return RENDERBUFFER_SAMPLES; }
		if (HX_FIELD_EQ(inName,"UNIFORM_BUFFER_START") ) { return UNIFORM_BUFFER_START; }
		if (HX_FIELD_EQ(inName,"UNIFORM_ARRAY_STRIDE") ) { return UNIFORM_ARRAY_STRIDE; }
		if (HX_FIELD_EQ(inName,"UNIFORM_IS_ROW_MAJOR") ) { return UNIFORM_IS_ROW_MAJOR; }
		if (HX_FIELD_EQ(inName,"__arrayBufferBinding") ) { return __arrayBufferBinding; }
		if (HX_FIELD_EQ(inName,"__framebufferBinding") ) { return __framebufferBinding; }
		if (HX_FIELD_EQ(inName,"compressedTexImage2D") ) { return compressedTexImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"compressedTexImage3D") ) { return compressedTexImage3D_dyn(); }
		if (HX_FIELD_EQ(inName,"endTransformFeedback") ) { return endTransformFeedback_dyn(); }
		if (HX_FIELD_EQ(inName,"framebufferTexture2D") ) { return framebufferTexture2D_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferParameteriv") ) { return getBufferParameteriv_dyn(); }
		if (HX_FIELD_EQ(inName,"getContextAttributes") ) { return getContextAttributes_dyn(); }
		if (HX_FIELD_EQ(inName,"getSamplerParameterf") ) { return getSamplerParameterf_dyn(); }
		if (HX_FIELD_EQ(inName,"getSamplerParameteri") ) { return getSamplerParameteri_dyn(); }
		if (HX_FIELD_EQ(inName,"getUniformBlockIndex") ) { return getUniformBlockIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttribIPointer") ) { return vertexAttribIPointer_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"FUNC_REVERSE_SUBTRACT") ) { return FUNC_REVERSE_SUBTRACT; }
		if (HX_FIELD_EQ(inName,"CURRENT_VERTEX_ATTRIB") ) { return CURRENT_VERTEX_ATTRIB; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_FACTOR") ) { return POLYGON_OFFSET_FACTOR; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE_VALUE") ) { return SAMPLE_COVERAGE_VALUE; }
		if (HX_FIELD_EQ(inName,"LINEAR_MIPMAP_NEAREST") ) { return LINEAR_MIPMAP_NEAREST; }
		if (HX_FIELD_EQ(inName,"NEAREST_MIPMAP_LINEAR") ) { return NEAREST_MIPMAP_LINEAR; }
		if (HX_FIELD_EQ(inName,"SHADER_BINARY_FORMATS") ) { return SHADER_BINARY_FORMATS; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_RED_SIZE") ) { return RENDERBUFFER_RED_SIZE; }
		if (HX_FIELD_EQ(inName,"MAX_RENDERBUFFER_SIZE") ) { return MAX_RENDERBUFFER_SIZE; }
		if (HX_FIELD_EQ(inName,"BROWSER_DEFAULT_WEBGL") ) { return BROWSER_DEFAULT_WEBGL; }
		if (HX_FIELD_EQ(inName,"MAX_ELEMENTS_VERTICES") ) { return MAX_ELEMENTS_VERTICES; }
		if (HX_FIELD_EQ(inName,"MAX_COLOR_ATTACHMENTS") ) { return MAX_COLOR_ATTACHMENTS; }
		if (HX_FIELD_EQ(inName,"ACTIVE_UNIFORM_BLOCKS") ) { return ACTIVE_UNIFORM_BLOCKS; }
		if (HX_FIELD_EQ(inName,"UNIFORM_MATRIX_STRIDE") ) { return UNIFORM_MATRIX_STRIDE; }
		if (HX_FIELD_EQ(inName,"UNIFORM_BLOCK_BINDING") ) { return UNIFORM_BLOCK_BINDING; }
		if (HX_FIELD_EQ(inName,"__renderbufferBinding") ) { return __renderbufferBinding; }
		if (HX_FIELD_EQ(inName,"bindTransformFeedback") ) { return bindTransformFeedback_dyn(); }
		if (HX_FIELD_EQ(inName,"blendEquationSeparate") ) { return blendEquationSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"drawElementsInstanced") ) { return drawElementsInstanced_dyn(); }
		if (HX_FIELD_EQ(inName,"getSamplerParameterfv") ) { return getSamplerParameterfv_dyn(); }
		if (HX_FIELD_EQ(inName,"getSamplerParameteriv") ) { return getSamplerParameteriv_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidateFramebuffer") ) { return invalidateFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"releaseShaderCompiler") ) { return releaseShaderCompiler_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_WRITEMASK") ) { return STENCIL_BACK_WRITEMASK; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE_INVERT") ) { return SAMPLE_COVERAGE_INVERT; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_4_4_4_4") ) { return UNSIGNED_SHORT_4_4_4_4; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_5_5_5_1") ) { return UNSIGNED_SHORT_5_5_5_1; }
		if (HX_FIELD_EQ(inName,"NEAREST_MIPMAP_NEAREST") ) { return NEAREST_MIPMAP_NEAREST; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_BLUE_SIZE") ) { return RENDERBUFFER_BLUE_SIZE; }
		if (HX_FIELD_EQ(inName,"MAX_VARYING_COMPONENTS") ) { return MAX_VARYING_COMPONENTS; }
		if (HX_FIELD_EQ(inName,"COMPARE_REF_TO_TEXTURE") ) { return COMPARE_REF_TO_TEXTURE; }
		if (HX_FIELD_EQ(inName,"QUERY_RESULT_AVAILABLE") ) { return QUERY_RESULT_AVAILABLE; }
		if (HX_FIELD_EQ(inName,"UNIFORM_BUFFER_BINDING") ) { return UNIFORM_BUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"MAX_UNIFORM_BLOCK_SIZE") ) { return MAX_UNIFORM_BLOCK_SIZE; }
		if (HX_FIELD_EQ(inName,"__elementBufferBinding") ) { return __elementBufferBinding; }
		if (HX_FIELD_EQ(inName,"beginTransformFeedback") ) { return beginTransformFeedback_dyn(); }
		if (HX_FIELD_EQ(inName,"checkFramebufferStatus") ) { return checkFramebufferStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"getActiveUniformBlocki") ) { return getActiveUniformBlocki_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferParameteri64v") ) { return getBufferParameteri64v_dyn(); }
		if (HX_FIELD_EQ(inName,"getSupportedExtensions") ) { return getSupportedExtensions_dyn(); }
		if (HX_FIELD_EQ(inName,"pauseTransformFeedback") ) { return pauseTransformFeedback_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"STENCIL_PASS_DEPTH_FAIL") ) { return STENCIL_PASS_DEPTH_FAIL; }
		if (HX_FIELD_EQ(inName,"STENCIL_PASS_DEPTH_PASS") ) { return STENCIL_PASS_DEPTH_PASS; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_VALUE_MASK") ) { return STENCIL_BACK_VALUE_MASK; }
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_IMAGE_UNITS") ) { return MAX_TEXTURE_IMAGE_UNITS; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_GREEN_SIZE") ) { return RENDERBUFFER_GREEN_SIZE; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_ALPHA_SIZE") ) { return RENDERBUFFER_ALPHA_SIZE; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_DEPTH_SIZE") ) { return RENDERBUFFER_DEPTH_SIZE; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_UNSUPPORTED") ) { return FRAMEBUFFER_UNSUPPORTED; }
		if (HX_FIELD_EQ(inName,"MAX_SERVER_WAIT_TIMEOUT") ) { return MAX_SERVER_WAIT_TIMEOUT; }
		if (HX_FIELD_EQ(inName,"SAMPLER_2D_ARRAY_SHADOW") ) { return SAMPLER_2D_ARRAY_SHADOW; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_SAMPLER_2D") ) { return UNSIGNED_INT_SAMPLER_2D; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_SAMPLER_3D") ) { return UNSIGNED_INT_SAMPLER_3D; }
		if (HX_FIELD_EQ(inName,"UNIFORM_BLOCK_DATA_SIZE") ) { return UNIFORM_BLOCK_DATA_SIZE; }
		if (HX_FIELD_EQ(inName,"SYNC_FLUSH_COMMANDS_BIT") ) { return SYNC_FLUSH_COMMANDS_BIT; }
		if (HX_FIELD_EQ(inName,"__textureCubeMapBinding") ) { return __textureCubeMapBinding; }
		if (HX_FIELD_EQ(inName,"compressedTexSubImage2D") ) { return compressedTexSubImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"compressedTexSubImage3D") ) { return compressedTexSubImage3D_dyn(); }
		if (HX_FIELD_EQ(inName,"createTransformFeedback") ) { return createTransformFeedback_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteTransformFeedback") ) { return deleteTransformFeedback_dyn(); }
		if (HX_FIELD_EQ(inName,"enableVertexAttribArray") ) { return enableVertexAttribArray_dyn(); }
		if (HX_FIELD_EQ(inName,"framebufferRenderbuffer") ) { return framebufferRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"framebufferTextureLayer") ) { return framebufferTextureLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"getActiveUniformBlockiv") ) { return getActiveUniformBlockiv_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexAttribPointerv") ) { return getVertexAttribPointerv_dyn(); }
		if (HX_FIELD_EQ(inName,"resumeTransformFeedback") ) { return resumeTransformFeedback_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"ONE_MINUS_CONSTANT_COLOR") ) { return ONE_MINUS_CONSTANT_COLOR; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_CONSTANT_ALPHA") ) { return ONE_MINUS_CONSTANT_ALPHA; }
		if (HX_FIELD_EQ(inName,"SAMPLE_ALPHA_TO_COVERAGE") ) { return SAMPLE_ALPHA_TO_COVERAGE; }
		if (HX_FIELD_EQ(inName,"ALIASED_POINT_SIZE_RANGE") ) { return ALIASED_POINT_SIZE_RANGE; }
		if (HX_FIELD_EQ(inName,"ALIASED_LINE_WIDTH_RANGE") ) { return ALIASED_LINE_WIDTH_RANGE; }
		if (HX_FIELD_EQ(inName,"SHADING_LANGUAGE_VERSION") ) { return SHADING_LANGUAGE_VERSION; }
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_CUBE_MAP") ) { return TEXTURE_BINDING_CUBE_MAP; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_SIZE") ) { return VERTEX_ATTRIB_ARRAY_SIZE; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_TYPE") ) { return VERTEX_ATTRIB_ARRAY_TYPE; }
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL_ATTACHMENT") ) { return DEPTH_STENCIL_ATTACHMENT; }
		if (HX_FIELD_EQ(inName,"MAX_ARRAY_TEXTURE_LAYERS") ) { return MAX_ARRAY_TEXTURE_LAYERS; }
		if (HX_FIELD_EQ(inName,"MIN_PROGRAM_TEXEL_OFFSET") ) { return MIN_PROGRAM_TEXEL_OFFSET; }
		if (HX_FIELD_EQ(inName,"MAX_PROGRAM_TEXEL_OFFSET") ) { return MAX_PROGRAM_TEXEL_OFFSET; }
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_2D_ARRAY") ) { return TEXTURE_BINDING_2D_ARRAY; }
		if (HX_FIELD_EQ(inName,"TEXTURE_IMMUTABLE_FORMAT") ) { return TEXTURE_IMMUTABLE_FORMAT; }
		if (HX_FIELD_EQ(inName,"TEXTURE_IMMUTABLE_LEVELS") ) { return TEXTURE_IMMUTABLE_LEVELS; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_5_9_9_9_REV") ) { return UNSIGNED_INT_5_9_9_9_REV; }
		if (HX_FIELD_EQ(inName,"COPY_READ_BUFFER_BINDING") ) { return COPY_READ_BUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"DRAW_FRAMEBUFFER_BINDING") ) { return DRAW_FRAMEBUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"READ_FRAMEBUFFER_BINDING") ) { return READ_FRAMEBUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"disableVertexAttribArray") ) { return disableVertexAttribArray_dyn(); }
		if (HX_FIELD_EQ(inName,"getRenderbufferParameter") ) { return getRenderbufferParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderPrecisionFormat") ) { return getShaderPrecisionFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidateSubFramebuffer") ) { return invalidateSubFramebuffer_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"MAX_CUBE_MAP_TEXTURE_SIZE") ) { return MAX_CUBE_MAP_TEXTURE_SIZE; }
		if (HX_FIELD_EQ(inName,"VERTEX_PROGRAM_POINT_SIZE") ) { return VERTEX_PROGRAM_POINT_SIZE; }
		if (HX_FIELD_EQ(inName,"NUM_SHADER_BINARY_FORMATS") ) { return NUM_SHADER_BINARY_FORMATS; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_STENCIL_SIZE") ) { return RENDERBUFFER_STENCIL_SIZE; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_SAMPLER_CUBE") ) { return UNSIGNED_INT_SAMPLER_CUBE; }
		if (HX_FIELD_EQ(inName,"PIXEL_PACK_BUFFER_BINDING") ) { return PIXEL_PACK_BUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"COPY_WRITE_BUFFER_BINDING") ) { return COPY_WRITE_BUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"TRANSFORM_FEEDBACK_BUFFER") ) { return TRANSFORM_FEEDBACK_BUFFER; }
		if (HX_FIELD_EQ(inName,"TRANSFORM_FEEDBACK_PAUSED") ) { return TRANSFORM_FEEDBACK_PAUSED; }
		if (HX_FIELD_EQ(inName,"TRANSFORM_FEEDBACK_ACTIVE") ) { return TRANSFORM_FEEDBACK_ACTIVE; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_UNIFORM_BLOCKS") ) { return MAX_VERTEX_UNIFORM_BLOCKS; }
		if (HX_FIELD_EQ(inName,"getActiveUniformBlockName") ) { return getActiveUniformBlockName_dyn(); }
		if (HX_FIELD_EQ(inName,"getRenderbufferParameteri") ) { return getRenderbufferParameteri_dyn(); }
		if (HX_FIELD_EQ(inName,"transformFeedbackVaryings") ) { return transformFeedbackVaryings_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"COMPRESSED_TEXTURE_FORMATS") ) { return COMPRESSED_TEXTURE_FORMATS; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_UNIFORM_VECTORS") ) { return MAX_VERTEX_UNIFORM_VECTORS; }
		if (HX_FIELD_EQ(inName,"ACTIVE_UNIFORMS_MAX_LENGTH") ) { return ACTIVE_UNIFORMS_MAX_LENGTH; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_STRIDE") ) { return VERTEX_ATTRIB_ARRAY_STRIDE; }
		if (HX_FIELD_EQ(inName,"TRANSFORM_FEEDBACK_BINDING") ) { return TRANSFORM_FEEDBACK_BINDING; }
		if (HX_FIELD_EQ(inName,"SYNC_GPU_COMMANDS_COMPLETE") ) { return SYNC_GPU_COMMANDS_COMPLETE; }
		if (HX_FIELD_EQ(inName,"getInternalformatParameter") ) { return getInternalformatParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getRenderbufferParameteriv") ) { return getRenderbufferParameteriv_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_X") ) { return TEXTURE_CUBE_MAP_POSITIVE_X; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_X") ) { return TEXTURE_CUBE_MAP_NEGATIVE_X; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_Y") ) { return TEXTURE_CUBE_MAP_POSITIVE_Y; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_Y") ) { return TEXTURE_CUBE_MAP_NEGATIVE_Y; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_Z") ) { return TEXTURE_CUBE_MAP_POSITIVE_Z; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_Z") ) { return TEXTURE_CUBE_MAP_NEGATIVE_Z; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_ENABLED") ) { return VERTEX_ATTRIB_ARRAY_ENABLED; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_POINTER") ) { return VERTEX_ATTRIB_ARRAY_POINTER; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_2_10_10_10_REV") ) { return UNSIGNED_INT_2_10_10_10_REV; }
		if (HX_FIELD_EQ(inName,"PIXEL_UNPACK_BUFFER_BINDING") ) { return PIXEL_UNPACK_BUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_INTEGER") ) { return VERTEX_ATTRIB_ARRAY_INTEGER; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_DIVISOR") ) { return VERTEX_ATTRIB_ARRAY_DIVISOR; }
		if (HX_FIELD_EQ(inName,"TRANSFORM_FEEDBACK_VARYINGS") ) { return TRANSFORM_FEEDBACK_VARYINGS; }
		if (HX_FIELD_EQ(inName,"MAX_FRAGMENT_UNIFORM_BLOCKS") ) { return MAX_FRAGMENT_UNIFORM_BLOCKS; }
		if (HX_FIELD_EQ(inName,"MAX_COMBINED_UNIFORM_BLOCKS") ) { return MAX_COMBINED_UNIFORM_BLOCKS; }
		if (HX_FIELD_EQ(inName,"MAX_UNIFORM_BUFFER_BINDINGS") ) { return MAX_UNIFORM_BUFFER_BINDINGS; }
		if (HX_FIELD_EQ(inName,"getTransformFeedbackVarying") ) { return getTransformFeedbackVarying_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"ELEMENT_ARRAY_BUFFER_BINDING") ) { return ELEMENT_ARRAY_BUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_PASS_DEPTH_FAIL") ) { return STENCIL_BACK_PASS_DEPTH_FAIL; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_PASS_DEPTH_PASS") ) { return STENCIL_BACK_PASS_DEPTH_PASS; }
		if (HX_FIELD_EQ(inName,"MAX_FRAGMENT_UNIFORM_VECTORS") ) { return MAX_FRAGMENT_UNIFORM_VECTORS; }
		if (HX_FIELD_EQ(inName,"ACTIVE_ATTRIBUTES_MAX_LENGTH") ) { return ACTIVE_ATTRIBUTES_MAX_LENGTH; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_INTERNAL_FORMAT") ) { return RENDERBUFFER_INTERNAL_FORMAT; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_OUTPUT_COMPONENTS") ) { return MAX_VERTEX_OUTPUT_COMPONENTS; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_10F_11F_11F_REV") ) { return UNSIGNED_INT_10F_11F_11F_REV; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"INVALID_FRAMEBUFFER_OPERATION") ) { return INVALID_FRAMEBUFFER_OPERATION; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_UNIFORM_COMPONENTS") ) { return MAX_VERTEX_UNIFORM_COMPONENTS; }
		if (HX_FIELD_EQ(inName,"MAX_FRAGMENT_INPUT_COMPONENTS") ) { return MAX_FRAGMENT_INPUT_COMPONENTS; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_SAMPLER_2D_ARRAY") ) { return UNSIGNED_INT_SAMPLER_2D_ARRAY; }
		if (HX_FIELD_EQ(inName,"UNIFORM_BLOCK_ACTIVE_UNIFORMS") ) { return UNIFORM_BLOCK_ACTIVE_UNIFORMS; }
		if (HX_FIELD_EQ(inName,"MAX_CLIENT_WAIT_TIMEOUT_WEBGL") ) { return MAX_CLIENT_WAIT_TIMEOUT_WEBGL; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"NUM_COMPRESSED_TEXTURE_FORMATS") ) { return NUM_COMPRESSED_TEXTURE_FORMATS; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_TEXTURE_IMAGE_UNITS") ) { return MAX_VERTEX_TEXTURE_IMAGE_UNITS; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_NORMALIZED") ) { return VERTEX_ATTRIB_ARRAY_NORMALIZED; }
		if (HX_FIELD_EQ(inName,"IMPLEMENTATION_COLOR_READ_TYPE") ) { return IMPLEMENTATION_COLOR_READ_TYPE; }
		if (HX_FIELD_EQ(inName,"UNPACK_PREMULTIPLY_ALPHA_WEBGL") ) { return UNPACK_PREMULTIPLY_ALPHA_WEBGL; }
		if (HX_FIELD_EQ(inName,"FLOAT_32_UNSIGNED_INT_24_8_REV") ) { return FLOAT_32_UNSIGNED_INT_24_8_REV; }
		if (HX_FIELD_EQ(inName,"TRANSFORM_FEEDBACK_BUFFER_MODE") ) { return TRANSFORM_FEEDBACK_BUFFER_MODE; }
		if (HX_FIELD_EQ(inName,"TRANSFORM_FEEDBACK_BUFFER_SIZE") ) { return TRANSFORM_FEEDBACK_BUFFER_SIZE; }
		if (HX_FIELD_EQ(inName,"getActiveUniformBlockParameter") ) { return getActiveUniformBlockParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"renderbufferStorageMultisample") ) { return renderbufferStorageMultisample_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"MAX_FRAGMENT_UNIFORM_COMPONENTS") ) { return MAX_FRAGMENT_UNIFORM_COMPONENTS; }
		if (HX_FIELD_EQ(inName,"FRAGMENT_SHADER_DERIVATIVE_HINT") ) { return FRAGMENT_SHADER_DERIVATIVE_HINT; }
		if (HX_FIELD_EQ(inName,"ANY_SAMPLES_PASSED_CONSERVATIVE") ) { return ANY_SAMPLES_PASSED_CONSERVATIVE; }
		if (HX_FIELD_EQ(inName,"TRANSFORM_FEEDBACK_BUFFER_START") ) { return TRANSFORM_FEEDBACK_BUFFER_START; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_RED_SIZE") ) { return FRAMEBUFFER_ATTACHMENT_RED_SIZE; }
		if (HX_FIELD_EQ(inName,"UNIFORM_BUFFER_OFFSET_ALIGNMENT") ) { return UNIFORM_BUFFER_OFFSET_ALIGNMENT; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"MAX_COMBINED_TEXTURE_IMAGE_UNITS") ) { return MAX_COMBINED_TEXTURE_IMAGE_UNITS; }
		if (HX_FIELD_EQ(inName,"IMPLEMENTATION_COLOR_READ_FORMAT") ) { return IMPLEMENTATION_COLOR_READ_FORMAT; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_BLUE_SIZE") ) { return FRAMEBUFFER_ATTACHMENT_BLUE_SIZE; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_ATTACHMENT") ) { return FRAMEBUFFER_INCOMPLETE_ATTACHMENT; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_DIMENSIONS") ) { return FRAMEBUFFER_INCOMPLETE_DIMENSIONS; }
		if (HX_FIELD_EQ(inName,"TRANSFORM_FEEDBACK_BUFFER_BINDING") ) { return TRANSFORM_FEEDBACK_BUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_GREEN_SIZE") ) { return FRAMEBUFFER_ATTACHMENT_GREEN_SIZE; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE") ) { return FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE") ) { return FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE; }
		if (HX_FIELD_EQ(inName,"getFramebufferAttachmentParameter") ) { return getFramebufferAttachmentParameter_dyn(); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING") ) { return VERTEX_ATTRIB_ARRAY_BUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE") ) { return FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME") ) { return FRAMEBUFFER_ATTACHMENT_OBJECT_NAME; }
		if (HX_FIELD_EQ(inName,"UNPACK_COLORSPACE_CONVERSION_WEBGL") ) { return UNPACK_COLORSPACE_CONVERSION_WEBGL; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE") ) { return FRAMEBUFFER_INCOMPLETE_MULTISAMPLE; }
		if (HX_FIELD_EQ(inName,"getFramebufferAttachmentParameteri") ) { return getFramebufferAttachmentParameteri_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE") ) { return FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE; }
		if (HX_FIELD_EQ(inName,"getFramebufferAttachmentParameteriv") ) { return getFramebufferAttachmentParameteriv_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL") ) { return FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER") ) { return FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER; }
		if (HX_FIELD_EQ(inName,"UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES") ) { return UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN") ) { return TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING") ) { return FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE") ) { return FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS") ) { return MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS") ) { return MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS") ) { return MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT") ) { return FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT; }
		if (HX_FIELD_EQ(inName,"UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER") ) { return UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS") ) { return MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS; }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER") ) { return UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE") ) { return FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE; }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS") ) { return MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS; }
	}
	return super::__Field(inName,inCallProp);
}

bool NativeGLRenderContext_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__lastContextID") ) { outValue = __lastContextID; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__extensionObjects") ) { outValue = __extensionObjects; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__supportedExtensions") ) { outValue = __supportedExtensions; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"__extensionObjectConstructors") ) { outValue = __extensionObjectConstructors; return true;  }
	}
	return false;
}

Dynamic NativeGLRenderContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"CW") ) { CW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"R8") ) { R8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RG") ) { RG=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ONE") ) { ONE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CCW") ) { CCW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INT") ) { INT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB") ) { RGB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RED") ) { RED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RG8") ) { RG8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"R8I") ) { R8I=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MIN") ) { MIN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX") ) { MAX=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ZERO") ) { ZERO=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BACK") ) { BACK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BYTE") ) { BYTE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGBA") ) { RGBA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LESS") ) { LESS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"KEEP") ) { KEEP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INCR") ) { INCR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DECR") ) { DECR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BOOL") ) { BOOL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NONE") ) { NONE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB8") ) { RGB8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SRGB") ) { SRGB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"R16F") ) { R16F=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"R32F") ) { R32F=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"R8UI") ) { R8UI=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"R16I") ) { R16I=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"R32I") ) { R32I=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RG8I") ) { RG8I=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::lime::graphics::opengl::GLContextType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"LINES") ) { LINES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRONT") ) { FRONT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND") ) { BLEND=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHORT") ) { SHORT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT") ) { FLOAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FIXED") ) { FIXED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALPHA") ) { ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NEVER") ) { NEVER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"EQUAL") ) { EQUAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGBA4") ) { RGBA4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGBA8") ) { RGBA8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SRGB8") ) { SRGB8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB8I") ) { RGB8I=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RG16F") ) { RG16F=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RG32F") ) { RG32F=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"R16UI") ) { R16UI=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"R32UI") ) { R32UI=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RG8UI") ) { RG8UI=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RG16I") ) { RG16I=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RG32I") ) { RG32I=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR") ) { COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH") ) { DEPTH=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"POINTS") ) { POINTS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DITHER") ) { DITHER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NICEST") ) { NICEST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LEQUAL") ) { LEQUAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GEQUAL") ) { GEQUAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALWAYS") ) { ALWAYS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVERT") ) { INVERT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VENDOR") ) { VENDOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINEAR") ) { LINEAR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"REPEAT") ) { REPEAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB565") ) { RGB565=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB32F") ) { RGB32F=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB16F") ) { RGB16F=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB8UI") ) { RGB8UI=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB32I") ) { RGB32I=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB16I") ) { RGB16I=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGBA8I") ) { RGBA8I=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RG16UI") ) { RG16UI=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RG32UI") ) { RG32UI=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"SAMPLES") ) { SAMPLES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FASTEST") ) { FASTEST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GREATER") ) { GREATER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"REPLACE") ) { REPLACE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERSION") ) { VERSION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NEAREST") ) { NEAREST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE") ) { TEXTURE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LOW_INT") ) { LOW_INT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB5_A1") ) { RGB5_A1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGBA32F") ) { RGBA32F=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGBA16F") ) { RGBA16F=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB9_E5") ) { RGB9_E5=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB32UI") ) { RGB32UI=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB16UI") ) { RGB16UI=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGBA8UI") ) { RGBA8UI=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGBA32I") ) { RGBA32I=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGBA16I") ) { RGBA16I=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL") ) { STENCIL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"FUNC_ADD") ) { FUNC_ADD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { NO_ERROR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VIEWPORT") ) { VIEWPORT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RED_BITS") ) { RED_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NOTEQUAL") ) { NOTEQUAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERER") ) { RENDERER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE0") ) { TEXTURE0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE1") ) { TEXTURE1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE2") ) { TEXTURE2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE3") ) { TEXTURE3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE4") ) { TEXTURE4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE5") ) { TEXTURE5=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE6") ) { TEXTURE6=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE7") ) { TEXTURE7=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE8") ) { TEXTURE8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE9") ) { TEXTURE9=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INT_VEC2") ) { INT_VEC2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INT_VEC3") ) { INT_VEC3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INT_VEC4") ) { INT_VEC4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HIGH_INT") ) { HIGH_INT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB10_A2") ) { RGB10_A2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGBA32UI") ) { RGBA32UI=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGBA16UI") ) { RGBA16UI=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"R8_SNORM") ) { R8_SNORM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SIGNALED") ) { SIGNALED=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"LINE_LOOP") ) { LINE_LOOP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TRIANGLES") ) { TRIANGLES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SRC_COLOR") ) { SRC_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SRC_ALPHA") ) { SRC_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DST_ALPHA") ) { DST_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DST_COLOR") ) { DST_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CULL_FACE") ) { CULL_FACE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLUE_BITS") ) { BLUE_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DONT_CARE") ) { DONT_CARE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LUMINANCE") ) { LUMINANCE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INCR_WRAP") ) { INCR_WRAP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DECR_WRAP") ) { DECR_WRAP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE10") ) { TEXTURE10=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE11") ) { TEXTURE11=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE12") ) { TEXTURE12=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE13") ) { TEXTURE13=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE14") ) { TEXTURE14=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE15") ) { TEXTURE15=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE16") ) { TEXTURE16=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE17") ) { TEXTURE17=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE18") ) { TEXTURE18=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE19") ) { TEXTURE19=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE20") ) { TEXTURE20=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE21") ) { TEXTURE21=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE22") ) { TEXTURE22=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE23") ) { TEXTURE23=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE24") ) { TEXTURE24=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE25") ) { TEXTURE25=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE26") ) { TEXTURE26=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE27") ) { TEXTURE27=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE28") ) { TEXTURE28=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE29") ) { TEXTURE29=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE30") ) { TEXTURE30=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE31") ) { TEXTURE31=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC2") ) { BOOL_VEC2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC3") ) { BOOL_VEC3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC4") ) { BOOL_VEC4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LOW_FLOAT") ) { LOW_FLOAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RG8_SNORM") ) { RG8_SNORM=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"LINE_STRIP") ) { LINE_STRIP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_2D") ) { TEXTURE_2D=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_TEST") ) { DEPTH_TEST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINE_WIDTH") ) { LINE_WIDTH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRONT_FACE") ) { FRONT_FACE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_FUNC") ) { DEPTH_FUNC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GREEN_BITS") ) { GREEN_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALPHA_BITS") ) { ALPHA_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_BITS") ) { DEPTH_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"EXTENSIONS") ) { EXTENSIONS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC2") ) { FLOAT_VEC2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC3") ) { FLOAT_VEC3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC4") ) { FLOAT_VEC4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT2") ) { FLOAT_MAT2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT3") ) { FLOAT_MAT3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT4") ) { FLOAT_MAT4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLER_2D") ) { SAMPLER_2D=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HIGH_FLOAT") ) { HIGH_FLOAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MEDIUM_INT") ) { MEDIUM_INT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_3D") ) { TEXTURE_3D=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB8_SNORM") ) { RGB8_SNORM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB10_A2UI") ) { RGB10_A2UI=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HALF_FLOAT") ) { HALF_FLOAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RG_INTEGER") ) { RG_INTEGER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLER_3D") ) { SAMPLER_3D=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SYNC_FLAGS") ) { SYNC_FLAGS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SYNC_FENCE") ) { SYNC_FENCE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNALED") ) { UNSIGNALED=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"BLEND_COLOR") ) { BLEND_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STREAM_DRAW") ) { STREAM_DRAW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STATIC_DRAW") ) { STATIC_DRAW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BUFFER_SIZE") ) { BUFFER_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_RANGE") ) { DEPTH_RANGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_REF") ) { STENCIL_REF=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SCISSOR_BOX") ) { SCISSOR_BOX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHADER_TYPE") ) { SHADER_TYPE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINK_STATUS") ) { LINK_STATUS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER") ) { FRAMEBUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"READ_BUFFER") ) { READ_BUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RED_INTEGER") ) { RED_INTEGER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB_INTEGER") ) { RGB_INTEGER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGBA8_SNORM") ) { RGBA8_SNORM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_SAMPLES") ) { MAX_SAMPLES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OBJECT_TYPE") ) { OBJECT_TYPE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SYNC_STATUS") ) { SYNC_STATUS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"WAIT_FAILED") ) { WAIT_FAILED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STREAM_READ") ) { STREAM_READ=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STREAM_COPY") ) { STREAM_COPY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STATIC_READ") ) { STATIC_READ=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STATIC_COPY") ) { STATIC_COPY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__contextID") ) { __contextID=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"TRIANGLE_FAN") ) { TRIANGLE_FAN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ARRAY_BUFFER") ) { ARRAY_BUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DYNAMIC_DRAW") ) { DYNAMIC_DRAW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BUFFER_USAGE") ) { BUFFER_USAGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_TEST") ) { STENCIL_TEST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SCISSOR_TEST") ) { SCISSOR_TEST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { INVALID_ENUM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_FUNC") ) { STENCIL_FUNC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_FAIL") ) { STENCIL_FAIL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BITS") ) { STENCIL_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT") ) { UNSIGNED_INT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLER_CUBE") ) { SAMPLER_CUBE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"POINT_SPRITE") ) { POINT_SPRITE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MEDIUM_FLOAT") ) { MEDIUM_FLOAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER") ) { RENDERBUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SRGB8_ALPHA8") ) { SRGB8_ALPHA8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGBA_INTEGER") ) { RGBA_INTEGER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"QUERY_RESULT") ) { QUERY_RESULT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER0") ) { DRAW_BUFFER0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER1") ) { DRAW_BUFFER1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER2") ) { DRAW_BUFFER2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER3") ) { DRAW_BUFFER3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER4") ) { DRAW_BUFFER4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER5") ) { DRAW_BUFFER5=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER6") ) { DRAW_BUFFER6=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER7") ) { DRAW_BUFFER7=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER8") ) { DRAW_BUFFER8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER9") ) { DRAW_BUFFER9=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT2x3") ) { FLOAT_MAT2x3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT2x4") ) { FLOAT_MAT2x4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT3x2") ) { FLOAT_MAT3x2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT3x4") ) { FLOAT_MAT3x4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT4x2") ) { FLOAT_MAT4x2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT4x3") ) { FLOAT_MAT4x3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNIFORM_TYPE") ) { UNIFORM_TYPE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNIFORM_SIZE") ) { UNIFORM_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DYNAMIC_READ") ) { DYNAMIC_READ=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DYNAMIC_COPY") ) { DYNAMIC_COPY=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FUNC_SUBTRACT") ) { FUNC_SUBTRACT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND_DST_RGB") ) { BLEND_DST_RGB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND_SRC_RGB") ) { BLEND_SRC_RGB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { INVALID_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { OUT_OF_MEMORY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SUBPIXEL_BITS") ) { SUBPIXEL_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_BYTE") ) { UNSIGNED_BYTE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_SHADER") ) { VERTEX_SHADER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DELETE_STATUS") ) { DELETE_STATUS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CLAMP_TO_EDGE") ) { CLAMP_TO_EDGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_INDEX") ) { STENCIL_INDEX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL") ) { DEPTH_STENCIL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CURRENT_QUERY") ) { CURRENT_QUERY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER10") ) { DRAW_BUFFER10=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER11") ) { DRAW_BUFFER11=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER12") ) { DRAW_BUFFER12=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER13") ) { DRAW_BUFFER13=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER14") ) { DRAW_BUFFER14=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER15") ) { DRAW_BUFFER15=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_INDEX") ) { INVALID_INDEX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__initialized") ) { __initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TRIANGLE_STRIP") ) { TRIANGLE_STRIP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION") ) { BLEND_EQUATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONSTANT_COLOR") ) { CONSTANT_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONSTANT_ALPHA") ) { CONSTANT_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRONT_AND_BACK") ) { FRONT_AND_BACK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CULL_FACE_MODE") ) { CULL_FACE_MODE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PACK_ALIGNMENT") ) { PACK_ALIGNMENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLE_BUFFERS") ) { SAMPLE_BUFFERS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT") ) { UNSIGNED_SHORT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_S") ) { TEXTURE_WRAP_S=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_T") ) { TEXTURE_WRAP_T=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ACTIVE_TEXTURE") ) { ACTIVE_TEXTURE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPILE_STATUS") ) { COMPILE_STATUS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_INDEX8") ) { STENCIL_INDEX8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PACK_SKIP_ROWS") ) { PACK_SKIP_ROWS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_R") ) { TEXTURE_WRAP_R=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"R11F_G11F_B10F") ) { R11F_G11F_B10F=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INT_SAMPLER_2D") ) { INT_SAMPLER_2D=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INT_SAMPLER_3D") ) { INT_SAMPLER_3D=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNIFORM_BUFFER") ) { UNIFORM_BUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNIFORM_OFFSET") ) { UNIFORM_OFFSET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SYNC_CONDITION") ) { SYNC_CONDITION=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"BLEND_DST_ALPHA") ) { BLEND_DST_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND_SRC_ALPHA") ) { BLEND_SRC_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE") ) { SAMPLE_COVERAGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_WRITEMASK") ) { DEPTH_WRITEMASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_WRITEMASK") ) { COLOR_WRITEMASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT") ) { DEPTH_COMPONENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LUMINANCE_ALPHA") ) { LUMINANCE_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAGMENT_SHADER") ) { FRAGMENT_SHADER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VALIDATE_STATUS") ) { VALIDATE_STATUS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ACTIVE_UNIFORMS") ) { ACTIVE_UNIFORMS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CURRENT_PROGRAM") ) { CURRENT_PROGRAM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MIRRORED_REPEAT") ) { MIRRORED_REPEAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INFO_LOG_LENGTH") ) { INFO_LOG_LENGTH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHADER_COMPILER") ) { SHADER_COMPILER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PACK_ROW_LENGTH") ) { PACK_ROW_LENGTH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_MIN_LOD") ) { TEXTURE_MIN_LOD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_MAX_LOD") ) { TEXTURE_MAX_LOD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLER_BINDING") ) { SAMPLER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TIMEOUT_EXPIRED") ) { TIMEOUT_EXPIRED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TIMEOUT_IGNORED") ) { TIMEOUT_IGNORED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isContextLost") ) { __isContextLost=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT") ) { DEPTH_BUFFER_BIT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT") ) { COLOR_BUFFER_BIT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_REF") ) { STENCIL_BACK_REF=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNPACK_ALIGNMENT") ) { UNPACK_ALIGNMENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_SIZE") ) { MAX_TEXTURE_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ATTACHED_SHADERS") ) { ATTACHED_SHADERS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP") ) { TEXTURE_CUBE_MAP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_ATTACHMENT") ) { DEPTH_ATTACHMENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNPACK_SKIP_ROWS") ) { UNPACK_SKIP_ROWS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PACK_SKIP_PIXELS") ) { PACK_SKIP_PIXELS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_2D_ARRAY") ) { TEXTURE_2D_ARRAY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_DRAW_BUFFERS") ) { MAX_DRAW_BUFFERS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLER_2D_ARRAY") ) { SAMPLER_2D_ARRAY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INT_SAMPLER_CUBE") ) { INT_SAMPLER_CUBE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COPY_READ_BUFFER") ) { COPY_READ_BUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SEPARATE_ATTRIBS") ) { SEPARATE_ATTRIBS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH24_STENCIL8") ) { DEPTH24_STENCIL8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"READ_FRAMEBUFFER") ) { READ_FRAMEBUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_FRAMEBUFFER") ) { DRAW_FRAMEBUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALREADY_SIGNALED") ) { ALREADY_SIGNALED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__currentProgram") ) { __currentProgram=inValue.Cast< ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"INVALID_OPERATION") ) { INVALID_OPERATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_CLEAR_VALUE") ) { DEPTH_CLEAR_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_WRITEMASK") ) { STENCIL_WRITEMASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_FUNC") ) { STENCIL_BACK_FUNC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_FAIL") ) { STENCIL_BACK_FAIL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_CLEAR_VALUE") ) { COLOR_CLEAR_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_VIEWPORT_DIMS") ) { MAX_VIEWPORT_DIMS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ACTIVE_ATTRIBUTES") ) { ACTIVE_ATTRIBUTES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT16") ) { DEPTH_COMPONENT16=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT0") ) { COLOR_ATTACHMENT0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNPACK_ROW_LENGTH") ) { UNPACK_ROW_LENGTH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_ELEMENT_INDEX") ) { MAX_ELEMENT_INDEX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_MAX_LEVEL") ) { TEXTURE_MAX_LEVEL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_24_8") ) { UNSIGNED_INT_24_8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT1") ) { COLOR_ATTACHMENT1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT2") ) { COLOR_ATTACHMENT2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT3") ) { COLOR_ATTACHMENT3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT4") ) { COLOR_ATTACHMENT4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT5") ) { COLOR_ATTACHMENT5=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT6") ) { COLOR_ATTACHMENT6=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT7") ) { COLOR_ATTACHMENT7=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT8") ) { COLOR_ATTACHMENT8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT9") ) { COLOR_ATTACHMENT9=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLER_2D_SHADOW") ) { SAMPLER_2D_SHADOW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PIXEL_PACK_BUFFER") ) { PIXEL_PACK_BUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COPY_WRITE_BUFFER") ) { COPY_WRITE_BUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_VEC2") ) { UNSIGNED_INT_VEC2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_VEC3") ) { UNSIGNED_INT_VEC3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_VEC4") ) { UNSIGNED_INT_VEC4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SIGNED_NORMALIZED") ) { SIGNED_NORMALIZED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT24") ) { DEPTH_COMPONENT24=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH32F_STENCIL8") ) { DEPTH32F_STENCIL8=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT") ) { STENCIL_BUFFER_BIT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SRC_ALPHA_SATURATE") ) { SRC_ALPHA_SATURATE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION_RGB") ) { BLEND_EQUATION_RGB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_VALUE_MASK") ) { STENCIL_VALUE_MASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_2D") ) { TEXTURE_BINDING_2D=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_ATTRIBS") ) { MAX_VERTEX_ATTRIBS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_MAG_FILTER") ) { TEXTURE_MAG_FILTER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_MIN_FILTER") ) { TEXTURE_MIN_FILTER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_WIDTH") ) { RENDERBUFFER_WIDTH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_ATTACHMENT") ) { STENCIL_ATTACHMENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONTEXT_LOST_WEBGL") ) { CONTEXT_LOST_WEBGL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNPACK_SKIP_PIXELS") ) { UNPACK_SKIP_PIXELS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_3D") ) { TEXTURE_BINDING_3D=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNPACK_SKIP_IMAGES") ) { UNPACK_SKIP_IMAGES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RASTERIZER_DISCARD") ) { RASTERIZER_DISCARD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_BASE_LEVEL") ) { TEXTURE_BASE_LEVEL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INT_2_10_10_10_REV") ) { INT_2_10_10_10_REV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ANY_SAMPLES_PASSED") ) { ANY_SAMPLES_PASSED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT10") ) { COLOR_ATTACHMENT10=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT11") ) { COLOR_ATTACHMENT11=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT12") ) { COLOR_ATTACHMENT12=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT13") ) { COLOR_ATTACHMENT13=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT14") ) { COLOR_ATTACHMENT14=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT15") ) { COLOR_ATTACHMENT15=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TRANSFORM_FEEDBACK") ) { TRANSFORM_FEEDBACK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT32F") ) { DEPTH_COMPONENT32F=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture2DBinding") ) { __texture2DBinding=inValue.Cast< ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ONE_MINUS_SRC_COLOR") ) { ONE_MINUS_SRC_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_SRC_ALPHA") ) { ONE_MINUS_SRC_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_DST_ALPHA") ) { ONE_MINUS_DST_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_DST_COLOR") ) { ONE_MINUS_DST_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_FILL") ) { POLYGON_OFFSET_FILL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_CLEAR_VALUE") ) { STENCIL_CLEAR_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_VARYING_VECTORS") ) { MAX_VARYING_VECTORS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_HEIGHT") ) { RENDERBUFFER_HEIGHT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_BINDING") ) { FRAMEBUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNPACK_FLIP_Y_WEBGL") ) { UNPACK_FLIP_Y_WEBGL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNPACK_IMAGE_HEIGHT") ) { UNPACK_IMAGE_HEIGHT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_3D_TEXTURE_SIZE") ) { MAX_3D_TEXTURE_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLER_CUBE_SHADOW") ) { SAMPLER_CUBE_SHADOW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PIXEL_UNPACK_BUFFER") ) { PIXEL_UNPACK_BUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_NORMALIZED") ) { UNSIGNED_NORMALIZED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INTERLEAVED_ATTRIBS") ) { INTERLEAVED_ATTRIBS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_DEFAULT") ) { FRAMEBUFFER_DEFAULT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNIFORM_BUFFER_SIZE") ) { UNIFORM_BUFFER_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNIFORM_BLOCK_INDEX") ) { UNIFORM_BLOCK_INDEX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONDITION_SATISFIED") ) { CONDITION_SATISFIED=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION_ALPHA") ) { BLEND_EQUATION_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ELEMENT_ARRAY_BUFFER") ) { ELEMENT_ARRAY_BUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ARRAY_BUFFER_BINDING") ) { ARRAY_BUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_UNITS") ) { POLYGON_OFFSET_UNITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GENERATE_MIPMAP_HINT") ) { GENERATE_MIPMAP_HINT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_5_6_5") ) { UNSIGNED_SHORT_5_6_5=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINEAR_MIPMAP_LINEAR") ) { LINEAR_MIPMAP_LINEAR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHADER_SOURCE_LENGTH") ) { SHADER_SOURCE_LENGTH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_COMPLETE") ) { FRAMEBUFFER_COMPLETE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_BINDING") ) { RENDERBUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_ELEMENTS_INDICES") ) { MAX_ELEMENTS_INDICES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_LOD_BIAS") ) { MAX_TEXTURE_LOD_BIAS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ARRAY_BINDING") ) { VERTEX_ARRAY_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_COMPARE_MODE") ) { TEXTURE_COMPARE_MODE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_COMPARE_FUNC") ) { TEXTURE_COMPARE_FUNC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INT_SAMPLER_2D_ARRAY") ) { INT_SAMPLER_2D_ARRAY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_SAMPLES") ) { RENDERBUFFER_SAMPLES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNIFORM_BUFFER_START") ) { UNIFORM_BUFFER_START=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNIFORM_ARRAY_STRIDE") ) { UNIFORM_ARRAY_STRIDE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNIFORM_IS_ROW_MAJOR") ) { UNIFORM_IS_ROW_MAJOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__arrayBufferBinding") ) { __arrayBufferBinding=inValue.Cast< ::lime::graphics::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__framebufferBinding") ) { __framebufferBinding=inValue.Cast< ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"FUNC_REVERSE_SUBTRACT") ) { FUNC_REVERSE_SUBTRACT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CURRENT_VERTEX_ATTRIB") ) { CURRENT_VERTEX_ATTRIB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_FACTOR") ) { POLYGON_OFFSET_FACTOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE_VALUE") ) { SAMPLE_COVERAGE_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINEAR_MIPMAP_NEAREST") ) { LINEAR_MIPMAP_NEAREST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NEAREST_MIPMAP_LINEAR") ) { NEAREST_MIPMAP_LINEAR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHADER_BINARY_FORMATS") ) { SHADER_BINARY_FORMATS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_RED_SIZE") ) { RENDERBUFFER_RED_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_RENDERBUFFER_SIZE") ) { MAX_RENDERBUFFER_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BROWSER_DEFAULT_WEBGL") ) { BROWSER_DEFAULT_WEBGL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_ELEMENTS_VERTICES") ) { MAX_ELEMENTS_VERTICES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_COLOR_ATTACHMENTS") ) { MAX_COLOR_ATTACHMENTS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ACTIVE_UNIFORM_BLOCKS") ) { ACTIVE_UNIFORM_BLOCKS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNIFORM_MATRIX_STRIDE") ) { UNIFORM_MATRIX_STRIDE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNIFORM_BLOCK_BINDING") ) { UNIFORM_BLOCK_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderbufferBinding") ) { __renderbufferBinding=inValue.Cast< ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_WRITEMASK") ) { STENCIL_BACK_WRITEMASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE_INVERT") ) { SAMPLE_COVERAGE_INVERT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_4_4_4_4") ) { UNSIGNED_SHORT_4_4_4_4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_5_5_5_1") ) { UNSIGNED_SHORT_5_5_5_1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NEAREST_MIPMAP_NEAREST") ) { NEAREST_MIPMAP_NEAREST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_BLUE_SIZE") ) { RENDERBUFFER_BLUE_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_VARYING_COMPONENTS") ) { MAX_VARYING_COMPONENTS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPARE_REF_TO_TEXTURE") ) { COMPARE_REF_TO_TEXTURE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"QUERY_RESULT_AVAILABLE") ) { QUERY_RESULT_AVAILABLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNIFORM_BUFFER_BINDING") ) { UNIFORM_BUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_UNIFORM_BLOCK_SIZE") ) { MAX_UNIFORM_BLOCK_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__elementBufferBinding") ) { __elementBufferBinding=inValue.Cast< ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"STENCIL_PASS_DEPTH_FAIL") ) { STENCIL_PASS_DEPTH_FAIL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_PASS_DEPTH_PASS") ) { STENCIL_PASS_DEPTH_PASS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_VALUE_MASK") ) { STENCIL_BACK_VALUE_MASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_IMAGE_UNITS") ) { MAX_TEXTURE_IMAGE_UNITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_GREEN_SIZE") ) { RENDERBUFFER_GREEN_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_ALPHA_SIZE") ) { RENDERBUFFER_ALPHA_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_DEPTH_SIZE") ) { RENDERBUFFER_DEPTH_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_UNSUPPORTED") ) { FRAMEBUFFER_UNSUPPORTED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_SERVER_WAIT_TIMEOUT") ) { MAX_SERVER_WAIT_TIMEOUT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLER_2D_ARRAY_SHADOW") ) { SAMPLER_2D_ARRAY_SHADOW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_SAMPLER_2D") ) { UNSIGNED_INT_SAMPLER_2D=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_SAMPLER_3D") ) { UNSIGNED_INT_SAMPLER_3D=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNIFORM_BLOCK_DATA_SIZE") ) { UNIFORM_BLOCK_DATA_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SYNC_FLUSH_COMMANDS_BIT") ) { SYNC_FLUSH_COMMANDS_BIT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textureCubeMapBinding") ) { __textureCubeMapBinding=inValue.Cast< ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"ONE_MINUS_CONSTANT_COLOR") ) { ONE_MINUS_CONSTANT_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_CONSTANT_ALPHA") ) { ONE_MINUS_CONSTANT_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLE_ALPHA_TO_COVERAGE") ) { SAMPLE_ALPHA_TO_COVERAGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALIASED_POINT_SIZE_RANGE") ) { ALIASED_POINT_SIZE_RANGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALIASED_LINE_WIDTH_RANGE") ) { ALIASED_LINE_WIDTH_RANGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHADING_LANGUAGE_VERSION") ) { SHADING_LANGUAGE_VERSION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_CUBE_MAP") ) { TEXTURE_BINDING_CUBE_MAP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_SIZE") ) { VERTEX_ATTRIB_ARRAY_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_TYPE") ) { VERTEX_ATTRIB_ARRAY_TYPE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL_ATTACHMENT") ) { DEPTH_STENCIL_ATTACHMENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_ARRAY_TEXTURE_LAYERS") ) { MAX_ARRAY_TEXTURE_LAYERS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MIN_PROGRAM_TEXEL_OFFSET") ) { MIN_PROGRAM_TEXEL_OFFSET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_PROGRAM_TEXEL_OFFSET") ) { MAX_PROGRAM_TEXEL_OFFSET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_2D_ARRAY") ) { TEXTURE_BINDING_2D_ARRAY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_IMMUTABLE_FORMAT") ) { TEXTURE_IMMUTABLE_FORMAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_IMMUTABLE_LEVELS") ) { TEXTURE_IMMUTABLE_LEVELS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_5_9_9_9_REV") ) { UNSIGNED_INT_5_9_9_9_REV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COPY_READ_BUFFER_BINDING") ) { COPY_READ_BUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_FRAMEBUFFER_BINDING") ) { DRAW_FRAMEBUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"READ_FRAMEBUFFER_BINDING") ) { READ_FRAMEBUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"MAX_CUBE_MAP_TEXTURE_SIZE") ) { MAX_CUBE_MAP_TEXTURE_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_PROGRAM_POINT_SIZE") ) { VERTEX_PROGRAM_POINT_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUM_SHADER_BINARY_FORMATS") ) { NUM_SHADER_BINARY_FORMATS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_STENCIL_SIZE") ) { RENDERBUFFER_STENCIL_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_SAMPLER_CUBE") ) { UNSIGNED_INT_SAMPLER_CUBE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PIXEL_PACK_BUFFER_BINDING") ) { PIXEL_PACK_BUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COPY_WRITE_BUFFER_BINDING") ) { COPY_WRITE_BUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TRANSFORM_FEEDBACK_BUFFER") ) { TRANSFORM_FEEDBACK_BUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TRANSFORM_FEEDBACK_PAUSED") ) { TRANSFORM_FEEDBACK_PAUSED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TRANSFORM_FEEDBACK_ACTIVE") ) { TRANSFORM_FEEDBACK_ACTIVE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_UNIFORM_BLOCKS") ) { MAX_VERTEX_UNIFORM_BLOCKS=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"COMPRESSED_TEXTURE_FORMATS") ) { COMPRESSED_TEXTURE_FORMATS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_UNIFORM_VECTORS") ) { MAX_VERTEX_UNIFORM_VECTORS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ACTIVE_UNIFORMS_MAX_LENGTH") ) { ACTIVE_UNIFORMS_MAX_LENGTH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_STRIDE") ) { VERTEX_ATTRIB_ARRAY_STRIDE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TRANSFORM_FEEDBACK_BINDING") ) { TRANSFORM_FEEDBACK_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SYNC_GPU_COMMANDS_COMPLETE") ) { SYNC_GPU_COMMANDS_COMPLETE=inValue.Cast< int >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_X") ) { TEXTURE_CUBE_MAP_POSITIVE_X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_X") ) { TEXTURE_CUBE_MAP_NEGATIVE_X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_Y") ) { TEXTURE_CUBE_MAP_POSITIVE_Y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_Y") ) { TEXTURE_CUBE_MAP_NEGATIVE_Y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_Z") ) { TEXTURE_CUBE_MAP_POSITIVE_Z=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_Z") ) { TEXTURE_CUBE_MAP_NEGATIVE_Z=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_ENABLED") ) { VERTEX_ATTRIB_ARRAY_ENABLED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_POINTER") ) { VERTEX_ATTRIB_ARRAY_POINTER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_2_10_10_10_REV") ) { UNSIGNED_INT_2_10_10_10_REV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PIXEL_UNPACK_BUFFER_BINDING") ) { PIXEL_UNPACK_BUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_INTEGER") ) { VERTEX_ATTRIB_ARRAY_INTEGER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_DIVISOR") ) { VERTEX_ATTRIB_ARRAY_DIVISOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TRANSFORM_FEEDBACK_VARYINGS") ) { TRANSFORM_FEEDBACK_VARYINGS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_FRAGMENT_UNIFORM_BLOCKS") ) { MAX_FRAGMENT_UNIFORM_BLOCKS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_COMBINED_UNIFORM_BLOCKS") ) { MAX_COMBINED_UNIFORM_BLOCKS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_UNIFORM_BUFFER_BINDINGS") ) { MAX_UNIFORM_BUFFER_BINDINGS=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"ELEMENT_ARRAY_BUFFER_BINDING") ) { ELEMENT_ARRAY_BUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_PASS_DEPTH_FAIL") ) { STENCIL_BACK_PASS_DEPTH_FAIL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_PASS_DEPTH_PASS") ) { STENCIL_BACK_PASS_DEPTH_PASS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_FRAGMENT_UNIFORM_VECTORS") ) { MAX_FRAGMENT_UNIFORM_VECTORS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ACTIVE_ATTRIBUTES_MAX_LENGTH") ) { ACTIVE_ATTRIBUTES_MAX_LENGTH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_INTERNAL_FORMAT") ) { RENDERBUFFER_INTERNAL_FORMAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_OUTPUT_COMPONENTS") ) { MAX_VERTEX_OUTPUT_COMPONENTS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_10F_11F_11F_REV") ) { UNSIGNED_INT_10F_11F_11F_REV=inValue.Cast< int >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"INVALID_FRAMEBUFFER_OPERATION") ) { INVALID_FRAMEBUFFER_OPERATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_UNIFORM_COMPONENTS") ) { MAX_VERTEX_UNIFORM_COMPONENTS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_FRAGMENT_INPUT_COMPONENTS") ) { MAX_FRAGMENT_INPUT_COMPONENTS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_SAMPLER_2D_ARRAY") ) { UNSIGNED_INT_SAMPLER_2D_ARRAY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNIFORM_BLOCK_ACTIVE_UNIFORMS") ) { UNIFORM_BLOCK_ACTIVE_UNIFORMS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_CLIENT_WAIT_TIMEOUT_WEBGL") ) { MAX_CLIENT_WAIT_TIMEOUT_WEBGL=inValue.Cast< int >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"NUM_COMPRESSED_TEXTURE_FORMATS") ) { NUM_COMPRESSED_TEXTURE_FORMATS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_TEXTURE_IMAGE_UNITS") ) { MAX_VERTEX_TEXTURE_IMAGE_UNITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_NORMALIZED") ) { VERTEX_ATTRIB_ARRAY_NORMALIZED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"IMPLEMENTATION_COLOR_READ_TYPE") ) { IMPLEMENTATION_COLOR_READ_TYPE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNPACK_PREMULTIPLY_ALPHA_WEBGL") ) { UNPACK_PREMULTIPLY_ALPHA_WEBGL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_32_UNSIGNED_INT_24_8_REV") ) { FLOAT_32_UNSIGNED_INT_24_8_REV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TRANSFORM_FEEDBACK_BUFFER_MODE") ) { TRANSFORM_FEEDBACK_BUFFER_MODE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TRANSFORM_FEEDBACK_BUFFER_SIZE") ) { TRANSFORM_FEEDBACK_BUFFER_SIZE=inValue.Cast< int >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"MAX_FRAGMENT_UNIFORM_COMPONENTS") ) { MAX_FRAGMENT_UNIFORM_COMPONENTS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAGMENT_SHADER_DERIVATIVE_HINT") ) { FRAGMENT_SHADER_DERIVATIVE_HINT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ANY_SAMPLES_PASSED_CONSERVATIVE") ) { ANY_SAMPLES_PASSED_CONSERVATIVE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TRANSFORM_FEEDBACK_BUFFER_START") ) { TRANSFORM_FEEDBACK_BUFFER_START=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_RED_SIZE") ) { FRAMEBUFFER_ATTACHMENT_RED_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNIFORM_BUFFER_OFFSET_ALIGNMENT") ) { UNIFORM_BUFFER_OFFSET_ALIGNMENT=inValue.Cast< int >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"MAX_COMBINED_TEXTURE_IMAGE_UNITS") ) { MAX_COMBINED_TEXTURE_IMAGE_UNITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"IMPLEMENTATION_COLOR_READ_FORMAT") ) { IMPLEMENTATION_COLOR_READ_FORMAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_BLUE_SIZE") ) { FRAMEBUFFER_ATTACHMENT_BLUE_SIZE=inValue.Cast< int >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_ATTACHMENT") ) { FRAMEBUFFER_INCOMPLETE_ATTACHMENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_DIMENSIONS") ) { FRAMEBUFFER_INCOMPLETE_DIMENSIONS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TRANSFORM_FEEDBACK_BUFFER_BINDING") ) { TRANSFORM_FEEDBACK_BUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_GREEN_SIZE") ) { FRAMEBUFFER_ATTACHMENT_GREEN_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE") ) { FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE") ) { FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE=inValue.Cast< int >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING") ) { VERTEX_ATTRIB_ARRAY_BUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE") ) { FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME") ) { FRAMEBUFFER_ATTACHMENT_OBJECT_NAME=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNPACK_COLORSPACE_CONVERSION_WEBGL") ) { UNPACK_COLORSPACE_CONVERSION_WEBGL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE") ) { FRAMEBUFFER_INCOMPLETE_MULTISAMPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE") ) { FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE=inValue.Cast< int >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL") ) { FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER") ) { FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES") ) { UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES=inValue.Cast< int >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN") ) { TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING") ) { FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE") ) { FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE=inValue.Cast< int >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS") ) { MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS=inValue.Cast< int >(); return inValue; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS") ) { MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS=inValue.Cast< int >(); return inValue; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS") ) { MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS=inValue.Cast< int >(); return inValue; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT") ) { FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER") ) { UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER=inValue.Cast< int >(); return inValue; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS") ) { MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS=inValue.Cast< int >(); return inValue; }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER") ) { UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER=inValue.Cast< int >(); return inValue; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE") ) { FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE=inValue.Cast< int >(); return inValue; }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS") ) { MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NativeGLRenderContext_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__lastContextID") ) { __lastContextID=ioValue.Cast< int >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__extensionObjects") ) { __extensionObjects=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__supportedExtensions") ) { __supportedExtensions=ioValue.Cast< Array< ::String > >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"__extensionObjectConstructors") ) { __extensionObjectConstructors=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void NativeGLRenderContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("DEPTH_BUFFER_BIT","\xca","\x5b","\xce","\xc6"));
	outFields->push(HX_HCSTRING("STENCIL_BUFFER_BIT","\x71","\x93","\x29","\xde"));
	outFields->push(HX_HCSTRING("COLOR_BUFFER_BIT","\x6a","\xf7","\x74","\xfb"));
	outFields->push(HX_HCSTRING("POINTS","\x23","\xbe","\xb0","\xa9"));
	outFields->push(HX_HCSTRING("LINES","\xdf","\x15","\xf0","\xf2"));
	outFields->push(HX_HCSTRING("LINE_LOOP","\xcf","\x55","\xc1","\x16"));
	outFields->push(HX_HCSTRING("LINE_STRIP","\xed","\x20","\x88","\xdd"));
	outFields->push(HX_HCSTRING("TRIANGLES","\x8b","\xa0","\x99","\x7a"));
	outFields->push(HX_HCSTRING("TRIANGLE_STRIP","\xc1","\x66","\x6c","\xf6"));
	outFields->push(HX_HCSTRING("TRIANGLE_FAN","\x7c","\xee","\x2e","\x91"));
	outFields->push(HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b"));
	outFields->push(HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00"));
	outFields->push(HX_HCSTRING("SRC_COLOR","\x48","\x9e","\xbd","\x5c"));
	outFields->push(HX_HCSTRING("ONE_MINUS_SRC_COLOR","\x20","\x3b","\xe1","\x48"));
	outFields->push(HX_HCSTRING("SRC_ALPHA","\x43","\xd4","\xf7","\x33"));
	outFields->push(HX_HCSTRING("ONE_MINUS_SRC_ALPHA","\x1b","\x71","\x1b","\x20"));
	outFields->push(HX_HCSTRING("DST_ALPHA","\x24","\x02","\xf2","\xd3"));
	outFields->push(HX_HCSTRING("ONE_MINUS_DST_ALPHA","\xfc","\x9e","\x15","\xc0"));
	outFields->push(HX_HCSTRING("DST_COLOR","\x29","\xcc","\xb7","\xfc"));
	outFields->push(HX_HCSTRING("ONE_MINUS_DST_COLOR","\x01","\x69","\xdb","\xe8"));
	outFields->push(HX_HCSTRING("SRC_ALPHA_SATURATE","\xab","\xe2","\x3d","\x33"));
	outFields->push(HX_HCSTRING("FUNC_ADD","\x46","\x78","\x17","\x75"));
	outFields->push(HX_HCSTRING("BLEND_EQUATION","\x9a","\x14","\x92","\x71"));
	outFields->push(HX_HCSTRING("BLEND_EQUATION_RGB","\x88","\x25","\xeb","\x90"));
	outFields->push(HX_HCSTRING("BLEND_EQUATION_ALPHA","\x99","\xaa","\xae","\x37"));
	outFields->push(HX_HCSTRING("FUNC_SUBTRACT","\xaf","\xc0","\xa0","\x17"));
	outFields->push(HX_HCSTRING("FUNC_REVERSE_SUBTRACT","\xcc","\x8d","\xef","\xf3"));
	outFields->push(HX_HCSTRING("BLEND_DST_RGB","\x05","\x87","\xf5","\xec"));
	outFields->push(HX_HCSTRING("BLEND_SRC_RGB","\x64","\x43","\x8c","\x2c"));
	outFields->push(HX_HCSTRING("BLEND_DST_ALPHA","\x56","\x25","\x32","\x74"));
	outFields->push(HX_HCSTRING("BLEND_SRC_ALPHA","\x75","\xf7","\x37","\xd4"));
	outFields->push(HX_HCSTRING("CONSTANT_COLOR","\xe8","\x64","\x8a","\xc8"));
	outFields->push(HX_HCSTRING("ONE_MINUS_CONSTANT_COLOR","\x10","\x39","\xe7","\x06"));
	outFields->push(HX_HCSTRING("CONSTANT_ALPHA","\xe3","\x9a","\xc4","\x9f"));
	outFields->push(HX_HCSTRING("ONE_MINUS_CONSTANT_ALPHA","\x0b","\x6f","\x21","\xde"));
	outFields->push(HX_HCSTRING("BLEND_COLOR","\x75","\xcb","\xc8","\x67"));
	outFields->push(HX_HCSTRING("ARRAY_BUFFER","\x46","\x66","\x17","\xf4"));
	outFields->push(HX_HCSTRING("ELEMENT_ARRAY_BUFFER","\x09","\x05","\x53","\x3d"));
	outFields->push(HX_HCSTRING("ARRAY_BUFFER_BINDING","\xec","\xd4","\xa9","\x79"));
	outFields->push(HX_HCSTRING("ELEMENT_ARRAY_BUFFER_BINDING","\xaf","\x6e","\x96","\xa2"));
	outFields->push(HX_HCSTRING("STREAM_DRAW","\x63","\x7f","\x28","\x15"));
	outFields->push(HX_HCSTRING("STATIC_DRAW","\x75","\x50","\x2f","\xba"));
	outFields->push(HX_HCSTRING("DYNAMIC_DRAW","\x24","\x04","\x1f","\x24"));
	outFields->push(HX_HCSTRING("BUFFER_SIZE","\xa0","\x7b","\x91","\x4c"));
	outFields->push(HX_HCSTRING("BUFFER_USAGE","\x42","\x05","\x11","\xe0"));
	outFields->push(HX_HCSTRING("CURRENT_VERTEX_ATTRIB","\x1f","\x8c","\x2f","\xab"));
	outFields->push(HX_HCSTRING("FRONT","\x89","\x50","\x7c","\x84"));
	outFields->push(HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"));
	outFields->push(HX_HCSTRING("FRONT_AND_BACK","\xa5","\x3d","\x6a","\xc1"));
	outFields->push(HX_HCSTRING("TEXTURE_2D","\x16","\x0c","\xf8","\xa2"));
	outFields->push(HX_HCSTRING("CULL_FACE","\x8a","\xa5","\xf4","\xcf"));
	outFields->push(HX_HCSTRING("BLEND","\x31","\x20","\xe3","\x32"));
	outFields->push(HX_HCSTRING("DITHER","\xe6","\xac","\x41","\x70"));
	outFields->push(HX_HCSTRING("STENCIL_TEST","\xd5","\xdc","\x69","\xd5"));
	outFields->push(HX_HCSTRING("DEPTH_TEST","\x6e","\x6c","\x25","\x28"));
	outFields->push(HX_HCSTRING("SCISSOR_TEST","\xb5","\xbe","\x51","\x59"));
	outFields->push(HX_HCSTRING("POLYGON_OFFSET_FILL","\x4a","\x3d","\x32","\xac"));
	outFields->push(HX_HCSTRING("SAMPLE_ALPHA_TO_COVERAGE","\x16","\x3e","\x56","\xe1"));
	outFields->push(HX_HCSTRING("SAMPLE_COVERAGE","\xdd","\xb7","\x0e","\xc1"));
	outFields->push(HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f"));
	outFields->push(HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13"));
	outFields->push(HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0"));
	outFields->push(HX_HCSTRING("INVALID_OPERATION","\x5f","\xb1","\xc8","\x29"));
	outFields->push(HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1"));
	outFields->push(HX_HCSTRING("CW","\xb4","\x3a","\x00","\x00"));
	outFields->push(HX_HCSTRING("CCW","\xb7","\x11","\x33","\x00"));
	outFields->push(HX_HCSTRING("LINE_WIDTH","\x1b","\x84","\xd2","\x23"));
	outFields->push(HX_HCSTRING("ALIASED_POINT_SIZE_RANGE","\xfe","\xf6","\xa4","\x7b"));
	outFields->push(HX_HCSTRING("ALIASED_LINE_WIDTH_RANGE","\xe9","\x22","\xd5","\x8a"));
	outFields->push(HX_HCSTRING("CULL_FACE_MODE","\x78","\xbd","\x87","\xd1"));
	outFields->push(HX_HCSTRING("FRONT_FACE","\x53","\xb7","\x4d","\xef"));
	outFields->push(HX_HCSTRING("DEPTH_RANGE","\x01","\x9a","\x23","\xcf"));
	outFields->push(HX_HCSTRING("DEPTH_WRITEMASK","\x8f","\x37","\x3f","\x66"));
	outFields->push(HX_HCSTRING("DEPTH_CLEAR_VALUE","\x23","\x17","\x0d","\x1b"));
	outFields->push(HX_HCSTRING("DEPTH_FUNC","\x60","\x8f","\xf0","\x1e"));
	outFields->push(HX_HCSTRING("STENCIL_CLEAR_VALUE","\x9c","\x91","\x82","\x73"));
	outFields->push(HX_HCSTRING("STENCIL_FUNC","\xc7","\xff","\x34","\xcc"));
	outFields->push(HX_HCSTRING("STENCIL_FAIL","\x61","\xce","\x25","\xcc"));
	outFields->push(HX_HCSTRING("STENCIL_PASS_DEPTH_FAIL","\x45","\xca","\xb9","\xc8"));
	outFields->push(HX_HCSTRING("STENCIL_PASS_DEPTH_PASS","\x38","\xf5","\x55","\xcf"));
	outFields->push(HX_HCSTRING("STENCIL_REF","\x10","\x6a","\xa5","\x3c"));
	outFields->push(HX_HCSTRING("STENCIL_VALUE_MASK","\x9d","\x58","\x5e","\xa0"));
	outFields->push(HX_HCSTRING("STENCIL_WRITEMASK","\xc8","\xf1","\xa6","\x49"));
	outFields->push(HX_HCSTRING("STENCIL_BACK_FUNC","\x39","\x78","\xa2","\x90"));
	outFields->push(HX_HCSTRING("STENCIL_BACK_FAIL","\xd3","\x46","\x93","\x90"));
	outFields->push(HX_HCSTRING("STENCIL_BACK_PASS_DEPTH_FAIL","\x13","\x23","\x0e","\x34"));
	outFields->push(HX_HCSTRING("STENCIL_BACK_PASS_DEPTH_PASS","\x06","\x4e","\xaa","\x3a"));
	outFields->push(HX_HCSTRING("STENCIL_BACK_REF","\xde","\x45","\xb8","\x08"));
	outFields->push(HX_HCSTRING("STENCIL_BACK_VALUE_MASK","\x8f","\xb2","\xc4","\x88"));
	outFields->push(HX_HCSTRING("STENCIL_BACK_WRITEMASK","\x16","\x9c","\x15","\xc2"));
	outFields->push(HX_HCSTRING("VIEWPORT","\x66","\xdc","\x2a","\xf6"));
	outFields->push(HX_HCSTRING("SCISSOR_BOX","\xe8","\x48","\x4c","\x55"));
	outFields->push(HX_HCSTRING("COLOR_CLEAR_VALUE","\x83","\xa7","\x2e","\xf8"));
	outFields->push(HX_HCSTRING("COLOR_WRITEMASK","\xef","\xef","\xf9","\x14"));
	outFields->push(HX_HCSTRING("UNPACK_ALIGNMENT","\xb6","\x2a","\x2e","\x4b"));
	outFields->push(HX_HCSTRING("PACK_ALIGNMENT","\x9d","\xd6","\x85","\xc3"));
	outFields->push(HX_HCSTRING("MAX_TEXTURE_SIZE","\xe0","\x0b","\x5b","\xfb"));
	outFields->push(HX_HCSTRING("MAX_VIEWPORT_DIMS","\xa9","\x2d","\xfb","\x08"));
	outFields->push(HX_HCSTRING("SUBPIXEL_BITS","\x1f","\xac","\x14","\x0a"));
	outFields->push(HX_HCSTRING("RED_BITS","\x14","\xf8","\x9e","\x96"));
	outFields->push(HX_HCSTRING("GREEN_BITS","\x62","\xa9","\x9b","\x94"));
	outFields->push(HX_HCSTRING("BLUE_BITS","\x0b","\x26","\x60","\xa1"));
	outFields->push(HX_HCSTRING("ALPHA_BITS","\xe7","\xfe","\x7b","\xe0"));
	outFields->push(HX_HCSTRING("DEPTH_BITS","\x22","\x9f","\x42","\x1c"));
	outFields->push(HX_HCSTRING("STENCIL_BITS","\x89","\x0f","\x87","\xc9"));
	outFields->push(HX_HCSTRING("POLYGON_OFFSET_UNITS","\xa8","\xe8","\x11","\xa6"));
	outFields->push(HX_HCSTRING("POLYGON_OFFSET_FACTOR","\x56","\x6b","\x12","\x2a"));
	outFields->push(HX_HCSTRING("TEXTURE_BINDING_2D","\x30","\xec","\x98","\xb1"));
	outFields->push(HX_HCSTRING("SAMPLE_BUFFERS","\xfe","\x16","\x71","\x3c"));
	outFields->push(HX_HCSTRING("SAMPLES","\xe9","\x98","\x9d","\x03"));
	outFields->push(HX_HCSTRING("SAMPLE_COVERAGE_VALUE","\x2f","\x7a","\x07","\x69"));
	outFields->push(HX_HCSTRING("SAMPLE_COVERAGE_INVERT","\x78","\x52","\xa5","\xcd"));
	outFields->push(HX_HCSTRING("NUM_COMPRESSED_TEXTURE_FORMATS","\x33","\xae","\x1c","\x0d"));
	outFields->push(HX_HCSTRING("COMPRESSED_TEXTURE_FORMATS","\x7a","\x13","\xe3","\x12"));
	outFields->push(HX_HCSTRING("DONT_CARE","\x7f","\x9b","\xc1","\xcf"));
	outFields->push(HX_HCSTRING("FASTEST","\x0a","\xa3","\x0d","\x5e"));
	outFields->push(HX_HCSTRING("NICEST","\x7e","\x6d","\x94","\x64"));
	outFields->push(HX_HCSTRING("GENERATE_MIPMAP_HINT","\x94","\xd3","\xd5","\x83"));
	outFields->push(HX_HCSTRING("BYTE","\x08","\xe7","\xe3","\x2b"));
	outFields->push(HX_HCSTRING("UNSIGNED_BYTE","\xd2","\x79","\x6b","\x01"));
	outFields->push(HX_HCSTRING("SHORT","\x5c","\xbc","\x15","\xfa"));
	outFields->push(HX_HCSTRING("UNSIGNED_SHORT","\x52","\x9a","\x2e","\xfb"));
	outFields->push(HX_HCSTRING("INT","\xcf","\xa8","\x37","\x00"));
	outFields->push(HX_HCSTRING("UNSIGNED_INT","\x45","\xfd","\xb9","\x1c"));
	outFields->push(HX_HCSTRING("FLOAT","\x7c","\xfd","\x84","\x80"));
	outFields->push(HX_HCSTRING("FIXED","\x54","\x31","\x90","\x7e"));
	outFields->push(HX_HCSTRING("DEPTH_COMPONENT","\x01","\x1f","\x62","\x0f"));
	outFields->push(HX_HCSTRING("ALPHA","\x3e","\xdf","\x84","\x9f"));
	outFields->push(HX_HCSTRING("RGB","\xed","\x76","\x3e","\x00"));
	outFields->push(HX_HCSTRING("RGBA","\xb4","\x98","\x69","\x36"));
	outFields->push(HX_HCSTRING("LUMINANCE","\xd8","\xa7","\xe0","\x63"));
	outFields->push(HX_HCSTRING("LUMINANCE_ALPHA","\x57","\x40","\xe0","\xbd"));
	outFields->push(HX_HCSTRING("UNSIGNED_SHORT_4_4_4_4","\xa6","\x33","\x71","\x7b"));
	outFields->push(HX_HCSTRING("UNSIGNED_SHORT_5_5_5_1","\x26","\x01","\x6e","\x38"));
	outFields->push(HX_HCSTRING("UNSIGNED_SHORT_5_6_5","\x75","\xbb","\x16","\x8c"));
	outFields->push(HX_HCSTRING("FRAGMENT_SHADER","\xf4","\x26","\x78","\xe9"));
	outFields->push(HX_HCSTRING("VERTEX_SHADER","\xe0","\x69","\x73","\x49"));
	outFields->push(HX_HCSTRING("MAX_VERTEX_ATTRIBS","\x49","\xc9","\x15","\x5f"));
	outFields->push(HX_HCSTRING("MAX_VERTEX_UNIFORM_VECTORS","\x45","\x6c","\x16","\x5a"));
	outFields->push(HX_HCSTRING("MAX_VARYING_VECTORS","\x06","\xb9","\xf7","\x37"));
	outFields->push(HX_HCSTRING("MAX_COMBINED_TEXTURE_IMAGE_UNITS","\xa8","\xd1","\xa6","\x77"));
	outFields->push(HX_HCSTRING("MAX_VERTEX_TEXTURE_IMAGE_UNITS","\xc7","\x90","\x95","\x2b"));
	outFields->push(HX_HCSTRING("MAX_TEXTURE_IMAGE_UNITS","\xcc","\x6c","\x61","\x54"));
	outFields->push(HX_HCSTRING("MAX_FRAGMENT_UNIFORM_VECTORS","\x71","\x49","\xf5","\x0a"));
	outFields->push(HX_HCSTRING("SHADER_TYPE","\x54","\xe5","\x27","\x87"));
	outFields->push(HX_HCSTRING("DELETE_STATUS","\x06","\xe4","\x98","\x1e"));
	outFields->push(HX_HCSTRING("LINK_STATUS","\x17","\x18","\x8f","\x45"));
	outFields->push(HX_HCSTRING("VALIDATE_STATUS","\xfb","\x22","\x07","\xc6"));
	outFields->push(HX_HCSTRING("ATTACHED_SHADERS","\x73","\xd2","\x76","\x75"));
	outFields->push(HX_HCSTRING("ACTIVE_UNIFORMS","\x98","\x7d","\x3a","\x2c"));
	outFields->push(HX_HCSTRING("ACTIVE_UNIFORMS_MAX_LENGTH","\x08","\xcb","\xc9","\x4d"));
	outFields->push(HX_HCSTRING("ACTIVE_ATTRIBUTES","\xf0","\xe5","\xc7","\x4a"));
	outFields->push(HX_HCSTRING("ACTIVE_ATTRIBUTES_MAX_LENGTH","\xb0","\x11","\xb3","\xae"));
	outFields->push(HX_HCSTRING("SHADING_LANGUAGE_VERSION","\xe6","\xc4","\xef","\x70"));
	outFields->push(HX_HCSTRING("CURRENT_PROGRAM","\xfe","\x28","\xc0","\x3f"));
	outFields->push(HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17"));
	outFields->push(HX_HCSTRING("LESS","\x59","\xdb","\x70","\x32"));
	outFields->push(HX_HCSTRING("EQUAL","\x94","\x07","\x71","\xf0"));
	outFields->push(HX_HCSTRING("LEQUAL","\xc8","\x73","\x90","\x53"));
	outFields->push(HX_HCSTRING("GREATER","\xda","\x64","\x94","\x37"));
	outFields->push(HX_HCSTRING("NOTEQUAL","\xc1","\xc1","\xe9","\xc8"));
	outFields->push(HX_HCSTRING("GEQUAL","\xed","\xa5","\xc7","\x53"));
	outFields->push(HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9"));
	outFields->push(HX_HCSTRING("KEEP","\x85","\x98","\xc7","\x31"));
	outFields->push(HX_HCSTRING("REPLACE","\x14","\x1c","\xfc","\x2a"));
	outFields->push(HX_HCSTRING("INCR","\xd4","\xfd","\x7b","\x30"));
	outFields->push(HX_HCSTRING("DECR","\x70","\x18","\x27","\x2d"));
	outFields->push(HX_HCSTRING("INVERT","\x16","\x93","\x5b","\x52"));
	outFields->push(HX_HCSTRING("INCR_WRAP","\x55","\x7f","\x68","\x2c"));
	outFields->push(HX_HCSTRING("DECR_WRAP","\x39","\x6f","\xeb","\x0a"));
	outFields->push(HX_HCSTRING("VENDOR","\x88","\x91","\x19","\x51"));
	outFields->push(HX_HCSTRING("RENDERER","\x43","\x55","\x61","\x0c"));
	outFields->push(HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc"));
	outFields->push(HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b"));
	outFields->push(HX_HCSTRING("NEAREST","\x3e","\xec","\x9d","\xe5"));
	outFields->push(HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f"));
	outFields->push(HX_HCSTRING("NEAREST_MIPMAP_NEAREST","\x68","\xb9","\x63","\x7e"));
	outFields->push(HX_HCSTRING("LINEAR_MIPMAP_NEAREST","\xa1","\x9b","\xa4","\x65"));
	outFields->push(HX_HCSTRING("NEAREST_MIPMAP_LINEAR","\xfb","\x83","\xf2","\x3b"));
	outFields->push(HX_HCSTRING("LINEAR_MIPMAP_LINEAR","\xe2","\x8b","\xf8","\x99"));
	outFields->push(HX_HCSTRING("TEXTURE_MAG_FILTER","\x88","\xff","\xd5","\x1e"));
	outFields->push(HX_HCSTRING("TEXTURE_MIN_FILTER","\x69","\x66","\xc2","\x46"));
	outFields->push(HX_HCSTRING("TEXTURE_WRAP_S","\xa2","\x2d","\xc3","\xfe"));
	outFields->push(HX_HCSTRING("TEXTURE_WRAP_T","\xa3","\x2d","\xc3","\xfe"));
	outFields->push(HX_HCSTRING("TEXTURE","\xbb","\x9c","\xb4","\x1e"));
	outFields->push(HX_HCSTRING("TEXTURE_CUBE_MAP","\x36","\x7a","\xe1","\xad"));
	outFields->push(HX_HCSTRING("TEXTURE_BINDING_CUBE_MAP","\xd0","\x69","\x98","\x75"));
	outFields->push(HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_X","\xbb","\x1c","\xee","\x24"));
	outFields->push(HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_X","\x77","\x03","\xe2","\x6b"));
	outFields->push(HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_Y","\xbc","\x1c","\xee","\x24"));
	outFields->push(HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Y","\x78","\x03","\xe2","\x6b"));
	outFields->push(HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_Z","\xbd","\x1c","\xee","\x24"));
	outFields->push(HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Z","\x79","\x03","\xe2","\x6b"));
	outFields->push(HX_HCSTRING("MAX_CUBE_MAP_TEXTURE_SIZE","\x77","\xb9","\x24","\x9d"));
	outFields->push(HX_HCSTRING("TEXTURE0","\x15","\x87","\x54","\xbf"));
	outFields->push(HX_HCSTRING("TEXTURE1","\x16","\x87","\x54","\xbf"));
	outFields->push(HX_HCSTRING("TEXTURE2","\x17","\x87","\x54","\xbf"));
	outFields->push(HX_HCSTRING("TEXTURE3","\x18","\x87","\x54","\xbf"));
	outFields->push(HX_HCSTRING("TEXTURE4","\x19","\x87","\x54","\xbf"));
	outFields->push(HX_HCSTRING("TEXTURE5","\x1a","\x87","\x54","\xbf"));
	outFields->push(HX_HCSTRING("TEXTURE6","\x1b","\x87","\x54","\xbf"));
	outFields->push(HX_HCSTRING("TEXTURE7","\x1c","\x87","\x54","\xbf"));
	outFields->push(HX_HCSTRING("TEXTURE8","\x1d","\x87","\x54","\xbf"));
	outFields->push(HX_HCSTRING("TEXTURE9","\x1e","\x87","\x54","\xbf"));
	outFields->push(HX_HCSTRING("TEXTURE10","\x5a","\xac","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE11","\x5b","\xac","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE12","\x5c","\xac","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE13","\x5d","\xac","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE14","\x5e","\xac","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE15","\x5f","\xac","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE16","\x60","\xac","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE17","\x61","\xac","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE18","\x62","\xac","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE19","\x63","\xac","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE20","\x39","\xad","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE21","\x3a","\xad","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE22","\x3b","\xad","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE23","\x3c","\xad","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE24","\x3d","\xad","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE25","\x3e","\xad","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE26","\x3f","\xad","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE27","\x40","\xad","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE28","\x41","\xad","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE29","\x42","\xad","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE30","\x18","\xae","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE31","\x19","\xae","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("ACTIVE_TEXTURE","\x02","\x1a","\x22","\xce"));
	outFields->push(HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8"));
	outFields->push(HX_HCSTRING("CLAMP_TO_EDGE","\x1d","\xfc","\x5a","\x96"));
	outFields->push(HX_HCSTRING("MIRRORED_REPEAT","\x5c","\x94","\x80","\x4a"));
	outFields->push(HX_HCSTRING("FLOAT_VEC2","\x61","\xac","\xa4","\xeb"));
	outFields->push(HX_HCSTRING("FLOAT_VEC3","\x62","\xac","\xa4","\xeb"));
	outFields->push(HX_HCSTRING("FLOAT_VEC4","\x63","\xac","\xa4","\xeb"));
	outFields->push(HX_HCSTRING("INT_VEC2","\x2e","\x14","\x05","\x7d"));
	outFields->push(HX_HCSTRING("INT_VEC3","\x2f","\x14","\x05","\x7d"));
	outFields->push(HX_HCSTRING("INT_VEC4","\x30","\x14","\x05","\x7d"));
	outFields->push(HX_HCSTRING("BOOL","\x2a","\x4c","\xdc","\x2b"));
	outFields->push(HX_HCSTRING("BOOL_VEC2","\xf3","\x66","\x2b","\x2d"));
	outFields->push(HX_HCSTRING("BOOL_VEC3","\xf4","\x66","\x2b","\x2d"));
	outFields->push(HX_HCSTRING("BOOL_VEC4","\xf5","\x66","\x2b","\x2d"));
	outFields->push(HX_HCSTRING("FLOAT_MAT2","\x95","\xc6","\xae","\xe5"));
	outFields->push(HX_HCSTRING("FLOAT_MAT3","\x96","\xc6","\xae","\xe5"));
	outFields->push(HX_HCSTRING("FLOAT_MAT4","\x97","\xc6","\xae","\xe5"));
	outFields->push(HX_HCSTRING("SAMPLER_2D","\x09","\x2a","\x93","\x6e"));
	outFields->push(HX_HCSTRING("SAMPLER_CUBE","\xec","\x3e","\x82","\xa4"));
	outFields->push(HX_HCSTRING("VERTEX_ATTRIB_ARRAY_ENABLED","\x61","\x99","\x09","\x66"));
	outFields->push(HX_HCSTRING("VERTEX_ATTRIB_ARRAY_SIZE","\xc1","\x07","\xfd","\x08"));
	outFields->push(HX_HCSTRING("VERTEX_ATTRIB_ARRAY_STRIDE","\x19","\x2b","\x41","\x58"));
	outFields->push(HX_HCSTRING("VERTEX_ATTRIB_ARRAY_TYPE","\xba","\x59","\xb2","\x09"));
	outFields->push(HX_HCSTRING("VERTEX_ATTRIB_ARRAY_NORMALIZED","\x37","\xb7","\x22","\x78"));
	outFields->push(HX_HCSTRING("VERTEX_ATTRIB_ARRAY_POINTER","\x9d","\x55","\xfa","\x38"));
	outFields->push(HX_HCSTRING("VERTEX_ATTRIB_ARRAY_BUFFER_BINDING","\xa6","\x80","\x67","\x97"));
	outFields->push(HX_HCSTRING("IMPLEMENTATION_COLOR_READ_TYPE","\xfa","\xb6","\x2b","\x35"));
	outFields->push(HX_HCSTRING("IMPLEMENTATION_COLOR_READ_FORMAT","\x77","\xc7","\x1a","\x47"));
	outFields->push(HX_HCSTRING("VERTEX_PROGRAM_POINT_SIZE","\xe6","\x56","\xbe","\x34"));
	outFields->push(HX_HCSTRING("POINT_SPRITE","\x74","\x93","\x5c","\x14"));
	outFields->push(HX_HCSTRING("COMPILE_STATUS","\xde","\xcb","\x4e","\x8c"));
	outFields->push(HX_HCSTRING("INFO_LOG_LENGTH","\x12","\xde","\x68","\xc7"));
	outFields->push(HX_HCSTRING("SHADER_SOURCE_LENGTH","\x30","\xc9","\x50","\x62"));
	outFields->push(HX_HCSTRING("SHADER_COMPILER","\x39","\xaf","\xc7","\xad"));
	outFields->push(HX_HCSTRING("SHADER_BINARY_FORMATS","\xd8","\xee","\x25","\xd0"));
	outFields->push(HX_HCSTRING("NUM_SHADER_BINARY_FORMATS","\xbf","\x4e","\xe4","\xa8"));
	outFields->push(HX_HCSTRING("LOW_FLOAT","\x31","\x04","\x74","\xe4"));
	outFields->push(HX_HCSTRING("MEDIUM_FLOAT","\xf2","\x8a","\x46","\xb9"));
	outFields->push(HX_HCSTRING("HIGH_FLOAT","\x9f","\xf9","\x3b","\x47"));
	outFields->push(HX_HCSTRING("LOW_INT","\x44","\x28","\x70","\x45"));
	outFields->push(HX_HCSTRING("MEDIUM_INT","\xc5","\xcc","\xaf","\x4f"));
	outFields->push(HX_HCSTRING("HIGH_INT","\x32","\x46","\x02","\x09"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER","\xcd","\x20","\x84","\x50"));
	outFields->push(HX_HCSTRING("RENDERBUFFER","\xd6","\xa4","\xa4","\xa9"));
	outFields->push(HX_HCSTRING("RGBA4","\x00","\x05","\xfc","\x65"));
	outFields->push(HX_HCSTRING("RGB5_A1","\x47","\x8f","\xf9","\xd8"));
	outFields->push(HX_HCSTRING("RGB565","\xe7","\x41","\x7f","\xd6"));
	outFields->push(HX_HCSTRING("DEPTH_COMPONENT16","\x26","\xcc","\x68","\x43"));
	outFields->push(HX_HCSTRING("STENCIL_INDEX","\x0f","\x79","\xb6","\x97"));
	outFields->push(HX_HCSTRING("STENCIL_INDEX8","\x49","\x74","\xf3","\x27"));
	outFields->push(HX_HCSTRING("DEPTH_STENCIL","\x40","\x2f","\x20","\x2b"));
	outFields->push(HX_HCSTRING("RENDERBUFFER_WIDTH","\x7d","\x1e","\xe1","\x43"));
	outFields->push(HX_HCSTRING("RENDERBUFFER_HEIGHT","\x70","\x07","\x69","\xd7"));
	outFields->push(HX_HCSTRING("RENDERBUFFER_INTERNAL_FORMAT","\x90","\xda","\xeb","\xb5"));
	outFields->push(HX_HCSTRING("RENDERBUFFER_RED_SIZE","\x98","\xa5","\x58","\x5e"));
	outFields->push(HX_HCSTRING("RENDERBUFFER_GREEN_SIZE","\x26","\x9b","\x7d","\x3b"));
	outFields->push(HX_HCSTRING("RENDERBUFFER_BLUE_SIZE","\xdd","\x93","\x86","\xdd"));
	outFields->push(HX_HCSTRING("RENDERBUFFER_ALPHA_SIZE","\xab","\xf0","\x5d","\x87"));
	outFields->push(HX_HCSTRING("RENDERBUFFER_DEPTH_SIZE","\xe6","\x90","\x24","\xc3"));
	outFields->push(HX_HCSTRING("RENDERBUFFER_STENCIL_SIZE","\x8d","\xd5","\x5a","\x9d"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE","\x50","\x22","\x44","\x50"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_NAME","\xe1","\xa1","\x3a","\x4c"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL","\xf6","\x9b","\xba","\x81"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE","\xdc","\x4c","\x39","\x8a"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT0","\xb1","\x9a","\xfe","\x86"));
	outFields->push(HX_HCSTRING("DEPTH_ATTACHMENT","\xff","\x54","\xcd","\xe9"));
	outFields->push(HX_HCSTRING("STENCIL_ATTACHMENT","\xa6","\x8c","\x28","\x01"));
	outFields->push(HX_HCSTRING("DEPTH_STENCIL_ATTACHMENT","\xc2","\xe1","\xe1","\x9f"));
	outFields->push(HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_COMPLETE","\xab","\x65","\x7d","\xea"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_ATTACHMENT","\xf2","\xcf","\xb7","\x1d"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT","\x8b","\x0a","\xcd","\x77"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_DIMENSIONS","\x5c","\x86","\xe4","\x1c"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_UNSUPPORTED","\xe3","\xa6","\x4e","\xc8"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_BINDING","\x73","\xee","\xae","\xc5"));
	outFields->push(HX_HCSTRING("RENDERBUFFER_BINDING","\x7c","\x23","\x70","\x23"));
	outFields->push(HX_HCSTRING("MAX_RENDERBUFFER_SIZE","\x4f","\xd4","\x3d","\x65"));
	outFields->push(HX_HCSTRING("INVALID_FRAMEBUFFER_OPERATION","\x2d","\xd4","\xc5","\x43"));
	outFields->push(HX_HCSTRING("UNPACK_FLIP_Y_WEBGL","\x0e","\x9f","\x94","\x9d"));
	outFields->push(HX_HCSTRING("UNPACK_PREMULTIPLY_ALPHA_WEBGL","\x73","\x5d","\xcb","\xc6"));
	outFields->push(HX_HCSTRING("CONTEXT_LOST_WEBGL","\x6e","\x67","\x71","\x45"));
	outFields->push(HX_HCSTRING("UNPACK_COLORSPACE_CONVERSION_WEBGL","\x9f","\xd9","\xf0","\xb9"));
	outFields->push(HX_HCSTRING("BROWSER_DEFAULT_WEBGL","\x04","\x04","\x92","\xc0"));
	outFields->push(HX_HCSTRING("READ_BUFFER","\x09","\x1e","\x91","\xcd"));
	outFields->push(HX_HCSTRING("UNPACK_ROW_LENGTH","\x78","\x04","\xc5","\x5f"));
	outFields->push(HX_HCSTRING("UNPACK_SKIP_ROWS","\x0c","\xe6","\x50","\x4d"));
	outFields->push(HX_HCSTRING("UNPACK_SKIP_PIXELS","\xe0","\x26","\x60","\xaf"));
	outFields->push(HX_HCSTRING("PACK_ROW_LENGTH","\xb1","\xc2","\x23","\x34"));
	outFields->push(HX_HCSTRING("PACK_SKIP_ROWS","\xf3","\x91","\xa8","\xc5"));
	outFields->push(HX_HCSTRING("PACK_SKIP_PIXELS","\x87","\xda","\xe7","\xad"));
	outFields->push(HX_HCSTRING("TEXTURE_BINDING_3D","\x0f","\xed","\x98","\xb1"));
	outFields->push(HX_HCSTRING("UNPACK_SKIP_IMAGES","\x6b","\x88","\x48","\x21"));
	outFields->push(HX_HCSTRING("UNPACK_IMAGE_HEIGHT","\x98","\xfd","\x7e","\x14"));
	outFields->push(HX_HCSTRING("MAX_3D_TEXTURE_SIZE","\x98","\x9e","\x8f","\xd5"));
	outFields->push(HX_HCSTRING("MAX_ELEMENTS_VERTICES","\x86","\xbe","\x2e","\x25"));
	outFields->push(HX_HCSTRING("MAX_ELEMENTS_INDICES","\x1a","\x7d","\xaa","\x73"));
	outFields->push(HX_HCSTRING("MAX_TEXTURE_LOD_BIAS","\xf6","\xfc","\x86","\x68"));
	outFields->push(HX_HCSTRING("MAX_FRAGMENT_UNIFORM_COMPONENTS","\x75","\x6c","\x59","\x3e"));
	outFields->push(HX_HCSTRING("MAX_VERTEX_UNIFORM_COMPONENTS","\x21","\xc6","\x3a","\x5f"));
	outFields->push(HX_HCSTRING("MAX_ARRAY_TEXTURE_LAYERS","\xe7","\xc3","\x5b","\x6e"));
	outFields->push(HX_HCSTRING("MIN_PROGRAM_TEXEL_OFFSET","\x2c","\x3a","\xdc","\x08"));
	outFields->push(HX_HCSTRING("MAX_PROGRAM_TEXEL_OFFSET","\xda","\xdb","\x54","\xb2"));
	outFields->push(HX_HCSTRING("MAX_VARYING_COMPONENTS","\x00","\x28","\xc3","\x5f"));
	outFields->push(HX_HCSTRING("FRAGMENT_SHADER_DERIVATIVE_HINT","\x74","\x51","\xa3","\x7e"));
	outFields->push(HX_HCSTRING("RASTERIZER_DISCARD","\x1a","\x72","\xdc","\x4a"));
	outFields->push(HX_HCSTRING("VERTEX_ARRAY_BINDING","\xc4","\x1d","\x24","\x31"));
	outFields->push(HX_HCSTRING("MAX_VERTEX_OUTPUT_COMPONENTS","\x54","\x64","\x33","\xf3"));
	outFields->push(HX_HCSTRING("MAX_FRAGMENT_INPUT_COMPONENTS","\x5f","\xcc","\x5e","\xd8"));
	outFields->push(HX_HCSTRING("MAX_SERVER_WAIT_TIMEOUT","\x38","\x5d","\x22","\x83"));
	outFields->push(HX_HCSTRING("MAX_ELEMENT_INDEX","\x94","\xef","\xd5","\x74"));
	outFields->push(HX_HCSTRING("RED","\x31","\x75","\x3e","\x00"));
	outFields->push(HX_HCSTRING("RGB8","\xab","\x98","\x69","\x36"));
	outFields->push(HX_HCSTRING("RGBA8","\x04","\x05","\xfc","\x65"));
	outFields->push(HX_HCSTRING("RGB10_A2","\x64","\x47","\xcf","\x94"));
	outFields->push(HX_HCSTRING("TEXTURE_3D","\xf5","\x0c","\xf8","\xa2"));
	outFields->push(HX_HCSTRING("TEXTURE_WRAP_R","\xa1","\x2d","\xc3","\xfe"));
	outFields->push(HX_HCSTRING("TEXTURE_MIN_LOD","\x10","\x2d","\x09","\x39"));
	outFields->push(HX_HCSTRING("TEXTURE_MAX_LOD","\x22","\x17","\x30","\xc8"));
	outFields->push(HX_HCSTRING("TEXTURE_BASE_LEVEL","\xba","\xeb","\x52","\x05"));
	outFields->push(HX_HCSTRING("TEXTURE_MAX_LEVEL","\x65","\x66","\x2f","\x3f"));
	outFields->push(HX_HCSTRING("TEXTURE_COMPARE_MODE","\xe1","\xa5","\xb9","\x86"));
	outFields->push(HX_HCSTRING("TEXTURE_COMPARE_FUNC","\xc2","\xbd","\x1d","\x82"));
	outFields->push(HX_HCSTRING("SRGB","\x7a","\x2c","\x1b","\x37"));
	outFields->push(HX_HCSTRING("SRGB8","\x7e","\xbe","\xab","\x00"));
	outFields->push(HX_HCSTRING("SRGB8_ALPHA8","\x1b","\xb6","\x71","\x35"));
	outFields->push(HX_HCSTRING("COMPARE_REF_TO_TEXTURE","\x3d","\x3b","\x36","\xaa"));
	outFields->push(HX_HCSTRING("RGBA32F","\x93","\xae","\xc6","\xe0"));
	outFields->push(HX_HCSTRING("RGB32F","\xfa","\xb9","\x7d","\xd6"));
	outFields->push(HX_HCSTRING("RGBA16F","\x8d","\x2d","\xc5","\xe0"));
	outFields->push(HX_HCSTRING("RGB16F","\xf4","\x38","\x7c","\xd6"));
	outFields->push(HX_HCSTRING("TEXTURE_2D_ARRAY","\x50","\x2d","\xc6","\x60"));
	outFields->push(HX_HCSTRING("TEXTURE_BINDING_2D_ARRAY","\xea","\x1c","\x7d","\x28"));
	outFields->push(HX_HCSTRING("R11F_G11F_B10F","\x9a","\x02","\x7e","\x28"));
	outFields->push(HX_HCSTRING("RGB9_E5","\x43","\x6d","\x9e","\xdb"));
	outFields->push(HX_HCSTRING("RGBA32UI","\x67","\x1f","\x12","\xcd"));
	outFields->push(HX_HCSTRING("RGB32UI","\x20","\x0e","\x85","\xd7"));
	outFields->push(HX_HCSTRING("RGBA16UI","\x2d","\xbb","\xc2","\xcb"));
	outFields->push(HX_HCSTRING("RGB16UI","\xe6","\xa9","\x35","\xd6"));
	outFields->push(HX_HCSTRING("RGBA8UI","\x58","\x98","\xca","\xe0"));
	outFields->push(HX_HCSTRING("RGB8UI","\xbf","\xa3","\x81","\xd6"));
	outFields->push(HX_HCSTRING("RGBA32I","\x96","\xae","\xc6","\xe0"));
	outFields->push(HX_HCSTRING("RGB32I","\xfd","\xb9","\x7d","\xd6"));
	outFields->push(HX_HCSTRING("RGBA16I","\x90","\x2d","\xc5","\xe0"));
	outFields->push(HX_HCSTRING("RGB16I","\xf7","\x38","\x7c","\xd6"));
	outFields->push(HX_HCSTRING("RGBA8I","\xc5","\x5e","\x88","\xd6"));
	outFields->push(HX_HCSTRING("RGB8I","\x3e","\xfd","\xfb","\x65"));
	outFields->push(HX_HCSTRING("RED_INTEGER","\x50","\x79","\x18","\xf4"));
	outFields->push(HX_HCSTRING("RGB_INTEGER","\x0c","\x97","\xca","\xce"));
	outFields->push(HX_HCSTRING("RGBA_INTEGER","\xd3","\x57","\x27","\xc0"));
	outFields->push(HX_HCSTRING("R8","\xa6","\x47","\x00","\x00"));
	outFields->push(HX_HCSTRING("RG8","\xe3","\x76","\x3e","\x00"));
	outFields->push(HX_HCSTRING("R16F","\xaf","\xdc","\x58","\x36"));
	outFields->push(HX_HCSTRING("R32F","\xb5","\x5d","\x5a","\x36"));
	outFields->push(HX_HCSTRING("RG16F","\x2c","\x15","\xef","\x65"));
	outFields->push(HX_HCSTRING("RG32F","\x32","\x96","\xf0","\x65"));
	outFields->push(HX_HCSTRING("R8I","\xe3","\x69","\x3e","\x00"));
	outFields->push(HX_HCSTRING("R8UI","\x7a","\x47","\x5e","\x36"));
	outFields->push(HX_HCSTRING("R16I","\xb2","\xdc","\x58","\x36"));
	outFields->push(HX_HCSTRING("R16UI","\xcb","\x49","\x68","\x57"));
	outFields->push(HX_HCSTRING("R32I","\xb8","\x5d","\x5a","\x36"));
	outFields->push(HX_HCSTRING("R32UI","\x05","\xae","\xb7","\x58"));
	outFields->push(HX_HCSTRING("RG8I","\x06","\x90","\x69","\x36"));
	outFields->push(HX_HCSTRING("RG8UI","\xf7","\x7f","\xf4","\x65"));
	outFields->push(HX_HCSTRING("RG16I","\x2f","\x15","\xef","\x65"));
	outFields->push(HX_HCSTRING("RG16UI","\xae","\x7e","\x43","\xcb"));
	outFields->push(HX_HCSTRING("RG32I","\x35","\x96","\xf0","\x65"));
	outFields->push(HX_HCSTRING("RG32UI","\xe8","\xe2","\x92","\xcc"));
	outFields->push(HX_HCSTRING("R8_SNORM","\x76","\xd3","\xce","\x64"));
	outFields->push(HX_HCSTRING("RG8_SNORM","\x73","\x8e","\xf7","\x80"));
	outFields->push(HX_HCSTRING("RGB8_SNORM","\x3b","\x36","\x76","\xea"));
	outFields->push(HX_HCSTRING("RGBA8_SNORM","\x54","\xeb","\x97","\x96"));
	outFields->push(HX_HCSTRING("RGB10_A2UI","\xb8","\x32","\xbb","\xdc"));
	outFields->push(HX_HCSTRING("TEXTURE_IMMUTABLE_FORMAT","\x38","\x2c","\x95","\x5e"));
	outFields->push(HX_HCSTRING("TEXTURE_IMMUTABLE_LEVELS","\x70","\x5b","\x56","\x05"));
	outFields->push(HX_HCSTRING("UNSIGNED_INT_2_10_10_10_REV","\x0a","\x41","\x8d","\xb2"));
	outFields->push(HX_HCSTRING("UNSIGNED_INT_10F_11F_11F_REV","\x5f","\x56","\xed","\x03"));
	outFields->push(HX_HCSTRING("UNSIGNED_INT_5_9_9_9_REV","\xed","\xec","\x63","\xc7"));
	outFields->push(HX_HCSTRING("FLOAT_32_UNSIGNED_INT_24_8_REV","\xfc","\xa5","\x51","\x95"));
	outFields->push(HX_HCSTRING("UNSIGNED_INT_24_8","\xb5","\x57","\xd6","\xd9"));
	outFields->push(HX_HCSTRING("HALF_FLOAT","\xb0","\xfe","\x81","\x7a"));
	outFields->push(HX_HCSTRING("RG","\xb5","\x47","\x00","\x00"));
	outFields->push(HX_HCSTRING("RG_INTEGER","\xd4","\x6f","\x76","\xe9"));
	outFields->push(HX_HCSTRING("INT_2_10_10_10_REV","\xc0","\x20","\x1e","\xcf"));
	outFields->push(HX_HCSTRING("CURRENT_QUERY","\x02","\x13","\x44","\xba"));
	outFields->push(HX_HCSTRING("QUERY_RESULT","\x94","\x10","\xd9","\x08"));
	outFields->push(HX_HCSTRING("QUERY_RESULT_AVAILABLE","\xfe","\x56","\xe1","\x27"));
	outFields->push(HX_HCSTRING("ANY_SAMPLES_PASSED","\x99","\x0e","\xa3","\x86"));
	outFields->push(HX_HCSTRING("ANY_SAMPLES_PASSED_CONSERVATIVE","\x53","\x18","\xb7","\x3e"));
	outFields->push(HX_HCSTRING("MAX_DRAW_BUFFERS","\xb3","\x92","\x8a","\x37"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER0","\xb5","\x68","\x27","\xac"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER1","\xb6","\x68","\x27","\xac"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER2","\xb7","\x68","\x27","\xac"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER3","\xb8","\x68","\x27","\xac"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER4","\xb9","\x68","\x27","\xac"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER5","\xba","\x68","\x27","\xac"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER6","\xbb","\x68","\x27","\xac"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER7","\xbc","\x68","\x27","\xac"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER8","\xbd","\x68","\x27","\xac"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER9","\xbe","\x68","\x27","\xac"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER10","\xba","\x36","\x54","\xf6"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER11","\xbb","\x36","\x54","\xf6"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER12","\xbc","\x36","\x54","\xf6"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER13","\xbd","\x36","\x54","\xf6"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER14","\xbe","\x36","\x54","\xf6"));
	outFields->push(HX_HCSTRING("DRAW_BUFFER15","\xbf","\x36","\x54","\xf6"));
	outFields->push(HX_HCSTRING("MAX_COLOR_ATTACHMENTS","\x19","\xd7","\xae","\x06"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT1","\xb2","\x9a","\xfe","\x86"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT2","\xb3","\x9a","\xfe","\x86"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT3","\xb4","\x9a","\xfe","\x86"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT4","\xb5","\x9a","\xfe","\x86"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT5","\xb6","\x9a","\xfe","\x86"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT6","\xb7","\x9a","\xfe","\x86"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT7","\xb8","\x9a","\xfe","\x86"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT8","\xb9","\x9a","\xfe","\x86"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT9","\xba","\x9a","\xfe","\x86"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT10","\x3e","\xc1","\xc8","\x97"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT11","\x3f","\xc1","\xc8","\x97"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT12","\x40","\xc1","\xc8","\x97"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT13","\x41","\xc1","\xc8","\x97"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT14","\x42","\xc1","\xc8","\x97"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT15","\x43","\xc1","\xc8","\x97"));
	outFields->push(HX_HCSTRING("SAMPLER_3D","\xe8","\x2a","\x93","\x6e"));
	outFields->push(HX_HCSTRING("SAMPLER_2D_SHADOW","\x96","\x9e","\x66","\x61"));
	outFields->push(HX_HCSTRING("SAMPLER_2D_ARRAY","\x83","\xc3","\xf4","\xb9"));
	outFields->push(HX_HCSTRING("SAMPLER_2D_ARRAY_SHADOW","\x5c","\x88","\x64","\x1c"));
	outFields->push(HX_HCSTRING("SAMPLER_CUBE_SHADOW","\x13","\x3c","\xfd","\xff"));
	outFields->push(HX_HCSTRING("INT_SAMPLER_2D","\xb9","\xf2","\xff","\x97"));
	outFields->push(HX_HCSTRING("INT_SAMPLER_3D","\x98","\xf3","\xff","\x97"));
	outFields->push(HX_HCSTRING("INT_SAMPLER_CUBE","\x9c","\x93","\x36","\x99"));
	outFields->push(HX_HCSTRING("INT_SAMPLER_2D_ARRAY","\x33","\x30","\xe9","\x17"));
	outFields->push(HX_HCSTRING("UNSIGNED_INT_SAMPLER_2D","\x03","\xa6","\xf2","\xc4"));
	outFields->push(HX_HCSTRING("UNSIGNED_INT_SAMPLER_3D","\xe2","\xa6","\xf2","\xc4"));
	outFields->push(HX_HCSTRING("UNSIGNED_INT_SAMPLER_CUBE","\x66","\x2d","\xb4","\xee"));
	outFields->push(HX_HCSTRING("UNSIGNED_INT_SAMPLER_2D_ARRAY","\xfd","\x76","\x98","\x0d"));
	outFields->push(HX_HCSTRING("MAX_SAMPLES","\xee","\xbc","\x20","\x56"));
	outFields->push(HX_HCSTRING("SAMPLER_BINDING","\x8e","\x79","\x76","\x22"));
	outFields->push(HX_HCSTRING("PIXEL_PACK_BUFFER","\x4d","\x06","\x41","\x84"));
	outFields->push(HX_HCSTRING("PIXEL_UNPACK_BUFFER","\x54","\x80","\x91","\x31"));
	outFields->push(HX_HCSTRING("PIXEL_PACK_BUFFER_BINDING","\xf3","\x53","\x0d","\x81"));
	outFields->push(HX_HCSTRING("PIXEL_UNPACK_BUFFER_BINDING","\xfa","\xac","\x01","\xcf"));
	outFields->push(HX_HCSTRING("COPY_READ_BUFFER","\x3f","\x8b","\xf1","\x64"));
	outFields->push(HX_HCSTRING("COPY_WRITE_BUFFER","\xca","\x9d","\xe5","\xe4"));
	outFields->push(HX_HCSTRING("COPY_READ_BUFFER_BINDING","\xe5","\x1a","\x17","\x74"));
	outFields->push(HX_HCSTRING("COPY_WRITE_BUFFER_BINDING","\x70","\x30","\x81","\x8a"));
	outFields->push(HX_HCSTRING("FLOAT_MAT2x3","\x90","\xbe","\xdd","\xc3"));
	outFields->push(HX_HCSTRING("FLOAT_MAT2x4","\x91","\xbe","\xdd","\xc3"));
	outFields->push(HX_HCSTRING("FLOAT_MAT3x2","\xd0","\x80","\xde","\xc3"));
	outFields->push(HX_HCSTRING("FLOAT_MAT3x4","\xd2","\x80","\xde","\xc3"));
	outFields->push(HX_HCSTRING("FLOAT_MAT4x2","\x11","\x43","\xdf","\xc3"));
	outFields->push(HX_HCSTRING("FLOAT_MAT4x3","\x12","\x43","\xdf","\xc3"));
	outFields->push(HX_HCSTRING("UNSIGNED_INT_VEC2","\xf8","\xd3","\xae","\xf1"));
	outFields->push(HX_HCSTRING("UNSIGNED_INT_VEC3","\xf9","\xd3","\xae","\xf1"));
	outFields->push(HX_HCSTRING("UNSIGNED_INT_VEC4","\xfa","\xd3","\xae","\xf1"));
	outFields->push(HX_HCSTRING("UNSIGNED_NORMALIZED","\x81","\x9e","\xe9","\xb5"));
	outFields->push(HX_HCSTRING("SIGNED_NORMALIZED","\xfa","\x1c","\x1f","\x6e"));
	outFields->push(HX_HCSTRING("VERTEX_ATTRIB_ARRAY_INTEGER","\x9e","\x52","\xf4","\xfe"));
	outFields->push(HX_HCSTRING("VERTEX_ATTRIB_ARRAY_DIVISOR","\x3e","\x5a","\xbb","\x58"));
	outFields->push(HX_HCSTRING("TRANSFORM_FEEDBACK_BUFFER_MODE","\x5b","\x21","\x21","\x18"));
	outFields->push(HX_HCSTRING("MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS","\x66","\x0f","\xc1","\x2a"));
	outFields->push(HX_HCSTRING("TRANSFORM_FEEDBACK_VARYINGS","\x4a","\x49","\xb8","\x8f"));
	outFields->push(HX_HCSTRING("TRANSFORM_FEEDBACK_BUFFER_START","\x4a","\x5f","\x8f","\x7c"));
	outFields->push(HX_HCSTRING("TRANSFORM_FEEDBACK_BUFFER_SIZE","\xb9","\xee","\x13","\x1c"));
	outFields->push(HX_HCSTRING("TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN","\x2b","\xe6","\xb6","\x9f"));
	outFields->push(HX_HCSTRING("MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS","\x18","\x9a","\x28","\x79"));
	outFields->push(HX_HCSTRING("MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS","\x79","\x55","\x1c","\x52"));
	outFields->push(HX_HCSTRING("INTERLEAVED_ATTRIBS","\xd3","\x03","\x58","\xcf"));
	outFields->push(HX_HCSTRING("SEPARATE_ATTRIBS","\xad","\xf1","\x7d","\xf6"));
	outFields->push(HX_HCSTRING("TRANSFORM_FEEDBACK_BUFFER","\x87","\xcc","\xfb","\xc7"));
	outFields->push(HX_HCSTRING("TRANSFORM_FEEDBACK_BUFFER_BINDING","\x2d","\xe4","\xaf","\x90"));
	outFields->push(HX_HCSTRING("TRANSFORM_FEEDBACK","\x18","\x81","\xaf","\x95"));
	outFields->push(HX_HCSTRING("TRANSFORM_FEEDBACK_PAUSED","\x35","\x50","\xeb","\xe6"));
	outFields->push(HX_HCSTRING("TRANSFORM_FEEDBACK_ACTIVE","\x4d","\x51","\xad","\x0d"));
	outFields->push(HX_HCSTRING("TRANSFORM_FEEDBACK_BINDING","\xbe","\x11","\xf4","\x01"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING","\x79","\xc9","\x9d","\x03"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE","\xc6","\x3b","\x6e","\x90"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_RED_SIZE","\x39","\x51","\x04","\xf1"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_GREEN_SIZE","\x07","\x31","\x24","\x91"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_BLUE_SIZE","\x1c","\x15","\x11","\xa1"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE","\x8c","\x86","\x04","\xdd"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE","\xc7","\x26","\xcb","\x18"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE","\xae","\x65","\x3b","\x9a"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_DEFAULT","\xef","\x3b","\x45","\xe2"));
	outFields->push(HX_HCSTRING("DEPTH24_STENCIL8","\x36","\x5e","\xb6","\xa6"));
	outFields->push(HX_HCSTRING("DRAW_FRAMEBUFFER_BINDING","\x78","\x93","\x98","\xce"));
	outFields->push(HX_HCSTRING("READ_FRAMEBUFFER","\x24","\x8b","\xf0","\xa0"));
	outFields->push(HX_HCSTRING("DRAW_FRAMEBUFFER","\xd2","\xb8","\x5e","\x7a"));
	outFields->push(HX_HCSTRING("READ_FRAMEBUFFER_BINDING","\xca","\x07","\xa0","\x07"));
	outFields->push(HX_HCSTRING("RENDERBUFFER_SAMPLES","\x40","\x5d","\x0c","\x28"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER","\x43","\x08","\x18","\x7f"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE","\x54","\xd0","\xf2","\xd0"));
	outFields->push(HX_HCSTRING("UNIFORM_BUFFER","\x0b","\xf0","\xa3","\xee"));
	outFields->push(HX_HCSTRING("UNIFORM_BUFFER_BINDING","\xb1","\x2b","\x2d","\x65"));
	outFields->push(HX_HCSTRING("UNIFORM_BUFFER_START","\xce","\xfd","\x84","\xf1"));
	outFields->push(HX_HCSTRING("UNIFORM_BUFFER_SIZE","\xb5","\x8c","\x28","\x19"));
	outFields->push(HX_HCSTRING("MAX_VERTEX_UNIFORM_BLOCKS","\x11","\x56","\x73","\xa0"));
	outFields->push(HX_HCSTRING("MAX_FRAGMENT_UNIFORM_BLOCKS","\x65","\x42","\x83","\x5d"));
	outFields->push(HX_HCSTRING("MAX_COMBINED_UNIFORM_BLOCKS","\xd0","\xc0","\xcb","\xe7"));
	outFields->push(HX_HCSTRING("MAX_UNIFORM_BUFFER_BINDINGS","\x87","\x4d","\x27","\xc3"));
	outFields->push(HX_HCSTRING("MAX_UNIFORM_BLOCK_SIZE","\xf9","\xdc","\x3f","\x6c"));
	outFields->push(HX_HCSTRING("MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS","\xfd","\x37","\x15","\xe3"));
	outFields->push(HX_HCSTRING("MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS","\x51","\x0d","\x19","\x43"));
	outFields->push(HX_HCSTRING("UNIFORM_BUFFER_OFFSET_ALIGNMENT","\xcb","\xa9","\xf8","\xcc"));
	outFields->push(HX_HCSTRING("ACTIVE_UNIFORM_BLOCKS","\x2a","\x2b","\xe3","\x0c"));
	outFields->push(HX_HCSTRING("UNIFORM_TYPE","\x05","\xd9","\x59","\x48"));
	outFields->push(HX_HCSTRING("UNIFORM_SIZE","\x0c","\x87","\xa4","\x47"));
	outFields->push(HX_HCSTRING("UNIFORM_BLOCK_INDEX","\x35","\x78","\x71","\x93"));
	outFields->push(HX_HCSTRING("UNIFORM_OFFSET","\x9e","\xca","\x4e","\x7e"));
	outFields->push(HX_HCSTRING("UNIFORM_ARRAY_STRIDE","\xaa","\xaa","\x4a","\x6c"));
	outFields->push(HX_HCSTRING("UNIFORM_MATRIX_STRIDE","\xec","\x75","\xfb","\xfc"));
	outFields->push(HX_HCSTRING("UNIFORM_IS_ROW_MAJOR","\x4a","\xd7","\x8e","\xf1"));
	outFields->push(HX_HCSTRING("UNIFORM_BLOCK_BINDING","\x28","\x1b","\x56","\x0b"));
	outFields->push(HX_HCSTRING("UNIFORM_BLOCK_DATA_SIZE","\xf9","\xd0","\x4f","\x72"));
	outFields->push(HX_HCSTRING("UNIFORM_BLOCK_ACTIVE_UNIFORMS","\x9b","\x74","\x7f","\x6e"));
	outFields->push(HX_HCSTRING("UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES","\x40","\x99","\x27","\x7e"));
	outFields->push(HX_HCSTRING("UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER","\xc1","\x8d","\xd1","\xe0"));
	outFields->push(HX_HCSTRING("UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER","\x15","\xc5","\x8f","\xaf"));
	outFields->push(HX_HCSTRING("OBJECT_TYPE","\x7a","\x57","\x2a","\x1f"));
	outFields->push(HX_HCSTRING("SYNC_CONDITION","\x57","\xf7","\xd5","\x73"));
	outFields->push(HX_HCSTRING("SYNC_STATUS","\xd6","\xf3","\xb7","\x06"));
	outFields->push(HX_HCSTRING("SYNC_FLAGS","\x03","\xe3","\xf0","\x79"));
	outFields->push(HX_HCSTRING("SYNC_FENCE","\x6d","\x3e","\x5a","\x75"));
	outFields->push(HX_HCSTRING("SYNC_GPU_COMMANDS_COMPLETE","\xf9","\x23","\x65","\x18"));
	outFields->push(HX_HCSTRING("UNSIGNALED","\x20","\x4c","\x0a","\xfd"));
	outFields->push(HX_HCSTRING("SIGNALED","\xc7","\x80","\xc2","\xde"));
	outFields->push(HX_HCSTRING("ALREADY_SIGNALED","\xae","\xdd","\x3f","\xe3"));
	outFields->push(HX_HCSTRING("TIMEOUT_EXPIRED","\x87","\x64","\x05","\xcd"));
	outFields->push(HX_HCSTRING("CONDITION_SATISFIED","\xce","\xa6","\x40","\xb0"));
	outFields->push(HX_HCSTRING("WAIT_FAILED","\x87","\xc9","\xdb","\x92"));
	outFields->push(HX_HCSTRING("SYNC_FLUSH_COMMANDS_BIT","\xd5","\xc6","\x2c","\xc7"));
	outFields->push(HX_HCSTRING("COLOR","\x43","\xa9","\x4a","\xc8"));
	outFields->push(HX_HCSTRING("DEPTH","\xe3","\x28","\x18","\x55"));
	outFields->push(HX_HCSTRING("STENCIL","\xdc","\x91","\xd7","\xff"));
	outFields->push(HX_HCSTRING("MIN","\x72","\xad","\x3a","\x00"));
	outFields->push(HX_HCSTRING("MAX","\x84","\xa6","\x3a","\x00"));
	outFields->push(HX_HCSTRING("DEPTH_COMPONENT24","\x03","\xcd","\x68","\x43"));
	outFields->push(HX_HCSTRING("STREAM_READ","\xb5","\x9e","\x5f","\x1e"));
	outFields->push(HX_HCSTRING("STREAM_COPY","\x14","\x0f","\x7d","\x14"));
	outFields->push(HX_HCSTRING("STATIC_READ","\xc7","\x6f","\x66","\xc3"));
	outFields->push(HX_HCSTRING("STATIC_COPY","\x26","\xe0","\x83","\xb9"));
	outFields->push(HX_HCSTRING("DYNAMIC_READ","\x76","\x23","\x56","\x2d"));
	outFields->push(HX_HCSTRING("DYNAMIC_COPY","\xd5","\x93","\x73","\x23"));
	outFields->push(HX_HCSTRING("DEPTH_COMPONENT32F","\x66","\x56","\x4b","\xb8"));
	outFields->push(HX_HCSTRING("DEPTH32F_STENCIL8","\xf7","\x07","\xb2","\x83"));
	outFields->push(HX_HCSTRING("INVALID_INDEX","\x4a","\x04","\x83","\x3c"));
	outFields->push(HX_HCSTRING("TIMEOUT_IGNORED","\xf4","\x3b","\x74","\x84"));
	outFields->push(HX_HCSTRING("MAX_CLIENT_WAIT_TIMEOUT_WEBGL","\x8a","\x37","\x14","\xd5"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));
	outFields->push(HX_HCSTRING("__arrayBufferBinding","\xec","\xc7","\xf6","\x4e"));
	outFields->push(HX_HCSTRING("__elementBufferBinding","\xe9","\x54","\x64","\x1f"));
	outFields->push(HX_HCSTRING("__contextID","\x6a","\xb8","\x28","\x45"));
	outFields->push(HX_HCSTRING("__currentProgram","\x6b","\x4a","\xcd","\x35"));
	outFields->push(HX_HCSTRING("__framebufferBinding","\xf8","\x60","\x08","\xef"));
	outFields->push(HX_HCSTRING("__initialized","\xf4","\x35","\x88","\x7f"));
	outFields->push(HX_HCSTRING("__isContextLost","\x89","\x18","\x92","\xb5"));
	outFields->push(HX_HCSTRING("__renderbufferBinding","\xef","\x6d","\xe9","\x2f"));
	outFields->push(HX_HCSTRING("__texture2DBinding","\x78","\xdc","\x16","\x4f"));
	outFields->push(HX_HCSTRING("__textureCubeMapBinding","\x79","\x78","\xa4","\xc8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DEPTH_BUFFER_BIT),HX_HCSTRING("DEPTH_BUFFER_BIT","\xca","\x5b","\xce","\xc6")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STENCIL_BUFFER_BIT),HX_HCSTRING("STENCIL_BUFFER_BIT","\x71","\x93","\x29","\xde")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,COLOR_BUFFER_BIT),HX_HCSTRING("COLOR_BUFFER_BIT","\x6a","\xf7","\x74","\xfb")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,POINTS),HX_HCSTRING("POINTS","\x23","\xbe","\xb0","\xa9")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,LINES),HX_HCSTRING("LINES","\xdf","\x15","\xf0","\xf2")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,LINE_LOOP),HX_HCSTRING("LINE_LOOP","\xcf","\x55","\xc1","\x16")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,LINE_STRIP),HX_HCSTRING("LINE_STRIP","\xed","\x20","\x88","\xdd")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TRIANGLES),HX_HCSTRING("TRIANGLES","\x8b","\xa0","\x99","\x7a")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TRIANGLE_STRIP),HX_HCSTRING("TRIANGLE_STRIP","\xc1","\x66","\x6c","\xf6")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TRIANGLE_FAN),HX_HCSTRING("TRIANGLE_FAN","\x7c","\xee","\x2e","\x91")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,ZERO),HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,ONE),HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SRC_COLOR),HX_HCSTRING("SRC_COLOR","\x48","\x9e","\xbd","\x5c")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,ONE_MINUS_SRC_COLOR),HX_HCSTRING("ONE_MINUS_SRC_COLOR","\x20","\x3b","\xe1","\x48")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SRC_ALPHA),HX_HCSTRING("SRC_ALPHA","\x43","\xd4","\xf7","\x33")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,ONE_MINUS_SRC_ALPHA),HX_HCSTRING("ONE_MINUS_SRC_ALPHA","\x1b","\x71","\x1b","\x20")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DST_ALPHA),HX_HCSTRING("DST_ALPHA","\x24","\x02","\xf2","\xd3")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,ONE_MINUS_DST_ALPHA),HX_HCSTRING("ONE_MINUS_DST_ALPHA","\xfc","\x9e","\x15","\xc0")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DST_COLOR),HX_HCSTRING("DST_COLOR","\x29","\xcc","\xb7","\xfc")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,ONE_MINUS_DST_COLOR),HX_HCSTRING("ONE_MINUS_DST_COLOR","\x01","\x69","\xdb","\xe8")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SRC_ALPHA_SATURATE),HX_HCSTRING("SRC_ALPHA_SATURATE","\xab","\xe2","\x3d","\x33")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FUNC_ADD),HX_HCSTRING("FUNC_ADD","\x46","\x78","\x17","\x75")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,BLEND_EQUATION),HX_HCSTRING("BLEND_EQUATION","\x9a","\x14","\x92","\x71")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,BLEND_EQUATION_RGB),HX_HCSTRING("BLEND_EQUATION_RGB","\x88","\x25","\xeb","\x90")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,BLEND_EQUATION_ALPHA),HX_HCSTRING("BLEND_EQUATION_ALPHA","\x99","\xaa","\xae","\x37")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FUNC_SUBTRACT),HX_HCSTRING("FUNC_SUBTRACT","\xaf","\xc0","\xa0","\x17")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FUNC_REVERSE_SUBTRACT),HX_HCSTRING("FUNC_REVERSE_SUBTRACT","\xcc","\x8d","\xef","\xf3")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,BLEND_DST_RGB),HX_HCSTRING("BLEND_DST_RGB","\x05","\x87","\xf5","\xec")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,BLEND_SRC_RGB),HX_HCSTRING("BLEND_SRC_RGB","\x64","\x43","\x8c","\x2c")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,BLEND_DST_ALPHA),HX_HCSTRING("BLEND_DST_ALPHA","\x56","\x25","\x32","\x74")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,BLEND_SRC_ALPHA),HX_HCSTRING("BLEND_SRC_ALPHA","\x75","\xf7","\x37","\xd4")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,CONSTANT_COLOR),HX_HCSTRING("CONSTANT_COLOR","\xe8","\x64","\x8a","\xc8")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,ONE_MINUS_CONSTANT_COLOR),HX_HCSTRING("ONE_MINUS_CONSTANT_COLOR","\x10","\x39","\xe7","\x06")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,CONSTANT_ALPHA),HX_HCSTRING("CONSTANT_ALPHA","\xe3","\x9a","\xc4","\x9f")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,ONE_MINUS_CONSTANT_ALPHA),HX_HCSTRING("ONE_MINUS_CONSTANT_ALPHA","\x0b","\x6f","\x21","\xde")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,BLEND_COLOR),HX_HCSTRING("BLEND_COLOR","\x75","\xcb","\xc8","\x67")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,ARRAY_BUFFER),HX_HCSTRING("ARRAY_BUFFER","\x46","\x66","\x17","\xf4")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,ELEMENT_ARRAY_BUFFER),HX_HCSTRING("ELEMENT_ARRAY_BUFFER","\x09","\x05","\x53","\x3d")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,ARRAY_BUFFER_BINDING),HX_HCSTRING("ARRAY_BUFFER_BINDING","\xec","\xd4","\xa9","\x79")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,ELEMENT_ARRAY_BUFFER_BINDING),HX_HCSTRING("ELEMENT_ARRAY_BUFFER_BINDING","\xaf","\x6e","\x96","\xa2")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STREAM_DRAW),HX_HCSTRING("STREAM_DRAW","\x63","\x7f","\x28","\x15")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STATIC_DRAW),HX_HCSTRING("STATIC_DRAW","\x75","\x50","\x2f","\xba")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DYNAMIC_DRAW),HX_HCSTRING("DYNAMIC_DRAW","\x24","\x04","\x1f","\x24")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,BUFFER_SIZE),HX_HCSTRING("BUFFER_SIZE","\xa0","\x7b","\x91","\x4c")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,BUFFER_USAGE),HX_HCSTRING("BUFFER_USAGE","\x42","\x05","\x11","\xe0")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,CURRENT_VERTEX_ATTRIB),HX_HCSTRING("CURRENT_VERTEX_ATTRIB","\x1f","\x8c","\x2f","\xab")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FRONT),HX_HCSTRING("FRONT","\x89","\x50","\x7c","\x84")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,BACK),HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FRONT_AND_BACK),HX_HCSTRING("FRONT_AND_BACK","\xa5","\x3d","\x6a","\xc1")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE_2D),HX_HCSTRING("TEXTURE_2D","\x16","\x0c","\xf8","\xa2")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,CULL_FACE),HX_HCSTRING("CULL_FACE","\x8a","\xa5","\xf4","\xcf")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,BLEND),HX_HCSTRING("BLEND","\x31","\x20","\xe3","\x32")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DITHER),HX_HCSTRING("DITHER","\xe6","\xac","\x41","\x70")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STENCIL_TEST),HX_HCSTRING("STENCIL_TEST","\xd5","\xdc","\x69","\xd5")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DEPTH_TEST),HX_HCSTRING("DEPTH_TEST","\x6e","\x6c","\x25","\x28")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SCISSOR_TEST),HX_HCSTRING("SCISSOR_TEST","\xb5","\xbe","\x51","\x59")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,POLYGON_OFFSET_FILL),HX_HCSTRING("POLYGON_OFFSET_FILL","\x4a","\x3d","\x32","\xac")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SAMPLE_ALPHA_TO_COVERAGE),HX_HCSTRING("SAMPLE_ALPHA_TO_COVERAGE","\x16","\x3e","\x56","\xe1")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SAMPLE_COVERAGE),HX_HCSTRING("SAMPLE_COVERAGE","\xdd","\xb7","\x0e","\xc1")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,NO_ERROR),HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,INVALID_ENUM),HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,INVALID_VALUE),HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,INVALID_OPERATION),HX_HCSTRING("INVALID_OPERATION","\x5f","\xb1","\xc8","\x29")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,OUT_OF_MEMORY),HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,CW),HX_HCSTRING("CW","\xb4","\x3a","\x00","\x00")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,CCW),HX_HCSTRING("CCW","\xb7","\x11","\x33","\x00")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,LINE_WIDTH),HX_HCSTRING("LINE_WIDTH","\x1b","\x84","\xd2","\x23")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,ALIASED_POINT_SIZE_RANGE),HX_HCSTRING("ALIASED_POINT_SIZE_RANGE","\xfe","\xf6","\xa4","\x7b")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,ALIASED_LINE_WIDTH_RANGE),HX_HCSTRING("ALIASED_LINE_WIDTH_RANGE","\xe9","\x22","\xd5","\x8a")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,CULL_FACE_MODE),HX_HCSTRING("CULL_FACE_MODE","\x78","\xbd","\x87","\xd1")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FRONT_FACE),HX_HCSTRING("FRONT_FACE","\x53","\xb7","\x4d","\xef")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DEPTH_RANGE),HX_HCSTRING("DEPTH_RANGE","\x01","\x9a","\x23","\xcf")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DEPTH_WRITEMASK),HX_HCSTRING("DEPTH_WRITEMASK","\x8f","\x37","\x3f","\x66")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DEPTH_CLEAR_VALUE),HX_HCSTRING("DEPTH_CLEAR_VALUE","\x23","\x17","\x0d","\x1b")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DEPTH_FUNC),HX_HCSTRING("DEPTH_FUNC","\x60","\x8f","\xf0","\x1e")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STENCIL_CLEAR_VALUE),HX_HCSTRING("STENCIL_CLEAR_VALUE","\x9c","\x91","\x82","\x73")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STENCIL_FUNC),HX_HCSTRING("STENCIL_FUNC","\xc7","\xff","\x34","\xcc")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STENCIL_FAIL),HX_HCSTRING("STENCIL_FAIL","\x61","\xce","\x25","\xcc")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STENCIL_PASS_DEPTH_FAIL),HX_HCSTRING("STENCIL_PASS_DEPTH_FAIL","\x45","\xca","\xb9","\xc8")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STENCIL_PASS_DEPTH_PASS),HX_HCSTRING("STENCIL_PASS_DEPTH_PASS","\x38","\xf5","\x55","\xcf")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STENCIL_REF),HX_HCSTRING("STENCIL_REF","\x10","\x6a","\xa5","\x3c")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STENCIL_VALUE_MASK),HX_HCSTRING("STENCIL_VALUE_MASK","\x9d","\x58","\x5e","\xa0")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STENCIL_WRITEMASK),HX_HCSTRING("STENCIL_WRITEMASK","\xc8","\xf1","\xa6","\x49")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STENCIL_BACK_FUNC),HX_HCSTRING("STENCIL_BACK_FUNC","\x39","\x78","\xa2","\x90")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STENCIL_BACK_FAIL),HX_HCSTRING("STENCIL_BACK_FAIL","\xd3","\x46","\x93","\x90")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STENCIL_BACK_PASS_DEPTH_FAIL),HX_HCSTRING("STENCIL_BACK_PASS_DEPTH_FAIL","\x13","\x23","\x0e","\x34")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STENCIL_BACK_PASS_DEPTH_PASS),HX_HCSTRING("STENCIL_BACK_PASS_DEPTH_PASS","\x06","\x4e","\xaa","\x3a")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STENCIL_BACK_REF),HX_HCSTRING("STENCIL_BACK_REF","\xde","\x45","\xb8","\x08")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STENCIL_BACK_VALUE_MASK),HX_HCSTRING("STENCIL_BACK_VALUE_MASK","\x8f","\xb2","\xc4","\x88")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STENCIL_BACK_WRITEMASK),HX_HCSTRING("STENCIL_BACK_WRITEMASK","\x16","\x9c","\x15","\xc2")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,VIEWPORT),HX_HCSTRING("VIEWPORT","\x66","\xdc","\x2a","\xf6")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SCISSOR_BOX),HX_HCSTRING("SCISSOR_BOX","\xe8","\x48","\x4c","\x55")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,COLOR_CLEAR_VALUE),HX_HCSTRING("COLOR_CLEAR_VALUE","\x83","\xa7","\x2e","\xf8")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,COLOR_WRITEMASK),HX_HCSTRING("COLOR_WRITEMASK","\xef","\xef","\xf9","\x14")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNPACK_ALIGNMENT),HX_HCSTRING("UNPACK_ALIGNMENT","\xb6","\x2a","\x2e","\x4b")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,PACK_ALIGNMENT),HX_HCSTRING("PACK_ALIGNMENT","\x9d","\xd6","\x85","\xc3")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_TEXTURE_SIZE),HX_HCSTRING("MAX_TEXTURE_SIZE","\xe0","\x0b","\x5b","\xfb")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_VIEWPORT_DIMS),HX_HCSTRING("MAX_VIEWPORT_DIMS","\xa9","\x2d","\xfb","\x08")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SUBPIXEL_BITS),HX_HCSTRING("SUBPIXEL_BITS","\x1f","\xac","\x14","\x0a")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RED_BITS),HX_HCSTRING("RED_BITS","\x14","\xf8","\x9e","\x96")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,GREEN_BITS),HX_HCSTRING("GREEN_BITS","\x62","\xa9","\x9b","\x94")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,BLUE_BITS),HX_HCSTRING("BLUE_BITS","\x0b","\x26","\x60","\xa1")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,ALPHA_BITS),HX_HCSTRING("ALPHA_BITS","\xe7","\xfe","\x7b","\xe0")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DEPTH_BITS),HX_HCSTRING("DEPTH_BITS","\x22","\x9f","\x42","\x1c")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STENCIL_BITS),HX_HCSTRING("STENCIL_BITS","\x89","\x0f","\x87","\xc9")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,POLYGON_OFFSET_UNITS),HX_HCSTRING("POLYGON_OFFSET_UNITS","\xa8","\xe8","\x11","\xa6")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,POLYGON_OFFSET_FACTOR),HX_HCSTRING("POLYGON_OFFSET_FACTOR","\x56","\x6b","\x12","\x2a")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE_BINDING_2D),HX_HCSTRING("TEXTURE_BINDING_2D","\x30","\xec","\x98","\xb1")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SAMPLE_BUFFERS),HX_HCSTRING("SAMPLE_BUFFERS","\xfe","\x16","\x71","\x3c")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SAMPLES),HX_HCSTRING("SAMPLES","\xe9","\x98","\x9d","\x03")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SAMPLE_COVERAGE_VALUE),HX_HCSTRING("SAMPLE_COVERAGE_VALUE","\x2f","\x7a","\x07","\x69")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SAMPLE_COVERAGE_INVERT),HX_HCSTRING("SAMPLE_COVERAGE_INVERT","\x78","\x52","\xa5","\xcd")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,NUM_COMPRESSED_TEXTURE_FORMATS),HX_HCSTRING("NUM_COMPRESSED_TEXTURE_FORMATS","\x33","\xae","\x1c","\x0d")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,COMPRESSED_TEXTURE_FORMATS),HX_HCSTRING("COMPRESSED_TEXTURE_FORMATS","\x7a","\x13","\xe3","\x12")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DONT_CARE),HX_HCSTRING("DONT_CARE","\x7f","\x9b","\xc1","\xcf")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FASTEST),HX_HCSTRING("FASTEST","\x0a","\xa3","\x0d","\x5e")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,NICEST),HX_HCSTRING("NICEST","\x7e","\x6d","\x94","\x64")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,GENERATE_MIPMAP_HINT),HX_HCSTRING("GENERATE_MIPMAP_HINT","\x94","\xd3","\xd5","\x83")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,BYTE),HX_HCSTRING("BYTE","\x08","\xe7","\xe3","\x2b")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNSIGNED_BYTE),HX_HCSTRING("UNSIGNED_BYTE","\xd2","\x79","\x6b","\x01")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SHORT),HX_HCSTRING("SHORT","\x5c","\xbc","\x15","\xfa")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNSIGNED_SHORT),HX_HCSTRING("UNSIGNED_SHORT","\x52","\x9a","\x2e","\xfb")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,INT),HX_HCSTRING("INT","\xcf","\xa8","\x37","\x00")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNSIGNED_INT),HX_HCSTRING("UNSIGNED_INT","\x45","\xfd","\xb9","\x1c")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FLOAT),HX_HCSTRING("FLOAT","\x7c","\xfd","\x84","\x80")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FIXED),HX_HCSTRING("FIXED","\x54","\x31","\x90","\x7e")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DEPTH_COMPONENT),HX_HCSTRING("DEPTH_COMPONENT","\x01","\x1f","\x62","\x0f")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,ALPHA),HX_HCSTRING("ALPHA","\x3e","\xdf","\x84","\x9f")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGB),HX_HCSTRING("RGB","\xed","\x76","\x3e","\x00")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGBA),HX_HCSTRING("RGBA","\xb4","\x98","\x69","\x36")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,LUMINANCE),HX_HCSTRING("LUMINANCE","\xd8","\xa7","\xe0","\x63")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,LUMINANCE_ALPHA),HX_HCSTRING("LUMINANCE_ALPHA","\x57","\x40","\xe0","\xbd")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNSIGNED_SHORT_4_4_4_4),HX_HCSTRING("UNSIGNED_SHORT_4_4_4_4","\xa6","\x33","\x71","\x7b")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNSIGNED_SHORT_5_5_5_1),HX_HCSTRING("UNSIGNED_SHORT_5_5_5_1","\x26","\x01","\x6e","\x38")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNSIGNED_SHORT_5_6_5),HX_HCSTRING("UNSIGNED_SHORT_5_6_5","\x75","\xbb","\x16","\x8c")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FRAGMENT_SHADER),HX_HCSTRING("FRAGMENT_SHADER","\xf4","\x26","\x78","\xe9")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,VERTEX_SHADER),HX_HCSTRING("VERTEX_SHADER","\xe0","\x69","\x73","\x49")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_VERTEX_ATTRIBS),HX_HCSTRING("MAX_VERTEX_ATTRIBS","\x49","\xc9","\x15","\x5f")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_VERTEX_UNIFORM_VECTORS),HX_HCSTRING("MAX_VERTEX_UNIFORM_VECTORS","\x45","\x6c","\x16","\x5a")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_VARYING_VECTORS),HX_HCSTRING("MAX_VARYING_VECTORS","\x06","\xb9","\xf7","\x37")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_COMBINED_TEXTURE_IMAGE_UNITS),HX_HCSTRING("MAX_COMBINED_TEXTURE_IMAGE_UNITS","\xa8","\xd1","\xa6","\x77")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_VERTEX_TEXTURE_IMAGE_UNITS),HX_HCSTRING("MAX_VERTEX_TEXTURE_IMAGE_UNITS","\xc7","\x90","\x95","\x2b")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_TEXTURE_IMAGE_UNITS),HX_HCSTRING("MAX_TEXTURE_IMAGE_UNITS","\xcc","\x6c","\x61","\x54")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_FRAGMENT_UNIFORM_VECTORS),HX_HCSTRING("MAX_FRAGMENT_UNIFORM_VECTORS","\x71","\x49","\xf5","\x0a")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SHADER_TYPE),HX_HCSTRING("SHADER_TYPE","\x54","\xe5","\x27","\x87")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DELETE_STATUS),HX_HCSTRING("DELETE_STATUS","\x06","\xe4","\x98","\x1e")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,LINK_STATUS),HX_HCSTRING("LINK_STATUS","\x17","\x18","\x8f","\x45")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,VALIDATE_STATUS),HX_HCSTRING("VALIDATE_STATUS","\xfb","\x22","\x07","\xc6")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,ATTACHED_SHADERS),HX_HCSTRING("ATTACHED_SHADERS","\x73","\xd2","\x76","\x75")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,ACTIVE_UNIFORMS),HX_HCSTRING("ACTIVE_UNIFORMS","\x98","\x7d","\x3a","\x2c")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,ACTIVE_UNIFORMS_MAX_LENGTH),HX_HCSTRING("ACTIVE_UNIFORMS_MAX_LENGTH","\x08","\xcb","\xc9","\x4d")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,ACTIVE_ATTRIBUTES),HX_HCSTRING("ACTIVE_ATTRIBUTES","\xf0","\xe5","\xc7","\x4a")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,ACTIVE_ATTRIBUTES_MAX_LENGTH),HX_HCSTRING("ACTIVE_ATTRIBUTES_MAX_LENGTH","\xb0","\x11","\xb3","\xae")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SHADING_LANGUAGE_VERSION),HX_HCSTRING("SHADING_LANGUAGE_VERSION","\xe6","\xc4","\xef","\x70")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,CURRENT_PROGRAM),HX_HCSTRING("CURRENT_PROGRAM","\xfe","\x28","\xc0","\x3f")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,NEVER),HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,LESS),HX_HCSTRING("LESS","\x59","\xdb","\x70","\x32")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,EQUAL),HX_HCSTRING("EQUAL","\x94","\x07","\x71","\xf0")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,LEQUAL),HX_HCSTRING("LEQUAL","\xc8","\x73","\x90","\x53")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,GREATER),HX_HCSTRING("GREATER","\xda","\x64","\x94","\x37")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,NOTEQUAL),HX_HCSTRING("NOTEQUAL","\xc1","\xc1","\xe9","\xc8")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,GEQUAL),HX_HCSTRING("GEQUAL","\xed","\xa5","\xc7","\x53")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,ALWAYS),HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,KEEP),HX_HCSTRING("KEEP","\x85","\x98","\xc7","\x31")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,REPLACE),HX_HCSTRING("REPLACE","\x14","\x1c","\xfc","\x2a")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,INCR),HX_HCSTRING("INCR","\xd4","\xfd","\x7b","\x30")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DECR),HX_HCSTRING("DECR","\x70","\x18","\x27","\x2d")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,INVERT),HX_HCSTRING("INVERT","\x16","\x93","\x5b","\x52")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,INCR_WRAP),HX_HCSTRING("INCR_WRAP","\x55","\x7f","\x68","\x2c")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DECR_WRAP),HX_HCSTRING("DECR_WRAP","\x39","\x6f","\xeb","\x0a")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,VENDOR),HX_HCSTRING("VENDOR","\x88","\x91","\x19","\x51")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RENDERER),HX_HCSTRING("RENDERER","\x43","\x55","\x61","\x0c")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,VERSION),HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,EXTENSIONS),HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,NEAREST),HX_HCSTRING("NEAREST","\x3e","\xec","\x9d","\xe5")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,LINEAR),HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,NEAREST_MIPMAP_NEAREST),HX_HCSTRING("NEAREST_MIPMAP_NEAREST","\x68","\xb9","\x63","\x7e")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,LINEAR_MIPMAP_NEAREST),HX_HCSTRING("LINEAR_MIPMAP_NEAREST","\xa1","\x9b","\xa4","\x65")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,NEAREST_MIPMAP_LINEAR),HX_HCSTRING("NEAREST_MIPMAP_LINEAR","\xfb","\x83","\xf2","\x3b")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,LINEAR_MIPMAP_LINEAR),HX_HCSTRING("LINEAR_MIPMAP_LINEAR","\xe2","\x8b","\xf8","\x99")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE_MAG_FILTER),HX_HCSTRING("TEXTURE_MAG_FILTER","\x88","\xff","\xd5","\x1e")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE_MIN_FILTER),HX_HCSTRING("TEXTURE_MIN_FILTER","\x69","\x66","\xc2","\x46")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE_WRAP_S),HX_HCSTRING("TEXTURE_WRAP_S","\xa2","\x2d","\xc3","\xfe")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE_WRAP_T),HX_HCSTRING("TEXTURE_WRAP_T","\xa3","\x2d","\xc3","\xfe")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE),HX_HCSTRING("TEXTURE","\xbb","\x9c","\xb4","\x1e")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE_CUBE_MAP),HX_HCSTRING("TEXTURE_CUBE_MAP","\x36","\x7a","\xe1","\xad")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE_BINDING_CUBE_MAP),HX_HCSTRING("TEXTURE_BINDING_CUBE_MAP","\xd0","\x69","\x98","\x75")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE_CUBE_MAP_POSITIVE_X),HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_X","\xbb","\x1c","\xee","\x24")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE_CUBE_MAP_NEGATIVE_X),HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_X","\x77","\x03","\xe2","\x6b")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE_CUBE_MAP_POSITIVE_Y),HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_Y","\xbc","\x1c","\xee","\x24")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE_CUBE_MAP_NEGATIVE_Y),HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Y","\x78","\x03","\xe2","\x6b")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE_CUBE_MAP_POSITIVE_Z),HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_Z","\xbd","\x1c","\xee","\x24")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE_CUBE_MAP_NEGATIVE_Z),HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Z","\x79","\x03","\xe2","\x6b")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_CUBE_MAP_TEXTURE_SIZE),HX_HCSTRING("MAX_CUBE_MAP_TEXTURE_SIZE","\x77","\xb9","\x24","\x9d")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE0),HX_HCSTRING("TEXTURE0","\x15","\x87","\x54","\xbf")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE1),HX_HCSTRING("TEXTURE1","\x16","\x87","\x54","\xbf")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE2),HX_HCSTRING("TEXTURE2","\x17","\x87","\x54","\xbf")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE3),HX_HCSTRING("TEXTURE3","\x18","\x87","\x54","\xbf")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE4),HX_HCSTRING("TEXTURE4","\x19","\x87","\x54","\xbf")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE5),HX_HCSTRING("TEXTURE5","\x1a","\x87","\x54","\xbf")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE6),HX_HCSTRING("TEXTURE6","\x1b","\x87","\x54","\xbf")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE7),HX_HCSTRING("TEXTURE7","\x1c","\x87","\x54","\xbf")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE8),HX_HCSTRING("TEXTURE8","\x1d","\x87","\x54","\xbf")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE9),HX_HCSTRING("TEXTURE9","\x1e","\x87","\x54","\xbf")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE10),HX_HCSTRING("TEXTURE10","\x5a","\xac","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE11),HX_HCSTRING("TEXTURE11","\x5b","\xac","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE12),HX_HCSTRING("TEXTURE12","\x5c","\xac","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE13),HX_HCSTRING("TEXTURE13","\x5d","\xac","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE14),HX_HCSTRING("TEXTURE14","\x5e","\xac","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE15),HX_HCSTRING("TEXTURE15","\x5f","\xac","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE16),HX_HCSTRING("TEXTURE16","\x60","\xac","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE17),HX_HCSTRING("TEXTURE17","\x61","\xac","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE18),HX_HCSTRING("TEXTURE18","\x62","\xac","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE19),HX_HCSTRING("TEXTURE19","\x63","\xac","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE20),HX_HCSTRING("TEXTURE20","\x39","\xad","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE21),HX_HCSTRING("TEXTURE21","\x3a","\xad","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE22),HX_HCSTRING("TEXTURE22","\x3b","\xad","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE23),HX_HCSTRING("TEXTURE23","\x3c","\xad","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE24),HX_HCSTRING("TEXTURE24","\x3d","\xad","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE25),HX_HCSTRING("TEXTURE25","\x3e","\xad","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE26),HX_HCSTRING("TEXTURE26","\x3f","\xad","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE27),HX_HCSTRING("TEXTURE27","\x40","\xad","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE28),HX_HCSTRING("TEXTURE28","\x41","\xad","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE29),HX_HCSTRING("TEXTURE29","\x42","\xad","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE30),HX_HCSTRING("TEXTURE30","\x18","\xae","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE31),HX_HCSTRING("TEXTURE31","\x19","\xae","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,ACTIVE_TEXTURE),HX_HCSTRING("ACTIVE_TEXTURE","\x02","\x1a","\x22","\xce")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,REPEAT),HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,CLAMP_TO_EDGE),HX_HCSTRING("CLAMP_TO_EDGE","\x1d","\xfc","\x5a","\x96")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MIRRORED_REPEAT),HX_HCSTRING("MIRRORED_REPEAT","\x5c","\x94","\x80","\x4a")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FLOAT_VEC2),HX_HCSTRING("FLOAT_VEC2","\x61","\xac","\xa4","\xeb")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FLOAT_VEC3),HX_HCSTRING("FLOAT_VEC3","\x62","\xac","\xa4","\xeb")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FLOAT_VEC4),HX_HCSTRING("FLOAT_VEC4","\x63","\xac","\xa4","\xeb")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,INT_VEC2),HX_HCSTRING("INT_VEC2","\x2e","\x14","\x05","\x7d")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,INT_VEC3),HX_HCSTRING("INT_VEC3","\x2f","\x14","\x05","\x7d")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,INT_VEC4),HX_HCSTRING("INT_VEC4","\x30","\x14","\x05","\x7d")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,BOOL),HX_HCSTRING("BOOL","\x2a","\x4c","\xdc","\x2b")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,BOOL_VEC2),HX_HCSTRING("BOOL_VEC2","\xf3","\x66","\x2b","\x2d")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,BOOL_VEC3),HX_HCSTRING("BOOL_VEC3","\xf4","\x66","\x2b","\x2d")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,BOOL_VEC4),HX_HCSTRING("BOOL_VEC4","\xf5","\x66","\x2b","\x2d")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FLOAT_MAT2),HX_HCSTRING("FLOAT_MAT2","\x95","\xc6","\xae","\xe5")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FLOAT_MAT3),HX_HCSTRING("FLOAT_MAT3","\x96","\xc6","\xae","\xe5")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FLOAT_MAT4),HX_HCSTRING("FLOAT_MAT4","\x97","\xc6","\xae","\xe5")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SAMPLER_2D),HX_HCSTRING("SAMPLER_2D","\x09","\x2a","\x93","\x6e")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SAMPLER_CUBE),HX_HCSTRING("SAMPLER_CUBE","\xec","\x3e","\x82","\xa4")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,VERTEX_ATTRIB_ARRAY_ENABLED),HX_HCSTRING("VERTEX_ATTRIB_ARRAY_ENABLED","\x61","\x99","\x09","\x66")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,VERTEX_ATTRIB_ARRAY_SIZE),HX_HCSTRING("VERTEX_ATTRIB_ARRAY_SIZE","\xc1","\x07","\xfd","\x08")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,VERTEX_ATTRIB_ARRAY_STRIDE),HX_HCSTRING("VERTEX_ATTRIB_ARRAY_STRIDE","\x19","\x2b","\x41","\x58")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,VERTEX_ATTRIB_ARRAY_TYPE),HX_HCSTRING("VERTEX_ATTRIB_ARRAY_TYPE","\xba","\x59","\xb2","\x09")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,VERTEX_ATTRIB_ARRAY_NORMALIZED),HX_HCSTRING("VERTEX_ATTRIB_ARRAY_NORMALIZED","\x37","\xb7","\x22","\x78")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,VERTEX_ATTRIB_ARRAY_POINTER),HX_HCSTRING("VERTEX_ATTRIB_ARRAY_POINTER","\x9d","\x55","\xfa","\x38")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,VERTEX_ATTRIB_ARRAY_BUFFER_BINDING),HX_HCSTRING("VERTEX_ATTRIB_ARRAY_BUFFER_BINDING","\xa6","\x80","\x67","\x97")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,IMPLEMENTATION_COLOR_READ_TYPE),HX_HCSTRING("IMPLEMENTATION_COLOR_READ_TYPE","\xfa","\xb6","\x2b","\x35")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,IMPLEMENTATION_COLOR_READ_FORMAT),HX_HCSTRING("IMPLEMENTATION_COLOR_READ_FORMAT","\x77","\xc7","\x1a","\x47")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,VERTEX_PROGRAM_POINT_SIZE),HX_HCSTRING("VERTEX_PROGRAM_POINT_SIZE","\xe6","\x56","\xbe","\x34")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,POINT_SPRITE),HX_HCSTRING("POINT_SPRITE","\x74","\x93","\x5c","\x14")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,COMPILE_STATUS),HX_HCSTRING("COMPILE_STATUS","\xde","\xcb","\x4e","\x8c")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,INFO_LOG_LENGTH),HX_HCSTRING("INFO_LOG_LENGTH","\x12","\xde","\x68","\xc7")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SHADER_SOURCE_LENGTH),HX_HCSTRING("SHADER_SOURCE_LENGTH","\x30","\xc9","\x50","\x62")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SHADER_COMPILER),HX_HCSTRING("SHADER_COMPILER","\x39","\xaf","\xc7","\xad")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SHADER_BINARY_FORMATS),HX_HCSTRING("SHADER_BINARY_FORMATS","\xd8","\xee","\x25","\xd0")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,NUM_SHADER_BINARY_FORMATS),HX_HCSTRING("NUM_SHADER_BINARY_FORMATS","\xbf","\x4e","\xe4","\xa8")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,LOW_FLOAT),HX_HCSTRING("LOW_FLOAT","\x31","\x04","\x74","\xe4")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MEDIUM_FLOAT),HX_HCSTRING("MEDIUM_FLOAT","\xf2","\x8a","\x46","\xb9")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,HIGH_FLOAT),HX_HCSTRING("HIGH_FLOAT","\x9f","\xf9","\x3b","\x47")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,LOW_INT),HX_HCSTRING("LOW_INT","\x44","\x28","\x70","\x45")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MEDIUM_INT),HX_HCSTRING("MEDIUM_INT","\xc5","\xcc","\xaf","\x4f")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,HIGH_INT),HX_HCSTRING("HIGH_INT","\x32","\x46","\x02","\x09")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FRAMEBUFFER),HX_HCSTRING("FRAMEBUFFER","\xcd","\x20","\x84","\x50")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RENDERBUFFER),HX_HCSTRING("RENDERBUFFER","\xd6","\xa4","\xa4","\xa9")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGBA4),HX_HCSTRING("RGBA4","\x00","\x05","\xfc","\x65")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGB5_A1),HX_HCSTRING("RGB5_A1","\x47","\x8f","\xf9","\xd8")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGB565),HX_HCSTRING("RGB565","\xe7","\x41","\x7f","\xd6")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DEPTH_COMPONENT16),HX_HCSTRING("DEPTH_COMPONENT16","\x26","\xcc","\x68","\x43")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STENCIL_INDEX),HX_HCSTRING("STENCIL_INDEX","\x0f","\x79","\xb6","\x97")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STENCIL_INDEX8),HX_HCSTRING("STENCIL_INDEX8","\x49","\x74","\xf3","\x27")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DEPTH_STENCIL),HX_HCSTRING("DEPTH_STENCIL","\x40","\x2f","\x20","\x2b")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RENDERBUFFER_WIDTH),HX_HCSTRING("RENDERBUFFER_WIDTH","\x7d","\x1e","\xe1","\x43")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RENDERBUFFER_HEIGHT),HX_HCSTRING("RENDERBUFFER_HEIGHT","\x70","\x07","\x69","\xd7")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RENDERBUFFER_INTERNAL_FORMAT),HX_HCSTRING("RENDERBUFFER_INTERNAL_FORMAT","\x90","\xda","\xeb","\xb5")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RENDERBUFFER_RED_SIZE),HX_HCSTRING("RENDERBUFFER_RED_SIZE","\x98","\xa5","\x58","\x5e")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RENDERBUFFER_GREEN_SIZE),HX_HCSTRING("RENDERBUFFER_GREEN_SIZE","\x26","\x9b","\x7d","\x3b")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RENDERBUFFER_BLUE_SIZE),HX_HCSTRING("RENDERBUFFER_BLUE_SIZE","\xdd","\x93","\x86","\xdd")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RENDERBUFFER_ALPHA_SIZE),HX_HCSTRING("RENDERBUFFER_ALPHA_SIZE","\xab","\xf0","\x5d","\x87")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RENDERBUFFER_DEPTH_SIZE),HX_HCSTRING("RENDERBUFFER_DEPTH_SIZE","\xe6","\x90","\x24","\xc3")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RENDERBUFFER_STENCIL_SIZE),HX_HCSTRING("RENDERBUFFER_STENCIL_SIZE","\x8d","\xd5","\x5a","\x9d")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE),HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE","\x50","\x22","\x44","\x50")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FRAMEBUFFER_ATTACHMENT_OBJECT_NAME),HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_NAME","\xe1","\xa1","\x3a","\x4c")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL),HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL","\xf6","\x9b","\xba","\x81")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE),HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE","\xdc","\x4c","\x39","\x8a")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,COLOR_ATTACHMENT0),HX_HCSTRING("COLOR_ATTACHMENT0","\xb1","\x9a","\xfe","\x86")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DEPTH_ATTACHMENT),HX_HCSTRING("DEPTH_ATTACHMENT","\xff","\x54","\xcd","\xe9")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STENCIL_ATTACHMENT),HX_HCSTRING("STENCIL_ATTACHMENT","\xa6","\x8c","\x28","\x01")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DEPTH_STENCIL_ATTACHMENT),HX_HCSTRING("DEPTH_STENCIL_ATTACHMENT","\xc2","\xe1","\xe1","\x9f")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,NONE),HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FRAMEBUFFER_COMPLETE),HX_HCSTRING("FRAMEBUFFER_COMPLETE","\xab","\x65","\x7d","\xea")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FRAMEBUFFER_INCOMPLETE_ATTACHMENT),HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_ATTACHMENT","\xf2","\xcf","\xb7","\x1d")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT),HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT","\x8b","\x0a","\xcd","\x77")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FRAMEBUFFER_INCOMPLETE_DIMENSIONS),HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_DIMENSIONS","\x5c","\x86","\xe4","\x1c")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FRAMEBUFFER_UNSUPPORTED),HX_HCSTRING("FRAMEBUFFER_UNSUPPORTED","\xe3","\xa6","\x4e","\xc8")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FRAMEBUFFER_BINDING),HX_HCSTRING("FRAMEBUFFER_BINDING","\x73","\xee","\xae","\xc5")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RENDERBUFFER_BINDING),HX_HCSTRING("RENDERBUFFER_BINDING","\x7c","\x23","\x70","\x23")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_RENDERBUFFER_SIZE),HX_HCSTRING("MAX_RENDERBUFFER_SIZE","\x4f","\xd4","\x3d","\x65")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,INVALID_FRAMEBUFFER_OPERATION),HX_HCSTRING("INVALID_FRAMEBUFFER_OPERATION","\x2d","\xd4","\xc5","\x43")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNPACK_FLIP_Y_WEBGL),HX_HCSTRING("UNPACK_FLIP_Y_WEBGL","\x0e","\x9f","\x94","\x9d")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNPACK_PREMULTIPLY_ALPHA_WEBGL),HX_HCSTRING("UNPACK_PREMULTIPLY_ALPHA_WEBGL","\x73","\x5d","\xcb","\xc6")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,CONTEXT_LOST_WEBGL),HX_HCSTRING("CONTEXT_LOST_WEBGL","\x6e","\x67","\x71","\x45")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNPACK_COLORSPACE_CONVERSION_WEBGL),HX_HCSTRING("UNPACK_COLORSPACE_CONVERSION_WEBGL","\x9f","\xd9","\xf0","\xb9")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,BROWSER_DEFAULT_WEBGL),HX_HCSTRING("BROWSER_DEFAULT_WEBGL","\x04","\x04","\x92","\xc0")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,READ_BUFFER),HX_HCSTRING("READ_BUFFER","\x09","\x1e","\x91","\xcd")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNPACK_ROW_LENGTH),HX_HCSTRING("UNPACK_ROW_LENGTH","\x78","\x04","\xc5","\x5f")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNPACK_SKIP_ROWS),HX_HCSTRING("UNPACK_SKIP_ROWS","\x0c","\xe6","\x50","\x4d")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNPACK_SKIP_PIXELS),HX_HCSTRING("UNPACK_SKIP_PIXELS","\xe0","\x26","\x60","\xaf")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,PACK_ROW_LENGTH),HX_HCSTRING("PACK_ROW_LENGTH","\xb1","\xc2","\x23","\x34")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,PACK_SKIP_ROWS),HX_HCSTRING("PACK_SKIP_ROWS","\xf3","\x91","\xa8","\xc5")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,PACK_SKIP_PIXELS),HX_HCSTRING("PACK_SKIP_PIXELS","\x87","\xda","\xe7","\xad")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE_BINDING_3D),HX_HCSTRING("TEXTURE_BINDING_3D","\x0f","\xed","\x98","\xb1")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNPACK_SKIP_IMAGES),HX_HCSTRING("UNPACK_SKIP_IMAGES","\x6b","\x88","\x48","\x21")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNPACK_IMAGE_HEIGHT),HX_HCSTRING("UNPACK_IMAGE_HEIGHT","\x98","\xfd","\x7e","\x14")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_3D_TEXTURE_SIZE),HX_HCSTRING("MAX_3D_TEXTURE_SIZE","\x98","\x9e","\x8f","\xd5")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_ELEMENTS_VERTICES),HX_HCSTRING("MAX_ELEMENTS_VERTICES","\x86","\xbe","\x2e","\x25")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_ELEMENTS_INDICES),HX_HCSTRING("MAX_ELEMENTS_INDICES","\x1a","\x7d","\xaa","\x73")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_TEXTURE_LOD_BIAS),HX_HCSTRING("MAX_TEXTURE_LOD_BIAS","\xf6","\xfc","\x86","\x68")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_FRAGMENT_UNIFORM_COMPONENTS),HX_HCSTRING("MAX_FRAGMENT_UNIFORM_COMPONENTS","\x75","\x6c","\x59","\x3e")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_VERTEX_UNIFORM_COMPONENTS),HX_HCSTRING("MAX_VERTEX_UNIFORM_COMPONENTS","\x21","\xc6","\x3a","\x5f")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_ARRAY_TEXTURE_LAYERS),HX_HCSTRING("MAX_ARRAY_TEXTURE_LAYERS","\xe7","\xc3","\x5b","\x6e")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MIN_PROGRAM_TEXEL_OFFSET),HX_HCSTRING("MIN_PROGRAM_TEXEL_OFFSET","\x2c","\x3a","\xdc","\x08")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_PROGRAM_TEXEL_OFFSET),HX_HCSTRING("MAX_PROGRAM_TEXEL_OFFSET","\xda","\xdb","\x54","\xb2")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_VARYING_COMPONENTS),HX_HCSTRING("MAX_VARYING_COMPONENTS","\x00","\x28","\xc3","\x5f")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FRAGMENT_SHADER_DERIVATIVE_HINT),HX_HCSTRING("FRAGMENT_SHADER_DERIVATIVE_HINT","\x74","\x51","\xa3","\x7e")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RASTERIZER_DISCARD),HX_HCSTRING("RASTERIZER_DISCARD","\x1a","\x72","\xdc","\x4a")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,VERTEX_ARRAY_BINDING),HX_HCSTRING("VERTEX_ARRAY_BINDING","\xc4","\x1d","\x24","\x31")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_VERTEX_OUTPUT_COMPONENTS),HX_HCSTRING("MAX_VERTEX_OUTPUT_COMPONENTS","\x54","\x64","\x33","\xf3")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_FRAGMENT_INPUT_COMPONENTS),HX_HCSTRING("MAX_FRAGMENT_INPUT_COMPONENTS","\x5f","\xcc","\x5e","\xd8")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_SERVER_WAIT_TIMEOUT),HX_HCSTRING("MAX_SERVER_WAIT_TIMEOUT","\x38","\x5d","\x22","\x83")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_ELEMENT_INDEX),HX_HCSTRING("MAX_ELEMENT_INDEX","\x94","\xef","\xd5","\x74")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RED),HX_HCSTRING("RED","\x31","\x75","\x3e","\x00")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGB8),HX_HCSTRING("RGB8","\xab","\x98","\x69","\x36")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGBA8),HX_HCSTRING("RGBA8","\x04","\x05","\xfc","\x65")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGB10_A2),HX_HCSTRING("RGB10_A2","\x64","\x47","\xcf","\x94")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE_3D),HX_HCSTRING("TEXTURE_3D","\xf5","\x0c","\xf8","\xa2")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE_WRAP_R),HX_HCSTRING("TEXTURE_WRAP_R","\xa1","\x2d","\xc3","\xfe")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE_MIN_LOD),HX_HCSTRING("TEXTURE_MIN_LOD","\x10","\x2d","\x09","\x39")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE_MAX_LOD),HX_HCSTRING("TEXTURE_MAX_LOD","\x22","\x17","\x30","\xc8")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE_BASE_LEVEL),HX_HCSTRING("TEXTURE_BASE_LEVEL","\xba","\xeb","\x52","\x05")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE_MAX_LEVEL),HX_HCSTRING("TEXTURE_MAX_LEVEL","\x65","\x66","\x2f","\x3f")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE_COMPARE_MODE),HX_HCSTRING("TEXTURE_COMPARE_MODE","\xe1","\xa5","\xb9","\x86")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE_COMPARE_FUNC),HX_HCSTRING("TEXTURE_COMPARE_FUNC","\xc2","\xbd","\x1d","\x82")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SRGB),HX_HCSTRING("SRGB","\x7a","\x2c","\x1b","\x37")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SRGB8),HX_HCSTRING("SRGB8","\x7e","\xbe","\xab","\x00")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SRGB8_ALPHA8),HX_HCSTRING("SRGB8_ALPHA8","\x1b","\xb6","\x71","\x35")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,COMPARE_REF_TO_TEXTURE),HX_HCSTRING("COMPARE_REF_TO_TEXTURE","\x3d","\x3b","\x36","\xaa")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGBA32F),HX_HCSTRING("RGBA32F","\x93","\xae","\xc6","\xe0")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGB32F),HX_HCSTRING("RGB32F","\xfa","\xb9","\x7d","\xd6")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGBA16F),HX_HCSTRING("RGBA16F","\x8d","\x2d","\xc5","\xe0")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGB16F),HX_HCSTRING("RGB16F","\xf4","\x38","\x7c","\xd6")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE_2D_ARRAY),HX_HCSTRING("TEXTURE_2D_ARRAY","\x50","\x2d","\xc6","\x60")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE_BINDING_2D_ARRAY),HX_HCSTRING("TEXTURE_BINDING_2D_ARRAY","\xea","\x1c","\x7d","\x28")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,R11F_G11F_B10F),HX_HCSTRING("R11F_G11F_B10F","\x9a","\x02","\x7e","\x28")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGB9_E5),HX_HCSTRING("RGB9_E5","\x43","\x6d","\x9e","\xdb")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGBA32UI),HX_HCSTRING("RGBA32UI","\x67","\x1f","\x12","\xcd")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGB32UI),HX_HCSTRING("RGB32UI","\x20","\x0e","\x85","\xd7")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGBA16UI),HX_HCSTRING("RGBA16UI","\x2d","\xbb","\xc2","\xcb")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGB16UI),HX_HCSTRING("RGB16UI","\xe6","\xa9","\x35","\xd6")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGBA8UI),HX_HCSTRING("RGBA8UI","\x58","\x98","\xca","\xe0")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGB8UI),HX_HCSTRING("RGB8UI","\xbf","\xa3","\x81","\xd6")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGBA32I),HX_HCSTRING("RGBA32I","\x96","\xae","\xc6","\xe0")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGB32I),HX_HCSTRING("RGB32I","\xfd","\xb9","\x7d","\xd6")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGBA16I),HX_HCSTRING("RGBA16I","\x90","\x2d","\xc5","\xe0")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGB16I),HX_HCSTRING("RGB16I","\xf7","\x38","\x7c","\xd6")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGBA8I),HX_HCSTRING("RGBA8I","\xc5","\x5e","\x88","\xd6")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGB8I),HX_HCSTRING("RGB8I","\x3e","\xfd","\xfb","\x65")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RED_INTEGER),HX_HCSTRING("RED_INTEGER","\x50","\x79","\x18","\xf4")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGB_INTEGER),HX_HCSTRING("RGB_INTEGER","\x0c","\x97","\xca","\xce")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGBA_INTEGER),HX_HCSTRING("RGBA_INTEGER","\xd3","\x57","\x27","\xc0")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,R8),HX_HCSTRING("R8","\xa6","\x47","\x00","\x00")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RG8),HX_HCSTRING("RG8","\xe3","\x76","\x3e","\x00")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,R16F),HX_HCSTRING("R16F","\xaf","\xdc","\x58","\x36")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,R32F),HX_HCSTRING("R32F","\xb5","\x5d","\x5a","\x36")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RG16F),HX_HCSTRING("RG16F","\x2c","\x15","\xef","\x65")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RG32F),HX_HCSTRING("RG32F","\x32","\x96","\xf0","\x65")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,R8I),HX_HCSTRING("R8I","\xe3","\x69","\x3e","\x00")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,R8UI),HX_HCSTRING("R8UI","\x7a","\x47","\x5e","\x36")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,R16I),HX_HCSTRING("R16I","\xb2","\xdc","\x58","\x36")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,R16UI),HX_HCSTRING("R16UI","\xcb","\x49","\x68","\x57")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,R32I),HX_HCSTRING("R32I","\xb8","\x5d","\x5a","\x36")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,R32UI),HX_HCSTRING("R32UI","\x05","\xae","\xb7","\x58")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RG8I),HX_HCSTRING("RG8I","\x06","\x90","\x69","\x36")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RG8UI),HX_HCSTRING("RG8UI","\xf7","\x7f","\xf4","\x65")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RG16I),HX_HCSTRING("RG16I","\x2f","\x15","\xef","\x65")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RG16UI),HX_HCSTRING("RG16UI","\xae","\x7e","\x43","\xcb")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RG32I),HX_HCSTRING("RG32I","\x35","\x96","\xf0","\x65")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RG32UI),HX_HCSTRING("RG32UI","\xe8","\xe2","\x92","\xcc")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,R8_SNORM),HX_HCSTRING("R8_SNORM","\x76","\xd3","\xce","\x64")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RG8_SNORM),HX_HCSTRING("RG8_SNORM","\x73","\x8e","\xf7","\x80")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGB8_SNORM),HX_HCSTRING("RGB8_SNORM","\x3b","\x36","\x76","\xea")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGBA8_SNORM),HX_HCSTRING("RGBA8_SNORM","\x54","\xeb","\x97","\x96")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RGB10_A2UI),HX_HCSTRING("RGB10_A2UI","\xb8","\x32","\xbb","\xdc")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE_IMMUTABLE_FORMAT),HX_HCSTRING("TEXTURE_IMMUTABLE_FORMAT","\x38","\x2c","\x95","\x5e")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TEXTURE_IMMUTABLE_LEVELS),HX_HCSTRING("TEXTURE_IMMUTABLE_LEVELS","\x70","\x5b","\x56","\x05")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNSIGNED_INT_2_10_10_10_REV),HX_HCSTRING("UNSIGNED_INT_2_10_10_10_REV","\x0a","\x41","\x8d","\xb2")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNSIGNED_INT_10F_11F_11F_REV),HX_HCSTRING("UNSIGNED_INT_10F_11F_11F_REV","\x5f","\x56","\xed","\x03")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNSIGNED_INT_5_9_9_9_REV),HX_HCSTRING("UNSIGNED_INT_5_9_9_9_REV","\xed","\xec","\x63","\xc7")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FLOAT_32_UNSIGNED_INT_24_8_REV),HX_HCSTRING("FLOAT_32_UNSIGNED_INT_24_8_REV","\xfc","\xa5","\x51","\x95")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNSIGNED_INT_24_8),HX_HCSTRING("UNSIGNED_INT_24_8","\xb5","\x57","\xd6","\xd9")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,HALF_FLOAT),HX_HCSTRING("HALF_FLOAT","\xb0","\xfe","\x81","\x7a")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RG),HX_HCSTRING("RG","\xb5","\x47","\x00","\x00")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RG_INTEGER),HX_HCSTRING("RG_INTEGER","\xd4","\x6f","\x76","\xe9")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,INT_2_10_10_10_REV),HX_HCSTRING("INT_2_10_10_10_REV","\xc0","\x20","\x1e","\xcf")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,CURRENT_QUERY),HX_HCSTRING("CURRENT_QUERY","\x02","\x13","\x44","\xba")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,QUERY_RESULT),HX_HCSTRING("QUERY_RESULT","\x94","\x10","\xd9","\x08")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,QUERY_RESULT_AVAILABLE),HX_HCSTRING("QUERY_RESULT_AVAILABLE","\xfe","\x56","\xe1","\x27")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,ANY_SAMPLES_PASSED),HX_HCSTRING("ANY_SAMPLES_PASSED","\x99","\x0e","\xa3","\x86")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,ANY_SAMPLES_PASSED_CONSERVATIVE),HX_HCSTRING("ANY_SAMPLES_PASSED_CONSERVATIVE","\x53","\x18","\xb7","\x3e")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_DRAW_BUFFERS),HX_HCSTRING("MAX_DRAW_BUFFERS","\xb3","\x92","\x8a","\x37")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DRAW_BUFFER0),HX_HCSTRING("DRAW_BUFFER0","\xb5","\x68","\x27","\xac")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DRAW_BUFFER1),HX_HCSTRING("DRAW_BUFFER1","\xb6","\x68","\x27","\xac")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DRAW_BUFFER2),HX_HCSTRING("DRAW_BUFFER2","\xb7","\x68","\x27","\xac")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DRAW_BUFFER3),HX_HCSTRING("DRAW_BUFFER3","\xb8","\x68","\x27","\xac")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DRAW_BUFFER4),HX_HCSTRING("DRAW_BUFFER4","\xb9","\x68","\x27","\xac")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DRAW_BUFFER5),HX_HCSTRING("DRAW_BUFFER5","\xba","\x68","\x27","\xac")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DRAW_BUFFER6),HX_HCSTRING("DRAW_BUFFER6","\xbb","\x68","\x27","\xac")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DRAW_BUFFER7),HX_HCSTRING("DRAW_BUFFER7","\xbc","\x68","\x27","\xac")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DRAW_BUFFER8),HX_HCSTRING("DRAW_BUFFER8","\xbd","\x68","\x27","\xac")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DRAW_BUFFER9),HX_HCSTRING("DRAW_BUFFER9","\xbe","\x68","\x27","\xac")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DRAW_BUFFER10),HX_HCSTRING("DRAW_BUFFER10","\xba","\x36","\x54","\xf6")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DRAW_BUFFER11),HX_HCSTRING("DRAW_BUFFER11","\xbb","\x36","\x54","\xf6")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DRAW_BUFFER12),HX_HCSTRING("DRAW_BUFFER12","\xbc","\x36","\x54","\xf6")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DRAW_BUFFER13),HX_HCSTRING("DRAW_BUFFER13","\xbd","\x36","\x54","\xf6")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DRAW_BUFFER14),HX_HCSTRING("DRAW_BUFFER14","\xbe","\x36","\x54","\xf6")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DRAW_BUFFER15),HX_HCSTRING("DRAW_BUFFER15","\xbf","\x36","\x54","\xf6")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_COLOR_ATTACHMENTS),HX_HCSTRING("MAX_COLOR_ATTACHMENTS","\x19","\xd7","\xae","\x06")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,COLOR_ATTACHMENT1),HX_HCSTRING("COLOR_ATTACHMENT1","\xb2","\x9a","\xfe","\x86")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,COLOR_ATTACHMENT2),HX_HCSTRING("COLOR_ATTACHMENT2","\xb3","\x9a","\xfe","\x86")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,COLOR_ATTACHMENT3),HX_HCSTRING("COLOR_ATTACHMENT3","\xb4","\x9a","\xfe","\x86")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,COLOR_ATTACHMENT4),HX_HCSTRING("COLOR_ATTACHMENT4","\xb5","\x9a","\xfe","\x86")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,COLOR_ATTACHMENT5),HX_HCSTRING("COLOR_ATTACHMENT5","\xb6","\x9a","\xfe","\x86")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,COLOR_ATTACHMENT6),HX_HCSTRING("COLOR_ATTACHMENT6","\xb7","\x9a","\xfe","\x86")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,COLOR_ATTACHMENT7),HX_HCSTRING("COLOR_ATTACHMENT7","\xb8","\x9a","\xfe","\x86")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,COLOR_ATTACHMENT8),HX_HCSTRING("COLOR_ATTACHMENT8","\xb9","\x9a","\xfe","\x86")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,COLOR_ATTACHMENT9),HX_HCSTRING("COLOR_ATTACHMENT9","\xba","\x9a","\xfe","\x86")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,COLOR_ATTACHMENT10),HX_HCSTRING("COLOR_ATTACHMENT10","\x3e","\xc1","\xc8","\x97")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,COLOR_ATTACHMENT11),HX_HCSTRING("COLOR_ATTACHMENT11","\x3f","\xc1","\xc8","\x97")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,COLOR_ATTACHMENT12),HX_HCSTRING("COLOR_ATTACHMENT12","\x40","\xc1","\xc8","\x97")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,COLOR_ATTACHMENT13),HX_HCSTRING("COLOR_ATTACHMENT13","\x41","\xc1","\xc8","\x97")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,COLOR_ATTACHMENT14),HX_HCSTRING("COLOR_ATTACHMENT14","\x42","\xc1","\xc8","\x97")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,COLOR_ATTACHMENT15),HX_HCSTRING("COLOR_ATTACHMENT15","\x43","\xc1","\xc8","\x97")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SAMPLER_3D),HX_HCSTRING("SAMPLER_3D","\xe8","\x2a","\x93","\x6e")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SAMPLER_2D_SHADOW),HX_HCSTRING("SAMPLER_2D_SHADOW","\x96","\x9e","\x66","\x61")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SAMPLER_2D_ARRAY),HX_HCSTRING("SAMPLER_2D_ARRAY","\x83","\xc3","\xf4","\xb9")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SAMPLER_2D_ARRAY_SHADOW),HX_HCSTRING("SAMPLER_2D_ARRAY_SHADOW","\x5c","\x88","\x64","\x1c")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SAMPLER_CUBE_SHADOW),HX_HCSTRING("SAMPLER_CUBE_SHADOW","\x13","\x3c","\xfd","\xff")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,INT_SAMPLER_2D),HX_HCSTRING("INT_SAMPLER_2D","\xb9","\xf2","\xff","\x97")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,INT_SAMPLER_3D),HX_HCSTRING("INT_SAMPLER_3D","\x98","\xf3","\xff","\x97")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,INT_SAMPLER_CUBE),HX_HCSTRING("INT_SAMPLER_CUBE","\x9c","\x93","\x36","\x99")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,INT_SAMPLER_2D_ARRAY),HX_HCSTRING("INT_SAMPLER_2D_ARRAY","\x33","\x30","\xe9","\x17")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNSIGNED_INT_SAMPLER_2D),HX_HCSTRING("UNSIGNED_INT_SAMPLER_2D","\x03","\xa6","\xf2","\xc4")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNSIGNED_INT_SAMPLER_3D),HX_HCSTRING("UNSIGNED_INT_SAMPLER_3D","\xe2","\xa6","\xf2","\xc4")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNSIGNED_INT_SAMPLER_CUBE),HX_HCSTRING("UNSIGNED_INT_SAMPLER_CUBE","\x66","\x2d","\xb4","\xee")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNSIGNED_INT_SAMPLER_2D_ARRAY),HX_HCSTRING("UNSIGNED_INT_SAMPLER_2D_ARRAY","\xfd","\x76","\x98","\x0d")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_SAMPLES),HX_HCSTRING("MAX_SAMPLES","\xee","\xbc","\x20","\x56")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SAMPLER_BINDING),HX_HCSTRING("SAMPLER_BINDING","\x8e","\x79","\x76","\x22")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,PIXEL_PACK_BUFFER),HX_HCSTRING("PIXEL_PACK_BUFFER","\x4d","\x06","\x41","\x84")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,PIXEL_UNPACK_BUFFER),HX_HCSTRING("PIXEL_UNPACK_BUFFER","\x54","\x80","\x91","\x31")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,PIXEL_PACK_BUFFER_BINDING),HX_HCSTRING("PIXEL_PACK_BUFFER_BINDING","\xf3","\x53","\x0d","\x81")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,PIXEL_UNPACK_BUFFER_BINDING),HX_HCSTRING("PIXEL_UNPACK_BUFFER_BINDING","\xfa","\xac","\x01","\xcf")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,COPY_READ_BUFFER),HX_HCSTRING("COPY_READ_BUFFER","\x3f","\x8b","\xf1","\x64")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,COPY_WRITE_BUFFER),HX_HCSTRING("COPY_WRITE_BUFFER","\xca","\x9d","\xe5","\xe4")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,COPY_READ_BUFFER_BINDING),HX_HCSTRING("COPY_READ_BUFFER_BINDING","\xe5","\x1a","\x17","\x74")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,COPY_WRITE_BUFFER_BINDING),HX_HCSTRING("COPY_WRITE_BUFFER_BINDING","\x70","\x30","\x81","\x8a")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FLOAT_MAT2x3),HX_HCSTRING("FLOAT_MAT2x3","\x90","\xbe","\xdd","\xc3")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FLOAT_MAT2x4),HX_HCSTRING("FLOAT_MAT2x4","\x91","\xbe","\xdd","\xc3")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FLOAT_MAT3x2),HX_HCSTRING("FLOAT_MAT3x2","\xd0","\x80","\xde","\xc3")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FLOAT_MAT3x4),HX_HCSTRING("FLOAT_MAT3x4","\xd2","\x80","\xde","\xc3")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FLOAT_MAT4x2),HX_HCSTRING("FLOAT_MAT4x2","\x11","\x43","\xdf","\xc3")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FLOAT_MAT4x3),HX_HCSTRING("FLOAT_MAT4x3","\x12","\x43","\xdf","\xc3")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNSIGNED_INT_VEC2),HX_HCSTRING("UNSIGNED_INT_VEC2","\xf8","\xd3","\xae","\xf1")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNSIGNED_INT_VEC3),HX_HCSTRING("UNSIGNED_INT_VEC3","\xf9","\xd3","\xae","\xf1")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNSIGNED_INT_VEC4),HX_HCSTRING("UNSIGNED_INT_VEC4","\xfa","\xd3","\xae","\xf1")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNSIGNED_NORMALIZED),HX_HCSTRING("UNSIGNED_NORMALIZED","\x81","\x9e","\xe9","\xb5")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SIGNED_NORMALIZED),HX_HCSTRING("SIGNED_NORMALIZED","\xfa","\x1c","\x1f","\x6e")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,VERTEX_ATTRIB_ARRAY_INTEGER),HX_HCSTRING("VERTEX_ATTRIB_ARRAY_INTEGER","\x9e","\x52","\xf4","\xfe")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,VERTEX_ATTRIB_ARRAY_DIVISOR),HX_HCSTRING("VERTEX_ATTRIB_ARRAY_DIVISOR","\x3e","\x5a","\xbb","\x58")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TRANSFORM_FEEDBACK_BUFFER_MODE),HX_HCSTRING("TRANSFORM_FEEDBACK_BUFFER_MODE","\x5b","\x21","\x21","\x18")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS),HX_HCSTRING("MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS","\x66","\x0f","\xc1","\x2a")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TRANSFORM_FEEDBACK_VARYINGS),HX_HCSTRING("TRANSFORM_FEEDBACK_VARYINGS","\x4a","\x49","\xb8","\x8f")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TRANSFORM_FEEDBACK_BUFFER_START),HX_HCSTRING("TRANSFORM_FEEDBACK_BUFFER_START","\x4a","\x5f","\x8f","\x7c")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TRANSFORM_FEEDBACK_BUFFER_SIZE),HX_HCSTRING("TRANSFORM_FEEDBACK_BUFFER_SIZE","\xb9","\xee","\x13","\x1c")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN),HX_HCSTRING("TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN","\x2b","\xe6","\xb6","\x9f")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS),HX_HCSTRING("MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS","\x18","\x9a","\x28","\x79")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS),HX_HCSTRING("MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS","\x79","\x55","\x1c","\x52")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,INTERLEAVED_ATTRIBS),HX_HCSTRING("INTERLEAVED_ATTRIBS","\xd3","\x03","\x58","\xcf")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SEPARATE_ATTRIBS),HX_HCSTRING("SEPARATE_ATTRIBS","\xad","\xf1","\x7d","\xf6")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TRANSFORM_FEEDBACK_BUFFER),HX_HCSTRING("TRANSFORM_FEEDBACK_BUFFER","\x87","\xcc","\xfb","\xc7")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TRANSFORM_FEEDBACK_BUFFER_BINDING),HX_HCSTRING("TRANSFORM_FEEDBACK_BUFFER_BINDING","\x2d","\xe4","\xaf","\x90")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TRANSFORM_FEEDBACK),HX_HCSTRING("TRANSFORM_FEEDBACK","\x18","\x81","\xaf","\x95")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TRANSFORM_FEEDBACK_PAUSED),HX_HCSTRING("TRANSFORM_FEEDBACK_PAUSED","\x35","\x50","\xeb","\xe6")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TRANSFORM_FEEDBACK_ACTIVE),HX_HCSTRING("TRANSFORM_FEEDBACK_ACTIVE","\x4d","\x51","\xad","\x0d")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TRANSFORM_FEEDBACK_BINDING),HX_HCSTRING("TRANSFORM_FEEDBACK_BINDING","\xbe","\x11","\xf4","\x01")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING),HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING","\x79","\xc9","\x9d","\x03")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE),HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE","\xc6","\x3b","\x6e","\x90")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FRAMEBUFFER_ATTACHMENT_RED_SIZE),HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_RED_SIZE","\x39","\x51","\x04","\xf1")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FRAMEBUFFER_ATTACHMENT_GREEN_SIZE),HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_GREEN_SIZE","\x07","\x31","\x24","\x91")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FRAMEBUFFER_ATTACHMENT_BLUE_SIZE),HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_BLUE_SIZE","\x1c","\x15","\x11","\xa1")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE),HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE","\x8c","\x86","\x04","\xdd")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE),HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE","\xc7","\x26","\xcb","\x18")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE),HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE","\xae","\x65","\x3b","\x9a")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FRAMEBUFFER_DEFAULT),HX_HCSTRING("FRAMEBUFFER_DEFAULT","\xef","\x3b","\x45","\xe2")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DEPTH24_STENCIL8),HX_HCSTRING("DEPTH24_STENCIL8","\x36","\x5e","\xb6","\xa6")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DRAW_FRAMEBUFFER_BINDING),HX_HCSTRING("DRAW_FRAMEBUFFER_BINDING","\x78","\x93","\x98","\xce")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,READ_FRAMEBUFFER),HX_HCSTRING("READ_FRAMEBUFFER","\x24","\x8b","\xf0","\xa0")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DRAW_FRAMEBUFFER),HX_HCSTRING("DRAW_FRAMEBUFFER","\xd2","\xb8","\x5e","\x7a")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,READ_FRAMEBUFFER_BINDING),HX_HCSTRING("READ_FRAMEBUFFER_BINDING","\xca","\x07","\xa0","\x07")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,RENDERBUFFER_SAMPLES),HX_HCSTRING("RENDERBUFFER_SAMPLES","\x40","\x5d","\x0c","\x28")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER),HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER","\x43","\x08","\x18","\x7f")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,FRAMEBUFFER_INCOMPLETE_MULTISAMPLE),HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE","\x54","\xd0","\xf2","\xd0")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNIFORM_BUFFER),HX_HCSTRING("UNIFORM_BUFFER","\x0b","\xf0","\xa3","\xee")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNIFORM_BUFFER_BINDING),HX_HCSTRING("UNIFORM_BUFFER_BINDING","\xb1","\x2b","\x2d","\x65")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNIFORM_BUFFER_START),HX_HCSTRING("UNIFORM_BUFFER_START","\xce","\xfd","\x84","\xf1")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNIFORM_BUFFER_SIZE),HX_HCSTRING("UNIFORM_BUFFER_SIZE","\xb5","\x8c","\x28","\x19")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_VERTEX_UNIFORM_BLOCKS),HX_HCSTRING("MAX_VERTEX_UNIFORM_BLOCKS","\x11","\x56","\x73","\xa0")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_FRAGMENT_UNIFORM_BLOCKS),HX_HCSTRING("MAX_FRAGMENT_UNIFORM_BLOCKS","\x65","\x42","\x83","\x5d")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_COMBINED_UNIFORM_BLOCKS),HX_HCSTRING("MAX_COMBINED_UNIFORM_BLOCKS","\xd0","\xc0","\xcb","\xe7")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_UNIFORM_BUFFER_BINDINGS),HX_HCSTRING("MAX_UNIFORM_BUFFER_BINDINGS","\x87","\x4d","\x27","\xc3")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_UNIFORM_BLOCK_SIZE),HX_HCSTRING("MAX_UNIFORM_BLOCK_SIZE","\xf9","\xdc","\x3f","\x6c")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS),HX_HCSTRING("MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS","\xfd","\x37","\x15","\xe3")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS),HX_HCSTRING("MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS","\x51","\x0d","\x19","\x43")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNIFORM_BUFFER_OFFSET_ALIGNMENT),HX_HCSTRING("UNIFORM_BUFFER_OFFSET_ALIGNMENT","\xcb","\xa9","\xf8","\xcc")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,ACTIVE_UNIFORM_BLOCKS),HX_HCSTRING("ACTIVE_UNIFORM_BLOCKS","\x2a","\x2b","\xe3","\x0c")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNIFORM_TYPE),HX_HCSTRING("UNIFORM_TYPE","\x05","\xd9","\x59","\x48")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNIFORM_SIZE),HX_HCSTRING("UNIFORM_SIZE","\x0c","\x87","\xa4","\x47")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNIFORM_BLOCK_INDEX),HX_HCSTRING("UNIFORM_BLOCK_INDEX","\x35","\x78","\x71","\x93")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNIFORM_OFFSET),HX_HCSTRING("UNIFORM_OFFSET","\x9e","\xca","\x4e","\x7e")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNIFORM_ARRAY_STRIDE),HX_HCSTRING("UNIFORM_ARRAY_STRIDE","\xaa","\xaa","\x4a","\x6c")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNIFORM_MATRIX_STRIDE),HX_HCSTRING("UNIFORM_MATRIX_STRIDE","\xec","\x75","\xfb","\xfc")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNIFORM_IS_ROW_MAJOR),HX_HCSTRING("UNIFORM_IS_ROW_MAJOR","\x4a","\xd7","\x8e","\xf1")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNIFORM_BLOCK_BINDING),HX_HCSTRING("UNIFORM_BLOCK_BINDING","\x28","\x1b","\x56","\x0b")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNIFORM_BLOCK_DATA_SIZE),HX_HCSTRING("UNIFORM_BLOCK_DATA_SIZE","\xf9","\xd0","\x4f","\x72")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNIFORM_BLOCK_ACTIVE_UNIFORMS),HX_HCSTRING("UNIFORM_BLOCK_ACTIVE_UNIFORMS","\x9b","\x74","\x7f","\x6e")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES),HX_HCSTRING("UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES","\x40","\x99","\x27","\x7e")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER),HX_HCSTRING("UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER","\xc1","\x8d","\xd1","\xe0")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER),HX_HCSTRING("UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER","\x15","\xc5","\x8f","\xaf")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,OBJECT_TYPE),HX_HCSTRING("OBJECT_TYPE","\x7a","\x57","\x2a","\x1f")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SYNC_CONDITION),HX_HCSTRING("SYNC_CONDITION","\x57","\xf7","\xd5","\x73")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SYNC_STATUS),HX_HCSTRING("SYNC_STATUS","\xd6","\xf3","\xb7","\x06")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SYNC_FLAGS),HX_HCSTRING("SYNC_FLAGS","\x03","\xe3","\xf0","\x79")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SYNC_FENCE),HX_HCSTRING("SYNC_FENCE","\x6d","\x3e","\x5a","\x75")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SYNC_GPU_COMMANDS_COMPLETE),HX_HCSTRING("SYNC_GPU_COMMANDS_COMPLETE","\xf9","\x23","\x65","\x18")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,UNSIGNALED),HX_HCSTRING("UNSIGNALED","\x20","\x4c","\x0a","\xfd")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SIGNALED),HX_HCSTRING("SIGNALED","\xc7","\x80","\xc2","\xde")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,ALREADY_SIGNALED),HX_HCSTRING("ALREADY_SIGNALED","\xae","\xdd","\x3f","\xe3")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TIMEOUT_EXPIRED),HX_HCSTRING("TIMEOUT_EXPIRED","\x87","\x64","\x05","\xcd")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,CONDITION_SATISFIED),HX_HCSTRING("CONDITION_SATISFIED","\xce","\xa6","\x40","\xb0")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,WAIT_FAILED),HX_HCSTRING("WAIT_FAILED","\x87","\xc9","\xdb","\x92")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,SYNC_FLUSH_COMMANDS_BIT),HX_HCSTRING("SYNC_FLUSH_COMMANDS_BIT","\xd5","\xc6","\x2c","\xc7")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,COLOR),HX_HCSTRING("COLOR","\x43","\xa9","\x4a","\xc8")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DEPTH),HX_HCSTRING("DEPTH","\xe3","\x28","\x18","\x55")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STENCIL),HX_HCSTRING("STENCIL","\xdc","\x91","\xd7","\xff")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MIN),HX_HCSTRING("MIN","\x72","\xad","\x3a","\x00")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX),HX_HCSTRING("MAX","\x84","\xa6","\x3a","\x00")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DEPTH_COMPONENT24),HX_HCSTRING("DEPTH_COMPONENT24","\x03","\xcd","\x68","\x43")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STREAM_READ),HX_HCSTRING("STREAM_READ","\xb5","\x9e","\x5f","\x1e")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STREAM_COPY),HX_HCSTRING("STREAM_COPY","\x14","\x0f","\x7d","\x14")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STATIC_READ),HX_HCSTRING("STATIC_READ","\xc7","\x6f","\x66","\xc3")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,STATIC_COPY),HX_HCSTRING("STATIC_COPY","\x26","\xe0","\x83","\xb9")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DYNAMIC_READ),HX_HCSTRING("DYNAMIC_READ","\x76","\x23","\x56","\x2d")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DYNAMIC_COPY),HX_HCSTRING("DYNAMIC_COPY","\xd5","\x93","\x73","\x23")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DEPTH_COMPONENT32F),HX_HCSTRING("DEPTH_COMPONENT32F","\x66","\x56","\x4b","\xb8")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,DEPTH32F_STENCIL8),HX_HCSTRING("DEPTH32F_STENCIL8","\xf7","\x07","\xb2","\x83")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,INVALID_INDEX),HX_HCSTRING("INVALID_INDEX","\x4a","\x04","\x83","\x3c")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,TIMEOUT_IGNORED),HX_HCSTRING("TIMEOUT_IGNORED","\xf4","\x3b","\x74","\x84")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,MAX_CLIENT_WAIT_TIMEOUT_WEBGL),HX_HCSTRING("MAX_CLIENT_WAIT_TIMEOUT_WEBGL","\x8a","\x37","\x14","\xd5")},
	{hx::fsObject /*::lime::graphics::opengl::GLContextType*/ ,(int)offsetof(NativeGLRenderContext_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsFloat,(int)offsetof(NativeGLRenderContext_obj,version),HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(NativeGLRenderContext_obj,__arrayBufferBinding),HX_HCSTRING("__arrayBufferBinding","\xec","\xc7","\xf6","\x4e")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(NativeGLRenderContext_obj,__elementBufferBinding),HX_HCSTRING("__elementBufferBinding","\xe9","\x54","\x64","\x1f")},
	{hx::fsInt,(int)offsetof(NativeGLRenderContext_obj,__contextID),HX_HCSTRING("__contextID","\x6a","\xb8","\x28","\x45")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(NativeGLRenderContext_obj,__currentProgram),HX_HCSTRING("__currentProgram","\x6b","\x4a","\xcd","\x35")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(NativeGLRenderContext_obj,__framebufferBinding),HX_HCSTRING("__framebufferBinding","\xf8","\x60","\x08","\xef")},
	{hx::fsBool,(int)offsetof(NativeGLRenderContext_obj,__initialized),HX_HCSTRING("__initialized","\xf4","\x35","\x88","\x7f")},
	{hx::fsBool,(int)offsetof(NativeGLRenderContext_obj,__isContextLost),HX_HCSTRING("__isContextLost","\x89","\x18","\x92","\xb5")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(NativeGLRenderContext_obj,__renderbufferBinding),HX_HCSTRING("__renderbufferBinding","\xef","\x6d","\xe9","\x2f")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(NativeGLRenderContext_obj,__texture2DBinding),HX_HCSTRING("__texture2DBinding","\x78","\xdc","\x16","\x4f")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(NativeGLRenderContext_obj,__textureCubeMapBinding),HX_HCSTRING("__textureCubeMapBinding","\x79","\x78","\xa4","\xc8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &NativeGLRenderContext_obj::__extensionObjects,HX_HCSTRING("__extensionObjects","\x35","\x8e","\xaf","\xef")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &NativeGLRenderContext_obj::__extensionObjectConstructors,HX_HCSTRING("__extensionObjectConstructors","\xd7","\x1f","\xf7","\x9f")},
	{hx::fsInt,(void *) &NativeGLRenderContext_obj::__lastContextID,HX_HCSTRING("__lastContextID","\x34","\x83","\xe7","\x9c")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &NativeGLRenderContext_obj::__supportedExtensions,HX_HCSTRING("__supportedExtensions","\xc2","\x2c","\x4a","\x37")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("DEPTH_BUFFER_BIT","\xca","\x5b","\xce","\xc6"),
	HX_HCSTRING("STENCIL_BUFFER_BIT","\x71","\x93","\x29","\xde"),
	HX_HCSTRING("COLOR_BUFFER_BIT","\x6a","\xf7","\x74","\xfb"),
	HX_HCSTRING("POINTS","\x23","\xbe","\xb0","\xa9"),
	HX_HCSTRING("LINES","\xdf","\x15","\xf0","\xf2"),
	HX_HCSTRING("LINE_LOOP","\xcf","\x55","\xc1","\x16"),
	HX_HCSTRING("LINE_STRIP","\xed","\x20","\x88","\xdd"),
	HX_HCSTRING("TRIANGLES","\x8b","\xa0","\x99","\x7a"),
	HX_HCSTRING("TRIANGLE_STRIP","\xc1","\x66","\x6c","\xf6"),
	HX_HCSTRING("TRIANGLE_FAN","\x7c","\xee","\x2e","\x91"),
	HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b"),
	HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00"),
	HX_HCSTRING("SRC_COLOR","\x48","\x9e","\xbd","\x5c"),
	HX_HCSTRING("ONE_MINUS_SRC_COLOR","\x20","\x3b","\xe1","\x48"),
	HX_HCSTRING("SRC_ALPHA","\x43","\xd4","\xf7","\x33"),
	HX_HCSTRING("ONE_MINUS_SRC_ALPHA","\x1b","\x71","\x1b","\x20"),
	HX_HCSTRING("DST_ALPHA","\x24","\x02","\xf2","\xd3"),
	HX_HCSTRING("ONE_MINUS_DST_ALPHA","\xfc","\x9e","\x15","\xc0"),
	HX_HCSTRING("DST_COLOR","\x29","\xcc","\xb7","\xfc"),
	HX_HCSTRING("ONE_MINUS_DST_COLOR","\x01","\x69","\xdb","\xe8"),
	HX_HCSTRING("SRC_ALPHA_SATURATE","\xab","\xe2","\x3d","\x33"),
	HX_HCSTRING("FUNC_ADD","\x46","\x78","\x17","\x75"),
	HX_HCSTRING("BLEND_EQUATION","\x9a","\x14","\x92","\x71"),
	HX_HCSTRING("BLEND_EQUATION_RGB","\x88","\x25","\xeb","\x90"),
	HX_HCSTRING("BLEND_EQUATION_ALPHA","\x99","\xaa","\xae","\x37"),
	HX_HCSTRING("FUNC_SUBTRACT","\xaf","\xc0","\xa0","\x17"),
	HX_HCSTRING("FUNC_REVERSE_SUBTRACT","\xcc","\x8d","\xef","\xf3"),
	HX_HCSTRING("BLEND_DST_RGB","\x05","\x87","\xf5","\xec"),
	HX_HCSTRING("BLEND_SRC_RGB","\x64","\x43","\x8c","\x2c"),
	HX_HCSTRING("BLEND_DST_ALPHA","\x56","\x25","\x32","\x74"),
	HX_HCSTRING("BLEND_SRC_ALPHA","\x75","\xf7","\x37","\xd4"),
	HX_HCSTRING("CONSTANT_COLOR","\xe8","\x64","\x8a","\xc8"),
	HX_HCSTRING("ONE_MINUS_CONSTANT_COLOR","\x10","\x39","\xe7","\x06"),
	HX_HCSTRING("CONSTANT_ALPHA","\xe3","\x9a","\xc4","\x9f"),
	HX_HCSTRING("ONE_MINUS_CONSTANT_ALPHA","\x0b","\x6f","\x21","\xde"),
	HX_HCSTRING("BLEND_COLOR","\x75","\xcb","\xc8","\x67"),
	HX_HCSTRING("ARRAY_BUFFER","\x46","\x66","\x17","\xf4"),
	HX_HCSTRING("ELEMENT_ARRAY_BUFFER","\x09","\x05","\x53","\x3d"),
	HX_HCSTRING("ARRAY_BUFFER_BINDING","\xec","\xd4","\xa9","\x79"),
	HX_HCSTRING("ELEMENT_ARRAY_BUFFER_BINDING","\xaf","\x6e","\x96","\xa2"),
	HX_HCSTRING("STREAM_DRAW","\x63","\x7f","\x28","\x15"),
	HX_HCSTRING("STATIC_DRAW","\x75","\x50","\x2f","\xba"),
	HX_HCSTRING("DYNAMIC_DRAW","\x24","\x04","\x1f","\x24"),
	HX_HCSTRING("BUFFER_SIZE","\xa0","\x7b","\x91","\x4c"),
	HX_HCSTRING("BUFFER_USAGE","\x42","\x05","\x11","\xe0"),
	HX_HCSTRING("CURRENT_VERTEX_ATTRIB","\x1f","\x8c","\x2f","\xab"),
	HX_HCSTRING("FRONT","\x89","\x50","\x7c","\x84"),
	HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"),
	HX_HCSTRING("FRONT_AND_BACK","\xa5","\x3d","\x6a","\xc1"),
	HX_HCSTRING("TEXTURE_2D","\x16","\x0c","\xf8","\xa2"),
	HX_HCSTRING("CULL_FACE","\x8a","\xa5","\xf4","\xcf"),
	HX_HCSTRING("BLEND","\x31","\x20","\xe3","\x32"),
	HX_HCSTRING("DITHER","\xe6","\xac","\x41","\x70"),
	HX_HCSTRING("STENCIL_TEST","\xd5","\xdc","\x69","\xd5"),
	HX_HCSTRING("DEPTH_TEST","\x6e","\x6c","\x25","\x28"),
	HX_HCSTRING("SCISSOR_TEST","\xb5","\xbe","\x51","\x59"),
	HX_HCSTRING("POLYGON_OFFSET_FILL","\x4a","\x3d","\x32","\xac"),
	HX_HCSTRING("SAMPLE_ALPHA_TO_COVERAGE","\x16","\x3e","\x56","\xe1"),
	HX_HCSTRING("SAMPLE_COVERAGE","\xdd","\xb7","\x0e","\xc1"),
	HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f"),
	HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13"),
	HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0"),
	HX_HCSTRING("INVALID_OPERATION","\x5f","\xb1","\xc8","\x29"),
	HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1"),
	HX_HCSTRING("CW","\xb4","\x3a","\x00","\x00"),
	HX_HCSTRING("CCW","\xb7","\x11","\x33","\x00"),
	HX_HCSTRING("LINE_WIDTH","\x1b","\x84","\xd2","\x23"),
	HX_HCSTRING("ALIASED_POINT_SIZE_RANGE","\xfe","\xf6","\xa4","\x7b"),
	HX_HCSTRING("ALIASED_LINE_WIDTH_RANGE","\xe9","\x22","\xd5","\x8a"),
	HX_HCSTRING("CULL_FACE_MODE","\x78","\xbd","\x87","\xd1"),
	HX_HCSTRING("FRONT_FACE","\x53","\xb7","\x4d","\xef"),
	HX_HCSTRING("DEPTH_RANGE","\x01","\x9a","\x23","\xcf"),
	HX_HCSTRING("DEPTH_WRITEMASK","\x8f","\x37","\x3f","\x66"),
	HX_HCSTRING("DEPTH_CLEAR_VALUE","\x23","\x17","\x0d","\x1b"),
	HX_HCSTRING("DEPTH_FUNC","\x60","\x8f","\xf0","\x1e"),
	HX_HCSTRING("STENCIL_CLEAR_VALUE","\x9c","\x91","\x82","\x73"),
	HX_HCSTRING("STENCIL_FUNC","\xc7","\xff","\x34","\xcc"),
	HX_HCSTRING("STENCIL_FAIL","\x61","\xce","\x25","\xcc"),
	HX_HCSTRING("STENCIL_PASS_DEPTH_FAIL","\x45","\xca","\xb9","\xc8"),
	HX_HCSTRING("STENCIL_PASS_DEPTH_PASS","\x38","\xf5","\x55","\xcf"),
	HX_HCSTRING("STENCIL_REF","\x10","\x6a","\xa5","\x3c"),
	HX_HCSTRING("STENCIL_VALUE_MASK","\x9d","\x58","\x5e","\xa0"),
	HX_HCSTRING("STENCIL_WRITEMASK","\xc8","\xf1","\xa6","\x49"),
	HX_HCSTRING("STENCIL_BACK_FUNC","\x39","\x78","\xa2","\x90"),
	HX_HCSTRING("STENCIL_BACK_FAIL","\xd3","\x46","\x93","\x90"),
	HX_HCSTRING("STENCIL_BACK_PASS_DEPTH_FAIL","\x13","\x23","\x0e","\x34"),
	HX_HCSTRING("STENCIL_BACK_PASS_DEPTH_PASS","\x06","\x4e","\xaa","\x3a"),
	HX_HCSTRING("STENCIL_BACK_REF","\xde","\x45","\xb8","\x08"),
	HX_HCSTRING("STENCIL_BACK_VALUE_MASK","\x8f","\xb2","\xc4","\x88"),
	HX_HCSTRING("STENCIL_BACK_WRITEMASK","\x16","\x9c","\x15","\xc2"),
	HX_HCSTRING("VIEWPORT","\x66","\xdc","\x2a","\xf6"),
	HX_HCSTRING("SCISSOR_BOX","\xe8","\x48","\x4c","\x55"),
	HX_HCSTRING("COLOR_CLEAR_VALUE","\x83","\xa7","\x2e","\xf8"),
	HX_HCSTRING("COLOR_WRITEMASK","\xef","\xef","\xf9","\x14"),
	HX_HCSTRING("UNPACK_ALIGNMENT","\xb6","\x2a","\x2e","\x4b"),
	HX_HCSTRING("PACK_ALIGNMENT","\x9d","\xd6","\x85","\xc3"),
	HX_HCSTRING("MAX_TEXTURE_SIZE","\xe0","\x0b","\x5b","\xfb"),
	HX_HCSTRING("MAX_VIEWPORT_DIMS","\xa9","\x2d","\xfb","\x08"),
	HX_HCSTRING("SUBPIXEL_BITS","\x1f","\xac","\x14","\x0a"),
	HX_HCSTRING("RED_BITS","\x14","\xf8","\x9e","\x96"),
	HX_HCSTRING("GREEN_BITS","\x62","\xa9","\x9b","\x94"),
	HX_HCSTRING("BLUE_BITS","\x0b","\x26","\x60","\xa1"),
	HX_HCSTRING("ALPHA_BITS","\xe7","\xfe","\x7b","\xe0"),
	HX_HCSTRING("DEPTH_BITS","\x22","\x9f","\x42","\x1c"),
	HX_HCSTRING("STENCIL_BITS","\x89","\x0f","\x87","\xc9"),
	HX_HCSTRING("POLYGON_OFFSET_UNITS","\xa8","\xe8","\x11","\xa6"),
	HX_HCSTRING("POLYGON_OFFSET_FACTOR","\x56","\x6b","\x12","\x2a"),
	HX_HCSTRING("TEXTURE_BINDING_2D","\x30","\xec","\x98","\xb1"),
	HX_HCSTRING("SAMPLE_BUFFERS","\xfe","\x16","\x71","\x3c"),
	HX_HCSTRING("SAMPLES","\xe9","\x98","\x9d","\x03"),
	HX_HCSTRING("SAMPLE_COVERAGE_VALUE","\x2f","\x7a","\x07","\x69"),
	HX_HCSTRING("SAMPLE_COVERAGE_INVERT","\x78","\x52","\xa5","\xcd"),
	HX_HCSTRING("NUM_COMPRESSED_TEXTURE_FORMATS","\x33","\xae","\x1c","\x0d"),
	HX_HCSTRING("COMPRESSED_TEXTURE_FORMATS","\x7a","\x13","\xe3","\x12"),
	HX_HCSTRING("DONT_CARE","\x7f","\x9b","\xc1","\xcf"),
	HX_HCSTRING("FASTEST","\x0a","\xa3","\x0d","\x5e"),
	HX_HCSTRING("NICEST","\x7e","\x6d","\x94","\x64"),
	HX_HCSTRING("GENERATE_MIPMAP_HINT","\x94","\xd3","\xd5","\x83"),
	HX_HCSTRING("BYTE","\x08","\xe7","\xe3","\x2b"),
	HX_HCSTRING("UNSIGNED_BYTE","\xd2","\x79","\x6b","\x01"),
	HX_HCSTRING("SHORT","\x5c","\xbc","\x15","\xfa"),
	HX_HCSTRING("UNSIGNED_SHORT","\x52","\x9a","\x2e","\xfb"),
	HX_HCSTRING("INT","\xcf","\xa8","\x37","\x00"),
	HX_HCSTRING("UNSIGNED_INT","\x45","\xfd","\xb9","\x1c"),
	HX_HCSTRING("FLOAT","\x7c","\xfd","\x84","\x80"),
	HX_HCSTRING("FIXED","\x54","\x31","\x90","\x7e"),
	HX_HCSTRING("DEPTH_COMPONENT","\x01","\x1f","\x62","\x0f"),
	HX_HCSTRING("ALPHA","\x3e","\xdf","\x84","\x9f"),
	HX_HCSTRING("RGB","\xed","\x76","\x3e","\x00"),
	HX_HCSTRING("RGBA","\xb4","\x98","\x69","\x36"),
	HX_HCSTRING("LUMINANCE","\xd8","\xa7","\xe0","\x63"),
	HX_HCSTRING("LUMINANCE_ALPHA","\x57","\x40","\xe0","\xbd"),
	HX_HCSTRING("UNSIGNED_SHORT_4_4_4_4","\xa6","\x33","\x71","\x7b"),
	HX_HCSTRING("UNSIGNED_SHORT_5_5_5_1","\x26","\x01","\x6e","\x38"),
	HX_HCSTRING("UNSIGNED_SHORT_5_6_5","\x75","\xbb","\x16","\x8c"),
	HX_HCSTRING("FRAGMENT_SHADER","\xf4","\x26","\x78","\xe9"),
	HX_HCSTRING("VERTEX_SHADER","\xe0","\x69","\x73","\x49"),
	HX_HCSTRING("MAX_VERTEX_ATTRIBS","\x49","\xc9","\x15","\x5f"),
	HX_HCSTRING("MAX_VERTEX_UNIFORM_VECTORS","\x45","\x6c","\x16","\x5a"),
	HX_HCSTRING("MAX_VARYING_VECTORS","\x06","\xb9","\xf7","\x37"),
	HX_HCSTRING("MAX_COMBINED_TEXTURE_IMAGE_UNITS","\xa8","\xd1","\xa6","\x77"),
	HX_HCSTRING("MAX_VERTEX_TEXTURE_IMAGE_UNITS","\xc7","\x90","\x95","\x2b"),
	HX_HCSTRING("MAX_TEXTURE_IMAGE_UNITS","\xcc","\x6c","\x61","\x54"),
	HX_HCSTRING("MAX_FRAGMENT_UNIFORM_VECTORS","\x71","\x49","\xf5","\x0a"),
	HX_HCSTRING("SHADER_TYPE","\x54","\xe5","\x27","\x87"),
	HX_HCSTRING("DELETE_STATUS","\x06","\xe4","\x98","\x1e"),
	HX_HCSTRING("LINK_STATUS","\x17","\x18","\x8f","\x45"),
	HX_HCSTRING("VALIDATE_STATUS","\xfb","\x22","\x07","\xc6"),
	HX_HCSTRING("ATTACHED_SHADERS","\x73","\xd2","\x76","\x75"),
	HX_HCSTRING("ACTIVE_UNIFORMS","\x98","\x7d","\x3a","\x2c"),
	HX_HCSTRING("ACTIVE_UNIFORMS_MAX_LENGTH","\x08","\xcb","\xc9","\x4d"),
	HX_HCSTRING("ACTIVE_ATTRIBUTES","\xf0","\xe5","\xc7","\x4a"),
	HX_HCSTRING("ACTIVE_ATTRIBUTES_MAX_LENGTH","\xb0","\x11","\xb3","\xae"),
	HX_HCSTRING("SHADING_LANGUAGE_VERSION","\xe6","\xc4","\xef","\x70"),
	HX_HCSTRING("CURRENT_PROGRAM","\xfe","\x28","\xc0","\x3f"),
	HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17"),
	HX_HCSTRING("LESS","\x59","\xdb","\x70","\x32"),
	HX_HCSTRING("EQUAL","\x94","\x07","\x71","\xf0"),
	HX_HCSTRING("LEQUAL","\xc8","\x73","\x90","\x53"),
	HX_HCSTRING("GREATER","\xda","\x64","\x94","\x37"),
	HX_HCSTRING("NOTEQUAL","\xc1","\xc1","\xe9","\xc8"),
	HX_HCSTRING("GEQUAL","\xed","\xa5","\xc7","\x53"),
	HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9"),
	HX_HCSTRING("KEEP","\x85","\x98","\xc7","\x31"),
	HX_HCSTRING("REPLACE","\x14","\x1c","\xfc","\x2a"),
	HX_HCSTRING("INCR","\xd4","\xfd","\x7b","\x30"),
	HX_HCSTRING("DECR","\x70","\x18","\x27","\x2d"),
	HX_HCSTRING("INVERT","\x16","\x93","\x5b","\x52"),
	HX_HCSTRING("INCR_WRAP","\x55","\x7f","\x68","\x2c"),
	HX_HCSTRING("DECR_WRAP","\x39","\x6f","\xeb","\x0a"),
	HX_HCSTRING("VENDOR","\x88","\x91","\x19","\x51"),
	HX_HCSTRING("RENDERER","\x43","\x55","\x61","\x0c"),
	HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc"),
	HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b"),
	HX_HCSTRING("NEAREST","\x3e","\xec","\x9d","\xe5"),
	HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f"),
	HX_HCSTRING("NEAREST_MIPMAP_NEAREST","\x68","\xb9","\x63","\x7e"),
	HX_HCSTRING("LINEAR_MIPMAP_NEAREST","\xa1","\x9b","\xa4","\x65"),
	HX_HCSTRING("NEAREST_MIPMAP_LINEAR","\xfb","\x83","\xf2","\x3b"),
	HX_HCSTRING("LINEAR_MIPMAP_LINEAR","\xe2","\x8b","\xf8","\x99"),
	HX_HCSTRING("TEXTURE_MAG_FILTER","\x88","\xff","\xd5","\x1e"),
	HX_HCSTRING("TEXTURE_MIN_FILTER","\x69","\x66","\xc2","\x46"),
	HX_HCSTRING("TEXTURE_WRAP_S","\xa2","\x2d","\xc3","\xfe"),
	HX_HCSTRING("TEXTURE_WRAP_T","\xa3","\x2d","\xc3","\xfe"),
	HX_HCSTRING("TEXTURE","\xbb","\x9c","\xb4","\x1e"),
	HX_HCSTRING("TEXTURE_CUBE_MAP","\x36","\x7a","\xe1","\xad"),
	HX_HCSTRING("TEXTURE_BINDING_CUBE_MAP","\xd0","\x69","\x98","\x75"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_X","\xbb","\x1c","\xee","\x24"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_X","\x77","\x03","\xe2","\x6b"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_Y","\xbc","\x1c","\xee","\x24"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Y","\x78","\x03","\xe2","\x6b"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_Z","\xbd","\x1c","\xee","\x24"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Z","\x79","\x03","\xe2","\x6b"),
	HX_HCSTRING("MAX_CUBE_MAP_TEXTURE_SIZE","\x77","\xb9","\x24","\x9d"),
	HX_HCSTRING("TEXTURE0","\x15","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE1","\x16","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE2","\x17","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE3","\x18","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE4","\x19","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE5","\x1a","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE6","\x1b","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE7","\x1c","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE8","\x1d","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE9","\x1e","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE10","\x5a","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE11","\x5b","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE12","\x5c","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE13","\x5d","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE14","\x5e","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE15","\x5f","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE16","\x60","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE17","\x61","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE18","\x62","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE19","\x63","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE20","\x39","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE21","\x3a","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE22","\x3b","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE23","\x3c","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE24","\x3d","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE25","\x3e","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE26","\x3f","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE27","\x40","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE28","\x41","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE29","\x42","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE30","\x18","\xae","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE31","\x19","\xae","\xa1","\xaa"),
	HX_HCSTRING("ACTIVE_TEXTURE","\x02","\x1a","\x22","\xce"),
	HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8"),
	HX_HCSTRING("CLAMP_TO_EDGE","\x1d","\xfc","\x5a","\x96"),
	HX_HCSTRING("MIRRORED_REPEAT","\x5c","\x94","\x80","\x4a"),
	HX_HCSTRING("FLOAT_VEC2","\x61","\xac","\xa4","\xeb"),
	HX_HCSTRING("FLOAT_VEC3","\x62","\xac","\xa4","\xeb"),
	HX_HCSTRING("FLOAT_VEC4","\x63","\xac","\xa4","\xeb"),
	HX_HCSTRING("INT_VEC2","\x2e","\x14","\x05","\x7d"),
	HX_HCSTRING("INT_VEC3","\x2f","\x14","\x05","\x7d"),
	HX_HCSTRING("INT_VEC4","\x30","\x14","\x05","\x7d"),
	HX_HCSTRING("BOOL","\x2a","\x4c","\xdc","\x2b"),
	HX_HCSTRING("BOOL_VEC2","\xf3","\x66","\x2b","\x2d"),
	HX_HCSTRING("BOOL_VEC3","\xf4","\x66","\x2b","\x2d"),
	HX_HCSTRING("BOOL_VEC4","\xf5","\x66","\x2b","\x2d"),
	HX_HCSTRING("FLOAT_MAT2","\x95","\xc6","\xae","\xe5"),
	HX_HCSTRING("FLOAT_MAT3","\x96","\xc6","\xae","\xe5"),
	HX_HCSTRING("FLOAT_MAT4","\x97","\xc6","\xae","\xe5"),
	HX_HCSTRING("SAMPLER_2D","\x09","\x2a","\x93","\x6e"),
	HX_HCSTRING("SAMPLER_CUBE","\xec","\x3e","\x82","\xa4"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_ENABLED","\x61","\x99","\x09","\x66"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_SIZE","\xc1","\x07","\xfd","\x08"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_STRIDE","\x19","\x2b","\x41","\x58"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_TYPE","\xba","\x59","\xb2","\x09"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_NORMALIZED","\x37","\xb7","\x22","\x78"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_POINTER","\x9d","\x55","\xfa","\x38"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_BUFFER_BINDING","\xa6","\x80","\x67","\x97"),
	HX_HCSTRING("IMPLEMENTATION_COLOR_READ_TYPE","\xfa","\xb6","\x2b","\x35"),
	HX_HCSTRING("IMPLEMENTATION_COLOR_READ_FORMAT","\x77","\xc7","\x1a","\x47"),
	HX_HCSTRING("VERTEX_PROGRAM_POINT_SIZE","\xe6","\x56","\xbe","\x34"),
	HX_HCSTRING("POINT_SPRITE","\x74","\x93","\x5c","\x14"),
	HX_HCSTRING("COMPILE_STATUS","\xde","\xcb","\x4e","\x8c"),
	HX_HCSTRING("INFO_LOG_LENGTH","\x12","\xde","\x68","\xc7"),
	HX_HCSTRING("SHADER_SOURCE_LENGTH","\x30","\xc9","\x50","\x62"),
	HX_HCSTRING("SHADER_COMPILER","\x39","\xaf","\xc7","\xad"),
	HX_HCSTRING("SHADER_BINARY_FORMATS","\xd8","\xee","\x25","\xd0"),
	HX_HCSTRING("NUM_SHADER_BINARY_FORMATS","\xbf","\x4e","\xe4","\xa8"),
	HX_HCSTRING("LOW_FLOAT","\x31","\x04","\x74","\xe4"),
	HX_HCSTRING("MEDIUM_FLOAT","\xf2","\x8a","\x46","\xb9"),
	HX_HCSTRING("HIGH_FLOAT","\x9f","\xf9","\x3b","\x47"),
	HX_HCSTRING("LOW_INT","\x44","\x28","\x70","\x45"),
	HX_HCSTRING("MEDIUM_INT","\xc5","\xcc","\xaf","\x4f"),
	HX_HCSTRING("HIGH_INT","\x32","\x46","\x02","\x09"),
	HX_HCSTRING("FRAMEBUFFER","\xcd","\x20","\x84","\x50"),
	HX_HCSTRING("RENDERBUFFER","\xd6","\xa4","\xa4","\xa9"),
	HX_HCSTRING("RGBA4","\x00","\x05","\xfc","\x65"),
	HX_HCSTRING("RGB5_A1","\x47","\x8f","\xf9","\xd8"),
	HX_HCSTRING("RGB565","\xe7","\x41","\x7f","\xd6"),
	HX_HCSTRING("DEPTH_COMPONENT16","\x26","\xcc","\x68","\x43"),
	HX_HCSTRING("STENCIL_INDEX","\x0f","\x79","\xb6","\x97"),
	HX_HCSTRING("STENCIL_INDEX8","\x49","\x74","\xf3","\x27"),
	HX_HCSTRING("DEPTH_STENCIL","\x40","\x2f","\x20","\x2b"),
	HX_HCSTRING("RENDERBUFFER_WIDTH","\x7d","\x1e","\xe1","\x43"),
	HX_HCSTRING("RENDERBUFFER_HEIGHT","\x70","\x07","\x69","\xd7"),
	HX_HCSTRING("RENDERBUFFER_INTERNAL_FORMAT","\x90","\xda","\xeb","\xb5"),
	HX_HCSTRING("RENDERBUFFER_RED_SIZE","\x98","\xa5","\x58","\x5e"),
	HX_HCSTRING("RENDERBUFFER_GREEN_SIZE","\x26","\x9b","\x7d","\x3b"),
	HX_HCSTRING("RENDERBUFFER_BLUE_SIZE","\xdd","\x93","\x86","\xdd"),
	HX_HCSTRING("RENDERBUFFER_ALPHA_SIZE","\xab","\xf0","\x5d","\x87"),
	HX_HCSTRING("RENDERBUFFER_DEPTH_SIZE","\xe6","\x90","\x24","\xc3"),
	HX_HCSTRING("RENDERBUFFER_STENCIL_SIZE","\x8d","\xd5","\x5a","\x9d"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE","\x50","\x22","\x44","\x50"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_NAME","\xe1","\xa1","\x3a","\x4c"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL","\xf6","\x9b","\xba","\x81"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE","\xdc","\x4c","\x39","\x8a"),
	HX_HCSTRING("COLOR_ATTACHMENT0","\xb1","\x9a","\xfe","\x86"),
	HX_HCSTRING("DEPTH_ATTACHMENT","\xff","\x54","\xcd","\xe9"),
	HX_HCSTRING("STENCIL_ATTACHMENT","\xa6","\x8c","\x28","\x01"),
	HX_HCSTRING("DEPTH_STENCIL_ATTACHMENT","\xc2","\xe1","\xe1","\x9f"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("FRAMEBUFFER_COMPLETE","\xab","\x65","\x7d","\xea"),
	HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_ATTACHMENT","\xf2","\xcf","\xb7","\x1d"),
	HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT","\x8b","\x0a","\xcd","\x77"),
	HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_DIMENSIONS","\x5c","\x86","\xe4","\x1c"),
	HX_HCSTRING("FRAMEBUFFER_UNSUPPORTED","\xe3","\xa6","\x4e","\xc8"),
	HX_HCSTRING("FRAMEBUFFER_BINDING","\x73","\xee","\xae","\xc5"),
	HX_HCSTRING("RENDERBUFFER_BINDING","\x7c","\x23","\x70","\x23"),
	HX_HCSTRING("MAX_RENDERBUFFER_SIZE","\x4f","\xd4","\x3d","\x65"),
	HX_HCSTRING("INVALID_FRAMEBUFFER_OPERATION","\x2d","\xd4","\xc5","\x43"),
	HX_HCSTRING("UNPACK_FLIP_Y_WEBGL","\x0e","\x9f","\x94","\x9d"),
	HX_HCSTRING("UNPACK_PREMULTIPLY_ALPHA_WEBGL","\x73","\x5d","\xcb","\xc6"),
	HX_HCSTRING("CONTEXT_LOST_WEBGL","\x6e","\x67","\x71","\x45"),
	HX_HCSTRING("UNPACK_COLORSPACE_CONVERSION_WEBGL","\x9f","\xd9","\xf0","\xb9"),
	HX_HCSTRING("BROWSER_DEFAULT_WEBGL","\x04","\x04","\x92","\xc0"),
	HX_HCSTRING("READ_BUFFER","\x09","\x1e","\x91","\xcd"),
	HX_HCSTRING("UNPACK_ROW_LENGTH","\x78","\x04","\xc5","\x5f"),
	HX_HCSTRING("UNPACK_SKIP_ROWS","\x0c","\xe6","\x50","\x4d"),
	HX_HCSTRING("UNPACK_SKIP_PIXELS","\xe0","\x26","\x60","\xaf"),
	HX_HCSTRING("PACK_ROW_LENGTH","\xb1","\xc2","\x23","\x34"),
	HX_HCSTRING("PACK_SKIP_ROWS","\xf3","\x91","\xa8","\xc5"),
	HX_HCSTRING("PACK_SKIP_PIXELS","\x87","\xda","\xe7","\xad"),
	HX_HCSTRING("TEXTURE_BINDING_3D","\x0f","\xed","\x98","\xb1"),
	HX_HCSTRING("UNPACK_SKIP_IMAGES","\x6b","\x88","\x48","\x21"),
	HX_HCSTRING("UNPACK_IMAGE_HEIGHT","\x98","\xfd","\x7e","\x14"),
	HX_HCSTRING("MAX_3D_TEXTURE_SIZE","\x98","\x9e","\x8f","\xd5"),
	HX_HCSTRING("MAX_ELEMENTS_VERTICES","\x86","\xbe","\x2e","\x25"),
	HX_HCSTRING("MAX_ELEMENTS_INDICES","\x1a","\x7d","\xaa","\x73"),
	HX_HCSTRING("MAX_TEXTURE_LOD_BIAS","\xf6","\xfc","\x86","\x68"),
	HX_HCSTRING("MAX_FRAGMENT_UNIFORM_COMPONENTS","\x75","\x6c","\x59","\x3e"),
	HX_HCSTRING("MAX_VERTEX_UNIFORM_COMPONENTS","\x21","\xc6","\x3a","\x5f"),
	HX_HCSTRING("MAX_ARRAY_TEXTURE_LAYERS","\xe7","\xc3","\x5b","\x6e"),
	HX_HCSTRING("MIN_PROGRAM_TEXEL_OFFSET","\x2c","\x3a","\xdc","\x08"),
	HX_HCSTRING("MAX_PROGRAM_TEXEL_OFFSET","\xda","\xdb","\x54","\xb2"),
	HX_HCSTRING("MAX_VARYING_COMPONENTS","\x00","\x28","\xc3","\x5f"),
	HX_HCSTRING("FRAGMENT_SHADER_DERIVATIVE_HINT","\x74","\x51","\xa3","\x7e"),
	HX_HCSTRING("RASTERIZER_DISCARD","\x1a","\x72","\xdc","\x4a"),
	HX_HCSTRING("VERTEX_ARRAY_BINDING","\xc4","\x1d","\x24","\x31"),
	HX_HCSTRING("MAX_VERTEX_OUTPUT_COMPONENTS","\x54","\x64","\x33","\xf3"),
	HX_HCSTRING("MAX_FRAGMENT_INPUT_COMPONENTS","\x5f","\xcc","\x5e","\xd8"),
	HX_HCSTRING("MAX_SERVER_WAIT_TIMEOUT","\x38","\x5d","\x22","\x83"),
	HX_HCSTRING("MAX_ELEMENT_INDEX","\x94","\xef","\xd5","\x74"),
	HX_HCSTRING("RED","\x31","\x75","\x3e","\x00"),
	HX_HCSTRING("RGB8","\xab","\x98","\x69","\x36"),
	HX_HCSTRING("RGBA8","\x04","\x05","\xfc","\x65"),
	HX_HCSTRING("RGB10_A2","\x64","\x47","\xcf","\x94"),
	HX_HCSTRING("TEXTURE_3D","\xf5","\x0c","\xf8","\xa2"),
	HX_HCSTRING("TEXTURE_WRAP_R","\xa1","\x2d","\xc3","\xfe"),
	HX_HCSTRING("TEXTURE_MIN_LOD","\x10","\x2d","\x09","\x39"),
	HX_HCSTRING("TEXTURE_MAX_LOD","\x22","\x17","\x30","\xc8"),
	HX_HCSTRING("TEXTURE_BASE_LEVEL","\xba","\xeb","\x52","\x05"),
	HX_HCSTRING("TEXTURE_MAX_LEVEL","\x65","\x66","\x2f","\x3f"),
	HX_HCSTRING("TEXTURE_COMPARE_MODE","\xe1","\xa5","\xb9","\x86"),
	HX_HCSTRING("TEXTURE_COMPARE_FUNC","\xc2","\xbd","\x1d","\x82"),
	HX_HCSTRING("SRGB","\x7a","\x2c","\x1b","\x37"),
	HX_HCSTRING("SRGB8","\x7e","\xbe","\xab","\x00"),
	HX_HCSTRING("SRGB8_ALPHA8","\x1b","\xb6","\x71","\x35"),
	HX_HCSTRING("COMPARE_REF_TO_TEXTURE","\x3d","\x3b","\x36","\xaa"),
	HX_HCSTRING("RGBA32F","\x93","\xae","\xc6","\xe0"),
	HX_HCSTRING("RGB32F","\xfa","\xb9","\x7d","\xd6"),
	HX_HCSTRING("RGBA16F","\x8d","\x2d","\xc5","\xe0"),
	HX_HCSTRING("RGB16F","\xf4","\x38","\x7c","\xd6"),
	HX_HCSTRING("TEXTURE_2D_ARRAY","\x50","\x2d","\xc6","\x60"),
	HX_HCSTRING("TEXTURE_BINDING_2D_ARRAY","\xea","\x1c","\x7d","\x28"),
	HX_HCSTRING("R11F_G11F_B10F","\x9a","\x02","\x7e","\x28"),
	HX_HCSTRING("RGB9_E5","\x43","\x6d","\x9e","\xdb"),
	HX_HCSTRING("RGBA32UI","\x67","\x1f","\x12","\xcd"),
	HX_HCSTRING("RGB32UI","\x20","\x0e","\x85","\xd7"),
	HX_HCSTRING("RGBA16UI","\x2d","\xbb","\xc2","\xcb"),
	HX_HCSTRING("RGB16UI","\xe6","\xa9","\x35","\xd6"),
	HX_HCSTRING("RGBA8UI","\x58","\x98","\xca","\xe0"),
	HX_HCSTRING("RGB8UI","\xbf","\xa3","\x81","\xd6"),
	HX_HCSTRING("RGBA32I","\x96","\xae","\xc6","\xe0"),
	HX_HCSTRING("RGB32I","\xfd","\xb9","\x7d","\xd6"),
	HX_HCSTRING("RGBA16I","\x90","\x2d","\xc5","\xe0"),
	HX_HCSTRING("RGB16I","\xf7","\x38","\x7c","\xd6"),
	HX_HCSTRING("RGBA8I","\xc5","\x5e","\x88","\xd6"),
	HX_HCSTRING("RGB8I","\x3e","\xfd","\xfb","\x65"),
	HX_HCSTRING("RED_INTEGER","\x50","\x79","\x18","\xf4"),
	HX_HCSTRING("RGB_INTEGER","\x0c","\x97","\xca","\xce"),
	HX_HCSTRING("RGBA_INTEGER","\xd3","\x57","\x27","\xc0"),
	HX_HCSTRING("R8","\xa6","\x47","\x00","\x00"),
	HX_HCSTRING("RG8","\xe3","\x76","\x3e","\x00"),
	HX_HCSTRING("R16F","\xaf","\xdc","\x58","\x36"),
	HX_HCSTRING("R32F","\xb5","\x5d","\x5a","\x36"),
	HX_HCSTRING("RG16F","\x2c","\x15","\xef","\x65"),
	HX_HCSTRING("RG32F","\x32","\x96","\xf0","\x65"),
	HX_HCSTRING("R8I","\xe3","\x69","\x3e","\x00"),
	HX_HCSTRING("R8UI","\x7a","\x47","\x5e","\x36"),
	HX_HCSTRING("R16I","\xb2","\xdc","\x58","\x36"),
	HX_HCSTRING("R16UI","\xcb","\x49","\x68","\x57"),
	HX_HCSTRING("R32I","\xb8","\x5d","\x5a","\x36"),
	HX_HCSTRING("R32UI","\x05","\xae","\xb7","\x58"),
	HX_HCSTRING("RG8I","\x06","\x90","\x69","\x36"),
	HX_HCSTRING("RG8UI","\xf7","\x7f","\xf4","\x65"),
	HX_HCSTRING("RG16I","\x2f","\x15","\xef","\x65"),
	HX_HCSTRING("RG16UI","\xae","\x7e","\x43","\xcb"),
	HX_HCSTRING("RG32I","\x35","\x96","\xf0","\x65"),
	HX_HCSTRING("RG32UI","\xe8","\xe2","\x92","\xcc"),
	HX_HCSTRING("R8_SNORM","\x76","\xd3","\xce","\x64"),
	HX_HCSTRING("RG8_SNORM","\x73","\x8e","\xf7","\x80"),
	HX_HCSTRING("RGB8_SNORM","\x3b","\x36","\x76","\xea"),
	HX_HCSTRING("RGBA8_SNORM","\x54","\xeb","\x97","\x96"),
	HX_HCSTRING("RGB10_A2UI","\xb8","\x32","\xbb","\xdc"),
	HX_HCSTRING("TEXTURE_IMMUTABLE_FORMAT","\x38","\x2c","\x95","\x5e"),
	HX_HCSTRING("TEXTURE_IMMUTABLE_LEVELS","\x70","\x5b","\x56","\x05"),
	HX_HCSTRING("UNSIGNED_INT_2_10_10_10_REV","\x0a","\x41","\x8d","\xb2"),
	HX_HCSTRING("UNSIGNED_INT_10F_11F_11F_REV","\x5f","\x56","\xed","\x03"),
	HX_HCSTRING("UNSIGNED_INT_5_9_9_9_REV","\xed","\xec","\x63","\xc7"),
	HX_HCSTRING("FLOAT_32_UNSIGNED_INT_24_8_REV","\xfc","\xa5","\x51","\x95"),
	HX_HCSTRING("UNSIGNED_INT_24_8","\xb5","\x57","\xd6","\xd9"),
	HX_HCSTRING("HALF_FLOAT","\xb0","\xfe","\x81","\x7a"),
	HX_HCSTRING("RG","\xb5","\x47","\x00","\x00"),
	HX_HCSTRING("RG_INTEGER","\xd4","\x6f","\x76","\xe9"),
	HX_HCSTRING("INT_2_10_10_10_REV","\xc0","\x20","\x1e","\xcf"),
	HX_HCSTRING("CURRENT_QUERY","\x02","\x13","\x44","\xba"),
	HX_HCSTRING("QUERY_RESULT","\x94","\x10","\xd9","\x08"),
	HX_HCSTRING("QUERY_RESULT_AVAILABLE","\xfe","\x56","\xe1","\x27"),
	HX_HCSTRING("ANY_SAMPLES_PASSED","\x99","\x0e","\xa3","\x86"),
	HX_HCSTRING("ANY_SAMPLES_PASSED_CONSERVATIVE","\x53","\x18","\xb7","\x3e"),
	HX_HCSTRING("MAX_DRAW_BUFFERS","\xb3","\x92","\x8a","\x37"),
	HX_HCSTRING("DRAW_BUFFER0","\xb5","\x68","\x27","\xac"),
	HX_HCSTRING("DRAW_BUFFER1","\xb6","\x68","\x27","\xac"),
	HX_HCSTRING("DRAW_BUFFER2","\xb7","\x68","\x27","\xac"),
	HX_HCSTRING("DRAW_BUFFER3","\xb8","\x68","\x27","\xac"),
	HX_HCSTRING("DRAW_BUFFER4","\xb9","\x68","\x27","\xac"),
	HX_HCSTRING("DRAW_BUFFER5","\xba","\x68","\x27","\xac"),
	HX_HCSTRING("DRAW_BUFFER6","\xbb","\x68","\x27","\xac"),
	HX_HCSTRING("DRAW_BUFFER7","\xbc","\x68","\x27","\xac"),
	HX_HCSTRING("DRAW_BUFFER8","\xbd","\x68","\x27","\xac"),
	HX_HCSTRING("DRAW_BUFFER9","\xbe","\x68","\x27","\xac"),
	HX_HCSTRING("DRAW_BUFFER10","\xba","\x36","\x54","\xf6"),
	HX_HCSTRING("DRAW_BUFFER11","\xbb","\x36","\x54","\xf6"),
	HX_HCSTRING("DRAW_BUFFER12","\xbc","\x36","\x54","\xf6"),
	HX_HCSTRING("DRAW_BUFFER13","\xbd","\x36","\x54","\xf6"),
	HX_HCSTRING("DRAW_BUFFER14","\xbe","\x36","\x54","\xf6"),
	HX_HCSTRING("DRAW_BUFFER15","\xbf","\x36","\x54","\xf6"),
	HX_HCSTRING("MAX_COLOR_ATTACHMENTS","\x19","\xd7","\xae","\x06"),
	HX_HCSTRING("COLOR_ATTACHMENT1","\xb2","\x9a","\xfe","\x86"),
	HX_HCSTRING("COLOR_ATTACHMENT2","\xb3","\x9a","\xfe","\x86"),
	HX_HCSTRING("COLOR_ATTACHMENT3","\xb4","\x9a","\xfe","\x86"),
	HX_HCSTRING("COLOR_ATTACHMENT4","\xb5","\x9a","\xfe","\x86"),
	HX_HCSTRING("COLOR_ATTACHMENT5","\xb6","\x9a","\xfe","\x86"),
	HX_HCSTRING("COLOR_ATTACHMENT6","\xb7","\x9a","\xfe","\x86"),
	HX_HCSTRING("COLOR_ATTACHMENT7","\xb8","\x9a","\xfe","\x86"),
	HX_HCSTRING("COLOR_ATTACHMENT8","\xb9","\x9a","\xfe","\x86"),
	HX_HCSTRING("COLOR_ATTACHMENT9","\xba","\x9a","\xfe","\x86"),
	HX_HCSTRING("COLOR_ATTACHMENT10","\x3e","\xc1","\xc8","\x97"),
	HX_HCSTRING("COLOR_ATTACHMENT11","\x3f","\xc1","\xc8","\x97"),
	HX_HCSTRING("COLOR_ATTACHMENT12","\x40","\xc1","\xc8","\x97"),
	HX_HCSTRING("COLOR_ATTACHMENT13","\x41","\xc1","\xc8","\x97"),
	HX_HCSTRING("COLOR_ATTACHMENT14","\x42","\xc1","\xc8","\x97"),
	HX_HCSTRING("COLOR_ATTACHMENT15","\x43","\xc1","\xc8","\x97"),
	HX_HCSTRING("SAMPLER_3D","\xe8","\x2a","\x93","\x6e"),
	HX_HCSTRING("SAMPLER_2D_SHADOW","\x96","\x9e","\x66","\x61"),
	HX_HCSTRING("SAMPLER_2D_ARRAY","\x83","\xc3","\xf4","\xb9"),
	HX_HCSTRING("SAMPLER_2D_ARRAY_SHADOW","\x5c","\x88","\x64","\x1c"),
	HX_HCSTRING("SAMPLER_CUBE_SHADOW","\x13","\x3c","\xfd","\xff"),
	HX_HCSTRING("INT_SAMPLER_2D","\xb9","\xf2","\xff","\x97"),
	HX_HCSTRING("INT_SAMPLER_3D","\x98","\xf3","\xff","\x97"),
	HX_HCSTRING("INT_SAMPLER_CUBE","\x9c","\x93","\x36","\x99"),
	HX_HCSTRING("INT_SAMPLER_2D_ARRAY","\x33","\x30","\xe9","\x17"),
	HX_HCSTRING("UNSIGNED_INT_SAMPLER_2D","\x03","\xa6","\xf2","\xc4"),
	HX_HCSTRING("UNSIGNED_INT_SAMPLER_3D","\xe2","\xa6","\xf2","\xc4"),
	HX_HCSTRING("UNSIGNED_INT_SAMPLER_CUBE","\x66","\x2d","\xb4","\xee"),
	HX_HCSTRING("UNSIGNED_INT_SAMPLER_2D_ARRAY","\xfd","\x76","\x98","\x0d"),
	HX_HCSTRING("MAX_SAMPLES","\xee","\xbc","\x20","\x56"),
	HX_HCSTRING("SAMPLER_BINDING","\x8e","\x79","\x76","\x22"),
	HX_HCSTRING("PIXEL_PACK_BUFFER","\x4d","\x06","\x41","\x84"),
	HX_HCSTRING("PIXEL_UNPACK_BUFFER","\x54","\x80","\x91","\x31"),
	HX_HCSTRING("PIXEL_PACK_BUFFER_BINDING","\xf3","\x53","\x0d","\x81"),
	HX_HCSTRING("PIXEL_UNPACK_BUFFER_BINDING","\xfa","\xac","\x01","\xcf"),
	HX_HCSTRING("COPY_READ_BUFFER","\x3f","\x8b","\xf1","\x64"),
	HX_HCSTRING("COPY_WRITE_BUFFER","\xca","\x9d","\xe5","\xe4"),
	HX_HCSTRING("COPY_READ_BUFFER_BINDING","\xe5","\x1a","\x17","\x74"),
	HX_HCSTRING("COPY_WRITE_BUFFER_BINDING","\x70","\x30","\x81","\x8a"),
	HX_HCSTRING("FLOAT_MAT2x3","\x90","\xbe","\xdd","\xc3"),
	HX_HCSTRING("FLOAT_MAT2x4","\x91","\xbe","\xdd","\xc3"),
	HX_HCSTRING("FLOAT_MAT3x2","\xd0","\x80","\xde","\xc3"),
	HX_HCSTRING("FLOAT_MAT3x4","\xd2","\x80","\xde","\xc3"),
	HX_HCSTRING("FLOAT_MAT4x2","\x11","\x43","\xdf","\xc3"),
	HX_HCSTRING("FLOAT_MAT4x3","\x12","\x43","\xdf","\xc3"),
	HX_HCSTRING("UNSIGNED_INT_VEC2","\xf8","\xd3","\xae","\xf1"),
	HX_HCSTRING("UNSIGNED_INT_VEC3","\xf9","\xd3","\xae","\xf1"),
	HX_HCSTRING("UNSIGNED_INT_VEC4","\xfa","\xd3","\xae","\xf1"),
	HX_HCSTRING("UNSIGNED_NORMALIZED","\x81","\x9e","\xe9","\xb5"),
	HX_HCSTRING("SIGNED_NORMALIZED","\xfa","\x1c","\x1f","\x6e"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_INTEGER","\x9e","\x52","\xf4","\xfe"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_DIVISOR","\x3e","\x5a","\xbb","\x58"),
	HX_HCSTRING("TRANSFORM_FEEDBACK_BUFFER_MODE","\x5b","\x21","\x21","\x18"),
	HX_HCSTRING("MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS","\x66","\x0f","\xc1","\x2a"),
	HX_HCSTRING("TRANSFORM_FEEDBACK_VARYINGS","\x4a","\x49","\xb8","\x8f"),
	HX_HCSTRING("TRANSFORM_FEEDBACK_BUFFER_START","\x4a","\x5f","\x8f","\x7c"),
	HX_HCSTRING("TRANSFORM_FEEDBACK_BUFFER_SIZE","\xb9","\xee","\x13","\x1c"),
	HX_HCSTRING("TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN","\x2b","\xe6","\xb6","\x9f"),
	HX_HCSTRING("MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS","\x18","\x9a","\x28","\x79"),
	HX_HCSTRING("MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS","\x79","\x55","\x1c","\x52"),
	HX_HCSTRING("INTERLEAVED_ATTRIBS","\xd3","\x03","\x58","\xcf"),
	HX_HCSTRING("SEPARATE_ATTRIBS","\xad","\xf1","\x7d","\xf6"),
	HX_HCSTRING("TRANSFORM_FEEDBACK_BUFFER","\x87","\xcc","\xfb","\xc7"),
	HX_HCSTRING("TRANSFORM_FEEDBACK_BUFFER_BINDING","\x2d","\xe4","\xaf","\x90"),
	HX_HCSTRING("TRANSFORM_FEEDBACK","\x18","\x81","\xaf","\x95"),
	HX_HCSTRING("TRANSFORM_FEEDBACK_PAUSED","\x35","\x50","\xeb","\xe6"),
	HX_HCSTRING("TRANSFORM_FEEDBACK_ACTIVE","\x4d","\x51","\xad","\x0d"),
	HX_HCSTRING("TRANSFORM_FEEDBACK_BINDING","\xbe","\x11","\xf4","\x01"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING","\x79","\xc9","\x9d","\x03"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE","\xc6","\x3b","\x6e","\x90"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_RED_SIZE","\x39","\x51","\x04","\xf1"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_GREEN_SIZE","\x07","\x31","\x24","\x91"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_BLUE_SIZE","\x1c","\x15","\x11","\xa1"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE","\x8c","\x86","\x04","\xdd"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE","\xc7","\x26","\xcb","\x18"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE","\xae","\x65","\x3b","\x9a"),
	HX_HCSTRING("FRAMEBUFFER_DEFAULT","\xef","\x3b","\x45","\xe2"),
	HX_HCSTRING("DEPTH24_STENCIL8","\x36","\x5e","\xb6","\xa6"),
	HX_HCSTRING("DRAW_FRAMEBUFFER_BINDING","\x78","\x93","\x98","\xce"),
	HX_HCSTRING("READ_FRAMEBUFFER","\x24","\x8b","\xf0","\xa0"),
	HX_HCSTRING("DRAW_FRAMEBUFFER","\xd2","\xb8","\x5e","\x7a"),
	HX_HCSTRING("READ_FRAMEBUFFER_BINDING","\xca","\x07","\xa0","\x07"),
	HX_HCSTRING("RENDERBUFFER_SAMPLES","\x40","\x5d","\x0c","\x28"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER","\x43","\x08","\x18","\x7f"),
	HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE","\x54","\xd0","\xf2","\xd0"),
	HX_HCSTRING("UNIFORM_BUFFER","\x0b","\xf0","\xa3","\xee"),
	HX_HCSTRING("UNIFORM_BUFFER_BINDING","\xb1","\x2b","\x2d","\x65"),
	HX_HCSTRING("UNIFORM_BUFFER_START","\xce","\xfd","\x84","\xf1"),
	HX_HCSTRING("UNIFORM_BUFFER_SIZE","\xb5","\x8c","\x28","\x19"),
	HX_HCSTRING("MAX_VERTEX_UNIFORM_BLOCKS","\x11","\x56","\x73","\xa0"),
	HX_HCSTRING("MAX_FRAGMENT_UNIFORM_BLOCKS","\x65","\x42","\x83","\x5d"),
	HX_HCSTRING("MAX_COMBINED_UNIFORM_BLOCKS","\xd0","\xc0","\xcb","\xe7"),
	HX_HCSTRING("MAX_UNIFORM_BUFFER_BINDINGS","\x87","\x4d","\x27","\xc3"),
	HX_HCSTRING("MAX_UNIFORM_BLOCK_SIZE","\xf9","\xdc","\x3f","\x6c"),
	HX_HCSTRING("MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS","\xfd","\x37","\x15","\xe3"),
	HX_HCSTRING("MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS","\x51","\x0d","\x19","\x43"),
	HX_HCSTRING("UNIFORM_BUFFER_OFFSET_ALIGNMENT","\xcb","\xa9","\xf8","\xcc"),
	HX_HCSTRING("ACTIVE_UNIFORM_BLOCKS","\x2a","\x2b","\xe3","\x0c"),
	HX_HCSTRING("UNIFORM_TYPE","\x05","\xd9","\x59","\x48"),
	HX_HCSTRING("UNIFORM_SIZE","\x0c","\x87","\xa4","\x47"),
	HX_HCSTRING("UNIFORM_BLOCK_INDEX","\x35","\x78","\x71","\x93"),
	HX_HCSTRING("UNIFORM_OFFSET","\x9e","\xca","\x4e","\x7e"),
	HX_HCSTRING("UNIFORM_ARRAY_STRIDE","\xaa","\xaa","\x4a","\x6c"),
	HX_HCSTRING("UNIFORM_MATRIX_STRIDE","\xec","\x75","\xfb","\xfc"),
	HX_HCSTRING("UNIFORM_IS_ROW_MAJOR","\x4a","\xd7","\x8e","\xf1"),
	HX_HCSTRING("UNIFORM_BLOCK_BINDING","\x28","\x1b","\x56","\x0b"),
	HX_HCSTRING("UNIFORM_BLOCK_DATA_SIZE","\xf9","\xd0","\x4f","\x72"),
	HX_HCSTRING("UNIFORM_BLOCK_ACTIVE_UNIFORMS","\x9b","\x74","\x7f","\x6e"),
	HX_HCSTRING("UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES","\x40","\x99","\x27","\x7e"),
	HX_HCSTRING("UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER","\xc1","\x8d","\xd1","\xe0"),
	HX_HCSTRING("UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER","\x15","\xc5","\x8f","\xaf"),
	HX_HCSTRING("OBJECT_TYPE","\x7a","\x57","\x2a","\x1f"),
	HX_HCSTRING("SYNC_CONDITION","\x57","\xf7","\xd5","\x73"),
	HX_HCSTRING("SYNC_STATUS","\xd6","\xf3","\xb7","\x06"),
	HX_HCSTRING("SYNC_FLAGS","\x03","\xe3","\xf0","\x79"),
	HX_HCSTRING("SYNC_FENCE","\x6d","\x3e","\x5a","\x75"),
	HX_HCSTRING("SYNC_GPU_COMMANDS_COMPLETE","\xf9","\x23","\x65","\x18"),
	HX_HCSTRING("UNSIGNALED","\x20","\x4c","\x0a","\xfd"),
	HX_HCSTRING("SIGNALED","\xc7","\x80","\xc2","\xde"),
	HX_HCSTRING("ALREADY_SIGNALED","\xae","\xdd","\x3f","\xe3"),
	HX_HCSTRING("TIMEOUT_EXPIRED","\x87","\x64","\x05","\xcd"),
	HX_HCSTRING("CONDITION_SATISFIED","\xce","\xa6","\x40","\xb0"),
	HX_HCSTRING("WAIT_FAILED","\x87","\xc9","\xdb","\x92"),
	HX_HCSTRING("SYNC_FLUSH_COMMANDS_BIT","\xd5","\xc6","\x2c","\xc7"),
	HX_HCSTRING("COLOR","\x43","\xa9","\x4a","\xc8"),
	HX_HCSTRING("DEPTH","\xe3","\x28","\x18","\x55"),
	HX_HCSTRING("STENCIL","\xdc","\x91","\xd7","\xff"),
	HX_HCSTRING("MIN","\x72","\xad","\x3a","\x00"),
	HX_HCSTRING("MAX","\x84","\xa6","\x3a","\x00"),
	HX_HCSTRING("DEPTH_COMPONENT24","\x03","\xcd","\x68","\x43"),
	HX_HCSTRING("STREAM_READ","\xb5","\x9e","\x5f","\x1e"),
	HX_HCSTRING("STREAM_COPY","\x14","\x0f","\x7d","\x14"),
	HX_HCSTRING("STATIC_READ","\xc7","\x6f","\x66","\xc3"),
	HX_HCSTRING("STATIC_COPY","\x26","\xe0","\x83","\xb9"),
	HX_HCSTRING("DYNAMIC_READ","\x76","\x23","\x56","\x2d"),
	HX_HCSTRING("DYNAMIC_COPY","\xd5","\x93","\x73","\x23"),
	HX_HCSTRING("DEPTH_COMPONENT32F","\x66","\x56","\x4b","\xb8"),
	HX_HCSTRING("DEPTH32F_STENCIL8","\xf7","\x07","\xb2","\x83"),
	HX_HCSTRING("INVALID_INDEX","\x4a","\x04","\x83","\x3c"),
	HX_HCSTRING("TIMEOUT_IGNORED","\xf4","\x3b","\x74","\x84"),
	HX_HCSTRING("MAX_CLIENT_WAIT_TIMEOUT_WEBGL","\x8a","\x37","\x14","\xd5"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("__arrayBufferBinding","\xec","\xc7","\xf6","\x4e"),
	HX_HCSTRING("__elementBufferBinding","\xe9","\x54","\x64","\x1f"),
	HX_HCSTRING("__contextID","\x6a","\xb8","\x28","\x45"),
	HX_HCSTRING("__currentProgram","\x6b","\x4a","\xcd","\x35"),
	HX_HCSTRING("__framebufferBinding","\xf8","\x60","\x08","\xef"),
	HX_HCSTRING("__initialized","\xf4","\x35","\x88","\x7f"),
	HX_HCSTRING("__isContextLost","\x89","\x18","\x92","\xb5"),
	HX_HCSTRING("__renderbufferBinding","\xef","\x6d","\xe9","\x2f"),
	HX_HCSTRING("__texture2DBinding","\x78","\xdc","\x16","\x4f"),
	HX_HCSTRING("__textureCubeMapBinding","\x79","\x78","\xa4","\xc8"),
	HX_HCSTRING("activeTexture","\xb5","\x13","\xaa","\x56"),
	HX_HCSTRING("attachShader","\xca","\xd0","\x77","\xb2"),
	HX_HCSTRING("beginQuery","\x1f","\x9c","\xb3","\xd3"),
	HX_HCSTRING("beginTransformFeedback","\xa8","\xad","\xbb","\xcc"),
	HX_HCSTRING("bindAttribLocation","\x3c","\xa6","\x30","\x1e"),
	HX_HCSTRING("bindBuffer","\x9d","\x92","\xbe","\xf8"),
	HX_HCSTRING("bindBufferBase","\x4e","\xb9","\x42","\x42"),
	HX_HCSTRING("bindBufferRange","\xe0","\xe9","\x84","\xee"),
	HX_HCSTRING("bindFramebuffer","\x30","\xc6","\x61","\xe7"),
	HX_HCSTRING("bindRenderbuffer","\x33","\xb6","\xb7","\x14"),
	HX_HCSTRING("bindSampler","\xcb","\xd8","\x3a","\x80"),
	HX_HCSTRING("bindTexture","\x9e","\xdc","\x51","\x9b"),
	HX_HCSTRING("bindTransformFeedback","\x94","\x5b","\xe4","\x3f"),
	HX_HCSTRING("bindVertexArray","\xd8","\xe8","\xe4","\xa6"),
	HX_HCSTRING("blendColor","\x52","\x33","\xb4","\xe2"),
	HX_HCSTRING("blendEquation","\xfd","\x98","\xad","\x02"),
	HX_HCSTRING("blendEquationSeparate","\x80","\x39","\x68","\xa7"),
	HX_HCSTRING("blendFunc","\x35","\xfc","\x9b","\x07"),
	HX_HCSTRING("blendFuncSeparate","\xb8","\x94","\xc0","\xca"),
	HX_HCSTRING("blitFramebuffer","\xb8","\x26","\x9e","\xee"),
	HX_HCSTRING("bufferData","\x4a","\xbf","\x73","\x93"),
	HX_HCSTRING("bufferSubData","\xaa","\xf6","\xe4","\x45"),
	HX_HCSTRING("checkFramebufferStatus","\x17","\x26","\x75","\x0a"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("clearBufferfi","\xf0","\x58","\x5b","\xe0"),
	HX_HCSTRING("clearBufferfv","\xfd","\x58","\x5b","\xe0"),
	HX_HCSTRING("clearBufferiv","\x9a","\x5b","\x5b","\xe0"),
	HX_HCSTRING("clearBufferuiv","\x55","\xdb","\x9d","\x6f"),
	HX_HCSTRING("clearColor","\x96","\xb0","\x66","\x1f"),
	HX_HCSTRING("clearDepthf","\x70","\xff","\x75","\x01"),
	HX_HCSTRING("clearStencil","\xef","\x6f","\x82","\x5b"),
	HX_HCSTRING("clientWaitSync","\xdb","\x68","\xd7","\xe9"),
	HX_HCSTRING("colorMask","\xef","\xcb","\xc3","\x23"),
	HX_HCSTRING("compileShader","\xf8","\x70","\xb2","\xda"),
	HX_HCSTRING("compressedTexImage2D","\xa7","\xd8","\x5d","\x24"),
	HX_HCSTRING("compressedTexImage3D","\x86","\xd9","\x5d","\x24"),
	HX_HCSTRING("compressedTexSubImage2D","\xd3","\xb5","\x7d","\x36"),
	HX_HCSTRING("compressedTexSubImage3D","\xb2","\xb6","\x7d","\x36"),
	HX_HCSTRING("copyBufferSubData","\xb5","\x9d","\x03","\xc2"),
	HX_HCSTRING("copyTexImage2D","\xdb","\xd0","\x76","\xe4"),
	HX_HCSTRING("copyTexSubImage2D","\x1f","\xd6","\xae","\xa4"),
	HX_HCSTRING("copyTexSubImage3D","\xfe","\xd6","\xae","\xa4"),
	HX_HCSTRING("createBuffer","\x1c","\xfd","\xe9","\xf2"),
	HX_HCSTRING("createFramebuffer","\x51","\xef","\xe8","\xcc"),
	HX_HCSTRING("createProgram","\xe8","\x22","\x3c","\xdc"),
	HX_HCSTRING("createQuery","\x6c","\xc2","\x65","\x87"),
	HX_HCSTRING("createRenderbuffer","\xf2","\x89","\x74","\x05"),
	HX_HCSTRING("createSampler","\x6c","\x9d","\x0c","\x6c"),
	HX_HCSTRING("createShader","\x41","\xff","\x75","\x3f"),
	HX_HCSTRING("createTexture","\x3f","\xa1","\x23","\x87"),
	HX_HCSTRING("createTransformFeedback","\x75","\x93","\xf4","\xd0"),
	HX_HCSTRING("createVertexArray","\xf9","\x11","\x6c","\x8c"),
	HX_HCSTRING("cullFace","\x6f","\xe7","\x31","\xac"),
	HX_HCSTRING("deleteBuffer","\x8b","\xe3","\x2c","\x37"),
	HX_HCSTRING("deleteFramebuffer","\x82","\x56","\x01","\x50"),
	HX_HCSTRING("deleteProgram","\x99","\xdd","\x82","\x52"),
	HX_HCSTRING("deleteQuery","\xdd","\xbe","\xdf","\xed"),
	HX_HCSTRING("deleteRenderbuffer","\xa1","\x6d","\xb6","\x37"),
	HX_HCSTRING("deleteSampler","\x1d","\x58","\x53","\xe2"),
	HX_HCSTRING("deleteShader","\xb0","\xe5","\xb8","\x83"),
	HX_HCSTRING("deleteSync","\x26","\x98","\xac","\x9f"),
	HX_HCSTRING("deleteTexture","\xf0","\x5b","\x6a","\xfd"),
	HX_HCSTRING("deleteTransformFeedback","\x66","\xf5","\x6f","\xce"),
	HX_HCSTRING("deleteVertexArray","\x2a","\x79","\x84","\x0f"),
	HX_HCSTRING("depthFunc","\xe7","\x45","\x48","\x9a"),
	HX_HCSTRING("depthMask","\x8f","\x9b","\xd9","\x9e"),
	HX_HCSTRING("depthRangef","\x6c","\xe9","\x9a","\x39"),
	HX_HCSTRING("detachShader","\xd8","\xd0","\xad","\xea"),
	HX_HCSTRING("disable","\xe8","\x69","\x58","\xb1"),
	HX_HCSTRING("disableVertexAttribArray","\xe3","\x69","\x74","\x4a"),
	HX_HCSTRING("drawArrays","\xde","\xf3","\xb3","\xf9"),
	HX_HCSTRING("drawArraysInstanced","\x71","\x03","\x37","\x15"),
	HX_HCSTRING("drawBuffers","\xcf","\xe7","\xd8","\xfa"),
	HX_HCSTRING("drawElements","\x5b","\xc2","\xb7","\x59"),
	HX_HCSTRING("drawElementsInstanced","\x54","\xfd","\xa5","\xed"),
	HX_HCSTRING("drawRangeElements","\x70","\x0e","\x07","\x62"),
	HX_HCSTRING("enable","\x83","\xae","\x87","\xf8"),
	HX_HCSTRING("enableVertexAttribArray","\xe8","\x46","\x5a","\xac"),
	HX_HCSTRING("endQuery","\x2d","\x1d","\xe8","\x5b"),
	HX_HCSTRING("endTransformFeedback","\xb6","\x8b","\xb4","\xa2"),
	HX_HCSTRING("fenceSync","\xac","\x19","\x56","\x6f"),
	HX_HCSTRING("finish","\x53","\x40","\x7f","\x86"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("framebufferRenderbuffer","\x63","\xdd","\xb2","\x36"),
	HX_HCSTRING("framebufferTexture2D","\xc0","\x66","\x22","\x24"),
	HX_HCSTRING("framebufferTextureLayer","\x83","\xbf","\xbc","\x93"),
	HX_HCSTRING("frontFace","\xe6","\x01","\xc1","\x80"),
	HX_HCSTRING("generateMipmap","\x9d","\xd6","\x0d","\x5b"),
	HX_HCSTRING("getActiveAttrib","\x66","\x8b","\x22","\x63"),
	HX_HCSTRING("getActiveUniform","\x98","\x35","\x4e","\xd7"),
	HX_HCSTRING("getActiveUniformBlocki","\x34","\x1a","\xa1","\xc4"),
	HX_HCSTRING("getActiveUniformBlockiv","\xc2","\xd3","\x55","\x48"),
	HX_HCSTRING("getActiveUniformBlockName","\x80","\x75","\x5b","\x56"),
	HX_HCSTRING("getActiveUniformBlockParameter","\x54","\x72","\xd3","\x90"),
	HX_HCSTRING("getActiveUniforms","\xdb","\xaf","\x20","\x8d"),
	HX_HCSTRING("getActiveUniformsiv","\x88","\xf8","\x90","\x9a"),
	HX_HCSTRING("getAttachedShaders","\xb4","\x2e","\x77","\x93"),
	HX_HCSTRING("getAttribLocation","\xd5","\x1a","\x10","\x5d"),
	HX_HCSTRING("getBoolean","\xb2","\x70","\x60","\xcd"),
	HX_HCSTRING("getBooleanv","\x84","\x2b","\x02","\xe7"),
	HX_HCSTRING("getBufferParameter","\x93","\x58","\xb4","\x14"),
	HX_HCSTRING("getBufferParameteri","\x76","\x28","\x19","\x09"),
	HX_HCSTRING("getBufferParameteri64v","\xc2","\x2c","\x38","\xab"),
	HX_HCSTRING("getBufferParameteriv","\x40","\x3f","\xea","\xec"),
	HX_HCSTRING("getBufferPointerv","\x6f","\x0d","\xa6","\xb7"),
	HX_HCSTRING("getBufferSubData","\x34","\xa0","\x05","\xb0"),
	HX_HCSTRING("getContextAttributes","\x30","\xda","\xe1","\xad"),
	HX_HCSTRING("getError","\x52","\xdb","\x00","\xd3"),
	HX_HCSTRING("getExtension","\x09","\x30","\x67","\xf4"),
	HX_HCSTRING("getFloat","\x26","\xd5","\x6d","\x62"),
	HX_HCSTRING("getFloatv","\x90","\xac","\xac","\xbd"),
	HX_HCSTRING("getFragDataLocation","\x87","\x0b","\xd2","\x5c"),
	HX_HCSTRING("getFramebufferAttachmentParameter","\x8f","\xbf","\x8d","\xff"),
	HX_HCSTRING("getFramebufferAttachmentParameteri","\xfa","\xdd","\x79","\x9c"),
	HX_HCSTRING("getFramebufferAttachmentParameteriv","\x3c","\x5d","\x28","\x4e"),
	HX_HCSTRING("getIndexedParameter","\x2e","\x9c","\xc1","\xb2"),
	HX_HCSTRING("getInteger","\xc8","\x43","\x7d","\x66"),
	HX_HCSTRING("getInteger64","\x06","\xf5","\x2b","\xf3"),
	HX_HCSTRING("getInteger64i","\xa3","\x70","\x4a","\xd3"),
	HX_HCSTRING("getInteger64i_v","\x9a","\x72","\x42","\x0f"),
	HX_HCSTRING("getInteger64v","\xb0","\x70","\x4a","\xd3"),
	HX_HCSTRING("getIntegeri","\xa1","\x0b","\x1e","\x47"),
	HX_HCSTRING("getIntegeri_v","\x18","\x49","\x71","\xd3"),
	HX_HCSTRING("getIntegerv","\xae","\x0b","\x1e","\x47"),
	HX_HCSTRING("getInternalformati","\xbf","\x0b","\x2e","\xf1"),
	HX_HCSTRING("getInternalformativ","\xd7","\x3b","\x1c","\x17"),
	HX_HCSTRING("getInternalformatParameter","\xdf","\x66","\x4d","\xf6"),
	HX_HCSTRING("getParameter","\x33","\xd2","\x06","\x58"),
	HX_HCSTRING("getProgrami","\x1b","\xac","\x1b","\xac"),
	HX_HCSTRING("getProgramiv","\xfb","\xeb","\x1a","\xec"),
	HX_HCSTRING("getProgramBinary","\x2f","\xdf","\xde","\xe5"),
	HX_HCSTRING("getProgramInfoLog","\xc8","\xf1","\xf2","\xcd"),
	HX_HCSTRING("getProgramParameter","\x3b","\xc3","\x9c","\x96"),
	HX_HCSTRING("getQuery","\x92","\x9a","\xc1","\xbd"),
	HX_HCSTRING("getQueryi","\x97","\xa5","\xa5","\x4b"),
	HX_HCSTRING("getQueryiv","\xff","\x3e","\x4b","\xe5"),
	HX_HCSTRING("getQueryObjectui","\x85","\x8b","\x77","\xca"),
	HX_HCSTRING("getQueryObjectuiv","\x51","\x89","\x22","\x5e"),
	HX_HCSTRING("getQueryParameter","\xb7","\x98","\x36","\x63"),
	HX_HCSTRING("getRenderbufferParameter","\x7d","\xc1","\xd7","\x3c"),
	HX_HCSTRING("getRenderbufferParameteri","\x4c","\x8c","\xf1","\xff"),
	HX_HCSTRING("getRenderbufferParameteriv","\xaa","\x36","\x69","\xf3"),
	HX_HCSTRING("getSamplerParameter","\x37","\xd8","\x52","\x30"),
	HX_HCSTRING("getSamplerParameterf","\x4f","\x58","\x2a","\x18"),
	HX_HCSTRING("getSamplerParameterfv","\x47","\xed","\xe2","\x0c"),
	HX_HCSTRING("getSamplerParameteri","\x52","\x58","\x2a","\x18"),
	HX_HCSTRING("getSamplerParameteriv","\xe4","\xef","\xe2","\x0c"),
	HX_HCSTRING("getShaderi","\xae","\x07","\xe8","\xae"),
	HX_HCSTRING("getShaderiv","\x08","\xb1","\x1e","\x5c"),
	HX_HCSTRING("getShaderInfoLog","\x9b","\xbd","\xc8","\xf3"),
	HX_HCSTRING("getShaderParameter","\xce","\x69","\x5b","\x36"),
	HX_HCSTRING("getShaderPrecisionFormat","\xfa","\xb8","\xcf","\xce"),
	HX_HCSTRING("getShaderSource","\x96","\xa3","\x04","\xc5"),
	HX_HCSTRING("getString","\x07","\xb2","\x86","\x8d"),
	HX_HCSTRING("getStringi","\x82","\x14","\x55","\x48"),
	HX_HCSTRING("getSupportedExtensions","\xec","\x78","\x6d","\xa1"),
	HX_HCSTRING("getSyncParameter","\x58","\x61","\xf5","\x79"),
	HX_HCSTRING("getSyncParameteri","\x11","\xcc","\xbf","\x3c"),
	HX_HCSTRING("getSyncParameteriv","\x45","\xc3","\x12","\xeb"),
	HX_HCSTRING("getTexParameter","\x78","\x98","\xd3","\xd2"),
	HX_HCSTRING("getTexParameterf","\xee","\xd0","\x51","\xa6"),
	HX_HCSTRING("getTexParameterfv","\xc8","\xff","\x44","\xe1"),
	HX_HCSTRING("getTexParameteri","\xf1","\xd0","\x51","\xa6"),
	HX_HCSTRING("getTexParameteriv","\x65","\x02","\x45","\xe1"),
	HX_HCSTRING("getTransformFeedbackVarying","\x15","\x71","\x4a","\xf2"),
	HX_HCSTRING("getUniform","\x3e","\xc7","\xc5","\x04"),
	HX_HCSTRING("getUniformf","\x68","\x8f","\x48","\x28"),
	HX_HCSTRING("getUniformfv","\x0e","\xec","\x34","\x17"),
	HX_HCSTRING("getUniformi","\x6b","\x8f","\x48","\x28"),
	HX_HCSTRING("getUniformiv","\xab","\xee","\x34","\x17"),
	HX_HCSTRING("getUniformui","\x12","\xf9","\x34","\x17"),
	HX_HCSTRING("getUniformuiv","\x24","\xf7","\x24","\x37"),
	HX_HCSTRING("getUniformBlockIndex","\x63","\xc3","\x6b","\x34"),
	HX_HCSTRING("getUniformIndices","\x89","\x2b","\x6e","\x0f"),
	HX_HCSTRING("getUniformLocation","\x93","\x5f","\xd4","\x4f"),
	HX_HCSTRING("getVertexAttrib","\x84","\x2f","\x1c","\xa3"),
	HX_HCSTRING("getVertexAttribf","\x62","\x64","\x8d","\x15"),
	HX_HCSTRING("getVertexAttribfv","\xd4","\x71","\x2a","\xc6"),
	HX_HCSTRING("getVertexAttribi","\x65","\x64","\x8d","\x15"),
	HX_HCSTRING("getVertexAttribIi","\x84","\x58","\x2a","\xc6"),
	HX_HCSTRING("getVertexAttribIiv","\x72","\x1b","\xe3","\x9e"),
	HX_HCSTRING("getVertexAttribIui","\xd9","\x25","\xe3","\x9e"),
	HX_HCSTRING("getVertexAttribIuiv","\x7d","\xf8","\xdd","\x67"),
	HX_HCSTRING("getVertexAttribiv","\x71","\x74","\x2a","\xc6"),
	HX_HCSTRING("getVertexAttribPointerv","\xbd","\xf4","\xf5","\xbb"),
	HX_HCSTRING("hint","\x87","\x3d","\x0e","\x45"),
	HX_HCSTRING("invalidateFramebuffer","\x32","\xdf","\x3e","\x7c"),
	HX_HCSTRING("invalidateSubFramebuffer","\x28","\xa2","\x17","\xad"),
	HX_HCSTRING("isBuffer","\x8a","\x58","\xfe","\x28"),
	HX_HCSTRING("isContextLost","\xa9","\xdf","\xdf","\x2d"),
	HX_HCSTRING("isEnabled","\xb7","\x81","\x2f","\x82"),
	HX_HCSTRING("isFramebuffer","\x23","\x65","\x6c","\x83"),
	HX_HCSTRING("isProgram","\xba","\xc7","\xf7","\xf7"),
	HX_HCSTRING("isQuery","\xbe","\x2e","\x70","\xfa"),
	HX_HCSTRING("isRenderbuffer","\xe0","\x2b","\xf8","\x01"),
	HX_HCSTRING("isSampler","\x3e","\x42","\xc8","\x87"),
	HX_HCSTRING("isShader","\xaf","\x5a","\x8a","\x75"),
	HX_HCSTRING("isSync","\x65","\x7f","\xc6","\x69"),
	HX_HCSTRING("isTexture","\x11","\x46","\xdf","\xa2"),
	HX_HCSTRING("isTransformFeedback","\xc7","\x32","\x99","\x37"),
	HX_HCSTRING("isVertexArray","\xcb","\x87","\xef","\x42"),
	HX_HCSTRING("lineWidth","\x72","\xb9","\x5d","\x11"),
	HX_HCSTRING("linkProgram","\xaa","\xad","\x7b","\x89"),
	HX_HCSTRING("mapBufferRange","\x61","\xd3","\x19","\x7b"),
	HX_HCSTRING("pauseTransformFeedback","\x3b","\x8a","\xd6","\xe8"),
	HX_HCSTRING("pixelStorei","\x8e","\x34","\xc8","\x80"),
	HX_HCSTRING("polygonOffset","\xad","\x25","\x4d","\x66"),
	HX_HCSTRING("programBinary","\xa5","\x35","\xbe","\x7b"),
	HX_HCSTRING("programParameteri","\x44","\xda","\x18","\x0b"),
	HX_HCSTRING("readBuffer","\xf6","\xa0","\x10","\xca"),
	HX_HCSTRING("readPixels","\x23","\xd3","\x25","\x86"),
	HX_HCSTRING("releaseShaderCompiler","\x0b","\x50","\x7a","\xa0"),
	HX_HCSTRING("renderbufferStorage","\x05","\xa1","\x70","\x87"),
	HX_HCSTRING("renderbufferStorageMultisample","\x5e","\x46","\x79","\x34"),
	HX_HCSTRING("resumeTransformFeedback","\xa4","\x79","\xd5","\x6f"),
	HX_HCSTRING("sampleCoverage","\x32","\x68","\x81","\x3b"),
	HX_HCSTRING("samplerParameterf","\xc5","\x21","\xb5","\xf0"),
	HX_HCSTRING("samplerParameteri","\xc8","\x21","\xb5","\xf0"),
	HX_HCSTRING("scissor","\x1c","\x28","\xe7","\x04"),
	HX_HCSTRING("shaderBinary","\x06","\x59","\xf4","\x5c"),
	HX_HCSTRING("shaderSource","\xe0","\x4d","\x1a","\xa2"),
	HX_HCSTRING("stencilFunc","\x60","\x83","\xbe","\x40"),
	HX_HCSTRING("stencilFuncSeparate","\xe3","\xbe","\xce","\xb2"),
	HX_HCSTRING("stencilMask","\x08","\xd9","\x4f","\x45"),
	HX_HCSTRING("stencilMaskSeparate","\x8b","\xfc","\xa9","\xc6"),
	HX_HCSTRING("stencilOp","\x3d","\x7a","\xec","\x56"),
	HX_HCSTRING("stencilOpSeparate","\xc0","\x5a","\x4a","\x53"),
	HX_HCSTRING("texImage2D","\xc6","\x7c","\x67","\xb9"),
	HX_HCSTRING("texImage3D","\xa5","\x7d","\x67","\xb9"),
	HX_HCSTRING("texStorage2D","\xe6","\x9c","\x44","\xcf"),
	HX_HCSTRING("texStorage3D","\xc5","\x9d","\x44","\xcf"),
	HX_HCSTRING("texParameterf","\x64","\x27","\x31","\x3c"),
	HX_HCSTRING("texParameteri","\x67","\x27","\x31","\x3c"),
	HX_HCSTRING("texSubImage2D","\x14","\x2f","\x90","\x28"),
	HX_HCSTRING("texSubImage3D","\xf3","\x2f","\x90","\x28"),
	HX_HCSTRING("transformFeedbackVaryings","\x34","\xb1","\x1a","\x48"),
	HX_HCSTRING("uniform1f","\x49","\x21","\xde","\x07"),
	HX_HCSTRING("uniform1fv","\x0d","\xff","\x7e","\xda"),
	HX_HCSTRING("uniform1i","\x4c","\x21","\xde","\x07"),
	HX_HCSTRING("uniform1iv","\xaa","\x01","\x7f","\xda"),
	HX_HCSTRING("uniform1ui","\x11","\x0c","\x7f","\xda"),
	HX_HCSTRING("uniform1uiv","\x45","\x83","\xab","\x54"),
	HX_HCSTRING("uniform2f","\x28","\x22","\xde","\x07"),
	HX_HCSTRING("uniform2fv","\x4e","\xc1","\x7f","\xda"),
	HX_HCSTRING("uniform2i","\x2b","\x22","\xde","\x07"),
	HX_HCSTRING("uniform2iv","\xeb","\xc3","\x7f","\xda"),
	HX_HCSTRING("uniform2ui","\x52","\xce","\x7f","\xda"),
	HX_HCSTRING("uniform2uiv","\xe4","\xb9","\x54","\x55"),
	HX_HCSTRING("uniform3f","\x07","\x23","\xde","\x07"),
	HX_HCSTRING("uniform3fv","\x8f","\x83","\x80","\xda"),
	HX_HCSTRING("uniform3i","\x0a","\x23","\xde","\x07"),
	HX_HCSTRING("uniform3iv","\x2c","\x86","\x80","\xda"),
	HX_HCSTRING("uniform3ui","\x93","\x90","\x80","\xda"),
	HX_HCSTRING("uniform3uiv","\x83","\xf0","\xfd","\x55"),
	HX_HCSTRING("uniform4f","\xe6","\x23","\xde","\x07"),
	HX_HCSTRING("uniform4fv","\xd0","\x45","\x81","\xda"),
	HX_HCSTRING("uniform4i","\xe9","\x23","\xde","\x07"),
	HX_HCSTRING("uniform4iv","\x6d","\x48","\x81","\xda"),
	HX_HCSTRING("uniform4ui","\xd4","\x52","\x81","\xda"),
	HX_HCSTRING("uniform4uiv","\x22","\x27","\xa7","\x56"),
	HX_HCSTRING("uniformBlockBinding","\xcc","\xbc","\xc4","\xbf"),
	HX_HCSTRING("uniformMatrix2fv","\x8d","\x8a","\x59","\xc5"),
	HX_HCSTRING("uniformMatrix2x3fv","\x48","\x61","\x6e","\x02"),
	HX_HCSTRING("uniformMatrix2x4fv","\x89","\x23","\x6f","\x02"),
	HX_HCSTRING("uniformMatrix3fv","\xce","\x4c","\x5a","\xc5"),
	HX_HCSTRING("uniformMatrix3x2fv","\x88","\x33","\xd4","\x95"),
	HX_HCSTRING("uniformMatrix3x4fv","\x0a","\xb8","\xd5","\x95"),
	HX_HCSTRING("uniformMatrix4fv","\x0f","\x0f","\x5b","\xc5"),
	HX_HCSTRING("uniformMatrix4x2fv","\x09","\xc8","\x3a","\x29"),
	HX_HCSTRING("uniformMatrix4x3fv","\x4a","\x8a","\x3b","\x29"),
	HX_HCSTRING("unmapBuffer","\x43","\x9f","\x1a","\x39"),
	HX_HCSTRING("useProgram","\xfd","\x6c","\xac","\xf6"),
	HX_HCSTRING("validateProgram","\x8e","\x80","\x0f","\xef"),
	HX_HCSTRING("vertexAttrib1f","\x63","\x94","\xb6","\x53"),
	HX_HCSTRING("vertexAttrib1fv","\xb3","\x42","\x0b","\xec"),
	HX_HCSTRING("vertexAttrib2f","\x42","\x95","\xb6","\x53"),
	HX_HCSTRING("vertexAttrib2fv","\xf4","\x04","\x0c","\xec"),
	HX_HCSTRING("vertexAttrib3f","\x21","\x96","\xb6","\x53"),
	HX_HCSTRING("vertexAttrib3fv","\x35","\xc7","\x0c","\xec"),
	HX_HCSTRING("vertexAttrib4f","\x00","\x97","\xb6","\x53"),
	HX_HCSTRING("vertexAttrib4fv","\x76","\x89","\x0d","\xec"),
	HX_HCSTRING("vertexAttribDivisor","\x30","\x09","\x77","\x5f"),
	HX_HCSTRING("vertexAttribI4i","\x30","\x4d","\x1d","\xec"),
	HX_HCSTRING("vertexAttribI4iv","\x46","\x3d","\x86","\xad"),
	HX_HCSTRING("vertexAttribI4ui","\xad","\x47","\x86","\xad"),
	HX_HCSTRING("vertexAttribI4uiv","\x29","\x70","\xf8","\x27"),
	HX_HCSTRING("vertexAttribIPointer","\x42","\xcb","\x4a","\x67"),
	HX_HCSTRING("vertexAttribPointer","\x8f","\x04","\xb6","\x3f"),
	HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c"),
	HX_HCSTRING("waitSync","\x70","\x1f","\x42","\x55"),
	HX_HCSTRING("__contextLost","\x53","\xd0","\x33","\x6d"),
	HX_HCSTRING("__createObject","\xfb","\x41","\x55","\x58"),
	HX_HCSTRING("__getObjectID","\xf0","\x2f","\x98","\xf1"),
	HX_HCSTRING("__initialize","\x70","\xac","\x4e","\x25"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeGLRenderContext_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NativeGLRenderContext_obj::__extensionObjects,"__extensionObjects");
	HX_MARK_MEMBER_NAME(NativeGLRenderContext_obj::__extensionObjectConstructors,"__extensionObjectConstructors");
	HX_MARK_MEMBER_NAME(NativeGLRenderContext_obj::__lastContextID,"__lastContextID");
	HX_MARK_MEMBER_NAME(NativeGLRenderContext_obj::__supportedExtensions,"__supportedExtensions");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeGLRenderContext_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NativeGLRenderContext_obj::__extensionObjects,"__extensionObjects");
	HX_VISIT_MEMBER_NAME(NativeGLRenderContext_obj::__extensionObjectConstructors,"__extensionObjectConstructors");
	HX_VISIT_MEMBER_NAME(NativeGLRenderContext_obj::__lastContextID,"__lastContextID");
	HX_VISIT_MEMBER_NAME(NativeGLRenderContext_obj::__supportedExtensions,"__supportedExtensions");
};

#endif

hx::Class NativeGLRenderContext_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__extensionObjects","\x35","\x8e","\xaf","\xef"),
	HX_HCSTRING("__extensionObjectConstructors","\xd7","\x1f","\xf7","\x9f"),
	HX_HCSTRING("__lastContextID","\x34","\x83","\xe7","\x9c"),
	HX_HCSTRING("__supportedExtensions","\xc2","\x2c","\x4a","\x37"),
	::String(null()) };

void NativeGLRenderContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native.NativeGLRenderContext","\x46","\x4a","\xe7","\x3c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeGLRenderContext_obj::__GetStatic;
	__mClass->mSetStaticField = &NativeGLRenderContext_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NativeGLRenderContext_obj >;
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

void NativeGLRenderContext_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		{
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();
			::haxe::ds::StringMap tmp1 = tmp;
			return tmp1;
		}
		return null();
	}
};
	__extensionObjectConstructors= _Function_0_1::Block();
	__lastContextID= (int)0;
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
