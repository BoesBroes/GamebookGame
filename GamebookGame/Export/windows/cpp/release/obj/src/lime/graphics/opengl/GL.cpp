#include <hxcpp.h>

#ifndef INCLUDED_haxe__Int64_Int64_Impl_
#include <haxe/_Int64/Int64_Impl_.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLContextType
#include <lime/graphics/opengl/GLContextType.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_BytePointerData
#include <lime/utils/BytePointerData.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{

Void GL_obj::__construct()
{
	return null();
}

//GL_obj::~GL_obj() { }

Dynamic GL_obj::__CreateEmpty() { return  new GL_obj; }
hx::ObjectPtr< GL_obj > GL_obj::__new()
{  hx::ObjectPtr< GL_obj > _result_ = new GL_obj();
	_result_->__construct();
	return _result_;}

Dynamic GL_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GL_obj > _result_ = new GL_obj();
	_result_->__construct();
	return _result_;}

int GL_obj::DEPTH_BUFFER_BIT;

int GL_obj::STENCIL_BUFFER_BIT;

int GL_obj::COLOR_BUFFER_BIT;

int GL_obj::POINTS;

int GL_obj::LINES;

int GL_obj::LINE_LOOP;

int GL_obj::LINE_STRIP;

int GL_obj::TRIANGLES;

int GL_obj::TRIANGLE_STRIP;

int GL_obj::TRIANGLE_FAN;

int GL_obj::ZERO;

int GL_obj::ONE;

int GL_obj::SRC_COLOR;

int GL_obj::ONE_MINUS_SRC_COLOR;

int GL_obj::SRC_ALPHA;

int GL_obj::ONE_MINUS_SRC_ALPHA;

int GL_obj::DST_ALPHA;

int GL_obj::ONE_MINUS_DST_ALPHA;

int GL_obj::DST_COLOR;

int GL_obj::ONE_MINUS_DST_COLOR;

int GL_obj::SRC_ALPHA_SATURATE;

int GL_obj::FUNC_ADD;

int GL_obj::BLEND_EQUATION;

int GL_obj::BLEND_EQUATION_RGB;

int GL_obj::BLEND_EQUATION_ALPHA;

int GL_obj::FUNC_SUBTRACT;

int GL_obj::FUNC_REVERSE_SUBTRACT;

int GL_obj::BLEND_DST_RGB;

int GL_obj::BLEND_SRC_RGB;

int GL_obj::BLEND_DST_ALPHA;

int GL_obj::BLEND_SRC_ALPHA;

int GL_obj::CONSTANT_COLOR;

int GL_obj::ONE_MINUS_CONSTANT_COLOR;

int GL_obj::CONSTANT_ALPHA;

int GL_obj::ONE_MINUS_CONSTANT_ALPHA;

int GL_obj::BLEND_COLOR;

int GL_obj::ARRAY_BUFFER;

int GL_obj::ELEMENT_ARRAY_BUFFER;

int GL_obj::ARRAY_BUFFER_BINDING;

int GL_obj::ELEMENT_ARRAY_BUFFER_BINDING;

int GL_obj::STREAM_DRAW;

int GL_obj::STATIC_DRAW;

int GL_obj::DYNAMIC_DRAW;

int GL_obj::BUFFER_SIZE;

int GL_obj::BUFFER_USAGE;

int GL_obj::CURRENT_VERTEX_ATTRIB;

int GL_obj::FRONT;

int GL_obj::BACK;

int GL_obj::FRONT_AND_BACK;

int GL_obj::CULL_FACE;

int GL_obj::BLEND;

int GL_obj::DITHER;

int GL_obj::STENCIL_TEST;

int GL_obj::DEPTH_TEST;

int GL_obj::SCISSOR_TEST;

int GL_obj::POLYGON_OFFSET_FILL;

int GL_obj::SAMPLE_ALPHA_TO_COVERAGE;

int GL_obj::SAMPLE_COVERAGE;

int GL_obj::NO_ERROR;

int GL_obj::INVALID_ENUM;

int GL_obj::INVALID_VALUE;

int GL_obj::INVALID_OPERATION;

int GL_obj::OUT_OF_MEMORY;

int GL_obj::CW;

int GL_obj::CCW;

int GL_obj::LINE_WIDTH;

int GL_obj::ALIASED_POINT_SIZE_RANGE;

int GL_obj::ALIASED_LINE_WIDTH_RANGE;

int GL_obj::CULL_FACE_MODE;

int GL_obj::FRONT_FACE;

int GL_obj::DEPTH_RANGE;

int GL_obj::DEPTH_WRITEMASK;

int GL_obj::DEPTH_CLEAR_VALUE;

int GL_obj::DEPTH_FUNC;

int GL_obj::STENCIL_CLEAR_VALUE;

int GL_obj::STENCIL_FUNC;

int GL_obj::STENCIL_FAIL;

int GL_obj::STENCIL_PASS_DEPTH_FAIL;

int GL_obj::STENCIL_PASS_DEPTH_PASS;

int GL_obj::STENCIL_REF;

int GL_obj::STENCIL_VALUE_MASK;

int GL_obj::STENCIL_WRITEMASK;

int GL_obj::STENCIL_BACK_FUNC;

int GL_obj::STENCIL_BACK_FAIL;

int GL_obj::STENCIL_BACK_PASS_DEPTH_FAIL;

int GL_obj::STENCIL_BACK_PASS_DEPTH_PASS;

int GL_obj::STENCIL_BACK_REF;

int GL_obj::STENCIL_BACK_VALUE_MASK;

int GL_obj::STENCIL_BACK_WRITEMASK;

int GL_obj::VIEWPORT;

int GL_obj::SCISSOR_BOX;

int GL_obj::COLOR_CLEAR_VALUE;

int GL_obj::COLOR_WRITEMASK;

int GL_obj::UNPACK_ALIGNMENT;

int GL_obj::PACK_ALIGNMENT;

int GL_obj::MAX_TEXTURE_SIZE;

int GL_obj::MAX_VIEWPORT_DIMS;

int GL_obj::SUBPIXEL_BITS;

int GL_obj::RED_BITS;

int GL_obj::GREEN_BITS;

int GL_obj::BLUE_BITS;

int GL_obj::ALPHA_BITS;

int GL_obj::DEPTH_BITS;

int GL_obj::STENCIL_BITS;

int GL_obj::POLYGON_OFFSET_UNITS;

int GL_obj::POLYGON_OFFSET_FACTOR;

int GL_obj::TEXTURE_BINDING_2D;

int GL_obj::SAMPLE_BUFFERS;

int GL_obj::SAMPLES;

int GL_obj::SAMPLE_COVERAGE_VALUE;

int GL_obj::SAMPLE_COVERAGE_INVERT;

int GL_obj::NUM_COMPRESSED_TEXTURE_FORMATS;

int GL_obj::COMPRESSED_TEXTURE_FORMATS;

int GL_obj::DONT_CARE;

int GL_obj::FASTEST;

int GL_obj::NICEST;

int GL_obj::GENERATE_MIPMAP_HINT;

int GL_obj::BYTE;

int GL_obj::UNSIGNED_BYTE;

int GL_obj::SHORT;

int GL_obj::UNSIGNED_SHORT;

int GL_obj::INT;

int GL_obj::UNSIGNED_INT;

int GL_obj::FLOAT;

int GL_obj::DEPTH_COMPONENT;

int GL_obj::ALPHA;

int GL_obj::RGB;

int GL_obj::RGBA;

int GL_obj::LUMINANCE;

int GL_obj::LUMINANCE_ALPHA;

int GL_obj::UNSIGNED_SHORT_4_4_4_4;

int GL_obj::UNSIGNED_SHORT_5_5_5_1;

int GL_obj::UNSIGNED_SHORT_5_6_5;

int GL_obj::FRAGMENT_SHADER;

int GL_obj::VERTEX_SHADER;

int GL_obj::MAX_VERTEX_ATTRIBS;

int GL_obj::MAX_VERTEX_UNIFORM_VECTORS;

int GL_obj::MAX_VARYING_VECTORS;

int GL_obj::MAX_COMBINED_TEXTURE_IMAGE_UNITS;

int GL_obj::MAX_VERTEX_TEXTURE_IMAGE_UNITS;

int GL_obj::MAX_TEXTURE_IMAGE_UNITS;

int GL_obj::MAX_FRAGMENT_UNIFORM_VECTORS;

int GL_obj::SHADER_TYPE;

int GL_obj::DELETE_STATUS;

int GL_obj::LINK_STATUS;

int GL_obj::VALIDATE_STATUS;

int GL_obj::ATTACHED_SHADERS;

int GL_obj::ACTIVE_UNIFORMS;

int GL_obj::ACTIVE_ATTRIBUTES;

int GL_obj::SHADING_LANGUAGE_VERSION;

int GL_obj::CURRENT_PROGRAM;

int GL_obj::NEVER;

int GL_obj::LESS;

int GL_obj::EQUAL;

int GL_obj::LEQUAL;

int GL_obj::GREATER;

int GL_obj::NOTEQUAL;

int GL_obj::GEQUAL;

int GL_obj::ALWAYS;

int GL_obj::KEEP;

int GL_obj::REPLACE;

int GL_obj::INCR;

int GL_obj::DECR;

int GL_obj::INVERT;

int GL_obj::INCR_WRAP;

int GL_obj::DECR_WRAP;

int GL_obj::VENDOR;

int GL_obj::RENDERER;

int GL_obj::VERSION;

int GL_obj::EXTENSIONS;

int GL_obj::NEAREST;

int GL_obj::LINEAR;

int GL_obj::NEAREST_MIPMAP_NEAREST;

int GL_obj::LINEAR_MIPMAP_NEAREST;

int GL_obj::NEAREST_MIPMAP_LINEAR;

int GL_obj::LINEAR_MIPMAP_LINEAR;

int GL_obj::TEXTURE_MAG_FILTER;

int GL_obj::TEXTURE_MIN_FILTER;

int GL_obj::TEXTURE_WRAP_S;

int GL_obj::TEXTURE_WRAP_T;

int GL_obj::TEXTURE_2D;

int GL_obj::TEXTURE;

int GL_obj::TEXTURE_CUBE_MAP;

int GL_obj::TEXTURE_BINDING_CUBE_MAP;

int GL_obj::TEXTURE_CUBE_MAP_POSITIVE_X;

int GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_X;

int GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Y;

int GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Y;

int GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Z;

int GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Z;

int GL_obj::MAX_CUBE_MAP_TEXTURE_SIZE;

int GL_obj::TEXTURE0;

int GL_obj::TEXTURE1;

int GL_obj::TEXTURE2;

int GL_obj::TEXTURE3;

int GL_obj::TEXTURE4;

int GL_obj::TEXTURE5;

int GL_obj::TEXTURE6;

int GL_obj::TEXTURE7;

int GL_obj::TEXTURE8;

int GL_obj::TEXTURE9;

int GL_obj::TEXTURE10;

int GL_obj::TEXTURE11;

int GL_obj::TEXTURE12;

int GL_obj::TEXTURE13;

int GL_obj::TEXTURE14;

int GL_obj::TEXTURE15;

int GL_obj::TEXTURE16;

int GL_obj::TEXTURE17;

int GL_obj::TEXTURE18;

int GL_obj::TEXTURE19;

int GL_obj::TEXTURE20;

int GL_obj::TEXTURE21;

int GL_obj::TEXTURE22;

int GL_obj::TEXTURE23;

int GL_obj::TEXTURE24;

int GL_obj::TEXTURE25;

int GL_obj::TEXTURE26;

int GL_obj::TEXTURE27;

int GL_obj::TEXTURE28;

int GL_obj::TEXTURE29;

int GL_obj::TEXTURE30;

int GL_obj::TEXTURE31;

int GL_obj::ACTIVE_TEXTURE;

int GL_obj::REPEAT;

int GL_obj::CLAMP_TO_EDGE;

int GL_obj::MIRRORED_REPEAT;

int GL_obj::FLOAT_VEC2;

int GL_obj::FLOAT_VEC3;

int GL_obj::FLOAT_VEC4;

int GL_obj::INT_VEC2;

int GL_obj::INT_VEC3;

int GL_obj::INT_VEC4;

int GL_obj::BOOL;

int GL_obj::BOOL_VEC2;

int GL_obj::BOOL_VEC3;

int GL_obj::BOOL_VEC4;

int GL_obj::FLOAT_MAT2;

int GL_obj::FLOAT_MAT3;

int GL_obj::FLOAT_MAT4;

int GL_obj::SAMPLER_2D;

int GL_obj::SAMPLER_CUBE;

int GL_obj::VERTEX_ATTRIB_ARRAY_ENABLED;

int GL_obj::VERTEX_ATTRIB_ARRAY_SIZE;

int GL_obj::VERTEX_ATTRIB_ARRAY_STRIDE;

int GL_obj::VERTEX_ATTRIB_ARRAY_TYPE;

int GL_obj::VERTEX_ATTRIB_ARRAY_NORMALIZED;

int GL_obj::VERTEX_ATTRIB_ARRAY_POINTER;

int GL_obj::VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;

int GL_obj::IMPLEMENTATION_COLOR_READ_TYPE;

int GL_obj::IMPLEMENTATION_COLOR_READ_FORMAT;

int GL_obj::VERTEX_PROGRAM_POINT_SIZE;

int GL_obj::POINT_SPRITE;

int GL_obj::COMPILE_STATUS;

int GL_obj::LOW_FLOAT;

int GL_obj::MEDIUM_FLOAT;

int GL_obj::HIGH_FLOAT;

int GL_obj::LOW_INT;

int GL_obj::MEDIUM_INT;

int GL_obj::HIGH_INT;

int GL_obj::FRAMEBUFFER;

int GL_obj::RENDERBUFFER;

int GL_obj::RGBA4;

int GL_obj::RGB5_A1;

int GL_obj::RGB565;

int GL_obj::DEPTH_COMPONENT16;

int GL_obj::STENCIL_INDEX;

int GL_obj::STENCIL_INDEX8;

int GL_obj::DEPTH_STENCIL;

int GL_obj::RENDERBUFFER_WIDTH;

int GL_obj::RENDERBUFFER_HEIGHT;

int GL_obj::RENDERBUFFER_INTERNAL_FORMAT;

int GL_obj::RENDERBUFFER_RED_SIZE;

int GL_obj::RENDERBUFFER_GREEN_SIZE;

int GL_obj::RENDERBUFFER_BLUE_SIZE;

int GL_obj::RENDERBUFFER_ALPHA_SIZE;

int GL_obj::RENDERBUFFER_DEPTH_SIZE;

int GL_obj::RENDERBUFFER_STENCIL_SIZE;

int GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;

int GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;

int GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;

int GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;

int GL_obj::COLOR_ATTACHMENT0;

int GL_obj::DEPTH_ATTACHMENT;

int GL_obj::STENCIL_ATTACHMENT;

int GL_obj::DEPTH_STENCIL_ATTACHMENT;

int GL_obj::NONE;

int GL_obj::FRAMEBUFFER_COMPLETE;

int GL_obj::FRAMEBUFFER_INCOMPLETE_ATTACHMENT;

int GL_obj::FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;

int GL_obj::FRAMEBUFFER_INCOMPLETE_DIMENSIONS;

int GL_obj::FRAMEBUFFER_UNSUPPORTED;

int GL_obj::FRAMEBUFFER_BINDING;

int GL_obj::RENDERBUFFER_BINDING;

int GL_obj::MAX_RENDERBUFFER_SIZE;

int GL_obj::INVALID_FRAMEBUFFER_OPERATION;

int GL_obj::UNPACK_FLIP_Y_WEBGL;

int GL_obj::UNPACK_PREMULTIPLY_ALPHA_WEBGL;

int GL_obj::CONTEXT_LOST_WEBGL;

int GL_obj::UNPACK_COLORSPACE_CONVERSION_WEBGL;

int GL_obj::BROWSER_DEFAULT_WEBGL;

int GL_obj::READ_BUFFER;

int GL_obj::UNPACK_ROW_LENGTH;

int GL_obj::UNPACK_SKIP_ROWS;

int GL_obj::UNPACK_SKIP_PIXELS;

int GL_obj::PACK_ROW_LENGTH;

int GL_obj::PACK_SKIP_ROWS;

int GL_obj::PACK_SKIP_PIXELS;

int GL_obj::TEXTURE_BINDING_3D;

int GL_obj::UNPACK_SKIP_IMAGES;

int GL_obj::UNPACK_IMAGE_HEIGHT;

int GL_obj::MAX_3D_TEXTURE_SIZE;

int GL_obj::MAX_ELEMENTS_VERTICES;

int GL_obj::MAX_ELEMENTS_INDICES;

int GL_obj::MAX_TEXTURE_LOD_BIAS;

int GL_obj::MAX_FRAGMENT_UNIFORM_COMPONENTS;

int GL_obj::MAX_VERTEX_UNIFORM_COMPONENTS;

int GL_obj::MAX_ARRAY_TEXTURE_LAYERS;

int GL_obj::MIN_PROGRAM_TEXEL_OFFSET;

int GL_obj::MAX_PROGRAM_TEXEL_OFFSET;

int GL_obj::MAX_VARYING_COMPONENTS;

int GL_obj::FRAGMENT_SHADER_DERIVATIVE_HINT;

int GL_obj::RASTERIZER_DISCARD;

int GL_obj::VERTEX_ARRAY_BINDING;

int GL_obj::MAX_VERTEX_OUTPUT_COMPONENTS;

int GL_obj::MAX_FRAGMENT_INPUT_COMPONENTS;

int GL_obj::MAX_SERVER_WAIT_TIMEOUT;

int GL_obj::MAX_ELEMENT_INDEX;

int GL_obj::RED;

int GL_obj::RGB8;

int GL_obj::RGBA8;

int GL_obj::RGB10_A2;

int GL_obj::TEXTURE_3D;

int GL_obj::TEXTURE_WRAP_R;

int GL_obj::TEXTURE_MIN_LOD;

int GL_obj::TEXTURE_MAX_LOD;

int GL_obj::TEXTURE_BASE_LEVEL;

int GL_obj::TEXTURE_MAX_LEVEL;

int GL_obj::TEXTURE_COMPARE_MODE;

int GL_obj::TEXTURE_COMPARE_FUNC;

int GL_obj::SRGB;

int GL_obj::SRGB8;

int GL_obj::SRGB8_ALPHA8;

int GL_obj::COMPARE_REF_TO_TEXTURE;

int GL_obj::RGBA32F;

int GL_obj::RGB32F;

int GL_obj::RGBA16F;

int GL_obj::RGB16F;

int GL_obj::TEXTURE_2D_ARRAY;

int GL_obj::TEXTURE_BINDING_2D_ARRAY;

int GL_obj::R11F_G11F_B10F;

int GL_obj::RGB9_E5;

int GL_obj::RGBA32UI;

int GL_obj::RGB32UI;

int GL_obj::RGBA16UI;

int GL_obj::RGB16UI;

int GL_obj::RGBA8UI;

int GL_obj::RGB8UI;

int GL_obj::RGBA32I;

int GL_obj::RGB32I;

int GL_obj::RGBA16I;

int GL_obj::RGB16I;

int GL_obj::RGBA8I;

int GL_obj::RGB8I;

int GL_obj::RED_INTEGER;

int GL_obj::RGB_INTEGER;

int GL_obj::RGBA_INTEGER;

int GL_obj::R8;

int GL_obj::RG8;

int GL_obj::R16F;

int GL_obj::R32F;

int GL_obj::RG16F;

int GL_obj::RG32F;

int GL_obj::R8I;

int GL_obj::R8UI;

int GL_obj::R16I;

int GL_obj::R16UI;

int GL_obj::R32I;

int GL_obj::R32UI;

int GL_obj::RG8I;

int GL_obj::RG8UI;

int GL_obj::RG16I;

int GL_obj::RG16UI;

int GL_obj::RG32I;

int GL_obj::RG32UI;

int GL_obj::R8_SNORM;

int GL_obj::RG8_SNORM;

int GL_obj::RGB8_SNORM;

int GL_obj::RGBA8_SNORM;

int GL_obj::RGB10_A2UI;

int GL_obj::TEXTURE_IMMUTABLE_FORMAT;

int GL_obj::TEXTURE_IMMUTABLE_LEVELS;

int GL_obj::UNSIGNED_INT_2_10_10_10_REV;

int GL_obj::UNSIGNED_INT_10F_11F_11F_REV;

int GL_obj::UNSIGNED_INT_5_9_9_9_REV;

int GL_obj::FLOAT_32_UNSIGNED_INT_24_8_REV;

int GL_obj::UNSIGNED_INT_24_8;

int GL_obj::HALF_FLOAT;

int GL_obj::RG;

int GL_obj::RG_INTEGER;

int GL_obj::INT_2_10_10_10_REV;

int GL_obj::CURRENT_QUERY;

int GL_obj::QUERY_RESULT;

int GL_obj::QUERY_RESULT_AVAILABLE;

int GL_obj::ANY_SAMPLES_PASSED;

int GL_obj::ANY_SAMPLES_PASSED_CONSERVATIVE;

int GL_obj::MAX_DRAW_BUFFERS;

int GL_obj::DRAW_BUFFER0;

int GL_obj::DRAW_BUFFER1;

int GL_obj::DRAW_BUFFER2;

int GL_obj::DRAW_BUFFER3;

int GL_obj::DRAW_BUFFER4;

int GL_obj::DRAW_BUFFER5;

int GL_obj::DRAW_BUFFER6;

int GL_obj::DRAW_BUFFER7;

int GL_obj::DRAW_BUFFER8;

int GL_obj::DRAW_BUFFER9;

int GL_obj::DRAW_BUFFER10;

int GL_obj::DRAW_BUFFER11;

int GL_obj::DRAW_BUFFER12;

int GL_obj::DRAW_BUFFER13;

int GL_obj::DRAW_BUFFER14;

int GL_obj::DRAW_BUFFER15;

int GL_obj::MAX_COLOR_ATTACHMENTS;

int GL_obj::COLOR_ATTACHMENT1;

int GL_obj::COLOR_ATTACHMENT2;

int GL_obj::COLOR_ATTACHMENT3;

int GL_obj::COLOR_ATTACHMENT4;

int GL_obj::COLOR_ATTACHMENT5;

int GL_obj::COLOR_ATTACHMENT6;

int GL_obj::COLOR_ATTACHMENT7;

int GL_obj::COLOR_ATTACHMENT8;

int GL_obj::COLOR_ATTACHMENT9;

int GL_obj::COLOR_ATTACHMENT10;

int GL_obj::COLOR_ATTACHMENT11;

int GL_obj::COLOR_ATTACHMENT12;

int GL_obj::COLOR_ATTACHMENT13;

int GL_obj::COLOR_ATTACHMENT14;

int GL_obj::COLOR_ATTACHMENT15;

int GL_obj::SAMPLER_3D;

int GL_obj::SAMPLER_2D_SHADOW;

int GL_obj::SAMPLER_2D_ARRAY;

int GL_obj::SAMPLER_2D_ARRAY_SHADOW;

int GL_obj::SAMPLER_CUBE_SHADOW;

int GL_obj::INT_SAMPLER_2D;

int GL_obj::INT_SAMPLER_3D;

int GL_obj::INT_SAMPLER_CUBE;

int GL_obj::INT_SAMPLER_2D_ARRAY;

int GL_obj::UNSIGNED_INT_SAMPLER_2D;

int GL_obj::UNSIGNED_INT_SAMPLER_3D;

int GL_obj::UNSIGNED_INT_SAMPLER_CUBE;

int GL_obj::UNSIGNED_INT_SAMPLER_2D_ARRAY;

int GL_obj::MAX_SAMPLES;

int GL_obj::SAMPLER_BINDING;

int GL_obj::PIXEL_PACK_BUFFER;

int GL_obj::PIXEL_UNPACK_BUFFER;

int GL_obj::PIXEL_PACK_BUFFER_BINDING;

int GL_obj::PIXEL_UNPACK_BUFFER_BINDING;

int GL_obj::COPY_READ_BUFFER;

int GL_obj::COPY_WRITE_BUFFER;

int GL_obj::COPY_READ_BUFFER_BINDING;

int GL_obj::COPY_WRITE_BUFFER_BINDING;

int GL_obj::FLOAT_MAT2x3;

int GL_obj::FLOAT_MAT2x4;

int GL_obj::FLOAT_MAT3x2;

int GL_obj::FLOAT_MAT3x4;

int GL_obj::FLOAT_MAT4x2;

int GL_obj::FLOAT_MAT4x3;

int GL_obj::UNSIGNED_INT_VEC2;

int GL_obj::UNSIGNED_INT_VEC3;

int GL_obj::UNSIGNED_INT_VEC4;

int GL_obj::UNSIGNED_NORMALIZED;

int GL_obj::SIGNED_NORMALIZED;

int GL_obj::VERTEX_ATTRIB_ARRAY_INTEGER;

int GL_obj::VERTEX_ATTRIB_ARRAY_DIVISOR;

int GL_obj::TRANSFORM_FEEDBACK_BUFFER_MODE;

int GL_obj::MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS;

int GL_obj::TRANSFORM_FEEDBACK_VARYINGS;

int GL_obj::TRANSFORM_FEEDBACK_BUFFER_START;

int GL_obj::TRANSFORM_FEEDBACK_BUFFER_SIZE;

int GL_obj::TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN;

int GL_obj::MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS;

int GL_obj::MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS;

int GL_obj::INTERLEAVED_ATTRIBS;

int GL_obj::SEPARATE_ATTRIBS;

int GL_obj::TRANSFORM_FEEDBACK_BUFFER;

int GL_obj::TRANSFORM_FEEDBACK_BUFFER_BINDING;

int GL_obj::TRANSFORM_FEEDBACK;

int GL_obj::TRANSFORM_FEEDBACK_PAUSED;

int GL_obj::TRANSFORM_FEEDBACK_ACTIVE;

int GL_obj::TRANSFORM_FEEDBACK_BINDING;

int GL_obj::FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING;

int GL_obj::FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE;

int GL_obj::FRAMEBUFFER_ATTACHMENT_RED_SIZE;

int GL_obj::FRAMEBUFFER_ATTACHMENT_GREEN_SIZE;

int GL_obj::FRAMEBUFFER_ATTACHMENT_BLUE_SIZE;

int GL_obj::FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE;

int GL_obj::FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE;

int GL_obj::FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE;

int GL_obj::FRAMEBUFFER_DEFAULT;

int GL_obj::DEPTH24_STENCIL8;

int GL_obj::DRAW_FRAMEBUFFER_BINDING;

int GL_obj::READ_FRAMEBUFFER;

int GL_obj::DRAW_FRAMEBUFFER;

int GL_obj::READ_FRAMEBUFFER_BINDING;

int GL_obj::RENDERBUFFER_SAMPLES;

int GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER;

int GL_obj::FRAMEBUFFER_INCOMPLETE_MULTISAMPLE;

int GL_obj::UNIFORM_BUFFER;

int GL_obj::UNIFORM_BUFFER_BINDING;

int GL_obj::UNIFORM_BUFFER_START;

int GL_obj::UNIFORM_BUFFER_SIZE;

int GL_obj::MAX_VERTEX_UNIFORM_BLOCKS;

int GL_obj::MAX_FRAGMENT_UNIFORM_BLOCKS;

int GL_obj::MAX_COMBINED_UNIFORM_BLOCKS;

int GL_obj::MAX_UNIFORM_BUFFER_BINDINGS;

int GL_obj::MAX_UNIFORM_BLOCK_SIZE;

int GL_obj::MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS;

int GL_obj::MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS;

int GL_obj::UNIFORM_BUFFER_OFFSET_ALIGNMENT;

int GL_obj::ACTIVE_UNIFORM_BLOCKS;

int GL_obj::UNIFORM_TYPE;

int GL_obj::UNIFORM_SIZE;

int GL_obj::UNIFORM_BLOCK_INDEX;

int GL_obj::UNIFORM_OFFSET;

int GL_obj::UNIFORM_ARRAY_STRIDE;

int GL_obj::UNIFORM_MATRIX_STRIDE;

int GL_obj::UNIFORM_IS_ROW_MAJOR;

int GL_obj::UNIFORM_BLOCK_BINDING;

int GL_obj::UNIFORM_BLOCK_DATA_SIZE;

int GL_obj::UNIFORM_BLOCK_ACTIVE_UNIFORMS;

int GL_obj::UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES;

int GL_obj::UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER;

int GL_obj::UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER;

int GL_obj::OBJECT_TYPE;

int GL_obj::SYNC_CONDITION;

int GL_obj::SYNC_STATUS;

int GL_obj::SYNC_FLAGS;

int GL_obj::SYNC_FENCE;

int GL_obj::SYNC_GPU_COMMANDS_COMPLETE;

int GL_obj::UNSIGNALED;

int GL_obj::SIGNALED;

int GL_obj::ALREADY_SIGNALED;

int GL_obj::TIMEOUT_EXPIRED;

int GL_obj::CONDITION_SATISFIED;

int GL_obj::WAIT_FAILED;

int GL_obj::SYNC_FLUSH_COMMANDS_BIT;

int GL_obj::COLOR;

int GL_obj::DEPTH;

int GL_obj::STENCIL;

int GL_obj::MIN;

int GL_obj::MAX;

int GL_obj::DEPTH_COMPONENT24;

int GL_obj::STREAM_READ;

int GL_obj::STREAM_COPY;

int GL_obj::STATIC_READ;

int GL_obj::STATIC_COPY;

int GL_obj::DYNAMIC_READ;

int GL_obj::DYNAMIC_COPY;

int GL_obj::DEPTH_COMPONENT32F;

int GL_obj::DEPTH32F_STENCIL8;

int GL_obj::INVALID_INDEX;

int GL_obj::TIMEOUT_IGNORED;

int GL_obj::MAX_CLIENT_WAIT_TIMEOUT_WEBGL;

::lime::_backend::native::NativeGLRenderContext GL_obj::context;

::lime::graphics::opengl::GLContextType GL_obj::type;

Float GL_obj::version;

::lime::graphics::opengl::GLObject GL_obj::__currentProgram;

Void GL_obj::activeTexture( int texture){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = texture;
		tmp->activeTexture(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,activeTexture,(void))

Void GL_obj::attachShader( ::lime::graphics::opengl::GLObject program,::lime::graphics::opengl::GLObject shader){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp1 = program;
		::lime::graphics::opengl::GLObject tmp2 = shader;
		tmp->attachShader(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,attachShader,(void))

Void GL_obj::beginQuery( int target,::lime::graphics::opengl::GLObject query){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		::lime::graphics::opengl::GLObject tmp2 = query;
		tmp->beginQuery(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,beginQuery,(void))

Void GL_obj::beginTransformFeedback( int primitiveNode){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = primitiveNode;
		tmp->beginTransformFeedback(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,beginTransformFeedback,(void))

Void GL_obj::bindAttribLocation( ::lime::graphics::opengl::GLObject program,int index,::String name){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp1 = program;
		int tmp2 = index;
		::String tmp3 = name;
		tmp->bindAttribLocation(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,bindAttribLocation,(void))

Void GL_obj::bindBuffer( int target,::lime::graphics::opengl::GLObject buffer){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		::lime::graphics::opengl::GLObject tmp2 = buffer;
		tmp->bindBuffer(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindBuffer,(void))

Void GL_obj::bindBufferBase( int target,int index,::lime::graphics::opengl::GLObject buffer){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,bindBufferBase,(void))

Void GL_obj::bindBufferRange( int target,int index,::lime::graphics::opengl::GLObject buffer,Float offset,int size){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,bindBufferRange,(void))

Void GL_obj::bindFramebuffer( int target,::lime::graphics::opengl::GLObject framebuffer){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		::lime::graphics::opengl::GLObject tmp2 = framebuffer;
		tmp->bindFramebuffer(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindFramebuffer,(void))

Void GL_obj::bindRenderbuffer( int target,::lime::graphics::opengl::GLObject renderbuffer){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		::lime::graphics::opengl::GLObject tmp2 = renderbuffer;
		tmp->bindRenderbuffer(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindRenderbuffer,(void))

Void GL_obj::bindSampler( int unit,::lime::graphics::opengl::GLObject sampler){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindSampler,(void))

Void GL_obj::bindTexture( int target,::lime::graphics::opengl::GLObject texture){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		::lime::graphics::opengl::GLObject tmp2 = texture;
		tmp->bindTexture(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindTexture,(void))

Void GL_obj::bindTransformFeedback( int target,::lime::graphics::opengl::GLObject transformFeedback){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindTransformFeedback,(void))

Void GL_obj::bindVertexArray( ::lime::graphics::opengl::GLObject vertexArray){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,bindVertexArray,(void))

Void GL_obj::blitFramebuffer( int srcX0,int srcY0,int srcX1,int srcY1,int dstX0,int dstY0,int dstX1,int dstY1,int mask,int filter){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(GL_obj,blitFramebuffer,(void))

Void GL_obj::blendColor( Float red,Float green,Float blue,Float alpha){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		Float tmp1 = red;
		Float tmp2 = green;
		Float tmp3 = blue;
		Float tmp4 = alpha;
		tmp->blendColor(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,blendColor,(void))

Void GL_obj::blendEquation( int mode){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = mode;
		tmp->blendEquation(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,blendEquation,(void))

Void GL_obj::blendEquationSeparate( int modeRGB,int modeAlpha){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = modeRGB;
		int tmp2 = modeAlpha;
		tmp->blendEquationSeparate(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,blendEquationSeparate,(void))

Void GL_obj::blendFunc( int sfactor,int dfactor){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = sfactor;
		int tmp2 = dfactor;
		tmp->blendFunc(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,blendFunc,(void))

Void GL_obj::blendFuncSeparate( int srcRGB,int dstRGB,int srcAlpha,int dstAlpha){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = srcRGB;
		int tmp2 = dstRGB;
		int tmp3 = srcAlpha;
		int tmp4 = dstAlpha;
		tmp->blendFuncSeparate(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,blendFuncSeparate,(void))

Void GL_obj::bufferData( int target,int size,Float srcData,int usage){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		int tmp2 = size;
		Float tmp3 = srcData;
		int tmp4 = usage;
		tmp->bufferData(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,bufferData,(void))

Void GL_obj::bufferSubData( int target,int dstByteOffset,int size,Float srcData){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		int tmp2 = dstByteOffset;
		int tmp3 = size;
		Float tmp4 = srcData;
		tmp->bufferSubData(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,bufferSubData,(void))

int GL_obj::checkFramebufferStatus( int target){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	int tmp1 = target;
	int tmp2 = tmp->checkFramebufferStatus(tmp1);
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,checkFramebufferStatus,return )

Void GL_obj::clear( int mask){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = mask;
		tmp->clear(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,clear,(void))

Void GL_obj::clearBufferfi( int buffer,int drawbuffer,Float depth,int stencil){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,clearBufferfi,(void))

Void GL_obj::clearBufferfv( int buffer,int drawbuffer,Float value){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,clearBufferfv,(void))

Void GL_obj::clearBufferiv( int buffer,int drawbuffer,Float value){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,clearBufferiv,(void))

Void GL_obj::clearBufferuiv( int buffer,int drawbuffer,Float value){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,clearBufferuiv,(void))

Void GL_obj::clearColor( Float red,Float green,Float blue,Float alpha){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		Float tmp1 = red;
		Float tmp2 = green;
		Float tmp3 = blue;
		Float tmp4 = alpha;
		tmp->clearColor(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,clearColor,(void))

Void GL_obj::clearDepthf( Float depth){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		Float tmp1 = depth;
		tmp->clearDepthf(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,clearDepthf,(void))

Void GL_obj::clearStencil( int s){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = s;
		tmp->clearStencil(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,clearStencil,(void))

int GL_obj::clientWaitSync( ::lime::graphics::opengl::GLObject sync,int flags,cpp::Int64Struct timeout){
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,clientWaitSync,return )

Void GL_obj::colorMask( bool red,bool green,bool blue,bool alpha){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		bool tmp1 = red;
		bool tmp2 = green;
		bool tmp3 = blue;
		bool tmp4 = alpha;
		tmp->colorMask(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,colorMask,(void))

Void GL_obj::compileShader( ::lime::graphics::opengl::GLObject shader){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp1 = shader;
		tmp->compileShader(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,compileShader,(void))

Void GL_obj::compressedTexImage2D( int target,int level,int internalformat,int width,int height,int border,int imageSize,Float data){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		int tmp2 = level;
		int tmp3 = internalformat;
		int tmp4 = width;
		int tmp5 = height;
		int tmp6 = border;
		int tmp7 = imageSize;
		Float tmp8 = data;
		tmp->compressedTexImage2D(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GL_obj,compressedTexImage2D,(void))

Void GL_obj::compressedTexImage3D( int target,int level,int internalformat,int width,int height,int depth,int border,int imageSize,Float data){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(GL_obj,compressedTexImage3D,(void))

Void GL_obj::compressedTexSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,int imageSize,Float data){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		int tmp2 = level;
		int tmp3 = xoffset;
		int tmp4 = yoffset;
		int tmp5 = width;
		int tmp6 = height;
		int tmp7 = format;
		int tmp8 = imageSize;
		Float tmp9 = data;
		tmp->compressedTexSubImage2D(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(GL_obj,compressedTexSubImage2D,(void))

Void GL_obj::compressedTexSubImage3D( int target,int level,int xoffset,int yoffset,int zoffset,int width,int height,int depth,int format,int imageSize,Float data){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC11(GL_obj,compressedTexSubImage3D,(void))

Void GL_obj::copyBufferSubData( int readTarget,int writeTarget,Float readOffset,Float writeOffset,int size){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,copyBufferSubData,(void))

Void GL_obj::copyTexImage2D( int target,int level,int internalformat,int x,int y,int width,int height,int border){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		int tmp2 = level;
		int tmp3 = internalformat;
		int tmp4 = x;
		int tmp5 = y;
		int tmp6 = width;
		int tmp7 = height;
		int tmp8 = border;
		tmp->copyTexImage2D(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GL_obj,copyTexImage2D,(void))

Void GL_obj::copyTexSubImage2D( int target,int level,int xoffset,int yoffset,int x,int y,int width,int height){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		int tmp2 = level;
		int tmp3 = xoffset;
		int tmp4 = yoffset;
		int tmp5 = x;
		int tmp6 = y;
		int tmp7 = width;
		int tmp8 = height;
		tmp->copyTexSubImage2D(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GL_obj,copyTexSubImage2D,(void))

Void GL_obj::copyTexSubImage3D( int target,int level,int xoffset,int yoffset,int zoffset,int x,int y,int width,int height){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(GL_obj,copyTexSubImage3D,(void))

::lime::graphics::opengl::GLObject GL_obj::createBuffer( ){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = tmp->createBuffer();
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createBuffer,return )

::lime::graphics::opengl::GLObject GL_obj::createFramebuffer( ){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = tmp->createFramebuffer();
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createFramebuffer,return )

::lime::graphics::opengl::GLObject GL_obj::createProgram( ){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = tmp->createProgram();
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createProgram,return )

::lime::graphics::opengl::GLObject GL_obj::createQuery( ){
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createQuery,return )

::lime::graphics::opengl::GLObject GL_obj::createRenderbuffer( ){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = tmp->createRenderbuffer();
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createRenderbuffer,return )

::lime::graphics::opengl::GLObject GL_obj::createSampler( ){
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createSampler,return )

::lime::graphics::opengl::GLObject GL_obj::createShader( int type){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	int tmp1 = type;
	::lime::graphics::opengl::GLObject tmp2 = tmp->createShader(tmp1);
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,createShader,return )

::lime::graphics::opengl::GLObject GL_obj::createTexture( ){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = tmp->createTexture();
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createTexture,return )

::lime::graphics::opengl::GLObject GL_obj::createTransformFeedback( ){
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createTransformFeedback,return )

::lime::graphics::opengl::GLObject GL_obj::createVertexArray( ){
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createVertexArray,return )

Void GL_obj::cullFace( int mode){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = mode;
		tmp->cullFace(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,cullFace,(void))

Void GL_obj::deleteBuffer( ::lime::graphics::opengl::GLObject buffer){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp1 = buffer;
		tmp->deleteBuffer(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteBuffer,(void))

Void GL_obj::deleteFramebuffer( ::lime::graphics::opengl::GLObject framebuffer){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp1 = framebuffer;
		tmp->deleteFramebuffer(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteFramebuffer,(void))

Void GL_obj::deleteProgram( ::lime::graphics::opengl::GLObject program){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp1 = program;
		tmp->deleteProgram(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteProgram,(void))

Void GL_obj::deleteQuery( ::lime::graphics::opengl::GLObject query){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteQuery,(void))

Void GL_obj::deleteRenderbuffer( ::lime::graphics::opengl::GLObject renderbuffer){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp1 = renderbuffer;
		tmp->deleteRenderbuffer(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteRenderbuffer,(void))

Void GL_obj::deleteSampler( ::lime::graphics::opengl::GLObject sampler){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteSampler,(void))

Void GL_obj::deleteShader( ::lime::graphics::opengl::GLObject shader){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp1 = shader;
		tmp->deleteShader(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteShader,(void))

Void GL_obj::deleteSync( ::lime::graphics::opengl::GLObject sync){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteSync,(void))

Void GL_obj::deleteTexture( ::lime::graphics::opengl::GLObject texture){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp1 = texture;
		tmp->deleteTexture(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteTexture,(void))

Void GL_obj::deleteTransformFeedback( ::lime::graphics::opengl::GLObject transformFeedback){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteTransformFeedback,(void))

Void GL_obj::deleteVertexArray( ::lime::graphics::opengl::GLObject vertexArray){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteVertexArray,(void))

Void GL_obj::depthFunc( int func){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = func;
		tmp->depthFunc(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,depthFunc,(void))

Void GL_obj::depthMask( bool flag){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		bool tmp1 = flag;
		tmp->depthMask(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,depthMask,(void))

Void GL_obj::depthRangef( Float zNear,Float zFar){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		Float tmp1 = zNear;
		Float tmp2 = zFar;
		tmp->depthRangef(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,depthRangef,(void))

Void GL_obj::detachShader( ::lime::graphics::opengl::GLObject program,::lime::graphics::opengl::GLObject shader){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp1 = program;
		::lime::graphics::opengl::GLObject tmp2 = shader;
		tmp->detachShader(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,detachShader,(void))

Void GL_obj::disable( int cap){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = cap;
		tmp->disable(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,disable,(void))

Void GL_obj::disableVertexAttribArray( int index){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = index;
		tmp->disableVertexAttribArray(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,disableVertexAttribArray,(void))

Void GL_obj::drawArrays( int mode,int first,int count){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = mode;
		int tmp2 = first;
		int tmp3 = count;
		tmp->drawArrays(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,drawArrays,(void))

Void GL_obj::drawArraysInstanced( int mode,int first,int count,int instanceCount){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,drawArraysInstanced,(void))

Void GL_obj::drawBuffers( Array< int > buffers){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,drawBuffers,(void))

Void GL_obj::drawElements( int mode,int count,int type,int offset){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = mode;
		int tmp2 = count;
		int tmp3 = type;
		int tmp4 = offset;
		Float tmp5 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt(tmp4);
		tmp->drawElements(tmp1,tmp2,tmp3,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,drawElements,(void))

Void GL_obj::drawElementsInstanced( int mode,int count,int type,Float offset,int instanceCount){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,drawElementsInstanced,(void))

Void GL_obj::drawRangeElements( int mode,int start,int end,int count,int type,Float offset){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GL_obj,drawRangeElements,(void))

Void GL_obj::enable( int cap){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = cap;
		tmp->enable(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,enable,(void))

Void GL_obj::enableVertexAttribArray( int index){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = index;
		tmp->enableVertexAttribArray(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,enableVertexAttribArray,(void))

Void GL_obj::endQuery( int target){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,endQuery,(void))

Void GL_obj::endTransformFeedback( ){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,endTransformFeedback,(void))

::lime::graphics::opengl::GLObject GL_obj::fenceSync( int condition,int flags){
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,fenceSync,return )

Void GL_obj::finish( ){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		tmp->finish();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,finish,(void))

Void GL_obj::flush( ){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		tmp->flush();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,flush,(void))

Void GL_obj::framebufferRenderbuffer( int target,int attachment,int renderbuffertarget,::lime::graphics::opengl::GLObject renderbuffer){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		int tmp2 = attachment;
		int tmp3 = renderbuffertarget;
		::lime::graphics::opengl::GLObject tmp4 = renderbuffer;
		tmp->framebufferRenderbuffer(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,framebufferRenderbuffer,(void))

Void GL_obj::framebufferTexture2D( int target,int attachment,int textarget,::lime::graphics::opengl::GLObject texture,int level){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		int tmp2 = attachment;
		int tmp3 = textarget;
		::lime::graphics::opengl::GLObject tmp4 = texture;
		int tmp5 = level;
		tmp->framebufferTexture2D(tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,framebufferTexture2D,(void))

Void GL_obj::framebufferTextureLayer( int target,int attachment,::lime::graphics::opengl::GLObject texture,int level,int layer){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,framebufferTextureLayer,(void))

Void GL_obj::frontFace( int mode){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = mode;
		tmp->frontFace(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,frontFace,(void))

Void GL_obj::generateMipmap( int target){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		tmp->generateMipmap(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,generateMipmap,(void))

Dynamic GL_obj::getActiveAttrib( ::lime::graphics::opengl::GLObject program,int index){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = program;
	int tmp2 = index;
	Dynamic tmp3 = tmp->getActiveAttrib(tmp1,tmp2);
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getActiveAttrib,return )

Dynamic GL_obj::getActiveUniform( ::lime::graphics::opengl::GLObject program,int index){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = program;
	int tmp2 = index;
	Dynamic tmp3 = tmp->getActiveUniform(tmp1,tmp2);
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getActiveUniform,return )

int GL_obj::getActiveUniformBlocki( ::lime::graphics::opengl::GLObject program,int uniformBlockIndex,int pname){
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getActiveUniformBlocki,return )

Void GL_obj::getActiveUniformBlockiv( ::lime::graphics::opengl::GLObject program,int uniformBlockIndex,int pname,Float params){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,getActiveUniformBlockiv,(void))

::String GL_obj::getActiveUniformBlockName( ::lime::graphics::opengl::GLObject program,int uniformBlockIndex){
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getActiveUniformBlockName,return )

Dynamic GL_obj::getActiveUniformBlockParameter( ::lime::graphics::opengl::GLObject program,int uniformBlockIndex,int pname){
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getActiveUniformBlockParameter,return )

Dynamic GL_obj::getActiveUniforms( ::lime::graphics::opengl::GLObject program,Array< int > uniformIndices,int pname){
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getActiveUniforms,return )

Void GL_obj::getActiveUniformsiv( ::lime::graphics::opengl::GLObject program,Array< int > uniformIndices,int pname,Float params){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,getActiveUniformsiv,(void))

Array< ::Dynamic > GL_obj::getAttachedShaders( ::lime::graphics::opengl::GLObject program){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = program;
	return tmp->getAttachedShaders(tmp1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getAttachedShaders,return )

int GL_obj::getAttribLocation( ::lime::graphics::opengl::GLObject program,::String name){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = program;
	::String tmp2 = name;
	int tmp3 = tmp->getAttribLocation(tmp1,tmp2);
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getAttribLocation,return )

bool GL_obj::getBoolean( int pname){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	int tmp1 = pname;
	bool tmp2 = tmp->getBoolean(tmp1);
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getBoolean,return )

Void GL_obj::getBooleanv( int pname,Float params){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = pname;
		Float tmp2 = params;
		tmp->getBooleanv(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getBooleanv,(void))

Dynamic GL_obj::getBufferParameter( int target,int pname){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	int tmp1 = target;
	int tmp2 = pname;
	Dynamic tmp3 = tmp->getBufferParameter(tmp1,tmp2);
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getBufferParameter,return )

int GL_obj::getBufferParameteri( int target,int pname){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	int tmp1 = target;
	int tmp2 = pname;
	int tmp3 = tmp->getBufferParameteri(tmp1,tmp2);
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getBufferParameteri,return )

Void GL_obj::getBufferParameteri64v( int target,int pname,Float params){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		int tmp2 = pname;
		Float tmp3 = params;
		tmp->getBufferParameteri64v(tmp1,tmp2,tmp3);
		return null();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getBufferParameteri64v,(void))

Void GL_obj::getBufferParameteriv( int target,int pname,Float data){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		int tmp2 = pname;
		Float tmp3 = data;
		tmp->getBufferParameteriv(tmp1,tmp2,tmp3);
		return null();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getBufferParameteriv,(void))

Float GL_obj::getBufferPointerv( int target,int pname){
	Float tmp = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)0);
	return tmp;
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getBufferPointerv,return )

Void GL_obj::getBufferSubData( int target,Float offset,int size,Float data){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,getBufferSubData,(void))

Dynamic GL_obj::getContextAttributes( ){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	Dynamic tmp1 = tmp->getContextAttributes();
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,getContextAttributes,return )

int GL_obj::getError( ){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	int tmp1 = tmp->getError();
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,getError,return )

Dynamic GL_obj::getExtension( ::String name){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::String tmp1 = name;
	Dynamic tmp2 = tmp->getExtension(tmp1);
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getExtension,return )

Float GL_obj::getFloat( int pname){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	int tmp1 = pname;
	Float tmp2 = tmp->getFloat(tmp1);
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getFloat,return )

Void GL_obj::getFloatv( int pname,Float params){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = pname;
		Float tmp2 = params;
		tmp->getFloatv(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getFloatv,(void))

int GL_obj::getFragDataLocation( ::lime::graphics::opengl::GLObject program,::String name){
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getFragDataLocation,return )

Dynamic GL_obj::getFramebufferAttachmentParameter( int target,int attachment,int pname){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	int tmp1 = target;
	int tmp2 = attachment;
	int tmp3 = pname;
	Dynamic tmp4 = tmp->getFramebufferAttachmentParameter(tmp1,tmp2,tmp3);
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getFramebufferAttachmentParameter,return )

int GL_obj::getFramebufferAttachmentParameteri( int target,int attachment,int pname){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	int tmp1 = target;
	int tmp2 = attachment;
	int tmp3 = pname;
	int tmp4 = tmp->getFramebufferAttachmentParameteri(tmp1,tmp2,tmp3);
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getFramebufferAttachmentParameteri,return )

Void GL_obj::getFramebufferAttachmentParameteriv( int target,int attachment,int pname,Float params){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		int tmp2 = attachment;
		int tmp3 = pname;
		Float tmp4 = params;
		tmp->getFramebufferAttachmentParameteriv(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,getFramebufferAttachmentParameteriv,(void))

Dynamic GL_obj::getIndexedParameter( int target,int index){
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getIndexedParameter,return )

int GL_obj::getInteger( int pname){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	int tmp1 = pname;
	int tmp2 = tmp->getInteger(tmp1);
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getInteger,return )

cpp::Int64Struct GL_obj::getInteger64( int pname){
	cpp::Int64Struct tmp = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)0);
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getInteger64,return )

cpp::Int64Struct GL_obj::getInteger64i( int pname){
	cpp::Int64Struct tmp = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)0);
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getInteger64i,return )

Void GL_obj::getInteger64i_v( int pname,Float params){
{
		return null();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getInteger64i_v,(void))

Void GL_obj::getInteger64v( int pname,Float params){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = pname;
		Float tmp2 = params;
		tmp->getInteger64v(tmp1,tmp2);
		return null();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getInteger64v,(void))

int GL_obj::getIntegeri( int pname){
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getIntegeri,return )

Void GL_obj::getIntegeri_v( int pname,Float params){
{
		return null();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getIntegeri_v,(void))

Void GL_obj::getIntegerv( int pname,Float params){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = pname;
		Float tmp2 = params;
		tmp->getIntegerv(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getIntegerv,(void))

int GL_obj::getInternalformati( int target,int internalformat,int pname){
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getInternalformati,return )

Void GL_obj::getInternalformativ( int target,int internalformat,int pname,Float params){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		int tmp2 = internalformat;
		int tmp3 = pname;
		Float tmp4 = params;
		tmp->getInternalformativ(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,getInternalformativ,(void))

Dynamic GL_obj::getInternalformatParameter( int target,int internalformat,int pname){
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getInternalformatParameter,return )

Dynamic GL_obj::getParameter( int pname){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	int tmp1 = pname;
	Dynamic tmp2 = tmp->getParameter(tmp1);
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getParameter,return )

int GL_obj::getProgrami( ::lime::graphics::opengl::GLObject program,int pname){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = program;
	int tmp2 = pname;
	int tmp3 = tmp->getProgrami(tmp1,tmp2);
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getProgrami,return )

Void GL_obj::getProgramiv( ::lime::graphics::opengl::GLObject program,int pname,Float params){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp1 = program;
		int tmp2 = pname;
		Float tmp3 = params;
		tmp->getProgramiv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getProgramiv,(void))

::haxe::io::Bytes GL_obj::getProgramBinary( ::lime::graphics::opengl::GLObject program,int binaryFormat){
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getProgramBinary,return )

::String GL_obj::getProgramInfoLog( ::lime::graphics::opengl::GLObject program){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = program;
	::String tmp2 = tmp->getProgramInfoLog(tmp1);
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getProgramInfoLog,return )

Dynamic GL_obj::getProgramParameter( ::lime::graphics::opengl::GLObject program,int pname){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = program;
	int tmp2 = pname;
	Dynamic tmp3 = tmp->getProgramParameter(tmp1,tmp2);
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getProgramParameter,return )

::lime::graphics::opengl::GLObject GL_obj::getQuery( int target,int pname){
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getQuery,return )

int GL_obj::getQueryi( int target,int pname){
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getQueryi,return )

Void GL_obj::getQueryiv( int target,int pname,Float params){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		int tmp2 = pname;
		Float tmp3 = params;
		tmp->getQueryiv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getQueryiv,(void))

int GL_obj::getQueryObjectui( ::lime::graphics::opengl::GLObject query,int pname){
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getQueryObjectui,return )

Void GL_obj::getQueryObjectuiv( ::lime::graphics::opengl::GLObject query,int pname,Float params){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp1 = query;
		int tmp2 = pname;
		Float tmp3 = params;
		tmp->getQueryObjectuiv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getQueryObjectuiv,(void))

Dynamic GL_obj::getQueryParameter( ::lime::graphics::opengl::GLObject query,int pname){
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getQueryParameter,return )

Dynamic GL_obj::getRenderbufferParameter( int target,int pname){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	int tmp1 = target;
	int tmp2 = pname;
	Dynamic tmp3 = tmp->getRenderbufferParameter(tmp1,tmp2);
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getRenderbufferParameter,return )

int GL_obj::getRenderbufferParameteri( int target,int pname){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	int tmp1 = target;
	int tmp2 = pname;
	int tmp3 = tmp->getRenderbufferParameteri(tmp1,tmp2);
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getRenderbufferParameteri,return )

Void GL_obj::getRenderbufferParameteriv( int target,int pname,Float params){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		int tmp2 = pname;
		Float tmp3 = params;
		tmp->getRenderbufferParameteriv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getRenderbufferParameteriv,(void))

Dynamic GL_obj::getSamplerParameter( ::lime::graphics::opengl::GLObject sampler,int pname){
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getSamplerParameter,return )

Float GL_obj::getSamplerParameterf( ::lime::graphics::opengl::GLObject sampler,int pname){
	return ((Float)((int)0));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getSamplerParameterf,return )

Void GL_obj::getSamplerParameterfv( ::lime::graphics::opengl::GLObject sampler,int pname,Float params){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp1 = sampler;
		int tmp2 = pname;
		Float tmp3 = params;
		tmp->getSamplerParameterfv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getSamplerParameterfv,(void))

int GL_obj::getSamplerParameteri( ::lime::graphics::opengl::GLObject sampler,int pname){
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getSamplerParameteri,return )

Void GL_obj::getSamplerParameteriv( ::lime::graphics::opengl::GLObject sampler,int pname,Float params){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp1 = sampler;
		int tmp2 = pname;
		Float tmp3 = params;
		tmp->getSamplerParameteriv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getSamplerParameteriv,(void))

int GL_obj::getShaderi( ::lime::graphics::opengl::GLObject shader,int pname){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = shader;
	int tmp2 = pname;
	int tmp3 = tmp->getShaderi(tmp1,tmp2);
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getShaderi,return )

Void GL_obj::getShaderiv( ::lime::graphics::opengl::GLObject shader,int pname,Float params){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp1 = shader;
		int tmp2 = pname;
		Float tmp3 = params;
		tmp->getShaderiv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getShaderiv,(void))

::String GL_obj::getShaderInfoLog( ::lime::graphics::opengl::GLObject shader){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = shader;
	::String tmp2 = tmp->getShaderInfoLog(tmp1);
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getShaderInfoLog,return )

Dynamic GL_obj::getShaderParameter( ::lime::graphics::opengl::GLObject shader,int pname){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = shader;
	int tmp2 = pname;
	Dynamic tmp3 = tmp->getShaderParameter(tmp1,tmp2);
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getShaderParameter,return )

Dynamic GL_obj::getShaderPrecisionFormat( int shadertype,int precisiontype){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	int tmp1 = shadertype;
	int tmp2 = precisiontype;
	Dynamic tmp3 = tmp->getShaderPrecisionFormat(tmp1,tmp2);
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getShaderPrecisionFormat,return )

::String GL_obj::getShaderSource( ::lime::graphics::opengl::GLObject shader){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = shader;
	::String tmp2 = tmp->getShaderSource(tmp1);
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getShaderSource,return )

::String GL_obj::getString( int pname){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	int tmp1 = pname;
	::String tmp2 = tmp->getString(tmp1);
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getString,return )

::String GL_obj::getStringi( int name,int index){
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getStringi,return )

Array< ::String > GL_obj::getSupportedExtensions( ){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	return tmp->getSupportedExtensions();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,getSupportedExtensions,return )

Dynamic GL_obj::getSyncParameter( ::lime::graphics::opengl::GLObject sync,int pname){
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getSyncParameter,return )

int GL_obj::getSyncParameteri( ::lime::graphics::opengl::GLObject sync,int pname){
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getSyncParameteri,return )

Void GL_obj::getSyncParameteriv( ::lime::graphics::opengl::GLObject sync,int pname,Float params){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp1 = sync;
		int tmp2 = pname;
		Float tmp3 = params;
		tmp->getSyncParameteriv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getSyncParameteriv,(void))

Dynamic GL_obj::getTexParameter( int target,int pname){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	int tmp1 = target;
	int tmp2 = pname;
	Dynamic tmp3 = tmp->getTexParameter(tmp1,tmp2);
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getTexParameter,return )

Float GL_obj::getTexParameterf( int target,int pname){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	int tmp1 = target;
	int tmp2 = pname;
	Float tmp3 = tmp->getTexParameterf(tmp1,tmp2);
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getTexParameterf,return )

Void GL_obj::getTexParameterfv( int target,int pname,Float params){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		int tmp2 = pname;
		Float tmp3 = params;
		tmp->getTexParameterfv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getTexParameterfv,(void))

int GL_obj::getTexParameteri( int target,int pname){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	int tmp1 = target;
	int tmp2 = pname;
	int tmp3 = tmp->getTexParameteri(tmp1,tmp2);
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getTexParameteri,return )

Void GL_obj::getTexParameteriv( int target,int pname,Float params){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		int tmp2 = pname;
		Float tmp3 = params;
		tmp->getTexParameteriv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getTexParameteriv,(void))

Dynamic GL_obj::getTransformFeedbackVarying( ::lime::graphics::opengl::GLObject program,int index){
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getTransformFeedbackVarying,return )

Dynamic GL_obj::getUniform( ::lime::graphics::opengl::GLObject program,int location){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = program;
	int tmp2 = location;
	Dynamic tmp3 = tmp->getUniform(tmp1,tmp2);
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getUniform,return )

Float GL_obj::getUniformf( ::lime::graphics::opengl::GLObject program,int location){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = program;
	int tmp2 = location;
	Float tmp3 = tmp->getUniformf(tmp1,tmp2);
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getUniformf,return )

Void GL_obj::getUniformfv( ::lime::graphics::opengl::GLObject program,int location,Float params){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp1 = program;
		int tmp2 = location;
		Float tmp3 = params;
		tmp->getUniformfv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getUniformfv,(void))

int GL_obj::getUniformi( ::lime::graphics::opengl::GLObject program,int location){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = program;
	int tmp2 = location;
	int tmp3 = tmp->getUniformi(tmp1,tmp2);
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getUniformi,return )

Void GL_obj::getUniformiv( ::lime::graphics::opengl::GLObject program,int location,Float params){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp1 = program;
		int tmp2 = location;
		Float tmp3 = params;
		tmp->getUniformiv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getUniformiv,(void))

int GL_obj::getUniformui( ::lime::graphics::opengl::GLObject program,int location){
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getUniformui,return )

Void GL_obj::getUniformuiv( ::lime::graphics::opengl::GLObject program,int location,Float params){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp1 = program;
		int tmp2 = location;
		Float tmp3 = params;
		tmp->getUniformuiv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getUniformuiv,(void))

int GL_obj::getUniformBlockIndex( ::lime::graphics::opengl::GLObject program,::String uniformBlockName){
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getUniformBlockIndex,return )

Array< int > GL_obj::getUniformIndices( ::lime::graphics::opengl::GLObject program,Array< ::String > uniformNames){
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getUniformIndices,return )

int GL_obj::getUniformLocation( ::lime::graphics::opengl::GLObject program,::String name){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = program;
	::String tmp2 = name;
	int tmp3 = tmp->getUniformLocation(tmp1,tmp2);
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getUniformLocation,return )

Dynamic GL_obj::getVertexAttrib( int index,int pname){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	int tmp1 = index;
	int tmp2 = pname;
	Dynamic tmp3 = tmp->getVertexAttrib(tmp1,tmp2);
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getVertexAttrib,return )

Float GL_obj::getVertexAttribf( int index,int pname){
	return ((Float)((int)0));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getVertexAttribf,return )

Void GL_obj::getVertexAttribfv( int index,int pname,Float params){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = index;
		int tmp2 = pname;
		Float tmp3 = params;
		tmp->getVertexAttribfv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getVertexAttribfv,(void))

int GL_obj::getVertexAttribi( int index,int pname){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	int tmp1 = index;
	int tmp2 = pname;
	int tmp3 = tmp->getVertexAttribi(tmp1,tmp2);
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getVertexAttribi,return )

int GL_obj::getVertexAttribIi( int index,int pname){
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getVertexAttribIi,return )

Void GL_obj::getVertexAttribIiv( int index,int pname,Float params){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getVertexAttribIiv,(void))

int GL_obj::getVertexAttribIui( int index,int pname){
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getVertexAttribIui,return )

Void GL_obj::getVertexAttribIuiv( int index,int pname,Float params){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getVertexAttribIuiv,(void))

Void GL_obj::getVertexAttribiv( int index,int pname,Float params){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = index;
		int tmp2 = pname;
		Float tmp3 = params;
		tmp->getVertexAttribiv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getVertexAttribiv,(void))

Float GL_obj::getVertexAttribPointerv( int index,int pname){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	int tmp1 = index;
	int tmp2 = pname;
	Float tmp3 = tmp->getVertexAttribPointerv(tmp1,tmp2);
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getVertexAttribPointerv,return )

Void GL_obj::hint( int target,int mode){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		int tmp2 = mode;
		tmp->hint(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,hint,(void))

Void GL_obj::invalidateFramebuffer( int target,Array< int > attachments){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,invalidateFramebuffer,(void))

Void GL_obj::invalidateSubFramebuffer( int target,Array< int > attachments,int x,int y,int width,int height){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GL_obj,invalidateSubFramebuffer,(void))

bool GL_obj::isBuffer( ::lime::graphics::opengl::GLObject buffer){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = buffer;
	bool tmp2 = tmp->isBuffer(tmp1);
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isBuffer,return )

bool GL_obj::isContextLost( ){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	bool tmp1 = tmp->isContextLost();
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,isContextLost,return )

bool GL_obj::isEnabled( int cap){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	int tmp1 = cap;
	bool tmp2 = tmp->isEnabled(tmp1);
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isEnabled,return )

bool GL_obj::isFramebuffer( ::lime::graphics::opengl::GLObject framebuffer){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = framebuffer;
	bool tmp2 = tmp->isFramebuffer(tmp1);
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isFramebuffer,return )

bool GL_obj::isProgram( ::lime::graphics::opengl::GLObject program){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = program;
	bool tmp2 = tmp->isProgram(tmp1);
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isProgram,return )

bool GL_obj::isQuery( ::lime::graphics::opengl::GLObject query){
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isQuery,return )

bool GL_obj::isRenderbuffer( ::lime::graphics::opengl::GLObject renderbuffer){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = renderbuffer;
	bool tmp2 = tmp->isRenderbuffer(tmp1);
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isRenderbuffer,return )

bool GL_obj::isSampler( ::lime::graphics::opengl::GLObject sampler){
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isSampler,return )

bool GL_obj::isShader( ::lime::graphics::opengl::GLObject shader){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = shader;
	bool tmp2 = tmp->isShader(tmp1);
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isShader,return )

bool GL_obj::isSync( ::lime::graphics::opengl::GLObject sync){
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isSync,return )

bool GL_obj::isTexture( ::lime::graphics::opengl::GLObject texture){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLObject tmp1 = texture;
	bool tmp2 = tmp->isTexture(tmp1);
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isTexture,return )

bool GL_obj::isTransformFeedback( ::lime::graphics::opengl::GLObject transformFeedback){
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isTransformFeedback,return )

bool GL_obj::isVertexArray( ::lime::graphics::opengl::GLObject vertexArray){
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isVertexArray,return )

Void GL_obj::lineWidth( Float width){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		Float tmp1 = width;
		tmp->lineWidth(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,lineWidth,(void))

Void GL_obj::linkProgram( ::lime::graphics::opengl::GLObject program){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp1 = program;
		tmp->linkProgram(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,linkProgram,(void))

Void GL_obj::mapBufferRange( int target,Float offset,int length,int access){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,mapBufferRange,(void))

Void GL_obj::pauseTransformFeedback( ){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,pauseTransformFeedback,(void))

Void GL_obj::pixelStorei( int pname,int param){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = pname;
		int tmp2 = param;
		tmp->pixelStorei(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,pixelStorei,(void))

Void GL_obj::polygonOffset( Float factor,Float units){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		Float tmp1 = factor;
		Float tmp2 = units;
		tmp->polygonOffset(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,polygonOffset,(void))

Void GL_obj::programBinary( ::lime::graphics::opengl::GLObject program,int binaryFormat,Float binary,int length){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,programBinary,(void))

Void GL_obj::programParameteri( ::lime::graphics::opengl::GLObject program,int pname,int value){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,programParameteri,(void))

Void GL_obj::readBuffer( int src){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,readBuffer,(void))

Void GL_obj::readPixels( int x,int y,int width,int height,int format,int type,::lime::utils::BytePointerData pixels){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = x;
		int tmp2 = y;
		int tmp3 = width;
		int tmp4 = height;
		int tmp5 = format;
		int tmp6 = type;
		::lime::utils::BytePointerData tmp7 = pixels;
		Float tmp8 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(tmp7);
		tmp->readPixels(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp8);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(GL_obj,readPixels,(void))

Void GL_obj::releaseShaderCompiler( ){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,releaseShaderCompiler,(void))

Void GL_obj::renderbufferStorage( int target,int internalformat,int width,int height){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		int tmp2 = internalformat;
		int tmp3 = width;
		int tmp4 = height;
		tmp->renderbufferStorage(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,renderbufferStorage,(void))

Void GL_obj::renderbufferStorageMultisample( int target,int samples,int internalFormat,int width,int height){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,renderbufferStorageMultisample,(void))

Void GL_obj::resumeTransformFeedback( ){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,resumeTransformFeedback,(void))

Void GL_obj::sampleCoverage( Float value,bool invert){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		Float tmp1 = value;
		bool tmp2 = invert;
		tmp->sampleCoverage(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,sampleCoverage,(void))

Void GL_obj::samplerParameterf( ::lime::graphics::opengl::GLObject sampler,int pname,Float param){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,samplerParameterf,(void))

Void GL_obj::samplerParameteri( ::lime::graphics::opengl::GLObject sampler,int pname,int param){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,samplerParameteri,(void))

Void GL_obj::scissor( int x,int y,int width,int height){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = x;
		int tmp2 = y;
		int tmp3 = width;
		int tmp4 = height;
		tmp->scissor(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,scissor,(void))

Void GL_obj::shaderBinary( Array< ::Dynamic > shaders,int binaryformat,Float binary,int length){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,shaderBinary,(void))

Void GL_obj::shaderSource( ::lime::graphics::opengl::GLObject shader,::String source){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp1 = shader;
		::String tmp2 = source;
		tmp->shaderSource(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,shaderSource,(void))

Void GL_obj::stencilFunc( int func,int ref,int mask){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = func;
		int tmp2 = ref;
		int tmp3 = mask;
		tmp->stencilFunc(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,stencilFunc,(void))

Void GL_obj::stencilFuncSeparate( int face,int func,int ref,int mask){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = face;
		int tmp2 = func;
		int tmp3 = ref;
		int tmp4 = mask;
		tmp->stencilFuncSeparate(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,stencilFuncSeparate,(void))

Void GL_obj::stencilMask( int mask){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = mask;
		tmp->stencilMask(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,stencilMask,(void))

Void GL_obj::stencilMaskSeparate( int face,int mask){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = face;
		int tmp2 = mask;
		tmp->stencilMaskSeparate(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,stencilMaskSeparate,(void))

Void GL_obj::stencilOp( int fail,int zfail,int zpass){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = fail;
		int tmp2 = zfail;
		int tmp3 = zpass;
		tmp->stencilOp(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,stencilOp,(void))

Void GL_obj::stencilOpSeparate( int face,int fail,int zfail,int zpass){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = face;
		int tmp2 = fail;
		int tmp3 = zfail;
		int tmp4 = zpass;
		tmp->stencilOpSeparate(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,stencilOpSeparate,(void))

Void GL_obj::texImage2D( int target,int level,int internalformat,int width,int height,int border,int format,int type,Float data){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		int tmp2 = level;
		int tmp3 = internalformat;
		int tmp4 = width;
		int tmp5 = height;
		int tmp6 = border;
		int tmp7 = format;
		int tmp8 = type;
		Float tmp9 = data;
		tmp->texImage2D(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(GL_obj,texImage2D,(void))

Void GL_obj::texImage3D( int target,int level,int internalformat,int width,int height,int depth,int border,int format,int type,Float data){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(GL_obj,texImage3D,(void))

Void GL_obj::texStorage2D( int target,int level,int internalformat,int width,int height){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,texStorage2D,(void))

Void GL_obj::texStorage3D( int target,int level,int internalformat,int width,int height,int depth){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GL_obj,texStorage3D,(void))

Void GL_obj::texParameterf( int target,int pname,Float param){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		int tmp2 = pname;
		Float tmp3 = param;
		tmp->texParameterf(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,texParameterf,(void))

Void GL_obj::texParameteri( int target,int pname,int param){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		int tmp2 = pname;
		int tmp3 = param;
		tmp->texParameteri(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,texParameteri,(void))

Void GL_obj::texSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,int type,::lime::utils::ArrayBufferView pixels){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = target;
		int tmp2 = level;
		int tmp3 = xoffset;
		int tmp4 = yoffset;
		int tmp5 = width;
		int tmp6 = height;
		int tmp7 = format;
		int tmp8 = type;
		::lime::utils::ArrayBufferView tmp9 = pixels;
		Float tmp10 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBufferView(tmp9);
		tmp->texSubImage2D(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp10);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(GL_obj,texSubImage2D,(void))

Void GL_obj::texSubImage3D( int target,int level,int xoffset,int yoffset,int zoffset,int width,int height,int depth,int format,int type,Float data){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC11(GL_obj,texSubImage3D,(void))

Void GL_obj::transformFeedbackVaryings( ::lime::graphics::opengl::GLObject program,Array< ::String > varyings,int bufferMode){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,transformFeedbackVaryings,(void))

Void GL_obj::uniform1f( int location,Float v0){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		Float tmp2 = v0;
		tmp->uniform1f(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform1f,(void))

Void GL_obj::uniform1fv( int location,int count,Float v){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = count;
		Float tmp3 = v;
		tmp->uniform1fv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniform1fv,(void))

Void GL_obj::uniform1i( int location,int v0){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = v0;
		tmp->uniform1i(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform1i,(void))

Void GL_obj::uniform1iv( int location,int count,Float v){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = count;
		Float tmp3 = v;
		tmp->uniform1iv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniform1iv,(void))

Void GL_obj::uniform1ui( int location,int v0){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = v0;
		tmp->uniform1ui(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform1ui,(void))

Void GL_obj::uniform1uiv( int location,int count,Float v){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = count;
		Float tmp3 = v;
		tmp->uniform1uiv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniform1uiv,(void))

Void GL_obj::uniform2f( int location,Float v0,Float v1){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		Float tmp2 = v0;
		Float tmp3 = v1;
		tmp->uniform2f(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniform2f,(void))

Void GL_obj::uniform2fv( int location,int count,Float v){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = count;
		Float tmp3 = v;
		tmp->uniform2fv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniform2fv,(void))

Void GL_obj::uniform2i( int location,int x,int y){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = x;
		int tmp3 = y;
		tmp->uniform2i(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniform2i,(void))

Void GL_obj::uniform2iv( int location,int count,Float v){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = count;
		Float tmp3 = v;
		tmp->uniform2iv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniform2iv,(void))

Void GL_obj::uniform2ui( int location,int x,int y){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = x;
		int tmp3 = y;
		tmp->uniform2ui(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniform2ui,(void))

Void GL_obj::uniform2uiv( int location,int count,Float v){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = count;
		Float tmp3 = v;
		tmp->uniform2uiv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniform2uiv,(void))

Void GL_obj::uniform3f( int location,Float v0,Float v1,Float v2){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		Float tmp2 = v0;
		Float tmp3 = v1;
		Float tmp4 = v2;
		tmp->uniform3f(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,uniform3f,(void))

Void GL_obj::uniform3fv( int location,int count,Float v){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = count;
		Float tmp3 = v;
		tmp->uniform3fv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniform3fv,(void))

Void GL_obj::uniform3i( int location,int v0,int v1,int v2){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = v0;
		int tmp3 = v1;
		int tmp4 = v2;
		tmp->uniform3i(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,uniform3i,(void))

Void GL_obj::uniform3iv( int location,int count,Float v){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = count;
		Float tmp3 = v;
		tmp->uniform3iv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniform3iv,(void))

Void GL_obj::uniform3ui( int location,int v0,int v1,int v2){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = v0;
		int tmp3 = v1;
		int tmp4 = v2;
		tmp->uniform3ui(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,uniform3ui,(void))

Void GL_obj::uniform3uiv( int location,int count,Float v){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = count;
		Float tmp3 = v;
		tmp->uniform3uiv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniform3uiv,(void))

Void GL_obj::uniform4f( int location,Float v0,Float v1,Float v2,Float v3){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		Float tmp2 = v0;
		Float tmp3 = v1;
		Float tmp4 = v2;
		Float tmp5 = v3;
		tmp->uniform4f(tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,uniform4f,(void))

Void GL_obj::uniform4fv( int location,int count,Float v){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = count;
		Float tmp3 = v;
		tmp->uniform4fv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniform4fv,(void))

Void GL_obj::uniform4i( int location,int v0,int v1,int v2,int v3){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = v0;
		int tmp3 = v1;
		int tmp4 = v2;
		int tmp5 = v3;
		tmp->uniform4i(tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,uniform4i,(void))

Void GL_obj::uniform4iv( int location,int count,Float v){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = count;
		Float tmp3 = v;
		tmp->uniform4iv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniform4iv,(void))

Void GL_obj::uniform4ui( int location,int v0,int v1,int v2,int v3){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = v0;
		int tmp3 = v1;
		int tmp4 = v2;
		int tmp5 = v3;
		tmp->uniform4ui(tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,uniform4ui,(void))

Void GL_obj::uniform4uiv( int location,int count,Float v){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = count;
		Float tmp3 = v;
		tmp->uniform4uiv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniform4uiv,(void))

Void GL_obj::uniformBlockBinding( ::lime::graphics::opengl::GLObject program,int uniformBlockIndex,int uniformBlockBinding){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniformBlockBinding,(void))

Void GL_obj::uniformMatrix2fv( int location,int count,bool transpose,Float v){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = count;
		bool tmp3 = transpose;
		Float tmp4 = v;
		tmp->uniformMatrix2fv(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,uniformMatrix2fv,(void))

Void GL_obj::uniformMatrix2x3fv( int location,int count,bool transpose,Float v){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = count;
		bool tmp3 = transpose;
		Float tmp4 = v;
		tmp->uniformMatrix2x3fv(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,uniformMatrix2x3fv,(void))

Void GL_obj::uniformMatrix2x4fv( int location,int count,bool transpose,Float v){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = count;
		bool tmp3 = transpose;
		Float tmp4 = v;
		tmp->uniformMatrix2x4fv(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,uniformMatrix2x4fv,(void))

Void GL_obj::uniformMatrix3fv( int location,int count,bool transpose,Float v){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = count;
		bool tmp3 = transpose;
		Float tmp4 = v;
		tmp->uniformMatrix3fv(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,uniformMatrix3fv,(void))

Void GL_obj::uniformMatrix3x2fv( int location,int count,bool transpose,Float v){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = count;
		bool tmp3 = transpose;
		Float tmp4 = v;
		tmp->uniformMatrix3x2fv(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,uniformMatrix3x2fv,(void))

Void GL_obj::uniformMatrix3x4fv( int location,int count,bool transpose,Float v){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = count;
		bool tmp3 = transpose;
		Float tmp4 = v;
		tmp->uniformMatrix3x4fv(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,uniformMatrix3x4fv,(void))

Void GL_obj::uniformMatrix4fv( int location,int count,bool transpose,Float v){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = count;
		bool tmp3 = transpose;
		Float tmp4 = v;
		tmp->uniformMatrix4fv(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,uniformMatrix4fv,(void))

Void GL_obj::uniformMatrix4x2fv( int location,int count,bool transpose,Float v){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = count;
		bool tmp3 = transpose;
		Float tmp4 = v;
		tmp->uniformMatrix4x2fv(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,uniformMatrix4x2fv,(void))

Void GL_obj::uniformMatrix4x3fv( int location,int count,bool transpose,Float v){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = location;
		int tmp2 = count;
		bool tmp3 = transpose;
		Float tmp4 = v;
		tmp->uniformMatrix4x3fv(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,uniformMatrix4x3fv,(void))

bool GL_obj::unmapBuffer( int target){
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,unmapBuffer,return )

Void GL_obj::useProgram( ::lime::graphics::opengl::GLObject program){
{
		::lime::graphics::opengl::GL_obj::__currentProgram = program;
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp1 = program;
		tmp->useProgram(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,useProgram,(void))

Void GL_obj::validateProgram( ::lime::graphics::opengl::GLObject program){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		::lime::graphics::opengl::GLObject tmp1 = program;
		tmp->validateProgram(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,validateProgram,(void))

Void GL_obj::vertexAttrib1f( int index,Float v0){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = index;
		Float tmp2 = v0;
		tmp->vertexAttrib1f(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib1f,(void))

Void GL_obj::vertexAttrib1fv( int index,Float v){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = index;
		Float tmp2 = v;
		tmp->vertexAttrib1fv(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib1fv,(void))

Void GL_obj::vertexAttrib2f( int index,Float v0,Float v1){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = index;
		Float tmp2 = v0;
		Float tmp3 = v1;
		tmp->vertexAttrib2f(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,vertexAttrib2f,(void))

Void GL_obj::vertexAttrib2fv( int index,Float v){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = index;
		Float tmp2 = v;
		tmp->vertexAttrib2fv(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib2fv,(void))

Void GL_obj::vertexAttrib3f( int index,Float v0,Float v1,Float v2){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = index;
		Float tmp2 = v0;
		Float tmp3 = v1;
		Float tmp4 = v2;
		tmp->vertexAttrib3f(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,vertexAttrib3f,(void))

Void GL_obj::vertexAttrib3fv( int index,Float v){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = index;
		Float tmp2 = v;
		tmp->vertexAttrib3fv(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib3fv,(void))

Void GL_obj::vertexAttrib4f( int index,Float v0,Float v1,Float v2,Float v3){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = index;
		Float tmp2 = v0;
		Float tmp3 = v1;
		Float tmp4 = v2;
		Float tmp5 = v3;
		tmp->vertexAttrib4f(tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,vertexAttrib4f,(void))

Void GL_obj::vertexAttrib4fv( int index,Float v){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = index;
		Float tmp2 = v;
		tmp->vertexAttrib4fv(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib4fv,(void))

Void GL_obj::vertexAttribDivisor( int index,int divisor){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttribDivisor,(void))

Void GL_obj::vertexAttribI4i( int index,int v0,int v1,int v2,int v3){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,vertexAttribI4i,(void))

Void GL_obj::vertexAttribI4iv( int index,Float v){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttribI4iv,(void))

Void GL_obj::vertexAttribI4ui( int index,int v0,int v1,int v2,int v3){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,vertexAttribI4ui,(void))

Void GL_obj::vertexAttribI4uiv( int index,Float v){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttribI4uiv,(void))

Void GL_obj::vertexAttribIPointer( int index,int size,int type,int stride,Float offset){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,vertexAttribIPointer,(void))

Void GL_obj::vertexAttribPointer( int index,int size,int type,bool normalized,int stride,Float offset){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = index;
		int tmp2 = size;
		int tmp3 = type;
		bool tmp4 = normalized;
		int tmp5 = stride;
		Float tmp6 = offset;
		tmp->vertexAttribPointer(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GL_obj,vertexAttribPointer,(void))

Void GL_obj::viewport( int x,int y,int width,int height){
{
		::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
		int tmp1 = x;
		int tmp2 = y;
		int tmp3 = width;
		int tmp4 = height;
		tmp->viewport(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,viewport,(void))

Void GL_obj::waitSync( ::lime::graphics::opengl::GLObject sync,int flags,cpp::Int64Struct timeout){
{
		Dynamic();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,waitSync,(void))

::lime::graphics::opengl::GLContextType GL_obj::get_type( ){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	::lime::graphics::opengl::GLContextType tmp1 = tmp->type;
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,get_type,return )

Float GL_obj::get_version( ){
	::lime::_backend::native::NativeGLRenderContext tmp = ::lime::graphics::opengl::GL_obj::context;
	Float tmp1 = tmp->version;
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,get_version,return )

int GL_obj::__getObjectID( ::lime::graphics::opengl::GLObject object){
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,__getObjectID,return )


GL_obj::GL_obj()
{
}

bool GL_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { outValue = inCallProp == hx::paccAlways ? get_type() : type; return true; }
		if (HX_FIELD_EQ(inName,"hint") ) { outValue = hint_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"flush") ) { outValue = flush_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { outValue = enable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"finish") ) { outValue = finish_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isSync") ) { outValue = isSync_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { outValue = context; return true;  }
		if (HX_FIELD_EQ(inName,"version") ) { outValue = inCallProp == hx::paccAlways ? get_version() : version; return true; }
		if (HX_FIELD_EQ(inName,"disable") ) { outValue = disable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isQuery") ) { outValue = isQuery_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"scissor") ) { outValue = scissor_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cullFace") ) { outValue = cullFace_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"endQuery") ) { outValue = endQuery_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getError") ) { outValue = getError_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getFloat") ) { outValue = getFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getQuery") ) { outValue = getQuery_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isBuffer") ) { outValue = isBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isShader") ) { outValue = isShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"viewport") ) { outValue = viewport_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"waitSync") ) { outValue = waitSync_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_type") ) { outValue = get_type_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendFunc") ) { outValue = blendFunc_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"colorMask") ) { outValue = colorMask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"depthFunc") ) { outValue = depthFunc_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"depthMask") ) { outValue = depthMask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fenceSync") ) { outValue = fenceSync_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"frontFace") ) { outValue = frontFace_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getFloatv") ) { outValue = getFloatv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getQueryi") ) { outValue = getQueryi_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getString") ) { outValue = getString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isEnabled") ) { outValue = isEnabled_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isProgram") ) { outValue = isProgram_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isSampler") ) { outValue = isSampler_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isTexture") ) { outValue = isTexture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lineWidth") ) { outValue = lineWidth_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stencilOp") ) { outValue = stencilOp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform1f") ) { outValue = uniform1f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform1i") ) { outValue = uniform1i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform2f") ) { outValue = uniform2f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform2i") ) { outValue = uniform2i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform3f") ) { outValue = uniform3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform3i") ) { outValue = uniform3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform4f") ) { outValue = uniform4f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform4i") ) { outValue = uniform4i_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"beginQuery") ) { outValue = beginQuery_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bindBuffer") ) { outValue = bindBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"blendColor") ) { outValue = blendColor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bufferData") ) { outValue = bufferData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clearColor") ) { outValue = clearColor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteSync") ) { outValue = deleteSync_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawArrays") ) { outValue = drawArrays_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBoolean") ) { outValue = getBoolean_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getInteger") ) { outValue = getInteger_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getQueryiv") ) { outValue = getQueryiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getShaderi") ) { outValue = getShaderi_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getStringi") ) { outValue = getStringi_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUniform") ) { outValue = getUniform_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"readBuffer") ) { outValue = readBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"readPixels") ) { outValue = readPixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"texImage2D") ) { outValue = texImage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"texImage3D") ) { outValue = texImage3D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform1fv") ) { outValue = uniform1fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform1iv") ) { outValue = uniform1iv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform1ui") ) { outValue = uniform1ui_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform2fv") ) { outValue = uniform2fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform2iv") ) { outValue = uniform2iv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform2ui") ) { outValue = uniform2ui_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform3fv") ) { outValue = uniform3fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform3iv") ) { outValue = uniform3iv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform3ui") ) { outValue = uniform3ui_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform4fv") ) { outValue = uniform4fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform4iv") ) { outValue = uniform4iv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform4ui") ) { outValue = uniform4ui_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"useProgram") ) { outValue = useProgram_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bindSampler") ) { outValue = bindSampler_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bindTexture") ) { outValue = bindTexture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clearDepthf") ) { outValue = clearDepthf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createQuery") ) { outValue = createQuery_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteQuery") ) { outValue = deleteQuery_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"depthRangef") ) { outValue = depthRangef_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawBuffers") ) { outValue = drawBuffers_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBooleanv") ) { outValue = getBooleanv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getIntegeri") ) { outValue = getIntegeri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getIntegerv") ) { outValue = getIntegerv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getProgrami") ) { outValue = getProgrami_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getShaderiv") ) { outValue = getShaderiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUniformf") ) { outValue = getUniformf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUniformi") ) { outValue = getUniformi_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"linkProgram") ) { outValue = linkProgram_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pixelStorei") ) { outValue = pixelStorei_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stencilFunc") ) { outValue = stencilFunc_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stencilMask") ) { outValue = stencilMask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform1uiv") ) { outValue = uniform1uiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform2uiv") ) { outValue = uniform2uiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform3uiv") ) { outValue = uniform3uiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform4uiv") ) { outValue = uniform4uiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"unmapBuffer") ) { outValue = unmapBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_version") ) { outValue = get_version_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"attachShader") ) { outValue = attachShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clearStencil") ) { outValue = clearStencil_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { outValue = createBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createShader") ) { outValue = createShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteBuffer") ) { outValue = deleteBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteShader") ) { outValue = deleteShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"detachShader") ) { outValue = detachShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawElements") ) { outValue = drawElements_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getExtension") ) { outValue = getExtension_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getInteger64") ) { outValue = getInteger64_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getParameter") ) { outValue = getParameter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getProgramiv") ) { outValue = getProgramiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUniformfv") ) { outValue = getUniformfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUniformiv") ) { outValue = getUniformiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUniformui") ) { outValue = getUniformui_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"shaderBinary") ) { outValue = shaderBinary_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"shaderSource") ) { outValue = shaderSource_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"texStorage2D") ) { outValue = texStorage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"texStorage3D") ) { outValue = texStorage3D_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeTexture") ) { outValue = activeTexture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"blendEquation") ) { outValue = blendEquation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bufferSubData") ) { outValue = bufferSubData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clearBufferfi") ) { outValue = clearBufferfi_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clearBufferfv") ) { outValue = clearBufferfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clearBufferiv") ) { outValue = clearBufferiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"compileShader") ) { outValue = compileShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createProgram") ) { outValue = createProgram_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createSampler") ) { outValue = createSampler_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createTexture") ) { outValue = createTexture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteProgram") ) { outValue = deleteProgram_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteSampler") ) { outValue = deleteSampler_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteTexture") ) { outValue = deleteTexture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getInteger64i") ) { outValue = getInteger64i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getInteger64v") ) { outValue = getInteger64v_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getIntegeri_v") ) { outValue = getIntegeri_v_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUniformuiv") ) { outValue = getUniformuiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isContextLost") ) { outValue = isContextLost_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isFramebuffer") ) { outValue = isFramebuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isVertexArray") ) { outValue = isVertexArray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"polygonOffset") ) { outValue = polygonOffset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"programBinary") ) { outValue = programBinary_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"texParameterf") ) { outValue = texParameterf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"texParameteri") ) { outValue = texParameteri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"texSubImage2D") ) { outValue = texSubImage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"texSubImage3D") ) { outValue = texSubImage3D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__getObjectID") ) { outValue = __getObjectID_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bindBufferBase") ) { outValue = bindBufferBase_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clearBufferuiv") ) { outValue = clearBufferuiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clientWaitSync") ) { outValue = clientWaitSync_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"copyTexImage2D") ) { outValue = copyTexImage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"generateMipmap") ) { outValue = generateMipmap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isRenderbuffer") ) { outValue = isRenderbuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"mapBufferRange") ) { outValue = mapBufferRange_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sampleCoverage") ) { outValue = sampleCoverage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib1f") ) { outValue = vertexAttrib1f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib2f") ) { outValue = vertexAttrib2f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib3f") ) { outValue = vertexAttrib3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib4f") ) { outValue = vertexAttrib4f_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bindBufferRange") ) { outValue = bindBufferRange_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bindFramebuffer") ) { outValue = bindFramebuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bindVertexArray") ) { outValue = bindVertexArray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"blitFramebuffer") ) { outValue = blitFramebuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getActiveAttrib") ) { outValue = getActiveAttrib_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getInteger64i_v") ) { outValue = getInteger64i_v_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getShaderSource") ) { outValue = getShaderSource_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getTexParameter") ) { outValue = getTexParameter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getVertexAttrib") ) { outValue = getVertexAttrib_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"validateProgram") ) { outValue = validateProgram_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib1fv") ) { outValue = vertexAttrib1fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib2fv") ) { outValue = vertexAttrib2fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib3fv") ) { outValue = vertexAttrib3fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib4fv") ) { outValue = vertexAttrib4fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttribI4i") ) { outValue = vertexAttribI4i_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__currentProgram") ) { outValue = __currentProgram; return true;  }
		if (HX_FIELD_EQ(inName,"bindRenderbuffer") ) { outValue = bindRenderbuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getActiveUniform") ) { outValue = getActiveUniform_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBufferSubData") ) { outValue = getBufferSubData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getProgramBinary") ) { outValue = getProgramBinary_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getQueryObjectui") ) { outValue = getQueryObjectui_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getShaderInfoLog") ) { outValue = getShaderInfoLog_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSyncParameter") ) { outValue = getSyncParameter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getTexParameterf") ) { outValue = getTexParameterf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getTexParameteri") ) { outValue = getTexParameteri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getVertexAttribf") ) { outValue = getVertexAttribf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getVertexAttribi") ) { outValue = getVertexAttribi_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformMatrix2fv") ) { outValue = uniformMatrix2fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformMatrix3fv") ) { outValue = uniformMatrix3fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformMatrix4fv") ) { outValue = uniformMatrix4fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttribI4iv") ) { outValue = vertexAttribI4iv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttribI4ui") ) { outValue = vertexAttribI4ui_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"blendFuncSeparate") ) { outValue = blendFuncSeparate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"copyBufferSubData") ) { outValue = copyBufferSubData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"copyTexSubImage2D") ) { outValue = copyTexSubImage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"copyTexSubImage3D") ) { outValue = copyTexSubImage3D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createFramebuffer") ) { outValue = createFramebuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createVertexArray") ) { outValue = createVertexArray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteFramebuffer") ) { outValue = deleteFramebuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteVertexArray") ) { outValue = deleteVertexArray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawRangeElements") ) { outValue = drawRangeElements_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getActiveUniforms") ) { outValue = getActiveUniforms_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getAttribLocation") ) { outValue = getAttribLocation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBufferPointerv") ) { outValue = getBufferPointerv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getProgramInfoLog") ) { outValue = getProgramInfoLog_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getQueryObjectuiv") ) { outValue = getQueryObjectuiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getQueryParameter") ) { outValue = getQueryParameter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSyncParameteri") ) { outValue = getSyncParameteri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getTexParameterfv") ) { outValue = getTexParameterfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getTexParameteriv") ) { outValue = getTexParameteriv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUniformIndices") ) { outValue = getUniformIndices_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getVertexAttribfv") ) { outValue = getVertexAttribfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getVertexAttribIi") ) { outValue = getVertexAttribIi_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getVertexAttribiv") ) { outValue = getVertexAttribiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"programParameteri") ) { outValue = programParameteri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"samplerParameterf") ) { outValue = samplerParameterf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"samplerParameteri") ) { outValue = samplerParameteri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stencilOpSeparate") ) { outValue = stencilOpSeparate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttribI4uiv") ) { outValue = vertexAttribI4uiv_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bindAttribLocation") ) { outValue = bindAttribLocation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createRenderbuffer") ) { outValue = createRenderbuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteRenderbuffer") ) { outValue = deleteRenderbuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getAttachedShaders") ) { outValue = getAttachedShaders_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBufferParameter") ) { outValue = getBufferParameter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getInternalformati") ) { outValue = getInternalformati_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getShaderParameter") ) { outValue = getShaderParameter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSyncParameteriv") ) { outValue = getSyncParameteriv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUniformLocation") ) { outValue = getUniformLocation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getVertexAttribIiv") ) { outValue = getVertexAttribIiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getVertexAttribIui") ) { outValue = getVertexAttribIui_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformMatrix2x3fv") ) { outValue = uniformMatrix2x3fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformMatrix2x4fv") ) { outValue = uniformMatrix2x4fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformMatrix3x2fv") ) { outValue = uniformMatrix3x2fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformMatrix3x4fv") ) { outValue = uniformMatrix3x4fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformMatrix4x2fv") ) { outValue = uniformMatrix4x2fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformMatrix4x3fv") ) { outValue = uniformMatrix4x3fv_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"drawArraysInstanced") ) { outValue = drawArraysInstanced_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getActiveUniformsiv") ) { outValue = getActiveUniformsiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBufferParameteri") ) { outValue = getBufferParameteri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getFragDataLocation") ) { outValue = getFragDataLocation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getIndexedParameter") ) { outValue = getIndexedParameter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getInternalformativ") ) { outValue = getInternalformativ_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getProgramParameter") ) { outValue = getProgramParameter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSamplerParameter") ) { outValue = getSamplerParameter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getVertexAttribIuiv") ) { outValue = getVertexAttribIuiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isTransformFeedback") ) { outValue = isTransformFeedback_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"renderbufferStorage") ) { outValue = renderbufferStorage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stencilFuncSeparate") ) { outValue = stencilFuncSeparate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stencilMaskSeparate") ) { outValue = stencilMaskSeparate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformBlockBinding") ) { outValue = uniformBlockBinding_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttribDivisor") ) { outValue = vertexAttribDivisor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttribPointer") ) { outValue = vertexAttribPointer_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"compressedTexImage2D") ) { outValue = compressedTexImage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"compressedTexImage3D") ) { outValue = compressedTexImage3D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"endTransformFeedback") ) { outValue = endTransformFeedback_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"framebufferTexture2D") ) { outValue = framebufferTexture2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBufferParameteriv") ) { outValue = getBufferParameteriv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getContextAttributes") ) { outValue = getContextAttributes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSamplerParameterf") ) { outValue = getSamplerParameterf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSamplerParameteri") ) { outValue = getSamplerParameteri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUniformBlockIndex") ) { outValue = getUniformBlockIndex_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttribIPointer") ) { outValue = vertexAttribIPointer_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"bindTransformFeedback") ) { outValue = bindTransformFeedback_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"blendEquationSeparate") ) { outValue = blendEquationSeparate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawElementsInstanced") ) { outValue = drawElementsInstanced_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSamplerParameterfv") ) { outValue = getSamplerParameterfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSamplerParameteriv") ) { outValue = getSamplerParameteriv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"invalidateFramebuffer") ) { outValue = invalidateFramebuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"releaseShaderCompiler") ) { outValue = releaseShaderCompiler_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"beginTransformFeedback") ) { outValue = beginTransformFeedback_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"checkFramebufferStatus") ) { outValue = checkFramebufferStatus_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getActiveUniformBlocki") ) { outValue = getActiveUniformBlocki_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBufferParameteri64v") ) { outValue = getBufferParameteri64v_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSupportedExtensions") ) { outValue = getSupportedExtensions_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pauseTransformFeedback") ) { outValue = pauseTransformFeedback_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"compressedTexSubImage2D") ) { outValue = compressedTexSubImage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"compressedTexSubImage3D") ) { outValue = compressedTexSubImage3D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createTransformFeedback") ) { outValue = createTransformFeedback_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteTransformFeedback") ) { outValue = deleteTransformFeedback_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"enableVertexAttribArray") ) { outValue = enableVertexAttribArray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"framebufferRenderbuffer") ) { outValue = framebufferRenderbuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"framebufferTextureLayer") ) { outValue = framebufferTextureLayer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getActiveUniformBlockiv") ) { outValue = getActiveUniformBlockiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getVertexAttribPointerv") ) { outValue = getVertexAttribPointerv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"resumeTransformFeedback") ) { outValue = resumeTransformFeedback_dyn(); return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"disableVertexAttribArray") ) { outValue = disableVertexAttribArray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getRenderbufferParameter") ) { outValue = getRenderbufferParameter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getShaderPrecisionFormat") ) { outValue = getShaderPrecisionFormat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"invalidateSubFramebuffer") ) { outValue = invalidateSubFramebuffer_dyn(); return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getActiveUniformBlockName") ) { outValue = getActiveUniformBlockName_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getRenderbufferParameteri") ) { outValue = getRenderbufferParameteri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"transformFeedbackVaryings") ) { outValue = transformFeedbackVaryings_dyn(); return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getInternalformatParameter") ) { outValue = getInternalformatParameter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getRenderbufferParameteriv") ) { outValue = getRenderbufferParameteriv_dyn(); return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"getTransformFeedbackVarying") ) { outValue = getTransformFeedbackVarying_dyn(); return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"getActiveUniformBlockParameter") ) { outValue = getActiveUniformBlockParameter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"renderbufferStorageMultisample") ) { outValue = renderbufferStorageMultisample_dyn(); return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"getFramebufferAttachmentParameter") ) { outValue = getFramebufferAttachmentParameter_dyn(); return true;  }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"getFramebufferAttachmentParameteri") ) { outValue = getFramebufferAttachmentParameteri_dyn(); return true;  }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"getFramebufferAttachmentParameteriv") ) { outValue = getFramebufferAttachmentParameteriv_dyn(); return true;  }
	}
	return false;
}

bool GL_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=ioValue.Cast< ::lime::graphics::opengl::GLContextType >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=ioValue.Cast< ::lime::_backend::native::NativeGLRenderContext >(); return true; }
		if (HX_FIELD_EQ(inName,"version") ) { version=ioValue.Cast< Float >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__currentProgram") ) { __currentProgram=ioValue.Cast< ::lime::graphics::opengl::GLObject >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &GL_obj::DEPTH_BUFFER_BIT,HX_HCSTRING("DEPTH_BUFFER_BIT","\xca","\x5b","\xce","\xc6")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_BUFFER_BIT,HX_HCSTRING("STENCIL_BUFFER_BIT","\x71","\x93","\x29","\xde")},
	{hx::fsInt,(void *) &GL_obj::COLOR_BUFFER_BIT,HX_HCSTRING("COLOR_BUFFER_BIT","\x6a","\xf7","\x74","\xfb")},
	{hx::fsInt,(void *) &GL_obj::POINTS,HX_HCSTRING("POINTS","\x23","\xbe","\xb0","\xa9")},
	{hx::fsInt,(void *) &GL_obj::LINES,HX_HCSTRING("LINES","\xdf","\x15","\xf0","\xf2")},
	{hx::fsInt,(void *) &GL_obj::LINE_LOOP,HX_HCSTRING("LINE_LOOP","\xcf","\x55","\xc1","\x16")},
	{hx::fsInt,(void *) &GL_obj::LINE_STRIP,HX_HCSTRING("LINE_STRIP","\xed","\x20","\x88","\xdd")},
	{hx::fsInt,(void *) &GL_obj::TRIANGLES,HX_HCSTRING("TRIANGLES","\x8b","\xa0","\x99","\x7a")},
	{hx::fsInt,(void *) &GL_obj::TRIANGLE_STRIP,HX_HCSTRING("TRIANGLE_STRIP","\xc1","\x66","\x6c","\xf6")},
	{hx::fsInt,(void *) &GL_obj::TRIANGLE_FAN,HX_HCSTRING("TRIANGLE_FAN","\x7c","\xee","\x2e","\x91")},
	{hx::fsInt,(void *) &GL_obj::ZERO,HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b")},
	{hx::fsInt,(void *) &GL_obj::ONE,HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00")},
	{hx::fsInt,(void *) &GL_obj::SRC_COLOR,HX_HCSTRING("SRC_COLOR","\x48","\x9e","\xbd","\x5c")},
	{hx::fsInt,(void *) &GL_obj::ONE_MINUS_SRC_COLOR,HX_HCSTRING("ONE_MINUS_SRC_COLOR","\x20","\x3b","\xe1","\x48")},
	{hx::fsInt,(void *) &GL_obj::SRC_ALPHA,HX_HCSTRING("SRC_ALPHA","\x43","\xd4","\xf7","\x33")},
	{hx::fsInt,(void *) &GL_obj::ONE_MINUS_SRC_ALPHA,HX_HCSTRING("ONE_MINUS_SRC_ALPHA","\x1b","\x71","\x1b","\x20")},
	{hx::fsInt,(void *) &GL_obj::DST_ALPHA,HX_HCSTRING("DST_ALPHA","\x24","\x02","\xf2","\xd3")},
	{hx::fsInt,(void *) &GL_obj::ONE_MINUS_DST_ALPHA,HX_HCSTRING("ONE_MINUS_DST_ALPHA","\xfc","\x9e","\x15","\xc0")},
	{hx::fsInt,(void *) &GL_obj::DST_COLOR,HX_HCSTRING("DST_COLOR","\x29","\xcc","\xb7","\xfc")},
	{hx::fsInt,(void *) &GL_obj::ONE_MINUS_DST_COLOR,HX_HCSTRING("ONE_MINUS_DST_COLOR","\x01","\x69","\xdb","\xe8")},
	{hx::fsInt,(void *) &GL_obj::SRC_ALPHA_SATURATE,HX_HCSTRING("SRC_ALPHA_SATURATE","\xab","\xe2","\x3d","\x33")},
	{hx::fsInt,(void *) &GL_obj::FUNC_ADD,HX_HCSTRING("FUNC_ADD","\x46","\x78","\x17","\x75")},
	{hx::fsInt,(void *) &GL_obj::BLEND_EQUATION,HX_HCSTRING("BLEND_EQUATION","\x9a","\x14","\x92","\x71")},
	{hx::fsInt,(void *) &GL_obj::BLEND_EQUATION_RGB,HX_HCSTRING("BLEND_EQUATION_RGB","\x88","\x25","\xeb","\x90")},
	{hx::fsInt,(void *) &GL_obj::BLEND_EQUATION_ALPHA,HX_HCSTRING("BLEND_EQUATION_ALPHA","\x99","\xaa","\xae","\x37")},
	{hx::fsInt,(void *) &GL_obj::FUNC_SUBTRACT,HX_HCSTRING("FUNC_SUBTRACT","\xaf","\xc0","\xa0","\x17")},
	{hx::fsInt,(void *) &GL_obj::FUNC_REVERSE_SUBTRACT,HX_HCSTRING("FUNC_REVERSE_SUBTRACT","\xcc","\x8d","\xef","\xf3")},
	{hx::fsInt,(void *) &GL_obj::BLEND_DST_RGB,HX_HCSTRING("BLEND_DST_RGB","\x05","\x87","\xf5","\xec")},
	{hx::fsInt,(void *) &GL_obj::BLEND_SRC_RGB,HX_HCSTRING("BLEND_SRC_RGB","\x64","\x43","\x8c","\x2c")},
	{hx::fsInt,(void *) &GL_obj::BLEND_DST_ALPHA,HX_HCSTRING("BLEND_DST_ALPHA","\x56","\x25","\x32","\x74")},
	{hx::fsInt,(void *) &GL_obj::BLEND_SRC_ALPHA,HX_HCSTRING("BLEND_SRC_ALPHA","\x75","\xf7","\x37","\xd4")},
	{hx::fsInt,(void *) &GL_obj::CONSTANT_COLOR,HX_HCSTRING("CONSTANT_COLOR","\xe8","\x64","\x8a","\xc8")},
	{hx::fsInt,(void *) &GL_obj::ONE_MINUS_CONSTANT_COLOR,HX_HCSTRING("ONE_MINUS_CONSTANT_COLOR","\x10","\x39","\xe7","\x06")},
	{hx::fsInt,(void *) &GL_obj::CONSTANT_ALPHA,HX_HCSTRING("CONSTANT_ALPHA","\xe3","\x9a","\xc4","\x9f")},
	{hx::fsInt,(void *) &GL_obj::ONE_MINUS_CONSTANT_ALPHA,HX_HCSTRING("ONE_MINUS_CONSTANT_ALPHA","\x0b","\x6f","\x21","\xde")},
	{hx::fsInt,(void *) &GL_obj::BLEND_COLOR,HX_HCSTRING("BLEND_COLOR","\x75","\xcb","\xc8","\x67")},
	{hx::fsInt,(void *) &GL_obj::ARRAY_BUFFER,HX_HCSTRING("ARRAY_BUFFER","\x46","\x66","\x17","\xf4")},
	{hx::fsInt,(void *) &GL_obj::ELEMENT_ARRAY_BUFFER,HX_HCSTRING("ELEMENT_ARRAY_BUFFER","\x09","\x05","\x53","\x3d")},
	{hx::fsInt,(void *) &GL_obj::ARRAY_BUFFER_BINDING,HX_HCSTRING("ARRAY_BUFFER_BINDING","\xec","\xd4","\xa9","\x79")},
	{hx::fsInt,(void *) &GL_obj::ELEMENT_ARRAY_BUFFER_BINDING,HX_HCSTRING("ELEMENT_ARRAY_BUFFER_BINDING","\xaf","\x6e","\x96","\xa2")},
	{hx::fsInt,(void *) &GL_obj::STREAM_DRAW,HX_HCSTRING("STREAM_DRAW","\x63","\x7f","\x28","\x15")},
	{hx::fsInt,(void *) &GL_obj::STATIC_DRAW,HX_HCSTRING("STATIC_DRAW","\x75","\x50","\x2f","\xba")},
	{hx::fsInt,(void *) &GL_obj::DYNAMIC_DRAW,HX_HCSTRING("DYNAMIC_DRAW","\x24","\x04","\x1f","\x24")},
	{hx::fsInt,(void *) &GL_obj::BUFFER_SIZE,HX_HCSTRING("BUFFER_SIZE","\xa0","\x7b","\x91","\x4c")},
	{hx::fsInt,(void *) &GL_obj::BUFFER_USAGE,HX_HCSTRING("BUFFER_USAGE","\x42","\x05","\x11","\xe0")},
	{hx::fsInt,(void *) &GL_obj::CURRENT_VERTEX_ATTRIB,HX_HCSTRING("CURRENT_VERTEX_ATTRIB","\x1f","\x8c","\x2f","\xab")},
	{hx::fsInt,(void *) &GL_obj::FRONT,HX_HCSTRING("FRONT","\x89","\x50","\x7c","\x84")},
	{hx::fsInt,(void *) &GL_obj::BACK,HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b")},
	{hx::fsInt,(void *) &GL_obj::FRONT_AND_BACK,HX_HCSTRING("FRONT_AND_BACK","\xa5","\x3d","\x6a","\xc1")},
	{hx::fsInt,(void *) &GL_obj::CULL_FACE,HX_HCSTRING("CULL_FACE","\x8a","\xa5","\xf4","\xcf")},
	{hx::fsInt,(void *) &GL_obj::BLEND,HX_HCSTRING("BLEND","\x31","\x20","\xe3","\x32")},
	{hx::fsInt,(void *) &GL_obj::DITHER,HX_HCSTRING("DITHER","\xe6","\xac","\x41","\x70")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_TEST,HX_HCSTRING("STENCIL_TEST","\xd5","\xdc","\x69","\xd5")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_TEST,HX_HCSTRING("DEPTH_TEST","\x6e","\x6c","\x25","\x28")},
	{hx::fsInt,(void *) &GL_obj::SCISSOR_TEST,HX_HCSTRING("SCISSOR_TEST","\xb5","\xbe","\x51","\x59")},
	{hx::fsInt,(void *) &GL_obj::POLYGON_OFFSET_FILL,HX_HCSTRING("POLYGON_OFFSET_FILL","\x4a","\x3d","\x32","\xac")},
	{hx::fsInt,(void *) &GL_obj::SAMPLE_ALPHA_TO_COVERAGE,HX_HCSTRING("SAMPLE_ALPHA_TO_COVERAGE","\x16","\x3e","\x56","\xe1")},
	{hx::fsInt,(void *) &GL_obj::SAMPLE_COVERAGE,HX_HCSTRING("SAMPLE_COVERAGE","\xdd","\xb7","\x0e","\xc1")},
	{hx::fsInt,(void *) &GL_obj::NO_ERROR,HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f")},
	{hx::fsInt,(void *) &GL_obj::INVALID_ENUM,HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13")},
	{hx::fsInt,(void *) &GL_obj::INVALID_VALUE,HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0")},
	{hx::fsInt,(void *) &GL_obj::INVALID_OPERATION,HX_HCSTRING("INVALID_OPERATION","\x5f","\xb1","\xc8","\x29")},
	{hx::fsInt,(void *) &GL_obj::OUT_OF_MEMORY,HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1")},
	{hx::fsInt,(void *) &GL_obj::CW,HX_HCSTRING("CW","\xb4","\x3a","\x00","\x00")},
	{hx::fsInt,(void *) &GL_obj::CCW,HX_HCSTRING("CCW","\xb7","\x11","\x33","\x00")},
	{hx::fsInt,(void *) &GL_obj::LINE_WIDTH,HX_HCSTRING("LINE_WIDTH","\x1b","\x84","\xd2","\x23")},
	{hx::fsInt,(void *) &GL_obj::ALIASED_POINT_SIZE_RANGE,HX_HCSTRING("ALIASED_POINT_SIZE_RANGE","\xfe","\xf6","\xa4","\x7b")},
	{hx::fsInt,(void *) &GL_obj::ALIASED_LINE_WIDTH_RANGE,HX_HCSTRING("ALIASED_LINE_WIDTH_RANGE","\xe9","\x22","\xd5","\x8a")},
	{hx::fsInt,(void *) &GL_obj::CULL_FACE_MODE,HX_HCSTRING("CULL_FACE_MODE","\x78","\xbd","\x87","\xd1")},
	{hx::fsInt,(void *) &GL_obj::FRONT_FACE,HX_HCSTRING("FRONT_FACE","\x53","\xb7","\x4d","\xef")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_RANGE,HX_HCSTRING("DEPTH_RANGE","\x01","\x9a","\x23","\xcf")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_WRITEMASK,HX_HCSTRING("DEPTH_WRITEMASK","\x8f","\x37","\x3f","\x66")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_CLEAR_VALUE,HX_HCSTRING("DEPTH_CLEAR_VALUE","\x23","\x17","\x0d","\x1b")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_FUNC,HX_HCSTRING("DEPTH_FUNC","\x60","\x8f","\xf0","\x1e")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_CLEAR_VALUE,HX_HCSTRING("STENCIL_CLEAR_VALUE","\x9c","\x91","\x82","\x73")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_FUNC,HX_HCSTRING("STENCIL_FUNC","\xc7","\xff","\x34","\xcc")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_FAIL,HX_HCSTRING("STENCIL_FAIL","\x61","\xce","\x25","\xcc")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_PASS_DEPTH_FAIL,HX_HCSTRING("STENCIL_PASS_DEPTH_FAIL","\x45","\xca","\xb9","\xc8")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_PASS_DEPTH_PASS,HX_HCSTRING("STENCIL_PASS_DEPTH_PASS","\x38","\xf5","\x55","\xcf")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_REF,HX_HCSTRING("STENCIL_REF","\x10","\x6a","\xa5","\x3c")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_VALUE_MASK,HX_HCSTRING("STENCIL_VALUE_MASK","\x9d","\x58","\x5e","\xa0")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_WRITEMASK,HX_HCSTRING("STENCIL_WRITEMASK","\xc8","\xf1","\xa6","\x49")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_BACK_FUNC,HX_HCSTRING("STENCIL_BACK_FUNC","\x39","\x78","\xa2","\x90")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_BACK_FAIL,HX_HCSTRING("STENCIL_BACK_FAIL","\xd3","\x46","\x93","\x90")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_BACK_PASS_DEPTH_FAIL,HX_HCSTRING("STENCIL_BACK_PASS_DEPTH_FAIL","\x13","\x23","\x0e","\x34")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_BACK_PASS_DEPTH_PASS,HX_HCSTRING("STENCIL_BACK_PASS_DEPTH_PASS","\x06","\x4e","\xaa","\x3a")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_BACK_REF,HX_HCSTRING("STENCIL_BACK_REF","\xde","\x45","\xb8","\x08")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_BACK_VALUE_MASK,HX_HCSTRING("STENCIL_BACK_VALUE_MASK","\x8f","\xb2","\xc4","\x88")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_BACK_WRITEMASK,HX_HCSTRING("STENCIL_BACK_WRITEMASK","\x16","\x9c","\x15","\xc2")},
	{hx::fsInt,(void *) &GL_obj::VIEWPORT,HX_HCSTRING("VIEWPORT","\x66","\xdc","\x2a","\xf6")},
	{hx::fsInt,(void *) &GL_obj::SCISSOR_BOX,HX_HCSTRING("SCISSOR_BOX","\xe8","\x48","\x4c","\x55")},
	{hx::fsInt,(void *) &GL_obj::COLOR_CLEAR_VALUE,HX_HCSTRING("COLOR_CLEAR_VALUE","\x83","\xa7","\x2e","\xf8")},
	{hx::fsInt,(void *) &GL_obj::COLOR_WRITEMASK,HX_HCSTRING("COLOR_WRITEMASK","\xef","\xef","\xf9","\x14")},
	{hx::fsInt,(void *) &GL_obj::UNPACK_ALIGNMENT,HX_HCSTRING("UNPACK_ALIGNMENT","\xb6","\x2a","\x2e","\x4b")},
	{hx::fsInt,(void *) &GL_obj::PACK_ALIGNMENT,HX_HCSTRING("PACK_ALIGNMENT","\x9d","\xd6","\x85","\xc3")},
	{hx::fsInt,(void *) &GL_obj::MAX_TEXTURE_SIZE,HX_HCSTRING("MAX_TEXTURE_SIZE","\xe0","\x0b","\x5b","\xfb")},
	{hx::fsInt,(void *) &GL_obj::MAX_VIEWPORT_DIMS,HX_HCSTRING("MAX_VIEWPORT_DIMS","\xa9","\x2d","\xfb","\x08")},
	{hx::fsInt,(void *) &GL_obj::SUBPIXEL_BITS,HX_HCSTRING("SUBPIXEL_BITS","\x1f","\xac","\x14","\x0a")},
	{hx::fsInt,(void *) &GL_obj::RED_BITS,HX_HCSTRING("RED_BITS","\x14","\xf8","\x9e","\x96")},
	{hx::fsInt,(void *) &GL_obj::GREEN_BITS,HX_HCSTRING("GREEN_BITS","\x62","\xa9","\x9b","\x94")},
	{hx::fsInt,(void *) &GL_obj::BLUE_BITS,HX_HCSTRING("BLUE_BITS","\x0b","\x26","\x60","\xa1")},
	{hx::fsInt,(void *) &GL_obj::ALPHA_BITS,HX_HCSTRING("ALPHA_BITS","\xe7","\xfe","\x7b","\xe0")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_BITS,HX_HCSTRING("DEPTH_BITS","\x22","\x9f","\x42","\x1c")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_BITS,HX_HCSTRING("STENCIL_BITS","\x89","\x0f","\x87","\xc9")},
	{hx::fsInt,(void *) &GL_obj::POLYGON_OFFSET_UNITS,HX_HCSTRING("POLYGON_OFFSET_UNITS","\xa8","\xe8","\x11","\xa6")},
	{hx::fsInt,(void *) &GL_obj::POLYGON_OFFSET_FACTOR,HX_HCSTRING("POLYGON_OFFSET_FACTOR","\x56","\x6b","\x12","\x2a")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_BINDING_2D,HX_HCSTRING("TEXTURE_BINDING_2D","\x30","\xec","\x98","\xb1")},
	{hx::fsInt,(void *) &GL_obj::SAMPLE_BUFFERS,HX_HCSTRING("SAMPLE_BUFFERS","\xfe","\x16","\x71","\x3c")},
	{hx::fsInt,(void *) &GL_obj::SAMPLES,HX_HCSTRING("SAMPLES","\xe9","\x98","\x9d","\x03")},
	{hx::fsInt,(void *) &GL_obj::SAMPLE_COVERAGE_VALUE,HX_HCSTRING("SAMPLE_COVERAGE_VALUE","\x2f","\x7a","\x07","\x69")},
	{hx::fsInt,(void *) &GL_obj::SAMPLE_COVERAGE_INVERT,HX_HCSTRING("SAMPLE_COVERAGE_INVERT","\x78","\x52","\xa5","\xcd")},
	{hx::fsInt,(void *) &GL_obj::NUM_COMPRESSED_TEXTURE_FORMATS,HX_HCSTRING("NUM_COMPRESSED_TEXTURE_FORMATS","\x33","\xae","\x1c","\x0d")},
	{hx::fsInt,(void *) &GL_obj::COMPRESSED_TEXTURE_FORMATS,HX_HCSTRING("COMPRESSED_TEXTURE_FORMATS","\x7a","\x13","\xe3","\x12")},
	{hx::fsInt,(void *) &GL_obj::DONT_CARE,HX_HCSTRING("DONT_CARE","\x7f","\x9b","\xc1","\xcf")},
	{hx::fsInt,(void *) &GL_obj::FASTEST,HX_HCSTRING("FASTEST","\x0a","\xa3","\x0d","\x5e")},
	{hx::fsInt,(void *) &GL_obj::NICEST,HX_HCSTRING("NICEST","\x7e","\x6d","\x94","\x64")},
	{hx::fsInt,(void *) &GL_obj::GENERATE_MIPMAP_HINT,HX_HCSTRING("GENERATE_MIPMAP_HINT","\x94","\xd3","\xd5","\x83")},
	{hx::fsInt,(void *) &GL_obj::BYTE,HX_HCSTRING("BYTE","\x08","\xe7","\xe3","\x2b")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_BYTE,HX_HCSTRING("UNSIGNED_BYTE","\xd2","\x79","\x6b","\x01")},
	{hx::fsInt,(void *) &GL_obj::SHORT,HX_HCSTRING("SHORT","\x5c","\xbc","\x15","\xfa")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_SHORT,HX_HCSTRING("UNSIGNED_SHORT","\x52","\x9a","\x2e","\xfb")},
	{hx::fsInt,(void *) &GL_obj::INT,HX_HCSTRING("INT","\xcf","\xa8","\x37","\x00")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_INT,HX_HCSTRING("UNSIGNED_INT","\x45","\xfd","\xb9","\x1c")},
	{hx::fsInt,(void *) &GL_obj::FLOAT,HX_HCSTRING("FLOAT","\x7c","\xfd","\x84","\x80")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_COMPONENT,HX_HCSTRING("DEPTH_COMPONENT","\x01","\x1f","\x62","\x0f")},
	{hx::fsInt,(void *) &GL_obj::ALPHA,HX_HCSTRING("ALPHA","\x3e","\xdf","\x84","\x9f")},
	{hx::fsInt,(void *) &GL_obj::RGB,HX_HCSTRING("RGB","\xed","\x76","\x3e","\x00")},
	{hx::fsInt,(void *) &GL_obj::RGBA,HX_HCSTRING("RGBA","\xb4","\x98","\x69","\x36")},
	{hx::fsInt,(void *) &GL_obj::LUMINANCE,HX_HCSTRING("LUMINANCE","\xd8","\xa7","\xe0","\x63")},
	{hx::fsInt,(void *) &GL_obj::LUMINANCE_ALPHA,HX_HCSTRING("LUMINANCE_ALPHA","\x57","\x40","\xe0","\xbd")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_SHORT_4_4_4_4,HX_HCSTRING("UNSIGNED_SHORT_4_4_4_4","\xa6","\x33","\x71","\x7b")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_SHORT_5_5_5_1,HX_HCSTRING("UNSIGNED_SHORT_5_5_5_1","\x26","\x01","\x6e","\x38")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_SHORT_5_6_5,HX_HCSTRING("UNSIGNED_SHORT_5_6_5","\x75","\xbb","\x16","\x8c")},
	{hx::fsInt,(void *) &GL_obj::FRAGMENT_SHADER,HX_HCSTRING("FRAGMENT_SHADER","\xf4","\x26","\x78","\xe9")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_SHADER,HX_HCSTRING("VERTEX_SHADER","\xe0","\x69","\x73","\x49")},
	{hx::fsInt,(void *) &GL_obj::MAX_VERTEX_ATTRIBS,HX_HCSTRING("MAX_VERTEX_ATTRIBS","\x49","\xc9","\x15","\x5f")},
	{hx::fsInt,(void *) &GL_obj::MAX_VERTEX_UNIFORM_VECTORS,HX_HCSTRING("MAX_VERTEX_UNIFORM_VECTORS","\x45","\x6c","\x16","\x5a")},
	{hx::fsInt,(void *) &GL_obj::MAX_VARYING_VECTORS,HX_HCSTRING("MAX_VARYING_VECTORS","\x06","\xb9","\xf7","\x37")},
	{hx::fsInt,(void *) &GL_obj::MAX_COMBINED_TEXTURE_IMAGE_UNITS,HX_HCSTRING("MAX_COMBINED_TEXTURE_IMAGE_UNITS","\xa8","\xd1","\xa6","\x77")},
	{hx::fsInt,(void *) &GL_obj::MAX_VERTEX_TEXTURE_IMAGE_UNITS,HX_HCSTRING("MAX_VERTEX_TEXTURE_IMAGE_UNITS","\xc7","\x90","\x95","\x2b")},
	{hx::fsInt,(void *) &GL_obj::MAX_TEXTURE_IMAGE_UNITS,HX_HCSTRING("MAX_TEXTURE_IMAGE_UNITS","\xcc","\x6c","\x61","\x54")},
	{hx::fsInt,(void *) &GL_obj::MAX_FRAGMENT_UNIFORM_VECTORS,HX_HCSTRING("MAX_FRAGMENT_UNIFORM_VECTORS","\x71","\x49","\xf5","\x0a")},
	{hx::fsInt,(void *) &GL_obj::SHADER_TYPE,HX_HCSTRING("SHADER_TYPE","\x54","\xe5","\x27","\x87")},
	{hx::fsInt,(void *) &GL_obj::DELETE_STATUS,HX_HCSTRING("DELETE_STATUS","\x06","\xe4","\x98","\x1e")},
	{hx::fsInt,(void *) &GL_obj::LINK_STATUS,HX_HCSTRING("LINK_STATUS","\x17","\x18","\x8f","\x45")},
	{hx::fsInt,(void *) &GL_obj::VALIDATE_STATUS,HX_HCSTRING("VALIDATE_STATUS","\xfb","\x22","\x07","\xc6")},
	{hx::fsInt,(void *) &GL_obj::ATTACHED_SHADERS,HX_HCSTRING("ATTACHED_SHADERS","\x73","\xd2","\x76","\x75")},
	{hx::fsInt,(void *) &GL_obj::ACTIVE_UNIFORMS,HX_HCSTRING("ACTIVE_UNIFORMS","\x98","\x7d","\x3a","\x2c")},
	{hx::fsInt,(void *) &GL_obj::ACTIVE_ATTRIBUTES,HX_HCSTRING("ACTIVE_ATTRIBUTES","\xf0","\xe5","\xc7","\x4a")},
	{hx::fsInt,(void *) &GL_obj::SHADING_LANGUAGE_VERSION,HX_HCSTRING("SHADING_LANGUAGE_VERSION","\xe6","\xc4","\xef","\x70")},
	{hx::fsInt,(void *) &GL_obj::CURRENT_PROGRAM,HX_HCSTRING("CURRENT_PROGRAM","\xfe","\x28","\xc0","\x3f")},
	{hx::fsInt,(void *) &GL_obj::NEVER,HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17")},
	{hx::fsInt,(void *) &GL_obj::LESS,HX_HCSTRING("LESS","\x59","\xdb","\x70","\x32")},
	{hx::fsInt,(void *) &GL_obj::EQUAL,HX_HCSTRING("EQUAL","\x94","\x07","\x71","\xf0")},
	{hx::fsInt,(void *) &GL_obj::LEQUAL,HX_HCSTRING("LEQUAL","\xc8","\x73","\x90","\x53")},
	{hx::fsInt,(void *) &GL_obj::GREATER,HX_HCSTRING("GREATER","\xda","\x64","\x94","\x37")},
	{hx::fsInt,(void *) &GL_obj::NOTEQUAL,HX_HCSTRING("NOTEQUAL","\xc1","\xc1","\xe9","\xc8")},
	{hx::fsInt,(void *) &GL_obj::GEQUAL,HX_HCSTRING("GEQUAL","\xed","\xa5","\xc7","\x53")},
	{hx::fsInt,(void *) &GL_obj::ALWAYS,HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9")},
	{hx::fsInt,(void *) &GL_obj::KEEP,HX_HCSTRING("KEEP","\x85","\x98","\xc7","\x31")},
	{hx::fsInt,(void *) &GL_obj::REPLACE,HX_HCSTRING("REPLACE","\x14","\x1c","\xfc","\x2a")},
	{hx::fsInt,(void *) &GL_obj::INCR,HX_HCSTRING("INCR","\xd4","\xfd","\x7b","\x30")},
	{hx::fsInt,(void *) &GL_obj::DECR,HX_HCSTRING("DECR","\x70","\x18","\x27","\x2d")},
	{hx::fsInt,(void *) &GL_obj::INVERT,HX_HCSTRING("INVERT","\x16","\x93","\x5b","\x52")},
	{hx::fsInt,(void *) &GL_obj::INCR_WRAP,HX_HCSTRING("INCR_WRAP","\x55","\x7f","\x68","\x2c")},
	{hx::fsInt,(void *) &GL_obj::DECR_WRAP,HX_HCSTRING("DECR_WRAP","\x39","\x6f","\xeb","\x0a")},
	{hx::fsInt,(void *) &GL_obj::VENDOR,HX_HCSTRING("VENDOR","\x88","\x91","\x19","\x51")},
	{hx::fsInt,(void *) &GL_obj::RENDERER,HX_HCSTRING("RENDERER","\x43","\x55","\x61","\x0c")},
	{hx::fsInt,(void *) &GL_obj::VERSION,HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc")},
	{hx::fsInt,(void *) &GL_obj::EXTENSIONS,HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b")},
	{hx::fsInt,(void *) &GL_obj::NEAREST,HX_HCSTRING("NEAREST","\x3e","\xec","\x9d","\xe5")},
	{hx::fsInt,(void *) &GL_obj::LINEAR,HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f")},
	{hx::fsInt,(void *) &GL_obj::NEAREST_MIPMAP_NEAREST,HX_HCSTRING("NEAREST_MIPMAP_NEAREST","\x68","\xb9","\x63","\x7e")},
	{hx::fsInt,(void *) &GL_obj::LINEAR_MIPMAP_NEAREST,HX_HCSTRING("LINEAR_MIPMAP_NEAREST","\xa1","\x9b","\xa4","\x65")},
	{hx::fsInt,(void *) &GL_obj::NEAREST_MIPMAP_LINEAR,HX_HCSTRING("NEAREST_MIPMAP_LINEAR","\xfb","\x83","\xf2","\x3b")},
	{hx::fsInt,(void *) &GL_obj::LINEAR_MIPMAP_LINEAR,HX_HCSTRING("LINEAR_MIPMAP_LINEAR","\xe2","\x8b","\xf8","\x99")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_MAG_FILTER,HX_HCSTRING("TEXTURE_MAG_FILTER","\x88","\xff","\xd5","\x1e")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_MIN_FILTER,HX_HCSTRING("TEXTURE_MIN_FILTER","\x69","\x66","\xc2","\x46")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_WRAP_S,HX_HCSTRING("TEXTURE_WRAP_S","\xa2","\x2d","\xc3","\xfe")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_WRAP_T,HX_HCSTRING("TEXTURE_WRAP_T","\xa3","\x2d","\xc3","\xfe")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_2D,HX_HCSTRING("TEXTURE_2D","\x16","\x0c","\xf8","\xa2")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE,HX_HCSTRING("TEXTURE","\xbb","\x9c","\xb4","\x1e")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_CUBE_MAP,HX_HCSTRING("TEXTURE_CUBE_MAP","\x36","\x7a","\xe1","\xad")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_BINDING_CUBE_MAP,HX_HCSTRING("TEXTURE_BINDING_CUBE_MAP","\xd0","\x69","\x98","\x75")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_CUBE_MAP_POSITIVE_X,HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_X","\xbb","\x1c","\xee","\x24")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_X,HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_X","\x77","\x03","\xe2","\x6b")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Y,HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_Y","\xbc","\x1c","\xee","\x24")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Y,HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Y","\x78","\x03","\xe2","\x6b")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Z,HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_Z","\xbd","\x1c","\xee","\x24")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Z,HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Z","\x79","\x03","\xe2","\x6b")},
	{hx::fsInt,(void *) &GL_obj::MAX_CUBE_MAP_TEXTURE_SIZE,HX_HCSTRING("MAX_CUBE_MAP_TEXTURE_SIZE","\x77","\xb9","\x24","\x9d")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE0,HX_HCSTRING("TEXTURE0","\x15","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE1,HX_HCSTRING("TEXTURE1","\x16","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE2,HX_HCSTRING("TEXTURE2","\x17","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE3,HX_HCSTRING("TEXTURE3","\x18","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE4,HX_HCSTRING("TEXTURE4","\x19","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE5,HX_HCSTRING("TEXTURE5","\x1a","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE6,HX_HCSTRING("TEXTURE6","\x1b","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE7,HX_HCSTRING("TEXTURE7","\x1c","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE8,HX_HCSTRING("TEXTURE8","\x1d","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE9,HX_HCSTRING("TEXTURE9","\x1e","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE10,HX_HCSTRING("TEXTURE10","\x5a","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE11,HX_HCSTRING("TEXTURE11","\x5b","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE12,HX_HCSTRING("TEXTURE12","\x5c","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE13,HX_HCSTRING("TEXTURE13","\x5d","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE14,HX_HCSTRING("TEXTURE14","\x5e","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE15,HX_HCSTRING("TEXTURE15","\x5f","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE16,HX_HCSTRING("TEXTURE16","\x60","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE17,HX_HCSTRING("TEXTURE17","\x61","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE18,HX_HCSTRING("TEXTURE18","\x62","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE19,HX_HCSTRING("TEXTURE19","\x63","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE20,HX_HCSTRING("TEXTURE20","\x39","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE21,HX_HCSTRING("TEXTURE21","\x3a","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE22,HX_HCSTRING("TEXTURE22","\x3b","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE23,HX_HCSTRING("TEXTURE23","\x3c","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE24,HX_HCSTRING("TEXTURE24","\x3d","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE25,HX_HCSTRING("TEXTURE25","\x3e","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE26,HX_HCSTRING("TEXTURE26","\x3f","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE27,HX_HCSTRING("TEXTURE27","\x40","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE28,HX_HCSTRING("TEXTURE28","\x41","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE29,HX_HCSTRING("TEXTURE29","\x42","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE30,HX_HCSTRING("TEXTURE30","\x18","\xae","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE31,HX_HCSTRING("TEXTURE31","\x19","\xae","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::ACTIVE_TEXTURE,HX_HCSTRING("ACTIVE_TEXTURE","\x02","\x1a","\x22","\xce")},
	{hx::fsInt,(void *) &GL_obj::REPEAT,HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8")},
	{hx::fsInt,(void *) &GL_obj::CLAMP_TO_EDGE,HX_HCSTRING("CLAMP_TO_EDGE","\x1d","\xfc","\x5a","\x96")},
	{hx::fsInt,(void *) &GL_obj::MIRRORED_REPEAT,HX_HCSTRING("MIRRORED_REPEAT","\x5c","\x94","\x80","\x4a")},
	{hx::fsInt,(void *) &GL_obj::FLOAT_VEC2,HX_HCSTRING("FLOAT_VEC2","\x61","\xac","\xa4","\xeb")},
	{hx::fsInt,(void *) &GL_obj::FLOAT_VEC3,HX_HCSTRING("FLOAT_VEC3","\x62","\xac","\xa4","\xeb")},
	{hx::fsInt,(void *) &GL_obj::FLOAT_VEC4,HX_HCSTRING("FLOAT_VEC4","\x63","\xac","\xa4","\xeb")},
	{hx::fsInt,(void *) &GL_obj::INT_VEC2,HX_HCSTRING("INT_VEC2","\x2e","\x14","\x05","\x7d")},
	{hx::fsInt,(void *) &GL_obj::INT_VEC3,HX_HCSTRING("INT_VEC3","\x2f","\x14","\x05","\x7d")},
	{hx::fsInt,(void *) &GL_obj::INT_VEC4,HX_HCSTRING("INT_VEC4","\x30","\x14","\x05","\x7d")},
	{hx::fsInt,(void *) &GL_obj::BOOL,HX_HCSTRING("BOOL","\x2a","\x4c","\xdc","\x2b")},
	{hx::fsInt,(void *) &GL_obj::BOOL_VEC2,HX_HCSTRING("BOOL_VEC2","\xf3","\x66","\x2b","\x2d")},
	{hx::fsInt,(void *) &GL_obj::BOOL_VEC3,HX_HCSTRING("BOOL_VEC3","\xf4","\x66","\x2b","\x2d")},
	{hx::fsInt,(void *) &GL_obj::BOOL_VEC4,HX_HCSTRING("BOOL_VEC4","\xf5","\x66","\x2b","\x2d")},
	{hx::fsInt,(void *) &GL_obj::FLOAT_MAT2,HX_HCSTRING("FLOAT_MAT2","\x95","\xc6","\xae","\xe5")},
	{hx::fsInt,(void *) &GL_obj::FLOAT_MAT3,HX_HCSTRING("FLOAT_MAT3","\x96","\xc6","\xae","\xe5")},
	{hx::fsInt,(void *) &GL_obj::FLOAT_MAT4,HX_HCSTRING("FLOAT_MAT4","\x97","\xc6","\xae","\xe5")},
	{hx::fsInt,(void *) &GL_obj::SAMPLER_2D,HX_HCSTRING("SAMPLER_2D","\x09","\x2a","\x93","\x6e")},
	{hx::fsInt,(void *) &GL_obj::SAMPLER_CUBE,HX_HCSTRING("SAMPLER_CUBE","\xec","\x3e","\x82","\xa4")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_ATTRIB_ARRAY_ENABLED,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_ENABLED","\x61","\x99","\x09","\x66")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_ATTRIB_ARRAY_SIZE,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_SIZE","\xc1","\x07","\xfd","\x08")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_ATTRIB_ARRAY_STRIDE,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_STRIDE","\x19","\x2b","\x41","\x58")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_ATTRIB_ARRAY_TYPE,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_TYPE","\xba","\x59","\xb2","\x09")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_ATTRIB_ARRAY_NORMALIZED,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_NORMALIZED","\x37","\xb7","\x22","\x78")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_ATTRIB_ARRAY_POINTER,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_POINTER","\x9d","\x55","\xfa","\x38")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_ATTRIB_ARRAY_BUFFER_BINDING,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_BUFFER_BINDING","\xa6","\x80","\x67","\x97")},
	{hx::fsInt,(void *) &GL_obj::IMPLEMENTATION_COLOR_READ_TYPE,HX_HCSTRING("IMPLEMENTATION_COLOR_READ_TYPE","\xfa","\xb6","\x2b","\x35")},
	{hx::fsInt,(void *) &GL_obj::IMPLEMENTATION_COLOR_READ_FORMAT,HX_HCSTRING("IMPLEMENTATION_COLOR_READ_FORMAT","\x77","\xc7","\x1a","\x47")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_PROGRAM_POINT_SIZE,HX_HCSTRING("VERTEX_PROGRAM_POINT_SIZE","\xe6","\x56","\xbe","\x34")},
	{hx::fsInt,(void *) &GL_obj::POINT_SPRITE,HX_HCSTRING("POINT_SPRITE","\x74","\x93","\x5c","\x14")},
	{hx::fsInt,(void *) &GL_obj::COMPILE_STATUS,HX_HCSTRING("COMPILE_STATUS","\xde","\xcb","\x4e","\x8c")},
	{hx::fsInt,(void *) &GL_obj::LOW_FLOAT,HX_HCSTRING("LOW_FLOAT","\x31","\x04","\x74","\xe4")},
	{hx::fsInt,(void *) &GL_obj::MEDIUM_FLOAT,HX_HCSTRING("MEDIUM_FLOAT","\xf2","\x8a","\x46","\xb9")},
	{hx::fsInt,(void *) &GL_obj::HIGH_FLOAT,HX_HCSTRING("HIGH_FLOAT","\x9f","\xf9","\x3b","\x47")},
	{hx::fsInt,(void *) &GL_obj::LOW_INT,HX_HCSTRING("LOW_INT","\x44","\x28","\x70","\x45")},
	{hx::fsInt,(void *) &GL_obj::MEDIUM_INT,HX_HCSTRING("MEDIUM_INT","\xc5","\xcc","\xaf","\x4f")},
	{hx::fsInt,(void *) &GL_obj::HIGH_INT,HX_HCSTRING("HIGH_INT","\x32","\x46","\x02","\x09")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER,HX_HCSTRING("FRAMEBUFFER","\xcd","\x20","\x84","\x50")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER,HX_HCSTRING("RENDERBUFFER","\xd6","\xa4","\xa4","\xa9")},
	{hx::fsInt,(void *) &GL_obj::RGBA4,HX_HCSTRING("RGBA4","\x00","\x05","\xfc","\x65")},
	{hx::fsInt,(void *) &GL_obj::RGB5_A1,HX_HCSTRING("RGB5_A1","\x47","\x8f","\xf9","\xd8")},
	{hx::fsInt,(void *) &GL_obj::RGB565,HX_HCSTRING("RGB565","\xe7","\x41","\x7f","\xd6")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_COMPONENT16,HX_HCSTRING("DEPTH_COMPONENT16","\x26","\xcc","\x68","\x43")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_INDEX,HX_HCSTRING("STENCIL_INDEX","\x0f","\x79","\xb6","\x97")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_INDEX8,HX_HCSTRING("STENCIL_INDEX8","\x49","\x74","\xf3","\x27")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_STENCIL,HX_HCSTRING("DEPTH_STENCIL","\x40","\x2f","\x20","\x2b")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_WIDTH,HX_HCSTRING("RENDERBUFFER_WIDTH","\x7d","\x1e","\xe1","\x43")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_HEIGHT,HX_HCSTRING("RENDERBUFFER_HEIGHT","\x70","\x07","\x69","\xd7")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_INTERNAL_FORMAT,HX_HCSTRING("RENDERBUFFER_INTERNAL_FORMAT","\x90","\xda","\xeb","\xb5")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_RED_SIZE,HX_HCSTRING("RENDERBUFFER_RED_SIZE","\x98","\xa5","\x58","\x5e")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_GREEN_SIZE,HX_HCSTRING("RENDERBUFFER_GREEN_SIZE","\x26","\x9b","\x7d","\x3b")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_BLUE_SIZE,HX_HCSTRING("RENDERBUFFER_BLUE_SIZE","\xdd","\x93","\x86","\xdd")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_ALPHA_SIZE,HX_HCSTRING("RENDERBUFFER_ALPHA_SIZE","\xab","\xf0","\x5d","\x87")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_DEPTH_SIZE,HX_HCSTRING("RENDERBUFFER_DEPTH_SIZE","\xe6","\x90","\x24","\xc3")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_STENCIL_SIZE,HX_HCSTRING("RENDERBUFFER_STENCIL_SIZE","\x8d","\xd5","\x5a","\x9d")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE,HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE","\x50","\x22","\x44","\x50")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_NAME,HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_NAME","\xe1","\xa1","\x3a","\x4c")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL,HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL","\xf6","\x9b","\xba","\x81")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE,HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE","\xdc","\x4c","\x39","\x8a")},
	{hx::fsInt,(void *) &GL_obj::COLOR_ATTACHMENT0,HX_HCSTRING("COLOR_ATTACHMENT0","\xb1","\x9a","\xfe","\x86")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_ATTACHMENT,HX_HCSTRING("DEPTH_ATTACHMENT","\xff","\x54","\xcd","\xe9")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_ATTACHMENT,HX_HCSTRING("STENCIL_ATTACHMENT","\xa6","\x8c","\x28","\x01")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_STENCIL_ATTACHMENT,HX_HCSTRING("DEPTH_STENCIL_ATTACHMENT","\xc2","\xe1","\xe1","\x9f")},
	{hx::fsInt,(void *) &GL_obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_COMPLETE,HX_HCSTRING("FRAMEBUFFER_COMPLETE","\xab","\x65","\x7d","\xea")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_INCOMPLETE_ATTACHMENT,HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_ATTACHMENT","\xf2","\xcf","\xb7","\x1d")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT,HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT","\x8b","\x0a","\xcd","\x77")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_INCOMPLETE_DIMENSIONS,HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_DIMENSIONS","\x5c","\x86","\xe4","\x1c")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_UNSUPPORTED,HX_HCSTRING("FRAMEBUFFER_UNSUPPORTED","\xe3","\xa6","\x4e","\xc8")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_BINDING,HX_HCSTRING("FRAMEBUFFER_BINDING","\x73","\xee","\xae","\xc5")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_BINDING,HX_HCSTRING("RENDERBUFFER_BINDING","\x7c","\x23","\x70","\x23")},
	{hx::fsInt,(void *) &GL_obj::MAX_RENDERBUFFER_SIZE,HX_HCSTRING("MAX_RENDERBUFFER_SIZE","\x4f","\xd4","\x3d","\x65")},
	{hx::fsInt,(void *) &GL_obj::INVALID_FRAMEBUFFER_OPERATION,HX_HCSTRING("INVALID_FRAMEBUFFER_OPERATION","\x2d","\xd4","\xc5","\x43")},
	{hx::fsInt,(void *) &GL_obj::UNPACK_FLIP_Y_WEBGL,HX_HCSTRING("UNPACK_FLIP_Y_WEBGL","\x0e","\x9f","\x94","\x9d")},
	{hx::fsInt,(void *) &GL_obj::UNPACK_PREMULTIPLY_ALPHA_WEBGL,HX_HCSTRING("UNPACK_PREMULTIPLY_ALPHA_WEBGL","\x73","\x5d","\xcb","\xc6")},
	{hx::fsInt,(void *) &GL_obj::CONTEXT_LOST_WEBGL,HX_HCSTRING("CONTEXT_LOST_WEBGL","\x6e","\x67","\x71","\x45")},
	{hx::fsInt,(void *) &GL_obj::UNPACK_COLORSPACE_CONVERSION_WEBGL,HX_HCSTRING("UNPACK_COLORSPACE_CONVERSION_WEBGL","\x9f","\xd9","\xf0","\xb9")},
	{hx::fsInt,(void *) &GL_obj::BROWSER_DEFAULT_WEBGL,HX_HCSTRING("BROWSER_DEFAULT_WEBGL","\x04","\x04","\x92","\xc0")},
	{hx::fsInt,(void *) &GL_obj::READ_BUFFER,HX_HCSTRING("READ_BUFFER","\x09","\x1e","\x91","\xcd")},
	{hx::fsInt,(void *) &GL_obj::UNPACK_ROW_LENGTH,HX_HCSTRING("UNPACK_ROW_LENGTH","\x78","\x04","\xc5","\x5f")},
	{hx::fsInt,(void *) &GL_obj::UNPACK_SKIP_ROWS,HX_HCSTRING("UNPACK_SKIP_ROWS","\x0c","\xe6","\x50","\x4d")},
	{hx::fsInt,(void *) &GL_obj::UNPACK_SKIP_PIXELS,HX_HCSTRING("UNPACK_SKIP_PIXELS","\xe0","\x26","\x60","\xaf")},
	{hx::fsInt,(void *) &GL_obj::PACK_ROW_LENGTH,HX_HCSTRING("PACK_ROW_LENGTH","\xb1","\xc2","\x23","\x34")},
	{hx::fsInt,(void *) &GL_obj::PACK_SKIP_ROWS,HX_HCSTRING("PACK_SKIP_ROWS","\xf3","\x91","\xa8","\xc5")},
	{hx::fsInt,(void *) &GL_obj::PACK_SKIP_PIXELS,HX_HCSTRING("PACK_SKIP_PIXELS","\x87","\xda","\xe7","\xad")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_BINDING_3D,HX_HCSTRING("TEXTURE_BINDING_3D","\x0f","\xed","\x98","\xb1")},
	{hx::fsInt,(void *) &GL_obj::UNPACK_SKIP_IMAGES,HX_HCSTRING("UNPACK_SKIP_IMAGES","\x6b","\x88","\x48","\x21")},
	{hx::fsInt,(void *) &GL_obj::UNPACK_IMAGE_HEIGHT,HX_HCSTRING("UNPACK_IMAGE_HEIGHT","\x98","\xfd","\x7e","\x14")},
	{hx::fsInt,(void *) &GL_obj::MAX_3D_TEXTURE_SIZE,HX_HCSTRING("MAX_3D_TEXTURE_SIZE","\x98","\x9e","\x8f","\xd5")},
	{hx::fsInt,(void *) &GL_obj::MAX_ELEMENTS_VERTICES,HX_HCSTRING("MAX_ELEMENTS_VERTICES","\x86","\xbe","\x2e","\x25")},
	{hx::fsInt,(void *) &GL_obj::MAX_ELEMENTS_INDICES,HX_HCSTRING("MAX_ELEMENTS_INDICES","\x1a","\x7d","\xaa","\x73")},
	{hx::fsInt,(void *) &GL_obj::MAX_TEXTURE_LOD_BIAS,HX_HCSTRING("MAX_TEXTURE_LOD_BIAS","\xf6","\xfc","\x86","\x68")},
	{hx::fsInt,(void *) &GL_obj::MAX_FRAGMENT_UNIFORM_COMPONENTS,HX_HCSTRING("MAX_FRAGMENT_UNIFORM_COMPONENTS","\x75","\x6c","\x59","\x3e")},
	{hx::fsInt,(void *) &GL_obj::MAX_VERTEX_UNIFORM_COMPONENTS,HX_HCSTRING("MAX_VERTEX_UNIFORM_COMPONENTS","\x21","\xc6","\x3a","\x5f")},
	{hx::fsInt,(void *) &GL_obj::MAX_ARRAY_TEXTURE_LAYERS,HX_HCSTRING("MAX_ARRAY_TEXTURE_LAYERS","\xe7","\xc3","\x5b","\x6e")},
	{hx::fsInt,(void *) &GL_obj::MIN_PROGRAM_TEXEL_OFFSET,HX_HCSTRING("MIN_PROGRAM_TEXEL_OFFSET","\x2c","\x3a","\xdc","\x08")},
	{hx::fsInt,(void *) &GL_obj::MAX_PROGRAM_TEXEL_OFFSET,HX_HCSTRING("MAX_PROGRAM_TEXEL_OFFSET","\xda","\xdb","\x54","\xb2")},
	{hx::fsInt,(void *) &GL_obj::MAX_VARYING_COMPONENTS,HX_HCSTRING("MAX_VARYING_COMPONENTS","\x00","\x28","\xc3","\x5f")},
	{hx::fsInt,(void *) &GL_obj::FRAGMENT_SHADER_DERIVATIVE_HINT,HX_HCSTRING("FRAGMENT_SHADER_DERIVATIVE_HINT","\x74","\x51","\xa3","\x7e")},
	{hx::fsInt,(void *) &GL_obj::RASTERIZER_DISCARD,HX_HCSTRING("RASTERIZER_DISCARD","\x1a","\x72","\xdc","\x4a")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_ARRAY_BINDING,HX_HCSTRING("VERTEX_ARRAY_BINDING","\xc4","\x1d","\x24","\x31")},
	{hx::fsInt,(void *) &GL_obj::MAX_VERTEX_OUTPUT_COMPONENTS,HX_HCSTRING("MAX_VERTEX_OUTPUT_COMPONENTS","\x54","\x64","\x33","\xf3")},
	{hx::fsInt,(void *) &GL_obj::MAX_FRAGMENT_INPUT_COMPONENTS,HX_HCSTRING("MAX_FRAGMENT_INPUT_COMPONENTS","\x5f","\xcc","\x5e","\xd8")},
	{hx::fsInt,(void *) &GL_obj::MAX_SERVER_WAIT_TIMEOUT,HX_HCSTRING("MAX_SERVER_WAIT_TIMEOUT","\x38","\x5d","\x22","\x83")},
	{hx::fsInt,(void *) &GL_obj::MAX_ELEMENT_INDEX,HX_HCSTRING("MAX_ELEMENT_INDEX","\x94","\xef","\xd5","\x74")},
	{hx::fsInt,(void *) &GL_obj::RED,HX_HCSTRING("RED","\x31","\x75","\x3e","\x00")},
	{hx::fsInt,(void *) &GL_obj::RGB8,HX_HCSTRING("RGB8","\xab","\x98","\x69","\x36")},
	{hx::fsInt,(void *) &GL_obj::RGBA8,HX_HCSTRING("RGBA8","\x04","\x05","\xfc","\x65")},
	{hx::fsInt,(void *) &GL_obj::RGB10_A2,HX_HCSTRING("RGB10_A2","\x64","\x47","\xcf","\x94")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_3D,HX_HCSTRING("TEXTURE_3D","\xf5","\x0c","\xf8","\xa2")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_WRAP_R,HX_HCSTRING("TEXTURE_WRAP_R","\xa1","\x2d","\xc3","\xfe")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_MIN_LOD,HX_HCSTRING("TEXTURE_MIN_LOD","\x10","\x2d","\x09","\x39")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_MAX_LOD,HX_HCSTRING("TEXTURE_MAX_LOD","\x22","\x17","\x30","\xc8")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_BASE_LEVEL,HX_HCSTRING("TEXTURE_BASE_LEVEL","\xba","\xeb","\x52","\x05")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_MAX_LEVEL,HX_HCSTRING("TEXTURE_MAX_LEVEL","\x65","\x66","\x2f","\x3f")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_COMPARE_MODE,HX_HCSTRING("TEXTURE_COMPARE_MODE","\xe1","\xa5","\xb9","\x86")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_COMPARE_FUNC,HX_HCSTRING("TEXTURE_COMPARE_FUNC","\xc2","\xbd","\x1d","\x82")},
	{hx::fsInt,(void *) &GL_obj::SRGB,HX_HCSTRING("SRGB","\x7a","\x2c","\x1b","\x37")},
	{hx::fsInt,(void *) &GL_obj::SRGB8,HX_HCSTRING("SRGB8","\x7e","\xbe","\xab","\x00")},
	{hx::fsInt,(void *) &GL_obj::SRGB8_ALPHA8,HX_HCSTRING("SRGB8_ALPHA8","\x1b","\xb6","\x71","\x35")},
	{hx::fsInt,(void *) &GL_obj::COMPARE_REF_TO_TEXTURE,HX_HCSTRING("COMPARE_REF_TO_TEXTURE","\x3d","\x3b","\x36","\xaa")},
	{hx::fsInt,(void *) &GL_obj::RGBA32F,HX_HCSTRING("RGBA32F","\x93","\xae","\xc6","\xe0")},
	{hx::fsInt,(void *) &GL_obj::RGB32F,HX_HCSTRING("RGB32F","\xfa","\xb9","\x7d","\xd6")},
	{hx::fsInt,(void *) &GL_obj::RGBA16F,HX_HCSTRING("RGBA16F","\x8d","\x2d","\xc5","\xe0")},
	{hx::fsInt,(void *) &GL_obj::RGB16F,HX_HCSTRING("RGB16F","\xf4","\x38","\x7c","\xd6")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_2D_ARRAY,HX_HCSTRING("TEXTURE_2D_ARRAY","\x50","\x2d","\xc6","\x60")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_BINDING_2D_ARRAY,HX_HCSTRING("TEXTURE_BINDING_2D_ARRAY","\xea","\x1c","\x7d","\x28")},
	{hx::fsInt,(void *) &GL_obj::R11F_G11F_B10F,HX_HCSTRING("R11F_G11F_B10F","\x9a","\x02","\x7e","\x28")},
	{hx::fsInt,(void *) &GL_obj::RGB9_E5,HX_HCSTRING("RGB9_E5","\x43","\x6d","\x9e","\xdb")},
	{hx::fsInt,(void *) &GL_obj::RGBA32UI,HX_HCSTRING("RGBA32UI","\x67","\x1f","\x12","\xcd")},
	{hx::fsInt,(void *) &GL_obj::RGB32UI,HX_HCSTRING("RGB32UI","\x20","\x0e","\x85","\xd7")},
	{hx::fsInt,(void *) &GL_obj::RGBA16UI,HX_HCSTRING("RGBA16UI","\x2d","\xbb","\xc2","\xcb")},
	{hx::fsInt,(void *) &GL_obj::RGB16UI,HX_HCSTRING("RGB16UI","\xe6","\xa9","\x35","\xd6")},
	{hx::fsInt,(void *) &GL_obj::RGBA8UI,HX_HCSTRING("RGBA8UI","\x58","\x98","\xca","\xe0")},
	{hx::fsInt,(void *) &GL_obj::RGB8UI,HX_HCSTRING("RGB8UI","\xbf","\xa3","\x81","\xd6")},
	{hx::fsInt,(void *) &GL_obj::RGBA32I,HX_HCSTRING("RGBA32I","\x96","\xae","\xc6","\xe0")},
	{hx::fsInt,(void *) &GL_obj::RGB32I,HX_HCSTRING("RGB32I","\xfd","\xb9","\x7d","\xd6")},
	{hx::fsInt,(void *) &GL_obj::RGBA16I,HX_HCSTRING("RGBA16I","\x90","\x2d","\xc5","\xe0")},
	{hx::fsInt,(void *) &GL_obj::RGB16I,HX_HCSTRING("RGB16I","\xf7","\x38","\x7c","\xd6")},
	{hx::fsInt,(void *) &GL_obj::RGBA8I,HX_HCSTRING("RGBA8I","\xc5","\x5e","\x88","\xd6")},
	{hx::fsInt,(void *) &GL_obj::RGB8I,HX_HCSTRING("RGB8I","\x3e","\xfd","\xfb","\x65")},
	{hx::fsInt,(void *) &GL_obj::RED_INTEGER,HX_HCSTRING("RED_INTEGER","\x50","\x79","\x18","\xf4")},
	{hx::fsInt,(void *) &GL_obj::RGB_INTEGER,HX_HCSTRING("RGB_INTEGER","\x0c","\x97","\xca","\xce")},
	{hx::fsInt,(void *) &GL_obj::RGBA_INTEGER,HX_HCSTRING("RGBA_INTEGER","\xd3","\x57","\x27","\xc0")},
	{hx::fsInt,(void *) &GL_obj::R8,HX_HCSTRING("R8","\xa6","\x47","\x00","\x00")},
	{hx::fsInt,(void *) &GL_obj::RG8,HX_HCSTRING("RG8","\xe3","\x76","\x3e","\x00")},
	{hx::fsInt,(void *) &GL_obj::R16F,HX_HCSTRING("R16F","\xaf","\xdc","\x58","\x36")},
	{hx::fsInt,(void *) &GL_obj::R32F,HX_HCSTRING("R32F","\xb5","\x5d","\x5a","\x36")},
	{hx::fsInt,(void *) &GL_obj::RG16F,HX_HCSTRING("RG16F","\x2c","\x15","\xef","\x65")},
	{hx::fsInt,(void *) &GL_obj::RG32F,HX_HCSTRING("RG32F","\x32","\x96","\xf0","\x65")},
	{hx::fsInt,(void *) &GL_obj::R8I,HX_HCSTRING("R8I","\xe3","\x69","\x3e","\x00")},
	{hx::fsInt,(void *) &GL_obj::R8UI,HX_HCSTRING("R8UI","\x7a","\x47","\x5e","\x36")},
	{hx::fsInt,(void *) &GL_obj::R16I,HX_HCSTRING("R16I","\xb2","\xdc","\x58","\x36")},
	{hx::fsInt,(void *) &GL_obj::R16UI,HX_HCSTRING("R16UI","\xcb","\x49","\x68","\x57")},
	{hx::fsInt,(void *) &GL_obj::R32I,HX_HCSTRING("R32I","\xb8","\x5d","\x5a","\x36")},
	{hx::fsInt,(void *) &GL_obj::R32UI,HX_HCSTRING("R32UI","\x05","\xae","\xb7","\x58")},
	{hx::fsInt,(void *) &GL_obj::RG8I,HX_HCSTRING("RG8I","\x06","\x90","\x69","\x36")},
	{hx::fsInt,(void *) &GL_obj::RG8UI,HX_HCSTRING("RG8UI","\xf7","\x7f","\xf4","\x65")},
	{hx::fsInt,(void *) &GL_obj::RG16I,HX_HCSTRING("RG16I","\x2f","\x15","\xef","\x65")},
	{hx::fsInt,(void *) &GL_obj::RG16UI,HX_HCSTRING("RG16UI","\xae","\x7e","\x43","\xcb")},
	{hx::fsInt,(void *) &GL_obj::RG32I,HX_HCSTRING("RG32I","\x35","\x96","\xf0","\x65")},
	{hx::fsInt,(void *) &GL_obj::RG32UI,HX_HCSTRING("RG32UI","\xe8","\xe2","\x92","\xcc")},
	{hx::fsInt,(void *) &GL_obj::R8_SNORM,HX_HCSTRING("R8_SNORM","\x76","\xd3","\xce","\x64")},
	{hx::fsInt,(void *) &GL_obj::RG8_SNORM,HX_HCSTRING("RG8_SNORM","\x73","\x8e","\xf7","\x80")},
	{hx::fsInt,(void *) &GL_obj::RGB8_SNORM,HX_HCSTRING("RGB8_SNORM","\x3b","\x36","\x76","\xea")},
	{hx::fsInt,(void *) &GL_obj::RGBA8_SNORM,HX_HCSTRING("RGBA8_SNORM","\x54","\xeb","\x97","\x96")},
	{hx::fsInt,(void *) &GL_obj::RGB10_A2UI,HX_HCSTRING("RGB10_A2UI","\xb8","\x32","\xbb","\xdc")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_IMMUTABLE_FORMAT,HX_HCSTRING("TEXTURE_IMMUTABLE_FORMAT","\x38","\x2c","\x95","\x5e")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_IMMUTABLE_LEVELS,HX_HCSTRING("TEXTURE_IMMUTABLE_LEVELS","\x70","\x5b","\x56","\x05")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_INT_2_10_10_10_REV,HX_HCSTRING("UNSIGNED_INT_2_10_10_10_REV","\x0a","\x41","\x8d","\xb2")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_INT_10F_11F_11F_REV,HX_HCSTRING("UNSIGNED_INT_10F_11F_11F_REV","\x5f","\x56","\xed","\x03")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_INT_5_9_9_9_REV,HX_HCSTRING("UNSIGNED_INT_5_9_9_9_REV","\xed","\xec","\x63","\xc7")},
	{hx::fsInt,(void *) &GL_obj::FLOAT_32_UNSIGNED_INT_24_8_REV,HX_HCSTRING("FLOAT_32_UNSIGNED_INT_24_8_REV","\xfc","\xa5","\x51","\x95")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_INT_24_8,HX_HCSTRING("UNSIGNED_INT_24_8","\xb5","\x57","\xd6","\xd9")},
	{hx::fsInt,(void *) &GL_obj::HALF_FLOAT,HX_HCSTRING("HALF_FLOAT","\xb0","\xfe","\x81","\x7a")},
	{hx::fsInt,(void *) &GL_obj::RG,HX_HCSTRING("RG","\xb5","\x47","\x00","\x00")},
	{hx::fsInt,(void *) &GL_obj::RG_INTEGER,HX_HCSTRING("RG_INTEGER","\xd4","\x6f","\x76","\xe9")},
	{hx::fsInt,(void *) &GL_obj::INT_2_10_10_10_REV,HX_HCSTRING("INT_2_10_10_10_REV","\xc0","\x20","\x1e","\xcf")},
	{hx::fsInt,(void *) &GL_obj::CURRENT_QUERY,HX_HCSTRING("CURRENT_QUERY","\x02","\x13","\x44","\xba")},
	{hx::fsInt,(void *) &GL_obj::QUERY_RESULT,HX_HCSTRING("QUERY_RESULT","\x94","\x10","\xd9","\x08")},
	{hx::fsInt,(void *) &GL_obj::QUERY_RESULT_AVAILABLE,HX_HCSTRING("QUERY_RESULT_AVAILABLE","\xfe","\x56","\xe1","\x27")},
	{hx::fsInt,(void *) &GL_obj::ANY_SAMPLES_PASSED,HX_HCSTRING("ANY_SAMPLES_PASSED","\x99","\x0e","\xa3","\x86")},
	{hx::fsInt,(void *) &GL_obj::ANY_SAMPLES_PASSED_CONSERVATIVE,HX_HCSTRING("ANY_SAMPLES_PASSED_CONSERVATIVE","\x53","\x18","\xb7","\x3e")},
	{hx::fsInt,(void *) &GL_obj::MAX_DRAW_BUFFERS,HX_HCSTRING("MAX_DRAW_BUFFERS","\xb3","\x92","\x8a","\x37")},
	{hx::fsInt,(void *) &GL_obj::DRAW_BUFFER0,HX_HCSTRING("DRAW_BUFFER0","\xb5","\x68","\x27","\xac")},
	{hx::fsInt,(void *) &GL_obj::DRAW_BUFFER1,HX_HCSTRING("DRAW_BUFFER1","\xb6","\x68","\x27","\xac")},
	{hx::fsInt,(void *) &GL_obj::DRAW_BUFFER2,HX_HCSTRING("DRAW_BUFFER2","\xb7","\x68","\x27","\xac")},
	{hx::fsInt,(void *) &GL_obj::DRAW_BUFFER3,HX_HCSTRING("DRAW_BUFFER3","\xb8","\x68","\x27","\xac")},
	{hx::fsInt,(void *) &GL_obj::DRAW_BUFFER4,HX_HCSTRING("DRAW_BUFFER4","\xb9","\x68","\x27","\xac")},
	{hx::fsInt,(void *) &GL_obj::DRAW_BUFFER5,HX_HCSTRING("DRAW_BUFFER5","\xba","\x68","\x27","\xac")},
	{hx::fsInt,(void *) &GL_obj::DRAW_BUFFER6,HX_HCSTRING("DRAW_BUFFER6","\xbb","\x68","\x27","\xac")},
	{hx::fsInt,(void *) &GL_obj::DRAW_BUFFER7,HX_HCSTRING("DRAW_BUFFER7","\xbc","\x68","\x27","\xac")},
	{hx::fsInt,(void *) &GL_obj::DRAW_BUFFER8,HX_HCSTRING("DRAW_BUFFER8","\xbd","\x68","\x27","\xac")},
	{hx::fsInt,(void *) &GL_obj::DRAW_BUFFER9,HX_HCSTRING("DRAW_BUFFER9","\xbe","\x68","\x27","\xac")},
	{hx::fsInt,(void *) &GL_obj::DRAW_BUFFER10,HX_HCSTRING("DRAW_BUFFER10","\xba","\x36","\x54","\xf6")},
	{hx::fsInt,(void *) &GL_obj::DRAW_BUFFER11,HX_HCSTRING("DRAW_BUFFER11","\xbb","\x36","\x54","\xf6")},
	{hx::fsInt,(void *) &GL_obj::DRAW_BUFFER12,HX_HCSTRING("DRAW_BUFFER12","\xbc","\x36","\x54","\xf6")},
	{hx::fsInt,(void *) &GL_obj::DRAW_BUFFER13,HX_HCSTRING("DRAW_BUFFER13","\xbd","\x36","\x54","\xf6")},
	{hx::fsInt,(void *) &GL_obj::DRAW_BUFFER14,HX_HCSTRING("DRAW_BUFFER14","\xbe","\x36","\x54","\xf6")},
	{hx::fsInt,(void *) &GL_obj::DRAW_BUFFER15,HX_HCSTRING("DRAW_BUFFER15","\xbf","\x36","\x54","\xf6")},
	{hx::fsInt,(void *) &GL_obj::MAX_COLOR_ATTACHMENTS,HX_HCSTRING("MAX_COLOR_ATTACHMENTS","\x19","\xd7","\xae","\x06")},
	{hx::fsInt,(void *) &GL_obj::COLOR_ATTACHMENT1,HX_HCSTRING("COLOR_ATTACHMENT1","\xb2","\x9a","\xfe","\x86")},
	{hx::fsInt,(void *) &GL_obj::COLOR_ATTACHMENT2,HX_HCSTRING("COLOR_ATTACHMENT2","\xb3","\x9a","\xfe","\x86")},
	{hx::fsInt,(void *) &GL_obj::COLOR_ATTACHMENT3,HX_HCSTRING("COLOR_ATTACHMENT3","\xb4","\x9a","\xfe","\x86")},
	{hx::fsInt,(void *) &GL_obj::COLOR_ATTACHMENT4,HX_HCSTRING("COLOR_ATTACHMENT4","\xb5","\x9a","\xfe","\x86")},
	{hx::fsInt,(void *) &GL_obj::COLOR_ATTACHMENT5,HX_HCSTRING("COLOR_ATTACHMENT5","\xb6","\x9a","\xfe","\x86")},
	{hx::fsInt,(void *) &GL_obj::COLOR_ATTACHMENT6,HX_HCSTRING("COLOR_ATTACHMENT6","\xb7","\x9a","\xfe","\x86")},
	{hx::fsInt,(void *) &GL_obj::COLOR_ATTACHMENT7,HX_HCSTRING("COLOR_ATTACHMENT7","\xb8","\x9a","\xfe","\x86")},
	{hx::fsInt,(void *) &GL_obj::COLOR_ATTACHMENT8,HX_HCSTRING("COLOR_ATTACHMENT8","\xb9","\x9a","\xfe","\x86")},
	{hx::fsInt,(void *) &GL_obj::COLOR_ATTACHMENT9,HX_HCSTRING("COLOR_ATTACHMENT9","\xba","\x9a","\xfe","\x86")},
	{hx::fsInt,(void *) &GL_obj::COLOR_ATTACHMENT10,HX_HCSTRING("COLOR_ATTACHMENT10","\x3e","\xc1","\xc8","\x97")},
	{hx::fsInt,(void *) &GL_obj::COLOR_ATTACHMENT11,HX_HCSTRING("COLOR_ATTACHMENT11","\x3f","\xc1","\xc8","\x97")},
	{hx::fsInt,(void *) &GL_obj::COLOR_ATTACHMENT12,HX_HCSTRING("COLOR_ATTACHMENT12","\x40","\xc1","\xc8","\x97")},
	{hx::fsInt,(void *) &GL_obj::COLOR_ATTACHMENT13,HX_HCSTRING("COLOR_ATTACHMENT13","\x41","\xc1","\xc8","\x97")},
	{hx::fsInt,(void *) &GL_obj::COLOR_ATTACHMENT14,HX_HCSTRING("COLOR_ATTACHMENT14","\x42","\xc1","\xc8","\x97")},
	{hx::fsInt,(void *) &GL_obj::COLOR_ATTACHMENT15,HX_HCSTRING("COLOR_ATTACHMENT15","\x43","\xc1","\xc8","\x97")},
	{hx::fsInt,(void *) &GL_obj::SAMPLER_3D,HX_HCSTRING("SAMPLER_3D","\xe8","\x2a","\x93","\x6e")},
	{hx::fsInt,(void *) &GL_obj::SAMPLER_2D_SHADOW,HX_HCSTRING("SAMPLER_2D_SHADOW","\x96","\x9e","\x66","\x61")},
	{hx::fsInt,(void *) &GL_obj::SAMPLER_2D_ARRAY,HX_HCSTRING("SAMPLER_2D_ARRAY","\x83","\xc3","\xf4","\xb9")},
	{hx::fsInt,(void *) &GL_obj::SAMPLER_2D_ARRAY_SHADOW,HX_HCSTRING("SAMPLER_2D_ARRAY_SHADOW","\x5c","\x88","\x64","\x1c")},
	{hx::fsInt,(void *) &GL_obj::SAMPLER_CUBE_SHADOW,HX_HCSTRING("SAMPLER_CUBE_SHADOW","\x13","\x3c","\xfd","\xff")},
	{hx::fsInt,(void *) &GL_obj::INT_SAMPLER_2D,HX_HCSTRING("INT_SAMPLER_2D","\xb9","\xf2","\xff","\x97")},
	{hx::fsInt,(void *) &GL_obj::INT_SAMPLER_3D,HX_HCSTRING("INT_SAMPLER_3D","\x98","\xf3","\xff","\x97")},
	{hx::fsInt,(void *) &GL_obj::INT_SAMPLER_CUBE,HX_HCSTRING("INT_SAMPLER_CUBE","\x9c","\x93","\x36","\x99")},
	{hx::fsInt,(void *) &GL_obj::INT_SAMPLER_2D_ARRAY,HX_HCSTRING("INT_SAMPLER_2D_ARRAY","\x33","\x30","\xe9","\x17")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_INT_SAMPLER_2D,HX_HCSTRING("UNSIGNED_INT_SAMPLER_2D","\x03","\xa6","\xf2","\xc4")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_INT_SAMPLER_3D,HX_HCSTRING("UNSIGNED_INT_SAMPLER_3D","\xe2","\xa6","\xf2","\xc4")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_INT_SAMPLER_CUBE,HX_HCSTRING("UNSIGNED_INT_SAMPLER_CUBE","\x66","\x2d","\xb4","\xee")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_INT_SAMPLER_2D_ARRAY,HX_HCSTRING("UNSIGNED_INT_SAMPLER_2D_ARRAY","\xfd","\x76","\x98","\x0d")},
	{hx::fsInt,(void *) &GL_obj::MAX_SAMPLES,HX_HCSTRING("MAX_SAMPLES","\xee","\xbc","\x20","\x56")},
	{hx::fsInt,(void *) &GL_obj::SAMPLER_BINDING,HX_HCSTRING("SAMPLER_BINDING","\x8e","\x79","\x76","\x22")},
	{hx::fsInt,(void *) &GL_obj::PIXEL_PACK_BUFFER,HX_HCSTRING("PIXEL_PACK_BUFFER","\x4d","\x06","\x41","\x84")},
	{hx::fsInt,(void *) &GL_obj::PIXEL_UNPACK_BUFFER,HX_HCSTRING("PIXEL_UNPACK_BUFFER","\x54","\x80","\x91","\x31")},
	{hx::fsInt,(void *) &GL_obj::PIXEL_PACK_BUFFER_BINDING,HX_HCSTRING("PIXEL_PACK_BUFFER_BINDING","\xf3","\x53","\x0d","\x81")},
	{hx::fsInt,(void *) &GL_obj::PIXEL_UNPACK_BUFFER_BINDING,HX_HCSTRING("PIXEL_UNPACK_BUFFER_BINDING","\xfa","\xac","\x01","\xcf")},
	{hx::fsInt,(void *) &GL_obj::COPY_READ_BUFFER,HX_HCSTRING("COPY_READ_BUFFER","\x3f","\x8b","\xf1","\x64")},
	{hx::fsInt,(void *) &GL_obj::COPY_WRITE_BUFFER,HX_HCSTRING("COPY_WRITE_BUFFER","\xca","\x9d","\xe5","\xe4")},
	{hx::fsInt,(void *) &GL_obj::COPY_READ_BUFFER_BINDING,HX_HCSTRING("COPY_READ_BUFFER_BINDING","\xe5","\x1a","\x17","\x74")},
	{hx::fsInt,(void *) &GL_obj::COPY_WRITE_BUFFER_BINDING,HX_HCSTRING("COPY_WRITE_BUFFER_BINDING","\x70","\x30","\x81","\x8a")},
	{hx::fsInt,(void *) &GL_obj::FLOAT_MAT2x3,HX_HCSTRING("FLOAT_MAT2x3","\x90","\xbe","\xdd","\xc3")},
	{hx::fsInt,(void *) &GL_obj::FLOAT_MAT2x4,HX_HCSTRING("FLOAT_MAT2x4","\x91","\xbe","\xdd","\xc3")},
	{hx::fsInt,(void *) &GL_obj::FLOAT_MAT3x2,HX_HCSTRING("FLOAT_MAT3x2","\xd0","\x80","\xde","\xc3")},
	{hx::fsInt,(void *) &GL_obj::FLOAT_MAT3x4,HX_HCSTRING("FLOAT_MAT3x4","\xd2","\x80","\xde","\xc3")},
	{hx::fsInt,(void *) &GL_obj::FLOAT_MAT4x2,HX_HCSTRING("FLOAT_MAT4x2","\x11","\x43","\xdf","\xc3")},
	{hx::fsInt,(void *) &GL_obj::FLOAT_MAT4x3,HX_HCSTRING("FLOAT_MAT4x3","\x12","\x43","\xdf","\xc3")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_INT_VEC2,HX_HCSTRING("UNSIGNED_INT_VEC2","\xf8","\xd3","\xae","\xf1")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_INT_VEC3,HX_HCSTRING("UNSIGNED_INT_VEC3","\xf9","\xd3","\xae","\xf1")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_INT_VEC4,HX_HCSTRING("UNSIGNED_INT_VEC4","\xfa","\xd3","\xae","\xf1")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_NORMALIZED,HX_HCSTRING("UNSIGNED_NORMALIZED","\x81","\x9e","\xe9","\xb5")},
	{hx::fsInt,(void *) &GL_obj::SIGNED_NORMALIZED,HX_HCSTRING("SIGNED_NORMALIZED","\xfa","\x1c","\x1f","\x6e")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_ATTRIB_ARRAY_INTEGER,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_INTEGER","\x9e","\x52","\xf4","\xfe")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_ATTRIB_ARRAY_DIVISOR,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_DIVISOR","\x3e","\x5a","\xbb","\x58")},
	{hx::fsInt,(void *) &GL_obj::TRANSFORM_FEEDBACK_BUFFER_MODE,HX_HCSTRING("TRANSFORM_FEEDBACK_BUFFER_MODE","\x5b","\x21","\x21","\x18")},
	{hx::fsInt,(void *) &GL_obj::MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS,HX_HCSTRING("MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS","\x66","\x0f","\xc1","\x2a")},
	{hx::fsInt,(void *) &GL_obj::TRANSFORM_FEEDBACK_VARYINGS,HX_HCSTRING("TRANSFORM_FEEDBACK_VARYINGS","\x4a","\x49","\xb8","\x8f")},
	{hx::fsInt,(void *) &GL_obj::TRANSFORM_FEEDBACK_BUFFER_START,HX_HCSTRING("TRANSFORM_FEEDBACK_BUFFER_START","\x4a","\x5f","\x8f","\x7c")},
	{hx::fsInt,(void *) &GL_obj::TRANSFORM_FEEDBACK_BUFFER_SIZE,HX_HCSTRING("TRANSFORM_FEEDBACK_BUFFER_SIZE","\xb9","\xee","\x13","\x1c")},
	{hx::fsInt,(void *) &GL_obj::TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN,HX_HCSTRING("TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN","\x2b","\xe6","\xb6","\x9f")},
	{hx::fsInt,(void *) &GL_obj::MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS,HX_HCSTRING("MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS","\x18","\x9a","\x28","\x79")},
	{hx::fsInt,(void *) &GL_obj::MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS,HX_HCSTRING("MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS","\x79","\x55","\x1c","\x52")},
	{hx::fsInt,(void *) &GL_obj::INTERLEAVED_ATTRIBS,HX_HCSTRING("INTERLEAVED_ATTRIBS","\xd3","\x03","\x58","\xcf")},
	{hx::fsInt,(void *) &GL_obj::SEPARATE_ATTRIBS,HX_HCSTRING("SEPARATE_ATTRIBS","\xad","\xf1","\x7d","\xf6")},
	{hx::fsInt,(void *) &GL_obj::TRANSFORM_FEEDBACK_BUFFER,HX_HCSTRING("TRANSFORM_FEEDBACK_BUFFER","\x87","\xcc","\xfb","\xc7")},
	{hx::fsInt,(void *) &GL_obj::TRANSFORM_FEEDBACK_BUFFER_BINDING,HX_HCSTRING("TRANSFORM_FEEDBACK_BUFFER_BINDING","\x2d","\xe4","\xaf","\x90")},
	{hx::fsInt,(void *) &GL_obj::TRANSFORM_FEEDBACK,HX_HCSTRING("TRANSFORM_FEEDBACK","\x18","\x81","\xaf","\x95")},
	{hx::fsInt,(void *) &GL_obj::TRANSFORM_FEEDBACK_PAUSED,HX_HCSTRING("TRANSFORM_FEEDBACK_PAUSED","\x35","\x50","\xeb","\xe6")},
	{hx::fsInt,(void *) &GL_obj::TRANSFORM_FEEDBACK_ACTIVE,HX_HCSTRING("TRANSFORM_FEEDBACK_ACTIVE","\x4d","\x51","\xad","\x0d")},
	{hx::fsInt,(void *) &GL_obj::TRANSFORM_FEEDBACK_BINDING,HX_HCSTRING("TRANSFORM_FEEDBACK_BINDING","\xbe","\x11","\xf4","\x01")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING,HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING","\x79","\xc9","\x9d","\x03")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE,HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE","\xc6","\x3b","\x6e","\x90")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_ATTACHMENT_RED_SIZE,HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_RED_SIZE","\x39","\x51","\x04","\xf1")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_ATTACHMENT_GREEN_SIZE,HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_GREEN_SIZE","\x07","\x31","\x24","\x91")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_ATTACHMENT_BLUE_SIZE,HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_BLUE_SIZE","\x1c","\x15","\x11","\xa1")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE,HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE","\x8c","\x86","\x04","\xdd")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE,HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE","\xc7","\x26","\xcb","\x18")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE,HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE","\xae","\x65","\x3b","\x9a")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_DEFAULT,HX_HCSTRING("FRAMEBUFFER_DEFAULT","\xef","\x3b","\x45","\xe2")},
	{hx::fsInt,(void *) &GL_obj::DEPTH24_STENCIL8,HX_HCSTRING("DEPTH24_STENCIL8","\x36","\x5e","\xb6","\xa6")},
	{hx::fsInt,(void *) &GL_obj::DRAW_FRAMEBUFFER_BINDING,HX_HCSTRING("DRAW_FRAMEBUFFER_BINDING","\x78","\x93","\x98","\xce")},
	{hx::fsInt,(void *) &GL_obj::READ_FRAMEBUFFER,HX_HCSTRING("READ_FRAMEBUFFER","\x24","\x8b","\xf0","\xa0")},
	{hx::fsInt,(void *) &GL_obj::DRAW_FRAMEBUFFER,HX_HCSTRING("DRAW_FRAMEBUFFER","\xd2","\xb8","\x5e","\x7a")},
	{hx::fsInt,(void *) &GL_obj::READ_FRAMEBUFFER_BINDING,HX_HCSTRING("READ_FRAMEBUFFER_BINDING","\xca","\x07","\xa0","\x07")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_SAMPLES,HX_HCSTRING("RENDERBUFFER_SAMPLES","\x40","\x5d","\x0c","\x28")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER,HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER","\x43","\x08","\x18","\x7f")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_INCOMPLETE_MULTISAMPLE,HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE","\x54","\xd0","\xf2","\xd0")},
	{hx::fsInt,(void *) &GL_obj::UNIFORM_BUFFER,HX_HCSTRING("UNIFORM_BUFFER","\x0b","\xf0","\xa3","\xee")},
	{hx::fsInt,(void *) &GL_obj::UNIFORM_BUFFER_BINDING,HX_HCSTRING("UNIFORM_BUFFER_BINDING","\xb1","\x2b","\x2d","\x65")},
	{hx::fsInt,(void *) &GL_obj::UNIFORM_BUFFER_START,HX_HCSTRING("UNIFORM_BUFFER_START","\xce","\xfd","\x84","\xf1")},
	{hx::fsInt,(void *) &GL_obj::UNIFORM_BUFFER_SIZE,HX_HCSTRING("UNIFORM_BUFFER_SIZE","\xb5","\x8c","\x28","\x19")},
	{hx::fsInt,(void *) &GL_obj::MAX_VERTEX_UNIFORM_BLOCKS,HX_HCSTRING("MAX_VERTEX_UNIFORM_BLOCKS","\x11","\x56","\x73","\xa0")},
	{hx::fsInt,(void *) &GL_obj::MAX_FRAGMENT_UNIFORM_BLOCKS,HX_HCSTRING("MAX_FRAGMENT_UNIFORM_BLOCKS","\x65","\x42","\x83","\x5d")},
	{hx::fsInt,(void *) &GL_obj::MAX_COMBINED_UNIFORM_BLOCKS,HX_HCSTRING("MAX_COMBINED_UNIFORM_BLOCKS","\xd0","\xc0","\xcb","\xe7")},
	{hx::fsInt,(void *) &GL_obj::MAX_UNIFORM_BUFFER_BINDINGS,HX_HCSTRING("MAX_UNIFORM_BUFFER_BINDINGS","\x87","\x4d","\x27","\xc3")},
	{hx::fsInt,(void *) &GL_obj::MAX_UNIFORM_BLOCK_SIZE,HX_HCSTRING("MAX_UNIFORM_BLOCK_SIZE","\xf9","\xdc","\x3f","\x6c")},
	{hx::fsInt,(void *) &GL_obj::MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS,HX_HCSTRING("MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS","\xfd","\x37","\x15","\xe3")},
	{hx::fsInt,(void *) &GL_obj::MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS,HX_HCSTRING("MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS","\x51","\x0d","\x19","\x43")},
	{hx::fsInt,(void *) &GL_obj::UNIFORM_BUFFER_OFFSET_ALIGNMENT,HX_HCSTRING("UNIFORM_BUFFER_OFFSET_ALIGNMENT","\xcb","\xa9","\xf8","\xcc")},
	{hx::fsInt,(void *) &GL_obj::ACTIVE_UNIFORM_BLOCKS,HX_HCSTRING("ACTIVE_UNIFORM_BLOCKS","\x2a","\x2b","\xe3","\x0c")},
	{hx::fsInt,(void *) &GL_obj::UNIFORM_TYPE,HX_HCSTRING("UNIFORM_TYPE","\x05","\xd9","\x59","\x48")},
	{hx::fsInt,(void *) &GL_obj::UNIFORM_SIZE,HX_HCSTRING("UNIFORM_SIZE","\x0c","\x87","\xa4","\x47")},
	{hx::fsInt,(void *) &GL_obj::UNIFORM_BLOCK_INDEX,HX_HCSTRING("UNIFORM_BLOCK_INDEX","\x35","\x78","\x71","\x93")},
	{hx::fsInt,(void *) &GL_obj::UNIFORM_OFFSET,HX_HCSTRING("UNIFORM_OFFSET","\x9e","\xca","\x4e","\x7e")},
	{hx::fsInt,(void *) &GL_obj::UNIFORM_ARRAY_STRIDE,HX_HCSTRING("UNIFORM_ARRAY_STRIDE","\xaa","\xaa","\x4a","\x6c")},
	{hx::fsInt,(void *) &GL_obj::UNIFORM_MATRIX_STRIDE,HX_HCSTRING("UNIFORM_MATRIX_STRIDE","\xec","\x75","\xfb","\xfc")},
	{hx::fsInt,(void *) &GL_obj::UNIFORM_IS_ROW_MAJOR,HX_HCSTRING("UNIFORM_IS_ROW_MAJOR","\x4a","\xd7","\x8e","\xf1")},
	{hx::fsInt,(void *) &GL_obj::UNIFORM_BLOCK_BINDING,HX_HCSTRING("UNIFORM_BLOCK_BINDING","\x28","\x1b","\x56","\x0b")},
	{hx::fsInt,(void *) &GL_obj::UNIFORM_BLOCK_DATA_SIZE,HX_HCSTRING("UNIFORM_BLOCK_DATA_SIZE","\xf9","\xd0","\x4f","\x72")},
	{hx::fsInt,(void *) &GL_obj::UNIFORM_BLOCK_ACTIVE_UNIFORMS,HX_HCSTRING("UNIFORM_BLOCK_ACTIVE_UNIFORMS","\x9b","\x74","\x7f","\x6e")},
	{hx::fsInt,(void *) &GL_obj::UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES,HX_HCSTRING("UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES","\x40","\x99","\x27","\x7e")},
	{hx::fsInt,(void *) &GL_obj::UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER,HX_HCSTRING("UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER","\xc1","\x8d","\xd1","\xe0")},
	{hx::fsInt,(void *) &GL_obj::UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER,HX_HCSTRING("UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER","\x15","\xc5","\x8f","\xaf")},
	{hx::fsInt,(void *) &GL_obj::OBJECT_TYPE,HX_HCSTRING("OBJECT_TYPE","\x7a","\x57","\x2a","\x1f")},
	{hx::fsInt,(void *) &GL_obj::SYNC_CONDITION,HX_HCSTRING("SYNC_CONDITION","\x57","\xf7","\xd5","\x73")},
	{hx::fsInt,(void *) &GL_obj::SYNC_STATUS,HX_HCSTRING("SYNC_STATUS","\xd6","\xf3","\xb7","\x06")},
	{hx::fsInt,(void *) &GL_obj::SYNC_FLAGS,HX_HCSTRING("SYNC_FLAGS","\x03","\xe3","\xf0","\x79")},
	{hx::fsInt,(void *) &GL_obj::SYNC_FENCE,HX_HCSTRING("SYNC_FENCE","\x6d","\x3e","\x5a","\x75")},
	{hx::fsInt,(void *) &GL_obj::SYNC_GPU_COMMANDS_COMPLETE,HX_HCSTRING("SYNC_GPU_COMMANDS_COMPLETE","\xf9","\x23","\x65","\x18")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNALED,HX_HCSTRING("UNSIGNALED","\x20","\x4c","\x0a","\xfd")},
	{hx::fsInt,(void *) &GL_obj::SIGNALED,HX_HCSTRING("SIGNALED","\xc7","\x80","\xc2","\xde")},
	{hx::fsInt,(void *) &GL_obj::ALREADY_SIGNALED,HX_HCSTRING("ALREADY_SIGNALED","\xae","\xdd","\x3f","\xe3")},
	{hx::fsInt,(void *) &GL_obj::TIMEOUT_EXPIRED,HX_HCSTRING("TIMEOUT_EXPIRED","\x87","\x64","\x05","\xcd")},
	{hx::fsInt,(void *) &GL_obj::CONDITION_SATISFIED,HX_HCSTRING("CONDITION_SATISFIED","\xce","\xa6","\x40","\xb0")},
	{hx::fsInt,(void *) &GL_obj::WAIT_FAILED,HX_HCSTRING("WAIT_FAILED","\x87","\xc9","\xdb","\x92")},
	{hx::fsInt,(void *) &GL_obj::SYNC_FLUSH_COMMANDS_BIT,HX_HCSTRING("SYNC_FLUSH_COMMANDS_BIT","\xd5","\xc6","\x2c","\xc7")},
	{hx::fsInt,(void *) &GL_obj::COLOR,HX_HCSTRING("COLOR","\x43","\xa9","\x4a","\xc8")},
	{hx::fsInt,(void *) &GL_obj::DEPTH,HX_HCSTRING("DEPTH","\xe3","\x28","\x18","\x55")},
	{hx::fsInt,(void *) &GL_obj::STENCIL,HX_HCSTRING("STENCIL","\xdc","\x91","\xd7","\xff")},
	{hx::fsInt,(void *) &GL_obj::MIN,HX_HCSTRING("MIN","\x72","\xad","\x3a","\x00")},
	{hx::fsInt,(void *) &GL_obj::MAX,HX_HCSTRING("MAX","\x84","\xa6","\x3a","\x00")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_COMPONENT24,HX_HCSTRING("DEPTH_COMPONENT24","\x03","\xcd","\x68","\x43")},
	{hx::fsInt,(void *) &GL_obj::STREAM_READ,HX_HCSTRING("STREAM_READ","\xb5","\x9e","\x5f","\x1e")},
	{hx::fsInt,(void *) &GL_obj::STREAM_COPY,HX_HCSTRING("STREAM_COPY","\x14","\x0f","\x7d","\x14")},
	{hx::fsInt,(void *) &GL_obj::STATIC_READ,HX_HCSTRING("STATIC_READ","\xc7","\x6f","\x66","\xc3")},
	{hx::fsInt,(void *) &GL_obj::STATIC_COPY,HX_HCSTRING("STATIC_COPY","\x26","\xe0","\x83","\xb9")},
	{hx::fsInt,(void *) &GL_obj::DYNAMIC_READ,HX_HCSTRING("DYNAMIC_READ","\x76","\x23","\x56","\x2d")},
	{hx::fsInt,(void *) &GL_obj::DYNAMIC_COPY,HX_HCSTRING("DYNAMIC_COPY","\xd5","\x93","\x73","\x23")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_COMPONENT32F,HX_HCSTRING("DEPTH_COMPONENT32F","\x66","\x56","\x4b","\xb8")},
	{hx::fsInt,(void *) &GL_obj::DEPTH32F_STENCIL8,HX_HCSTRING("DEPTH32F_STENCIL8","\xf7","\x07","\xb2","\x83")},
	{hx::fsInt,(void *) &GL_obj::INVALID_INDEX,HX_HCSTRING("INVALID_INDEX","\x4a","\x04","\x83","\x3c")},
	{hx::fsInt,(void *) &GL_obj::TIMEOUT_IGNORED,HX_HCSTRING("TIMEOUT_IGNORED","\xf4","\x3b","\x74","\x84")},
	{hx::fsInt,(void *) &GL_obj::MAX_CLIENT_WAIT_TIMEOUT_WEBGL,HX_HCSTRING("MAX_CLIENT_WAIT_TIMEOUT_WEBGL","\x8a","\x37","\x14","\xd5")},
	{hx::fsObject /*::lime::_backend::native::NativeGLRenderContext*/ ,(void *) &GL_obj::context,HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{hx::fsObject /*::lime::graphics::opengl::GLContextType*/ ,(void *) &GL_obj::type,HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsFloat,(void *) &GL_obj::version,HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(void *) &GL_obj::__currentProgram,HX_HCSTRING("__currentProgram","\x6b","\x4a","\xcd","\x35")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GL_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_BUFFER_BIT,"DEPTH_BUFFER_BIT");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BUFFER_BIT,"STENCIL_BUFFER_BIT");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_BUFFER_BIT,"COLOR_BUFFER_BIT");
	HX_MARK_MEMBER_NAME(GL_obj::POINTS,"POINTS");
	HX_MARK_MEMBER_NAME(GL_obj::LINES,"LINES");
	HX_MARK_MEMBER_NAME(GL_obj::LINE_LOOP,"LINE_LOOP");
	HX_MARK_MEMBER_NAME(GL_obj::LINE_STRIP,"LINE_STRIP");
	HX_MARK_MEMBER_NAME(GL_obj::TRIANGLES,"TRIANGLES");
	HX_MARK_MEMBER_NAME(GL_obj::TRIANGLE_STRIP,"TRIANGLE_STRIP");
	HX_MARK_MEMBER_NAME(GL_obj::TRIANGLE_FAN,"TRIANGLE_FAN");
	HX_MARK_MEMBER_NAME(GL_obj::ZERO,"ZERO");
	HX_MARK_MEMBER_NAME(GL_obj::ONE,"ONE");
	HX_MARK_MEMBER_NAME(GL_obj::SRC_COLOR,"SRC_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_SRC_COLOR,"ONE_MINUS_SRC_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::SRC_ALPHA,"SRC_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_SRC_ALPHA,"ONE_MINUS_SRC_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::DST_ALPHA,"DST_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_DST_ALPHA,"ONE_MINUS_DST_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::DST_COLOR,"DST_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_DST_COLOR,"ONE_MINUS_DST_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::SRC_ALPHA_SATURATE,"SRC_ALPHA_SATURATE");
	HX_MARK_MEMBER_NAME(GL_obj::FUNC_ADD,"FUNC_ADD");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_EQUATION,"BLEND_EQUATION");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_EQUATION_RGB,"BLEND_EQUATION_RGB");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_EQUATION_ALPHA,"BLEND_EQUATION_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::FUNC_SUBTRACT,"FUNC_SUBTRACT");
	HX_MARK_MEMBER_NAME(GL_obj::FUNC_REVERSE_SUBTRACT,"FUNC_REVERSE_SUBTRACT");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_DST_RGB,"BLEND_DST_RGB");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_SRC_RGB,"BLEND_SRC_RGB");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_DST_ALPHA,"BLEND_DST_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_SRC_ALPHA,"BLEND_SRC_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::CONSTANT_COLOR,"CONSTANT_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_CONSTANT_COLOR,"ONE_MINUS_CONSTANT_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::CONSTANT_ALPHA,"CONSTANT_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_CONSTANT_ALPHA,"ONE_MINUS_CONSTANT_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_COLOR,"BLEND_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::ARRAY_BUFFER,"ARRAY_BUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::ELEMENT_ARRAY_BUFFER,"ELEMENT_ARRAY_BUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::ARRAY_BUFFER_BINDING,"ARRAY_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::ELEMENT_ARRAY_BUFFER_BINDING,"ELEMENT_ARRAY_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::STREAM_DRAW,"STREAM_DRAW");
	HX_MARK_MEMBER_NAME(GL_obj::STATIC_DRAW,"STATIC_DRAW");
	HX_MARK_MEMBER_NAME(GL_obj::DYNAMIC_DRAW,"DYNAMIC_DRAW");
	HX_MARK_MEMBER_NAME(GL_obj::BUFFER_SIZE,"BUFFER_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::BUFFER_USAGE,"BUFFER_USAGE");
	HX_MARK_MEMBER_NAME(GL_obj::CURRENT_VERTEX_ATTRIB,"CURRENT_VERTEX_ATTRIB");
	HX_MARK_MEMBER_NAME(GL_obj::FRONT,"FRONT");
	HX_MARK_MEMBER_NAME(GL_obj::BACK,"BACK");
	HX_MARK_MEMBER_NAME(GL_obj::FRONT_AND_BACK,"FRONT_AND_BACK");
	HX_MARK_MEMBER_NAME(GL_obj::CULL_FACE,"CULL_FACE");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND,"BLEND");
	HX_MARK_MEMBER_NAME(GL_obj::DITHER,"DITHER");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_TEST,"STENCIL_TEST");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_TEST,"DEPTH_TEST");
	HX_MARK_MEMBER_NAME(GL_obj::SCISSOR_TEST,"SCISSOR_TEST");
	HX_MARK_MEMBER_NAME(GL_obj::POLYGON_OFFSET_FILL,"POLYGON_OFFSET_FILL");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_ALPHA_TO_COVERAGE,"SAMPLE_ALPHA_TO_COVERAGE");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE,"SAMPLE_COVERAGE");
	HX_MARK_MEMBER_NAME(GL_obj::NO_ERROR,"NO_ERROR");
	HX_MARK_MEMBER_NAME(GL_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_MARK_MEMBER_NAME(GL_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_MARK_MEMBER_NAME(GL_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_MARK_MEMBER_NAME(GL_obj::CW,"CW");
	HX_MARK_MEMBER_NAME(GL_obj::CCW,"CCW");
	HX_MARK_MEMBER_NAME(GL_obj::LINE_WIDTH,"LINE_WIDTH");
	HX_MARK_MEMBER_NAME(GL_obj::ALIASED_POINT_SIZE_RANGE,"ALIASED_POINT_SIZE_RANGE");
	HX_MARK_MEMBER_NAME(GL_obj::ALIASED_LINE_WIDTH_RANGE,"ALIASED_LINE_WIDTH_RANGE");
	HX_MARK_MEMBER_NAME(GL_obj::CULL_FACE_MODE,"CULL_FACE_MODE");
	HX_MARK_MEMBER_NAME(GL_obj::FRONT_FACE,"FRONT_FACE");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_RANGE,"DEPTH_RANGE");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_WRITEMASK,"DEPTH_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_CLEAR_VALUE,"DEPTH_CLEAR_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_FUNC,"DEPTH_FUNC");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_CLEAR_VALUE,"STENCIL_CLEAR_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_FUNC,"STENCIL_FUNC");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_FAIL,"STENCIL_FAIL");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_PASS_DEPTH_FAIL,"STENCIL_PASS_DEPTH_FAIL");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_PASS_DEPTH_PASS,"STENCIL_PASS_DEPTH_PASS");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_REF,"STENCIL_REF");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_VALUE_MASK,"STENCIL_VALUE_MASK");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_WRITEMASK,"STENCIL_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_FUNC,"STENCIL_BACK_FUNC");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_FAIL,"STENCIL_BACK_FAIL");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_PASS_DEPTH_FAIL,"STENCIL_BACK_PASS_DEPTH_FAIL");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_PASS_DEPTH_PASS,"STENCIL_BACK_PASS_DEPTH_PASS");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_REF,"STENCIL_BACK_REF");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_VALUE_MASK,"STENCIL_BACK_VALUE_MASK");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_WRITEMASK,"STENCIL_BACK_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_obj::VIEWPORT,"VIEWPORT");
	HX_MARK_MEMBER_NAME(GL_obj::SCISSOR_BOX,"SCISSOR_BOX");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_CLEAR_VALUE,"COLOR_CLEAR_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_WRITEMASK,"COLOR_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_ALIGNMENT,"UNPACK_ALIGNMENT");
	HX_MARK_MEMBER_NAME(GL_obj::PACK_ALIGNMENT,"PACK_ALIGNMENT");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_TEXTURE_SIZE,"MAX_TEXTURE_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VIEWPORT_DIMS,"MAX_VIEWPORT_DIMS");
	HX_MARK_MEMBER_NAME(GL_obj::SUBPIXEL_BITS,"SUBPIXEL_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::RED_BITS,"RED_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::GREEN_BITS,"GREEN_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::BLUE_BITS,"BLUE_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::ALPHA_BITS,"ALPHA_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_BITS,"DEPTH_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BITS,"STENCIL_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::POLYGON_OFFSET_UNITS,"POLYGON_OFFSET_UNITS");
	HX_MARK_MEMBER_NAME(GL_obj::POLYGON_OFFSET_FACTOR,"POLYGON_OFFSET_FACTOR");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_BINDING_2D,"TEXTURE_BINDING_2D");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_BUFFERS,"SAMPLE_BUFFERS");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLES,"SAMPLES");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE_VALUE,"SAMPLE_COVERAGE_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE_INVERT,"SAMPLE_COVERAGE_INVERT");
	HX_MARK_MEMBER_NAME(GL_obj::NUM_COMPRESSED_TEXTURE_FORMATS,"NUM_COMPRESSED_TEXTURE_FORMATS");
	HX_MARK_MEMBER_NAME(GL_obj::COMPRESSED_TEXTURE_FORMATS,"COMPRESSED_TEXTURE_FORMATS");
	HX_MARK_MEMBER_NAME(GL_obj::DONT_CARE,"DONT_CARE");
	HX_MARK_MEMBER_NAME(GL_obj::FASTEST,"FASTEST");
	HX_MARK_MEMBER_NAME(GL_obj::NICEST,"NICEST");
	HX_MARK_MEMBER_NAME(GL_obj::GENERATE_MIPMAP_HINT,"GENERATE_MIPMAP_HINT");
	HX_MARK_MEMBER_NAME(GL_obj::BYTE,"BYTE");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_BYTE,"UNSIGNED_BYTE");
	HX_MARK_MEMBER_NAME(GL_obj::SHORT,"SHORT");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_SHORT,"UNSIGNED_SHORT");
	HX_MARK_MEMBER_NAME(GL_obj::INT,"INT");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_INT,"UNSIGNED_INT");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT,"FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_COMPONENT,"DEPTH_COMPONENT");
	HX_MARK_MEMBER_NAME(GL_obj::ALPHA,"ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::RGB,"RGB");
	HX_MARK_MEMBER_NAME(GL_obj::RGBA,"RGBA");
	HX_MARK_MEMBER_NAME(GL_obj::LUMINANCE,"LUMINANCE");
	HX_MARK_MEMBER_NAME(GL_obj::LUMINANCE_ALPHA,"LUMINANCE_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_4_4_4_4,"UNSIGNED_SHORT_4_4_4_4");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_5_5_5_1,"UNSIGNED_SHORT_5_5_5_1");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_5_6_5,"UNSIGNED_SHORT_5_6_5");
	HX_MARK_MEMBER_NAME(GL_obj::FRAGMENT_SHADER,"FRAGMENT_SHADER");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_SHADER,"VERTEX_SHADER");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VERTEX_ATTRIBS,"MAX_VERTEX_ATTRIBS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VERTEX_UNIFORM_VECTORS,"MAX_VERTEX_UNIFORM_VECTORS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VARYING_VECTORS,"MAX_VARYING_VECTORS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_COMBINED_TEXTURE_IMAGE_UNITS,"MAX_COMBINED_TEXTURE_IMAGE_UNITS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VERTEX_TEXTURE_IMAGE_UNITS,"MAX_VERTEX_TEXTURE_IMAGE_UNITS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_TEXTURE_IMAGE_UNITS,"MAX_TEXTURE_IMAGE_UNITS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_FRAGMENT_UNIFORM_VECTORS,"MAX_FRAGMENT_UNIFORM_VECTORS");
	HX_MARK_MEMBER_NAME(GL_obj::SHADER_TYPE,"SHADER_TYPE");
	HX_MARK_MEMBER_NAME(GL_obj::DELETE_STATUS,"DELETE_STATUS");
	HX_MARK_MEMBER_NAME(GL_obj::LINK_STATUS,"LINK_STATUS");
	HX_MARK_MEMBER_NAME(GL_obj::VALIDATE_STATUS,"VALIDATE_STATUS");
	HX_MARK_MEMBER_NAME(GL_obj::ATTACHED_SHADERS,"ATTACHED_SHADERS");
	HX_MARK_MEMBER_NAME(GL_obj::ACTIVE_UNIFORMS,"ACTIVE_UNIFORMS");
	HX_MARK_MEMBER_NAME(GL_obj::ACTIVE_ATTRIBUTES,"ACTIVE_ATTRIBUTES");
	HX_MARK_MEMBER_NAME(GL_obj::SHADING_LANGUAGE_VERSION,"SHADING_LANGUAGE_VERSION");
	HX_MARK_MEMBER_NAME(GL_obj::CURRENT_PROGRAM,"CURRENT_PROGRAM");
	HX_MARK_MEMBER_NAME(GL_obj::NEVER,"NEVER");
	HX_MARK_MEMBER_NAME(GL_obj::LESS,"LESS");
	HX_MARK_MEMBER_NAME(GL_obj::EQUAL,"EQUAL");
	HX_MARK_MEMBER_NAME(GL_obj::LEQUAL,"LEQUAL");
	HX_MARK_MEMBER_NAME(GL_obj::GREATER,"GREATER");
	HX_MARK_MEMBER_NAME(GL_obj::NOTEQUAL,"NOTEQUAL");
	HX_MARK_MEMBER_NAME(GL_obj::GEQUAL,"GEQUAL");
	HX_MARK_MEMBER_NAME(GL_obj::ALWAYS,"ALWAYS");
	HX_MARK_MEMBER_NAME(GL_obj::KEEP,"KEEP");
	HX_MARK_MEMBER_NAME(GL_obj::REPLACE,"REPLACE");
	HX_MARK_MEMBER_NAME(GL_obj::INCR,"INCR");
	HX_MARK_MEMBER_NAME(GL_obj::DECR,"DECR");
	HX_MARK_MEMBER_NAME(GL_obj::INVERT,"INVERT");
	HX_MARK_MEMBER_NAME(GL_obj::INCR_WRAP,"INCR_WRAP");
	HX_MARK_MEMBER_NAME(GL_obj::DECR_WRAP,"DECR_WRAP");
	HX_MARK_MEMBER_NAME(GL_obj::VENDOR,"VENDOR");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERER,"RENDERER");
	HX_MARK_MEMBER_NAME(GL_obj::VERSION,"VERSION");
	HX_MARK_MEMBER_NAME(GL_obj::EXTENSIONS,"EXTENSIONS");
	HX_MARK_MEMBER_NAME(GL_obj::NEAREST,"NEAREST");
	HX_MARK_MEMBER_NAME(GL_obj::LINEAR,"LINEAR");
	HX_MARK_MEMBER_NAME(GL_obj::NEAREST_MIPMAP_NEAREST,"NEAREST_MIPMAP_NEAREST");
	HX_MARK_MEMBER_NAME(GL_obj::LINEAR_MIPMAP_NEAREST,"LINEAR_MIPMAP_NEAREST");
	HX_MARK_MEMBER_NAME(GL_obj::NEAREST_MIPMAP_LINEAR,"NEAREST_MIPMAP_LINEAR");
	HX_MARK_MEMBER_NAME(GL_obj::LINEAR_MIPMAP_LINEAR,"LINEAR_MIPMAP_LINEAR");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_MAG_FILTER,"TEXTURE_MAG_FILTER");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_MIN_FILTER,"TEXTURE_MIN_FILTER");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_WRAP_S,"TEXTURE_WRAP_S");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_WRAP_T,"TEXTURE_WRAP_T");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_2D,"TEXTURE_2D");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE,"TEXTURE");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP,"TEXTURE_CUBE_MAP");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_BINDING_CUBE_MAP,"TEXTURE_BINDING_CUBE_MAP");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_X,"TEXTURE_CUBE_MAP_POSITIVE_X");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_X,"TEXTURE_CUBE_MAP_NEGATIVE_X");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Y,"TEXTURE_CUBE_MAP_POSITIVE_Y");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Y,"TEXTURE_CUBE_MAP_NEGATIVE_Y");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Z,"TEXTURE_CUBE_MAP_POSITIVE_Z");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Z,"TEXTURE_CUBE_MAP_NEGATIVE_Z");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_CUBE_MAP_TEXTURE_SIZE,"MAX_CUBE_MAP_TEXTURE_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE0,"TEXTURE0");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE1,"TEXTURE1");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE2,"TEXTURE2");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE3,"TEXTURE3");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE4,"TEXTURE4");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE5,"TEXTURE5");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE6,"TEXTURE6");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE7,"TEXTURE7");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE8,"TEXTURE8");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE9,"TEXTURE9");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE10,"TEXTURE10");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE11,"TEXTURE11");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE12,"TEXTURE12");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE13,"TEXTURE13");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE14,"TEXTURE14");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE15,"TEXTURE15");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE16,"TEXTURE16");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE17,"TEXTURE17");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE18,"TEXTURE18");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE19,"TEXTURE19");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE20,"TEXTURE20");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE21,"TEXTURE21");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE22,"TEXTURE22");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE23,"TEXTURE23");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE24,"TEXTURE24");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE25,"TEXTURE25");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE26,"TEXTURE26");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE27,"TEXTURE27");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE28,"TEXTURE28");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE29,"TEXTURE29");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE30,"TEXTURE30");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE31,"TEXTURE31");
	HX_MARK_MEMBER_NAME(GL_obj::ACTIVE_TEXTURE,"ACTIVE_TEXTURE");
	HX_MARK_MEMBER_NAME(GL_obj::REPEAT,"REPEAT");
	HX_MARK_MEMBER_NAME(GL_obj::CLAMP_TO_EDGE,"CLAMP_TO_EDGE");
	HX_MARK_MEMBER_NAME(GL_obj::MIRRORED_REPEAT,"MIRRORED_REPEAT");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_VEC2,"FLOAT_VEC2");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_VEC3,"FLOAT_VEC3");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_VEC4,"FLOAT_VEC4");
	HX_MARK_MEMBER_NAME(GL_obj::INT_VEC2,"INT_VEC2");
	HX_MARK_MEMBER_NAME(GL_obj::INT_VEC3,"INT_VEC3");
	HX_MARK_MEMBER_NAME(GL_obj::INT_VEC4,"INT_VEC4");
	HX_MARK_MEMBER_NAME(GL_obj::BOOL,"BOOL");
	HX_MARK_MEMBER_NAME(GL_obj::BOOL_VEC2,"BOOL_VEC2");
	HX_MARK_MEMBER_NAME(GL_obj::BOOL_VEC3,"BOOL_VEC3");
	HX_MARK_MEMBER_NAME(GL_obj::BOOL_VEC4,"BOOL_VEC4");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_MAT2,"FLOAT_MAT2");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_MAT3,"FLOAT_MAT3");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_MAT4,"FLOAT_MAT4");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLER_2D,"SAMPLER_2D");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLER_CUBE,"SAMPLER_CUBE");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_ENABLED,"VERTEX_ATTRIB_ARRAY_ENABLED");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_SIZE,"VERTEX_ATTRIB_ARRAY_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_STRIDE,"VERTEX_ATTRIB_ARRAY_STRIDE");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_TYPE,"VERTEX_ATTRIB_ARRAY_TYPE");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_NORMALIZED,"VERTEX_ATTRIB_ARRAY_NORMALIZED");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_POINTER,"VERTEX_ATTRIB_ARRAY_POINTER");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_BUFFER_BINDING,"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::IMPLEMENTATION_COLOR_READ_TYPE,"IMPLEMENTATION_COLOR_READ_TYPE");
	HX_MARK_MEMBER_NAME(GL_obj::IMPLEMENTATION_COLOR_READ_FORMAT,"IMPLEMENTATION_COLOR_READ_FORMAT");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_PROGRAM_POINT_SIZE,"VERTEX_PROGRAM_POINT_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::POINT_SPRITE,"POINT_SPRITE");
	HX_MARK_MEMBER_NAME(GL_obj::COMPILE_STATUS,"COMPILE_STATUS");
	HX_MARK_MEMBER_NAME(GL_obj::LOW_FLOAT,"LOW_FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::MEDIUM_FLOAT,"MEDIUM_FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::HIGH_FLOAT,"HIGH_FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::LOW_INT,"LOW_INT");
	HX_MARK_MEMBER_NAME(GL_obj::MEDIUM_INT,"MEDIUM_INT");
	HX_MARK_MEMBER_NAME(GL_obj::HIGH_INT,"HIGH_INT");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER,"FRAMEBUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER,"RENDERBUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::RGBA4,"RGBA4");
	HX_MARK_MEMBER_NAME(GL_obj::RGB5_A1,"RGB5_A1");
	HX_MARK_MEMBER_NAME(GL_obj::RGB565,"RGB565");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_COMPONENT16,"DEPTH_COMPONENT16");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_INDEX,"STENCIL_INDEX");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_INDEX8,"STENCIL_INDEX8");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_STENCIL,"DEPTH_STENCIL");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_WIDTH,"RENDERBUFFER_WIDTH");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_HEIGHT,"RENDERBUFFER_HEIGHT");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_INTERNAL_FORMAT,"RENDERBUFFER_INTERNAL_FORMAT");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_RED_SIZE,"RENDERBUFFER_RED_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_GREEN_SIZE,"RENDERBUFFER_GREEN_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_BLUE_SIZE,"RENDERBUFFER_BLUE_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_ALPHA_SIZE,"RENDERBUFFER_ALPHA_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_DEPTH_SIZE,"RENDERBUFFER_DEPTH_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_STENCIL_SIZE,"RENDERBUFFER_STENCIL_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE,"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_NAME,"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE,"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT0,"COLOR_ATTACHMENT0");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_ATTACHMENT,"DEPTH_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_ATTACHMENT,"STENCIL_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_STENCIL_ATTACHMENT,"DEPTH_STENCIL_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_COMPLETE,"FRAMEBUFFER_COMPLETE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_DIMENSIONS,"FRAMEBUFFER_INCOMPLETE_DIMENSIONS");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_UNSUPPORTED,"FRAMEBUFFER_UNSUPPORTED");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_BINDING,"FRAMEBUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_BINDING,"RENDERBUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_RENDERBUFFER_SIZE,"MAX_RENDERBUFFER_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::INVALID_FRAMEBUFFER_OPERATION,"INVALID_FRAMEBUFFER_OPERATION");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_FLIP_Y_WEBGL,"UNPACK_FLIP_Y_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_PREMULTIPLY_ALPHA_WEBGL,"UNPACK_PREMULTIPLY_ALPHA_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::CONTEXT_LOST_WEBGL,"CONTEXT_LOST_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_COLORSPACE_CONVERSION_WEBGL,"UNPACK_COLORSPACE_CONVERSION_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::BROWSER_DEFAULT_WEBGL,"BROWSER_DEFAULT_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::READ_BUFFER,"READ_BUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_ROW_LENGTH,"UNPACK_ROW_LENGTH");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_SKIP_ROWS,"UNPACK_SKIP_ROWS");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_SKIP_PIXELS,"UNPACK_SKIP_PIXELS");
	HX_MARK_MEMBER_NAME(GL_obj::PACK_ROW_LENGTH,"PACK_ROW_LENGTH");
	HX_MARK_MEMBER_NAME(GL_obj::PACK_SKIP_ROWS,"PACK_SKIP_ROWS");
	HX_MARK_MEMBER_NAME(GL_obj::PACK_SKIP_PIXELS,"PACK_SKIP_PIXELS");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_BINDING_3D,"TEXTURE_BINDING_3D");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_SKIP_IMAGES,"UNPACK_SKIP_IMAGES");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_IMAGE_HEIGHT,"UNPACK_IMAGE_HEIGHT");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_3D_TEXTURE_SIZE,"MAX_3D_TEXTURE_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_ELEMENTS_VERTICES,"MAX_ELEMENTS_VERTICES");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_ELEMENTS_INDICES,"MAX_ELEMENTS_INDICES");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_TEXTURE_LOD_BIAS,"MAX_TEXTURE_LOD_BIAS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_FRAGMENT_UNIFORM_COMPONENTS,"MAX_FRAGMENT_UNIFORM_COMPONENTS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VERTEX_UNIFORM_COMPONENTS,"MAX_VERTEX_UNIFORM_COMPONENTS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_ARRAY_TEXTURE_LAYERS,"MAX_ARRAY_TEXTURE_LAYERS");
	HX_MARK_MEMBER_NAME(GL_obj::MIN_PROGRAM_TEXEL_OFFSET,"MIN_PROGRAM_TEXEL_OFFSET");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_PROGRAM_TEXEL_OFFSET,"MAX_PROGRAM_TEXEL_OFFSET");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VARYING_COMPONENTS,"MAX_VARYING_COMPONENTS");
	HX_MARK_MEMBER_NAME(GL_obj::FRAGMENT_SHADER_DERIVATIVE_HINT,"FRAGMENT_SHADER_DERIVATIVE_HINT");
	HX_MARK_MEMBER_NAME(GL_obj::RASTERIZER_DISCARD,"RASTERIZER_DISCARD");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ARRAY_BINDING,"VERTEX_ARRAY_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VERTEX_OUTPUT_COMPONENTS,"MAX_VERTEX_OUTPUT_COMPONENTS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_FRAGMENT_INPUT_COMPONENTS,"MAX_FRAGMENT_INPUT_COMPONENTS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_SERVER_WAIT_TIMEOUT,"MAX_SERVER_WAIT_TIMEOUT");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_ELEMENT_INDEX,"MAX_ELEMENT_INDEX");
	HX_MARK_MEMBER_NAME(GL_obj::RED,"RED");
	HX_MARK_MEMBER_NAME(GL_obj::RGB8,"RGB8");
	HX_MARK_MEMBER_NAME(GL_obj::RGBA8,"RGBA8");
	HX_MARK_MEMBER_NAME(GL_obj::RGB10_A2,"RGB10_A2");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_3D,"TEXTURE_3D");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_WRAP_R,"TEXTURE_WRAP_R");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_MIN_LOD,"TEXTURE_MIN_LOD");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_MAX_LOD,"TEXTURE_MAX_LOD");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_BASE_LEVEL,"TEXTURE_BASE_LEVEL");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_MAX_LEVEL,"TEXTURE_MAX_LEVEL");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_COMPARE_MODE,"TEXTURE_COMPARE_MODE");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_COMPARE_FUNC,"TEXTURE_COMPARE_FUNC");
	HX_MARK_MEMBER_NAME(GL_obj::SRGB,"SRGB");
	HX_MARK_MEMBER_NAME(GL_obj::SRGB8,"SRGB8");
	HX_MARK_MEMBER_NAME(GL_obj::SRGB8_ALPHA8,"SRGB8_ALPHA8");
	HX_MARK_MEMBER_NAME(GL_obj::COMPARE_REF_TO_TEXTURE,"COMPARE_REF_TO_TEXTURE");
	HX_MARK_MEMBER_NAME(GL_obj::RGBA32F,"RGBA32F");
	HX_MARK_MEMBER_NAME(GL_obj::RGB32F,"RGB32F");
	HX_MARK_MEMBER_NAME(GL_obj::RGBA16F,"RGBA16F");
	HX_MARK_MEMBER_NAME(GL_obj::RGB16F,"RGB16F");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_2D_ARRAY,"TEXTURE_2D_ARRAY");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_BINDING_2D_ARRAY,"TEXTURE_BINDING_2D_ARRAY");
	HX_MARK_MEMBER_NAME(GL_obj::R11F_G11F_B10F,"R11F_G11F_B10F");
	HX_MARK_MEMBER_NAME(GL_obj::RGB9_E5,"RGB9_E5");
	HX_MARK_MEMBER_NAME(GL_obj::RGBA32UI,"RGBA32UI");
	HX_MARK_MEMBER_NAME(GL_obj::RGB32UI,"RGB32UI");
	HX_MARK_MEMBER_NAME(GL_obj::RGBA16UI,"RGBA16UI");
	HX_MARK_MEMBER_NAME(GL_obj::RGB16UI,"RGB16UI");
	HX_MARK_MEMBER_NAME(GL_obj::RGBA8UI,"RGBA8UI");
	HX_MARK_MEMBER_NAME(GL_obj::RGB8UI,"RGB8UI");
	HX_MARK_MEMBER_NAME(GL_obj::RGBA32I,"RGBA32I");
	HX_MARK_MEMBER_NAME(GL_obj::RGB32I,"RGB32I");
	HX_MARK_MEMBER_NAME(GL_obj::RGBA16I,"RGBA16I");
	HX_MARK_MEMBER_NAME(GL_obj::RGB16I,"RGB16I");
	HX_MARK_MEMBER_NAME(GL_obj::RGBA8I,"RGBA8I");
	HX_MARK_MEMBER_NAME(GL_obj::RGB8I,"RGB8I");
	HX_MARK_MEMBER_NAME(GL_obj::RED_INTEGER,"RED_INTEGER");
	HX_MARK_MEMBER_NAME(GL_obj::RGB_INTEGER,"RGB_INTEGER");
	HX_MARK_MEMBER_NAME(GL_obj::RGBA_INTEGER,"RGBA_INTEGER");
	HX_MARK_MEMBER_NAME(GL_obj::R8,"R8");
	HX_MARK_MEMBER_NAME(GL_obj::RG8,"RG8");
	HX_MARK_MEMBER_NAME(GL_obj::R16F,"R16F");
	HX_MARK_MEMBER_NAME(GL_obj::R32F,"R32F");
	HX_MARK_MEMBER_NAME(GL_obj::RG16F,"RG16F");
	HX_MARK_MEMBER_NAME(GL_obj::RG32F,"RG32F");
	HX_MARK_MEMBER_NAME(GL_obj::R8I,"R8I");
	HX_MARK_MEMBER_NAME(GL_obj::R8UI,"R8UI");
	HX_MARK_MEMBER_NAME(GL_obj::R16I,"R16I");
	HX_MARK_MEMBER_NAME(GL_obj::R16UI,"R16UI");
	HX_MARK_MEMBER_NAME(GL_obj::R32I,"R32I");
	HX_MARK_MEMBER_NAME(GL_obj::R32UI,"R32UI");
	HX_MARK_MEMBER_NAME(GL_obj::RG8I,"RG8I");
	HX_MARK_MEMBER_NAME(GL_obj::RG8UI,"RG8UI");
	HX_MARK_MEMBER_NAME(GL_obj::RG16I,"RG16I");
	HX_MARK_MEMBER_NAME(GL_obj::RG16UI,"RG16UI");
	HX_MARK_MEMBER_NAME(GL_obj::RG32I,"RG32I");
	HX_MARK_MEMBER_NAME(GL_obj::RG32UI,"RG32UI");
	HX_MARK_MEMBER_NAME(GL_obj::R8_SNORM,"R8_SNORM");
	HX_MARK_MEMBER_NAME(GL_obj::RG8_SNORM,"RG8_SNORM");
	HX_MARK_MEMBER_NAME(GL_obj::RGB8_SNORM,"RGB8_SNORM");
	HX_MARK_MEMBER_NAME(GL_obj::RGBA8_SNORM,"RGBA8_SNORM");
	HX_MARK_MEMBER_NAME(GL_obj::RGB10_A2UI,"RGB10_A2UI");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_IMMUTABLE_FORMAT,"TEXTURE_IMMUTABLE_FORMAT");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_IMMUTABLE_LEVELS,"TEXTURE_IMMUTABLE_LEVELS");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_INT_2_10_10_10_REV,"UNSIGNED_INT_2_10_10_10_REV");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_INT_10F_11F_11F_REV,"UNSIGNED_INT_10F_11F_11F_REV");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_INT_5_9_9_9_REV,"UNSIGNED_INT_5_9_9_9_REV");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_32_UNSIGNED_INT_24_8_REV,"FLOAT_32_UNSIGNED_INT_24_8_REV");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_INT_24_8,"UNSIGNED_INT_24_8");
	HX_MARK_MEMBER_NAME(GL_obj::HALF_FLOAT,"HALF_FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::RG,"RG");
	HX_MARK_MEMBER_NAME(GL_obj::RG_INTEGER,"RG_INTEGER");
	HX_MARK_MEMBER_NAME(GL_obj::INT_2_10_10_10_REV,"INT_2_10_10_10_REV");
	HX_MARK_MEMBER_NAME(GL_obj::CURRENT_QUERY,"CURRENT_QUERY");
	HX_MARK_MEMBER_NAME(GL_obj::QUERY_RESULT,"QUERY_RESULT");
	HX_MARK_MEMBER_NAME(GL_obj::QUERY_RESULT_AVAILABLE,"QUERY_RESULT_AVAILABLE");
	HX_MARK_MEMBER_NAME(GL_obj::ANY_SAMPLES_PASSED,"ANY_SAMPLES_PASSED");
	HX_MARK_MEMBER_NAME(GL_obj::ANY_SAMPLES_PASSED_CONSERVATIVE,"ANY_SAMPLES_PASSED_CONSERVATIVE");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_DRAW_BUFFERS,"MAX_DRAW_BUFFERS");
	HX_MARK_MEMBER_NAME(GL_obj::DRAW_BUFFER0,"DRAW_BUFFER0");
	HX_MARK_MEMBER_NAME(GL_obj::DRAW_BUFFER1,"DRAW_BUFFER1");
	HX_MARK_MEMBER_NAME(GL_obj::DRAW_BUFFER2,"DRAW_BUFFER2");
	HX_MARK_MEMBER_NAME(GL_obj::DRAW_BUFFER3,"DRAW_BUFFER3");
	HX_MARK_MEMBER_NAME(GL_obj::DRAW_BUFFER4,"DRAW_BUFFER4");
	HX_MARK_MEMBER_NAME(GL_obj::DRAW_BUFFER5,"DRAW_BUFFER5");
	HX_MARK_MEMBER_NAME(GL_obj::DRAW_BUFFER6,"DRAW_BUFFER6");
	HX_MARK_MEMBER_NAME(GL_obj::DRAW_BUFFER7,"DRAW_BUFFER7");
	HX_MARK_MEMBER_NAME(GL_obj::DRAW_BUFFER8,"DRAW_BUFFER8");
	HX_MARK_MEMBER_NAME(GL_obj::DRAW_BUFFER9,"DRAW_BUFFER9");
	HX_MARK_MEMBER_NAME(GL_obj::DRAW_BUFFER10,"DRAW_BUFFER10");
	HX_MARK_MEMBER_NAME(GL_obj::DRAW_BUFFER11,"DRAW_BUFFER11");
	HX_MARK_MEMBER_NAME(GL_obj::DRAW_BUFFER12,"DRAW_BUFFER12");
	HX_MARK_MEMBER_NAME(GL_obj::DRAW_BUFFER13,"DRAW_BUFFER13");
	HX_MARK_MEMBER_NAME(GL_obj::DRAW_BUFFER14,"DRAW_BUFFER14");
	HX_MARK_MEMBER_NAME(GL_obj::DRAW_BUFFER15,"DRAW_BUFFER15");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_COLOR_ATTACHMENTS,"MAX_COLOR_ATTACHMENTS");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT1,"COLOR_ATTACHMENT1");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT2,"COLOR_ATTACHMENT2");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT3,"COLOR_ATTACHMENT3");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT4,"COLOR_ATTACHMENT4");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT5,"COLOR_ATTACHMENT5");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT6,"COLOR_ATTACHMENT6");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT7,"COLOR_ATTACHMENT7");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT8,"COLOR_ATTACHMENT8");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT9,"COLOR_ATTACHMENT9");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT10,"COLOR_ATTACHMENT10");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT11,"COLOR_ATTACHMENT11");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT12,"COLOR_ATTACHMENT12");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT13,"COLOR_ATTACHMENT13");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT14,"COLOR_ATTACHMENT14");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT15,"COLOR_ATTACHMENT15");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLER_3D,"SAMPLER_3D");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLER_2D_SHADOW,"SAMPLER_2D_SHADOW");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLER_2D_ARRAY,"SAMPLER_2D_ARRAY");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLER_2D_ARRAY_SHADOW,"SAMPLER_2D_ARRAY_SHADOW");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLER_CUBE_SHADOW,"SAMPLER_CUBE_SHADOW");
	HX_MARK_MEMBER_NAME(GL_obj::INT_SAMPLER_2D,"INT_SAMPLER_2D");
	HX_MARK_MEMBER_NAME(GL_obj::INT_SAMPLER_3D,"INT_SAMPLER_3D");
	HX_MARK_MEMBER_NAME(GL_obj::INT_SAMPLER_CUBE,"INT_SAMPLER_CUBE");
	HX_MARK_MEMBER_NAME(GL_obj::INT_SAMPLER_2D_ARRAY,"INT_SAMPLER_2D_ARRAY");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_INT_SAMPLER_2D,"UNSIGNED_INT_SAMPLER_2D");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_INT_SAMPLER_3D,"UNSIGNED_INT_SAMPLER_3D");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_INT_SAMPLER_CUBE,"UNSIGNED_INT_SAMPLER_CUBE");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_INT_SAMPLER_2D_ARRAY,"UNSIGNED_INT_SAMPLER_2D_ARRAY");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_SAMPLES,"MAX_SAMPLES");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLER_BINDING,"SAMPLER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::PIXEL_PACK_BUFFER,"PIXEL_PACK_BUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::PIXEL_UNPACK_BUFFER,"PIXEL_UNPACK_BUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::PIXEL_PACK_BUFFER_BINDING,"PIXEL_PACK_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::PIXEL_UNPACK_BUFFER_BINDING,"PIXEL_UNPACK_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::COPY_READ_BUFFER,"COPY_READ_BUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::COPY_WRITE_BUFFER,"COPY_WRITE_BUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::COPY_READ_BUFFER_BINDING,"COPY_READ_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::COPY_WRITE_BUFFER_BINDING,"COPY_WRITE_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_MAT2x3,"FLOAT_MAT2x3");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_MAT2x4,"FLOAT_MAT2x4");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_MAT3x2,"FLOAT_MAT3x2");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_MAT3x4,"FLOAT_MAT3x4");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_MAT4x2,"FLOAT_MAT4x2");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_MAT4x3,"FLOAT_MAT4x3");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_INT_VEC2,"UNSIGNED_INT_VEC2");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_INT_VEC3,"UNSIGNED_INT_VEC3");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_INT_VEC4,"UNSIGNED_INT_VEC4");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_NORMALIZED,"UNSIGNED_NORMALIZED");
	HX_MARK_MEMBER_NAME(GL_obj::SIGNED_NORMALIZED,"SIGNED_NORMALIZED");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_INTEGER,"VERTEX_ATTRIB_ARRAY_INTEGER");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_DIVISOR,"VERTEX_ATTRIB_ARRAY_DIVISOR");
	HX_MARK_MEMBER_NAME(GL_obj::TRANSFORM_FEEDBACK_BUFFER_MODE,"TRANSFORM_FEEDBACK_BUFFER_MODE");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS,"MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS");
	HX_MARK_MEMBER_NAME(GL_obj::TRANSFORM_FEEDBACK_VARYINGS,"TRANSFORM_FEEDBACK_VARYINGS");
	HX_MARK_MEMBER_NAME(GL_obj::TRANSFORM_FEEDBACK_BUFFER_START,"TRANSFORM_FEEDBACK_BUFFER_START");
	HX_MARK_MEMBER_NAME(GL_obj::TRANSFORM_FEEDBACK_BUFFER_SIZE,"TRANSFORM_FEEDBACK_BUFFER_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN,"TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS,"MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS,"MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS");
	HX_MARK_MEMBER_NAME(GL_obj::INTERLEAVED_ATTRIBS,"INTERLEAVED_ATTRIBS");
	HX_MARK_MEMBER_NAME(GL_obj::SEPARATE_ATTRIBS,"SEPARATE_ATTRIBS");
	HX_MARK_MEMBER_NAME(GL_obj::TRANSFORM_FEEDBACK_BUFFER,"TRANSFORM_FEEDBACK_BUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::TRANSFORM_FEEDBACK_BUFFER_BINDING,"TRANSFORM_FEEDBACK_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::TRANSFORM_FEEDBACK,"TRANSFORM_FEEDBACK");
	HX_MARK_MEMBER_NAME(GL_obj::TRANSFORM_FEEDBACK_PAUSED,"TRANSFORM_FEEDBACK_PAUSED");
	HX_MARK_MEMBER_NAME(GL_obj::TRANSFORM_FEEDBACK_ACTIVE,"TRANSFORM_FEEDBACK_ACTIVE");
	HX_MARK_MEMBER_NAME(GL_obj::TRANSFORM_FEEDBACK_BINDING,"TRANSFORM_FEEDBACK_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING,"FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE,"FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_RED_SIZE,"FRAMEBUFFER_ATTACHMENT_RED_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_GREEN_SIZE,"FRAMEBUFFER_ATTACHMENT_GREEN_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_BLUE_SIZE,"FRAMEBUFFER_ATTACHMENT_BLUE_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE,"FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE,"FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE,"FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_DEFAULT,"FRAMEBUFFER_DEFAULT");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH24_STENCIL8,"DEPTH24_STENCIL8");
	HX_MARK_MEMBER_NAME(GL_obj::DRAW_FRAMEBUFFER_BINDING,"DRAW_FRAMEBUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::READ_FRAMEBUFFER,"READ_FRAMEBUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::DRAW_FRAMEBUFFER,"DRAW_FRAMEBUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::READ_FRAMEBUFFER_BINDING,"READ_FRAMEBUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_SAMPLES,"RENDERBUFFER_SAMPLES");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_MULTISAMPLE,"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE");
	HX_MARK_MEMBER_NAME(GL_obj::UNIFORM_BUFFER,"UNIFORM_BUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::UNIFORM_BUFFER_BINDING,"UNIFORM_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::UNIFORM_BUFFER_START,"UNIFORM_BUFFER_START");
	HX_MARK_MEMBER_NAME(GL_obj::UNIFORM_BUFFER_SIZE,"UNIFORM_BUFFER_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VERTEX_UNIFORM_BLOCKS,"MAX_VERTEX_UNIFORM_BLOCKS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_FRAGMENT_UNIFORM_BLOCKS,"MAX_FRAGMENT_UNIFORM_BLOCKS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_COMBINED_UNIFORM_BLOCKS,"MAX_COMBINED_UNIFORM_BLOCKS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_UNIFORM_BUFFER_BINDINGS,"MAX_UNIFORM_BUFFER_BINDINGS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_UNIFORM_BLOCK_SIZE,"MAX_UNIFORM_BLOCK_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS,"MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS,"MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS");
	HX_MARK_MEMBER_NAME(GL_obj::UNIFORM_BUFFER_OFFSET_ALIGNMENT,"UNIFORM_BUFFER_OFFSET_ALIGNMENT");
	HX_MARK_MEMBER_NAME(GL_obj::ACTIVE_UNIFORM_BLOCKS,"ACTIVE_UNIFORM_BLOCKS");
	HX_MARK_MEMBER_NAME(GL_obj::UNIFORM_TYPE,"UNIFORM_TYPE");
	HX_MARK_MEMBER_NAME(GL_obj::UNIFORM_SIZE,"UNIFORM_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::UNIFORM_BLOCK_INDEX,"UNIFORM_BLOCK_INDEX");
	HX_MARK_MEMBER_NAME(GL_obj::UNIFORM_OFFSET,"UNIFORM_OFFSET");
	HX_MARK_MEMBER_NAME(GL_obj::UNIFORM_ARRAY_STRIDE,"UNIFORM_ARRAY_STRIDE");
	HX_MARK_MEMBER_NAME(GL_obj::UNIFORM_MATRIX_STRIDE,"UNIFORM_MATRIX_STRIDE");
	HX_MARK_MEMBER_NAME(GL_obj::UNIFORM_IS_ROW_MAJOR,"UNIFORM_IS_ROW_MAJOR");
	HX_MARK_MEMBER_NAME(GL_obj::UNIFORM_BLOCK_BINDING,"UNIFORM_BLOCK_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::UNIFORM_BLOCK_DATA_SIZE,"UNIFORM_BLOCK_DATA_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::UNIFORM_BLOCK_ACTIVE_UNIFORMS,"UNIFORM_BLOCK_ACTIVE_UNIFORMS");
	HX_MARK_MEMBER_NAME(GL_obj::UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES,"UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES");
	HX_MARK_MEMBER_NAME(GL_obj::UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER,"UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER");
	HX_MARK_MEMBER_NAME(GL_obj::UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER,"UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER");
	HX_MARK_MEMBER_NAME(GL_obj::OBJECT_TYPE,"OBJECT_TYPE");
	HX_MARK_MEMBER_NAME(GL_obj::SYNC_CONDITION,"SYNC_CONDITION");
	HX_MARK_MEMBER_NAME(GL_obj::SYNC_STATUS,"SYNC_STATUS");
	HX_MARK_MEMBER_NAME(GL_obj::SYNC_FLAGS,"SYNC_FLAGS");
	HX_MARK_MEMBER_NAME(GL_obj::SYNC_FENCE,"SYNC_FENCE");
	HX_MARK_MEMBER_NAME(GL_obj::SYNC_GPU_COMMANDS_COMPLETE,"SYNC_GPU_COMMANDS_COMPLETE");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNALED,"UNSIGNALED");
	HX_MARK_MEMBER_NAME(GL_obj::SIGNALED,"SIGNALED");
	HX_MARK_MEMBER_NAME(GL_obj::ALREADY_SIGNALED,"ALREADY_SIGNALED");
	HX_MARK_MEMBER_NAME(GL_obj::TIMEOUT_EXPIRED,"TIMEOUT_EXPIRED");
	HX_MARK_MEMBER_NAME(GL_obj::CONDITION_SATISFIED,"CONDITION_SATISFIED");
	HX_MARK_MEMBER_NAME(GL_obj::WAIT_FAILED,"WAIT_FAILED");
	HX_MARK_MEMBER_NAME(GL_obj::SYNC_FLUSH_COMMANDS_BIT,"SYNC_FLUSH_COMMANDS_BIT");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR,"COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH,"DEPTH");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL,"STENCIL");
	HX_MARK_MEMBER_NAME(GL_obj::MIN,"MIN");
	HX_MARK_MEMBER_NAME(GL_obj::MAX,"MAX");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_COMPONENT24,"DEPTH_COMPONENT24");
	HX_MARK_MEMBER_NAME(GL_obj::STREAM_READ,"STREAM_READ");
	HX_MARK_MEMBER_NAME(GL_obj::STREAM_COPY,"STREAM_COPY");
	HX_MARK_MEMBER_NAME(GL_obj::STATIC_READ,"STATIC_READ");
	HX_MARK_MEMBER_NAME(GL_obj::STATIC_COPY,"STATIC_COPY");
	HX_MARK_MEMBER_NAME(GL_obj::DYNAMIC_READ,"DYNAMIC_READ");
	HX_MARK_MEMBER_NAME(GL_obj::DYNAMIC_COPY,"DYNAMIC_COPY");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_COMPONENT32F,"DEPTH_COMPONENT32F");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH32F_STENCIL8,"DEPTH32F_STENCIL8");
	HX_MARK_MEMBER_NAME(GL_obj::INVALID_INDEX,"INVALID_INDEX");
	HX_MARK_MEMBER_NAME(GL_obj::TIMEOUT_IGNORED,"TIMEOUT_IGNORED");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_CLIENT_WAIT_TIMEOUT_WEBGL,"MAX_CLIENT_WAIT_TIMEOUT_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::context,"context");
	HX_MARK_MEMBER_NAME(GL_obj::type,"type");
	HX_MARK_MEMBER_NAME(GL_obj::version,"version");
	HX_MARK_MEMBER_NAME(GL_obj::__currentProgram,"__currentProgram");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GL_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_BUFFER_BIT,"DEPTH_BUFFER_BIT");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BUFFER_BIT,"STENCIL_BUFFER_BIT");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_BUFFER_BIT,"COLOR_BUFFER_BIT");
	HX_VISIT_MEMBER_NAME(GL_obj::POINTS,"POINTS");
	HX_VISIT_MEMBER_NAME(GL_obj::LINES,"LINES");
	HX_VISIT_MEMBER_NAME(GL_obj::LINE_LOOP,"LINE_LOOP");
	HX_VISIT_MEMBER_NAME(GL_obj::LINE_STRIP,"LINE_STRIP");
	HX_VISIT_MEMBER_NAME(GL_obj::TRIANGLES,"TRIANGLES");
	HX_VISIT_MEMBER_NAME(GL_obj::TRIANGLE_STRIP,"TRIANGLE_STRIP");
	HX_VISIT_MEMBER_NAME(GL_obj::TRIANGLE_FAN,"TRIANGLE_FAN");
	HX_VISIT_MEMBER_NAME(GL_obj::ZERO,"ZERO");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE,"ONE");
	HX_VISIT_MEMBER_NAME(GL_obj::SRC_COLOR,"SRC_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_SRC_COLOR,"ONE_MINUS_SRC_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::SRC_ALPHA,"SRC_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_SRC_ALPHA,"ONE_MINUS_SRC_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::DST_ALPHA,"DST_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_DST_ALPHA,"ONE_MINUS_DST_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::DST_COLOR,"DST_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_DST_COLOR,"ONE_MINUS_DST_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::SRC_ALPHA_SATURATE,"SRC_ALPHA_SATURATE");
	HX_VISIT_MEMBER_NAME(GL_obj::FUNC_ADD,"FUNC_ADD");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_EQUATION,"BLEND_EQUATION");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_EQUATION_RGB,"BLEND_EQUATION_RGB");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_EQUATION_ALPHA,"BLEND_EQUATION_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::FUNC_SUBTRACT,"FUNC_SUBTRACT");
	HX_VISIT_MEMBER_NAME(GL_obj::FUNC_REVERSE_SUBTRACT,"FUNC_REVERSE_SUBTRACT");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_DST_RGB,"BLEND_DST_RGB");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_SRC_RGB,"BLEND_SRC_RGB");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_DST_ALPHA,"BLEND_DST_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_SRC_ALPHA,"BLEND_SRC_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::CONSTANT_COLOR,"CONSTANT_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_CONSTANT_COLOR,"ONE_MINUS_CONSTANT_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::CONSTANT_ALPHA,"CONSTANT_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_CONSTANT_ALPHA,"ONE_MINUS_CONSTANT_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_COLOR,"BLEND_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::ARRAY_BUFFER,"ARRAY_BUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::ELEMENT_ARRAY_BUFFER,"ELEMENT_ARRAY_BUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::ARRAY_BUFFER_BINDING,"ARRAY_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::ELEMENT_ARRAY_BUFFER_BINDING,"ELEMENT_ARRAY_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::STREAM_DRAW,"STREAM_DRAW");
	HX_VISIT_MEMBER_NAME(GL_obj::STATIC_DRAW,"STATIC_DRAW");
	HX_VISIT_MEMBER_NAME(GL_obj::DYNAMIC_DRAW,"DYNAMIC_DRAW");
	HX_VISIT_MEMBER_NAME(GL_obj::BUFFER_SIZE,"BUFFER_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::BUFFER_USAGE,"BUFFER_USAGE");
	HX_VISIT_MEMBER_NAME(GL_obj::CURRENT_VERTEX_ATTRIB,"CURRENT_VERTEX_ATTRIB");
	HX_VISIT_MEMBER_NAME(GL_obj::FRONT,"FRONT");
	HX_VISIT_MEMBER_NAME(GL_obj::BACK,"BACK");
	HX_VISIT_MEMBER_NAME(GL_obj::FRONT_AND_BACK,"FRONT_AND_BACK");
	HX_VISIT_MEMBER_NAME(GL_obj::CULL_FACE,"CULL_FACE");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND,"BLEND");
	HX_VISIT_MEMBER_NAME(GL_obj::DITHER,"DITHER");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_TEST,"STENCIL_TEST");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_TEST,"DEPTH_TEST");
	HX_VISIT_MEMBER_NAME(GL_obj::SCISSOR_TEST,"SCISSOR_TEST");
	HX_VISIT_MEMBER_NAME(GL_obj::POLYGON_OFFSET_FILL,"POLYGON_OFFSET_FILL");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_ALPHA_TO_COVERAGE,"SAMPLE_ALPHA_TO_COVERAGE");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE,"SAMPLE_COVERAGE");
	HX_VISIT_MEMBER_NAME(GL_obj::NO_ERROR,"NO_ERROR");
	HX_VISIT_MEMBER_NAME(GL_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_VISIT_MEMBER_NAME(GL_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_VISIT_MEMBER_NAME(GL_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_VISIT_MEMBER_NAME(GL_obj::CW,"CW");
	HX_VISIT_MEMBER_NAME(GL_obj::CCW,"CCW");
	HX_VISIT_MEMBER_NAME(GL_obj::LINE_WIDTH,"LINE_WIDTH");
	HX_VISIT_MEMBER_NAME(GL_obj::ALIASED_POINT_SIZE_RANGE,"ALIASED_POINT_SIZE_RANGE");
	HX_VISIT_MEMBER_NAME(GL_obj::ALIASED_LINE_WIDTH_RANGE,"ALIASED_LINE_WIDTH_RANGE");
	HX_VISIT_MEMBER_NAME(GL_obj::CULL_FACE_MODE,"CULL_FACE_MODE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRONT_FACE,"FRONT_FACE");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_RANGE,"DEPTH_RANGE");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_WRITEMASK,"DEPTH_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_CLEAR_VALUE,"DEPTH_CLEAR_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_FUNC,"DEPTH_FUNC");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_CLEAR_VALUE,"STENCIL_CLEAR_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_FUNC,"STENCIL_FUNC");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_FAIL,"STENCIL_FAIL");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_PASS_DEPTH_FAIL,"STENCIL_PASS_DEPTH_FAIL");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_PASS_DEPTH_PASS,"STENCIL_PASS_DEPTH_PASS");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_REF,"STENCIL_REF");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_VALUE_MASK,"STENCIL_VALUE_MASK");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_WRITEMASK,"STENCIL_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_FUNC,"STENCIL_BACK_FUNC");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_FAIL,"STENCIL_BACK_FAIL");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_PASS_DEPTH_FAIL,"STENCIL_BACK_PASS_DEPTH_FAIL");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_PASS_DEPTH_PASS,"STENCIL_BACK_PASS_DEPTH_PASS");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_REF,"STENCIL_BACK_REF");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_VALUE_MASK,"STENCIL_BACK_VALUE_MASK");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_WRITEMASK,"STENCIL_BACK_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_obj::VIEWPORT,"VIEWPORT");
	HX_VISIT_MEMBER_NAME(GL_obj::SCISSOR_BOX,"SCISSOR_BOX");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_CLEAR_VALUE,"COLOR_CLEAR_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_WRITEMASK,"COLOR_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_ALIGNMENT,"UNPACK_ALIGNMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::PACK_ALIGNMENT,"PACK_ALIGNMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_TEXTURE_SIZE,"MAX_TEXTURE_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VIEWPORT_DIMS,"MAX_VIEWPORT_DIMS");
	HX_VISIT_MEMBER_NAME(GL_obj::SUBPIXEL_BITS,"SUBPIXEL_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::RED_BITS,"RED_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::GREEN_BITS,"GREEN_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::BLUE_BITS,"BLUE_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::ALPHA_BITS,"ALPHA_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_BITS,"DEPTH_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BITS,"STENCIL_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::POLYGON_OFFSET_UNITS,"POLYGON_OFFSET_UNITS");
	HX_VISIT_MEMBER_NAME(GL_obj::POLYGON_OFFSET_FACTOR,"POLYGON_OFFSET_FACTOR");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_BINDING_2D,"TEXTURE_BINDING_2D");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_BUFFERS,"SAMPLE_BUFFERS");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLES,"SAMPLES");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE_VALUE,"SAMPLE_COVERAGE_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE_INVERT,"SAMPLE_COVERAGE_INVERT");
	HX_VISIT_MEMBER_NAME(GL_obj::NUM_COMPRESSED_TEXTURE_FORMATS,"NUM_COMPRESSED_TEXTURE_FORMATS");
	HX_VISIT_MEMBER_NAME(GL_obj::COMPRESSED_TEXTURE_FORMATS,"COMPRESSED_TEXTURE_FORMATS");
	HX_VISIT_MEMBER_NAME(GL_obj::DONT_CARE,"DONT_CARE");
	HX_VISIT_MEMBER_NAME(GL_obj::FASTEST,"FASTEST");
	HX_VISIT_MEMBER_NAME(GL_obj::NICEST,"NICEST");
	HX_VISIT_MEMBER_NAME(GL_obj::GENERATE_MIPMAP_HINT,"GENERATE_MIPMAP_HINT");
	HX_VISIT_MEMBER_NAME(GL_obj::BYTE,"BYTE");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_BYTE,"UNSIGNED_BYTE");
	HX_VISIT_MEMBER_NAME(GL_obj::SHORT,"SHORT");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_SHORT,"UNSIGNED_SHORT");
	HX_VISIT_MEMBER_NAME(GL_obj::INT,"INT");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_INT,"UNSIGNED_INT");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT,"FLOAT");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_COMPONENT,"DEPTH_COMPONENT");
	HX_VISIT_MEMBER_NAME(GL_obj::ALPHA,"ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB,"RGB");
	HX_VISIT_MEMBER_NAME(GL_obj::RGBA,"RGBA");
	HX_VISIT_MEMBER_NAME(GL_obj::LUMINANCE,"LUMINANCE");
	HX_VISIT_MEMBER_NAME(GL_obj::LUMINANCE_ALPHA,"LUMINANCE_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_4_4_4_4,"UNSIGNED_SHORT_4_4_4_4");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_5_5_5_1,"UNSIGNED_SHORT_5_5_5_1");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_5_6_5,"UNSIGNED_SHORT_5_6_5");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAGMENT_SHADER,"FRAGMENT_SHADER");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_SHADER,"VERTEX_SHADER");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VERTEX_ATTRIBS,"MAX_VERTEX_ATTRIBS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VERTEX_UNIFORM_VECTORS,"MAX_VERTEX_UNIFORM_VECTORS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VARYING_VECTORS,"MAX_VARYING_VECTORS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_COMBINED_TEXTURE_IMAGE_UNITS,"MAX_COMBINED_TEXTURE_IMAGE_UNITS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VERTEX_TEXTURE_IMAGE_UNITS,"MAX_VERTEX_TEXTURE_IMAGE_UNITS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_TEXTURE_IMAGE_UNITS,"MAX_TEXTURE_IMAGE_UNITS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_FRAGMENT_UNIFORM_VECTORS,"MAX_FRAGMENT_UNIFORM_VECTORS");
	HX_VISIT_MEMBER_NAME(GL_obj::SHADER_TYPE,"SHADER_TYPE");
	HX_VISIT_MEMBER_NAME(GL_obj::DELETE_STATUS,"DELETE_STATUS");
	HX_VISIT_MEMBER_NAME(GL_obj::LINK_STATUS,"LINK_STATUS");
	HX_VISIT_MEMBER_NAME(GL_obj::VALIDATE_STATUS,"VALIDATE_STATUS");
	HX_VISIT_MEMBER_NAME(GL_obj::ATTACHED_SHADERS,"ATTACHED_SHADERS");
	HX_VISIT_MEMBER_NAME(GL_obj::ACTIVE_UNIFORMS,"ACTIVE_UNIFORMS");
	HX_VISIT_MEMBER_NAME(GL_obj::ACTIVE_ATTRIBUTES,"ACTIVE_ATTRIBUTES");
	HX_VISIT_MEMBER_NAME(GL_obj::SHADING_LANGUAGE_VERSION,"SHADING_LANGUAGE_VERSION");
	HX_VISIT_MEMBER_NAME(GL_obj::CURRENT_PROGRAM,"CURRENT_PROGRAM");
	HX_VISIT_MEMBER_NAME(GL_obj::NEVER,"NEVER");
	HX_VISIT_MEMBER_NAME(GL_obj::LESS,"LESS");
	HX_VISIT_MEMBER_NAME(GL_obj::EQUAL,"EQUAL");
	HX_VISIT_MEMBER_NAME(GL_obj::LEQUAL,"LEQUAL");
	HX_VISIT_MEMBER_NAME(GL_obj::GREATER,"GREATER");
	HX_VISIT_MEMBER_NAME(GL_obj::NOTEQUAL,"NOTEQUAL");
	HX_VISIT_MEMBER_NAME(GL_obj::GEQUAL,"GEQUAL");
	HX_VISIT_MEMBER_NAME(GL_obj::ALWAYS,"ALWAYS");
	HX_VISIT_MEMBER_NAME(GL_obj::KEEP,"KEEP");
	HX_VISIT_MEMBER_NAME(GL_obj::REPLACE,"REPLACE");
	HX_VISIT_MEMBER_NAME(GL_obj::INCR,"INCR");
	HX_VISIT_MEMBER_NAME(GL_obj::DECR,"DECR");
	HX_VISIT_MEMBER_NAME(GL_obj::INVERT,"INVERT");
	HX_VISIT_MEMBER_NAME(GL_obj::INCR_WRAP,"INCR_WRAP");
	HX_VISIT_MEMBER_NAME(GL_obj::DECR_WRAP,"DECR_WRAP");
	HX_VISIT_MEMBER_NAME(GL_obj::VENDOR,"VENDOR");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERER,"RENDERER");
	HX_VISIT_MEMBER_NAME(GL_obj::VERSION,"VERSION");
	HX_VISIT_MEMBER_NAME(GL_obj::EXTENSIONS,"EXTENSIONS");
	HX_VISIT_MEMBER_NAME(GL_obj::NEAREST,"NEAREST");
	HX_VISIT_MEMBER_NAME(GL_obj::LINEAR,"LINEAR");
	HX_VISIT_MEMBER_NAME(GL_obj::NEAREST_MIPMAP_NEAREST,"NEAREST_MIPMAP_NEAREST");
	HX_VISIT_MEMBER_NAME(GL_obj::LINEAR_MIPMAP_NEAREST,"LINEAR_MIPMAP_NEAREST");
	HX_VISIT_MEMBER_NAME(GL_obj::NEAREST_MIPMAP_LINEAR,"NEAREST_MIPMAP_LINEAR");
	HX_VISIT_MEMBER_NAME(GL_obj::LINEAR_MIPMAP_LINEAR,"LINEAR_MIPMAP_LINEAR");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_MAG_FILTER,"TEXTURE_MAG_FILTER");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_MIN_FILTER,"TEXTURE_MIN_FILTER");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_WRAP_S,"TEXTURE_WRAP_S");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_WRAP_T,"TEXTURE_WRAP_T");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_2D,"TEXTURE_2D");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE,"TEXTURE");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP,"TEXTURE_CUBE_MAP");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_BINDING_CUBE_MAP,"TEXTURE_BINDING_CUBE_MAP");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_X,"TEXTURE_CUBE_MAP_POSITIVE_X");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_X,"TEXTURE_CUBE_MAP_NEGATIVE_X");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Y,"TEXTURE_CUBE_MAP_POSITIVE_Y");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Y,"TEXTURE_CUBE_MAP_NEGATIVE_Y");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Z,"TEXTURE_CUBE_MAP_POSITIVE_Z");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Z,"TEXTURE_CUBE_MAP_NEGATIVE_Z");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_CUBE_MAP_TEXTURE_SIZE,"MAX_CUBE_MAP_TEXTURE_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE0,"TEXTURE0");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE1,"TEXTURE1");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE2,"TEXTURE2");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE3,"TEXTURE3");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE4,"TEXTURE4");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE5,"TEXTURE5");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE6,"TEXTURE6");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE7,"TEXTURE7");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE8,"TEXTURE8");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE9,"TEXTURE9");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE10,"TEXTURE10");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE11,"TEXTURE11");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE12,"TEXTURE12");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE13,"TEXTURE13");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE14,"TEXTURE14");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE15,"TEXTURE15");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE16,"TEXTURE16");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE17,"TEXTURE17");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE18,"TEXTURE18");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE19,"TEXTURE19");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE20,"TEXTURE20");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE21,"TEXTURE21");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE22,"TEXTURE22");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE23,"TEXTURE23");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE24,"TEXTURE24");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE25,"TEXTURE25");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE26,"TEXTURE26");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE27,"TEXTURE27");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE28,"TEXTURE28");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE29,"TEXTURE29");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE30,"TEXTURE30");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE31,"TEXTURE31");
	HX_VISIT_MEMBER_NAME(GL_obj::ACTIVE_TEXTURE,"ACTIVE_TEXTURE");
	HX_VISIT_MEMBER_NAME(GL_obj::REPEAT,"REPEAT");
	HX_VISIT_MEMBER_NAME(GL_obj::CLAMP_TO_EDGE,"CLAMP_TO_EDGE");
	HX_VISIT_MEMBER_NAME(GL_obj::MIRRORED_REPEAT,"MIRRORED_REPEAT");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_VEC2,"FLOAT_VEC2");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_VEC3,"FLOAT_VEC3");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_VEC4,"FLOAT_VEC4");
	HX_VISIT_MEMBER_NAME(GL_obj::INT_VEC2,"INT_VEC2");
	HX_VISIT_MEMBER_NAME(GL_obj::INT_VEC3,"INT_VEC3");
	HX_VISIT_MEMBER_NAME(GL_obj::INT_VEC4,"INT_VEC4");
	HX_VISIT_MEMBER_NAME(GL_obj::BOOL,"BOOL");
	HX_VISIT_MEMBER_NAME(GL_obj::BOOL_VEC2,"BOOL_VEC2");
	HX_VISIT_MEMBER_NAME(GL_obj::BOOL_VEC3,"BOOL_VEC3");
	HX_VISIT_MEMBER_NAME(GL_obj::BOOL_VEC4,"BOOL_VEC4");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_MAT2,"FLOAT_MAT2");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_MAT3,"FLOAT_MAT3");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_MAT4,"FLOAT_MAT4");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLER_2D,"SAMPLER_2D");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLER_CUBE,"SAMPLER_CUBE");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_ENABLED,"VERTEX_ATTRIB_ARRAY_ENABLED");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_SIZE,"VERTEX_ATTRIB_ARRAY_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_STRIDE,"VERTEX_ATTRIB_ARRAY_STRIDE");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_TYPE,"VERTEX_ATTRIB_ARRAY_TYPE");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_NORMALIZED,"VERTEX_ATTRIB_ARRAY_NORMALIZED");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_POINTER,"VERTEX_ATTRIB_ARRAY_POINTER");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_BUFFER_BINDING,"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::IMPLEMENTATION_COLOR_READ_TYPE,"IMPLEMENTATION_COLOR_READ_TYPE");
	HX_VISIT_MEMBER_NAME(GL_obj::IMPLEMENTATION_COLOR_READ_FORMAT,"IMPLEMENTATION_COLOR_READ_FORMAT");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_PROGRAM_POINT_SIZE,"VERTEX_PROGRAM_POINT_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::POINT_SPRITE,"POINT_SPRITE");
	HX_VISIT_MEMBER_NAME(GL_obj::COMPILE_STATUS,"COMPILE_STATUS");
	HX_VISIT_MEMBER_NAME(GL_obj::LOW_FLOAT,"LOW_FLOAT");
	HX_VISIT_MEMBER_NAME(GL_obj::MEDIUM_FLOAT,"MEDIUM_FLOAT");
	HX_VISIT_MEMBER_NAME(GL_obj::HIGH_FLOAT,"HIGH_FLOAT");
	HX_VISIT_MEMBER_NAME(GL_obj::LOW_INT,"LOW_INT");
	HX_VISIT_MEMBER_NAME(GL_obj::MEDIUM_INT,"MEDIUM_INT");
	HX_VISIT_MEMBER_NAME(GL_obj::HIGH_INT,"HIGH_INT");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER,"FRAMEBUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER,"RENDERBUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::RGBA4,"RGBA4");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB5_A1,"RGB5_A1");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB565,"RGB565");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_COMPONENT16,"DEPTH_COMPONENT16");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_INDEX,"STENCIL_INDEX");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_INDEX8,"STENCIL_INDEX8");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_STENCIL,"DEPTH_STENCIL");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_WIDTH,"RENDERBUFFER_WIDTH");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_HEIGHT,"RENDERBUFFER_HEIGHT");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_INTERNAL_FORMAT,"RENDERBUFFER_INTERNAL_FORMAT");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_RED_SIZE,"RENDERBUFFER_RED_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_GREEN_SIZE,"RENDERBUFFER_GREEN_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_BLUE_SIZE,"RENDERBUFFER_BLUE_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_ALPHA_SIZE,"RENDERBUFFER_ALPHA_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_DEPTH_SIZE,"RENDERBUFFER_DEPTH_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_STENCIL_SIZE,"RENDERBUFFER_STENCIL_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE,"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_NAME,"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE,"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT0,"COLOR_ATTACHMENT0");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_ATTACHMENT,"DEPTH_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_ATTACHMENT,"STENCIL_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_STENCIL_ATTACHMENT,"DEPTH_STENCIL_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_COMPLETE,"FRAMEBUFFER_COMPLETE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_DIMENSIONS,"FRAMEBUFFER_INCOMPLETE_DIMENSIONS");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_UNSUPPORTED,"FRAMEBUFFER_UNSUPPORTED");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_BINDING,"FRAMEBUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_BINDING,"RENDERBUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_RENDERBUFFER_SIZE,"MAX_RENDERBUFFER_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::INVALID_FRAMEBUFFER_OPERATION,"INVALID_FRAMEBUFFER_OPERATION");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_FLIP_Y_WEBGL,"UNPACK_FLIP_Y_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_PREMULTIPLY_ALPHA_WEBGL,"UNPACK_PREMULTIPLY_ALPHA_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::CONTEXT_LOST_WEBGL,"CONTEXT_LOST_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_COLORSPACE_CONVERSION_WEBGL,"UNPACK_COLORSPACE_CONVERSION_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::BROWSER_DEFAULT_WEBGL,"BROWSER_DEFAULT_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::READ_BUFFER,"READ_BUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_ROW_LENGTH,"UNPACK_ROW_LENGTH");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_SKIP_ROWS,"UNPACK_SKIP_ROWS");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_SKIP_PIXELS,"UNPACK_SKIP_PIXELS");
	HX_VISIT_MEMBER_NAME(GL_obj::PACK_ROW_LENGTH,"PACK_ROW_LENGTH");
	HX_VISIT_MEMBER_NAME(GL_obj::PACK_SKIP_ROWS,"PACK_SKIP_ROWS");
	HX_VISIT_MEMBER_NAME(GL_obj::PACK_SKIP_PIXELS,"PACK_SKIP_PIXELS");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_BINDING_3D,"TEXTURE_BINDING_3D");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_SKIP_IMAGES,"UNPACK_SKIP_IMAGES");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_IMAGE_HEIGHT,"UNPACK_IMAGE_HEIGHT");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_3D_TEXTURE_SIZE,"MAX_3D_TEXTURE_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_ELEMENTS_VERTICES,"MAX_ELEMENTS_VERTICES");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_ELEMENTS_INDICES,"MAX_ELEMENTS_INDICES");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_TEXTURE_LOD_BIAS,"MAX_TEXTURE_LOD_BIAS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_FRAGMENT_UNIFORM_COMPONENTS,"MAX_FRAGMENT_UNIFORM_COMPONENTS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VERTEX_UNIFORM_COMPONENTS,"MAX_VERTEX_UNIFORM_COMPONENTS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_ARRAY_TEXTURE_LAYERS,"MAX_ARRAY_TEXTURE_LAYERS");
	HX_VISIT_MEMBER_NAME(GL_obj::MIN_PROGRAM_TEXEL_OFFSET,"MIN_PROGRAM_TEXEL_OFFSET");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_PROGRAM_TEXEL_OFFSET,"MAX_PROGRAM_TEXEL_OFFSET");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VARYING_COMPONENTS,"MAX_VARYING_COMPONENTS");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAGMENT_SHADER_DERIVATIVE_HINT,"FRAGMENT_SHADER_DERIVATIVE_HINT");
	HX_VISIT_MEMBER_NAME(GL_obj::RASTERIZER_DISCARD,"RASTERIZER_DISCARD");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ARRAY_BINDING,"VERTEX_ARRAY_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VERTEX_OUTPUT_COMPONENTS,"MAX_VERTEX_OUTPUT_COMPONENTS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_FRAGMENT_INPUT_COMPONENTS,"MAX_FRAGMENT_INPUT_COMPONENTS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_SERVER_WAIT_TIMEOUT,"MAX_SERVER_WAIT_TIMEOUT");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_ELEMENT_INDEX,"MAX_ELEMENT_INDEX");
	HX_VISIT_MEMBER_NAME(GL_obj::RED,"RED");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB8,"RGB8");
	HX_VISIT_MEMBER_NAME(GL_obj::RGBA8,"RGBA8");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB10_A2,"RGB10_A2");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_3D,"TEXTURE_3D");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_WRAP_R,"TEXTURE_WRAP_R");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_MIN_LOD,"TEXTURE_MIN_LOD");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_MAX_LOD,"TEXTURE_MAX_LOD");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_BASE_LEVEL,"TEXTURE_BASE_LEVEL");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_MAX_LEVEL,"TEXTURE_MAX_LEVEL");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_COMPARE_MODE,"TEXTURE_COMPARE_MODE");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_COMPARE_FUNC,"TEXTURE_COMPARE_FUNC");
	HX_VISIT_MEMBER_NAME(GL_obj::SRGB,"SRGB");
	HX_VISIT_MEMBER_NAME(GL_obj::SRGB8,"SRGB8");
	HX_VISIT_MEMBER_NAME(GL_obj::SRGB8_ALPHA8,"SRGB8_ALPHA8");
	HX_VISIT_MEMBER_NAME(GL_obj::COMPARE_REF_TO_TEXTURE,"COMPARE_REF_TO_TEXTURE");
	HX_VISIT_MEMBER_NAME(GL_obj::RGBA32F,"RGBA32F");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB32F,"RGB32F");
	HX_VISIT_MEMBER_NAME(GL_obj::RGBA16F,"RGBA16F");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB16F,"RGB16F");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_2D_ARRAY,"TEXTURE_2D_ARRAY");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_BINDING_2D_ARRAY,"TEXTURE_BINDING_2D_ARRAY");
	HX_VISIT_MEMBER_NAME(GL_obj::R11F_G11F_B10F,"R11F_G11F_B10F");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB9_E5,"RGB9_E5");
	HX_VISIT_MEMBER_NAME(GL_obj::RGBA32UI,"RGBA32UI");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB32UI,"RGB32UI");
	HX_VISIT_MEMBER_NAME(GL_obj::RGBA16UI,"RGBA16UI");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB16UI,"RGB16UI");
	HX_VISIT_MEMBER_NAME(GL_obj::RGBA8UI,"RGBA8UI");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB8UI,"RGB8UI");
	HX_VISIT_MEMBER_NAME(GL_obj::RGBA32I,"RGBA32I");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB32I,"RGB32I");
	HX_VISIT_MEMBER_NAME(GL_obj::RGBA16I,"RGBA16I");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB16I,"RGB16I");
	HX_VISIT_MEMBER_NAME(GL_obj::RGBA8I,"RGBA8I");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB8I,"RGB8I");
	HX_VISIT_MEMBER_NAME(GL_obj::RED_INTEGER,"RED_INTEGER");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB_INTEGER,"RGB_INTEGER");
	HX_VISIT_MEMBER_NAME(GL_obj::RGBA_INTEGER,"RGBA_INTEGER");
	HX_VISIT_MEMBER_NAME(GL_obj::R8,"R8");
	HX_VISIT_MEMBER_NAME(GL_obj::RG8,"RG8");
	HX_VISIT_MEMBER_NAME(GL_obj::R16F,"R16F");
	HX_VISIT_MEMBER_NAME(GL_obj::R32F,"R32F");
	HX_VISIT_MEMBER_NAME(GL_obj::RG16F,"RG16F");
	HX_VISIT_MEMBER_NAME(GL_obj::RG32F,"RG32F");
	HX_VISIT_MEMBER_NAME(GL_obj::R8I,"R8I");
	HX_VISIT_MEMBER_NAME(GL_obj::R8UI,"R8UI");
	HX_VISIT_MEMBER_NAME(GL_obj::R16I,"R16I");
	HX_VISIT_MEMBER_NAME(GL_obj::R16UI,"R16UI");
	HX_VISIT_MEMBER_NAME(GL_obj::R32I,"R32I");
	HX_VISIT_MEMBER_NAME(GL_obj::R32UI,"R32UI");
	HX_VISIT_MEMBER_NAME(GL_obj::RG8I,"RG8I");
	HX_VISIT_MEMBER_NAME(GL_obj::RG8UI,"RG8UI");
	HX_VISIT_MEMBER_NAME(GL_obj::RG16I,"RG16I");
	HX_VISIT_MEMBER_NAME(GL_obj::RG16UI,"RG16UI");
	HX_VISIT_MEMBER_NAME(GL_obj::RG32I,"RG32I");
	HX_VISIT_MEMBER_NAME(GL_obj::RG32UI,"RG32UI");
	HX_VISIT_MEMBER_NAME(GL_obj::R8_SNORM,"R8_SNORM");
	HX_VISIT_MEMBER_NAME(GL_obj::RG8_SNORM,"RG8_SNORM");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB8_SNORM,"RGB8_SNORM");
	HX_VISIT_MEMBER_NAME(GL_obj::RGBA8_SNORM,"RGBA8_SNORM");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB10_A2UI,"RGB10_A2UI");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_IMMUTABLE_FORMAT,"TEXTURE_IMMUTABLE_FORMAT");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_IMMUTABLE_LEVELS,"TEXTURE_IMMUTABLE_LEVELS");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_INT_2_10_10_10_REV,"UNSIGNED_INT_2_10_10_10_REV");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_INT_10F_11F_11F_REV,"UNSIGNED_INT_10F_11F_11F_REV");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_INT_5_9_9_9_REV,"UNSIGNED_INT_5_9_9_9_REV");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_32_UNSIGNED_INT_24_8_REV,"FLOAT_32_UNSIGNED_INT_24_8_REV");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_INT_24_8,"UNSIGNED_INT_24_8");
	HX_VISIT_MEMBER_NAME(GL_obj::HALF_FLOAT,"HALF_FLOAT");
	HX_VISIT_MEMBER_NAME(GL_obj::RG,"RG");
	HX_VISIT_MEMBER_NAME(GL_obj::RG_INTEGER,"RG_INTEGER");
	HX_VISIT_MEMBER_NAME(GL_obj::INT_2_10_10_10_REV,"INT_2_10_10_10_REV");
	HX_VISIT_MEMBER_NAME(GL_obj::CURRENT_QUERY,"CURRENT_QUERY");
	HX_VISIT_MEMBER_NAME(GL_obj::QUERY_RESULT,"QUERY_RESULT");
	HX_VISIT_MEMBER_NAME(GL_obj::QUERY_RESULT_AVAILABLE,"QUERY_RESULT_AVAILABLE");
	HX_VISIT_MEMBER_NAME(GL_obj::ANY_SAMPLES_PASSED,"ANY_SAMPLES_PASSED");
	HX_VISIT_MEMBER_NAME(GL_obj::ANY_SAMPLES_PASSED_CONSERVATIVE,"ANY_SAMPLES_PASSED_CONSERVATIVE");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_DRAW_BUFFERS,"MAX_DRAW_BUFFERS");
	HX_VISIT_MEMBER_NAME(GL_obj::DRAW_BUFFER0,"DRAW_BUFFER0");
	HX_VISIT_MEMBER_NAME(GL_obj::DRAW_BUFFER1,"DRAW_BUFFER1");
	HX_VISIT_MEMBER_NAME(GL_obj::DRAW_BUFFER2,"DRAW_BUFFER2");
	HX_VISIT_MEMBER_NAME(GL_obj::DRAW_BUFFER3,"DRAW_BUFFER3");
	HX_VISIT_MEMBER_NAME(GL_obj::DRAW_BUFFER4,"DRAW_BUFFER4");
	HX_VISIT_MEMBER_NAME(GL_obj::DRAW_BUFFER5,"DRAW_BUFFER5");
	HX_VISIT_MEMBER_NAME(GL_obj::DRAW_BUFFER6,"DRAW_BUFFER6");
	HX_VISIT_MEMBER_NAME(GL_obj::DRAW_BUFFER7,"DRAW_BUFFER7");
	HX_VISIT_MEMBER_NAME(GL_obj::DRAW_BUFFER8,"DRAW_BUFFER8");
	HX_VISIT_MEMBER_NAME(GL_obj::DRAW_BUFFER9,"DRAW_BUFFER9");
	HX_VISIT_MEMBER_NAME(GL_obj::DRAW_BUFFER10,"DRAW_BUFFER10");
	HX_VISIT_MEMBER_NAME(GL_obj::DRAW_BUFFER11,"DRAW_BUFFER11");
	HX_VISIT_MEMBER_NAME(GL_obj::DRAW_BUFFER12,"DRAW_BUFFER12");
	HX_VISIT_MEMBER_NAME(GL_obj::DRAW_BUFFER13,"DRAW_BUFFER13");
	HX_VISIT_MEMBER_NAME(GL_obj::DRAW_BUFFER14,"DRAW_BUFFER14");
	HX_VISIT_MEMBER_NAME(GL_obj::DRAW_BUFFER15,"DRAW_BUFFER15");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_COLOR_ATTACHMENTS,"MAX_COLOR_ATTACHMENTS");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT1,"COLOR_ATTACHMENT1");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT2,"COLOR_ATTACHMENT2");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT3,"COLOR_ATTACHMENT3");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT4,"COLOR_ATTACHMENT4");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT5,"COLOR_ATTACHMENT5");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT6,"COLOR_ATTACHMENT6");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT7,"COLOR_ATTACHMENT7");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT8,"COLOR_ATTACHMENT8");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT9,"COLOR_ATTACHMENT9");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT10,"COLOR_ATTACHMENT10");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT11,"COLOR_ATTACHMENT11");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT12,"COLOR_ATTACHMENT12");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT13,"COLOR_ATTACHMENT13");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT14,"COLOR_ATTACHMENT14");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT15,"COLOR_ATTACHMENT15");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLER_3D,"SAMPLER_3D");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLER_2D_SHADOW,"SAMPLER_2D_SHADOW");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLER_2D_ARRAY,"SAMPLER_2D_ARRAY");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLER_2D_ARRAY_SHADOW,"SAMPLER_2D_ARRAY_SHADOW");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLER_CUBE_SHADOW,"SAMPLER_CUBE_SHADOW");
	HX_VISIT_MEMBER_NAME(GL_obj::INT_SAMPLER_2D,"INT_SAMPLER_2D");
	HX_VISIT_MEMBER_NAME(GL_obj::INT_SAMPLER_3D,"INT_SAMPLER_3D");
	HX_VISIT_MEMBER_NAME(GL_obj::INT_SAMPLER_CUBE,"INT_SAMPLER_CUBE");
	HX_VISIT_MEMBER_NAME(GL_obj::INT_SAMPLER_2D_ARRAY,"INT_SAMPLER_2D_ARRAY");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_INT_SAMPLER_2D,"UNSIGNED_INT_SAMPLER_2D");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_INT_SAMPLER_3D,"UNSIGNED_INT_SAMPLER_3D");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_INT_SAMPLER_CUBE,"UNSIGNED_INT_SAMPLER_CUBE");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_INT_SAMPLER_2D_ARRAY,"UNSIGNED_INT_SAMPLER_2D_ARRAY");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_SAMPLES,"MAX_SAMPLES");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLER_BINDING,"SAMPLER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::PIXEL_PACK_BUFFER,"PIXEL_PACK_BUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::PIXEL_UNPACK_BUFFER,"PIXEL_UNPACK_BUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::PIXEL_PACK_BUFFER_BINDING,"PIXEL_PACK_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::PIXEL_UNPACK_BUFFER_BINDING,"PIXEL_UNPACK_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::COPY_READ_BUFFER,"COPY_READ_BUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::COPY_WRITE_BUFFER,"COPY_WRITE_BUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::COPY_READ_BUFFER_BINDING,"COPY_READ_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::COPY_WRITE_BUFFER_BINDING,"COPY_WRITE_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_MAT2x3,"FLOAT_MAT2x3");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_MAT2x4,"FLOAT_MAT2x4");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_MAT3x2,"FLOAT_MAT3x2");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_MAT3x4,"FLOAT_MAT3x4");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_MAT4x2,"FLOAT_MAT4x2");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_MAT4x3,"FLOAT_MAT4x3");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_INT_VEC2,"UNSIGNED_INT_VEC2");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_INT_VEC3,"UNSIGNED_INT_VEC3");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_INT_VEC4,"UNSIGNED_INT_VEC4");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_NORMALIZED,"UNSIGNED_NORMALIZED");
	HX_VISIT_MEMBER_NAME(GL_obj::SIGNED_NORMALIZED,"SIGNED_NORMALIZED");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_INTEGER,"VERTEX_ATTRIB_ARRAY_INTEGER");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_DIVISOR,"VERTEX_ATTRIB_ARRAY_DIVISOR");
	HX_VISIT_MEMBER_NAME(GL_obj::TRANSFORM_FEEDBACK_BUFFER_MODE,"TRANSFORM_FEEDBACK_BUFFER_MODE");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS,"MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS");
	HX_VISIT_MEMBER_NAME(GL_obj::TRANSFORM_FEEDBACK_VARYINGS,"TRANSFORM_FEEDBACK_VARYINGS");
	HX_VISIT_MEMBER_NAME(GL_obj::TRANSFORM_FEEDBACK_BUFFER_START,"TRANSFORM_FEEDBACK_BUFFER_START");
	HX_VISIT_MEMBER_NAME(GL_obj::TRANSFORM_FEEDBACK_BUFFER_SIZE,"TRANSFORM_FEEDBACK_BUFFER_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN,"TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS,"MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS,"MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS");
	HX_VISIT_MEMBER_NAME(GL_obj::INTERLEAVED_ATTRIBS,"INTERLEAVED_ATTRIBS");
	HX_VISIT_MEMBER_NAME(GL_obj::SEPARATE_ATTRIBS,"SEPARATE_ATTRIBS");
	HX_VISIT_MEMBER_NAME(GL_obj::TRANSFORM_FEEDBACK_BUFFER,"TRANSFORM_FEEDBACK_BUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::TRANSFORM_FEEDBACK_BUFFER_BINDING,"TRANSFORM_FEEDBACK_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::TRANSFORM_FEEDBACK,"TRANSFORM_FEEDBACK");
	HX_VISIT_MEMBER_NAME(GL_obj::TRANSFORM_FEEDBACK_PAUSED,"TRANSFORM_FEEDBACK_PAUSED");
	HX_VISIT_MEMBER_NAME(GL_obj::TRANSFORM_FEEDBACK_ACTIVE,"TRANSFORM_FEEDBACK_ACTIVE");
	HX_VISIT_MEMBER_NAME(GL_obj::TRANSFORM_FEEDBACK_BINDING,"TRANSFORM_FEEDBACK_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING,"FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE,"FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_RED_SIZE,"FRAMEBUFFER_ATTACHMENT_RED_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_GREEN_SIZE,"FRAMEBUFFER_ATTACHMENT_GREEN_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_BLUE_SIZE,"FRAMEBUFFER_ATTACHMENT_BLUE_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE,"FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE,"FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE,"FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_DEFAULT,"FRAMEBUFFER_DEFAULT");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH24_STENCIL8,"DEPTH24_STENCIL8");
	HX_VISIT_MEMBER_NAME(GL_obj::DRAW_FRAMEBUFFER_BINDING,"DRAW_FRAMEBUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::READ_FRAMEBUFFER,"READ_FRAMEBUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::DRAW_FRAMEBUFFER,"DRAW_FRAMEBUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::READ_FRAMEBUFFER_BINDING,"READ_FRAMEBUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_SAMPLES,"RENDERBUFFER_SAMPLES");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_MULTISAMPLE,"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE");
	HX_VISIT_MEMBER_NAME(GL_obj::UNIFORM_BUFFER,"UNIFORM_BUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::UNIFORM_BUFFER_BINDING,"UNIFORM_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::UNIFORM_BUFFER_START,"UNIFORM_BUFFER_START");
	HX_VISIT_MEMBER_NAME(GL_obj::UNIFORM_BUFFER_SIZE,"UNIFORM_BUFFER_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VERTEX_UNIFORM_BLOCKS,"MAX_VERTEX_UNIFORM_BLOCKS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_FRAGMENT_UNIFORM_BLOCKS,"MAX_FRAGMENT_UNIFORM_BLOCKS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_COMBINED_UNIFORM_BLOCKS,"MAX_COMBINED_UNIFORM_BLOCKS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_UNIFORM_BUFFER_BINDINGS,"MAX_UNIFORM_BUFFER_BINDINGS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_UNIFORM_BLOCK_SIZE,"MAX_UNIFORM_BLOCK_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS,"MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS,"MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS");
	HX_VISIT_MEMBER_NAME(GL_obj::UNIFORM_BUFFER_OFFSET_ALIGNMENT,"UNIFORM_BUFFER_OFFSET_ALIGNMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::ACTIVE_UNIFORM_BLOCKS,"ACTIVE_UNIFORM_BLOCKS");
	HX_VISIT_MEMBER_NAME(GL_obj::UNIFORM_TYPE,"UNIFORM_TYPE");
	HX_VISIT_MEMBER_NAME(GL_obj::UNIFORM_SIZE,"UNIFORM_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::UNIFORM_BLOCK_INDEX,"UNIFORM_BLOCK_INDEX");
	HX_VISIT_MEMBER_NAME(GL_obj::UNIFORM_OFFSET,"UNIFORM_OFFSET");
	HX_VISIT_MEMBER_NAME(GL_obj::UNIFORM_ARRAY_STRIDE,"UNIFORM_ARRAY_STRIDE");
	HX_VISIT_MEMBER_NAME(GL_obj::UNIFORM_MATRIX_STRIDE,"UNIFORM_MATRIX_STRIDE");
	HX_VISIT_MEMBER_NAME(GL_obj::UNIFORM_IS_ROW_MAJOR,"UNIFORM_IS_ROW_MAJOR");
	HX_VISIT_MEMBER_NAME(GL_obj::UNIFORM_BLOCK_BINDING,"UNIFORM_BLOCK_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::UNIFORM_BLOCK_DATA_SIZE,"UNIFORM_BLOCK_DATA_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::UNIFORM_BLOCK_ACTIVE_UNIFORMS,"UNIFORM_BLOCK_ACTIVE_UNIFORMS");
	HX_VISIT_MEMBER_NAME(GL_obj::UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES,"UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES");
	HX_VISIT_MEMBER_NAME(GL_obj::UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER,"UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER");
	HX_VISIT_MEMBER_NAME(GL_obj::UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER,"UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER");
	HX_VISIT_MEMBER_NAME(GL_obj::OBJECT_TYPE,"OBJECT_TYPE");
	HX_VISIT_MEMBER_NAME(GL_obj::SYNC_CONDITION,"SYNC_CONDITION");
	HX_VISIT_MEMBER_NAME(GL_obj::SYNC_STATUS,"SYNC_STATUS");
	HX_VISIT_MEMBER_NAME(GL_obj::SYNC_FLAGS,"SYNC_FLAGS");
	HX_VISIT_MEMBER_NAME(GL_obj::SYNC_FENCE,"SYNC_FENCE");
	HX_VISIT_MEMBER_NAME(GL_obj::SYNC_GPU_COMMANDS_COMPLETE,"SYNC_GPU_COMMANDS_COMPLETE");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNALED,"UNSIGNALED");
	HX_VISIT_MEMBER_NAME(GL_obj::SIGNALED,"SIGNALED");
	HX_VISIT_MEMBER_NAME(GL_obj::ALREADY_SIGNALED,"ALREADY_SIGNALED");
	HX_VISIT_MEMBER_NAME(GL_obj::TIMEOUT_EXPIRED,"TIMEOUT_EXPIRED");
	HX_VISIT_MEMBER_NAME(GL_obj::CONDITION_SATISFIED,"CONDITION_SATISFIED");
	HX_VISIT_MEMBER_NAME(GL_obj::WAIT_FAILED,"WAIT_FAILED");
	HX_VISIT_MEMBER_NAME(GL_obj::SYNC_FLUSH_COMMANDS_BIT,"SYNC_FLUSH_COMMANDS_BIT");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR,"COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH,"DEPTH");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL,"STENCIL");
	HX_VISIT_MEMBER_NAME(GL_obj::MIN,"MIN");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX,"MAX");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_COMPONENT24,"DEPTH_COMPONENT24");
	HX_VISIT_MEMBER_NAME(GL_obj::STREAM_READ,"STREAM_READ");
	HX_VISIT_MEMBER_NAME(GL_obj::STREAM_COPY,"STREAM_COPY");
	HX_VISIT_MEMBER_NAME(GL_obj::STATIC_READ,"STATIC_READ");
	HX_VISIT_MEMBER_NAME(GL_obj::STATIC_COPY,"STATIC_COPY");
	HX_VISIT_MEMBER_NAME(GL_obj::DYNAMIC_READ,"DYNAMIC_READ");
	HX_VISIT_MEMBER_NAME(GL_obj::DYNAMIC_COPY,"DYNAMIC_COPY");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_COMPONENT32F,"DEPTH_COMPONENT32F");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH32F_STENCIL8,"DEPTH32F_STENCIL8");
	HX_VISIT_MEMBER_NAME(GL_obj::INVALID_INDEX,"INVALID_INDEX");
	HX_VISIT_MEMBER_NAME(GL_obj::TIMEOUT_IGNORED,"TIMEOUT_IGNORED");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_CLIENT_WAIT_TIMEOUT_WEBGL,"MAX_CLIENT_WAIT_TIMEOUT_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::context,"context");
	HX_VISIT_MEMBER_NAME(GL_obj::type,"type");
	HX_VISIT_MEMBER_NAME(GL_obj::version,"version");
	HX_VISIT_MEMBER_NAME(GL_obj::__currentProgram,"__currentProgram");
};

#endif

hx::Class GL_obj::__mClass;

static ::String sStaticFields[] = {
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
	HX_HCSTRING("ACTIVE_ATTRIBUTES","\xf0","\xe5","\xc7","\x4a"),
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
	HX_HCSTRING("TEXTURE_2D","\x16","\x0c","\xf8","\xa2"),
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
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("__currentProgram","\x6b","\x4a","\xcd","\x35"),
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
	HX_HCSTRING("blitFramebuffer","\xb8","\x26","\x9e","\xee"),
	HX_HCSTRING("blendColor","\x52","\x33","\xb4","\xe2"),
	HX_HCSTRING("blendEquation","\xfd","\x98","\xad","\x02"),
	HX_HCSTRING("blendEquationSeparate","\x80","\x39","\x68","\xa7"),
	HX_HCSTRING("blendFunc","\x35","\xfc","\x9b","\x07"),
	HX_HCSTRING("blendFuncSeparate","\xb8","\x94","\xc0","\xca"),
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
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	HX_HCSTRING("get_version","\x2f","\x47","\xec","\x02"),
	HX_HCSTRING("__getObjectID","\xf0","\x2f","\x98","\xf1"),
	::String(null()) };

void GL_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.GL","\x1a","\xed","\x24","\xf2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GL_obj::__GetStatic;
	__mClass->mSetStaticField = &GL_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GL_obj >;
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

void GL_obj::__boot()
{
	DEPTH_BUFFER_BIT= (int)256;
	STENCIL_BUFFER_BIT= (int)1024;
	COLOR_BUFFER_BIT= (int)16384;
	POINTS= (int)0;
	LINES= (int)1;
	LINE_LOOP= (int)2;
	LINE_STRIP= (int)3;
	TRIANGLES= (int)4;
	TRIANGLE_STRIP= (int)5;
	TRIANGLE_FAN= (int)6;
	ZERO= (int)0;
	ONE= (int)1;
	SRC_COLOR= (int)768;
	ONE_MINUS_SRC_COLOR= (int)769;
	SRC_ALPHA= (int)770;
	ONE_MINUS_SRC_ALPHA= (int)771;
	DST_ALPHA= (int)772;
	ONE_MINUS_DST_ALPHA= (int)773;
	DST_COLOR= (int)774;
	ONE_MINUS_DST_COLOR= (int)775;
	SRC_ALPHA_SATURATE= (int)776;
	FUNC_ADD= (int)32774;
	BLEND_EQUATION= (int)32777;
	BLEND_EQUATION_RGB= (int)32777;
	BLEND_EQUATION_ALPHA= (int)34877;
	FUNC_SUBTRACT= (int)32778;
	FUNC_REVERSE_SUBTRACT= (int)32779;
	BLEND_DST_RGB= (int)32968;
	BLEND_SRC_RGB= (int)32969;
	BLEND_DST_ALPHA= (int)32970;
	BLEND_SRC_ALPHA= (int)32971;
	CONSTANT_COLOR= (int)32769;
	ONE_MINUS_CONSTANT_COLOR= (int)32770;
	CONSTANT_ALPHA= (int)32771;
	ONE_MINUS_CONSTANT_ALPHA= (int)32772;
	BLEND_COLOR= (int)32773;
	ARRAY_BUFFER= (int)34962;
	ELEMENT_ARRAY_BUFFER= (int)34963;
	ARRAY_BUFFER_BINDING= (int)34964;
	ELEMENT_ARRAY_BUFFER_BINDING= (int)34965;
	STREAM_DRAW= (int)35040;
	STATIC_DRAW= (int)35044;
	DYNAMIC_DRAW= (int)35048;
	BUFFER_SIZE= (int)34660;
	BUFFER_USAGE= (int)34661;
	CURRENT_VERTEX_ATTRIB= (int)34342;
	FRONT= (int)1028;
	BACK= (int)1029;
	FRONT_AND_BACK= (int)1032;
	CULL_FACE= (int)2884;
	BLEND= (int)3042;
	DITHER= (int)3024;
	STENCIL_TEST= (int)2960;
	DEPTH_TEST= (int)2929;
	SCISSOR_TEST= (int)3089;
	POLYGON_OFFSET_FILL= (int)32823;
	SAMPLE_ALPHA_TO_COVERAGE= (int)32926;
	SAMPLE_COVERAGE= (int)32928;
	NO_ERROR= (int)0;
	INVALID_ENUM= (int)1280;
	INVALID_VALUE= (int)1281;
	INVALID_OPERATION= (int)1282;
	OUT_OF_MEMORY= (int)1285;
	CW= (int)2304;
	CCW= (int)2305;
	LINE_WIDTH= (int)2849;
	ALIASED_POINT_SIZE_RANGE= (int)33901;
	ALIASED_LINE_WIDTH_RANGE= (int)33902;
	CULL_FACE_MODE= (int)2885;
	FRONT_FACE= (int)2886;
	DEPTH_RANGE= (int)2928;
	DEPTH_WRITEMASK= (int)2930;
	DEPTH_CLEAR_VALUE= (int)2931;
	DEPTH_FUNC= (int)2932;
	STENCIL_CLEAR_VALUE= (int)2961;
	STENCIL_FUNC= (int)2962;
	STENCIL_FAIL= (int)2964;
	STENCIL_PASS_DEPTH_FAIL= (int)2965;
	STENCIL_PASS_DEPTH_PASS= (int)2966;
	STENCIL_REF= (int)2967;
	STENCIL_VALUE_MASK= (int)2963;
	STENCIL_WRITEMASK= (int)2968;
	STENCIL_BACK_FUNC= (int)34816;
	STENCIL_BACK_FAIL= (int)34817;
	STENCIL_BACK_PASS_DEPTH_FAIL= (int)34818;
	STENCIL_BACK_PASS_DEPTH_PASS= (int)34819;
	STENCIL_BACK_REF= (int)36003;
	STENCIL_BACK_VALUE_MASK= (int)36004;
	STENCIL_BACK_WRITEMASK= (int)36005;
	VIEWPORT= (int)2978;
	SCISSOR_BOX= (int)3088;
	COLOR_CLEAR_VALUE= (int)3106;
	COLOR_WRITEMASK= (int)3107;
	UNPACK_ALIGNMENT= (int)3317;
	PACK_ALIGNMENT= (int)3333;
	MAX_TEXTURE_SIZE= (int)3379;
	MAX_VIEWPORT_DIMS= (int)3386;
	SUBPIXEL_BITS= (int)3408;
	RED_BITS= (int)3410;
	GREEN_BITS= (int)3411;
	BLUE_BITS= (int)3412;
	ALPHA_BITS= (int)3413;
	DEPTH_BITS= (int)3414;
	STENCIL_BITS= (int)3415;
	POLYGON_OFFSET_UNITS= (int)10752;
	POLYGON_OFFSET_FACTOR= (int)32824;
	TEXTURE_BINDING_2D= (int)32873;
	SAMPLE_BUFFERS= (int)32936;
	SAMPLES= (int)32937;
	SAMPLE_COVERAGE_VALUE= (int)32938;
	SAMPLE_COVERAGE_INVERT= (int)32939;
	NUM_COMPRESSED_TEXTURE_FORMATS= (int)34466;
	COMPRESSED_TEXTURE_FORMATS= (int)34467;
	DONT_CARE= (int)4352;
	FASTEST= (int)4353;
	NICEST= (int)4354;
	GENERATE_MIPMAP_HINT= (int)33170;
	BYTE= (int)5120;
	UNSIGNED_BYTE= (int)5121;
	SHORT= (int)5122;
	UNSIGNED_SHORT= (int)5123;
	INT= (int)5124;
	UNSIGNED_INT= (int)5125;
	FLOAT= (int)5126;
	DEPTH_COMPONENT= (int)6402;
	ALPHA= (int)6406;
	RGB= (int)6407;
	RGBA= (int)6408;
	LUMINANCE= (int)6409;
	LUMINANCE_ALPHA= (int)6410;
	UNSIGNED_SHORT_4_4_4_4= (int)32819;
	UNSIGNED_SHORT_5_5_5_1= (int)32820;
	UNSIGNED_SHORT_5_6_5= (int)33635;
	FRAGMENT_SHADER= (int)35632;
	VERTEX_SHADER= (int)35633;
	MAX_VERTEX_ATTRIBS= (int)34921;
	MAX_VERTEX_UNIFORM_VECTORS= (int)36347;
	MAX_VARYING_VECTORS= (int)36348;
	MAX_COMBINED_TEXTURE_IMAGE_UNITS= (int)35661;
	MAX_VERTEX_TEXTURE_IMAGE_UNITS= (int)35660;
	MAX_TEXTURE_IMAGE_UNITS= (int)34930;
	MAX_FRAGMENT_UNIFORM_VECTORS= (int)36349;
	SHADER_TYPE= (int)35663;
	DELETE_STATUS= (int)35712;
	LINK_STATUS= (int)35714;
	VALIDATE_STATUS= (int)35715;
	ATTACHED_SHADERS= (int)35717;
	ACTIVE_UNIFORMS= (int)35718;
	ACTIVE_ATTRIBUTES= (int)35721;
	SHADING_LANGUAGE_VERSION= (int)35724;
	CURRENT_PROGRAM= (int)35725;
	NEVER= (int)512;
	LESS= (int)513;
	EQUAL= (int)514;
	LEQUAL= (int)515;
	GREATER= (int)516;
	NOTEQUAL= (int)517;
	GEQUAL= (int)518;
	ALWAYS= (int)519;
	KEEP= (int)7680;
	REPLACE= (int)7681;
	INCR= (int)7682;
	DECR= (int)7683;
	INVERT= (int)5386;
	INCR_WRAP= (int)34055;
	DECR_WRAP= (int)34056;
	VENDOR= (int)7936;
	RENDERER= (int)7937;
	VERSION= (int)7938;
	EXTENSIONS= (int)7939;
	NEAREST= (int)9728;
	LINEAR= (int)9729;
	NEAREST_MIPMAP_NEAREST= (int)9984;
	LINEAR_MIPMAP_NEAREST= (int)9985;
	NEAREST_MIPMAP_LINEAR= (int)9986;
	LINEAR_MIPMAP_LINEAR= (int)9987;
	TEXTURE_MAG_FILTER= (int)10240;
	TEXTURE_MIN_FILTER= (int)10241;
	TEXTURE_WRAP_S= (int)10242;
	TEXTURE_WRAP_T= (int)10243;
	TEXTURE_2D= (int)3553;
	TEXTURE= (int)5890;
	TEXTURE_CUBE_MAP= (int)34067;
	TEXTURE_BINDING_CUBE_MAP= (int)34068;
	TEXTURE_CUBE_MAP_POSITIVE_X= (int)34069;
	TEXTURE_CUBE_MAP_NEGATIVE_X= (int)34070;
	TEXTURE_CUBE_MAP_POSITIVE_Y= (int)34071;
	TEXTURE_CUBE_MAP_NEGATIVE_Y= (int)34072;
	TEXTURE_CUBE_MAP_POSITIVE_Z= (int)34073;
	TEXTURE_CUBE_MAP_NEGATIVE_Z= (int)34074;
	MAX_CUBE_MAP_TEXTURE_SIZE= (int)34076;
	TEXTURE0= (int)33984;
	TEXTURE1= (int)33985;
	TEXTURE2= (int)33986;
	TEXTURE3= (int)33987;
	TEXTURE4= (int)33988;
	TEXTURE5= (int)33989;
	TEXTURE6= (int)33990;
	TEXTURE7= (int)33991;
	TEXTURE8= (int)33992;
	TEXTURE9= (int)33993;
	TEXTURE10= (int)33994;
	TEXTURE11= (int)33995;
	TEXTURE12= (int)33996;
	TEXTURE13= (int)33997;
	TEXTURE14= (int)33998;
	TEXTURE15= (int)33999;
	TEXTURE16= (int)34000;
	TEXTURE17= (int)34001;
	TEXTURE18= (int)34002;
	TEXTURE19= (int)34003;
	TEXTURE20= (int)34004;
	TEXTURE21= (int)34005;
	TEXTURE22= (int)34006;
	TEXTURE23= (int)34007;
	TEXTURE24= (int)34008;
	TEXTURE25= (int)34009;
	TEXTURE26= (int)34010;
	TEXTURE27= (int)34011;
	TEXTURE28= (int)34012;
	TEXTURE29= (int)34013;
	TEXTURE30= (int)34014;
	TEXTURE31= (int)34015;
	ACTIVE_TEXTURE= (int)34016;
	REPEAT= (int)10497;
	CLAMP_TO_EDGE= (int)33071;
	MIRRORED_REPEAT= (int)33648;
	FLOAT_VEC2= (int)35664;
	FLOAT_VEC3= (int)35665;
	FLOAT_VEC4= (int)35666;
	INT_VEC2= (int)35667;
	INT_VEC3= (int)35668;
	INT_VEC4= (int)35669;
	BOOL= (int)35670;
	BOOL_VEC2= (int)35671;
	BOOL_VEC3= (int)35672;
	BOOL_VEC4= (int)35673;
	FLOAT_MAT2= (int)35674;
	FLOAT_MAT3= (int)35675;
	FLOAT_MAT4= (int)35676;
	SAMPLER_2D= (int)35678;
	SAMPLER_CUBE= (int)35680;
	VERTEX_ATTRIB_ARRAY_ENABLED= (int)34338;
	VERTEX_ATTRIB_ARRAY_SIZE= (int)34339;
	VERTEX_ATTRIB_ARRAY_STRIDE= (int)34340;
	VERTEX_ATTRIB_ARRAY_TYPE= (int)34341;
	VERTEX_ATTRIB_ARRAY_NORMALIZED= (int)34922;
	VERTEX_ATTRIB_ARRAY_POINTER= (int)34373;
	VERTEX_ATTRIB_ARRAY_BUFFER_BINDING= (int)34975;
	IMPLEMENTATION_COLOR_READ_TYPE= (int)35738;
	IMPLEMENTATION_COLOR_READ_FORMAT= (int)35739;
	VERTEX_PROGRAM_POINT_SIZE= (int)34370;
	POINT_SPRITE= (int)34913;
	COMPILE_STATUS= (int)35713;
	LOW_FLOAT= (int)36336;
	MEDIUM_FLOAT= (int)36337;
	HIGH_FLOAT= (int)36338;
	LOW_INT= (int)36339;
	MEDIUM_INT= (int)36340;
	HIGH_INT= (int)36341;
	FRAMEBUFFER= (int)36160;
	RENDERBUFFER= (int)36161;
	RGBA4= (int)32854;
	RGB5_A1= (int)32855;
	RGB565= (int)36194;
	DEPTH_COMPONENT16= (int)33189;
	STENCIL_INDEX= (int)6401;
	STENCIL_INDEX8= (int)36168;
	DEPTH_STENCIL= (int)34041;
	RENDERBUFFER_WIDTH= (int)36162;
	RENDERBUFFER_HEIGHT= (int)36163;
	RENDERBUFFER_INTERNAL_FORMAT= (int)36164;
	RENDERBUFFER_RED_SIZE= (int)36176;
	RENDERBUFFER_GREEN_SIZE= (int)36177;
	RENDERBUFFER_BLUE_SIZE= (int)36178;
	RENDERBUFFER_ALPHA_SIZE= (int)36179;
	RENDERBUFFER_DEPTH_SIZE= (int)36180;
	RENDERBUFFER_STENCIL_SIZE= (int)36181;
	FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE= (int)36048;
	FRAMEBUFFER_ATTACHMENT_OBJECT_NAME= (int)36049;
	FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL= (int)36050;
	FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE= (int)36051;
	COLOR_ATTACHMENT0= (int)36064;
	DEPTH_ATTACHMENT= (int)36096;
	STENCIL_ATTACHMENT= (int)36128;
	DEPTH_STENCIL_ATTACHMENT= (int)33306;
	NONE= (int)0;
	FRAMEBUFFER_COMPLETE= (int)36053;
	FRAMEBUFFER_INCOMPLETE_ATTACHMENT= (int)36054;
	FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT= (int)36055;
	FRAMEBUFFER_INCOMPLETE_DIMENSIONS= (int)36057;
	FRAMEBUFFER_UNSUPPORTED= (int)36061;
	FRAMEBUFFER_BINDING= (int)36006;
	RENDERBUFFER_BINDING= (int)36007;
	MAX_RENDERBUFFER_SIZE= (int)34024;
	INVALID_FRAMEBUFFER_OPERATION= (int)1286;
	UNPACK_FLIP_Y_WEBGL= (int)37440;
	UNPACK_PREMULTIPLY_ALPHA_WEBGL= (int)37441;
	CONTEXT_LOST_WEBGL= (int)37442;
	UNPACK_COLORSPACE_CONVERSION_WEBGL= (int)37443;
	BROWSER_DEFAULT_WEBGL= (int)37444;
	READ_BUFFER= (int)3074;
	UNPACK_ROW_LENGTH= (int)3314;
	UNPACK_SKIP_ROWS= (int)3315;
	UNPACK_SKIP_PIXELS= (int)3316;
	PACK_ROW_LENGTH= (int)3330;
	PACK_SKIP_ROWS= (int)3331;
	PACK_SKIP_PIXELS= (int)3332;
	TEXTURE_BINDING_3D= (int)32874;
	UNPACK_SKIP_IMAGES= (int)32877;
	UNPACK_IMAGE_HEIGHT= (int)32878;
	MAX_3D_TEXTURE_SIZE= (int)32883;
	MAX_ELEMENTS_VERTICES= (int)33000;
	MAX_ELEMENTS_INDICES= (int)33001;
	MAX_TEXTURE_LOD_BIAS= (int)34045;
	MAX_FRAGMENT_UNIFORM_COMPONENTS= (int)35657;
	MAX_VERTEX_UNIFORM_COMPONENTS= (int)35658;
	MAX_ARRAY_TEXTURE_LAYERS= (int)35071;
	MIN_PROGRAM_TEXEL_OFFSET= (int)35076;
	MAX_PROGRAM_TEXEL_OFFSET= (int)35077;
	MAX_VARYING_COMPONENTS= (int)35659;
	FRAGMENT_SHADER_DERIVATIVE_HINT= (int)35723;
	RASTERIZER_DISCARD= (int)35977;
	VERTEX_ARRAY_BINDING= (int)34229;
	MAX_VERTEX_OUTPUT_COMPONENTS= (int)37154;
	MAX_FRAGMENT_INPUT_COMPONENTS= (int)37157;
	MAX_SERVER_WAIT_TIMEOUT= (int)37137;
	MAX_ELEMENT_INDEX= (int)36203;
	RED= (int)6403;
	RGB8= (int)32849;
	RGBA8= (int)32856;
	RGB10_A2= (int)32857;
	TEXTURE_3D= (int)32879;
	TEXTURE_WRAP_R= (int)32882;
	TEXTURE_MIN_LOD= (int)33082;
	TEXTURE_MAX_LOD= (int)33083;
	TEXTURE_BASE_LEVEL= (int)33084;
	TEXTURE_MAX_LEVEL= (int)33085;
	TEXTURE_COMPARE_MODE= (int)34892;
	TEXTURE_COMPARE_FUNC= (int)34893;
	SRGB= (int)35904;
	SRGB8= (int)35905;
	SRGB8_ALPHA8= (int)35907;
	COMPARE_REF_TO_TEXTURE= (int)34894;
	RGBA32F= (int)34836;
	RGB32F= (int)34837;
	RGBA16F= (int)34842;
	RGB16F= (int)34843;
	TEXTURE_2D_ARRAY= (int)35866;
	TEXTURE_BINDING_2D_ARRAY= (int)35869;
	R11F_G11F_B10F= (int)35898;
	RGB9_E5= (int)35901;
	RGBA32UI= (int)36208;
	RGB32UI= (int)36209;
	RGBA16UI= (int)36214;
	RGB16UI= (int)36215;
	RGBA8UI= (int)36220;
	RGB8UI= (int)36221;
	RGBA32I= (int)36226;
	RGB32I= (int)36227;
	RGBA16I= (int)36232;
	RGB16I= (int)36233;
	RGBA8I= (int)36238;
	RGB8I= (int)36239;
	RED_INTEGER= (int)36244;
	RGB_INTEGER= (int)36248;
	RGBA_INTEGER= (int)36249;
	R8= (int)33321;
	RG8= (int)33323;
	R16F= (int)33325;
	R32F= (int)33326;
	RG16F= (int)33327;
	RG32F= (int)33328;
	R8I= (int)33329;
	R8UI= (int)33330;
	R16I= (int)33331;
	R16UI= (int)33332;
	R32I= (int)33333;
	R32UI= (int)33334;
	RG8I= (int)33335;
	RG8UI= (int)33336;
	RG16I= (int)33337;
	RG16UI= (int)33338;
	RG32I= (int)33339;
	RG32UI= (int)33340;
	R8_SNORM= (int)36756;
	RG8_SNORM= (int)36757;
	RGB8_SNORM= (int)36758;
	RGBA8_SNORM= (int)36759;
	RGB10_A2UI= (int)36975;
	TEXTURE_IMMUTABLE_FORMAT= (int)37167;
	TEXTURE_IMMUTABLE_LEVELS= (int)33503;
	UNSIGNED_INT_2_10_10_10_REV= (int)33640;
	UNSIGNED_INT_10F_11F_11F_REV= (int)35899;
	UNSIGNED_INT_5_9_9_9_REV= (int)35902;
	FLOAT_32_UNSIGNED_INT_24_8_REV= (int)36269;
	UNSIGNED_INT_24_8= (int)34042;
	HALF_FLOAT= (int)5131;
	RG= (int)33319;
	RG_INTEGER= (int)33320;
	INT_2_10_10_10_REV= (int)36255;
	CURRENT_QUERY= (int)34917;
	QUERY_RESULT= (int)34918;
	QUERY_RESULT_AVAILABLE= (int)34919;
	ANY_SAMPLES_PASSED= (int)35887;
	ANY_SAMPLES_PASSED_CONSERVATIVE= (int)36202;
	MAX_DRAW_BUFFERS= (int)34852;
	DRAW_BUFFER0= (int)34853;
	DRAW_BUFFER1= (int)34854;
	DRAW_BUFFER2= (int)34855;
	DRAW_BUFFER3= (int)34856;
	DRAW_BUFFER4= (int)34857;
	DRAW_BUFFER5= (int)34858;
	DRAW_BUFFER6= (int)34859;
	DRAW_BUFFER7= (int)34860;
	DRAW_BUFFER8= (int)34861;
	DRAW_BUFFER9= (int)34862;
	DRAW_BUFFER10= (int)34863;
	DRAW_BUFFER11= (int)34864;
	DRAW_BUFFER12= (int)34865;
	DRAW_BUFFER13= (int)34866;
	DRAW_BUFFER14= (int)34867;
	DRAW_BUFFER15= (int)34868;
	MAX_COLOR_ATTACHMENTS= (int)36063;
	COLOR_ATTACHMENT1= (int)36065;
	COLOR_ATTACHMENT2= (int)36066;
	COLOR_ATTACHMENT3= (int)36067;
	COLOR_ATTACHMENT4= (int)36068;
	COLOR_ATTACHMENT5= (int)36069;
	COLOR_ATTACHMENT6= (int)36070;
	COLOR_ATTACHMENT7= (int)36071;
	COLOR_ATTACHMENT8= (int)36072;
	COLOR_ATTACHMENT9= (int)36073;
	COLOR_ATTACHMENT10= (int)36074;
	COLOR_ATTACHMENT11= (int)36075;
	COLOR_ATTACHMENT12= (int)36076;
	COLOR_ATTACHMENT13= (int)36077;
	COLOR_ATTACHMENT14= (int)36078;
	COLOR_ATTACHMENT15= (int)36079;
	SAMPLER_3D= (int)35679;
	SAMPLER_2D_SHADOW= (int)35682;
	SAMPLER_2D_ARRAY= (int)36289;
	SAMPLER_2D_ARRAY_SHADOW= (int)36292;
	SAMPLER_CUBE_SHADOW= (int)36293;
	INT_SAMPLER_2D= (int)36298;
	INT_SAMPLER_3D= (int)36299;
	INT_SAMPLER_CUBE= (int)36300;
	INT_SAMPLER_2D_ARRAY= (int)36303;
	UNSIGNED_INT_SAMPLER_2D= (int)36306;
	UNSIGNED_INT_SAMPLER_3D= (int)36307;
	UNSIGNED_INT_SAMPLER_CUBE= (int)36308;
	UNSIGNED_INT_SAMPLER_2D_ARRAY= (int)36311;
	MAX_SAMPLES= (int)36183;
	SAMPLER_BINDING= (int)35097;
	PIXEL_PACK_BUFFER= (int)35051;
	PIXEL_UNPACK_BUFFER= (int)35052;
	PIXEL_PACK_BUFFER_BINDING= (int)35053;
	PIXEL_UNPACK_BUFFER_BINDING= (int)35055;
	COPY_READ_BUFFER= (int)36662;
	COPY_WRITE_BUFFER= (int)36663;
	COPY_READ_BUFFER_BINDING= (int)36662;
	COPY_WRITE_BUFFER_BINDING= (int)36663;
	FLOAT_MAT2x3= (int)35685;
	FLOAT_MAT2x4= (int)35686;
	FLOAT_MAT3x2= (int)35687;
	FLOAT_MAT3x4= (int)35688;
	FLOAT_MAT4x2= (int)35689;
	FLOAT_MAT4x3= (int)35690;
	UNSIGNED_INT_VEC2= (int)36294;
	UNSIGNED_INT_VEC3= (int)36295;
	UNSIGNED_INT_VEC4= (int)36296;
	UNSIGNED_NORMALIZED= (int)35863;
	SIGNED_NORMALIZED= (int)36764;
	VERTEX_ATTRIB_ARRAY_INTEGER= (int)35069;
	VERTEX_ATTRIB_ARRAY_DIVISOR= (int)35070;
	TRANSFORM_FEEDBACK_BUFFER_MODE= (int)35967;
	MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS= (int)35968;
	TRANSFORM_FEEDBACK_VARYINGS= (int)35971;
	TRANSFORM_FEEDBACK_BUFFER_START= (int)35972;
	TRANSFORM_FEEDBACK_BUFFER_SIZE= (int)35973;
	TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN= (int)35976;
	MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS= (int)35978;
	MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS= (int)35979;
	INTERLEAVED_ATTRIBS= (int)35980;
	SEPARATE_ATTRIBS= (int)35981;
	TRANSFORM_FEEDBACK_BUFFER= (int)35982;
	TRANSFORM_FEEDBACK_BUFFER_BINDING= (int)35983;
	TRANSFORM_FEEDBACK= (int)36386;
	TRANSFORM_FEEDBACK_PAUSED= (int)36387;
	TRANSFORM_FEEDBACK_ACTIVE= (int)36388;
	TRANSFORM_FEEDBACK_BINDING= (int)36389;
	FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING= (int)33296;
	FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE= (int)33297;
	FRAMEBUFFER_ATTACHMENT_RED_SIZE= (int)33298;
	FRAMEBUFFER_ATTACHMENT_GREEN_SIZE= (int)33299;
	FRAMEBUFFER_ATTACHMENT_BLUE_SIZE= (int)33300;
	FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE= (int)33301;
	FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE= (int)33302;
	FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE= (int)33303;
	FRAMEBUFFER_DEFAULT= (int)33304;
	DEPTH24_STENCIL8= (int)35056;
	DRAW_FRAMEBUFFER_BINDING= (int)36006;
	READ_FRAMEBUFFER= (int)36008;
	DRAW_FRAMEBUFFER= (int)36009;
	READ_FRAMEBUFFER_BINDING= (int)36010;
	RENDERBUFFER_SAMPLES= (int)36011;
	FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER= (int)36052;
	FRAMEBUFFER_INCOMPLETE_MULTISAMPLE= (int)36182;
	UNIFORM_BUFFER= (int)35345;
	UNIFORM_BUFFER_BINDING= (int)35368;
	UNIFORM_BUFFER_START= (int)35369;
	UNIFORM_BUFFER_SIZE= (int)35370;
	MAX_VERTEX_UNIFORM_BLOCKS= (int)35371;
	MAX_FRAGMENT_UNIFORM_BLOCKS= (int)35373;
	MAX_COMBINED_UNIFORM_BLOCKS= (int)35374;
	MAX_UNIFORM_BUFFER_BINDINGS= (int)35375;
	MAX_UNIFORM_BLOCK_SIZE= (int)35376;
	MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS= (int)35377;
	MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS= (int)35379;
	UNIFORM_BUFFER_OFFSET_ALIGNMENT= (int)35380;
	ACTIVE_UNIFORM_BLOCKS= (int)35382;
	UNIFORM_TYPE= (int)35383;
	UNIFORM_SIZE= (int)35384;
	UNIFORM_BLOCK_INDEX= (int)35386;
	UNIFORM_OFFSET= (int)35387;
	UNIFORM_ARRAY_STRIDE= (int)35388;
	UNIFORM_MATRIX_STRIDE= (int)35389;
	UNIFORM_IS_ROW_MAJOR= (int)35390;
	UNIFORM_BLOCK_BINDING= (int)35391;
	UNIFORM_BLOCK_DATA_SIZE= (int)35392;
	UNIFORM_BLOCK_ACTIVE_UNIFORMS= (int)35394;
	UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES= (int)35395;
	UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER= (int)35396;
	UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER= (int)35398;
	OBJECT_TYPE= (int)37138;
	SYNC_CONDITION= (int)37139;
	SYNC_STATUS= (int)37140;
	SYNC_FLAGS= (int)37141;
	SYNC_FENCE= (int)37142;
	SYNC_GPU_COMMANDS_COMPLETE= (int)37143;
	UNSIGNALED= (int)37144;
	SIGNALED= (int)37145;
	ALREADY_SIGNALED= (int)37146;
	TIMEOUT_EXPIRED= (int)37147;
	CONDITION_SATISFIED= (int)37148;
	WAIT_FAILED= (int)37149;
	SYNC_FLUSH_COMMANDS_BIT= (int)1;
	COLOR= (int)6144;
	DEPTH= (int)6145;
	STENCIL= (int)6146;
	MIN= (int)32775;
	MAX= (int)32776;
	DEPTH_COMPONENT24= (int)33190;
	STREAM_READ= (int)35041;
	STREAM_COPY= (int)35042;
	STATIC_READ= (int)35045;
	STATIC_COPY= (int)35046;
	DYNAMIC_READ= (int)35049;
	DYNAMIC_COPY= (int)35050;
	DEPTH_COMPONENT32F= (int)36012;
	DEPTH32F_STENCIL8= (int)36013;
	INVALID_INDEX= (int)-1;
	TIMEOUT_IGNORED= (int)-1;
	MAX_CLIENT_WAIT_TIMEOUT_WEBGL= (int)37447;
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
